#include <iostream>
using namespace std;

void print1(int n) {
    int iniS = 0;

    for(int l=0; l<n; l++){
        for(int c=1; c<=n-l; c++){
            cout << "*";
        }

        for(int s=0; s<iniS; s++){
            cout << " ";
        }

        for(int c=1; c<=n-l; c++){
            cout << "*";
        }

        iniS += 2;
        cout << endl;
    }

    int iniS1 = 8;

    for(int l=0; l<n; l++){
        for(int c=0; c<=l; c++){
            cout << "*";
        }

        for(int s=0; s<iniS1; s++){
            cout << " ";
        }

        for(int c=0; c<=l; c++){
            cout << "*";
        }

        iniS1 -= 2;
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    print1(n);
    return 0;
}
