#include <stdio.h>
#include <malloc.h>
struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	if(l1==NULL)return l2;
	if(l2==NULL)return l1;
	struct ListNode *node;
	struct ListNode *prev=NULL,*head=NULL;
	int h=0;
	while(l1!=NULL||l2!=NULL||h){
		node=(struct ListNode *)malloc(sizeof(struct ListNode));
		int d1=l1==NULL?0:l1->val;
		int d2=l2==NULL?0:l2->val;
		int total=d1+d2+h;
		node->val=total%10;
		h=total/10;
		if(head==NULL){
			head=node;
		}else{
			prev->next=node;
		}
		node->next=NULL;
		prev=node;
		if(l1!=NULL){
			l1=l1->next;
		}
		if(l2!=NULL){
			l2=l2->next;
		}
		return head;
	}
}
