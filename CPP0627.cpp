#include <bits/stdc++.h>
using namespace std;
int cnt = 1;
class GiangVien{
    private:
        string mgv, ten, mon;
    public:
        string tmp;
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
    for(int i = 0; i < p.ten.length(); i++){
        p.tmp.push_back(toupper(p.ten[i]));
    }
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
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << major << ":\n";
        for(int i = 0; i < major.length(); i++){
            major[i] = toupper(major[i]);
        }
        for(int i = 0; i < n; i++){
            int a = 0, b = 0;
            string token;
            stringstream ss(major);
            while(ss >> token){
                a++;
                if(ds[i].tmp.find(token) != -1) b++;
            }
            if(a == b) cout << ds[i];
            
        }
    }

    return 0;
}