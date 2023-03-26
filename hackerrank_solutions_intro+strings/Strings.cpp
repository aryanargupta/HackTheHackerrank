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
