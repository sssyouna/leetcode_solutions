void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int k=m;
if(m==0){
    for(int i=0;i<n;i++){
       nums1[i]=nums2[i];  
    }
return ;}

    for(int i=0;i<n;i++){
        for(int j=k-1;j>=0;j--){
            
            if(nums2[i]<nums1[j]){
                nums1[j+1]=nums1[j];
            }
            else{
                nums1[j+1]=nums2[i];
                break;
            }
             if (j == 0) {
        nums1[0] = nums2[i];
    }
        }
        k++;
        }
    }
    
