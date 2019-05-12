#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("请输入一个非负整数n:");
	int num;
	scanf("%d",&num);
	int m,temp;
	if(num<0){
		printf("输入有误！！!请重新输入！！！"); 
	} 
	if(num<10){
	return num;
	}
	while(num>=10){
			m=num%10;   //循环求余   m=38%10=8  m=123%10=3  m=12%10=2
			temp+=m;       //存放余数的和    temp=0+8  temp=0+3  temp=3+2=5
			num=num/10;            //num=38/10=3  num=123/10=12  num=12/10=1
			if(num<10){   //n为个位数 
				num+=temp;	
				temp=0;
			} 
		}
	printf("结果为：%d",num);
}

