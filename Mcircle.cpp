#include <bits/stdc++.h>

using namespace std;

void Mcircle(){
    int n, m;
    
    cin >> n >> m;
    
    char arr[n][m];
    
    int startn = 0,startm = 0, endn = 0, endm = 0;
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> arr[i][j];
            if(arr[i][j] == '#' & startn == 0){
                startn = i;
                startm = j;
            }
            else if(arr[i][j] == '#' & startn != 0){
                endn = i;
                endm = j;
            }
        }
    }
    if(endn == 0){
        cout << startn << " " << startm;
    }
    else{
        cout << (endn-startn)/2 << " " << startm;
    }
}

int main(){
    int t;
    
    cin >> t;
    
    for(int i = 0; i<t; i++){
        Mcircle();
    }
    return 0;
}
