#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        int min = INT_MIN;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] > min) min = v[i];
        }
        if(min <= 0) cout << min << endl;
        else{
            ll sum = 0, max = -1e9;
            for(int i = 0; i < n; i++){
                sum += v[i];
                if(sum > max) max = sum;
                if(sum < 0) sum = 0;
            }
            cout << max << endl;
        }
        
    }
    return 0;
}