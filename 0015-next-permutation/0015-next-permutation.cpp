class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // step 1  >> finding  breaking point  of  decending  order ex - 1> 4 >3> 2    1 is  breaking  point  
        // update  idx  = breaking  idx  
        int idx = -1 ; 
        int n = nums.size(); 
        for(int i = n-2 ; i>=0 ; i--){
            if(nums[i]<nums[i+1]){
                idx = i ; 
                break ;
            }
        }
        // if nums  already greatest  just  reverse 
        if(idx==-1){
            reverse(nums.begin() , nums.end());
            return ; 
        }

        // step 2nd  reverse  element  further idx to n ; 
        reverse(nums.begin()+idx+1 , nums.end()) ; 

       // step 3>> find  just greatest  element to idx 
       int x= -1 ; 
       for(int i=idx+1 ; i<n ; i++){
        if(nums[i]>nums[idx]){
        x=i; 
        break ;
        }
      
       }
        // step 4  // swap idx   to  x (just greater  no . )
        int temp ; 
        temp = nums[idx]; 
        nums[idx] = nums[x]; 
        nums[x] = temp;
       
       return ;

    } 
};