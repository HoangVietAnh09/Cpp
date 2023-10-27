#include <bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string hoTen, email;
    public:
        string msv, lop;
        SinhVien(){
            msv = hoTen = lop = email = "";
        }
        friend istream& operator >> (istream&, SinhVien&);
        friend ostream& operator << (ostream&, SinhVien);
};
istream& operator >> (istream& in, SinhVien& a){
    in.ignore();
    cin >> a.msv;
    getline(in, a.hoTen);
    cin.ignore();
    cin >> a.lop;
    cin >> a.email;
    return in;
}
ostream& operator << (ostream& out, SinhVien a){
    cout << a.msv << " " << a.hoTen << " " << a.lop << " " << a.email << endl;
    return out;
}
bool cmp(SinhVien a, SinhVien b){
    if(a.lop < b.lop) return true;
    if(a.lop == b.lop && a.msv < b.msv) return true;
    return false;
}
void sapXep(SinhVien *ds, int n){
    sort(ds, ds+n, cmp);
}

int main(){
    SinhVien ds[1004];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> ds[i];
    sapXep(ds, n);
    for(int i = 0; i < n; i++) cout << ds[i];
    return 0;
}