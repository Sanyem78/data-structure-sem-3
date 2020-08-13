#include <iostream>

using namespace std;
struct node
{
  public: int data;
          node* next;
};
class linkedlist
{
    private: node* head;
             node* tail;
    public:
    linkedlist()
    {
     head=NULL;
     tail=NULL;
    }
            
             void append(int value)
             {
                node* temp=new node;
                temp->data=value;
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
             void append_at_begin(int value)
             {
                 node* temp=new node;
                 temp->data=value;
                 temp->next=NULL;
                 if(head==NULL)
                 {
                     head=temp;
                     tail=temp;
                     temp=NULL;
                 }
                 else
                 {
                     temp->next=head;
                     head=temp;
                 }
             }
             void display()
             {
                node* ptr=new node;
                ptr=head;
                if(head==NULL)
                {
                    cout<<"list is empty"<<endl;
                }
                else
                {   cout<<"your entered linked list is"<<endl;
                while(ptr!=NULL)
                {
                    cout<<ptr->data<<" "<<endl;
                    ptr=ptr->next;
                }
                }
             }
};
int main()
{
   linkedlist obj;
    int choice,n,n1,flag=1;
 while(flag==1)
 {  cout<<"press 0 for exit"<<endl;
    cout<<"press 1 for displaying list"<<endl;
    cout<<"press 2 for appending list at end"<<endl;
    cout<<"press 3 for appending list at begin"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 0: flag=0;
                break;
        case 1: 
                obj.display();
                break;
        case 2:
                cout<<"enter data "<<endl;
                cin>>n;
                obj.append(n);
                break;
        case 3: cout<<"enter data to insert at begining"<<endl;
                cin>>n1;
                obj.append_at_begin(n1);
                break;
        default: cout<<"invalid input"<<endl;

    }
 }
    return 0;
}
