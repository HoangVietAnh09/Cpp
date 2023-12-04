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
		friend istream& operator >> (istream& in, KhachHang& a){
			mkh++;
			a.maKhachHang = "KH";
			a.maKhachHang += string(3 - to_string(mkh).length(), '0') + to_string(mkh);
			scanf("\n");
			getline(in, a.tenKhachHang);
			getline(in, a.gioiTinh);
			getline(in, a.ngaySinh);
			getline(in, a.diaChi);
			KH[a.maKhachHang] = a;
			return in;
		}
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
		int getGiaBan(){
			return this->giaBan;
		}
		int getGiaMua(){
			return this->giaMua;
		}
		friend istream& operator >> (istream& in, MatHang& a){
			mmh++;
			a.maMatHang = "MH";
			a.maMatHang += string(3 - to_string(mmh).length(), '0') + to_string(mmh);
			scanf("\n");
			getline(in, a.tenMatHang);
			getline(in, a.donVi);
			in >> a.giaMua >> a.giaBan;
			MH[a.maMatHang] = a;
			return in;
		}
};
class HoaDon{
	private:
		string maHoaDon, maKhachHang, maMatHang;
		int soLuong, loiNhuan;
	public:
		HoaDon(){
			maHoaDon = "";
			soLuong = loiNhuan = 0;
		}
		int getLoiNhuan(){
			return this->loiNhuan;
		}
		friend istream& operator >> (istream& in, HoaDon& a){
			mhd++;
			a.maHoaDon = "HD";
			a.maHoaDon += string(3 - to_string(mhd).length(), '0') + to_string(mhd);
			in >> a.maKhachHang >> a.maMatHang >> a.soLuong;
			a.loiNhuan = (MH[a.maMatHang].getGiaBan() - MH[a.maMatHang].getGiaMua())*a.soLuong;
			return in;
		}
		friend ostream& operator << (ostream& out, HoaDon a){
			out << a.maHoaDon << " " << KH[a.maKhachHang].getTenKhachHang() << " " << KH[a.maKhachHang].getDiaChi() << " " << MH[a.maMatHang].getTenMatHang() << " " << a.soLuong << " " << a.soLuong*MH[a.maMatHang].getGiaBan() << " " << a.loiNhuan << endl; 
			return out;
		}
};
bool cmp(HoaDon a, HoaDon b){
	if(a.getLoiNhuan() >= b.getLoiNhuan()) return true;
	return false;
}
void sapxep(HoaDon ds[], int k){
	sort(ds, ds+k, cmp);
}
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

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}

