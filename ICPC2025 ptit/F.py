def main():
    t = int(input())
    while t > 0:
        a = int(input())
        b = int(input())
        from math import gcd
        print(gcd(a, b))
        t -= 1
if __name__ == "__main__":
    main()