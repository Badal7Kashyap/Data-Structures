#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
  int data;
  node *l;
  node *r;
};

node *insert(node *,int);
node *remove(node *,int);
void pre(node *);
void in(node *);
void post(node *);
int main()
{
  node *p;
  p=NULL;

  int c,d,i;
    
  while(1)
  {
	cout<<endl;  
    cout<<"Press 1-Insert 2-Display 3-Remove 4-Exit"<<endl;  
    cin>>c;
     switch(c)
     {
         case 1:
           cout<<"Enter Data : ";
           cin>>d;
           p=insert(p,d);
           cout<<"Data stored succesfully"<<endl;
           break;

         case 2:
           cout<<"Press 1-Preorder 2-Inorder 3-Postorder :"<<endl;
		   cin>>i;
           if(i==1)
               pre(p);
           else if(i==2)
               in(p);
           else if(i==3)
               post(p);
           else 
               cout<<"Wrong Input"<<endl;
               
            break;

         case 3:
		   cout<<"Enter Data to be Removed: ";
		   cin>>d;
		   p=remove(p,d);
		   cout<<"Data Removed Successfully"<<endl;
		   break;
         case 4:
            exit(0);
         
         default:
            cout<<"Wrong input"<<endl;
     } 
  }
    
}


node *insert(node *p,int d)
{
  
  if(p==NULL)
   {
    p=new node;
    p->data=d;
    p->l=NULL;
    p->r=NULL;
   }

   else if((d<p->data)||(d==p->data))
      p->l=insert(p->l,d);

  else
      p->r=insert(p->r,d);
       
  return (p);

}

void pre(node *p)
{
  if(p==NULL)
     return; 

  cout<<p->data<<" ->";
  pre(p->l);
  pre(p->r);
}

void in(node *p)
{
  if(p==NULL)
    return;

  in(p->l); 
  cout<<p->data<<" ->";
  in(p->r); 
}


void post(node *p)
{
   if(p==NULL)
     return;

    post(p->l);
    post(p->r);
    cout<<p->data<<" ->"; 
}


node *remove(node *p,int d)
{
 node* temp;	
	if(p->data==d)
	{
      
		if((p->l==NULL)&&(p->r==NULL))
		{
			delete p;
		    return NULL;	
		}	

		else if(p->l==NULL)
		{
          temp=p->r; 			
		  delete p;
		  return temp;
        }  

		else if(p->r==NULL)
		{
             temp=p->l;
             delete p;
             return temp;
        }

		else 
		{
	    	node *gpar,*par,*c;
			  int i=0;

            gpar=p;
		    par=gpar->l;
			c=par->r;

			while(c!=NULL)
			{
			  i++;	
		      gpar=par;
	  		  par=c;
              c=c->r;
            }
            if(i==0)
            gpar->l=par->l;
			else
			gpar->r=par->l;

			p->data=par->data;
            delete par;
       		
			return p;
		}	

    }		


  else if(d<=p->data)
  p->l=remove(p->l,d);

  else if(d>p->data)
  p->r=remove(p->r,d);

   

}  










	

