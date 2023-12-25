#include <iostream>

void reverseArray(int v[], int n) {
    int st = 0;
    int end = n - 1;
    while (st < end) {
        int temp = v[st];
        v[st] = v[end];
        v[end] = temp;

        st++;
        end--;
    }
}

int main() {
    int n;
    std::cin >> n;
    
    int* v = new int[n];

    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    reverseArray(v, n);

    for (int i = 0; i < n; i++) {
        std::cout << v[i] << " ";
    }

    delete[] v;

    return 0;
}
