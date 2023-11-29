#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main(){
    fstream file;
    file.open("VANBAN.in");
    string tmp;
    set<string> s;
    while(file >> tmp){
        string t = "";
        for(int i = 0; i < tmp.size(); i++){
            t += tolower(tmp[i]);
        }
        s.insert(t);
    }
    for(auto x : s){
        cout << x << endl;
    }
    return 0;
}