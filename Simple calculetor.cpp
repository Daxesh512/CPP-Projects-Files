#include <iostream>
using namespace std;
int main()

{
int a,b;
char c;

cout<<"Enter first number : ";
cin>>a;

cout<<"Enter operation number : ";
cin>>c;

cout<<"Enter second number : ";
cin>>b;


switch(c)
{

case '+':
cout<<"Result : "<<a+b;
break;

case '-':
cout<<"Result : "<<a-b;
break;


case '*':
cout<<"Result : "<<a*b;
break;

case '%':
cout<<"Result : "<<a%b;
break;

case '/':
cout<<"Result : "<<a/b;
break;

default:

cout<<"Unable to perform ";

}
   return 0;
}
    