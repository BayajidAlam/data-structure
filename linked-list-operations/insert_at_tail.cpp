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
    // create a node name tmp
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp is now in last node
    // and insert the new node here
    tmp->next = new_node;
}

// print the link list
void print_link_list(Node *head)
{
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
        cout << "Option 3: Terminate" << endl;

        // taka the input as option
        int opt;
        cin >> opt;

        if (opt == 1)
        {
            cout << "Please enter value: " ;
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
            break;
        }
    }

    return 0;
}