class Solution {
public:
    bool isValid(string s) {
        if(s.empty())
            return true;
        if(s[0]!='('&&s[0]!='['&&s[0]!='{')
            return false;
        map<char,char> m;
        m['(']=')';
        m['[']=']';
        m['{']='}';
        stack<char>sta;
        for(char c:s)
        {
            if(c=='('||c=='['||c=='{')
                sta.push(c);
            else if(!sta.empty()&&c==m[sta.top()])
                sta.pop();
            else
                return false;
                
        }
        if(sta.empty())
            return true;
        return false;
        /*for(int i=s.length()-1;i>=1;i--)
        {
            if(s[i]==m[s[0]]){
                return isValid(s.substr(1,i-1))&&isValid(s.substr(i+1));
            }
                
        }
        return false;*/
    }
};