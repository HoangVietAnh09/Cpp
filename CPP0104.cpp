#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll giai_thua(int n){
    ll gt = 1;
    for(int i = 1; i <= n; i++){
        gt *= i;
    }
    return gt;
}
int main(){
    int n;
    cin >> n;
    ll sum = 0;
    for(int i = 1; i <= n; i++){
        sum += giai_thua(i);
    }
    cout << sum;
    return 0;
}