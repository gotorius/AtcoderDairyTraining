#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, m;
    cin >> n >> m;

    map<int,int> mp;
    vector<int> a(m);
    rep(i,m){
        cin >> a[i];
        mp[a[i]] = i;
    }

    vector<string> s(n);
    rep(i,n) cin >> s[i];
    vector<int> score(n);
    rep(i,n) score[i] = i+1;
    int mscore = 0;
    rep(i,n){
        rep(j,m){
            if(s[i][j] == 'o') score[i] += a[j];
        }
        mscore = max(mscore, score[i]);
    }

    sort(a.rbegin(), a.rend());

    rep(i,n){
        if(score[i] == mscore){
            cout << 0 << endl;
        }else{
            int cnt = score[i];
            rep(j,m){
                if(s[i][mp[a[j]]] == 'x'){
                    cnt += a[j];
                }

                if(cnt > mscore){
                    cout << j+1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}