#include<bits/stdc++.h>
#include<math.h>
#include<vector>
using namespace std;

int reverse(int x) {
    long long rev = 0;
    while(x){
        rev = rev*10 + x%10;
        x = x/10;
    }
    if(rev<INT_MIN || rev>INT_MAX) rev = 0;    
return rev;
}

int main(){
    
}