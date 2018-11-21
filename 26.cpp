class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int num=nums[0];
        int cnt=0;
        for(int i:nums)
        {
            if(i!=num){
                cnt++;
                nums[cnt]=i;
                num=i;
            }
        }
        return cnt+1;
    }
};