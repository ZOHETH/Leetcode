class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ans;
        ans.clear();
        if(words.empty())
            return ans;
        int size=words[0].length();
        for(int i=0;i<s.length();i++)
        {
            if(words.find(s.substr(i,size))!=words.end())
            {
                for(int j=1;j<words.size();j++)
                {
                    bool ok=false;
                    string temp=s.substr(i+)
                    for(int k=0;k<word.size();k++)
                    {
                        if(word[k]==)
                    }
                    if(s.substr(i+j*size,size)!=words.end())
                        ok=true;
                    else{
                        ok=false;
                        break;
                    }
                    if(ok)
                        ans.push_back(i);
                }
            }
        }
        return ans;
    }
};