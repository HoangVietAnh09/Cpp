#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
class NhanVien{
    private:
        string mnv, hoTen, gt, ns, dc, tax, re;
    public:
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
    // if(a.ns[1] == '/') a.ns = "0" + a.ns;
    // if(a.ns[4] == '/') a.ns.insert(3, "0");
    // if(a.re[1] == '/') a.re = "0" + a.re;
    // if(a.re[4] == '/') a.re.insert(3, "0");
    return in;
}

ostream& operator << (ostream &out, NhanVien a){
    out << a.mnv << " " << a.hoTen << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.tax << " " << a.re << endl;
    return out;
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}