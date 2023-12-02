#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
    string msv, hoTen, lop;
    float d1, d2, d3;
};

void nhap(SinhVien &p){
    getline(cin, p.msv);
    getline(cin, p.hoTen);
    getline(cin, p.lop);
    cin >> p.d1 >> p.d2 >> p.d3;
    cin.ignore();
}

void in(SinhVien p){
    cout << p.msv << " " << p.hoTen << " " << p.lop << " " << fixed << setprecision(1) << p.d1 << " " << p.d2 << " " << p.d3;
}
bool cmp(SinhVien a, SinhVien b){
    if(a.hoTen < b.hoTen) return true;
    return false;
}

int main(){
    int n;
    cin >> n;
    SinhVien ds[n];
    cin.ignore();
    for(int i = 0; i < n; i++){
        nhap(ds[i]);
    }
    sort(ds, ds+n, cmp);
    for(int i = 0; i < n; i++){
        cout << i+1 << " ";
        in(ds[i]);
        cout << endl;
    }


    return 0;
}