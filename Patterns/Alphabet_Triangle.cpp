#include <bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int l=0; l<n; l++){
        for(char ch='A'; ch<='A'+l; ch++){
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
