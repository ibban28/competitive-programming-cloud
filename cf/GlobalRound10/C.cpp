#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;
  vector<int> ve(n);
  for(int i = 0; i < n; i++) {
    cin >> ve[i];
  }
  ll ans = 0;
  for(int i = n - 2; i >= 0; i--) {
    if(ve[i] <= ve[i + 1]) continue;
    else ans = ans + (ve[i] - ve[i + 1]);
  }
  cout << ans << '\n';
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