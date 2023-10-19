#include <bits/stdc++.h>
using namespace std;
class NhanVien{
    private:
        string id, name, sex, birth, address, tax, regist;
    public:
        friend ostream& operator << (ostream&, NhanVien);
        friend istream& operator >> (istream&, NhanVien&);
};
ostream& operator << (ostream& out, NhanVien a){
    if(a.birth[1] == '/') a.birth = "0" + a.birth;
    if(a.birth[4] == '/') a.birth.insert(3, "0");
    if(a.regist[1] == '/') a.regist = "0" + a.regist;
    if(a.regist[4] == '/') a.regist.insert(3, "0");
    out << a.id << " " << a.name << " " << a.sex << " " << a.birth << " " << a.address << " " << a.tax << " " << a.regist; 
    return out; 
}
istream& operator >> (istream& in, NhanVien& a){
    a.id = "00001";
    getline(in, a.name);
    in >> a.sex >> a.birth;
    cin.ignore();
    getline(in, a.address);
    cin >> a.tax >> a.regist;
    return in; 
}

#define a() a
int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}