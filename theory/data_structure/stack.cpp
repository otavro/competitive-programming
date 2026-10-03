#include <iostream>
#include <string>

/*
Stack

Standart Stack Operations

1) push()
Place an item onto the stack. If there is no place for new item, stack is in overflow state.

2) pop()
Return the item at the top of the stack and then remove it. If pop is called when stack is empty, it is in an underflow state.

3) isEmpty()
Tells if the stack is empty or not

4) isFull()
Tells if the stack is full or not.

5) peek()
Acess the item at the i position

6) count()
Get the number of items in the stack

7) change()
Change the item at the i position

8 display()
Display all items in the stack 
*/

using namespace std;

class Stack{
    private:
        int top;
        int arr[5];
    
    public:
        Stack(){
            top = -1;
            for(int i = 0; i < 5; i++)
                arr[i] = 0;
        }

        bool isEmpty(){
            if(top == -1) return true;
            return false;
        }

        bool isFull(){
            if(top == 4) return true;
            return false;
        }

        void push(int val){
            if(isFull()){
                cout << "stack overflow" << endl;
                return;
            }
            arr[++top] = val;                
        }

        int pop(){
            if(isEmpty()){
                cout << "stack underflow" << endl;
                return 0;
            }
            int popValue = arr[top];
            arr[top] = 0;
            top--;
            return popValue;
        }

        int count(){ return top+1;}

        int peek(int pos){
            if(isEmpty){
                cout << "stack underflow" << endl;
                return 0;
            }
            return arr[pos];
        }

        void change(int pos, int value){
            arr[pos] = value;

        }

        void display(){
            for(int i = 4; i>= 0; i--){
                cout << arr[i] << endl;
            }
        }
};

int main(){



    return 0;
}