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

  void pop()
  {
    sz--;
    Node *delete_node = head;
    head = head->next;
    delete delete_node;
    if (head == NULL)
    {
      tail = NULL;
    }
  }

  int front()
  {
    return head->val;
  }

  int size()
  {
    return sz;
  }

  bool empty()
  {
    if (sz == 0)
      return true;
    else
      return false;
  }
};

int main()
{
  myQueue qu;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    qu.push(x);
  }

  while (!qu.empty())
  {
    cout << qu.front() << endl;
    qu.pop();
  }

  return 0;
}