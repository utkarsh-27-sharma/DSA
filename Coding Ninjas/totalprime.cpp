#include <iostream>
using namespace std;

//Write your totalPrime function here
int totalPrime(int S, int E) {
    
    int count = 0;
    int flag;
    for (int i = S; i <= E; i++) {
        // Skip 0 and 1 as they are 
        // niether prime nor composite 
        if (i == 1 || i == 0)
            continue;
        flag = 1;
        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag)
            count++;
    }
    return count;
}

int main() {
    int S, E;
    cin >> S >> E;
    cout << totalPrime(S, E);
    return 0;
}
