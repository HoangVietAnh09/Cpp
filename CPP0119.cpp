#include <bits/stdc++.h>
#define ll long long
using namespace std;
int dem(int n){
    int cnt = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n%i == 0){
            if(i%2 == 0){
                cnt++;
            }
            if(i*i != n && (n/i)%2 == 0){
                cnt++;
            }
        }
    }
    return cnt;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << dem(n) << endl;
    }
    return 0;
}