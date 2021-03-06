#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

const int N = 5e3;

int n;
int f[N + 5];

inline void solve() {
  cin >> n;
  for(int i = 1; i <= n; i++) { cin >> f[i]; }
  for(int i = 1; i <= n; i++) {
    int crush = f[i];
    int third_person = f[crush];
    if(f[third_person] == i) {
      cout << "YES" << '\n';
      return;
    }
  }
  cout << "NO" << '\n';
  return;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int TC = 1;
  for(int i = 1; i <= TC; i++) {
    solve();
  }
  
  return 0;
}