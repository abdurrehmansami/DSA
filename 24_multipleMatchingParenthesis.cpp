#include<iostream>
using namespace std;
struct stack{
    int size;
    int top;
    char* arr;
};
void push(struct stack* p, char element){
    if(p->top == p->size-1){
        cout<<"The stack is overflow cannot push "<<element<<endl;
    }
    else{
        p->arr[p->top+1] = element;
        p->top++;
    }
}
char pop(struct stack* p){
    if(p->top == -1){
        cout<<"the stack is underflow cannot pop element"<<endl;
        return -1;
    }
    char val = p->arr[p->top];
    p->top--;
    return val;    
}
int parathesischeck(string s){
    struct stack* p = new stack();
    p->top = -1;
    p->size = 100;
    p->arr = new char(p->size);
    for(int i = 0; i<9; i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            push(p, s[i]);
        }
        else if(s[i] == ')' || s[i] == ']' || s[i] == '}'){
            if(p->top == -1){
                return 0;
            }
            else{
                if(p->arr[p->top] == '(' && s[i] == ')'){
                    pop(p);
                }
                else if(p->arr[p->top] == '[' && s[i] == ']'){
                    pop(p);
                }
                else if(p->arr[p->top] == '{' && s[i] == '}'){
                    pop(p);
                }
                else{
                    return 0;
                }
            }
        }
    }
    if(p->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    string s = "([7-9}-7)";
    if(parathesischeck(s)){
        cout<<"this is a stable expression "<<endl;
    }
    else{
        cout<<"this is a unstable expression "<<endl;
    }
    return 0;
}
