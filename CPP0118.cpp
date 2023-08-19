#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        set<int> s;
        int tmp = 0;
        for(int i = 2; i <= sqrt(n); i++){
            while(n%i == 0){
                tmp++;
                s.insert(i);
                n /= i;
            }
        }
        if(n > 1){
            tmp++;
            s.insert(n);
        }
        if(s.size() == 3 && tmp == 3){
            cout << "1" << endl;
        }else{
            cout << "0" << endl;
        }
    }
    return 0;
}