class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>s;

        int duplicate = -1;

        for(int i=0; i<n; i++){
            if(s.find(nums[i]) != s.end()){
                duplicate = nums[i];
            }
            s.insert(nums[i]);
        }
        int missing = -1;

        for(int i=1; i<=n; i++){
            if(s.find(i) == s.end()){
                missing = i;
            }
        }
        return {duplicate, missing};
    }
};