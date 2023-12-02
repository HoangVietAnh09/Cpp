#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, a;
        cin >> n >> a;
        vector<int> v(1004);
        int j = 0;
        while(a){
            int x = a%10;
            if(x == 9){
                v[j++] = 7;
                v[j++] = 3;
                v[j++] = 3;
                v[j++] = 2;
            }
            else if(x == 8){
                v[j++] = 2;
                v[j++] = 2;
                v[j++] = 2;
                v[j++] = 7;
            }
            else if(x == 7 || x == 5 || x == 3 || x == 2){
                v[j++] = x;
            }else if(x == 4){
                v[j++] = 2;
                v[j++] = 2;
                v[j++] = 3;
            }else if(x == 6){
                v[j++] = 5;
                v[j++] = 3;
            }
            a /= 10;
        }
        sort(v.begin(), v.end());
        for(int i = 999; i >= 1000-j;i--){
            cout << v[i];
        }
        cout << endl;
    }
    return 0;
}