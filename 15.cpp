class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        ans.clear();
        if(nums.empty())
            return ans;
        
        sort(nums.begin(),nums.end(),less<int>());//排序
        
        

        map<int,int>m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]=i;
        map<int,int>::iterator iter;
        
        for(int i=0;i<nums.size()-1;)
        {
            int temp_i;
            int target=-nums[i];
            for(int j=0;j<i;)          //左一个
            {
                iter=m.find(target-nums[j]);
                if(iter!=m.end()&&iter->second>i)  //右一个
                {
                    vector<int>temp_v;
                    temp_v.clear();
                    temp_v.push_back(nums[j]);
                    temp_v.push_back(nums[i]);
                    temp_v.push_back(nums[iter->second]);
                    ans.push_back(temp_v);
                }
                temp_i=j+1;
                while(temp_i<i&&nums[temp_i]==nums[j])
                    temp_i++;
                j=temp_i;
            }
            if(nums[i+1]==nums[i])   //右两个的情况 （负，负，正）（零，零，零）
            {
                iter=m.find(-2*nums[i]);
                if(iter!=m.end()&&iter->second>i+1)
                {
                    vector<int>temp_v;
                    temp_v.clear();
                    temp_v.push_back(nums[i]);
                    temp_v.push_back(nums[i+1]);
                    temp_v.push_back(nums[iter->second]);
                    ans.push_back(temp_v);
                }
            }
            temp_i=i+1;
            while(temp_i<nums.size()-1&&nums[temp_i]==nums[i])
                temp_i++;
            i=temp_i;
        }
        return ans;
    }
};