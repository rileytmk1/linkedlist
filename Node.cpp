#include "Node.h"
#include "Student.h"

using namespace std;

Node::Node(){
  next = NULL;
}

Node::~Node() {
  delete &student;
  next = NULL;
}

void Node::setValue(Student* newstudent){
  student = newstudent;
}

Node* Node::getNext(){
  return next;
}

void Node::setNext(Node* newnext){
  next = newnext;
}

Student* Node::getValue(){
  return student;
}
