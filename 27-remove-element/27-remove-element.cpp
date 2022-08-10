class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                ans++;
            }
            else{
                nums[i]=INT_MAX;
            }
        }
        sort(nums.begin(),nums.end());
        return ans;
    }
};