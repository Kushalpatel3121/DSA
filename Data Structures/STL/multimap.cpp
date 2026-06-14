# include<bits/stdc++.h>
using namespace std;

// UNORDERED MAP
/*
- multimap in STL are associative containers like maps where each element consists of a key value and a mapped value. T
- The only difference is multimaps can store duplicate elements.
- A simple multimap is ordered.
*/

int main(){
    /*
        IMP FUNCTIONS:
        - insert() to insert an element in the multimap.
        - begin() return an iterator pointing to the first element in the multimap.
        - end() returns an iterator to the theoretical element after the last element.
        - clear() deletes all the elements in the multimap.
        - find() to search for an element in the map.
        - erase() to delete a single element or elements between a particular range.
        - size() returns the number of elements in the multimap.
        - empty() to check if the multimap is empty or not.
        - cbegin() – it refers to the first element of the multimap.
        - cend() – it refers to the theoretical element after the last element of the multimap.
        - rbegin() – it points to the last element of the multimap.
        - rend() – it points to the theoretical element before the first element of the multimap.
        - emplace() – to insert an element in the multimap.
        - max_size() – the maximum elements a multimap can hold.
    */

    // Declaration
    multimap<int, char> mmp;

    // Inserting Elements
    int c = 'A';
    for(int i=1; i<=10; i++){
        mmp.insert({i, (char)c+i-1});
    }
    mmp.insert({10, 'J'}); // Duplicates Allowed

    // Display the Elements
    cout<<"Elements present in the multimap (key, value): "<<endl;
    for(auto it = mmp.begin(); it != mmp.end(); it++){
        cout<< "(" << (*it).first<<", "<< it->second<<")"<<endl;
    }

    // Finding and Element
    int n = 3; // Searching for an element with key 3.
    cout<<(mmp.find(3) == mmp.end() ? "3 is not present.": "3 is present.")<<endl;;

    // Erasing an element
    // Note: unordered_map does not maintain any order of elements
    mmp.erase(7);

    cout<<"Elements after Removal (Key, Value): "<<endl;
    for(auto it = mmp.begin(); it != mmp.end(); it++){
        cout<< "(" << (*it).first<<", "<< it->second<<")"<<endl;
    }

    // Current size of the map
    cout<<"Current Size of multimap: "<<mmp.size()<<endl;

    // Check if Empty
    cout<<(mmp.empty()?"The map is empty":"The multimap is not empty")<<endl;

    // Clear the map
    mmp.clear();
    cout<<"After clearing, the size of the multimap is: "<<mmp.size()<<endl;
}
