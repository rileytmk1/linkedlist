#ifndef NODE_H
#define NODE_H

#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

class Node{
 public:
  Node();
  ~Node();
  Node* getNext();
  void setValue(Student* newstudent)
  void setNext(Node* newnext);
private:
  Student* student;
  Node* next;
};

#endif
