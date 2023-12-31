class Solution {
public:
   int firstOccur(vector<int>& nums, int target){
       int fastOccurIdx=-1;
       int s=0;
       int e=nums.size()-1;
       int mid = s+(e-s)/2;
       while(s<=e){
           if(nums[mid]==target) {
               fastOccurIdx=mid;
               e=mid-1;
           }
           else if(nums[mid]<target){
               s=mid+1;
           }
           else e=mid-1;
           mid=s+(e-s)/2;
       }
    return fastOccurIdx;
   }
 int lastOccur(vector<int>& nums, int target){
       int lastOccurIdx=-1;
       int s=0;
       int e=nums.size()-1;
       int mid = s+(e-s)/2;
       while(s<=e){
           if(nums[mid]==target){
              lastOccurIdx=mid;
              s=mid+1; 
           }
           else if(nums[mid]<target) s=mid+1;
           else e=mid-1;
           mid=s+(e-s)/2;
       }
       return lastOccurIdx;
   }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {firstOccur(nums,target),lastOccur(nums,target)};
    }
};