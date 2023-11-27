#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    cin.ignore();
    string tmp;
    cin >> tmp;
    stringstream ss(s);
    string token;
    while(ss >> token){
        if(strcmp(token, tmp) == 0){
            cout << token << " ";
        }
    }
    return 0;
}