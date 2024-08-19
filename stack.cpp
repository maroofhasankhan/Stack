#include<iostream>
using namespace std;
class stack{
    public:
        int top=-1;
        int n=0;
        stack(int a){
            n=a;
        }
        int* arr=new int[n];
        // int isfull();
        void push(int x);
        int pop();
        void display();
};

    void stack::push(int x){
        if(top>=n-1){
            cout<<"Stack overlow";
            return;
        }
        top++;
        arr[top]=x;
        cout<<"pushed "<<x<<endl;
    }

    int stack::pop(){
        if(top==-1){
            cout<<"stack underflow"<<endl;
            
        }
        else{
        cout<<"popped "<<arr[top]<<endl;
        int z=arr[top];
        top--;
        return z;
        }
    }
    void stack::display(){
        for (int i=top; i>=0; i--){
            cout<<arr[i]<<" ";
        }
    }
int main(){
    stack a(10);
    a.push(10);
    a.push(20);
    a.push(58);
    a.push(79);
    a.display();
    cout<<a.pop()<<endl;
    a.display();
return 0;
}