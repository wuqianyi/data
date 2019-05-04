#include<stdio.h>
#include<stdlib.h>

typedef struct Lnode{
	int data;
	struct Lnode *next;
}Linklist;

Linklist *Creat(int a[],int n)
{
	Linklist *h=NULL,*tail,*p;
	int i;
	for(i=0;i<n;i++)
	{
		p=(Linklist *)malloc(sizeof(Linklist));
		p->data=a[i];
		p->next=NULL;
		if(!h)	//h为第一个结点 
			h=tail=p;
		else
			tail=tail->next=p;	//尾插法	
	}
	return h;
}

Linklist * Remove(Linklist *h,int m)
{
	Linklist *p=h,*q=NULL;
	int i;
	if(m-1)//删除非头结点 
		{
			for(i=0; i<m-1 ; i++,q=p,p=p->next);
			q->next=p->next;
			free(p);			
		}
	else {
		h=h->next;
		free(p);
	}
	return h;	
}
Printlist(Linklist *h)
{
	Linklist *p;
	for(p=h;p!=NULL;p=p->next) 
		if(p->next!=NULL)
			printf("%d->",p->data);
		else
			printf("%d",p->data);			
}
int main()
{
	int n,i,a[n],node,m;
	printf("请输入结点个数n：");
	scanf("%d",&n);
	printf("请输入结点数据：\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	Linklist *head=NULL;
	head=Creat(a,n);	
	printf("打印链表:\n");
	Printlist(head);
	Linklist *new;
	printf("\n请输入删除倒数第几个结点node：");
	scanf("%d",&node);
	if(node>n)
		printf("删除结点有误！！！");
	m=n-node+1;    //正数 
	new=Remove(head,m);
	Printlist(new);
	return 0;
 } 
