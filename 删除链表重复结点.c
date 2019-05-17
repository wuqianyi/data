#include <stdio.h>
#include <stdlib.h>

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
Printlist(Linklist* head)  //��ӡ����
    {
        Linklist *p;
        p = head;
        while(p!=NULL)
        {
        	if(p->next!=NULL){
        		printf("%d->",p->data);
        		p = p->next;
			}
			else{
				printf("%d",p->data);		
				p = p->next;
			}
        }
      	
    }
Linklist * Delete(Linklist *head) 
    {
        if(head==NULL||head->next==NULL) return head;
        Linklist *p=head;  //����һ��ָ��ǰԪ�ص�ָ��current
        while(p->next)         //������Ϊ�ջ��������б��������һ��Ԫ��ʱ����ѭ��
        {   //���û���ҵ�����ǰ�ڵ���� 
            if(p->data!=p->next->data)
            {
               p=p->next; 
            }else  		//����ҵ���ǰ�ڵ��������һ������ֵ��ͬ����ǰ���ָ������һ��������һ�� 
            	p->next=p->next->next;
        }
        return head;
    }
int main()
{
	int n;
	printf("�����������n��");
	scanf("%d",&n);
	int a[n];
	printf("�����������ݣ�\n");
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	Linklist *head=NULL;
	head=Creat(a,n);	
	printf("����Ϊ:\n");
	Printlist(head);
	Linklist *new;
	printf("\nɾ���ظ����������Ϊ:\n");
	new=Delete(head);
	Printlist(new);
	return 0;
 } 
