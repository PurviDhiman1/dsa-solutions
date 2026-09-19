#include<bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int l=0; l<n; l++){
        for(int s=0; s<n-l-1; s++){
            cout << " ";
        }

        for(int c=0; c<2*l+1; c++){
            cout << "*";
        }

        for(int s=0; s<n-l-1; s++){
            cout << " ";
        }

        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    print1(n);
}
