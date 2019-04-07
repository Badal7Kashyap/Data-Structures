#include<iostream>
using namespace std;

void f(int *p,int *j,int n)
{
    if(n==1)
        return;

    else{
         int t;
         if((*p)>(*j))
         {
             t=(*p);
             (*p)=(*j);
             (*j)=t;
         }
        j++;
        
        f(p,j,(n-1));


    }
}



int main()
{
   int n,i;
   cout<<"Enter No. of Elements: "<<endl;
   cin>>n;

   int a[n];

   cout<<"Now Enter the Elements: "<<endl;
   
   for(i=0;i<n;i++)
       cin>>a[i];

   int *p,*j;

   for(i=0;i<n;i++)
   {
       p=&a[i];
       j=p+1;
       f(p,j,(n-i));
   }

   for(i=0;i<n;i++)
       cout<<a[i]<<"   ";

   cout<<endl;

   return 0;

}
