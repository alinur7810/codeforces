#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<ll, ll>;

#define all(v) (v).begin(), (v).end()
#define pb push_back
#define sz(x) (int)(x).size()
#define nl '\n'
#define nah cout << "NO\n"
#define yeah cout << "YES\n"
#define lol cout << '\n'

void solve() {  
    int n; cin >> n;
    vi v(n);
    for (auto &i : v){
        cin >> i;
    }
    bool ione = false, jone=false;
    if (v[0]==1) ione = true;
    else if (v[0]==-1){
        v[0]=1;
    }
    if (v[n-1]==1) jone=true;
    else if (v[n-1]==-1){
        v[n-1]=1;
    }
    if (!ione){
    for (int i=0; i<n; ++i){
            if (v[i]==1){
                ione = true;
                break;
            }
            else if (v[i]==-1){
                ione = true;
                v[i]=1;
                break;
            }
        }
    }
    if (!jone){
    for (int i=n-1; i>0; i--){
            if (v[i]==1){
                ione = true;
                break;
            }
            else if (v[i]==-1){
                ione = true;
                v[i]=1;
                break;
            }
        }
    }

    
    for (int i=0, j=n-1; i<=j; ++i, j--){
        if (ione == false){
            if (v[i]==1){
                ione =true;
            }
            else if (v[i]==-1){
                v[i]=1;
                ione=true;
            }
        }else{
            if (v[i]==-1){
                v[i]=0;
            }
        }

        if (jone==false){
            if (v[j]==1){
                jone = true;
            }
            else if (v[j]==-1){
                v[j]=1;
                jone=true;
            }
        }
        else{
            if (v[j]==-1){
                v[j]=0;
            }
        }
    }
    for (auto &i : v){
        cout << i << ' ';
    }
    lol;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
    #endif

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}