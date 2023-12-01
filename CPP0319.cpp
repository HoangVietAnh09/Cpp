#include <bits/stdc++.h>
using namespace std;
void findMax(int m, int s){
    vector<int> v;
    while(m--){
        if(s > 9){
            v.push_back(9);
            s -= 9;
        }else{
            v.push_back(s);
            s = 0;
        }
    }    
    for(int i = 0; i < v.size(); i++){
        cout << v[i];
    }
}
void findMin(int m, int s){
    vector<int> v;
    while(m--){
        if(s > 9){
            v.push_back(9);
            s -= 9;
        }else if(m > 0 && s != 1){
            v.push_back(s-1);
            s = 1;
        }else if(s == 1 && m > 0){
            v.push_back(0);
        }else{
            v.push_back(s);
        }
    }
    for(int i = v.size() - 1; i >= 0; i--){
        cout << v[i];
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int m, s;
    cin >> m >> s;
    if(s > 9*m || s < 1){
        cout << "-1 -1";
    }else{
        findMin(m, s);
        cout << " ";
        findMax(m, s);
    }


    return 0;
}