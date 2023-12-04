#include <bits/stdc++.h>
using namespace std;
int cnt = 1;
class GiangVien{
    private:
        string mgv, ten, mon;
    public:
        GiangVien(){
            mgv = ten = mon = "";
        }
        string getMon(){
            return this->mon;
        }
        friend istream& operator >> (istream&, GiangVien&);
        friend ostream&operator << (ostream&, GiangVien);
};
istream& operator >> (istream &in, GiangVien &p){
    p.mgv = "GV";
    p.mgv += string(2-to_string(cnt).length(), '0') + to_string(cnt);
    cnt++;
    getline(in, p.ten);
    getline(in, p.mon);
    stringstream ss(p.mon);
    string token;
    string tmp = "";
    while(ss >> token){
        tmp += toupper(token[0]);
    }
    p.mon = tmp;
    return in;
}
ostream& operator << (ostream &out, GiangVien p){
    cout << p.mgv << " " << p.ten << " " << p.mon << endl; 
    return out;
}


int main(){
    int n;
    cin >> n;
    GiangVien ds[n];
    cin.ignore();
    for(int i = 0; i < n; i++) cin >> ds[i];
    int q;
    cin >> q;
    cin.ignore();
    while(q--){
        string major;
        getline(cin, major);
        string tmp;
        stringstream ss(major);
        string token;
        while(ss >> token){
            tmp.push_back(toupper(token[0]));
        }
        cout << "DANH SACH GIANG VIEN BO MON " << tmp << ":\n";
        for(int i = 0; i < n; i++){
            if(tmp == ds[i].getMon()){
                cout << ds[i];
            }
        }
    }

    return 0;
}