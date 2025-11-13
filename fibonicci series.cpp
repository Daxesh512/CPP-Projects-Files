#include <iostream>
using namespace std;

int main()
{

int num,i,a,b,c;
  
   a=0;
   b=1;
   c=0;

   cout<<"Enter an integer :";
   cin>>num;

  for(i=1; i<=num; i++ )
    {
    c=a+b;
    cout<<"\n"<<c;
    
    a=b;
    b=c;
    
    }
    
   return 0;
}
    