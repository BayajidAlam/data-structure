#include <bits/stdc++.h>
using namespace std;

bool is_Valid(string &s) {
    stack<char> st;
    for (char ch : s) {
        if (!st.empty() && ((ch == '1' && st.top() == '0') || (ch == '0' && st.top() == '1'))) {
            st.pop();
        } else {
            st.push(ch);
        }
    }

    return st.empty();
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        if (is_Valid(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}