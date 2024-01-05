#include <iostream>
#include <algorithm>
#include <climits> // Use <climits> for INT_MAX

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long x = INT_MAX, y = INT_MAX;
        bool ok = 0;

        for (int i = 2; i * i <= b; i++)
        {
            if (b % i == 0)
            {
                y = i;
                ok = 1;
                break;
            }
        }

        for (int i = 2; i * i <= a; i++)
        {
            if (a % i == 0)
            {
                x = i;
                ok = 1;
                break;
            }
        }

        long long now = min(x, y);
        if (ok)
        {
            cout << b * now << endl;
        }
        else
        {
            long long d = a * b;
            if (d == b)
            {
                cout << d * d << endl;
            }
            else
            {
                cout << d << endl;
            }
        }
    }

    return 0;
}
