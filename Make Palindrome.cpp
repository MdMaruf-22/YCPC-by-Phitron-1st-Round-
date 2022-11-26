#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void change(string s)
{
 
    int n = s.length();
    int cnt = 0;
 
    for(int i=0;i<n/2;i++)
    {
        if(s[i]== s[n-i-1])
            continue;
        cnt+= 1;
    }
    cout<<cnt<<endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char s[25];
    while(scanf("%s",s)!=EOF){
        change(s);
    }
    return 0;
}
