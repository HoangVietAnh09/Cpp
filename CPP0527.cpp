#include <bits/stdc++.h>
using namespace std;
struct tim{
    int gio, phut, giay;
};

bool cmp(tim a, tim b){
    if(a.gio < b.gio) return true;
    if(a.gio == b.gio && a.phut < b.phut) return true;
    if(a.gio == b.gio && a.phut == b.phut && a.giay < b.giay) return true;
    return false;
}
int main(){
    int n;
    cin >> n;
    struct tim t[n];
    for(int i = 0; i < n; i++){
        cin >> t[i].gio >> t[i].phut >> t[i].giay;
    }
    sort(t, t + n, cmp);
    for(int i = 0; i < n; i++){
        cout << t[i].gio << " " << t[i].phut << " " << t[i].giay << endl;
    }
    return 0;
}