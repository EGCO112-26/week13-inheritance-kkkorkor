#include "Thai_person.h"

class MU_person:public Thai_person{ //thai_person บนสุด--> MU_person--> student
private: 

protected:long id;
	string name;

public:
	MU_person(long=112 ,string ="Prapaporn",long=123400);
  void display_person();
  ~MU_person();
};



MU_person::~MU_person(){
  cout<<"Destructor id="<<id<<endl;
}
MU_person::MU_person(long x,string n,long nid):Thai_person(nid){
  id=x;
  name=n;
  // Set up all MU_Person values
  cout<<"MU person constructor "<<id<<endl;
}

void MU_person::display_person(){
  cout<<"Show student information"<<endl;
  cout<<"id: "<<id<<endl;
  cout<<"name: "<<name<<endl;
}
