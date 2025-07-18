
# You add the books and show in your Library


class Library:
    def __init__(self):
        self.num_book=0
        self.books=[]
        
    def add(self):
        while True:
            s=input("Do you want to add Book in list?\nFor yes Press 1 and 0 for Stop:")
            if s=="1":
                a=input("Enter book name:")
                self.books.append(a)
                self.num_book+=1
            elif s=="0":
                print("List of the books:",self.books)
                print("Total no. of books:",self.num_book)
                print("Length of the list:",len(self.books))
                break
a=Library()
a.add()

