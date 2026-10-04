class Solution {
public:
    int trap(vector<int>& height) {
        // step 1>> NEXT   PREVIOUS element  arr ;  
       int  n= height.size();
       int prev[n] ; 
       int max = height[0] ; 
    for(int i=1 ; i<n ; i++ )
    {
            prev[0] = -1 ;   // left  side  startin  me  koi water nhi store  hoga 
            prev[i] = max ; 
            if(height[i]>max) max = height[i] ; 
    }

       // step 2nd >> nexxt  previous >> prev  me  hi rewrite  kar  denge  jo value choti hogi  
     //   isse  hame  minimum find  karna  bbhi nhi padega

    prev[n-1] = -1 ; 
    max = height[n-1]  ; 
    for(int i=n-2 ; i>=0 ; i--){
        prev[i] = min(max , prev[i]) ; 
        if(height[i]>max) max = height[i] ; 
    }
    int water = 0 ;
    for(int i=0 ; i<n ; i++ ){
       if(height[i]<prev[i]){
        water += (prev[i] - height[i]);
       }
    }
    return water ; 
    }
};