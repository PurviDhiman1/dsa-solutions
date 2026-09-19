#include <iostream>
using namespace std;

void print1(int n) {
    for(int l=0; l<n; l++){
        for(int s=0; s<n-l-1; s++){
            cout << " ";
        }

        for(char ch='A'; ch<='A'+l; ch++){
            cout << ch;
        }

        for(char ch='A'+l-1; ch>='A'; ch--){
            cout << ch;
        }

        for(int s=0; s<n-l-1; s++){
            cout << " ";
        }

        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    print1(n);
    return 0;
}
