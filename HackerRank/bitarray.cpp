
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   long long int n,s,p,q;
    cin>>n>>s>>p>>q;
    if(p==0)
        {
        cout<<2;return 0;
    }
    long long int count =1,first=s%2147483648;long long int st=first;
    for(long long int i =1;i<n;i++)
     { 
        long long int x=(st*p+q)%2147483648;
        if((x!=first)&&(x!=st))
        count++;
        else
        {
         cout<<count;return 0;   
        }
           st=x;
     }
    cout<<count;
    
}

// https://www.hackerrank.com/challenges/bitset-1/problem
