#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    int q;
    cin >> q;

    queue<string> line;

    while (q--) {
        int type;
        cin >> type;

        if (type == 0) {
            string name;
            cin >> name;
            line.push(name);
        } else {
            if (!line.empty()) {
                cout << line.front() << endl;
                line.pop();
            } else {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}
