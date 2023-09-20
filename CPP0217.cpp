#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        multiset<int> ms;
        for(int i = 0; i < n; i++){
            for(int i = 0; i < n; i++){
                int x;
                cin >> x;
                ms.insert(x);
            }
        }
        int k = 0;
        int b[ms.size()];
        for(auto x : ms){
            b[k++] = x;
        }
        cout << b[m-1] << endl;
    }
    return 0;
}