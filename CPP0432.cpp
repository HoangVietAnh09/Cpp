#include <bits/stdc++.h>
using namespace std;
bool cmp(string x, string y){
    string xy = x.append(y);
    string yx = y.append(x);
    if(xy > yx) return true;
    return false;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        int n;
        cin >> n;
        vector<string> vs(n);
        for(int i = 0; i < n; i++){
            cin >> vs[i];
        }
        sort(vs.begin(), vs.end(), cmp);
        for(int i = 0; i < n; i++){
            cout << vs[i];
        }
        cout << endl;

    }
    return 0;
}