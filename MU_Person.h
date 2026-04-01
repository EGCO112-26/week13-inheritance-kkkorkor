//#include "Thai_person.h"
#include "NODE.h"

//class MU_person:public Thai_person{ //thai_person บนสุด--> MU_person--> student
class MU_person:public NODE{
private: 

protected:long id;
	string name;

public:
	MU_person(long=112 ,string ="Prapaporn");
  void display_person();
  ~MU_person();
};



MU_person::~MU_person(){
  std::cout<<"Destructor id="<<id<<std::endl;
}
MU_person::MU_person(long x,string n):NODE(x){
  id=x;
  name=n;
  // Set up all MU_Person values
  std::cout<<"MU person constructor "<<id<<std::endl;
}

void MU_person::display_person(){
  std::cout<<std::endl<<"Show student information"<<std::endl;
  std::cout<<"id: "<<id<<std::endl;
  //display_thai();
  std::cout<<"name: "<<name<<std::endl;
}
