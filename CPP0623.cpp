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

int main(){
    int n;
    cin >> n;
    SinhVien ds[1004];
    for(int i = 0; i < n; i++) cin >> ds[i];
    int q; cin >> q;
    while(q--){
        string year;
        cin >> year;
        cout << "DANH SACH SINH VIEN KHOA " << year << ":" << endl;
        for(int i = 0; i < n; i++){
            if(ds[i].lop[1] == year[2] && ds[i].lop[2] == year[3]){
                cout << ds[i];
            }
        }
        
    }
    return 0;
}