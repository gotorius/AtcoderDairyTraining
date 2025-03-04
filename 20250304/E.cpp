#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    rep(i,h) rep(j,w) cin >> a[i][j];
    
    rep(bit, 1<<(h+w)){
        rep(j,(h+w)){
            if(bit & (1<<j)){
                if(j < h){
                    rep(i,w){
                        cout << a[j][i] << " ";
                    }
                    cout << endl;
                }else{
                    rep(i,h){
                        cout << a[i][j-h] << " ";
                    }
                    cout << endl;
                }
            }
        }
    }
}
