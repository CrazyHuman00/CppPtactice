#include <iostream>
using namespace std;

int main(void) {
    int A, B;
    cin >> A >> B;

    cout << "A:";
    while (A > 0) {
        cout << "]";
        A--;
    }
    cout << endl;

    cout << "B:";
    while (B > 0) {
        cout << "]";
        B--;
    }
    cout << endl;

    return 0;
}
