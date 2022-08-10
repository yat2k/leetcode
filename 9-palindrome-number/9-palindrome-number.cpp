class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        string y = to_string(x);
        reverse(y.begin(),y.end());
        cout<<y;
        if(to_string(x)==y){
            return true;
        }
        else{
            return false;
        }
    }
};