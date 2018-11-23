class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        ans.clear();
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            
            m[nums[i]]=i;
        }
        map<int,int>::iterator ite;
        for(int i=0;i<nums.size();i++)
        {
            ite=m.find(target-nums[i]);
            if(ite!=m.end())
            {
                if(i!=ite->second)
                {
                    ans.push_back(i),ans.push_back(ite->second);  
                    break;
                }
                   
            }
        }
        return ans;
    }
};