class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        int length = nums.size();

        for(int i = 0; i < length; i++){
            for(int j = 1; j < length; j++){
                if(nums[i] == nums[j] && i < j){
                    count++;
                }
            }
        }

        return count;  
    }
};