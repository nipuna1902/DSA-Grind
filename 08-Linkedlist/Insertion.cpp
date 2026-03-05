#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

void insertAtHead(Node *&head, int value)
{
  Node *newNode = new Node();
  newNode->data = value;
  newNode->next = head;
  head = newNode;
}

void display(Node *head)
{
  while (head != NULL)
  {
    cout << head->data << " ";
    head = head->next;
  }
}
int main()
{

  Node *head = NULL;

  insertAtHead(head, 30);
  insertAtHead(head, 20);
  insertAtHead(head, 10);

  display(head);
}