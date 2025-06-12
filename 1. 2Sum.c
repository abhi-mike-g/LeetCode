int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    
    for(int i = 0; i < numsSize; i++){
        for(int j = i + 1; j < numsSize; j++){
            if(nums[i] + nums[j] == target){
                int* sol = (int*)malloc(2 * sizeof(int));
                sol[0] = i;
                sol[1] = j;
                *returnSize = 2;
                return sol;
            }
        }
    }

    *returnSize = 0;
    return returnSize;
}
