double(int *num,int size){
	if(size%2==1){
		return num[size/2];
	} else{
		int l=num[size/2-1];
		int h=num[size/2];
		return (h+l)/2.0;
	}
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
	int* m=(int *)malloc(sizeof(int)*(nums1Size+nums2Size));
	int i=0,j=0,n=0;
	if(nums1Size==0){
		return getResult(nums2,nums2Size);
	}
	if(nums2Size==0){
		return getResult(nums1,nums1Size);  
	}

	if(nums1[nums1Size-1]<=nums2[0]){
		memcpy(m,nums1,sizeof(int)*nums1Size);
		n=nums1Size;
		i=nums1Size;
	}
	if(nums2[nums2Size-1]<=nums1[0]){
		memcpy(m,nums2,sizeof(int)*nums2Size);
		n=nums2Size;
		j=nums2Size;
	}

	while(i<nums1Size && j<nums2Size){
		if(nums1[i]<nums2[j]){
			m[n]=nums1[i];
			i++;
		}else if(nums1[i]>nums2[j]){
			m[n]=nums2[j];
			j++;
		}else{
			m[n]=nums1[i];
			n++;
			m[n]=nums2[j];
			i++;
			j++;
		}
		n++;
	}
	if(i<nums1Size){
		for(;i<nums1Size;i++){
			m[n]=nums1[i];
			n++;
		}
	}

	if(j<nums2Size){
		for(;j<nums2Size;j++){
			m[n]=nums2[j];
			n++;
		}
	}
	return getResult(m,n);
}

