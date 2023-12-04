#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
struct SinhVien{
    string msv, hoTen, lop, email, dn;
    int stt;
};

void nhap(SinhVien &p){
    p.stt = ++cnt;
    getline(cin, p.msv);
    getline(cin, p.hoTen);
    getline(cin, p.lop);
    getline(cin, p.email);
    getline(cin, p.dn);
}

void in(SinhVien p){
    cout << p.stt << " " << p.msv << " " << p.hoTen << " " << p.lop << " " << p.email << " " << p.dn << endl;
}
bool cmp(SinhVien a, SinhVien b){
    if(a.msv < b.msv) return true;
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
    int q;
    cin >> q;
    cin.ignore();
    while(q--){
        string s;
        cin >> s;
        for(int i = 0; i < n; i++){
            if(ds[i].dn == s){
                in(ds[i]);
            }
        }
    }


    return 0;
}