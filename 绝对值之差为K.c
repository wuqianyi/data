#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main() {
	int N,k,arr[99999]; //n&k 1-9
	printf("���������ֵĳ���N��");
	scanf("%d",&N);
	printf("����������λ����ֵ֮��K:");
	scanf("%d",&k);
	int i=0,j=0,count=0;	int m[N+1];
	if(N==1){
		for(i=0;i<=9;i++){
			if(i==k){
				arr[j]=i;
				j++; 
			}
		} 
	}else{
		for(i=pow(10,N-1);i<=pow(10,N)-1;i++){//N:2 K:1 10-99 
			//��Nλ	
			m[N]=i/pow(10,N-1);
//			printf("%d...",m[N]); 
			//��һλ
			m[1]=i%10; 
//				printf("%d...",m[1]); 
		if(N>=3){
			int q=2;
			for(q=2;q<=N-1;q++){
			m[q]=(i%(int)(pow(10,q)))/((int)pow(10,q-1));
	 		}
		}
	//λ����ֵ
	//λ���ж� 10 12 
	int w=1;
	for(w=1;w<N&&abs(m[w]-m[w+1])==k;w++);
	if(w==N){
		arr[j]=i;
		printf("%d  ",arr[j]);
		count++;
		j++;
		}
	}
	printf("\n����Ϊ%d��������ÿ��������λ�ϵ����ֵľ���ֵ֮��Ϊ%d�����ָ�����%d��",N,k,count);
	return count;
	}
} 


