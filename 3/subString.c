#include<stdio.h>
#include<malloc.h>
int lengthOfLongestSubstring(char* s);
int main(){
	char *a="pwwkew";
	int r=lengthOfLongestSubstring(a);
	printf("%d\n",r);
	return 0;
}
int lengthOfLongestSubstring(char* s) {
	int i=0;
	int maxLength=0;
	int currentLength=0;
	printf("%s\n",s);
	int hasGoneNum=0;
	currentLength=0;
	while(s[i]!='\0'){
		printf("s[%d]=%c\n",i,s[i]);
		int n=hasGoneNum;
		int isHasSame=0;
		for(;n<i;n++){
			if(s[n]==s[i]){
				isHasSame=1;
				currentLength=0;
				hasGoneNum=n+1;
				i=hasGoneNum;
				printf("hasGoneNum=%d\n",hasGoneNum);
				break;
			}
		}
		if(!isHasSame){
			i++;
			currentLength++;
			if(maxLength<currentLength){
				maxLength=currentLength;
				printf("max=%d\n",maxLength);
			}
		}
	}
	return maxLength;
}

