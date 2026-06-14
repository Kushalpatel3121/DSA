# include<bits/stdc++.h>
using namespace std;

// PRIORITY QUEUE
/*
- In the case of the max heap, priority queues are a type of container adaptors, specifically designed such that its first element is always the greatest of the elements it contains and the rest elements are in decreasing order.

In the case of the min heap, priority queues are a type of container adaptors, specifically designed such that its first element is always the smallest of the elements it contains and the rest elements are in increasing order.

Note: In C++ STL by default max-heap is created.
*/

void print_max_priorityqueue(priority_queue<int> pq){
    priority_queue<int> pq2 = pq;
    while(!pq2.empty()){
        cout<<pq2.top()<<" ";
        pq2.pop();
    }
    cout<<endl;
}

void print_min_priorityqueue(priority_queue<int, vector<int>, greater<int>> pq){
    priority_queue<int, vector<int>, greater<int>> pq2 = pq;
    while(!pq2.empty()){
        cout<<pq2.top()<<" ";
        pq2.pop();
    }
    cout<<endl;
}

int main(){
    /*
        IMP OPERATIONS:
        - push() – to insert an element in the priority queue.
        - pop() – deletes the top element of the priority queue.
        - top() – returns the element at the top of the priority queue.
        - emplace() – to insert an element in the priority.
        - size() – returns the number of elements in the priority queue.
        - empty() – to check if the priority queue is empty or not.
    */

    // MAX-HEAP

    // Declaration
    // priority_queue<int> pq;

    // //Adding Elements
    // pq.push(12);
    // pq.push(23);
    // pq.push(3);
    // pq.push(10);
    // pq.push(7);

    // cout<<"Elements in priority queue: ";
    // print_max_priorityqueue(pq);

    // cout<<"Size of priority queue: "<<pq.size()<<endl;
    // cout<<"The top element: "<<pq.top()<<endl;
    // cout<<"Pop the top element: "<<endl;
    // pq.pop();  //Pop the elements
    // print_max_priorityqueue(pq);


    // MIN-HEAP

    //Declaration
    priority_queue<int, vector<int>, greater<int>> pq;

    //Adding Elements
    pq.push(12);
    pq.push(23);
    pq.push(3);
    pq.push(10);
    pq.push(7);

    cout<<"Elements in priority queue: ";
    print_min_priorityqueue(pq);

    cout<<"Size of priority queue: "<<pq.size()<<endl;
    cout<<"The top element: "<<pq.top()<<endl;
    cout<<"Pop the top element: "<<endl;
    pq.pop();  //Pop the elements
    print_min_priorityqueue(pq);

}