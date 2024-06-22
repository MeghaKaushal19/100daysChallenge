class Solution {
public:
int searchInsert(vector& nums, int target) {
int n = nums.size();
for(int i = 0;i<n;i++){
if(nums[i]==target){
return i;
}
else if(target<nums[0]){
return 0;
}
else if(target<nums[i]&&target>nums[i-1]){
return i;
}
else if(target>nums[n-1]){
return n;
}

    }
    return 0;
}
};
