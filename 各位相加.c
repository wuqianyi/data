#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("������һ���Ǹ�����n:");
	int num;
	scanf("%d",&num);
	int m,temp;
	if(num<0){
		printf("�������󣡣�!���������룡����"); 
	} 
	if(num<10){
	return num;
	}
	while(num>=10){
			m=num%10;   //ѭ������   m=38%10=8  m=123%10=3  m=12%10=2
			temp+=m;       //��������ĺ�    temp=0+8  temp=0+3  temp=3+2=5
			num=num/10;            //num=38/10=3  num=123/10=12  num=12/10=1
			if(num<10){   //nΪ��λ�� 
				num+=temp;	
				temp=0;
			} 
		}
	printf("���Ϊ��%d",num);
}

