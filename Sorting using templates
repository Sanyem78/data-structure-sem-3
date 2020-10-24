#include <iostream>
using namespace std;
template <typename X>
class sorting
{
    public: int size;
            X arr[30];
      sorting()
      {
         cout<<"Enter size of array: "<<endl;
         cin>>size;
         arr[size];
      }
      void input()
      {
          for(int i=0;i<size;i++)
          {
              cout<<"Enter element "<<i+1<<": "<<endl;
              cin>>arr[i];
          }
      }
      void bubble_sort()
      {   X temp;
        cout<<"Applying bubble sort"<<endl;
          for(int i=0;i<size-1;i++)
          {   
              for(int j=0;j<size-1-i;j++)
              {
                   if(arr[j]>arr[j+1])
                   {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                   }
              }
          }
      }
      void selection_sort()
      { X temp;
        cout<<"Applying selection sort"<<endl;
        for(int i=0;i<size-1;i++)
        {
            int min=i;
            for(int j=i+1;j<size;j++)
            {
                if(arr[min]>arr[j])
                {
                    min=j;
                }
            }
                if(min!=i)
                {
                    temp=arr[i];
                    arr[i]=arr[min];
                    arr[min]=temp;
                }
        }
      }
      void insertion_sort()
      {
          cout<<"Applying Insertion sort"<<endl;
          X temp;
          int j;
          for(int i=1;i<size;i++)
          {
              temp=arr[i];
              j=i-1;
              while(j>=0 && arr[j]>temp)
              {
                  arr[j+1]=arr[j];
                  j--;
              }
              arr[j+1]=temp;
          }
      }
      void output()
      {   
          for(int i=0;i<size;i++)
          {
              cout<<arr[i]<<" ";
          }
          cout<<endl;
      }
};
int main()
{   
    int n;
    char ch='n';
    sorting<int> obj;
    obj.input();
    do
    {
    cout<<"1: Bubble sort"<<endl;
    cout<<"2: Selection sort"<<endl;
    cout<<"3: Insertion sort"<<endl;
    cout<<"\nEnter your choice: "<<endl;
    cin>>n;
    switch(n)
    {
        case 1: 
                obj.bubble_sort();
                cout<<"Sorted array is: "<<endl;
                obj.output();
                break;
        case 2:
                obj.selection_sort();
                cout<<"Sorted array is: "<<endl;
                obj.output();
                break;
        case 3:
                obj.insertion_sort();
                cout<<"Sorted array is: "<<endl;
                obj.output();
                break;
        default: 
                cout<<"Invalid input"<<endl;
    }
    cout<<"Do you want to continue?"<<endl;
    cin>>ch;
    }while(ch=='y'||ch=='Y');
    return 0;
}
