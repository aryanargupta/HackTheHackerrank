//ARRAYS INTRODUCTION
//QUESTION LINK :-  https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true

//APPROACH:- Printing reverse of an array is simple. Output in the opposite way of index than you took input in.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i] ;
        
    }
    for (int i = n-1 ; i >= 0 ; i--){
        cout << a[i] << " ";
    }
    return 0;
}
