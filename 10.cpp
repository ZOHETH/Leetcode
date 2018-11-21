class Solution {
public:
    bool isMatch(string s, string p) {
        if(p.empty())
            return s.empty();
        /*同上
        if(p.empty()&&s.empty())
           return true;
        if(p.empty())
            return false;*/

        /*没用
        if(s.size()==1&&p.size()==1)
        {
            if(s[0]==p[0]||p[0]=='.')
                return true;
            return false;
        }*/
        if(p[1]=='*')
        {
            if(s.empty()||s[0]!=p[0]&&p[0]!='.')
                return isMatch(s,p.substr(2));      //如果p[0]无法匹配 跳过
            return isMatch(s,p.substr(2))||isMatch(s.substr(1),p);    //p[0]可以匹配 选或者不选
        }
        else
        {
            if(s.empty()||s[0]!=p[0]&&p[0]!='.')
                return false;
            return isMatch(s.substr(1),p.substr(1));
        }
        /*if(!s.size()&&!p.size())
            return true;
        if(!p.size())
            return false;
        int s_l=s.size(),p_l=p.size();
        int cnt=0,parts_n=1;//由‘.’分割的子串个数
        vector <int>dot_n; //第i次分割时点的个数
        vector <string> f_s;//要查找的子串
        string s_t=s;//s的副本
        string temp;
        temp.clear();
        for(int i=0;i<p_l;i++)
        {

            if(p[i]=='*')
            {
                unsigned long pos=0;
                bool flag=true;
                f_s.push_back(temp);
                dot_n.push_back(0);
                temp.clear();
                while(flag)
                {
                    for(int j=0;j<f_s.size();j++)
                    {
                        pos=s_t.find(f_s[j],pos);
                        if(pos==s_t.npos){
                            flag=false;
                            break;
                        }
                        for(int k=0;k<f_s[j].size()+dot_n[j];k++)
                            s_t[pos+k]='0';
                        pos+=dot_n[j];
                    }
                }
                f_s.clear();
                dot_n.clear();
            }
            else if(p[i]=='.')
            {
                int n=1;
                while(p[i]!='.')
                {
                    n++,i++;
                }
                f_s.push_back(temp);
                dot_n.push_back(n);
                temp.clear();
            }
            else
                temp.push_back(p[i]),cnt++;
        }
        int pos=0;
        f_s.push_back(temp);
        dot_n.push_back(0);
        for(int j=0;j<f_s.size();j++)
        {
            pos=s_t.find(f_s[j],pos);
            if(pos==s_t.npos){
                break;
            }
            for(int k=0;k<f_s[j].size()+dot_n[j];k++)
                s_t[pos+k]='0';
            pos+=dot_n[j];
        }
        for(int i=0;i<s_l;i++)
        {
            if(s_t[i]!='0')
                return false;
        }
        return true;*/

    }
};