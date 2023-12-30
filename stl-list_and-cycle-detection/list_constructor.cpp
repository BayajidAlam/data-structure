#include <bits/stdc++.h>
using namespace std;

int main()
{
  list<int> myList2(5, 5);
  list<int> myList(myList2);

  for (auto it = myList.begin(); it != myList.end(); it++)
  {
    cout << *it << " ";
  }
  return 0;
}