#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end());

    int result = 0;

    for (int i = 0; i < n - 1; ++i) {
        auto it = std::lower_bound(a.begin() + i + 1, a.end(), a[i]);
        if (it != a.end() && *it == a[i] + 1) {
            ++result;
        }
    }

    std::cout << result << std::endl;

    return 0;
}
