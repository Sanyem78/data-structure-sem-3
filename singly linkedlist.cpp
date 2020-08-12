#include <iostream>
using namespace std;
struct node
{
  public:
      int data;
      node* next;
};
class link
{ private:
           node* head;
           node* tail;
    
  public:
  link()
  {
      head=NULL;
      tail=NULL;
  }
           void append(int n)
            { 
                node* temp=new node;
                temp->data=n;
                temp->next=NULL;
            if(head==NULL)
            {
              head=temp;
              tail=temp;
              temp=NULL;
            }
            else
            {   
                tail->next=temp;
                tail=temp;
            }
        
            }
            void display()
            {
                node* ptr=new node;
                ptr = head;
                while (ptr != NULL) 
            {
                cout<< ptr->data <<" ";
                ptr = ptr->next;
            }
            }
};
int main()
{
    link obj;
    int choice,n,flag=1;
 while(flag==1)
 {
    cout<<"press 1 for appending list"<<endl;
    cout<<"press 2 for displaying list"<<endl;
    cout<<"press 3 for exit"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1: cout<<"enter data "<<endl;
                cin>>n;
                obj.append(n);
                break;
        case 2: cout<<"your entered linked list is"<<endl;
                obj.display();
                break;
        case 3: flag=0;
                break;
        default: cout<<"invalid input"<<endl;

    }
 }
    return 0;
}

