class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)       //  if n in negative 
          return false ; 


        while(n>1){
            if(n%2 !=0){     // if  any odd  no. so ham use 1  banne  hi nhi denge seedhe false, ab sari odd  ki khtm 
            return false ;    // aur wo even  6 10 12 14 wo agli itteration me  odd  ban ke  out   ho jayenge
            }
            n=n/2;         
        }
        return true ;
    }
};