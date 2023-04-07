#include "bptree.h"

/**
 * @brief Search for a key in the tree
 * 
 * @param key 
 * @return node* 
 */
node* bptree::search(int key){
    //basically takes you to the leaf node where the key is
    node* cursor = root;
    while(!cursor->is_leaf){
        int index = cursor->search_key(key);
        cursor = cursor->children[index];
    }
    return cursor;
}