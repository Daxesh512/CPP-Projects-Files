#include <iostream>
using namespace std;
void underline(){

cout<<"\n\n-----------------------------------------\n";

};


int main()
{

struct{
	int ID;
	string name;
	string course;
	
	} student1,student2,student3;
	
	cout<<"Submit First Student Details : \n";
 underline();
   cout<<"Enter Student ID : ";
   cin>>student1.ID;

	cout<<"Enter Name  ";
	 cin>>student1.name;
	 
	 cout<<"Course :";
	cin>>student1.course;


  //geting secound student details


  underline();

    cout<<"Enter Secound Student Details : \n";

   cout<<"Enter Student ID : ";
   cin>>student2.ID;

	cout<<"Enter Name : ";
	 cin>>student2.name;
	 
	 cout<<"Course :";
	cin>>student2.course;

   //get third student details 

underline();
    cout<<"Enter Third Student Details : \n";

   cout<<"Enter Student ID : ";
   cin>>student3.ID;

	cout<<"Enter Name  ";
	 cin>>student3.name;
	 
	 cout<<"Course :";
	cin>>student3.course;	

underline();

cout<<"\n\nYour Submited Data "<<endl;

underline();

cout<<"Student First \n";

cout<<"\nStudent ID : "<<student1.ID;

cout<<"\nStudent name : "<<student1.name;

cout<<"\nCourse : "<<student1.course;

 underline();
cout<<"\nStudent Second\n ";

cout<<"\nStudent ID : "<<student2.ID;

cout<<"\nStudent name : "<<student2.name;

cout<<"\nCourse : "<<student2.course;
underline();

cout<<"\nStudent Third\n ";
cout<<"\nStudent ID : "<<student3.ID;

cout<<"\nStudent name : "<<student3.name;

cout<<"\nCourse : "<<student3.course;

cout<<"\n\n";

	return 0;
}
    