#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int val;
  Node *next;
  Node(int val)
  {
    this->val = val;
    this->next = NULL;
  }
};

void insert_at_tail(Node *&head, int val)
{
  Node *new_Node = new Node(val);
  if (head == NULL)
  {
    head = new_Node;
    return;
  }

  Node *tmp = head;
  while (tmp->next != NULL)
  {
    tmp = tmp->next;
  }
  tmp->next = new_Node;
}

void print_linked_list(Node *head)
{
  Node *tmp = head;
  int i = 0;
  while (tmp != NULL)
  {
    i++;
    tmp = tmp->next;
  }
  cout << endl;
  cout << i;
  cout << endl;
}

int main()
{

  int val;
  Node *head = NULL;
  while (true)
  {
    cin >> val;
    if (val == -1)
    {
      break;
    }
    insert_at_tail(head, val);
  }
  print_linked_list(head);
  return 0;
}