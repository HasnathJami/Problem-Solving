class Solution {
public:
    string interpret(string command) {
        
        string s2;
        
        for(int i=0;i<command.size();i++)
        {
            if(command[i]=='(' && command[i+1]==')')
            {
                s2=s2+'o';
                i++;
            }
            
            else if(command[i]=='(' && command[i+1]=='a' && command[i+2]=='l' && command[i+3]==')')
            {
                s2=s2+"al";
                i=i+3;
            }
            
            else{
                s2=s2+command[i];
            }
            
        }
        
        return s2;
        
    }
};