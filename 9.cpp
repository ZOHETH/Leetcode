class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int temp=x;
        vector <int>num;
        num.clear();
        while(temp)
        {
            num.push_back(temp%10);
            temp/=10;
        }
        for(int i=0,j=num.size()-1;i<j;i++,j--)
        {
            if(num[i]!=num[j])
                return false;
        }
        return true;
    }
};