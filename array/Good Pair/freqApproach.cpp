class Solution {
public:
    int goodPairs(int x, vector<int>& nums){ 
        // this function will calculate pairs of prefix
        int count = 0;

        for(int i = 0; i < x; i++){
            if(nums[i] == nums[x]){
                count++;
            }
        }

        return count;
    }

    int numIdenticalPairs(vector<int>& nums) {
        int ans = 0;

        for(int i = 0; i < nums.size(); i++){
            ans += goodPairs(i, nums);
        }

        return ans;  
    }
};