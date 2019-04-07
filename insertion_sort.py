
n=int(input("Enter the no. of element to be Sorted: "))
l=[]
for i in range(n):
    l.append(int(input("Enter Element: ")))


for i in range(1,n):
    j=i-1
    k=l[i]

    while((j>=0)and(l[j]>k)):
        l[j+1]=l[j]
        l[j]=k
        j-=1

print(l)        

