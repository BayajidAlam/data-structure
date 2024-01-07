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

void insert_at_position(Node *head, int pos, int val)
{
  Node *new_node = new Node(val);
  Node *tmp = head;
  for (int i = 1; i <= pos - 1; i++)
  {
    tmp = tmp->next;
  }
  // connect last to with middle node bidirectionally
  new_node->next = tmp->next;
  tmp->next->prev = new_node;
  // update first and middle element connection
  tmp->next = new_node;
  new_node->prev = tmp;
}

void insert_at_head(Node *&head, Node *tail, int val)
{
  Node *new_node = new Node(val);
  // if there is not node or head == NULL
  // then new_node = head and tail
  if (head == NULL)
  {
    head = new_node;
    tail = new_node;
    return;
  }
  // else connect new node as head
  new_node->next = head;
  head->prev = new_node;
  head = new_node;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
  Node *new_node = new Node(val);
  // if there is not node or tail == NULL
  // then new_node = head and tail
  while (tail == NULL)
  {
    head = new_node;
    tail = new_node;
    return;
  }
  // else connect new node as tail
  tail->next = new_node;
  new_node->prev = tail;
  tail = tail->next;
}

void delete_at_pos(Node *head, int pos)
{
  Node *tmp = head;
  for (int i = 1; i <= pos - 1; i++)
  {
    tmp = tmp->next;
  }
  // create a node that will be removed from list
  Node *delete_node = tmp->next;
  // connect tmp and next of the next node
  tmp->next = tmp->next->next;
  tmp->next->prev = tmp;
  delete delete_node;
}

void delete_tail(Node *&tail)
{
  Node *delete_node = tail;
  tail = tail->prev;
  delete delete_node;
  tail->next = NULL;
}

void delete_head(Node *&head)
{
  Node *delete_node = head;
  head = head->next;
  delete delete_node;
  head->prev = NULL;
}

int size(Node *head)
{
  Node *tmp = head;
  int cnt = 0;
  while (tmp != NULL)
  {
    tmp = tmp->next;
    cnt++;
  }
  return cnt;
}

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
  Node *head = new Node(10);
  Node *a = new Node(20);
  Node *b = new Node(30);
  Node *c = new Node(40);
  Node *tail = c;

  head->next = a;
  a->next = b;
  b->next = c;
  a->prev = head;
  b->prev = a;
  c->prev = b;

  int pos, val;
  cin >> pos >> val;

  if (pos >= size(head))
  {
    cout << "Invalid position" << endl;
  }
  else if (pos == 0)
  {
    delete_head(head);
  }
  else if (pos == size(head) - 1)
  {
    delete_tail(tail);
  }
  else
  {
    delete_at_pos(head, pos);
  }
  print_normal(head);
  print_reverse(tail);
  return 0;
}
