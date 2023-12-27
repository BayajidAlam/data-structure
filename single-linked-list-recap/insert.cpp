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

void insert(Node *head, int pos, int val)
{
  Node *new_node = new Node(val);
  Node *tmp = head;
  for (int i = 1; i <= pos - 1; i++)
  {
    tmp = tmp->next;
  }
  new_node->next = tmp->next;
  tmp->next = new_node;
}

void insert_at_head(Node *&head, int val)
{
  Node *new_node = new Node(val);
  new_node->next = head;
  head = new_node;
}

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

void delete_head(Node *&head){
  Node *delete_node = head;
  head = head->next;
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

  int pos, val;
  cin >> pos >> val;
  if (pos > size(head))
  {
    cout << "Invalid position" << endl;
  }
  else if (pos == 0)
  {
    // insert_at_head(head, val);
    print_node(head);
    cout << endl;
    delete_head(head);
    print_node(head);
  }
  else if (pos == size(head))
  {
    insert_at_tail(head, tail, val);
    print_node(head);
  }
  else
  {
    insert(head, pos, val);
    print_node(head);
  }
  return 0;
}