int missingNumber(int* nums, int numsSize) {
   int sum=0;
   int sum2=0; 

   for(int i=0; i < numsSize ; i++){
    sum = sum + nums[i];
   }

   sum2=(numsSize*(numsSize+1))/2;

   return sum2-sum;
}