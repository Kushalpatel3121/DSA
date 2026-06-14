# include<bits/stdc++.h>
using namespace std;

// UNORDERED MULTISET
/*
- An unordered_multiset in STL is an associative container just like an unordered set.
- The only difference is it can store duplicate elements in it.
*/

int main(){
    /*
        IMP FUNCTIONS:
        - insert() - Used to insert an element in the unordered_multiset.
        - begin() - Returns an iterator pointing to the first element in the unordered_multiset.
        - end() - Returns an iterator pointing to the theoretical element after the last element.
        - count() - Returns the count of a particular element in the unordered_multiset.
        - clear() - Deletes all the elements in the unordered_multiset.
        - find() - Searches for an element in the unordered_multiset and returns an iterator to it if found, otherwise returns end().
        - erase() - Deletes a single element or elements between a specified range.
        - size() - Returns the number of elements present in the unordered_multiset.
        - empty() - Checks if the unordered_multiset is empty or not.
        - cbegin() – it refers to the first element of the unordered multiset.
        - cend() – it refers to the theoretical element after the last element of the unordered multiset.
        - rbegin() – it points to the last element of the unordered multiset.
        - rend() – it points to the theoretical element before the first element of the unordered multiset.
        - emplace() – to insert an element in the unordered multiset.
        - max_size() – the maximum elements an unordered multiset can hold.
    */

    // Declaration
    unordered_multiset<int> ums;

    // Insert Elements
    for(int i=1; i<=10; i++){
        ums.insert(i);
    }

    // Duplicates allowed.
    ums.insert(2);

    // Display elements.
    cout<<"Elements: ";
    for(auto it = ums.begin(); it!=ums.end(); it++){
        cout<<*it<<" "; // Need to dereference the iterator.
    }
    cout<<endl;

    //Find and Count elements
    if(ums.find(2) != ums.end()) cout<<"2 is present."<<"\n";  // find() returns iterator if it finds the element else returns .end()
    
    // Erase Elements
    ums.erase(2);  // Erases all occurances.

    // Display elements after deletion
    cout << "Elements after deleting the element: "; 
    for (auto it = ums.begin(); it != ums.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Check the Size
    cout<<"The size of the unordered multiset is: "<<ums.size()<<endl;

    //Check if unordered set is empty?
    cout<< (ums.empty()? "Unordered multiset is Empty" : "Unordered multiset is not Empty.") << endl;

    // Clear All Elements
    ums.clear();

    // Now Check the Size
    cout<<"The size of the unordered multiset is: "<<ums.size()<<endl;
}