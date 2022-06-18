class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        vector<vector<int>> ans;
        set<vector<int>> s;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){


                if(nums[i]+nums[j]+nums[k]==0){
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                }
                else if(nums[i]+nums[j]+nums[k]<0){
                    j++;
                }
                else{
                    k--;
                }
                
            }
        }
        for(auto &v: s)
        {
            ans.push_back(v);
        }
       
        return ans;
    }
};