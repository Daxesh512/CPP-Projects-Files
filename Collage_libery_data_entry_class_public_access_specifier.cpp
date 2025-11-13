#include<iostream>
using namespace std;

class college{
  public: 
   char student_name[10];
   int  book_code;
   char book_name[20];
   
};

void u (){
  cout <<"\n";  
};

int main (){
   
     int i=1,j=1;
     char p1,y='y';
     
     
     class college bca;
     if(i==j){
         cout <<"libery book data entry\n";
         u();
         cout <<"Student name : \n";
         cin >>bca.student_name;
         u();
         cout <<"Book code : \n";
         cin >>bca.book_code;
         u();
         cout <<"Book name : ";
         cin >>bca.book_name;
         u();
         
        cout <<"Do you want to print your book recipt ? (type y or n )";
        cin >>p1;
        u();
        
        if(y==p1) 
        {
          
          cout <<"Student name : "<<bca.student_name;
          u();
          cout <<"Book code : " <<bca.book_code;
          u();
          cout <<"Book name : "<<bca.book_name;
               u();
            
          
        }
     };
 
     
  return 0;  
};