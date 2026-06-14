# include<bits/stdc++.h>
using namespace std;

// LIST
/*
-  A list in STL is a contiguous container that allows the inserting and erasing of elements in constant time and iterating in both directions.
*/

void printlist(list<int> l){
    for(auto it = l.begin(); it!=l.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    /*
        IMP FUNCTIONS:
        - push_back() – to insert an element at the end of the list.
        - push_front() – to insert an element at the front of the list.
        - pop_back() – deletes the last element of the list.
        - pop_front() – deletes the front element of the list.
        - front() – it gives a reference to the first element of the list.
        - back() – it gives a reference to the last element of the list.
        - reverse() – reverse the list.
        - sort() – sorts the list in ascending order.
        - size() – returns the number of elements on the list.
        - empty() – to check if the list is empty or not.
        - begin() – it refers to the first element of the list.
        - end() – it refers to the theoretical element after the last element of the list.
        - cbegin() – it refers to the first element of the list.
        - cend() – it refers to the theoretical element after the last element of the list.
        - rbegin() – it points to the last element of the list.
        - rend() – it points to the theoretical element before the first element of the list.
        - emplace_front() – to insert an element at the front of the list.
        - emplace_back() – to insert an element at the end of the list.
        - max_size() – the maximum elements a list can hold.
        - clear() – to delete all the elements of the list.
        - erase() – to delete a single element or elements between a particular range.
    */

    // Declaration
    list<int> l;

    //Adding Elements
    l.push_back(13);
    l.push_front(12);
    l.push_back(16);
    l.push_back(10);
    l.push_back(3);

    cout<<"Elements in the list are: ";
    printlist(l);

    cout<<"Reversing the list: ";
    l.reverse();
    printlist(l);

    cout<<"Sorting the list: ";
    l.sort();
    printlist(l);

    cout<<"Size of the list: "<<l.size()<<endl;
    cout<<"First Element: "<<l.front()<<endl;
    cout<<"Last Element: "<<l.back()<<endl;

    //Deleting elements
    l.pop_front();
    l.pop_back();

    cout<<"List elements after pop operation: ";
    printlist(l);
}