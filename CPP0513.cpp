#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
    string msv, hoten, lop, birth;
    float gpa;
};

void nhap(SinhVien p[], int n){
    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin, p[i].hoten);
        cin >> p[i].lop;
        cin.ignore();
        cin >> p[i].birth;
        cin >> p[i].gpa;
    }
}

void in(SinhVien p[], int n){
    for(int i = 0; i < n; i++){
        string s = to_string(i+1);
        while(s.length() < 3){
            s = "0" + s;
        }
        if(p[i].birth[1] == '/'){
            p[i].birth = "0" + p[i].birth;
        }
        if(p[i].birth[4] == '/'){
            p[i].birth.insert(3, "0");
        }
        cout << "B20DCCN" + s << " ";
        cout << p[i].hoten << " " << p[i].lop << " " << p[i].birth << " " << fixed << setprecision(2) << p[i].gpa;
        cout << endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}