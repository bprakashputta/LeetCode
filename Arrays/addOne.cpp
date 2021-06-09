class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        int n = nums.size()-1;
        vector<int> digits(n+2);
        for(int i=0; i<n+2; i++){
            if(i==0)digits[i]=0;
            else digits[i] = nums[i-1];
        }
        
        int i = digits.size()-1, carry = 1;
        while(carry){
            if(digits[i] == 9){
                digits[i] = 0;
                carry = 1;
                i--;
            }else{
                digits[i] += carry;
                carry = 0;
                break;
            }
        }
        if(digits[0] == 0){    
            assert(!digits.empty());
            digits.erase(digits.begin());
        }
    return digits;
    }
};

// Explanation : Create an array of size n+1, and copy array elements to it and start adding one from the right. If arr[0] is equal to 0 after iteration, erase the zero at start.
