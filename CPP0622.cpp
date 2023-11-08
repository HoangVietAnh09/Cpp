#include <bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string msv, ten,lop, email;
    public:
        SinhVien(){
            msv = ten = lop = email = "";
        }
        string getLop(){
            return this->lop;
        }
        friend istream& operator >> (istream& , SinhVien&);
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
    out << p.msv << " " << p.ten << " " << p.lop << " " << p.email << endl;
    return out;
}
int main(){
    int n;
    cin >> n;
    SinhVien ds[n];
    cin.ignore();
    for(int i = 0; i < n; i++) cin >> ds[i];
    int q;
    cin >> q;
    while(q--){
        string tmp;
        cin >> tmp;
        cout << "DANH SACH SINH VIEN LOP " << tmp << ":" << endl;
        for(int i = 0; i < n; i++){
            if(ds[i].getLop() == tmp){
                cout << ds[i];
            }
        }
    }
    return 0;
}