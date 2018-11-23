class Solution {
public:
    string longestPalindrome(string s) {
        int len=s.length();
        int i_b=0,i_u=0;
        int max_l=1,max_j=1;
        int mid_p=0;
        int mid_n=0;
        string ans;
        while(i_u<len)
        {
            while(i_u+1<len&&s[i_u]==s[i_u+1])
                i_u++;
            int j=1;
            int mid_n=i_u-i_b;
            while(i_b-j>=0&&i_u+j<len&&s[i_b-j]==s[i_u+j])
                j++;
            if(2*j-1+mid_n>max_l)
            {
                max_j=j;
                max_l=2*j-1+mid_n;
                mid_p=i_b;
            }
            i_u=++i_b;
        }
        ans=s.substr(mid_p-max_j+1,max_l);
        return ans;
    }
};