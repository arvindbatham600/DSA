class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans = 0;
        int length = nums.size();
        int freq[101] = {0};

        for(int i = 0; i < length; i++){
            ans += freq[nums[i]];
            freq[nums[i]] += 1;
        }

        return ans;
    }
};