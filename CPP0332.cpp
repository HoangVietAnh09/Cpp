#include <bits/stdc++.h>
using namespace std;
int binary_search(int a[], int n, int x){
    int l = 0, r = n - 1;
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid] == x)
            return true;
        else if(a[mid] < x){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    vector<string> v;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        v.push_back(tmp);
    }
    cout << v[v.size()-1];
    for(int i = 0; i < v.size()-1; i++){
        cout << v[i][0];
    }
    cout << "@ptit.edu.vn";
    return 0;
}