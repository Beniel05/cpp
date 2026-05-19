#include<bits/stdc++.h>
using namespace std;

/*
    1. Algorithms
    2. Containers [vector/ queue/ set/ map/ etc..,]
    3. Functions
    4. Iterators
*/

/*
void Pairs() {
    pair<int,string> p = {1,"Hello"};
    cout << p.first << " " << p.second << endl;

    pair<int,pair<int,int>> p1 = {1,{2,3}};
    cout << p1.first << ' ' << p1.second.first << ' ' << p1.second.second << endl;

    pair<int,int> arr[] = {{10,20}, {30,40}, {50,60}};
    cout << arr[0].first << ' ' << arr[2].second << endl;
}
*/

/*
void Vectors() {

}
*/


int main() {

    /* 1. pair */
    // A pair is a template class in the <utility> header that groups two heterogeneous values into a single unit, accessible via .first and .second - pair is a user-defined datatype. Specifically, it is a template class (or more technically, a struct template).
    
    // Pairs();



    // 2. vector */
    // A vector in C++ is a dynamic array from the STL that automatically resizes as needed while storing elements in contiguous memory. It provides the efficiency of constant-time random access like a standard array but adds the flexibility of automatic memory management and safe element insertion/deletion. Because it handles heap allocation and growth internally, it is the standard choice for managing collections of data where the size may change during execution.
    /*
    push_back(val): Adds an element to the end.
    emplace_back is a more efficient way to add elements to the end of a vector. Instead of creating a temporary object and copying (or moving) it into the vector like push_back.
    pop_back(): Removes the last element.
    size(): Returns the number of elements.
    at(i) / [i]: Accesses the element at index i (at provides bounds checking).
    front() / back(): Accesses the first or last element.
    begin() / end(): Returns iterators to the start and past-the-end.
    capacity(): Returns the total space currently allocated.
    reserve(n): Pre-allocates memory for at least n elements.
    clear(): Removes all elements from the vector.
    */

    // Vectors();

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    cout << "First index of identifier v = " << v[1] << endl; // 1st index
    v[1] = 100;
    cout << "We can change the value based on index same like array = " << v[1] << endl;

    for (int value : v) {
        // To print all the values in 'v'; 
        cout << value << ' ';
    }

    vector<pair<int, int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);

    vector<int> b(5);
    
    vector<int> v1(5,20);
    vector<int> v2(v1);
    
    vector<int> a(5, 100);
    cout << endl << "Value of a[2] = " << a[2] << endl;

    // iterator and begin are used to get the address of the value that got stored in the memory;
    vector<int>::iterator check = a.begin();
    check++; 
    cout << "The memory address: " << &(*check) << " | The value stored there: " << *(check) << endl;
    // Use &(*check) to get the actual memory address and *check for value
    
    // By using a.begin(), you pointed to the first 100, and after check++, you are now specifically viewing the second 100 located at the very next memory address in the sequence. 
    // a.begin() + 3 to jump straight to the fourth element without using ++ multiple times.
    a[3] = 500;
    check = check + 2;
    cout << "The memory address: " << &(*check) << " | The value stored there: " << *(check) << endl;
 
    cout << "Size of a is: " << a.size() << endl;

    for(int val : a) {
        cout << val << ' ';
    }
    
    

    return 0;
}