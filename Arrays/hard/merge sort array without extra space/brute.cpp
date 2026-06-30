// LeetCode :not in leetcode
// Topic: Arrays
// Difficulty: Hard
class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            vector<int>nums3(n+m);
            int left=0;
            int right=0;
            int index=0;
            while(left<m && right<n){
                if(nums1[left]<nums2[right]){
                    nums3[index]=nums1[left];
                    index++;
                    left++;
                }
                else{
                    nums3[index]=nums2[right];
                    index++;
                    right++;
                }
            }
            while(left<m){
                nums3[index++]=nums1[left++];
            }
            while(right<n){
                nums3[index++]=nums2[right++];
            }
            for(int i=0;i<n+m;i++){
                if(i<m){
                    nums1[i]=nums3[i];
                }
                else{
                    nums2[i-m]=nums3[i];
                }
            }
    
        }
    };