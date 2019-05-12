#include <stdio.h>
#include <stdlib.h>
#define min(x,y) (x<y?x:y)
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*1.dp[i]表示到达第i步楼梯的最小花费，即最优解
2.要到达第i步楼梯，必然是通过爬一个阶梯或者爬两个阶梯实现的
    爬一个阶梯的情况：dp[i-2]
    爬两个阶梯的情况：dp[i-1]
3.选择是爬一个阶梯，还是爬两个阶梯的花费最少。即 min(dp[i-2],dp[i-1])
4.经过第三步后已经是最优的状态，最后爬上当前楼梯，即 min(dp[i-2],dp[i-1]) + cost[i]
*/ 
int main() {
	int n;
	printf("请输入台阶数n:");
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
		  dp[0]=0;dp[1]=0;   //初始化赋值 
        for(i=2;i<n+1;i++){
        	 dp[i] = min(dp[i-2]+cost[i-2],dp[i-1]+cost[i-1]);
		}
	
        printf("最低花费为：%d",dp[n]);
    }
