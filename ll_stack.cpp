#include<iostream>
using namespace std;

struct stack
{
    int data;
    stack *next;
};

void transverse(stack *head)
{
    stack *temp=head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int isempty(stack *a)
{
    if(a ==NULL) 
    return 1;
    else
    return 0;
}
int isfull()
{
    stack *a =new stack;
    if(a ==NULL) 
    return 1;
    else
    return 0;
}
void peek(stack *head,int position)
{
    stack *a =head;
    for(int i=0;(i<position-1&&a!=NULL);i++)
    {
        a=a->next;
    }
    if (a ==NULL)
    {
        cout << "position does not exist" << endl;
    }
    else
    {
        cout<<a->data<<endl;
    }
}

stack * push(stack *head,int value)
{
    stack *ptr =new stack;
    ptr->data=value;

    if(ptr ==NULL)
    {
        cout<< "stack is Full"<<endl;
        return head;
    }
    else
    {
        if (head==NULL)
        {
           ptr->next=NULL;
           head=ptr;
           return head;
        }
        else
        {
            ptr->next=head;
            head=ptr;
            return head;
        }
        
    }
}
stack * pop (stack * head)
{
    if (isempty(head))
    {
        cout<<"Stack is empty"<<endl;
        return head;
    }
    else
    {
    stack *temp=head;
    cout<<head->data<<endl;
    head=head->next;
    free(temp);
    return head;
    }
}
int main()
{
    struct  stack * head=NULL;
    head=push(head,8);
    head=push(head,5);
    head=push(head,69);
    head=push(head,28);
    head=push(head,76);
    head=pop(head);
    peek(head,1);
    transverse(head);
    return 0;
}