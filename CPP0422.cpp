#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a[n];
        for(auto &x : a) cin >> x;
        int tmp = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == 0){
                tmp++;
            }else{
                cout << a[i] << " ";
            }
        }
        for(int i = 0; i < tmp; i++){
            cout << "0" << " ";
        }
        cout << endl;
    }
    return 0;
}