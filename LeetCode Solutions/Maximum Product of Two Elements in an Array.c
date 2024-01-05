void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int maxProduct(int* nums, int numsSize) {
    for(int i = 0; i<numsSize; i++) {
        for(int j = i+1; j<numsSize; j++) {
            if(nums[i]<nums[j])
                swap(&nums[i],&nums[j]);
        }
    }
    return ((nums[0]-1)*(nums[1]-1));
}
