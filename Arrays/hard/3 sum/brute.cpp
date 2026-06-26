// LeetCode 3. 3 Sum
// Topic: Arrays
// Difficulty: Hard
class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& nums) {
            int n=nums.size();
            set<vector<int>>st;
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    for(int k=j+1;k<n;k++){
                        if(nums[i]+nums[j]+nums[k]==0){
                             vector<int>v={nums[i],nums[j],nums[k]};
                             sort(v.begin(),v.end());
                             st.insert(v);
                        }
                    }
                }
            }
            vector<vector<int>>ans(st.begin(),st.end());
            return ans;
        }
    };