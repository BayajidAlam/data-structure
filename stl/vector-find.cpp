#include <bits/stdc++.h>
using namespace std;

int main()
{

  vector<int> v = {1, 2, 3, 4, 3, 5, 6, 7};
  vector<int>::iterator it;
  it = find(v.begin(), v.end(), 3);
  cout << *it;
  return 0;
}