#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  cin >> n;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    ve.emplace_back(x);
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int TC = 1;
  cin >> TC;
  for(int i = 1; i <= TC; i++) {
    // cout << "Case #" << i << ": ";
    solve();
  }
  
  return 0;
}