#include<iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << a << endl;
    cout << b;
    return 0;
}
