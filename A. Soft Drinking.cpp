#include <bits/stdc++.h>

using namespace std;

int
main ()
{
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  int fno = (k * l) / nl;
  int sno = c * d;
  int tno = p / np;
  int mn = min({fno, sno, tno});
  cout<<(mn/n)<<endl;
  return 0;
}
