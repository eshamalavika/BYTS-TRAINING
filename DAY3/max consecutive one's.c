int findMaxConsecutiveOnes(int* nums, int numssize){
   int count = 0;
   int maxcount = 0;
   for(int i = 0; i<numssize; i++)
   {
       if(nums[i] == 1)
       count++;
       else
       count=0;
       if(count > maxcount)
       {
           maxcount = count;
       }
       return maxcount;
   }
}
