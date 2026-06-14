# include<bits/stdc++.h>
using namespace std;

// VECTORS
/*
- Vectors in STL are basically dynamic arrays that have the ability to change size whenever elements are added or deleted from them. 
- Vector elements can be easily accessed and traversed using iterators.
- A vector stores elements in contiguous memory locations.
*/

int main(){

    /*
        IMP FUNCTIONS:
        - begin() - it returns an iterator pointing to the first element of the vector.
        - end() - it returns an iterator pointing to the element theoretically after the last element of the vector.
        - push_back() - it accepts a parameter and insert the element passed in the parameter in the vectors, the element is inserted at the end.
        - insert() - it is used to insert an element at a specified position.
        - erase() - it is used to delete a specific element
        - pop_back() - it deletes the last element and returns it to the calling function.
        - front() - it returns a reference to the first element of the vector.
        - back() - it returns a reference to the last element of the vector.
        - clear() - deletes all the elements from the vector.
        - empty() - to check if the vector is empty or not.
        - size() - returns the size of the vector.
        - cbegin() - it refers to the first element of the vector.
        - rbegin() - it points to the last element of the vector.
        - rend() - it points to the theoretical element before the first element of the vector.
        - crbegin() - it refers to the last element of the vector.
        - cend() - it refers to the theoretical element after the last element of the vector.
        - crend() - it refers to the theoretical element before the first element of the vector.
        - max_size() - returns the maximum size the vector can hold.
        - capacity() - it returns the current capacity of the vector. 
    */

    // Declaration
    vector<int> vc;

    //Insert Elements (added at last)
    for(int i=1; i<=10; i++){
        vc.push_back(i);
    }

    //Duplicates are allowed here
    vc.push_back(3);

    //Display Elements
    cout<<"First Element: "<<vc.front()<<"\n";
    cout<<"Last Element: "<<vc.back()<<"\n";
    cout<<"Vector Size"<<vc.size()<<"\n";

    cout<<"All Elements: ";
    for(auto it=vc.begin(); it!=vc.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    //Deleting Elements
    vc.pop_back(); //Removes the last element. 3 in this case.

    // Accessing Elements using indexes
    cout<<"Elements after removing last element: ";
    for(int i=0; i<vc.size(); i++){
        cout<<vc[i]<<" ";
    }
    cout<<endl;

    //Inserting at the beginnning
    vc.insert(vc.begin(), 3);
    cout<<"The first Element is now: "<<vc.at(0)<<endl;  // Can also use .at() method

    //Removing the first element
    vc.erase(vc.begin());
    cout<<"First element now: "<<vc.at(0)<<endl;

    //Check if the vector is empty
    cout<<(vc.empty()? "The Vector is empty":"The vector is not empty")<<endl;

    //Clear all elements
    vc.clear();
    cout<<"After clearing elements, "<< (vc.empty()? "The Vector is empty":"The vector is not empty")<<endl;

}