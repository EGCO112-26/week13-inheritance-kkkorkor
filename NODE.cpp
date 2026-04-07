#include <iostream>
#include"NODE.h"
#include "MU_Person.h"

using namespace std;

NODE::NODE(MU_person* x){
      data=x;
      next=NULL;
}
NODE::~NODE(){
      cout<<"Node "<<data->get_id()<<" is being deleted"<<endl;
      delete data;
}
NODE* NODE::move_next(){
      return next;
}
void  NODE:: show_node(){
      cout<<"Node data:"<<data->get_id()<<endl;
}
void NODE::insert(NODE*& head){
      this->next = head;
      head = this;

}
