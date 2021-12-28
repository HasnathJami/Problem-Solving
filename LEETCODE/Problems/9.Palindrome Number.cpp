class Solution {
public:
    bool isPalindrome(int x) {
        
        int store=x;
        
        if(store<0)
            return false;
        
        else{
            
            
            long long result=0;
            
            while(x>0)
            {
                int rem=x%10;
                result=(result*10)+rem;
                
                x=x/10;
            }
            
            if(result==store)
                return true;
            
            else
                return false;
            
        }
        
        
        
    }
};