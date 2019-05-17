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
		if(!h)	//h为第一个结点 
			h=tail=p;
		else
			tail=tail->next=p;	//尾插法	
	}
	return h;
}
Printlist(Linklist* head)  //打印链表
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
        Linklist *p=head;  //设置一个指向当前元素的指针current
        while(p->next)         //当链表为空或者链表中遍历到最后一个元素时，出循环
        {   //如果没有找到，当前节点后移 
            if(p->data!=p->next->data)
            {
               p=p->next; 
            }else  		//如果找到当前节点和它的下一个结点的值相同，当前结点指向它下一个结点的下一个 
            	p->next=p->next->next;
        }
        return head;
    }
int main()
{
	int n;
	printf("请输入结点个数n：");
	scanf("%d",&n);
	int a[n];
	printf("请输入结点数据：\n");
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	Linklist *head=NULL;
	head=Creat(a,n);	
	printf("链表为:\n");
	Printlist(head);
	Linklist *new;
	printf("\n删除重复结点后的链表为:\n");
	new=Delete(head);
	Printlist(new);
	return 0;
 } 
