// LeetCode 645. Set Mismatch
// Topic: Arrays
// Difficulty: Hard

class Solution {
    public:
        vector<int> findErrorNums(vector<int>& nums) {
            int n=nums.size();
            vector<int> hash(n + 1, 0);
            for(int i=0;i<n;i++){
                 hash[nums[i]]++;
            }
            int a=-1;
            int b=-1;
            for(int i=1;i<=n;i++){
                if(hash[i]==2){
                    a=i;
                }
                else if(hash[i]==0){
                    b=i;
                }
            }
            return {a,b};
        }
    };