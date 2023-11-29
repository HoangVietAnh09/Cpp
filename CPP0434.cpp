#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int v[n], res[n];
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        for(int i = 0; i < n; i++){
            if(i == 0){
                res[i] = v[i]*v[i+1];
            }else if(i == n-1){
                res[i] = v[i]*v[i-1];
            }else{
                res[i] = v[i-1]*v[i+1];
            }
        }
        for(int i = 0; i < n; i++){
            cout << res[i] << " ";
        }
        cout << endl;

    }

}