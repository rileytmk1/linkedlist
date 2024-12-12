#ifndef NODE_H
#define NODE_H

#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

class Node{
 public:
  Node(); //constructor
  ~Node(); //destructor
  Node* getNext(); //gets next node in the linked list
  void setValue(Student* newstudent); //sets value of node
  void setNext(Node* newnext); //set the next node
  Student* getValue(); //get value of node
private:
  Student* student;
  Node* next;
};

#endif
