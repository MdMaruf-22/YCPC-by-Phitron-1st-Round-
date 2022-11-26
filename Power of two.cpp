#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n==0){
            cout<<1<<endl;
            continue;
        }
        int x=ceil(log2(n*1.00));
        ll p=pow(2,x);
        cout<<p<<endl;
    }
    return 0;
}
