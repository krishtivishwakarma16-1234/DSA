class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int totalSum = n*(n+1)/2;
        int arraySum = 0;
        for(int val:nums){
            arraySum = arraySum + val;

        }
        return totalSum - arraySum;
    }
};