//STRINGSTREAM
//QUESITON LINK:- https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem?isFullScreen=true

//APPROACH:- the stringstream class is used to perform insertion and extraction like operations.
// we used stringstream ss to store str in ss to easily extract the elements from the string.
// we use the '>>' operator to access the elements from the stringstream.
// while there are integers in ss, we push them in the vector named 'parse' and push the commas in a character vector 'c'.
// we return the parse vector.
#include<bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> parse;
    stringstream ss(str);
    int t;
    char c;
    while(ss >> t){
        parse.push_back(t);
        ss >> c;
    }
    return parse;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    return 0;
}
