#include <bits/stdc++.h>
using namespace std;


class Node
{
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};


void insert_node(Node *&head, Node *&tail, string val)
{
    Node *new_node = new Node(val);
    
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }
}


void visit_node(Node *&head, string val)
{
    Node *cur = head;

    while (cur != NULL)
    {
        if (cur->val == val)
        {
            cout << val << endl;
            head = cur;
            return;
        }
        cur = cur->next;
    }

    cout << "Not Available" << endl;
}

void next(Node *&head)
{
    if (head && head->next)
    {
        head = head->next;
        cout << head->val << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

void prev(Node *&head)
{
    if (head && head->prev)
    {
        head = head->prev;
        cout << head->val << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    string val;
    while (cin >> val && val != "end")
    {
        insert_node(head, tail, val);
    }

    int Q;
    cin >> Q;

    string command, address;
    cin >> command >> address;

    visit_node(head, address);

    for (int i = 1; i < Q; ++i)
    {
        cin >> command;

        if (command == "visit")
        {
            cin >> address;
            visit_node(head, address);
        }
        else if (command == "next")
        {
            next(head);
        }
        else if (command == "prev")
        {
            prev(head);
        }
    }

    return 0;
}
