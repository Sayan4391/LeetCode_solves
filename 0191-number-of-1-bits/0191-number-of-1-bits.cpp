class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count =0;
        while(n!=0)
        {
            //check the last bit by using if & 
            //then use right shift to check next number
            if(n&1){
                count ++;
            }
               n=n>>1;
        }
        return count;
        
    }
};