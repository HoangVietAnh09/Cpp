#include <bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string id, hoTen, lop, ns;
        float gpa;
    public:
        SinhVien(){
            id = hoTen = lop = ns = "";
            gpa = 0;
        }
        SinhVien(string id, string hoTen, string lop, string ns, float gpa){
            this->id = id;
            this->hoTen = hoTen;
            this->lop = lop;
            this->ns = ns;
            this->gpa = gpa;
        }
        friend istream& operator >> (istream&, SinhVien&);
        friend ostream& operator << (ostream&, SinhVien);
};
istream& operator >> (istream &in, SinhVien &p){
    p.id = "B20DCCN001";
    getline(in, p.hoTen);
    in >> p.lop;
    in >> p.ns;
    in >> p.gpa;
    return in;
}
ostream& operator << (ostream &out, SinhVien p){
    if(p.ns[1] == '/') p.ns = "0" + p.ns;
    if(p.ns[4] == '/') p.ns.insert(3, "0");
    out << p.id << " " << p.hoTen << " " << p.lop << " " << p.ns << " " << fixed << setprecision(2) << p.gpa;
    return out;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}