#include "MU_Person.h"


class student:public MU_person{
private:
          double gpa; 
	
public:
    student(long=111 ,double=2.5,string="Nattawut");
    ~student();
    void display(); // display_person
   
};

student::student(long i, double g,string s):MU_person(i,s){ //ส่งข้อมูลให้ MU_person (id, name)
// Finish constructor to set all values
  //id=i;      //ถ้ามีส่งข้อมูลแล้วไม่ต้องเขียนซ้ำ
  //name=s;
  gpa=g;
  cout<<"MU student constructor  "<<gpa<<endl;
         
  
}
student::~student(){
     cout<<"-------"<<endl;
     cout<<"student destructor "<<gpa<<endl; 
}


void student::display(){
  display_person();
  cout<<"GPA: "<<gpa<<endl;
  //Finish Display function
}
