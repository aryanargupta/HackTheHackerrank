//VARIABLE SIZED ARRAYS
//QUESTION LINK:- https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true

//APPROACH:- initialized a vector of n size and a 2d vector of variable size. 
//the vector 'k' of n size stores the size of both the arrays and the vector 'a' stores both the arrays.
//we store the queries in a 2d vector named 'que'.
//Lastly, we output the required result by accessing elements of 'a' using 'que' indexing.
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
        //resize function is used to dynamically allot the size for the array. 
        //took help from gfg for resize function.
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
