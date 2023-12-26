#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// create a class of node
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

// Insert at head
void insert_at_head(Node *&head, int val)
{
  // first create a new node
  Node *new_node = new Node(val);
  // connect the head to the next of the new node
  new_node->next = head;
  // now the new node is the head
  head = new_node;
  cout << "Inserted at head" << endl
       << endl;
}

// Insert at any position
void insert_at_position(Node *head, int pos, int val)
{
  // create a new node
  Node *new_node = new Node(val);
  // create a temp node like as head
  Node *tmp = head;
  for (int i = 1; i < pos - 1; i++)
  {
    // locate the position - 1 node
    tmp = tmp->next;
  }
  // connect next node from tmp.next to new_node.next
  // add new node to tmp.next
  // the sequence is tmp => new_node => next_node
  new_node->next = tmp->next;
  tmp->next = new_node;
  cout << "Inserted at position: " << pos << endl
       << endl;
}

// insert a node at tail
void insert_at_tail(Node *&head, int val)
{
  // create a new node with the value
  Node *new_node = new Node(val);

  // if the head is NULL then this is the head
  if (head == NULL)
  {
    head = new_node;
    cout << "Inserted at head" << endl
         << endl;
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
  cout << "Inserted at tail" << endl;
}

// delete a node from a specific position
void delete_from_positions(Node *head, int pos)
{
  // create a copy of node name tmp
  Node *tmp = head;
  // iterate to the previous node of target node
  for (int i = 1; i <= pos - 1; i++)
  {
    tmp = tmp->next;
  }
  // create a node that will be delete
  Node *delete_node = tmp->next;
  // save the next node of target node that will be delete
  tmp->next = tmp->next->next;
  // now delete the node
  delete delete_node;
  cout << "The node is deleted" << endl
       << endl;
}

// delete head 
void delete_head(Node *head){
  
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
  cout << endl;
  cout << endl;
}

int main()
{
  // initialize a node name head
  Node *head = NULL;
  // run the loop untill terminate
  while (true)
  {
    cout << "Option 1: Insert at tail" << endl;
    cout << "Option 2: Print link list" << endl;
    cout << "Option 3: Insert at any position" << endl;
    cout << "Option 4: Insert at head" << endl;
    cout << "Option 5: Delete from position" << endl;
    cout << "Option 6: Terminate" << endl;

    // taka the input as option
    int opt;
    cin >> opt;

    if (opt == 1)
    {
      cout << "Please enter value: ";
      int v;
      cin >> v;
      insert_at_tail(head, v);
    }
    else if (opt == 2)
    {
      print_link_list(head);
    }
    else if (opt == 3)
    {
      int pos, val;
      cout << "Please enter position: ";
      cin >> pos;
      cout << "Please enter value: ";
      cin >> val;
      if (pos == 0)
      {
        insert_at_head(head, val);
      }
      insert_at_position(head, pos, val);
    }
    else if (opt == 4)
    {
      int val;
      cout << "Please enter value: ";
      cin >> val;
      insert_at_head(head, val);
    }
    else if (opt == 5)
    {
      int pos;
      cout << "Please enter position: ";
      cin >> pos;
      delete_from_positions(head, pos);
    }
    else if (opt == 6)
    {
      break;
    }
  }

  return 0;
}