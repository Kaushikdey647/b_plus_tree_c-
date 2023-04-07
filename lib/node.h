#include <algorithm>
#include <vector>

#ifndef NODE_H
#define NODE_H

class node{
public:
    std::vector<int> keys; //for both intermediate and leaf nodes
    std::vector<node*> children; //for intermediate nodes
    node* next; //for leaf nodes
    bool is_leaf; //again, for leaf nodes

    node(bool is_leaf);
    
    std::pair<node*,int> split();

    bool insert_key(int key);
    bool delete_key(int key);
    unsigned int search_key(int key);
    void print_cli_node();
};

#endif