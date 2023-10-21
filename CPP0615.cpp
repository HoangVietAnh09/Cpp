#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
class NhanVien{
    private:
        string mnv, hoTen, gt, ns, dc, tax, re;
    public:
        int ngay, thang, nam;
        NhanVien(){
            mnv = hoTen = gt = ns = dc = tax = re = "";
        }
        friend istream& operator >> (istream&, NhanVien&);
        friend ostream& operator << (ostream&, NhanVien);
};
istream& operator >> (istream &in, NhanVien &a){
    in.ignore();
    cnt++;
    a.mnv = string(5 - to_string(cnt).length(), '0') + to_string(cnt);
    getline(in, a.hoTen);
    cin >> a.gt >> a.ns;
    in.ignore();
    getline(in, a.dc);
    cin >> a.tax >> a.re;
    a.thang = (a.ns[0] -'0')*10 + a.ns[1]-'0';
    a.ngay = (a.ns[3]-'0')*10 + a.ns[4]-'0';
    a.nam = (a.ns[6]-'0')*1000 + (a.ns[7]-'0')*100 + (a.ns[8]-'0')*10 + a.ns[9]-'0';
    return in;
}

ostream& operator << (ostream &out, NhanVien a){
    out << a.mnv << " " << a.hoTen << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.tax << " " << a.re << endl;
    return out;
}

bool cmp(NhanVien a, NhanVien b){
    if(a.nam < b.nam) return true;
    if(a.nam == b.nam && a.thang < b.thang) return true;
    if(a.nam == b.nam && a.thang == b.thang && a.ngay < b.ngay) return true;
    return false;
}
void sapxep(NhanVien *ds, int n){
    sort(ds, ds+n, cmp);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
