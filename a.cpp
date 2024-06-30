#include <bits/stdc++.h>

using namespace std;

void code(){
    int a, b;
    
    if(a == 1){
        cout << 1 << "\n";
        return;
    }
    else {
        cout << ((a-1)*b)+1 << "\n";
    }
}

int main(){
    int t;
    cin >> t;
    
    for(int i = 0; i<t; i++){
        code();
    }
    return 0;
}
