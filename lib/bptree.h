#include <algorithm>
#include <vector>
#include "node.h"

#ifndef BP_TREE_H
#define BP_TREE_H

class bptree{
    node* root;
    unsigned int internal_deg;
    unsigned int leaf_deg;
public:
    bptree(int internal_deg, int leaf_deg);
    node* search(int key);
    bool insert(int key);
    bool remove(int key);
    node* get_root();
    void print_cli();
};

#endif