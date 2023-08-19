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
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        map<char, int> mp;
        for(int i = 0; i < s.length(); i++){
            mp[s[i]]++;
        }
        for(int i = 0; i < s.length(); i++){
            if(mp[s[i]] == 1){
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}