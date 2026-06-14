# include<bits/stdc++.h>
using namespace std;

// STACK
/*
- A stack is a non-primitive linear data structure. 
- It is an ordered list in which the addition of a new data item and deletion of the already existing data item is done from only one end known as the top of the stack (TOS). - The element which is added in last will be first to be removed and the element which is inserted first will be removed in last. 
- As all the deletion and insertion in a stack are done from the top of the stack, the last added element will be the first to be removed from the stack. 
- That is the reason why stack is also called Last-in-First-out (LIFO).
*/

void printstack(stack<int> s1){
    stack<int> s2 = s1;
    while(!s2.empty()){
        cout<<s2.top()<<" ";
        s2.pop();
    }
    cout<<endl;
}

int main(){
    /*
        IMP FUNCTIONS:
        - push() – to insert an element in the stack.
        - pop() – deletes the last element of the stack.
        - top() – returns the element at the top of the stack.
        - emplace() – to insert an element in the stack.
        - size() – returns the number of elements on the stack.
        - empty() – to check if the stack is empty or not.
    */

    // Declaration
    stack<int> s;

    // Inserting (Pushing) Elements
    for(int i=1; i<=5; i++){
        s.push(i);
    }

    cout<<"Elements in Stack: ";
    printstack(s);

    cout<<"Size of Stack: "<<s.size();
    cout<<"Top of Stack: "<<s.top();
    

    // Removing the Top element
    s.pop();

    cout<<"Stack after pop operation: ";
    printstack(s);
}