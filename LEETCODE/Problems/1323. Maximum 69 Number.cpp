class Solution {
public:
    int maximum69Number (int num) {
        
        
        int c=0;
        int store=num;
        while(store>0)
        {
            c++;
            store=store/10;
        }
        c--;
        
        int res=0;
        int base=pow(10,c);
        c--;
        int temp=0;
        int check=0;
        while(num>0)
        {
           int temp=num/base;
           
           if(temp==9 || check==1)
           {
               res=res+(temp*base); 
               num=num%base;
               base=base/10;      
           }
            
           if(temp!=9 && check==0){
               
                  res=res+(9*base);
                  num=num%base;
                  base=base/10;
                  check=1;            
           }
                      
                
        }
        
        return res;
    }
};