#include<stdio.h>
#include<malloc.h>
int lengthOfLongestSubstring(char* s);
int main(){
	char *a="abcabcbb";
	int r=lengthOfLongestSubstring(a);
	printf("%d\n",r);
	return 0;
}
int lengthOfLongestSubstring(char* s) {
	int i=0;
	int maxLength=0;
	int currentLength=0;
	int hasGoneNum=0;
	currentLength=0;
	while(s[i]!='\0'){
		int n=hasGoneNum;
		int isHasSame=0;
		for(;n<i;n++){
			if(s[n]==s[i]){
				isHasSame=1;
				currentLength=i-n;
				hasGoneNum=n+1;
				break;
			}
		}
		if(!isHasSame){
			currentLength++;
		}
		if(maxLength<currentLength){
			maxLength=currentLength;
		}
		i++;
	}
	return maxLength;
}

