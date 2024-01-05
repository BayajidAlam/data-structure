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
  new_node->prev = tail;
  tail = tail->next;
}

void reverse_liked_list(Node *&head, Node *cur)
{
  if (cur->next == NULL)
  {
    head = cur;
    return;
  }
  reverse_liked_list(head, cur->next);
  cur->next->next = cur;
  cur->next = NULL;
}

bool is_palindrome(Node *head)
{
  Node *new_head = NULL;
  Node *new_tail = NULL;
  Node *tmp = head;

  while (tmp != NULL)
  {
    insert_at_tail(new_head, new_tail, tmp->val);
    tmp = tmp->next;
  }
  reverse_liked_list(new_head, new_head);
  tmp = head;
  Node *tmp2 = new_head;
  while (tmp != NULL)
  {
    if (tmp->val != tmp2->val)
    {
      return false;
    }
    tmp = tmp->next;
    tmp2 = tmp2->next;
  }
  return true;
}

int main()
{
  Node *head = NULL;
  Node *tail = NULL;

  int value;

  while (true)
  {
    cin >> value;
    if (value == -1)
    {
      break;
    }
    insert_at_tail(head, tail, value);
  }
  if (is_palindrome(head))
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
  return 0;
}