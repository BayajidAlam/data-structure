#include <bits/stdc++.h>
using namespace std;

void reverse_array(int a[], int n)
{
  int st = 0;
  int end = n - 1;
  while (st <= end)
  {
    int tmp = a[st];
    a[st] = a[end];
    a[end] = tmp;

    st++;
    end--;
  }
}
int main()
{

  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  reverse_array(a, n);

  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  return 0;
}