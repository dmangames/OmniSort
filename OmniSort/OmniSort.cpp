//
//  main.cpp
//  OmniSort
//
//  Created by Steven Zhang on 2/18/16.
//  Copyright © 2016 Dmangames. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void selectionSort(vector<int>& v);

int main(int argc, const char * argv[]) {
    // List of sorts to choose from
    /*
     * Selection Sort
     * Insertion Sort
     * Merge Sort
     * Quick Sort
     */
    int input;
    cout << "Enter array: \n";
    vector<int> v;
    // TODO: read only one line
    while(cin >> input)
        v.push_back(input);
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    cout << '\n';
    selectionSort(v);
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    return 0;
};

//TODO: Make the array sorting on generic
void selectionSort(vector<int>& v) {
    int pos_min, temp, n;
    n = v.size();
    for (int i = 0; i < n-1; i++) {
        pos_min = i;
        for (int j = i+1; j < n; j++) {
            if (v[j] < v[pos_min]) {
                pos_min = j;
            }
        }
        if (pos_min != i) {
            temp = v[i];
            v[i] = v[pos_min];
            v[pos_min] = temp;
        }
    }
}