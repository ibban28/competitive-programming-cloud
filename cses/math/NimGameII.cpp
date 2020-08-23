#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;
  int cek = 0;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    x %= 4;
    cek ^= x;
  }
  cout << (cek ? "first" : "second") << '\n';
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