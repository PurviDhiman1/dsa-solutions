#include <bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int l=0; l<n; l++){
        for(char ch='A'; ch<='A'+(n-l-1); ch++){
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
