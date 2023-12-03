#include <bits/stdc++.h>
using namespace std;
int mkh = 0, mmh = 0, mhd = 0;

class KhachHang;
class MatHang;
class HoaDon;

map<string, KhachHang> KH;
map<string, MatHang> MH;

class KhachHang{
    private:
        string maKhachHang, tenKhachHang, gioiTinh, ngaySinh, diaChi;
    public:
        friend class HoaDon;
        KhachHang(){
            maKhachHang = tenKhachHang = gioiTinh = ngaySinh = diaChi = "";
        }
        string getTenKhachHang(){
            return this->tenKhachHang;
        }
        string getDiaChi(){
            return this->diaChi;
        }
        friend istream& operator >> (istream &in, KhachHang &kh){
            mkh++;
            kh.maKhachHang = "KH";
            kh.maKhachHang += string(3-to_string(mkh).length(), '0') + to_string(mkh);
            scanf("\n");
            getline(in, kh.tenKhachHang);
            getline(in, kh.gioiTinh);
            getline(in, kh.ngaySinh);
            getline(in, kh.diaChi);
            KH[kh.maKhachHang] = kh;
            return in;
        };
};
class MatHang{
    private:
        string maMatHang, tenMatHang, donVi;
        int giaMua, giaBan;
    public:
        friend class HoaDon;
        MatHang(){
            maMatHang = tenMatHang = donVi = "";
            giaMua = giaBan = 0;
        }
        string getTenMatHang(){
            return this->tenMatHang;
        }
        string getDonVi(){
            return this->donVi;
        }
        int getGiaMua(){
            return this->giaMua;
        }
        int getGiaBan(){
            return this->giaBan;
        }
        friend istream& operator >> (istream &in, MatHang &mh){
            mmh++;
            mh.maMatHang = "MH";
            mh.maMatHang += string(3-to_string(mmh).length(), '0') + to_string(mmh);
            scanf("\n");
            getline(in, mh.tenMatHang);
            getline(in, mh.donVi);
            in >> mh.giaMua >> mh.giaBan;
            MH[mh.maMatHang] = mh;
            return in;
        };
};
class HoaDon{
    private:
        string maKhachHang, maMatHang, maHoaDon;
        int soLuong;
    public:
        HoaDon(){
            maHoaDon = "";
            soLuong = 0;
        }
        friend istream& operator >> (istream &in, HoaDon &hd){
            mhd++;
            hd.maHoaDon = "HD";
            hd.maHoaDon += string(3-to_string(mhd).length(), '0') + to_string(mhd);
            in >> hd.maKhachHang >> hd.maMatHang >> hd.soLuong;
            return in;
        };
        friend ostream& operator << (ostream &out, HoaDon hd){
            out << hd.maHoaDon << " " << KH[hd.maKhachHang].getTenKhachHang() << " " << KH[hd.maKhachHang].getDiaChi() << " " << MH[hd.maMatHang].getTenMatHang() << " " << MH[hd.maMatHang].getDonVi() << " " << MH[hd.maMatHang].getGiaMua() << " " << MH[hd.maMatHang].getGiaBan() << " " << hd.soLuong << " " << hd.soLuong * MH[hd.maMatHang].getGiaBan() << endl;
            return out;
        };
};
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}