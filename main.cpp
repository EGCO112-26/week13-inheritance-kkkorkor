#include <iostream>
#include "student.h"
#include <cstdlib>
#include <string>
#include "LL.h"

using namespace std;

int main(int argc, char* argv[]){
  LL l;
  
  for(int i=1; i<argc; i+=3){

    int id = atoi(argv[i]);
    double gpa = atof(argv[i+1]);
    string name = argv[i+2];
    

    cout << "adding " << id << endl;

    student* p = new student(id, gpa, name);
    l.add_node(p);
  }

  cout<<endl;
  l.show_all();

  cout<<endl;
  

	//student m1(6613121,2,"Vivi"),m2(112),m3;
  //m1.display();
  //student m1(6613118,3.9,"Atom");
  //student m2(6613112),m3,*p;
  //m1.display(); // id gpa name
  //m1.display_person(); //id
  //p=new student(6613265,1.7,"Hok");
  //delete p;


  return 0;
  }

// Add constructor --> set name 
// modify display() -->id/name/gpa
