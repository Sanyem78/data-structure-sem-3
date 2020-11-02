#include <iostream>
using namespace std;
class lowertm
{
    public:
          int arr[10];
          void store(int ele,int a,int b)
          { 
             if(a<1||b<1||a>10||b>10)
             {
                 cout<<"Array out of index"<<endl;
             }
             else
             {
             arr[(b*(b-1))/2+a]=ele;   
             }
          }
          void show(int n)
          {
              for(int i=1;i<=n;i++)
              {
                  for(int j=1;j<=n;j++)
                  {
                      if(i<=j)
                      {
                          cout<<arr[(j*(j-1))/2+i]<<"  ";
                      }
                      else
                      {
                          cout<<"0"<<"  ";
                      }
                  }
                  cout<<endl<<endl;
              }
          }
          int retrieve(int i,int j,int n)
          {
              if(i<=j&&i<=n&&j<=n)
              {
                  return arr[(j*(j-1))/2+i];
              }
              else 
              if(i<1||j<1||i>n||j>n)
              {
                cout<<"Invalid row and column input"<<endl;
                exit(0);
              }
              else 
              {
                  return 0;
              }
          }
};
int main()
{   
    int n,ele,i,j,a,b;
    lowertm d;
    cout<<"Enter no. of rows and columns in square matrx "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    { 
        for(j=1;j<=n;j++)
        {  if(j>=i)
        {
            cout<<"Enter element of lower traingular matrix of index ("<<i<<","<<j<<")"<<endl;
            cin>>ele;
            d.store(ele,i,j);
        }
        }
    }
    cout<<"Your entered lower traingular matrix is: "<<endl;
    d.show(n);
    cout<<"Enter row from which u want to retrieve the element: "<<endl;
    cin>>a;
    cout<<"Enter column from which u want to retrieve the element: "<<endl;
    cin>>b;
    cout<<"Retrieved element is: "<<d.retrieve(a,b,n)<<endl;
    return 0;
}
