#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
    int stt;
    string msv, hoTen, lop, email, dn;
};
bool cmp(SinhVien a, SinhVien b){
    if(a.hoTen < b.hoTen) return true;
    return false;
}
int main(){
    int n;
    cin >> n;
    struct SinhVien ds[n];
    for(int i = 0; i < n; i++){
        ds[i].stt = i + 1;
        cin >> ds[i].msv;
        cin.ignore();
        getline(cin, ds[i].hoTen);
        cin >> ds[i].lop;
        cin >> ds[i].email;
        cin >> ds[i].dn;
    }
    sort(ds, ds + n, cmp);
    int q;
    cin >> q;
    string s[5];
    for(int i = 0; i < q; i++) cin >> s[i];
    for(int j = 0; j < q; j++){
        for(int i = 0; i < n; i++){
            if(ds[i].dn == s[j]){
                cout << ds[i].stt << " " << ds[i].msv << " " << ds[i].hoTen << " " << ds[i].lop << " " << ds[i].email << " " << ds[i].dn << endl;
            }
        }
    }
    return 0;
}