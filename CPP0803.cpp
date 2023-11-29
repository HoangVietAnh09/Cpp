#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main(){
    fstream file;
    int n;
    file.open("DATA.in");
    map<int, int> mp;
    while(file >> n){
        mp[n]++;
    }
    for(auto x : mp){
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}