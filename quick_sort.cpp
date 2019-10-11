#include<iostream>
#include<cstdlib>
using namespace std;

void qsort(int A[],int i,int p,int n)
{

    if(n>1)
    {
        int c=0,l=i,k=(i-1),j,t;
        for(j=i;j<=p;j++)
        {

           if(A[j]>A[p])
            {
                if(c==0)
                {
                    k=j;
                    l=k+1;
                    c++;
                }
                else 
                    l++;
            }

            else if((A[j]<=A[p])&&(c!=0))
            {
                t=A[j];
                A[j]=A[k];
                A[k]=t;
                k++;
                l++;
                if(j==p)
                    p=k-1;
            }
        }

        qsort(A,i,p-1,p-i);
        qsort(A,p+1,l-1,l-k);
    }

}
int main()
{
    int n=10,i,j=0;
    int A[n];

    for(i=n;i>0;i--)
       {  
           A[j]=rand()%10;
           j++;
       }


    qsort(A,0,n-1,n);

    for(i=0;i<n;i++)
        cout<<A[i]<<" ";
    cout<<endl;

    return 0;

}
