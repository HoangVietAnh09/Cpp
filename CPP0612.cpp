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
        friend void chuanHoa(SinhVien&);
        friend istream& operator >> (istream&, SinhVien&);
        friend ostream& operator << (ostream&, SinhVien);
};
istream& operator >> (istream &in, SinhVien &a){
    cin.ignore();
    cnt++;
    a.msv = "B20DCCN" + string(3 - to_string(cnt).length(), '0') + to_string(cnt);
    getline(in, a.hoTen);
    cin >> a.lop >> a.ngaySinh;
    cin >> a.gpa;
    if(a.ngaySinh[1] == '/') a.ngaySinh = "0" + a.ngaySinh;
    if(a.ngaySinh[4] == '/') a.ngaySinh.insert(3, "0");
    return in;
}
void chuanHoa(SinhVien &a){
    string tmp = "";
    stringstream ss(a.hoTen);
    string token;
    while(ss >> token){
        tmp += toupper(token[0]);
        for(int i = 1; i < token.length(); i++){
            tmp += tolower(token[i]);
        }
        tmp += " ";
    }
    tmp.erase(tmp.length()-1);
    a.hoTen = tmp;

}
ostream& operator << (ostream &out, SinhVien a){
    chuanHoa(a);
    cout << a.msv << " " << a.hoTen << " " << a.lop << " " << a.ngaySinh << " " << fixed << setprecision(2) << a.gpa << endl;
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