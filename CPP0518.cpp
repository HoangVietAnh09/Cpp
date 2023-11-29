#include <bits/stdc++.h>
using namespace std;
int cnt = 1;
struct NhanVien{
    string mnv, ten, gt, ns, dc, tax, reg;
    int ngay, thang, nam;
    string tmp;
};
 void nhap(NhanVien &p){
    cin.ignore();
    getline(cin, p.ten);
    cin >> p.gt >> p.ns;
    cin.ignore();
    getline(cin, p.dc);
    cin >> p.tax >> p.reg;
    p.ngay = (p.ns[3]-'0')*10 + p.ns[4]-'0';
    p.thang = (p.ns[0]-'0')*10 + p.ns[1]-'0';
    p.ns = (p.ns[6]-'0')*1000 + (p.ns[7]-'0')*100 + (p.ns[8]-'0')*10 + p.ns[9]-'0';
}
void inds(NhanVien ds[], int n){
    for(int i = 0; i < n; i++){
        if(cnt < 10) ds[i].mnv = "0000" + cnt++;
        else ds[i].mnv = "000" + cnt++;
        cout << ds[i].mnv << " " << ds[i].ten << " " << ds[i].gt << " " << ds[i].ns << " " << ds[i].dc << " " << ds[i].tax << " " << ds[i].reg << endl;
    }
}
bool cmp(NhanVien a, NhanVien b){
    if(a.nam < b.nam) return true;
    if(a.nam == b.nam && a.thang < b.thang) return true;
    if(a.nam == b.nam && a.thang == b.thang && a.ngay < b.ngay) return true;
    return false;

}
void sapxep(NhanVien ds[], int n){
    sort(ds, ds+n, cmp);
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}