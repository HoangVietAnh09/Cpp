#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
class SinhVien{
    private:
        string msv, hoTen, lop, ngaySinh;
        float gpa;
    public:
        SinhVien(){
            msv = hoTen = lop = "";
            gpa = 0;
        }
        friend istream& operator >> (istream&, SinhVien&);
        friend ostream& operator << (ostream&, SinhVien);
};
istream& operator >> (istream &in, SinhVien &a){
    cin.ignore();
    cnt++;
    a.msv = "B20DCCN" + string(3 - to_string(cnt).length(), '0') + to_string(cnt);
    getline(in, a.hoTen);
    in >> a.lop;
    in >> a.ngaySinh;
    in  >> a.gpa;
    if(a.ngaySinh[1] == '/') a.ngaySinh = "0" + a.ngaySinh;
    if(a.ngaySinh[4] == '/') a.ngaySinh.insert(3, "0");
    return in;
}
ostream& operator << (ostream &out, SinhVien a){
    out << a.msv << " " << a.hoTen << " " << a.lop << " " << a.ngaySinh << " " << fixed << setprecision(2) << a.gpa << endl;
    return out;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}