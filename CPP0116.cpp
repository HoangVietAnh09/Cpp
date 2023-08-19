#include <bits/stdc++.h>
using namespace std;
int check(int n){
    set<int> s;
    for(int i = 2; i <= sqrt(n); i++){
        while(n%i == 0){
            s.insert(i);
            n /= i;
        }
        if(n != 0){
            s.insert(n);
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
            cout << check(i) << " ";
        }
        cout << endl;

    }
    return 0;
}