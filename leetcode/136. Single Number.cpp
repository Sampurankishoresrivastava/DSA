class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int first = nums[0];
        for(int i = 1; i<nums.size();i++) {
            first = first ^ nums[i];
        }
        return first;
    }
};
