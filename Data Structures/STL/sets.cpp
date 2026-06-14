# include<bits/stdc++.h>
using namespace std;

// SETS
/*
- A set in STL is a container that stores unique elements in a particular order. 
- Every operation on a set takes O(1) complexity in the average case and takes O(n) in the worst case.
- The only difference between unordered_set and set is that set keeps data sorted.
*/

int main(){
    /*
        IMP FUNCTIONS:
        - insert() – to insert an element in the set.
        - begin() – return an iterator pointing to the first element in the set.
        - end() – returns an iterator to the theoretical element after the last element.
        - count() – returns true or false based on whether the element is present in the set or not.
        - clear() – deletes all the elements in the set.
        - find() – to search an element in the set.
        - erase() – to delete a single element or elements between a particular range.
        - size() – returns the size of the set.
        - empty() – to check if the set is empty or not.
        - cbegin() – it refers to the first element of the set.
        - cend() – it refers to the theoretical element after the last element of the set.
        - rbegin() – it points to the last element of the set.
        - rend() – it points to the theoretical element before the first element of the set.
        - bucket_size() – gives the total number of elements present in a specific bucket in a set.
        - emplace() – to insert an element in the set.
        - max_size() – the maximum elements a set can hold.
        - max_bucket_count() – to check the maximum number of buckets a set can hold.
    */

    // Declaration
    set<int> s;

    // Insert Elements
    for(int i=1; i<=10; i++){
        s.insert(i);
    }

    // Duplicates not allowed.
    s.insert(2);

    // Display elements.
    cout<<"Elements: ";
    for(auto it = s.begin(); it!=s.end(); it++){
        cout<<*it<<" "; // Need to dereference the iterator.
    }
    cout<<endl;

    //Find and Count elements
    if(s.find(2) != s.end()) cout<<"2 is present."<<"\n";  // find() returns iterator if it finds the element else returns .end()
    
    // Erase Elements
    s.erase(2);

    // Display elements after deletion
    cout << "Elements after deleting the element: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Check the Size
    cout<<"The size of the set is: "<<s.size()<<endl;

    //Check if unordered set is empty?
    cout<< (s.empty()? "Set is Empty" : "Unordered Set is not Empty.") << endl;

    // Clear All Elements
    s.clear();

    // Now Check the Size
    cout<<"The size of the set is: "<<s.size()<<endl;

}