

#include<iostream>
using namespace std;

struct collage {
   int roll_no;
   char name[10];
   int age;
   char course[20];

} student1, student2 , student3 , student4 , student5;

 void u(){
     
     cout <<endl;
     
 }; 
int main()
{
    
    char p1,p2,y='y',n='n';
    
    
    //First student data 
    cout <<"Enter first student roll_no :";
    cin >>student1.roll_no;
    
    u();
    
    cout<<"Enter first student name :";
    cin>>student1.name;
    
    u();
    
    cout<<"Enter first student age :";
    cin >>student1.age;
    
    u();
    
    cout <<"Enter first course name :";
    cin >>student1.course;
    
    u();
    
    //Second student data 
    cout <<"Enter Second student roll_no :";
    cin >>student2.roll_no;
    
    u();
    
    cout<<"Enter second student name :";
    cin>>student2.name;
    
    u();
    
    cout<<"Enter second student age :";
    cin >>student2.age;
    
    u();
    
    cout <<"Enter second course name :";
    cin >>student2.course;
    
    u();
    
    //third student data 
    cout <<"Enter third student roll_no :";
    cin >>student3.roll_no;
    
    u();
    
    cout<<"Enter third student name :";
    cin>>student3.name;
    
    u();
    
    cout<<"Enter third student age :";
    cin >>student3.age;
    
    u();
    
    cout <<"Enter third course name :";
    cin >>student3.course;

     u();

        //Forth student data 
    cout <<"Enter Forth student roll_no :";
    cin >>student4.roll_no;
    
    u();
    
    cout<<"Enter Forth student name :";
    cin>>student4.name;
    
    u();
    
    cout<<"Enter fourth student age :";
    cin >>student4.age;
    
    u();
    
    cout <<"Enter fourth course name :";
    cin >>student4.course;

   u();

       //fiveth student data 
    cout <<"Enter fiveth student roll_no :";
    cin >>student5.roll_no;
    
    u();
    
    cout<<"Enter fiveth student name :";
    cin>>student5.name;
    
    u();
    
    cout<<"Enter fiveth student age :";
    cin >>student5.age;
    
    u();
    
    cout <<"Enter fiveth course name :";
    cin >>student5.course;
    
    u();

 cout << "Do want to check your enter data ? \n ( type yes or no): \n"; 
 cin >> p1;
 u();
 if(y==p1)
  {
  
  cout << "Do you want to print your student enter data ? \n (type y or no ) ";   
  cin >>p2;
  u();
 
     if(y==p2)
     {
       cout <<"-------------------------------------------------------";
       u();
       cout <<"First student roll_no : "<<student1.roll_no<<endl<<"Name : "<<student1.name<<endl<<"Age : "<<student1.age<<endl<<" course :"<<student1.course<<endl;
       cout <<"Second student roll_no : "<<student2.roll_no<<endl<<"Name : "<<student2.name<<endl<<"Age : "<<student2.age<<endl<<" course :"<<student2.course<<endl;
       u();
       cout <<"third student roll_no : "<<student3.roll_no<<endl<<"Name : "<<student3.name<<endl<<"Age : "<<student3.age<<endl<<" course :"<<student3.course<<endl;
       u();
       cout <<"fourth student roll_no : "<<student4.roll_no<<endl<<"Name : "<<student4.name<<endl<<"Age : "<<student4.age<<endl<<" course :"<<student4.course<<endl;
        u();
       cout <<"fiveth student roll_no : "<<student5.roll_no<<endl<<"Name : "<<student5.name<<endl<<"Age : "<<student5.age<<endl<<" course :"<<student5.course<<endl;
    cout <<"-------------------------------------------------------";
     };
     
   
 };



    return 0;
}
