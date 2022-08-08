class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int x=1;
        if(n<2){
            return n;
        }
        for(int i = 1 ;i < nums.size(); i++){
            
            if(nums[i] != nums[i-1]){
                
                nums[x] = nums[i];
                x++;
            }
        }
          return x;     
    }
};