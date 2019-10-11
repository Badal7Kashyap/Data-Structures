#include<iostream>
using namespace std;

void mer(int A[],int n,int a1[],int a2[])
{
  int i,j=0,k=0;
  
  for(i=0;i<n;i++)
  {
      if(j==(n/2)){
          A[i]=a2[k];
          k++;}
      else if(k==(n-n/2)){
          A[i]=a1[j];
          j++;}
      else if(a1[j]<=a2[k]){
          A[i]=a1[j];
          j++;}
      else{
          A[i]=a2[k];
          k++;}
      
  }
}

void dv(int A[],int n)
{
  if(n>1)
  {
    int mid=(n/2),i,j=0;
    int a1[(n/2)],a2[(n-mid)];

    for(i=0;i<mid;i++)
      { a1[j]=A[i];
          j++;}
    j=0;
    for(i=mid;i<n;i++)
      { a2[j]=A[i];
        j++;}

    dv(a1,mid);
    dv(a2,(n-mid));
    
    mer(A,n,a1,a2);
    
  }
      
}
int main()
{
    int n=100000,i,j=0;
    int A[n];

    for(int i=n;i>0;i--)
     { A[j]=i; j++; }

    dv(A,n);

    for(i=0;i<n;i++)
        cout<<A[i]<<" ";
    cout<<endl;

    return 0;

}
