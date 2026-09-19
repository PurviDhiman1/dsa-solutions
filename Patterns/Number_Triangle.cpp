#include <bits/stdc++.h>
using namespace std;

void print1(int n){
    int start = 1;

    for(int l=0; l<n; l++){
        for(int c=0; c<l; c++){
            cout << start << " ";
            start++;
        }

        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    print1(n);
}
