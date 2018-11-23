class Solution {
public:
    string convert(string s, int numRows) {
        string ans;
        ans.clear();
        if(numRows<=1)
            return s;
        for(int i=0;i<numRows;i++)
        {
            for(int j=i;j<s.length();j+=(2*numRows-2))
            {
                ans.push_back(s[j]);
                int mid=j+2*numRows-2-2*i;
                if(i!=0&&i!=numRows-1&&mid<s.length())
                {
                    ans.push_back(s[mid]);
                }
            }
        }
        return ans;
    }
};
