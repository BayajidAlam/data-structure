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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
  Node *new_node = new Node(val);
  if (head == NULL)
  {
    head = new_node;
    tail = new_node;
    return;
  }
  tail->next = new_node;
  tail = new_node;
}

void print_node(Node *head)
{
  Node *tmp = head;
  while (tmp != NULL)
  {
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
}

int main()
{

  Node *head = NULL;
  Node *tail = NULL;
  int val;
  while (true)
  {
    cin >> val;
    if (val == -1)
      break;
    insert_at_tail(head, tail, val);
  }
  print_node(head);
  return 0;
}