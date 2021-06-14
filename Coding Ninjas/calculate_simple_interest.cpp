#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int principal;
    int time;
    int si;
    double rate;
    cin>>principal;
    cin>>rate;
    cin>>time;
    
    si=(principal * rate * time) / 100;
    cout<<si;

    return 0;
}
