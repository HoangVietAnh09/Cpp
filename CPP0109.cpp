#include <bits/stdc++.h>
using namespace std;
int check(int n){
    int tmp1 = 0, tmp2 = 0;
    while(n){
        int du = n%10;
        if(du % 2 == 0)
            tmp1++;
        else
            tmp2++;
        n /= 10;
    }
    if(tmp1 == tmp2)
        return 1;
    return 0;
}
int main(){
    int n;
    cin >> n;
    int tmp = 0;
    for(int i = pow(10, n - 1); i < pow(10, n); i++){
        if(check(i)){
            tmp++;
            cout << i << " ";
        }
        if(tmp == 10){
            tmp = 0;
            cout << endl;
        }
    }
    return 0;
}