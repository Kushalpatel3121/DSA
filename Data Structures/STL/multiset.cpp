# include<bits/stdc++.h>
using namespace std;

// MULTISET
/*
- A multiset in STL is an associative container similar to a set, but it allows duplicate elements.
- The difference between unordered multiset and multiset is that multiset is just ordered.
*/

int main(){
    /*
        IMP FUNCTIONS:
        - insert() - to insert an element.
        - begin() - returns iterator to first element
        - end() - returns iterator after last element
        - count() - count occurrences of an element
        - clear() - deletes all elements.
        - find() - search an element
        - erase() - delete a single element or range.
        - size() - returns number of elements.
        - empty() - checks if multiset is empty.
        - cbegin() - returns constant iterator to first element
        - cend() - returns constant iterator after last element
        - rbegin() - returns reverse iterator to last element
        - rend() - returns reverse iterator before first element
        - emplace() - insert an element efficiently
        - max_size() - returns maximum number of elements a multiset can hold
    */

    // Declaration
    multiset<int> ms;

    // Insert Elements
    for(int i=1; i<=10; i++){
        ms.insert(i);
    }

    // Duplicates allowed.
    ms.insert(2);

    // Display elements.
    cout<<"Elements: ";
    for(auto it = ms.begin(); it!=ms.end(); it++){
        cout<<*it<<" "; // Need to dereference the iterator.
    }
    cout<<endl;

    //Find and Count elements
    if(ms.find(2) != ms.end()) cout<<"2 is present."<<"\n";  // find() returns iterator if it finds the element else returns .end()
    
    // Erase Elements
    ms.erase(2);  // Erases all occurances.

    // Display elements after deletion
    cout << "Elements after deleting the element: "; 
    for (auto it = ms.begin(); it != ms.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Check the Size
    cout<<"The size of the multiset is: "<<ms.size()<<endl;

    //Check if unordered set is empty?
    cout<< (ms.empty()? "Multiset is Empty" : "Multiset is not Empty.") << endl;

    // Clear All Elements
    ms.clear();

    // Now Check the Size
    cout<<"The size of the Multiset is: "<<ms.size()<<endl;
}