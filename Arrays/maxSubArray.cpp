class Solution {
public:
    int maxSubArray(vector<int>& arr) {

        int maxSum = INT_MIN;
        int sum = 0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i] <= sum + arr[i]){
                sum += arr[i];
            }else{
                sum = arr[i];
            }
                
            if(sum > maxSum){
                maxSum = sum;
            }
        }
        return maxSum;
    }
};

int main(){

return 0;
}
