#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
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
        int tmp = 0;
        for(int i = 1; i <= n; i++){
            if(gcd(i, n) == 1){
                tmp++;
            }
        }
        if(prime(tmp)){
            cout << "1" << endl;
        }else{
            cout << "0" << endl;
        }
    }
    return 0;
}