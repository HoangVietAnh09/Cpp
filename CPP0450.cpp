#include <bits/stdc++.h>
#define ll long long
using namespace std;
int dem(int a[], int n){
    unordered_map<int, int> ump;
    for(int i = 0; i < n; i++){
        if(ump.find(a[i]) != ump.end()){
            return a[i];
        }else{
            ump[a[i]] = 1;
        }
    }
    return -1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        int res = dem(a, n);
        cout << res << endl;
    }

    return 0;
}