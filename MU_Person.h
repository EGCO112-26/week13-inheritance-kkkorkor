//#include "Thai_person.h"
#include <string>
using namespace std;

#ifndef MU_PERSON_H
#define MU_PERSON_H

//class MU_person:public Thai_person{ //thai_person บนสุด--> MU_person--> student
class MU_person{
private: 

protected:long id;
	string name;

public:
	MU_person(long=112 ,string ="Prapaporn");
  ~MU_person();
  void display_person();
  long get_id();
};

#endif

