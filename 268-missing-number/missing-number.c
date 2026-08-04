int missingNumber(int* nums, int numsSize) {
   int sum=0;
   int sum2=(numsSize*(numsSize+1))/2;

   for(int i=0; i < numsSize ; i++){
    sum = sum + nums[i];
   }

   return sum2-sum;
}