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