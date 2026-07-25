#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<string> matrix(3);
        string line;
        for (int i=0; i<3; i++){
            cin >> matrix[i];
        }
        int a=0;
        int b=0;
        int c=0;
        for (int i=0; i < 3; i++){
            a += count(matrix[i].begin(), matrix[i].end(), 'A');
            b += count(matrix[i].begin(), matrix[i].end(), 'B');
            c += count(matrix[i].begin(), matrix[i].end(), 'C');
        }
        if (a==b && b > c){
            cout << "C" << endl;
        }else if (b==c && c > a){
            cout << "A" << endl;
        }else if (a==c && c > b){
            cout << "B" << endl;
        }
        
        
        
    }
    return 0;
}