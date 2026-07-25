#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int t;
    vector<vector<int>> answer;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        vector<int> ans;
        for(int j=0; j<n;j++){
            ans.push_back(j+1);
            ans.push_back(n-j);
        }
        answer.push_back(ans);
    }
    for (const auto& row : answer) {       
        for (int val : row) {              
            cout << val << " ";
        }
        cout << endl;            
    }
    return 0;
}