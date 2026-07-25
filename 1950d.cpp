#include <bits/stdc++.h>
using namespace std;

vector<int> bins;
bool possible[100069];


void binalinur(){
    for (int i=2; i<=100000; ++i){
        int t = i; bool ok = true;
        while(t>0){
            if (t%10 > 1){ ok=false; break;}
            t /=10;
        }
        if (ok) bins.push_back(i);
        
    }
    
    possible[1]=true;
    
    for (int i=1; i<100000; ++i){
        if (possible[i]){
            for (int x : bins){
                if (i*1ll*x <=100000){
                    possible[x*i]=true;
                }else{
                    break;
                }
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    binalinur();
	int t; cin >>t;
	while (t--){
	    int n; cin >> n;
	    if (possible[n]) cout << "YES";
	    else cout << "NO";
	    cout << '\n';
	}
}
