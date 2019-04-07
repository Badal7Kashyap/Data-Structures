#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
  int data;
  node *link;
};

node *insert(node *,int);
node *remove(node *,int);
void display(node *);

int main()
{
  int c,d;
  node *p;
  p=NULL;   
  
  while(1)
 { 
  cout<<"Press 1-Insert 2-Display 3-Remove 4-Exit"<<endl;
  cin>>c;

  switch(c)
  {
   case 1:
       cout<<"Enter Data"<<endl;
       cin>>d;
       p=insert(p,d);
       cout<<"Data stored successfully"<<endl;
       break;

   case 2:    
       cout<<"Showing Data"<<endl;
       display(p);
       break;

   case 3:
	   	cout<<"Enter Data to be Removed"<<endl;
        cin>>d;
        p=remove(p,d);
        break;

   case 4:
       exit(0);


    default:
       cout<<"Wrong Input"<<endl;

  }

}  
 
}

 node *insert(node *p,int d)
{
  if(p==NULL)
  {
    p=new node;
    p->data=d;
    p->link=NULL;
  }

  else
       p->link=insert(p->link,d);


  return(p);
}


void display(node *p)
{
  
  while(p!=NULL)
  {
    
   cout<<p->data<<" -> ";
   p=p->link;
  }
  
  cout<<endl;
}



node *remove(node *p,int d)
{
  
  if(p->data==d)
   { 
     node *temp;
     temp=p->link;
     delete p;
     p=temp;
   }
  

   else 
     p->link=remove(p->link,d);

  return(p);
}





