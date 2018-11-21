class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int a=0,b=1,c=2;
        sort(nums.begin(),nums.end(),less<int>());
        int ans=nums[0]+nums[1]+nums[2];
        if(ans>=target)
        {
            return ans;
        }
        for(;a<nums.size()-2;a++)
        {
            for(b=a+1;b<nums.size()-1;b++)
            {
                for(c=b+1;c<nums.size();c++)
                {
                    int temp=nums[a]+nums[b]+nums[c];
                    if(temp>=target)
                    {
                        if(temp-target<=fabs(target-ans))
                            ans=temp;
                        break;
                    }
                    else if(fabs(temp-target)<fabs(ans-target))
                        ans=temp;
                }
            }
        }
        
        
        /*int temp;
        while(c<nums.size()-1||(c-b>1||b-a>1))
        {
            bool b_move=false,a_move=false;
            int min_difference;
            if(c!=nums.size()-1)
                min_difference=nums[c+1]-nums[c];
            if(c-b>1)
            {

                if(c<nums.size()-1&&min_difference<=nums[b+1]-nums[b])
                    ;
                else
                    min_difference=nums[b+1]-nums[b],b_move=true;
            }
            if(b-a>1)
            {
                if(b<nums.size()-2&&min_difference<=nums[a+1]-nums[a])
                    ;
                else
                    min_difference=nums[a+1]-nums[a],a_move=true;
            }
            if(a_move)
                a++;
            else if(b_move)
                b++;
            else
                c++;
            temp=nums[a]+nums[b]+nums[c];
            if(temp==target)
                return temp;
            if(fabs(target-temp)>=fabs(target-ans))
            {
                if(target-temp<0)
                    break;
            }
            else
                ans=temp;
        }*/
        return ans;
    }
};