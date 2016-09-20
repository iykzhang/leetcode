#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>

int* twoSum(int* nums,int numsSize,int target);

int main(){
	int nums[]={3,2,4};
	int* r=twoSum(nums,3,6);
	int i;
	for(i=0;i<2;i++){
		printf("%d\n",r[i]);
	}
	return 0;
}

int* twoSum(int* nums, int numsSize, int target) {

	int* a = (int *)malloc(sizeof(int) * 2);
	int i,j;
	for(i=0;i<numsSize;i++){
		for(j=numsSize-1;j>i;j--){
			if(nums[i]+nums[j]==target){
				a[0]=i;
				a[1]=j;
				return a;
			}
		}
	}
	return a;
}
