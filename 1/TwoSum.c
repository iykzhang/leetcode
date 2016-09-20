#include <stdio.h>
#include <stdbool.h>
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

	int a[2];

	int* r=a;
	int i;
	int j;
	bool isFind=false;
	for(i=0;i<numsSize;i++){
		if(isFind){
			break;
		}
		for(j=i+1;j<numsSize;j++){
			if(nums[i]+nums[j]==target){
				a[0]=i;
				a[1]=j;
				isFind=true;
				break;
			}
		}
	}

	return r;

}
