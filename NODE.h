
#ifndef NODE_H
#define NODE_H

class MU_person;

class NODE{
      MU_person* data;
      NODE* next;
public:
        NODE(MU_person*);
        void show_node();
        void insert(NODE*&);
        NODE* move_next();
        ~NODE();
};

#endif