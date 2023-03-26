#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> k(n); 
    vector<vector<int>> a(n); 
    for (int i = 0; i < n; i++){
        cin >> k[i];
        a[i].resize(k[i]); 
        //took help from gfg for this...
        for(int j = 0 ; j < k[i]; j++){
            cin >> a[i][j];
        }
    }

    vector<vector<int>> que(q, vector<int>(2)); 
    for (int i = 0; i < q; i++){
        for (int j = 0 ; j < 2 ; j++){
            cin >> que[i][j];
        }
    } 
    for (int i = 0; i < q; i++){
        cout << a[que[i][0]][que[i][1]] << endl;
    }
    
    return 0;
}
