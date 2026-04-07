#include <iostream>
#include"LL.h"
using namespace std;

LL::LL(){
       hol=NULL;
       size=0;
}

LL::~LL(){
     //clear all nodes
     NODE* t = hol;
     while(t){
        NODE* temp = t;
        t = t->move_next();
        delete temp;
     }
}

void LL::show_all(){
     NODE* t=hol;
     int i;
     for(i=0;i<size;i++){
          t->show_node();
          t=t->move_next();
     }
}
void LL::add_node(MU_person* p){
     NODE* n = new NODE(p);
     n->insert(hol);
          
     size++;

 }
