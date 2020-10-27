#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  
  if (n < 11) {
    cout << "NO";
  } else {
    bool ok = 0;
    for(int i = 0; i <= n-11; i++) {
      if (s[i] == '8') {
        ok = 1;
        break;
      }
    }
    cout << (ok ? "YES" : "NO");
  }
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