#include <bits/stdc++.h>
using namespace std;
class SinhVien{
    public:
        string msv, hoTen, lop, email;
        friend istream& operator >> (istream&, SinhVien&);
        friend ostream& operator << (ostream&, SinhVien);
};
istream& operator >> (istream &in, SinhVien &p){
    scanf("\n");
    getline(in, p.msv);
    getline(in, p.hoTen);
    getline(in, p.lop);
    getline(in, p.email);
    return in;
}
ostream& operator << (ostream &out, SinhVien p){
    out << p.msv << " " << p.hoTen << " " << p.lop << " " << p.email << endl;
    return out;
}

string solve(string s){
    if(s == "Ke toan") return "KT";
    if(s == "Cong nghe thong tin") return "CN";
    if(s == "An toan thong tin") return "AT";
    if(s == "Vien thong") return "VT";
    if(s == "Dien tu") return "DT";
}
int main(){
    int n;
    cin >> n;
    SinhVien ds[1004];
    for(int i = 0; i < n; i++) cin >> ds[i];
    int q; cin >> q;
    while(q--){
        cin.ignore();
        string tmp;
        getline(cin, tmp);
        string major = solve(tmp);
        transform(tmp.begin(), tmp.end(), tmp.begin(), ::toupper);
        cout << "DANH SACH SINH VIEN NGANH " << tmp << ":" << endl;
        for(int i = 0; i < n; i++){
            if(major == "CN" || major == "AT"){
                if(ds[i].msv[5] == major[0] && ds[i].msv[6] == major[1] && ds[i].lop[0] != 'E'){
                    cout << ds[i];
                }
            }else{
                if(ds[i].msv[5] == major[0] && ds[i].msv[6] == major[1]){
                    cout << ds[i];
                }
            }
        }
        
    }
    return 0;
}