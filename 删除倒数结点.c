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
		if(!h)	//hΪ��һ����� 
			h=tail=p;
		else
			tail=tail->next=p;	//β�巨	
	}
	return h;
}

Linklist * Remove(Linklist *h,int m)
{
	Linklist *p=h,*q=NULL;
	int i;
	if(m-1)//ɾ����ͷ��� 
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
	printf("�����������n��");
	scanf("%d",&n);
	printf("�����������ݣ�\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	Linklist *head=NULL;
	head=Creat(a,n);	
	printf("��ӡ����:\n");
	Printlist(head);
	Linklist *new;
	printf("\n������ɾ�������ڼ������node��");
	scanf("%d",&node);
	if(node>n)
		printf("ɾ��������󣡣���");
	m=n-node+1;    //���� 
	new=Remove(head,m);
	Printlist(new);
	return 0;
 } 
