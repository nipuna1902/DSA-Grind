#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

void deleteHead(Node *&head)
{
  Node *temp = head;
  head = head->next;
  delete temp;
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
  Node *head = new Node{10, NULL};
  head->next = new Node{20, NULL};
  head->next->next = new Node{30, NULL};

  deleteHead(head);

  display(head);
}