// LeetCode 1. 4 Sum
// Topic: Arrays
// Difficulty: Hard
lass Solution {
    public:
        vector<vector<int>> fourSum(vector<int>& nums, int target) {
            set<vector<int>> st;
            int n=nums.size();
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    set<long long>mpp;
                    for(int k=j+1;k<n;k++){
                       long long sum=nums[i]+nums[j]+nums[k];
                       long long forth=target-sum;
                       if(mpp.find(forth)!=mpp.end()){
                        vector<int>temp={nums[i],nums[j],nums[k],(int)forth};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                       }
                       mpp.insert(nums[k]);                    
                    }
                }
            }
            vector<vector<int>>v(st.begin(),st.end());
            return v;
        }
    };