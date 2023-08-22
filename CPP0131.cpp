#include <bits/stdc++.h>
#define ll long long
using namespace std;
int uoc(int n){
    set<int> s;
    for(int i = 2; i <= n; i++){
        while(n%i == 0){
            s.insert(i);
            n /= i;
        }
    }
    return *s.begin();
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 1; i <= n; i++){
            if(i == 1){
                cout << i << " ";
            }else{
                cout << uoc(i) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}