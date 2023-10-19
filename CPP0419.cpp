#include <bits/stdc++.h>
using namespace std;
int cmp(const void *a, const void *b){
    int *x = (int*)a;
    int *y = (int*)b;
    return *x - *y;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        set<int> s;
        set<int> sb;
        set<int> sa;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            s.insert(a[i]);
            sa.insert(a[i]);
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
            s.insert(b[i]);
            sb.insert(b[i]);
        }
        for(auto x : s) cout << x << " ";
        cout << endl;
        for(int x : sa){
            if(sb.find(x) != sb.end()){
                cout << x << " ";
            }
        }
        cout << endl;
    }
    return 0;
}