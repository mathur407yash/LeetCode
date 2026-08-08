class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        stack<int> st;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
            {
                st.push(i);
                
            }
            else 
            {
                k++;
            }

        }
        while(!st.empty())
        {
            int i=st.top();
            nums.erase(nums.begin()+i);
            st.pop();
        }
        return k;
    }
};