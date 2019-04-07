#include<iostream>
using namespace std;
int main()
{
  int i,j,k,n;
  cout<<"           Insertion Sort\n\n"<<endl;
  cout<<"Enter no. of Elements to be sorted: "<<endl;
  cin>>n;
  int a[n];
  cout<<"Now enter the Elements: "<<endl;
  
  for(i=0;i<n;i++)
    cin>>a[i];

  for(i=1;i<n;i++)
  {
       
       j=i-1;
       k=a[i];
      while((k<a[j])&&(j>=0))
      {
          a[j+1]=a[j];
          a[j]=k;
          j--;
        
      }
  }
   for(i=0;i<n;i++)
   cout<<a[i]<<"  ";
   cout<<endl;
   return 0;
}
