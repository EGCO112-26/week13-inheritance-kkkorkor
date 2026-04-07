#include <iostream>
#include "student.h"
#include <cstdlib>
#include <string>
#include "NODE.h"

using namespace std;

int main(int argc, char* argv[]){
  NODE* head = NULL;
  
  for(int i=1; i<argc; i+=3){
    
    int id = atoi(argv[i]);
    double gpa = atof(argv[i+1]);
    string name = argv[i+2];

    cout << "adding " << id << endl;

    student* p = new student(id, gpa, name);
    NODE* n = new NODE(p);
    n->insert(head);
  }
  

  

	//student m1(6613121,2,"Vivi"),m2(112),m3;
  //m1.display();
  //student m1(6613118,3.9,"Atom");
  //student m2(6613112),m3,*p;
  //m1.display(); // id gpa name
  std::cout<<endl<<"======="<<endl;
  //m1.display_person(); //id

  //p=new student(6613265,1.7,"Hok");
  //delete p;
  
  return 0;
  }

// Add constructor --> set name 
// modify display() -->id/name/gpa
