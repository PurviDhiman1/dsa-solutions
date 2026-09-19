#include <bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int l=0; l<n; l++){
        char ch = 'A' + l;

        for(int c=0; c<=l; c++){
            cout << ch << " ";
        }

        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    print1(n);
}
