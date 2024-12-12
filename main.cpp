#include "Node.h"
#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

Node* head = NULL;

void add(Student* newstudent);
void print(Node* next);

int main()
{
  Student* test = new Student();
  strcpy(test->getFirst(), "Riley");
  strcpy(test->getLast(), "Thammakhoune");
  test->getId() = 459535;
  test->getGPA() = 4.00;

  add(test);

  print(head);
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
    current->getNext()->setValue(newstudent);
  }
}

void print(Node* next) {
  if (next == head) {
    cout << "list:";
  }
  if (next != NULL) {
    Student* student = next->getValue();
    cout << "First: " << student->getFirst() << ", ";
    cout << "Last: " << student->getLast() << ", ";
    cout << "ID: " << student->getId() << ", ";
    cout << "GPA: " << student->getGPA() << endl;
    //cout << next->getValue() << " ";
    print(next->getNext());
  }
}
