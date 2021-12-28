class Solution {
public:
    int xorOperation(int n, int start) {
        
        int xxor=start;
        n--;
        
        while(n--)
        {
            start=start+2;
            xxor=xxor^start;
        }
        
        return xxor;
        
    }
};