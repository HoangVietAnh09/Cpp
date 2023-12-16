#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
class SinhVien{
    private:
        string msv, hoTen, lop, ngaySinh;
        float gpa;
    public:
        SinhVien(){
            msv = hoTen = lop = ngaySinh = "";
            gpa = 0;
        }
        float getGpa(){
            return this->gpa;
        }
        friend istream& operator >> (istream&, SinhVien&);
        friend ostream& operator << (ostream&, SinhVien);
};


istream& operator >> (istream &in, SinhVien &a){
	scanf("\n");
    cnt++;
    a.msv = "B20DCCN";
    a.msv += string(3 - to_string(cnt).length(), '0') + to_string(cnt);
    string s;
    getline(in, s);
    stringstream ss(s);
    while(ss >> s){
    	s[0] = toupper(s[0]);
    	for(int i = 1; i < s.length(); i++) s[i] = tolower(s[i]);
    	a.hoTen += s;
    	a.hoTen += " ";
	}
	a.hoTen.pop_back();
    in >> a.lop >> a.ngaySinh;
    in >> a.gpa;
    if(a.ngaySinh[1] == '/') a.ngaySinh = "0" + a.ngaySinh;
    if(a.ngaySinh[4] == '/') a.ngaySinh.insert(3, "0");
    return in;
}

ostream& operator << (ostream& out, SinhVien a){
    out << a.msv << " " << a.hoTen << " " << a.lop << " " << a.ngaySinh << " " << fixed << setprecision(2) << a.gpa << endl;
    return out;
}
bool cmp(SinhVien a, SinhVien b){
    return a.getGpa() > b.getGpa();
}
void sapxep(SinhVien *ds, int n){
    sort(ds, ds + n, cmp);
}
int main(){
    freopen("DATA.in", "r", stdin);
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
