#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack {
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val) {
        sz++;
        Node *new_node = new Node(val);
        if (head == NULL) {
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->prev = tail;
        tail->next = new_node;
        tail = new_node;
    }

    void pop() {
        sz--;
        Node *delete_node = tail;
        tail = tail->prev;
        if (tail == NULL) {
            head = NULL;
        } else {
            tail->next = NULL;
        }
        delete delete_node;
    }

    int top() {
        return tail->val;
    }

    int size() {
        return sz;
    }

    bool isEmpty() {
        return sz == 0;
    }
};

class myQueue {
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val) {
        sz++;
        Node *new_Node = new Node(val);
        if (head == NULL) {
            head = new_Node;
            tail = new_Node;
            return;
        }
        tail->next = new_Node;
        new_Node->prev = tail;
        tail = tail->next;
    }

    void pop() {
        sz--;
        Node *delete_node = head;
        head = head->next;
        if (head == NULL) {
            tail = NULL;
        } else {
            head->prev = NULL;
        }
        delete delete_node;
    }

    int front() {
        return head->val;
    }

    int size() {
        return sz;
    }

    bool isEmpty() {
        return sz == 0;
    }
};

void is_stack_equal_queue(myStack st, myQueue q) {
    while (!st.isEmpty() && !q.isEmpty()) {
        if (st.top() == q.front()) {
            st.pop();
            q.pop();
        } else {
            cout << "NO" << endl;
            return;
        }
    }

    if (st.isEmpty() && q.isEmpty()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    myStack st;
    myQueue q;
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        q.push(x);
    }

    is_stack_equal_queue(st, q);

    return 0;
}
