#include <bits/stdc++.h>
using namespace std;

int main()
{
  //capacity will increase doubly every time like
  //0 1 2 4 8 16 32
  vector<int> v;
  ;
  // cout << v.max_size() << endl;
  v.push_back(10);
  v.push_back(20);
  v.clear();
  // cout << v.capacity() << endl;
  cout << v.size() << endl;
  // for (int i = 0; i < v.size(); i++)
  // {
  //   cout << v[i] << " ";
  // }
  return 0;
}