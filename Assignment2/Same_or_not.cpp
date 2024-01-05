#include <bits/stdc++.h>
using namespace std;

void is_stack_equal_queue(stack<int> &st, queue<int> &q)
{
    while (!st.empty() && !q.empty())
    {
        if (st.top() == q.front())
        {
            st.pop();
            q.pop();
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }

    if (st.empty() && q.empty())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    stack<int> st;
    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    is_stack_equal_queue(st, q);
    return 0;
}