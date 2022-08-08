class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(int x: nums){
            s.insert(x);
        }
        int largestLen = 0;
        for(auto ele: s){
            int parent = ele-1;
            
            //check if parent exists, if it doesnt then start the chain calc
            if(s.find(parent)==s.end()){
                int next_no=ele+1;
                int cnt=1;
                while(s.find(next_no)!=s.end()){
                    next_no++;
                    cnt++;
                }
                if(cnt>largestLen){
                    largestLen = cnt;
                }
                
            }
        }
        return largestLen;
    }
};