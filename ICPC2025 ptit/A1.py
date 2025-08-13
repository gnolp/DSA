from math import gcd

def normalize(a, b, c):
    g = gcd(gcd(abs(a), abs(b)), abs(c))
    a //= g
    b //= g
    c //= g
    if a < 0 or (a == 0 and b < 0):
        a, b, c = -a, -b, -c
    return (a, b, c)

def main():
    n = int(input())
    points = [tuple(map(int, input().split())) for _ in range(n)]

    total = n * (n - 1) * (n - 2) // 6
    colinear_triplets = 0

    for i in range(n):
        line_map = {}
        for j in range(i + 1, n):
            x1, y1 = points[i]
            x2, y2 = points[j]

            A = y2 - y1
            B = x1 - x2
            C = -(A * x1 + B * y1)

            key = normalize(A, B, C)

            if key not in line_map:
                line_map[key] = 1
            else:
                colinear_triplets += line_map[key]
                line_map[key] += 1

    print(total - colinear_triplets)
if __name__ == "__main__":
    main()