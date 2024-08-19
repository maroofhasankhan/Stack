#include<iostream>
using namespace std;

struct stack
{
    int top;
    int size;
    int *arr;
};
int isEmpty(stack *s)
{
    if(s->top == -1)
    {
        return 1;
    }
    return 0;
}
int isfull(stack *s)
{
    if(s->top == s->size-1)
    {
        return 1;
    }
    return 0;
}
void push(stack *s, int value)
{
    if(isfull(s))
    {
        cout<<"Stack is Full"<<endl;
    }
    else
    {
        s->top+=1;
        s->arr[s->top]=value;
    }
}
int pop(stack *s)
{
    if(isEmpty(s))
    {
        cout<<"Stack is Empty"<<endl;
    }
    else
    {
        int val = s->arr[s->top];
        s->top--;
        return val;
    }
}
int peek(stack *s,int i)
{
    if (s->top-i+1<0)
    {
        cout<<"Not a valid Possition For stack";
    }
    else
    {
        return s->arr[s->top-i+1];
    }
}
int main()
{
    struct stack * s= new stack;
    // cout<<s.top;
    s->size=50;
    s->top=-1;
    s->arr=new int[s->size];
    cout<<isEmpty(s)<<endl;
    // push(s,8);
    // cout<<pop(s)<<endl;
    cout<<isEmpty(s)<<endl;

    return 0;
}
