#include <stdio.h>
#include <stdlib.h>
#define min(x,y) (x<y?x:y)
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*1.dp[i]��ʾ�����i��¥�ݵ���С���ѣ������Ž�
2.Ҫ�����i��¥�ݣ���Ȼ��ͨ����һ�����ݻ�������������ʵ�ֵ�
    ��һ�����ݵ������dp[i-2]
    ���������ݵ������dp[i-1]
3.ѡ������һ�����ݣ��������������ݵĻ������١��� min(dp[i-2],dp[i-1])
4.�������������Ѿ������ŵ�״̬��������ϵ�ǰ¥�ݣ��� min(dp[i-2],dp[i-1]) + cost[i]
*/ 
int main() {
	int n;
	printf("������̨����n:");
	scanf("%d",&n);
	int cost[n],dp[n+1],i,j;
	for(i=0;i<n;i++){
		scanf("%d",&cost[i]);
	}
	for(i=0;i<n;i++){
		printf("cost[%d]=%d\n",i,cost[i]);
	}   
		if(n<=0)  return 0;        
        if(n==1)
        {
          return cost[0];  
        }  
        if (n==2)
        {
            return min(cost[0],cost[1]);
        }
		  dp[0]=0;dp[1]=0;   //��ʼ����ֵ 
        for(i=2;i<n+1;i++){
        	 dp[i] = min(dp[i-2]+cost[i-2],dp[i-1]+cost[i-1]);
		}
	
        printf("��ͻ���Ϊ��%d",dp[n]);
    }
