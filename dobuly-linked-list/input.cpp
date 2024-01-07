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

int main()
{
  Node *head = NULL;
  Node *tail = NULL;
  int val;
  while (true)
  {
    cin >> val;
    if(val == -1){
      break;
    }
    else{
      insert_at_tail(head, tail, val);
    }
  }
  print_normal(head);
  print_reverse(tail);
  return 0;
}