class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        ans=""
        ansList=[]
        for item in digits:
            ans+=str(item)
        ans=str(int(ans)+1)
        
        for i in range(len(ans)):
            ansList.append(int(ans[i]))
            
        return ansList