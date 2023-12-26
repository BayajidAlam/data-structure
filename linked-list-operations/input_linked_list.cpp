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

// insert a node at tail
void insert_at_tail(Node *&head, int val)
{
  // create a new node with the value
  Node *new_node = new Node(val);

  // if the head is NULL then this is the head
  if (head == NULL)
  {
    head = new_node;
    return;
  }

  // create a copy of node name tmp
  Node *tmp = head;
  while (tmp->next != NULL)
  {
    // iterate till the node is before last node
    tmp = tmp->next;
  }
  // tmp is now in last node
  // and insert the new node here
  tmp->next = new_node;
}

// print the link list
void print_link_list(Node *head)
{
  cout << endl;
  cout << "Your link list is: ";
  Node *tmp = head;
  while (tmp != NULL)
  {
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
  cout << endl
       << endl;
}

int main()
{
  Node *head = NULL;
  int val;
  while (true)
  {
    cin >> val;
    if (val == -1)
      break;
    insert_at_tail(head, val);
  }
  print_link_list(head);
  return 0;
}