#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

bool Check(Node *head, int el)
{
  Node *temp = head;
  while (temp != NULL)
  {
    if (temp->data == el)
      return true;
    temp = temp->next;
  }
  return false;
}

int main()
{
  int n;
  cout << "Enter the element to be searched: ";
  cin >> n;
  Node *head = new Node{50, NULL};
  head->next = new Node{20, NULL};
  head->next->next = new Node{30, NULL};
  head->next->next->next = new Node{40, NULL};
  if (Check(head, n))
    cout << "Element found";
  else
    cout << "Element NOT found";

  return 0;
}