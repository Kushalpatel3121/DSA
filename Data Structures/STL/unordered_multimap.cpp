# include<bits/stdc++.h>
using namespace std;

// UNORDERED MAP
/*
- unordered_multimap in STL are associative containers like unordered maps where each element consists of a key value and a mapped value.
- The only difference is unordered multimaps can store duplicate elements.
*/

int main(){
    /*
        IMP FUNCTIONS:
        - insert() – to insert an element in the unordered multimap.
        - begin() – return an iterator pointing to the first element in the unordered multimap.
        - end() – returns an iterator to the theoretical element after the last element.
        - clear() – deletes all the elements in the unordered multimap.
        - find() – to search for an element in the unordered map.
        - erase() – to delete a single element or elements between a particular range.
        - size() – returns the number of elements on the unordered multimap.
        - empty() – to check if the unordered multimap is empty or not.
        - cbegin() – it refers to the first element of the unordered multimap.
        - cend() – it refers to the theoretical element after the last element of the unordered multimap.
        - rbegin() – it points to the last element of the unordered multimap.
        - rend() – it points to the theoretical element before the first element of the unordered multimap.
        - emplace() – to insert an element in the unordered multimap.
        - max_size() – the maximum elements an unordered multimap can hold.
    */

    // Declaration
    unordered_multimap<int, char>ummp;

    // Inserting Elements
    int c = 'A';
    for(int i=1; i<=10; i++){
        ummp.insert({i, (char)c+i-1});
    }
    ummp.insert({10, 'J'}); // Duplicates Allowed

    // Display the Elements
    cout<<"Elements present in the multimap (key, value): "<<endl;
    for(auto it = ummp.begin(); it != ummp.end(); it++){
        cout<< "(" << (*it).first<<", "<< it->second<<")"<<endl;
    }

    // Finding and Element
    int n = 3; // Searching for an element with key 3.
    cout<<(ummp.find(3) == ummp.end() ? "3 is not present.": "3 is present.")<<endl;;

    // Erasing an element
    // Note: unordered_map does not maintain any order of elements
    ummp.erase(7);

    cout<<"Elements after Removal (Key, Value): "<<endl;
    for(auto it = ummp.begin(); it != ummp.end(); it++){
        cout<< "(" << (*it).first<<", "<< it->second<<")"<<endl;
    }

    // Current size of the map
    cout<<"Current Size of multimap: "<<ummp.size()<<endl;

    // Check if Empty
    cout<<(ummp.empty()?"The map is empty":"The multimap is not empty")<<endl;

    // Clear the map
    ummp.clear();
    cout<<"After clearing, the size of the multimap is: "<<ummp.size()<<endl;

}