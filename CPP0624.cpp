#include <bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string msv, ten, lop, email;
    public:
        SinhVien(){
            msv = ten = lop = email = "";
        }
        string getMsv(){
            return this->msv;
        }
        string getLop(){
            return this->lop;
        }
        friend istream& operator >> (istream&, SinhVien&);
        friend ostream& operator << (ostream&, SinhVien);
};
istream& operator >> (istream& in, SinhVien &p){
    getline(in, p.msv);
    getline(in, p.ten);
    getline(in, p.lop);
    getline(in, p.email);
    return in;
}
ostream& operator << (ostream& out, SinhVien p){
    cout << p.msv << " " << p.ten << " " << p.lop << " " << p.email << endl;
    return out;
}

string master(string s){
    if(s == "Ke toan") return "KT";
    if(s == "Cong Nghe Thong Tin") return "CN";
    if(s == "An Toan Thong Tin") return "AT";
    if(s == "Vien Thong") return "VT";
    if(s == "Dien Tu") return "DT";
    return 0;
}
int main(){
    SinhVien ds[1004];
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++) cin >> ds[i];
    int q;
    cin >> q;
    while(q--){
        cin.ignore();
        string tmp;
        getline(cin, tmp);
        string token = master(tmp);
        for(int i = 0; i < n; i++){
            if(ds[i].getMsv().substr(6,7) == token){
                if(ds[i].getLop()[0] != 'E'){
                    cout << ds[i];
                }
            }
        }
    }
    return 0;
}