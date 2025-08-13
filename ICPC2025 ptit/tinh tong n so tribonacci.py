mod = int(1e15 + 7)

def matrix_mult(a,b):
    size = len(a)
    c = [[0] * size for _ in range(size)]
    for i in range(size):
        for j in range(size):
            for k in range(size):
                c[i][j] = (c[i][j] + a[i][k] * b[k][j]) % mod
    return c
def matrix_power(matrix, n):
    size = len(matrix)
    result = [[1 if i == j else 0 for j in range(size)] for i in range(size)]
    while n > 0:
        if n % 2 == 1:
            result = matrix_mult(result, matrix)
        matrix = matrix_mult(matrix, matrix)
        n //= 2
    return result
def tribonacci_sum(n):
    if n == 1:
        return 1
    elif n == 2:
        return 2+1
    elif n == 3:
        return 3 + 2 + 1
    base = [
        [1, 1, 1, 0], # t(n) = t(n-1) + t(n-2) + t(n-3)
        [1, 0, 0, 0],
        [0, 1, 0, 0],
        [1, 1, 1, 1] # s(N) = s(n-1) + t(n)
    ]
    temp = [3, 2, 1, 6]
    result = matrix_power(base, n - 3)
    Sn = sum(result[3][i] * temp[i] for i in range(4)) % mod
    return Sn
def main():
    test = int(input())
    while test > 0:
        test -= 1
        n = int(input())
        print(tribonacci_sum(n))
if __name__ == "__main__":
    main()
    