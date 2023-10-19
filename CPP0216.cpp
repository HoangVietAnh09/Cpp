#include <bits/stdc++.h>
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
        int l, r;
        cin >> l >> r;
        int b[r-l+1];
        int m = 0;
        for(int i = l; i <= r; i++){
            b[m++] = a[i];
        }
        int check = 1;
        for(int i = 0; i < (r-l+1)/2; i++){
            if(b[i] > b[i+1]){
                check = 0;
                break; 
            }
        }
        for(int i = (r-l+1)/2; i < (r-l+1); i++){
            if(b[i] < b[i+1]){
                check = 0;
                break;
            }
        }
        if(check){
            cout << "Yes" << endl; 
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}