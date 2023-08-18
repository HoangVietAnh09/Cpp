#include <bits/stdc++.h>
using namespace std;
char de1[15] = {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
char de2[15] = {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        float sum = 0;
        cin.ignore();
        char c[15];
        for(int i = 0; i < 15; i++){
            char x;
            cin >> x;
            c[i] = x;
        }
        if(n == 101){
            for(int i = 0; i < 15; i++){
                if(c[i] == de1[i])
                    sum += 1.0*10/15;
            }
        }else{
            for(int i = 0; i < 15; i++){
                if(c[i] == de2[i]){
                    sum += 1.0*10/15;
                }
            }
        }
        cout << fixed << setprecision(2) << sum << endl;
    }
    return 0;
}