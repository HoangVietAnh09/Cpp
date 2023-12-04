#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
    string ten, gt, ns, dc, tax, reg;
    int ngay, thang, nam, mnv;
    string tmp;
};
void nhap(NhanVien& p){
    getline(cin, p.ten);
    getline(cin, p.gt);
    getline(cin, p.ns);
    getline(cin, p.dc);
    getline(cin, p.tax);
    getline(cin, p.reg);
    p.ngay = (p.ns[3] - '0')*10 + (p.ns[4] - '0');
    p.thang = (p.ns[0] - '0')*10 + (p.ns[1] - '0');
    p.nam = (p.ns[6] - '0')*1000 + (p.ns[7] - '0')*100 + (p.ns[8] - '0')*10 + p.ns[9] - '0';
}
void inds(NhanVien ds[], int n){
    for(int i = 0; i < n; i++){
        string s;
        if(ds[i].mnv < 9) s = "0000";
        else s = "000";
        cout << s << ds[i].mnv+1 << " " << ds[i].ten << " " << ds[i].gt << " " << ds[i].ns << " " << ds[i].dc << " " << ds[i].tax << " " << ds[i].reg << endl;
    }
}
bool cmp(NhanVien a, NhanVien b){
    if(a.nam < b.nam) return true;
    if(a.nam == b.nam && a.thang < b.thang) return true;
    if(a.nam == b.nam && a.thang == b.thang && a.ngay < b.ngay) return true;
    return false;

}
void sapxep(NhanVien *ds, int n){
    for(int i = 0; i < n; i++){
        ds[i].mnv = i;
    }
    sort(ds, ds+n, cmp);
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    cin.ignore();
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}