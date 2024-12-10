#include "Node.h"
#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

Node* head;

int main()
{

}


void add(Student* newstudent){
  Node* current = head;
  if (current == NULL) {
    head = new Node();
    head->setValue(newstudent);
  }
  else {
    while (current->getNext() != NULL) {
      current = current->getNext();
    }
    current->setNext(new Node());
    current->getnext()->setValue(newstudent);
  }
}

void print(Node* next) {
  if (next == head) {
    cout << "list:";
  }
  if (next != NULL) {
    cout << next->getValue() << " ";
    print(next->getNext());
  }
}
