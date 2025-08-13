
def matrix_power(matrix, n, mod):
    result = [[1, 0], [0, 1]]
    while n > 0:
        if n % 2 == 1:
            result = [[(result[0][0] * matrix[0][0] + result[0][1] * matrix[1][0]) % mod,
                       (result[0][0] * matrix[0][1] + result[0][1] * matrix[1][1]) % mod],
                      [(result[1][0] * matrix[0][0] + result[1][1] * matrix[1][0]) % mod,
                       (result[1][0] * matrix[0][1] + result[1][1] * matrix[1][1]) % mod]]
        matrix = [[(matrix[0][0] * matrix[0][0] + matrix[0][1] * matrix[1][0]) % mod,
                    (matrix[0][0] * matrix[0][1] + matrix[0][1] * matrix[1][1]) % mod],
                   [(matrix[1][0] * matrix[0][0] + matrix[1][1] * matrix[1][0]) % mod,
                    (matrix[1][0] * matrix[0][1] + matrix[1][1] * matrix[1][1]) % mod]]
        n //= 2
    return result


def fibonacci(n, mod):
    if n == 0:
        return 0
    base = [[1, 1], [1, 0]]
    reult = matrix_power(base, n - 1, mod)
    return reult[0][0]
test = int(input())
while test > 0:
    test -= 1
    n, mod = map(int, input().split())
    print(fibonacci(n+1, mod))