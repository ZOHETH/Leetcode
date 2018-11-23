class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        ans.clear();
        if(digits.empty())
            return ans;
        vector<string> letters({"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"});
        int ss=digits[0]-50;
        for(int i=0;i<letters[ss].length();i++)
            ans.push_back(letters[ss].substr(i,1));
        int len=digits.size();
        for(int cnt=1;cnt<digits.size();cnt++)
        {
            vector<string> new_ans;
            ss=digits[cnt]-50;
            new_ans.clear();
            for(int i=0;i<ans.size();i++)
            {
                string temp=ans[i];
                for(int j=0;j<letters[ss].length();j++)
                    new_ans.push_back(ans[i]+letters[ss].substr(j,1));
            }
            ans=new_ans;
        }
        return ans;
    }
};
