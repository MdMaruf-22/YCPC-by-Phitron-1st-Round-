#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int cnt(string s){
    int n=s.size();
    int x=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1') x++;
    }
    return x;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a,b;cin>>a>>b;
    if(a>b) cout<<"Argentina"<<endl;
    else if(a<b) cout<<"Brazil"<<endl;
    else{
        int x=0,y=0;
        string s1,s2;
        while(1){
            cin>>s1>>s2;
            x+=cnt(s1);
            y+=cnt(s2);
            if(x>y){
                cout<<"Argentina"<<endl;
                break;
            }
            else if(x<y){
                cout<<"Brazil"<<endl;
                break;
            }
        }
    }
    return 0;
}
