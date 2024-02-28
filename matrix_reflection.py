from random import randint
print("Введите размер матрицы:")
n = int(input())
print("\n")
print("Исходная матрица:")
a = [[randint(1, 10) for j in range(n)] for i in range(n)]
for r in a:
    print("\t".join([str(c) for c in r]))
print("\n")
for j in range(1,n):
    for i in range(1,n):
        if((i < n / 2 and (i < j and j < n - i - 1)) or (i > n / 2 and (j < i and j > n - i - 1))):
            
            a[i][j],a[n-i-1][j]=a[n-i-1][j],a[i][j]
            
            
            
for j in range(1,n):
    for i in range(1,n):
        if((j < n / 2 and (j < i and i < n - j - 1)) or (j > n / 2 and (i < j and i > n - j - 1))):
            
            a[i][j],a[i][n-j-1]=a[i][n-j-1],a[i][j]
            
print("Выходная матрица:")
for r in a:
    print("\t".join([str(c) for c in r]))