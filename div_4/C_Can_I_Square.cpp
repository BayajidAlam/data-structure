#include <bits/stdc++.h>
using namespace std;

// macro definitions
#define ll long long
// the process of obtaining iterators for the entire range of a container
#define all(v) v.begin(), b.end()
// the process of obtaining reverse iterators for the entire range of
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define sz(a) (int)a.size()

bool is_square(ll x)
{
  ll l = 1;
  ll r = 1e9;
  while (l <= r)
  {
    ll mid = l + (r - l) / 2;
    if (mid * mid == x)
      return true;
    if (mid * mid > x)
    {
      r = mid - 1;
    }
    else
      l = mid + 1;
  }
  return false;
}

void just_solve()
{
  ll n;
  cin >> n;
  ll sum = 0;
  for (int i = 0, x; i < n; i++)
  {
    cin >> x;
    sum += x;
  }
  if (is_square(sum))
    cout << "YES\n";
  else
    cout << "NO\n";
}

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    just_solve();
  }

  return 0;
}