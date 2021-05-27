#include<iostream>
#include<vector>
using namespace std;

vector<int> countBits(int n) {
    vector<int> b(n+1);
    int offset = 1;
    for(int i=1; i<=n;i++){
        if(offset*2 == i){
            offset = 2*offset; 
        }
        b[i] = b[i-offset]+1;
    }
return b;
}

int main(){
    return 0;
}