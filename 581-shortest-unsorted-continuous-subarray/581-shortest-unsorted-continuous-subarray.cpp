class Solution {
public:
    bool outOfOrder(vector<int>& nums,int i){
        int x = nums[i];
        if(i==0){
            return x>nums[1];
        }
        if(i==nums.size()-1){
            return x<nums[i-1];
        }
        return x>nums[i+1] or x<nums[i-1];
    }
    int findUnsortedSubarray(vector<int>& nums) {
        int ans=0,n=nums.size();
        int smallest = INT_MAX;
        int largest = INT_MIN;
        if(n==1){
            return ans;
        }
        for(int i=0;i<n;i++){
            int x = nums[i];
            
            if(outOfOrder(nums,i)){
                smallest = min(smallest,x);
                largest  = max(largest,x);
            }
            
            
        }
        if(smallest==INT_MAX){
                return 0;
            }
            int left=0;
            while(smallest>=nums[left]){
                left++;
            }
            int right=n-1;
            while(largest<=nums[right]){
                right--;
            }
        ans=right-left+1;
        return ans;
    }

};