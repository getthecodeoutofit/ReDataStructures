#include<bits/stdc++.h>
using namespace std;

void push(char ch,char *Stack,int &Top,int &size){
    if(Top == size-1){
    cout << "Stack is Full: ";
    return;
    }

    else{
        Stack[++Top] = ch;
    }
}

void pop(char *stack,int &Top){
    if(Top == -1){
        cout << "Stack is Empty: ";
        return;
    }
    else{
        Top--;
    }

}

void convert(string &in,string &post,char *stack,int stSize){
    int Top =0;
    stack[Top] = '(';
    int s = in.size();
    in[s] = ')';
    in[s+1] = '\0';
    for(int i=0;i<in.size();i++){
        if((in[i]>='a' && in[i]<='z')||(in[i]>='A' && in[i]<='Z')){
            push(in[i],stack,Top,stSize);
        }
        else if(){

        }
    }

}

int main(){
    string Infix,Postfix;
    char Stack[100];
    cout << "Enter the Infix Expression: ";
    cin >> Infix;
    cout << "Converting the expression to postfix: ";
    convert(Infix,Postfix,Stack,100);
    cout << "The Postfix expression is: "<< Postfix << "\n";
    return 0;
}