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

void insert_at_tail(Node *&head, int val)
{
  Node *new_Node = new Node(val);
  if (head == NULL)
  {
    head = new_Node;
    return;
  }

  Node *tmp = head;
  while (tmp->next != NULL)
  {
    tmp = tmp->next;
  }
  tmp->next = new_Node;
}

bool has_duplicate(Node *head)
{
  // create a un-order_set stl
  unordered_set<int> seenValue;

  Node *tmp = head;
  while (tmp != NULL)
  {
    // if the value already exists in the set it's a duplicate
    if (seenValue.find(tmp->val) != seenValue.end())
    {
      return true;
    }

    // if unique insert to set
    seenValue.insert(tmp->val);
    tmp = tmp->next;
  }
  return false;
}

int main()
{

  int val;
  Node *head = NULL;
  while (true)
  {
    cin >> val;
    if (val == -1)
    {
      break;
    }
    insert_at_tail(head, val);
  }
  if (has_duplicate(head))
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
  return 0;
}