#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef enum{OK = 0,ERROR = 1} Status;
#define STACKMAX 10
#define INITIAL_SIZE 0

typedef int ElemType;
typedef struct 
{
	ElemType data;
	ElemType *next;
}StackNode;

typedef struct 
{
	StackNode *head;
	int cursize;
}ListStack;

Status InitStack(ListStack *st)
{
	if(NULL == st)
	{
		return ERROR;
	}
	else
	{
		st->cursize = INITIAL_SIZE;
		ListStack *ss;
		ss = (ListStack *)malloc(sizeof(ElemType)*STACKMAX);
		assert(ss != NULL && "Assert ss failed!");
		st->head = ss->head;
		st->head->data = -1; 
		
		free(ss);
		
		return OK;
	}
		
}

ElemType Input_ElemType(void)
{
	printf("input:\n");
	ElemType x;
	scanf("%d",&x);
	return x;
} 

Status Push(ListStack *st,const ElemType x) 
{
	if(NULL == st)//这里暂时不对元素x进行验证，假设所输入x 都是正确的 
	{
		return ERROR;
	}
	else
	{
		ListStack *s = (ListStack *)malloc(sizeof(ElemType)*STACKMAX);
		assert(s != NULL && "Assert s failed!");
		s->head->data = x;
		st->head->next = s->head->data;
		s->head->next = s->head->next;
		
		free(s);
		return OK;	 	
	} 
}

Status DestroyStack(ListStack *st)
{
	
	if(NULL == st)
	{
		return ERROR;
	}
	else
	{
		;//Pop(st);
	}
}

int main(int argc, char *argv[]) 
{
	
	ListStack st;
	InitStack(&st);
	
	Push(&st,Input_ElemType());	
	//DestroyStack(&st);
	return 0;
}
