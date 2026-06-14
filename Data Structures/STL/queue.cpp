# include<bits/stdc++.h>
using namespace std;

// QUEUE
/*
- A queue is a linear list of elements in which deletions can take place only at one end called the front, and insertions can take place only at the end called the rear. 
- The queue is a First In First Out type of data structure (FIFO), the terms FRONT and REAR are used in describing a linear list only when it is implemented as a queue. 
*/

void printqueue(queue<int> q1){
    queue<int> q2 = q1;
    while(!q2.empty()){
        cout<<q2.front()<<" ";
        q2.pop();
    }
    cout<<endl;
}

int main(){
    /*
        IMP FUNCTIONS:
            - push() : to insert an element in the queue.
            - pop() : deletes the first element of the queue.
            - front() : returns a reference to the first element of the queue.
            - back() : returns a reference to the last element of the queue.
            - emplace() : to insert an element in the queue.
            - size() : returns the number of elements on the queue.
            - empty() : to check if the queue is empty or not.
    */

    // Declaration
    queue<int> q;

    // Adding (Pushing) elements
    for(int i=1; i<=5; i++){
        q.push(i);
    }

    cout<<"Elements in queue are: ";
    printqueue(q);

    cout<<"Size of the queue: "<<q.size()<<endl;
    cout<<"Front element: "<<q.front()<<endl;
    cout<<"Last element: "<<q.back()<<endl;
    
    // Popping the first element
    q.pop();

    cout<<"Elements after removing first element in queue: ";
    printqueue(q);
}