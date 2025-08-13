test = int(input())

def multiply_matrices(a, b, mod):
    result = [[0, 0, 0], [0, 0, 0], [0, 0, 0]]
    for i in range(3):
        for j in range(3):
            for k in range(3):
                result[i][j] = (result[i][j] + a[i][k] * b[k][j]) % mod
    return result
def matrix_power(matrix, n, mod):
    result = [[1, 0, 0], [0, 1, 0], [0, 0, 1]]
    while n > 0:
        if n % 2 == 1:
            result = multiply_matrices(result, matrix, mod)
        matrix = multiply_matrices(matrix, matrix, mod)
        n //= 2
    return result

def tesla(n, mod):
    if n <= 3:
        return n % mod 
    base = [[1,2,3], [1,0,0], [0,1,0]]
    result = matrix_power(base, n - 3, mod)
    return (result[0][0] * 3 + result[0][1] * 2 + result[0][2] * 1) % mod

while test > 0:
    test -= 1
    n,mod = map(int, input().split())
    print(tesla(n, mod))