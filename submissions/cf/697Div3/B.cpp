#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
    int n;
    cin >> n;
    int a = n / 2020;
    int b = n % 2020;
    cout << (a >= b ? "YES" : "NO") << '\n';
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