#include <iostream>
#include<cstdlib>
#include"NODE.h"
#include"LL.h"
#include "student.h"
using namespace std;
int main(int argc, char *argv[])
{  LL A;
   int i;
   NODE *t;

   for(i=1;i+2<argc;i+=3) {
                       t=new student(atoi(argv[i]), atof(argv[i+1]), argv[i+2]);
                       A.add_node(t);
                       }
   A.show_all();
   
    return 0;
}
