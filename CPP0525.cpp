#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
    string msv, ten, lop;
    float d1, d2, d3;
};
void nhap(SinhVien &p){
    cin >> p.msv;
    cin.ignore();
    getline(cin, p.ten);
    cin >> p.lop;
    cin >> p.d1 >> p.d2 >> p.d3;    
}
bool cmp(SinhVien a, SinhVien b){
    if(a.msv < b.msv) return true;
    return false;
}
void sap_xep(SinhVien ds[], int n){
    sort(ds, ds + n, cmp);
}
void in_ds(SinhVien ds[], int n){
    for(int i = 0; i < n; i++){
        cout << i+1 << " " << ds[i].msv << " " << ds[i].ten << " " << ds[i].lop << " " << fixed << setprecision(1) <<  ds[i].d1 << " " << ds[i].d2 << " " << ds[i].d3 << endl;
    }
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}