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

int reverse2(int num){
    bool isp = false;
    long x = num;
    if(x<0){
        isp = true;
        x = x*(-1);
    }
    long rev = 0;
    while(x>0){
        rev = rev*10 + (x%10);
        x = x/10;
    }
    if(isp==true)rev=rev*(-1);
    if(rev>pow(2,31)-1 || rev<(-1)*pow(2,31))
        return 0;
    else
        return rev;
  
}

//Palindrome Number : If reverse equal to original
bool isPalindrome(int num) {
    if(num<0) return false;
    long rev = 0, temp = num;
    while(temp){
        rev = rev*10 + temp%10;
        temp = temp/10;
    }
return rev == num;
}

int main(){
    
}