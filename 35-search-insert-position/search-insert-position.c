int searchInsert(int* nums, int numsSize, int target) {
    int supposed_indx=0;
for(int i=0;i<numsSize;i++){
    if(nums[i]==target){return i;}
if(nums[i]<target) supposed_indx++;



}
return supposed_indx;


    
}