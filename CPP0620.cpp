#include <bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string hoTen, email, msv, lop;
    public:
        SinhVien(){
            msv = hoTen = lop = email = "";
        }
        string getLop(){
            return this->lop;
        }
        string getMsv(){
            return this->msv;
        }
        friend istream& operator >> (istream&, SinhVien&);
        friend ostream& operator << (ostream&, SinhVien);
};
istream& operator >> (istream& in, SinhVien& a){
    getline(in, a.msv);
    getline(in, a.hoTen);
    getline(in, a.lop);
    getline(in, a.email);
    return in;
}
ostream& operator << (ostream& out, SinhVien a){
    out << a.msv << " " << a.hoTen << " " << a.lop << " " << a.email << endl;
    return out;
}
bool cmp(SinhVien a, SinhVien b){
    if(a.getLop() < b.getLop()) return true;
    if(a.getLop() == b.getLop() && a.getMsv() < b.getMsv()) return true;
    return false;
}
void sapXep(SinhVien *ds, int n){
    sort(ds, ds+n, cmp);
}

int main(){
//	freopen("DATA.in", "r", stdin);
    SinhVien ds[1004];
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++) cin >> ds[i];
    sapXep(ds, n);
    for(int i = 0; i < n; i++) cout << ds[i];
    return 0;
}
