class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int length=height.size()-1;
        int i=0,j=length;
        int left=0,right=length;
        int initArea=min(height[i],height[j])*length;        
        do
        {
            if(height[i]<height[j])
            {
                i++;
                int newArea=min(height[i],height[j])*(j-i);
                if(newArea>initArea)
                {
                    initArea=newArea;
                    left=i;
                }
            }
            else
            {
                j--;
                int newArea=min(height[i],height[j])*(j-i);
                if(newArea>initArea)
                {
                    initArea=newArea;
                    right=j;
                }
            }
            
        }while(i<j);
        return initArea;
    }
};