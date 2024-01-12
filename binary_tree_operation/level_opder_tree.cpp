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

// level by level
void level_order(Node *root)
{
  if (root == NULL)
  {
    cout << "root is NULL" << endl;
    return;
  }
  // create a queue and push the root
  queue<Node *> q;
  q.push(root);

  // as long as queue is not empty the the following operation
  while (!q.empty())
  {
    // save the front node on pointer f and pop it
    Node *f = q.front();
    q.pop();

    // output the value of f
    cout << f->val << " ";

    // if left or right of f exist push to queue
    if (f->left)
      q.push(f->left);
    if (f->right)
      q.push(f->right);
  }
}

int main()
{
  Node *root = new Node(10);
  Node *a = new Node(20);
  Node *b = new Node(30);
  Node *c = new Node(40);
  Node *d = new Node(50);
  Node *e = new Node(60);
  Node *f = new Node(70);
  Node *g = new Node(80);
  Node *h = new Node(90);
  Node *i = new Node(100);

  root->left = a;
  root->right = b;
  a->left = c;
  a->right = h;
  c->right = e;
  b->right = d;
  d->left = f;
  d->right = g;
  h->right = i;

  level_order(root);
  return 0;
}