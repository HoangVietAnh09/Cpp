#include <bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string msv, ten, lop, email;
    public:
    SinhVien(){
        msv = ten = lop = email = "";
    }
    string getMsv(){
        return this->msv;
    }
    string getLop(){
        return this->lop;
    }
    friend istream& operator >> (istream&, SinhVien&);
    friend ostream& operator << (ostream&, SinhVien);
};
istream& operator >> (istream &in, SinhVien &p){
    getline(in, p.msv);
    getline(in, p.ten);
    getline(in, p.lop);
    getline(in, p.email);
    return in;
}
ostream& operator << (ostream &out, SinhVien p){
    out << p.msv << " " << p.ten << " " << p.lop << " " << p.email << endl;
    return out;
}
int main(){
    int n;
    cin >> n;
    SinhVien ds[n];
    cin.ignore();
    for(int i = 0; i < n; i++) cin >> ds[i];
    int q;
    cin >> q;
    cin.ignore();
    while(q--){
        string tmp;
        getline(cin, tmp);
        string job;
        for(int i = 0; i < tmp.length(); i++){
            job.push_back(toupper(tmp[i]));
        }
        cout << "DANH SACH SINH VIEN NGANH " << job << ":" << endl;
        for(int i = 0; i < n; i++){
            if(ds[i].getMsv()[5] == tmp[0]){
                if((tmp[0] == 'K' || tmp[0] == 'V' || tmp[0] == 'D')){
                    cout << ds[i];
                }else if(ds[i].getLop()[0] != 'E'){
                    cout << ds[i];
                }
            }
        }
    }
    return 0;
}