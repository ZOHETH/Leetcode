class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        ans.clear();
        if(n==0)
            return ans;
        if(n==1)
        {
            ans.push_back("()");
            return ans;
        }
        int l_n=n;
        while(l_n)
        {
            vector<string> temp=generateParenthesis(l_n-1);
            vector<string> r_temp=generateParenthesis(n-l_n);
            int i=0;
            for(i=0;i<temp.size();i++)
            {
                int j;
                for(j=0;j<r_temp.size();j++)
                    ans.push_back("("+temp[i]+")"+r_temp[j]);
                if(j==0)
                    ans.push_back("("+temp[i]+")");

            }
            if(i==0)
            {
                int j;
                for(j=0;j<r_temp.size();j++)
                    ans.push_back("()"+r_temp[j]);
                if(j==0)
                    ans.push_back("()");

            }
            l_n--;

        }
        
        return ans;
    }
};