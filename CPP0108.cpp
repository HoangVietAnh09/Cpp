#include <bits/stdc++.h>
#define ll long long
using namespace std;
int prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0)
            return 0;
    }
    return n > 1;
}
int check_thuan(int n){
    while(n > 9){
        if((n%10) >= ((n/10)%10))
            return 0;
        n /= 10;
    }
    return 1;
}
int check_nghich(int n){
    while(n > 9){
        if((n%10) <= ((n/10)%10))
            return 0;
        n /= 10;
    }
    return 1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int cnt = 0;
        int a = pow(10, n-1);
        int b = pow(10, n);
        for(int i = a; i < b; i++){
            if((check_thuan(i) || check_nghich(i)) && prime(i)){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}