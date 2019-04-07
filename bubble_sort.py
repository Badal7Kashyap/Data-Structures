l=[]
n=int(input("Enter no. of elements to be sorted: "))

for i in range(n):
    l.append(int(input("Enter No: ")))

for i in range(n):
     for j in range(i+1,n):
         if(l[i]>l[j]):
              t=l[i]
              l[i]=l[j]
              l[j]=t


print(l)             

