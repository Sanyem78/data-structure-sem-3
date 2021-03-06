#include <iostream>
using namespace std;

template <typename X>
class linkedlist
{   struct node
{
  public: X data;
          node* next;
};
    private: node* head;
             node* tail;
    public:
    int pos;
     X n,n1,n2,n3,n4;
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
   }
             void append()
             {  cout<<"enter data "<<endl;
                cin>>n;
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
             void append_at_begin()
             {   cout<<"enter data to insert at begining"<<endl;
                cin>>n1;
                 node* temp=new node;
                 temp->data=n1;
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
             void append_in_bwn()
             {  cout<<"enter the position where you want to insert the data"<<endl;
                cin>>pos;
                cout<<"enter the data you want to insert"<<endl;
                cin>>n2;
                if(pos==1)
                {
                    append_at_begin();
                }
                else
                if(pos==no_of_data()+1)
                {
                    append();
                }
                else
                {
                    node* ptr=new node;
                    node* temp=new node;
                    temp->data=n2;
                    temp->next=NULL;
                    ptr=head;
                    int count=1;
                    while(count<pos-1)
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
             void del_in_bwn()
             {      cout<<"enter the position where you want to delete the data"<<endl;
                 cin>>n3;
                if(n3==1)
                {
                    del_at_begin();
                }
                else
                if(n3==no_of_data())
                {
                    del_in_end();
                }
                else
                {   cout<<"deleting data at n th position"<<endl;
                    int count=1;
                    node* ptr=new node;
                    ptr=head;
                    while(count<n3-1)
                    {   
                        ptr=ptr->next;
                        count++;
                    }
                    ptr->next=ptr->next->next;
                }
             }
             void search()
             {   cout<<"enter the element you want to search"<<endl;
              cin>>n4;
                 if(head==NULL)
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
                    if(ptr->data==n4)
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
             {  node* ptr=new node;
             node* temp=new node;
                 if (!isempty())
	{
		ptr = head->next;
		head->next = NULL;
		tail = head;
		while (ptr != NULL)
		{
			temp = ptr;
			ptr = ptr->next;
			temp->next = head;
			head = temp;
		}
		
	}

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
                  void operator +(linkedlist<X> list)
             {
                 tail->next=list.head;
                 tail=list.tail;
                 display();
             }
             
            
            
};
int main()
{   int n=0;
   linkedlist<int> obj;
   linkedlist<int> obj1;
    int choice,flag=1;
   
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
    cout<<"press 12 to create new list and concatenate with previous list"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 0: flag=0;
                break;
        case 1: 
                obj.display();
                break;
        case 2:
            
                obj.append();
                break;
        case 3: 
                obj.append_at_begin();
                break;
        case 4: 
                obj.append_in_bwn();
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
              
              obj.del_in_bwn();
              break;
        case 9:
             
              obj.search();
              break;
        case 10:
              cout<<"reversing the following linkedlist"<<endl;
              obj.reverse();
              obj.display();
              break;
        case 11:
              obj.isempty();
              break;
        case 12:
              cout<<"press 1 for append new list and 2 to stop appending"<<endl;
              cin>>n; 
              while(n!=2)
              {
              obj1.append();
              cout<<"press 1 for append new list and 2 to stop appending"<<endl;
              cin>>n; 
              }
              obj1.display();
              cout<<"concatng new list with previous list"<<endl;
              obj+obj1;
              break;
        default: cout<<"invalid input"<<endl;
    }
 }
    return 0;
}
