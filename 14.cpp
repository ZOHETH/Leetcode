class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        ans.clear();
        if(strs.empty())
            return ans;
        bool flag=true;
        int ord=0;
        
        while(flag)
        {
            
            if(strs[0].size()==ord)
                break;
            char ch=strs[0][ord];
            for(int i=0;i<strs.size();i++)
            {
                if(strs[i].size()==ord||strs[i][ord]!=ch){
                    flag=false;
                    break;
                }
            }
            if(flag)
                ans.push_back(ch);
            ord++;
        }
        return ans;
    }
};