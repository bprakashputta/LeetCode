#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int temp = k, ans=-1;

        if(arr[0] != 1){
            int diff = arr[0] - 1;
            if(diff >= temp){
                ans = temp;
                temp = 0;
            }else {
                temp = temp - diff;
            }
        }

        for(int i=1; i<arr.size(); i++){
            if(temp == 0){
                return ans;
            }else{
                if(arr[i] == arr[i-1]+1){
                    continue;
                }else{
                    int diff = arr[i] - arr[i-1] - 1;
                    if(diff >= temp){
                        ans = arr[i-1] + temp;
                        temp = 0;
                    }else {
                        temp = temp - diff;
                    }
                }
            }
        }

        if(temp == 0){
            return ans;
        }else{
            ans = arr[arr.size()-1] + temp;
        }

    return ans;
    }
};