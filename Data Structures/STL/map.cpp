# include<bits/stdc++.h>
using namespace std;

// UNORDERED MAP
/*
- map in STL are associative containers where each element consists of a key value and a mapped value. 
- Two mapped values cannot have the same key value.
- a simple map is ordered.
*/

int main(){
    /*
        IMP FUNCTIONS:
        - insert() - to insert an element in the map.
        - begin() – return an iterator pointing to the first element in the map.
        - end() – returns an iterator to the theoretical element after the last element.
        - clear() – deletes all the elements in the map.
        - find() – to search for an element in the map.
        - erase() – to delete a single element or elements between a particular range.
        - size() – returns the number of elements on the map.
        - empty() – to check if the map is empty or not.
        - cbegin() – it refers to the first element of the map.
        - cend() – it refers to the theoretical element after the last element of the map.
        - rbegin() – it points to the last element of the map.
        - rend() – it points to the theoretical element before the first element of the map.
        - emplace() – to insert an element in the map.
        - max_size() – the maximum elements a map can hold.
    */

    // Declaration
    map<int, char> mp;

    // Inserting Elements
    int c = 'A';
    for(int i=1; i<=10; i++){
        mp.insert({i, (char)c+i-1});
    }

    // Display the Elements
    cout<<"Elements present in the map (key, value): "<<endl;
    for(auto it = mp.begin(); it != mp.end(); it++){
        cout<< "(" << (*it).first<<", "<< it->second<<")"<<endl;
    }

    // Finding and Element
    int n = 3; // Searching for an element with key 3.
    cout<<(mp.find(3) == mp.end() ? "3 is not present.": "3 is present.")<<endl;;

    // Erasing an element
    // Note: unordered_map does not maintain any order of elements
    mp.erase(mp.begin());

    cout<<"Elements after Removal (Key, Value): "<<endl;
    for(auto it = mp.begin(); it != mp.end(); it++){
        cout<< "(" << (*it).first<<", "<< it->second<<")"<<endl;
    }

    // Current size of the map
    cout<<"Current Size of map: "<<mp.size()<<endl;

    // Check if Empty
    cout<<(mp.empty()?"The map is empty":"The map is not empty")<<endl;

    // Clear the map
    mp.clear();
    cout<<"After clearing, the size of the map is: "<<mp.size()<<endl;
}