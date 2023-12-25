#include <bits/stdc++.h>
using namespace std;

int main()
{

  string s;
  cin >> s;
  const int ltSize = 26;
  vector<int> count(ltSize, 0);
  for (char c : s)
  {
    count[c - 'a']++;
  }

  for (int i = 0; i < ltSize; i++)
  {
    if (count[i] > 0)
    {
      char letter = static_cast<char>('a' + i);
      cout << letter << " : " << count[i] << endl;
    }
  }
  return 0;
}