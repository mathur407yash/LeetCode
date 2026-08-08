class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans;
        unordered_map<int,int>  m;
        // m[nums[0]]=0;
        for(int i=0;i<n;i++)
        {
           int exp=target-nums[i]; 
           if(m.find(exp)!=m.end())
           {
            return {m[exp],i};
           }
           
             m[nums[i]]=i;
            
           
        }
        return {};
        
    }
};