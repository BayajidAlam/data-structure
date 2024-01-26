#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int val;
  Node *left;
  Node *right;

  Node(int val)
  {
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};

Node *input_tree()
{
  // int a value 
  int val;
  cin >> val;

  // create a node name root 
  Node *root;

  // if value -1 then root = NULL else create a new node with the given value
  if (val == -1)
    root = NULL;
  else
    root = new Node(val);

  // create a queue and if root exist then push it
  queue<Node *> q;
  if (root)
    q.push(root);

  // if queue is not empty then pop first element and save it as parent 
  while (!q.empty())
  {
    Node *p = q.front();
    q.pop();

    // input left,right value 
    int l, r;
    cin >> l >> r;

    // create two node name left and right 
    Node *left = NULL;
    Node *right = NULL;

    // if left or right is not equal -1 then create node with the given value
    if (l != -1)
      left = new Node(l);

    if (r != -1)
      right = new Node(r);

    // connect with parent 
    p->left = left;
    p->right = right;

    // push to queue 
    if (p->left)
      q.push(p->left);
    if (p->right)
      q.push(p->right);
  }
  return root;
}

void level_order(Node *root)
{
  if (root == NULL)
  {
    cout << "root is NULL" << endl;
    return;
  }
  
  queue<Node *> q;
  q.push(root);

  while (!q.empty())
  {
    Node *f = q.front();
    q.pop();

    cout << f->val << " ";

    if (f->left)
      q.push(f->left);
    if (f->right)
      q.push(f->right);
  }
}

int main()
{
  Node *root = input_tree();
  level_order(root);
  return 0;
}
