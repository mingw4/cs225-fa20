/* Your code here! */
#include <iostream>
#include <vector>
#include "dsets.h"

void DisjointSets::addelements (int num) {
    for (int i = 0; i < num; i++) {
        vec.push_back(-1);
    }
}

int DisjointSets::find (int elem) {
    if (vec[elem] < 0) {
        return elem;
    } else {
        int root = find(vec[elem]);
        vec[elem] = root;
        return root;
    }
}

void DisjointSets::setunion (int a, int b) {
    int ar = find(a);
    int br = find(b);
    int newSize = vec[ar] + vec[br];
    if (vec[ar] >= vec[br]) {
        vec[ar] = br;
        vec[br] = newSize;
    } else {
        vec[br] = ar;
        vec[ar] = newSize;
    }
}

int DisjointSets::size (int elem) {
    return vec[find(elem)] * -1;
}