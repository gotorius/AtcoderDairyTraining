#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    ll x;
    cin >> x;
    if(x%10 == 0) cout << x/10 << endl;
    else{
        if(x > 0){
            cout << x/10 + 1 << endl;
        }else{
            cout << x/10 << endl;
        }
    }
    return 0;
}