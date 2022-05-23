#include <iostream>
using namespace std;
int main() {
    int k, n;
    cout << "Enter the neck of the rectangle : ";
    cin >> n;
    cout << "Enter the width of the rectangle : ";
    cin >> k;
    for (int i=0; i<n; i++) {
        for (int j=0; j<k; j++) {
            if (j==0 or j==k-1 or i==0 or i==n-1) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
