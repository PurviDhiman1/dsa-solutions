#include <bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int l=1; l<=n; l++){
        for(int c=1; c<=l; c++){
            cout << c;
        }

        for(int s=1; s<=2*(n-l); s++){
            cout << " ";
        }

        for(int c=l; c>=1; c--){
            cout << c;
        }

        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    print1(n);
}
