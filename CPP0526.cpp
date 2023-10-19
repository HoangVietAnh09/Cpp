#include <bits/stdc++.h>
using namespace std;
struct human{
    string name, date;
};
void nhap(human &p){
    cin >> p.name;
    cin >> p.date;
}
bool cmp(human a, human b){
    string tmp1 = "", tmp2 = "";
    tmp1 += a.date.substr(6) += a.date.substr(3, 2) += a.date.substr(0, 2);
    tmp2 += b.date.substr(6) += b.date.substr(3, 2) += b.date.substr(0, 2);
    return tmp1 > tmp2;
}
void in(human p[], int n){
    cout << p[0].name << "\n";
    cout << p[n-1].name << "\n";
}
int main(){
    int n;
    cin >> n;
    human a[n];
    for(int i = 0; i < n; i++){
        nhap(a[i]);
    }
    sort(a, a+n, cmp);
    in(a, n);
    return 0;
}