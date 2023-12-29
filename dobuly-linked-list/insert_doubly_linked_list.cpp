#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int val;
  Node *next;
  Node *prev;
  Node(int val)
  {
    this->val = val;
    this->next = NULL;
    this->prev = NULL;
  }
};
// insert at tail
void insert_tail(Node *&head, Node *&tail, int val)
{
  Node *new_node = new Node(val);

  if (tail == NULL)
  {
    tail = new_node;
    head = new_node;
    return;
  }
  tail->next = new_node;
  new_node->prev = tail;
  tail = tail->next;
}

// print one direction
void print_normal(Node *head)
{
  Node *tmp = head;
  while (tmp != NULL)
  {
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
  cout << endl;
}

// print form tail
void print_reverse(Node *tail)
{
  Node *tmp = tail;
  while (tmp != NULL)
  {
    cout << tmp->val << " ";
    tmp = tmp->prev;
  }
  cout << endl;
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
    {
      break;
    }
    else
    {
      insert_tail(head, tail, val);
    }
  }

  print_normal(head);
  print_reverse(tail);

  return 0;
}