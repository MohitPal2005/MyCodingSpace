'''     \\\\\              Character to number conversion    \\\\             '''

b=input("Enter a string:")
n=[ord(a) for a in b]
print(f"The number conversion of your string is {n}")

'''     \\\\\              Print All numbers 1 to 100    \\\\             '''
 
i=1
while i<=100:
    print(i,end=" ")
    i+=1

'''     \\\\\             Calculate nth Fabonacci numberds    \\\\             '''

n=int(input("\nenter number:"))
a,b=0,1
for i in range(n):
    print(a,end=" ")
    a,b=b,a+b

'''     \\\\\              set operations    \\\\             '''

a={1,2,3,5,4}
b={3,5,4}
c=a.intersection(b)
print(c)
d=a.union(b)
print(d)
e=a.difference(b)
print(e)

'''     \\\\\              Base conversion           \\\\             '''

def base_conversion(n,b):
    a=""
    while n>0:
        r=n%b
        if r<10 : 
            a+=str(r)
        else :
            a += chr(55+r)  
        n//=b
    return a[::-1]
n=int(input("Enter number:"))
b=int(input("Enter base(2 to 16):"))
print(base_conversion(n,b))

def binary_to_decimal(b):
    a=reversed(b)
    d=0
    p=0
    for i in a:
        d+=int(i)*(c**p)
        p+=1
    return d
b=input("Ebter binary:")
c=int(input("Enter base(2 to 16):"))
print(binary_to_decimal(b))



def anybase_to_decimal(a):
    b=input("Enter base:")
    deci=int(a,int(b))
    return deci
a=input("Enter string:")
print(anybase_to_decimal(a))


def palindrome(b):
    if all(a in "01" for a in b ):
        return b[::-1]
    else:
        print("Invalid Binary")
b=input("Enter string:")
d=palindrome(b)
if b==d:
    print("String is palindrome")
else:
    print("String is not palindrome")

# /////////////////                      Define a Function To Count Number of Digits              ////////////////



import numpy as np

# Input for the first matrix
n = int(input("Enter Number of Rows For First Matrix: "))
m = int(input("Enter Number of Columns For First Matrix: "))
a = []
for i in range(1, n + 1):
    l = []
    for j in range(1, m + 1):
        z = int(input(f"Enter Row {i} Element {j}: "))
        l.append(z)
    a.append(l)
b = np.array(a)

# Input for the second matrix
x = int(input("Enter Number of Rows For Second Matrix: "))
y = int(input("Enter Number of Columns For Second Matrix: "))
c = []
for i in range(1, x + 1):
    l = []
    for j in range(1, y + 1):
        z = int(input(f"Enter Row {i} Element {j}: "))
        l.append(z)
    c.append(l)
d = np.array(c)

# Check if multiplication is possible
if m == x:
    mat_mul = []
    for i in range(n):  # Number of rows of the first matrix
        mat = []
        for j in range(y):  # Number of columns of the second matrix
            mul = sum(b[i][k] * d[k][j] for k in range(m))  # Dot product
            mat.append(mul)
        mat_mul.append(mat)
    print("Resultant Matrix after Multiplication:")
    print(np.array(mat_mul))
else:
    print("Matrix Multiplication is not possible.")
