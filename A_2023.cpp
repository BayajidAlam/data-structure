#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool reconstructSequence(vector<int>& removed, int product, vector<int>& result) {
    sort(removed.begin(), removed.end());
    
    do {
        int currentProduct = 1;
        for (int element : removed) {
            currentProduct *= element;
        }

        if (currentProduct == product) {
            result = removed;
            return true;
        }
    } while (next_permutation(removed.begin(), removed.end()));

    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> b(n);
        vector<int> removed;

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        int product = 1;
        for (int i = 0; i < k; ++i) {
            int element;
            cin >> element;
            removed.push_back(element);
            product *= element;
        }

        vector<int> result;
        if (reconstructSequence(removed, product, result)) {
            cout << "YES\n";
            for (int element : result) {
                cout << element << " ";
            }
            cout << "\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
