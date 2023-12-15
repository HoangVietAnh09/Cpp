#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        int a[n], b[m], c[k];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];
        for(int i = 0; i < k; i++) cin >> c[i];
        bool check = false;
        int i = 0, j = 0, l = 0;
        while(i < n && j < m && l < k){
            if(a[i] == b[j] && a[i] == c[l]){
                cout << a[i] << " ";
                i++, j++, k++;
                check = true;
            }else if(a[i] < b[j]) i++;
            else if(b[j] < c[l]) j++;
            else l++;
        }
        if(!check) cout << -1;
        cout << endl;
       
        cout << endl;


        
    }
    return 0;
}