#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    vector<int> buckets(n);
    long long sum = 0;
    for (int i = 0; i < n; ++i)
    {
      cin >> buckets[i];
      sum += buckets[i];
    }
    int closestN = round(sqrt(sum));
    int predict = closestN * closestN;

    if (sum == predict)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }

  return 0;
}
