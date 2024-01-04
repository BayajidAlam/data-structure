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

class myStack
{
public:
  Node *head = NULL;
  Node *tail = NULL;
  int sz = 0;
  void push(int val)
  { 
    sz++;
    Node *new_node = new Node(val);
    if(head == NULL){
      head = new_node;
      tail = new_node;
      return;
    }
    new_node->prev = tail;
    tail->next = new_node;
    tail = new_node;
  }
  void pop()
  {
    sz--;
    Node *delete_node = tail;
    tail = tail->prev;
    if(tail == NULL){
      head = NULL;
    }
    else{
      tail->next = NULL;
    }
    delete delete_node;
  }
  int top()
  {
    return tail->val;
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
  myStack st;

  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    st.push(x);
  }

  while (!st.isEmpty())
  {
    cout << st.top() << endl;
    st.pop();
  }

  return 0;
}