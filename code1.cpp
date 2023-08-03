#include <iostream>
using namespace std;

int main() {
    int t1 = 0, t2 = 1, nTerm = 0, n;

    cout << "Enter a positive number: ";
    cin >> n;


    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";

    nTerm = t1 + t2;

    while(nTerm <= n) {
        cout << nTerm << ", ";
        t1 = t2;
        t2 = nTerm;
        nTerm = t1 + t2;
    }
    return 0;
}
