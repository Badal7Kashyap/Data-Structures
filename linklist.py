ll=[]
i=0
while i<5:
    c=int(input("Press 1-Insert 2-Remove 3-Replace 4-Search 5-Show List 6-Exit= "))
    if c==1:
        d=int(input("Enter Data= "))
        p=int(input("Enter Position= "))
        ll.insert(p,d)

    elif c==2:
        try:
            d=int(input("Enter Element to be Remove= "))
            ll.remove(d)
        except ValueError:
            print("Element not found")

    elif c==3:
        d=int(input("Enter New Data= ")) 
        p=int(input("Now Enter Position= "))
        ll.pop(p)
        ll.insert(p,d)

    elif c==4:
        try:
            d=int(input("Enter Data to be Search= "))
            p=ll.index(d)
            print("Data found at Position ",p)
        except ValueError:
            print("Data not Found")

    elif c==5:
        print(ll)

    elif c==6:
        break

            

