# include<bits/stdc++.h>
using namespace std;

// UNORDERED SET
/*
- An unordered set in STL is a container that stores unique elements in no particular order. 
- Every operation on an unordered set takes O(1) complexity in the average case and takes O(n) in the worst case.
*/

int main(){

    /*
        IMP FUNCTIONS:
        - insert() - to insert an element in the unordered set.
        - begin() - return an iterator pointing to the first element in the unordered set.
        - end() - returns an iterator to the theoretical element after the last element.
        - count() - it returns 1 if the element is present in the container otherwise 0.
        - clear() - deletes all the elements in unordered set.
        - find() - to search an element in the unordered set.
        - size() - returns the size of the unordered set.
        - cbegin() – it refers to the first element of the unordered set.
        - cend() – it refers to the theoretical element after the last element of the unordered set.
        - bucket_size() - gives the total number of elements present in a specific bucket in an unordered set.
        - emplace() - to insert an element in the unordered set.
        - max_size() - the maximum elements an unordered_set can hold.
        - max_bucket_count() - to check the maximum number of buckets an unordered set can hold.    
    */


    // Declaration
    unordered_set<int> us;

    // Insert Elements
    for(int i=1; i<=10; i++){
        us.insert(i);
    }

    us.insert(2);

    // Display elements.
    cout<<"Elements: ";
    for(auto it = us.begin(); it!=us.end(); it++){
        cout<<*it<<" "; // Need to dereference the iterator.
    }
    cout<<endl;

    //Find and Count elements
    if(us.find(2) != us.end()) cout<<"2 is present."<<"\n";  // find() returns iterator if it finds the element else returns .end()
    
    // Erase Elements
    us.erase(2);

    // Display elements after deletion
    cout << "Elements after deleting the element: ";
    for (auto it = us.begin(); it != us.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Check the Size
    cout<<"The size of the unordered set is: "<<us.size()<<endl;

    //Check if unordered set is empty?
    cout<< (us.empty()? "Unordered Set is Empty" : "Unordered Set is not Empty.") << endl;

    // Clear All Elements
    us.clear();

    // Now Check the Size
    cout<<"The size of the unordered set is: "<<us.size()<<endl;


}

