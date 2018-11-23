class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN&&divisor==-1)
            return INT_MAX;
        int ans=0;
        //int i=0,j=0;
        long long dividend_t=fabs((long long)dividend);
        long long divisor_t=fabs((long long)divisor);
        long long dend=dividend_t,sor=divisor_t;
        //控制不超过
        while(dend>=divisor_t)
        {
            long long temp=1;
            sor=divisor_t;
            while(dend>=sor)
            {
                dend-=sor;
                sor<<=1;
                temp<<=1;
            }
            ans+=temp-1;
        }
        /*超过之后再往回
        while(!((dend^(dend-divisor_t))<0))
        {
            if(dend>0)
            {
                dend-=sor;
                sor+=sor;
                i++;
                ans+=1<<i-1;
                if(dend<0)
                {
                    j=0;
                    sor=divisor_t;
                }
            }
            else
            {
                
                dend+=sor;
                sor+=sor;
                j++;
                ans-=1<<j-1;
                if(dend>=0)
                {
                    
                    i=0;
                    sor=divisor_t;
                }
            }
            
        }*/
        if((dividend^divisor)<0)
            return -ans;
        return ans;
        
    }
};