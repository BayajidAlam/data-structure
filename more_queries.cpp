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

// print one direction
void print_normal(Node *head)
{
  Node *tmp = head;
  cout << "L" << " " << "->" << " ";
  while (tmp != NULL)
  {
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
  cout << endl;
}

// print form tail
// print from tail
void print_reverse(Node *tail)
{
  Node *tmp = tail;
  cout << "R" << " " << "->" << " ";
  while (tmp != NULL)
  {
    cout << tmp->val << " ";
    if (tmp->prev != NULL)
    {
      tmp = tmp->prev;
    }
    else
    {
      break;
    }
  }
  cout << endl;
}

// insert at given position
void insert_at_position(Node *head, int pos, int val)
{
  Node *new_node = new Node(val);
  Node *tmp = head;
  for (int i = 1; i <= pos - 1; i++)
  {
    tmp = tmp->next;
  }
  // cout << tmp->val << " ";
  // tmp is now at pos - 1 position
  new_node->next = tmp->next;
  tmp->next = new_node;

  new_node->next->prev = new_node;
  new_node->prev = tmp;
}

// insert at head
void insert_at_head(Node *&head, Node *&tail, int val)
{
  Node *new_node = new Node(val);
  if (head == NULL)
  {
    head = new_node;
    tail = new_node;
    return;
  }

  new_node->next = head;
  head->prev = new_node;
  head = new_node;
}

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

// count size
int size(Node *head)
{
  Node *tmp = head;
  int cnt = 0;
  while (tmp != NULL)
  {
    cnt++;
    tmp = tmp->next;
  }
  return cnt;
}
int main()
{
  Node *head = NULL;
  Node *tail = NULL;

  int tt;
  cin >> tt;
  while (tt--)
  {
    int pos, val;
    cin >> pos >> val;
    if (pos == 0)
    {
      insert_at_head(head, tail, val);
    }
    else if (pos == size(head))
    {
      insert_tail(head, tail, val);
    }
    else if (pos >= size(head))
    {
      cout << "Invalid" << endl;
    }
    else
    {
      insert_at_position(head, pos, val);
    }
    if (pos < size(head)) {
      print_normal(head);
      print_reverse(tail);
    }
  }

  return 0;
}

