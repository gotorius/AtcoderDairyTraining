#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using P = pair<int,int>;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  rep(i,n) cin >> a[i];
  rep(i,m) cin >> b[i];
  int wa = 0, ac = 1001001001;
  while (wa+1<ac) {
    int wj = (wa+ac)/2;
    int na = 0, nb = 0;
    rep(i,n) if (a[i] <= wj) na++;
    rep(i,m) if (b[i] >= wj) nb++;
    if (na >= nb) ac = wj; else wa = wj;
  }
  cout << ac << endl;
  return 0;
}