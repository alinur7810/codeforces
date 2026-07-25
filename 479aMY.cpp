#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c; cin >> a >> b >> c;
    int ans1, ans2, ans;
    
    if (a==1 && a==b && b==c){
        ans = 3;
    }
    
    else if (a==1 && b!=1 && c!= 1){
         ans1 = a+b;
         ans = ans1*c;
         
    }
    
    else if (c==1 && a!= 1 && b!= 1){
        ans2 = c+b;
        ans = ans2*a;
    }
    
    else if (a==1 && c==1 && b!=1){
        ans = a+b+c;
    }
    
    else if (b == 1 && a!=1 && c!= 1){
        if (a > c) ans = (b+c)*a;
        else ans = (a+b)*c;
    }
    else if (a!= 1 && b != 1 && c!= 1){
        ans = a*b*c;
    }
    else if (a == 1 && b == 1 && c!= 1){
        ans = (a+b)*c;
    }
    else if ( a != 1 && b ==1 && c==1){
        ans = a*(b+c);
    }
    
    cout << ans;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	solve();

}
