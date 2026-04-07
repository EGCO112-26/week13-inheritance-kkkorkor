#include "MU_Person.h"
#include <iostream>

MU_person::~MU_person(){
  //std::cout<<"Destructor id="<<id<<std::endl;
}
MU_person::MU_person(long x,string n){
  id=x;
  name=n;
  // Set up all MU_Person values
  std::cout<<"MU person constructor "<<id<<std::endl;
}

void MU_person::display_person(){
  std::cout<<std::endl;
  std::cout<<"id: "<<id<<std::endl;
  //display_thai();
  std::cout<<"name: "<<name<<std::endl;
}

long MU_person::get_id(){
    return id;
}