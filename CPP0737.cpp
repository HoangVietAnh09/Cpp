#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        ll a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        ll max = INT_MIN;
        int x = 0;
        for(int i = 0; i < n-k+1; i++){
            ll sum = 0;
            for(int j = i; j < i+k; j++){
                sum += a[j];
            }
            if(sum > max)
                max = sum;
                x = i;
        }
        for(int i = x; i < x + k; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}