//STRINGS
//QUESTION LINK:- https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true

//APPROACH:- using the size() function, we calculate the length of both the strings. Using the '+' operator, we concatenate the strings.
//we access the elements of strings just like we access the elements of arrays and using this, we swap the first element of both the strings.
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Complete the program
    string a, b;
    cin >> a;
    cin >> b;
    int c, d;
    c = a.size();
    d = b.size();
    cout << c << " " << d << endl;
    string x = a + b;
    cout << x << endl;
    char ch = a[0];
    a[0] = b[0];
    b[0] = ch;
    cout << a << " " << b << endl;
    return 0;
}
