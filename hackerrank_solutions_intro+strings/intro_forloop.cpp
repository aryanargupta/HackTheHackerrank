//FOR LOOP
//QUESTION LINK:- https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true

//APPROACH:- using for loop and if else conditionals, we can present the desired output.
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b ; i++){
        if (i <= 9){
            if (i == 1) cout << "one" << endl;
            else if (i == 2) cout << "two" << endl;
            else if (i == 3) cout << "three" << endl;
            else if (i == 4) cout << "four" << endl;
            else if (i == 5) cout << "five" << endl;
            else if (i == 6) cout << "six" << endl;
            else if (i == 7) cout << "seven" << endl;
            else if (i == 8) cout << "eight" << endl;
            else cout << "nine" << endl;

        }
        else {
            if (i%2 == 0) cout << "even" << endl;
            else cout << "odd" << endl;
        }
    }
    return 0;
}
