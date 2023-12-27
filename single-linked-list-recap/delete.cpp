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
void delete_node(Node *head, int pos)
{
  Node *tmp = head;
  for (int i = 1; i <= pos - 1; i++)
  {
    tmp = tmp->next;
  }
  Node *delete_node = tmp->next;
  tmp->next = tmp->next->next;
  delete delete_node;
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

int size(Node *head)
{
  Node *tmp = head;
  int count = 0;
  while (tmp != NULL)
  {
    count++;
    tmp = tmp->next;
  }
  return count;
}

int main()
{

  Node *head = new Node(5);
  Node *a = new Node(10);
  Node *b = new Node(20);
  Node *c = new Node(30);
  Node *d = new Node(40);
  Node *e = new Node(50);
  Node *tail = new Node(100);

  head->next = a;
  a->next = b;
  b->next = c;
  c->next = d;
  d->next = e;
  e->next = tail;

  int pos;
  cin >> pos;
  if (pos >= size(head))
  {
    cout << "Invalid index" << endl;
  }
  else
  {
    delete_node(head, pos);
    print_node(head);
  }
  return 0;
}