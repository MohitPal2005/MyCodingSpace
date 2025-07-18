# Snake Water Gun Game

import random
n=random.randint(0,2)

l=["snake","Water","Gun"]

a=int(input("Enter 0 for Snake,1 for Water and 2 for Gun:"))

print(f"Your choice is {l[a]}\n")
print(f"Computer choose {n} means {l[n]}\n")

if a==0 and n==1 or a==1 and n==2 or a==2 and n==0:
    print("Congratulations You Won the Game")
elif a==0 and n==2 or a==1 and n==0 or a==2 and n==1:
    print("You Lose the Game, Better luck Next time")
elif a==n:
    print(f"It's Draw, Better luck Next time")
