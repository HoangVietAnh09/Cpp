#include <bits/stdc++.h>
#define ll long long
using namespace std;
int tong(int n){
    int sum = 0;
    while(n != 0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int tmp = n;
        while(tmp >= 10){
            tmp = tong(tmp);
        }
        cout << tmp << endl;
    }
    return 0;
}