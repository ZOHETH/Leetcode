class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>m;
        int max=1;
        if(s.size()==0)
            max=0;
        m[s[0]]=0;
        map<char,int>::iterator ite;
        for(int i=0,j=1;j<s.size();j++)
        {
            ite=m.find(s[j]);
            if(ite!=m.end()&&ite->second>=i)
            {
                
                i=ite->second+1;
                
                m.erase(ite);
            }
            else
            {
                max=max>(j-i+1)?max:j-i+1;
            }
            m[s[j]]=j;
        }
        return max;
    }
};