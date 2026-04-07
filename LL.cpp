#include <iostream>
#include"NODE.h"
#include"LL.h"
using namespace std;
LL::LL(){
       hol=NULL;
       size=0;
}

LL::~LL(){
          //clear all nodes
     NODE* current = hol;
     while(current != NULL){
        NODE* temp = current;
        current = current->move_next();
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
void LL::add_node(NODE*& A){
          hol=A;
          hol->insert(A);
          
       size++;

 }
