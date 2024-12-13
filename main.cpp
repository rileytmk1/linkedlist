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

  Student* test2 = new Student();
  strcpy(test2->getFirst(), "Sehaj");
  strcpy(test2->getLast(), "Bolina");
  test2->getId() = 494949;
  test2->getGPA() = 3.33;

  Student* test3 = new Student();
  strcpy(test3->getFirst(), "Shyam");
  strcpy(test3->getLast(), "Ravidath");
  test3->getId() = 495549;
  test3->getGPA() = 2.78;
  
  add(test);

  print(head);

  add(test2);
  print(head);

  add(test3);
  print(head);
}


void add(Student* newstudent){
  Node* current = head;
  if (current == NULL) { //if linked list is empty, head becomes new node
    head = new Node(newstudent); //set the node to the student
    //head->setValue(newstudent);
  }
  else {
    while (current->getNext() != NULL) { //Go through the list until last node 
      current = current->getNext();
    }
    current->setNext(new Node(newstudent)); //last node point to new node and sets value
    //current->getNext()->setValue(newstudent); 
  }
}

void print(Node* next) {
  if (next == head) { 
    cout << "list: ";
  }
  if (next != NULL) { //output list until end of list
    Student* student = next->getStudent();
    cout << "First: " << student->getFirst() << ", ";
    cout << "Last: " << student->getLast() << ", ";
    cout << "ID: " << student->getId() << ", ";
    cout << "GPA: " << student->getGPA() << endl;
    //cout << next->getValue() << " ";
    print(next->getNext());
  }
}
