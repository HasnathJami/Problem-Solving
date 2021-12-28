class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        
      unordered_map<int,int>m1;
      int sum=0;
        
      for(int i=0;i<stones.size();i++)
      {
          m1[stones[i]-'A']++;
      }
        
      for(int i=0;i<jewels.size();i++)
      {
         sum=sum+m1[jewels[i]-'A'];
          
      }
        
      return sum;
        
        
        
        
    }
};