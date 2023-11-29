#include <bits/stdc++.h>
using namespace std;
int mkh = 0, mmh = 0;;
class KhackHang{
    private:
        string maKhachHang, tenKhackHang, gioiTinh, ngaySinh, diaChi;
    public:
        KhackHang(){
            maKhachHang = "KH";
            tenKhackHang = gioiTinh = ngaySinh = diaChi = "";
        }
        friend istream& operator >> (istream& in, KhackHang& p){
            if(mkh < 10) p.maKhachHang += "00" + to_string(mkh);
            else p.maKhachHang += "0" + to_string(mkh);
            getline(in, p.tenKhackHang);
            cin >> p.gioiTinh >> p.ngaySinh;
            cin.ignore();
            getline(in, p.diaChi);
            return in;

        };
        friend ostream& operator << (ostream& out, KhackHang p){

        };
};
class MatHang{
    private:
        string maMatHang, tenMatHang, donVi;
        float giaMua, giaBan;
    public:
        MatHang(){
            maMatHang = "MH";
            tenMatHang = donVi = "";
            giaMua = giaBan = 0;
        }
        friend istream& operator >> (istream& in, MatHang& p){
            if(mkh < 10) p.maMatHang += "00" + to_string(mmh);
            else p.maMatHang += "0" + to_string(mmh);
            p.maMatHang = "KH";
            getline(in, p.tenMatHang);
            getline(in, p.donVi);
            in >> p.giaMua >> p.giaBan;
        };
        friend ostream& operator << (ostream& out, MatHang p){

        };
        
};
class HoaDon: public KhackHang, public MatHang{
    private:
        string maHoaDon;
        int soLuong;
    public:
        HoaDon(){
            maHoaDon = "";
            soLuong = 0;
        }
        friend istream& operator >> (istream& in, HoaDon& p){
            cin >> p.soLuong;
        };
        friend ostream& operator << (ostream& out, HoaDon p){

        };
};
int main(){
    int n, m, k;

    cin >> n;
    KhackHang dskh[n];
    cin.ignore();
    for(int i = 0; i < n; i++) cin >> dskh[i];

    cin >> m;
    MatHang dsmh[m];
    cin.ignore();
    for(int i = 0; i < m; i++) cin >> dsmh[i];

    cin >> k;
    HoaDon dshd[k];
    cin.ignore();
    for(int i = 0; i < k; i++) cin >> dshd[i];
    for(int i = 0; i < k; i++) cout << dshd[i];

    return 0;
}