#include<iostream>
using namespace std;
#define SIZE 5
int stack[SIZE];
int top = -1;

bool isEmpty(){
    return top == -1;
}


bool isFull(){
    return top == SIZE -1 ;

}

void push(int element){
    if(isFull()){
        cout<<"stack over flow\n";
    }
    else{
        top++;
        stack[top] = element;
    }

    
}

int main()
{
    push(10);
    push(120);
    push(30);
    push(20);
    push(20);
    push(20);

    for (size_t i = 0; i <= top; i++)
    {
        cout << stack[i]<< endl;
    }
    

    return 0;
}