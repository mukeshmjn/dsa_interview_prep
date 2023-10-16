/*
need to find second largest and smallest in an array
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> secLgSm(vector<int> arr) {
    // int n = arr.size();
    int lg = INT_MIN, sclg = INT_MIN, sm = INT_MAX, sclm = INT_MAX;
    vector<int> res(2);
    for(int a: arr) {
        if(a > lg) {
            sclg = lg;
            lg = a;
        }
        else if(a > sclg) {
            sclg = a; 
        }

        if (a < sm) {
            sclm = sm;
            sm = a;
        }
        else if(a < sclm) {
            sclm = a;
        }
    }
    return {sclg, sclm};
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> res = secLgSm(arr);
    for(int r: res) {
        cout<<r;
    }
    return 0;
}