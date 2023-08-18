#include <bits/stdc++.h>
#include <set>
#define ll long long
using namespace std;
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
        sort(a, a+n);
        int l = 0, r = n - 1;
        while(l <= r){
            if(l == r){
                cout << a[l] << " ";
            }else{
                cout << a[r] << " " << a[l] << " ";
            }
            l++, r--;
        }
        cout << endl;
    }
    return 0;
}
