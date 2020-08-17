#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;
  vector<int> ar(n);
  for(int i = 0; i < n; i++) {
    cin >> ar[i];
  }
  bool ok = (ar[0] + ar[1] <= ar[n - 1]);
  if(ok) cout << 1 << ' ' << 2 << ' ' << n;
  else cout << -1;
  cout << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int TC = 1;
  cin >> TC;
  for(int i = 1; i <= TC; i++) {
    solve();
  }
  
  return 0;
}