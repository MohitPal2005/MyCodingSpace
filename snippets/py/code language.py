
# This convert your Message into code language
# At the end also decode the Message


import string
import random

r=[]
for i in range(3):
    b=random.choice(string.ascii_letters)
    r.append(b)
r=''.join(r)

s=[]
for i in range(3):
    b=random.choice(string.ascii_letters)
    s.append(b)
s=''.join(s)

a=input("Enter Your Code:")
l=[]
for i in a.split(" "):
    l.append(i)

z=[]
for i in l:
    if len(i)<3:
        b=i[::-1]
        z.append(b+" ")
    else:
        i=list(i)
        p=i[-1]
        i.remove(i[-1])
        i.insert(0,p)
        i.insert(0,r)
        i.insert(len(i),s)
        f=''.join(i)
        z.append(f+" ")
y=''.join(z)
print(y)

m=[]
for i in z:
    if len(i)>=4:
        w=''.join(i[4:-4]+i[3])
        m.append(w)
    elif len(i)<4:
        m.append(i[::-1]+" ")
print(''.join(m))