#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1,n2;
	printf("����������nums1�ĸ���n1:");
	scanf("%d",&n1);
	printf("����������nums2�ĸ���n2:");
	scanf("%d",&n2);
	int nums1[n1],nums2[n2];
	int i=0;
	printf("����������nums1:");
	for(i=0;i<n1;i++){
		scanf("%d",&nums1[i]);
	}
	int j=0;
	printf("����������nums2:");
	for(j=0;j<n2;j++){
		scanf("%d",&nums2[j]);
	}
	int flag[999];
	for(i=0;i<n1;i++){
		if(flag[nums1[i]]==1){
			continue;
		}else{
			for(j=0;j<n2;j++){
			if(nums1[i]==nums2[j]){
					printf("%d  ",nums1[i]);	
					flag[nums1[i]]=1;
					break;
			}	
				
		}
		}
	}
}
