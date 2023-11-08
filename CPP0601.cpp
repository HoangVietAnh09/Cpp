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
        void nhap();
        void xuat();
};
void SinhVien::nhap(){
    msv = "B22DCCN001";
    getline(cin, hoTen);
    cin.ignore();
    cin >> lop;
    cin >> ngaySinh;
    cin >> gpa;
}
void SinhVien::xuat(){
    if(ngaySinh[1] == '/') ngaySinh = "0" + ngaySinh;
    if(ngaySinh[4] == '/') ngaySinh.insert(3, "0");
    cout << msv << " " << hoTen << " " << ngaySinh << " " << fixed << setprecision(2) << gpa << endl;
}
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}