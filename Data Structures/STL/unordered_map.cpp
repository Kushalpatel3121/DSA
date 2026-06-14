# include<bits/stdc++.h>
using namespace std;

// UNORDERED MAP
/*
- unordered_map in STL are associative containers where each element consists of a key value and a mapped value. 
- Two mapped values cannot have the same key value. 
- The elements can be in any order.
*/

int main(){
    /*
        IMP FUNCTIONS:
        - insert() - Used to insert an element in the unordered_map.
        - begin() - Returns an iterator pointing to the first element in the map.
        - end() - Returns an iterator pointing to the theoretical element after the last element.
        - clear() - Deletes all the elements in the map.
        - find() - Searches for an element in the map and returns an iterator to it if found, otherwise returns end().
        - erase() - Deletes a single element by key or elements in a specified range using iterators.
        - size() - Returns the number of elements present in the map.
        - empty() - Checks if the map is empty or not.
        - cbegin() – it refers to the first element of the unordered_map.
        - cend() – it refers to the theoretical element after the last element of the unordered_map.
        - rbegin() – it points to the last element of the unordered_map.
        - rend() – it points to the theoretical element before the first element of the unordered_map.
        - emplace() – to insert an element in the unordered_map.
        - max_size() – the maximum elements a unordered_map can hold.
    */
    
    // Declaration
    unordered_map<int, char> ump;

    // Inserting Elements
    int c = 'A';
    for(int i=1; i<=10; i++){
        ump.insert({i, (char)c+i-1});
    }

    // Display the Elements
    cout<<"Elements present in the unordered map (key, value): "<<endl;
    for(auto it = ump.begin(); it != ump.end(); it++){
        cout<< "(" << (*it).first<<", "<< it->second<<")"<<endl;
    }

    // Finding and Element
    int n = 3; // Searching for an element with key 3.
    cout<<(ump.find(3) == ump.end() ? "3 is not present.": "3 is present.");

    // Erasing an element
    // Note: unordered_map does not maintain any order of elements
    ump.erase(ump.begin());

    cout<<"Elements after Removal (Key, Value): "<<endl;
    for(auto it = ump.begin(); it != ump.end(); it++){
        cout<< "(" << (*it).first<<", "<< it->second<<")"<<endl;
    }

    // Current size of the map
    cout<<"Current Size of Unordered map: "<<ump.size()<<endl;

    // Check if Empty
    cout<<(ump.empty()?"The unordered map is empty":"The unordered map is not empty");

    // Clear the map
    ump.clear();
    cout<<"After clearing, the size of the unordered map is: "<<ump.size()<<endl;
}