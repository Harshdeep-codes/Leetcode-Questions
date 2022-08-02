class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        long long count = 0;        
        for(int i=0; i<nums.size(); i++){
            count += nums[i];
            nums.push_back(count);
        }
         return nums;
    }
   
};
