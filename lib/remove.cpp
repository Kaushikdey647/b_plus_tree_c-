#include "bptree.h"

/**
 * @brief Delete a key from the tree
 * 
 * @param key 
 * @return true 
 * @return false 
 */
bool bptree::remove(int key){
    //TODO: CASE I: key is not present in internal nodes
        //TODO: CASE I.1
            //more than minimum number of keys in the leaf
            //Simply delete the key
        //TODO: CASE I.2
            //exactly minimum number of keys in the leaf
            //Borrow from the left sibling, add median key of sibling to the parent
    //TODO: CASE II: key is present in internal nodes
        //TODO: CASE II.1
            //more than minimum number of keys in the leaf
            //Simply delete the key from leaf and internal node as well, fill empty with inorder successor
        //TODO: CASE II.2
            //exactly minimum number of keys in the leaf
            //Borrow from the left sibling, fill the empty space in the index with borrowed key
        //TODO: CASE II.3
            //Similar to CASE II.1 but empty space is generated above the immediate parent
            //Merge empty space with sibling, fill grandparent with inorder successor
    //TODO: CASE III: Height of the tree must be shrinked
            //delete occurences from leaf and internal nodes
            //merge the root with the only child and redeclare
            //rearrange the keys and children
    
    //if tree is empty return false
    if(root->keys.size() == 0)
        return false;
    
    //if tree has only one node


    return false;
}