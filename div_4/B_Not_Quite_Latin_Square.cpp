#include <bits/stdc++.h>
using namespace std;

char replaced_letter(vector<string> &square)
{
  int count_of_a = 0;
  int count_of_b = 0;
  int count_of_c = 0;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (square[i][j] == 'A')
      {
        count_of_a++;
      }
      else if (square[i][j] == 'B')
      {
        count_of_b++;
      }
      else
      {
        count_of_c++;
      }
    }
  }

  if (count_of_a == 2)
  {
    return 'A';
  }
  else if (count_of_b == 2)
  {
    return 'B';
  }
  else
  {
    return 'C';
  }
}

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    vector<string> square(3);
    for (int i = 0; i < 3; i++)
    {
      cin >> square[i];
    }

    char missing_letter = replaced_letter(square);
    cout << missing_letter << endl;
  }

  return 0;
}