#include <bits/stdc++.h>
#define ll long long
using namespace std;
int check(int n){
    int i = sqrt(n)+0.5;
    if(1ll*i*i == n)
        return 1;
    return 0;
}
int prime(int n){
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
        for(int i = 0; i <= n; i++){
            if(check(i) && prime(sqrt(i)))
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}