class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        unordered_map<char,int> ms;
        unordered_map<char,int> mt;
        if(s.length()!=t.length())return false;
        for(int i=0;i<s.length();i++)
        {
            ms[s[i]]++;
            mt[t[i]]++;
        }
        for(auto it:ms)
        {
            if(it.second!=mt[it.first]) return false;
        }
        return true;
        
    }
};