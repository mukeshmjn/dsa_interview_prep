/*
need to find largest element in an array..
1. one approach is sort the array and last element of the array would be the largest.
2. create an element with value as INT_MIN and traverse through array whenever an element greater than current largest element comes 
   update the value.
*/
#include<bits/stdc++.h>
using namespace std;
int findLargest(vector<int>& arr) {
    int largest = INT_MIN; 
    // iterate
    for(int a: arr) {
        if(a > largest) largest = a;
    }
    return largest;
}

int main() {
    // implementation of the above 2nd approach
    vector<int> testSample = {1, 2, 3, 4, 5};
    cout<<findLargest(testSample);
    return 0;
}