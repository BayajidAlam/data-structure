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

class myQueue
{
public:
  Node *head = NULL;
  Node *tail = NULL;
  int sz = 0;

  void push(int val)
  {
    sz++;
    Node *new_Node = new Node(val);
    if (head == NULL)
    {
      head = new_Node;
      tail = new_Node;
      return;
    }
    tail->next = new_Node;
    new_Node->prev = tail;
    tail = tail->next;
  }
  void pop()
  {
    sz--;
    Node *delete_node = head;
    head = head->next;
    if (head == NULL)
    {
      tail = NULL;
      delete delete_node;
    }
    head->prev = NULL;
    delete delete_node;
  }
  int front()
  {
    return head->val;
  }
  int size()
  {
    return sz;
  }
  bool isEmpty()
  {
    if (sz == 0)
      return true;
    else
      return false;
  }
};
int main()
{
  myQueue q;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    q.push(x);
  }
  while (!q.isEmpty())
  {
    cout << q.front() << endl;
    q.pop();
  }

  return 0;
}