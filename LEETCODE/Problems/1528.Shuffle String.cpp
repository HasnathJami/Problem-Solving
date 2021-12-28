class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        vector<pair<char,int>>v;
        
        for(int i=0;i<s.size();i++)
        {
            v.push_back(make_pair(indices[i],s[i]));
        }
        
        sort(v.begin(),v.end());
        
        string s2;
        for(int i=0;i<v.size();i++)
        {
           s2+=v[i].second;
            
        }
        
        return s2;
        
    }
};