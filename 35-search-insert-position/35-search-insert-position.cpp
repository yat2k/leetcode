class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0;
        if(target > nums[nums.size()-1]){
            return nums.size();
        }
        while(target>nums[left] and left<nums.size()){
            left++;
        }
        return left;
    }
};