#include <bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string msv, hoTen, lop, ngaySinh;
        float gpa;
    public:
        SinhVien(){
            msv = hoTen = lop = ngaySinh = "";
            gpa = 0;
        }
        friend ostream& operator << (ostream&, SinhVien);
        friend istream& operator >> (istream&, SinhVien&);
};

ostream& operator << (ostream& out, SinhVien p){
    out << p.msv << " " << p.hoTen << " " << p.lop << " " << p.ngaySinh << " " << fixed << setprecision(2) << p.gpa;
    return out;
}
istream& operator >> (istream& in, SinhVien &p){
    getline(in, p.hoTen);
    in >> p.lop >> p.ngaySinh;
    in >> p.gpa;
    p.msv = "B20DCCN001";
    if(p.ngaySinh[1] == '/') p.ngaySinh = "0" + p.ngaySinh;
    if(p.ngaySinh[4] == '/') p.ngaySinh.insert(3, "0");
    for(int i = 0; i < p.hoTen.length(); i++){
        p.hoTen[i] = tolower(p.hoTen[i]);
    }
    stringstream ss(p.hoTen);
    string tmp;
    string s = "";
    while(ss >> tmp){
        s += toupper(tmp[0]);
        for(int i = 1; i < tmp.length(); i++){
            s += tolower(tmp[i]);
        }
        s += " ";
    }
    s.erase(s.length()-1);
    p.hoTen = s;
    
    return in;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}