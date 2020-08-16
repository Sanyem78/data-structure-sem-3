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
  ~linkedlist()
    {
        cout<<"deallocating memory"<<endl;
        node* ptr=new node;
        node* temp=new node;
        ptr=head;
        while(ptr!=NULL)
        {
            temp=ptr->next;
            delete ptr;
            ptr=temp;
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
             int no_of_data()
             {
                 int count=0;
                 node* ptr=new node;
                 ptr=head;
                 while(ptr!=NULL)
                 {
                     ptr=ptr->next;
                     count++;
                 }
                 return count;
             }
             void append_in_bwn(int n,int val)
             {
                if(n==1)
                {
                    append_at_begin(val);
                }
                else
                if(n==no_of_data()+1)
                {
                    append(val);
                }
                else
                {
                    node* ptr=new node;
                    node* temp=new node;
                    temp->data=val;
                    temp->next=NULL;
                    ptr=head;
                    int count=1;
                    while(count<n-1)
                    {
                        ptr=ptr->next;
                        count++;
                    }
                    temp->next=ptr->next;
                    ptr->next=temp;
                }
             }
             void del_at_begin()
             {
               if(head==NULL)
               {
                   cout<<"list is empty"<<endl;
               }
               else
               {   cout<<"deleting first item from the begining"<<endl;
                   node* ptr=new node;
                   ptr=head;
                   head=ptr->next;
                   ptr=NULL;
               }
             }
             void del_in_end()
             {
                 if(head==NULL)
                 {
                     cout<<"list is empty"<<endl;
                 }
                 else
                 if(head==tail)
                 {
                     del_at_begin();
                 }
                 else
                 { cout<<"deleting data in the end"<<endl;
                     node* ptr=new node;
                     ptr=head;
                     while(ptr->next->next!=NULL)
                     {
                         ptr=ptr->next;
                     }
                     ptr->next=NULL;
                     tail=ptr;
                 }
             }
             void del_in_bwn(int n)
             {
                if(n==1)
                {
                    del_at_begin();
                }
                else
                if(n==no_of_data())
                {
                    del_in_end();
                }
                else
                {   cout<<"deleting data at n th position"<<endl;
                    int count=1;
                    node* ptr=new node;
                    ptr=head;
                    while(count<n-1)
                    {   
                        ptr=ptr->next;
                        count++;
                    }
                    ptr->next=ptr->next->next;
                }
             }
             void search(int n)
             {  if(head==NULL)
             {
                 cout<<"empty list"<<endl;
             }
             else
             {
                int count=1;
                int flag=0;
                node* ptr=new node;
                ptr=head;
                while(ptr!=NULL)
                {
                    if(ptr->data==n)
                    {
                        cout<<"element found at "<<count<<" position"<<endl;
                        flag=1;
                        break;
                    }
                    else
                    {
                        flag=0;
                    }
                        ptr=ptr->next;
                        count++;
                }
                if(flag==0)
                {
                    cout<<"element not found"<<endl;
                }
                
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
             void reverse()
             {
                  node* current = head; 
                 node *prev = NULL, *n = NULL; 
  
        while (current != NULL) { 
             
            n = current->next; 
  
             
            current->next = prev; 
  
         
            prev = current; 
            current = n; 
        } 
        head = prev; 
             }
             bool isempty()
             {
                 if(head==NULL)
                 {
                     cout<<"list is empty"<<endl;
                     return true;
                 }
                 else
                 {
                     cout<<"list is not empty"<<endl;
                     return false;
                 }
             }
};
int main()
{
   linkedlist obj;
    int pos,choice,n,n1,n2,n3,n4,flag=1;
 while(flag==1)
 {  cout<<"press 0 for exit"<<endl;
    cout<<"press 1 for displaying list"<<endl;
    cout<<"press 2 for appending list at end"<<endl;
    cout<<"press 3 for appending list at begin"<<endl;
    cout<<"press 4 for appending list in between"<<endl;
    cout<<"press 5 for total no. of data present in list"<<endl;
    cout<<"press 6 for deleting data at begining"<<endl;
    cout<<"press 7 for deleting data in the end"<<endl;
    cout<<"press 8 for deleting data in between"<<endl;
    cout<<"press 9 for search an element"<<endl;
    cout<<"pess 10 for reversing the linkedlist"<<endl;
    cout<<"press 11 to check that list is empty or not"<<endl;
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
        case 4: cout<<"enter the position where you want to insert the data"<<endl;
                cin>>pos;
                cout<<"enter the data you want to insert"<<endl;
                cin>>n2;
                obj.append_in_bwn(pos,n2);
                break;
        case 5: cout<<obj.no_of_data()<<endl;
                break;
        case 6:
                obj.del_at_begin();
                break;
        case 7:
                obj.del_in_end();
                break;
        case 8: 
              cout<<"enter the position where you want to delete the data"<<endl;
              cin>>n3;
              obj.del_in_bwn(n3);
              break;
        case 9:
              cout<<"enter the element you want to search"<<endl;
              cin>>n4;
              obj.search(n4);
              break;
        case 10:
              cout<<"reversing the following linkedlist"<<endl;
              obj.reverse();
              obj.display();
              break;
        case 11:
              obj.isempty();
              break;
        default: cout<<"invalid input"<<endl;
    }
 }
    return 0;
}
