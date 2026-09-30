class Solution {
public:
    void sortColors(vector<int>& nums) {
         int noz = 0;
            int noo = 0; 
            int noT = 0 ;
        for(int i=0 ; i<nums.size(); i++){
           
            if(nums[i]==0) noz++;
            else if(nums[i]==1) noo++;
            else noT++;
           
        }
        // filling 
        for(int i=0 ; i<nums.size(); i++){
                if(i<noz) nums[i] = 0; 
                else if (i<(noo + noz)) nums[i]=1;     // limiting  index  kyuki jitne  0 hai usse  ek kam index  tk phir noz+noo se  1  index  kam tk fill and  the  2
                else nums[i] = 2;
            }
    }
    
};