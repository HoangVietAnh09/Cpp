#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> v;
        vector<int>::iterator pos;
        for(int i = 2; i <= sqrt(n); i++){
            while(n%i == 0){
                v.push_back(i);
                n /= i;
            }
        }
        if(n != 1){
            v.push_back(n);
        }
        if(k > v.size()){
            cout << "-1" << endl;
        }else{
            cout << v[k-1] << endl;
        }

    }
    return 0;
}