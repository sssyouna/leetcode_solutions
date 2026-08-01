/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {

   for(int i =digitsSize-1;i>=0;i--){
        if (digits[i] < 9){
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
            }
        if(digits[i]==9){
            digits[i]=0;}}
   digits[0]=1;
   digits = realloc(digits, (digitsSize + 1) * sizeof(int));
   digits[digitsSize]=0;
   *returnSize = ++digitsSize;
    return digits;
}