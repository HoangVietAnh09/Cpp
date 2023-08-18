#include <bits/stdc++.h>
#define ll long long
using namespace std;
int check(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0)
            return 0;
    }
    return n > 1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int l = 0, r = n;
        int tmp = 0;
        while(l <= r){
            if(check(l) && check(r) && l + r == n){
                cout << l << " " << r << endl;
                tmp = 1;
                break;
            }else{
                l++;
                r--;
            }
        }
        if(tmp == 0){
            cout << "-1" << endl;
        }
    }
    return 0;
}