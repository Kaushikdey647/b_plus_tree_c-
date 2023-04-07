#include "bptree.h"

/**
 * @brief Construct a new bptree::bptree object
 * 
 * @param internal_deg 
 * @param leaf_deg 
 */
bptree::bptree(int internal_deg, int leaf_deg){
    this->internal_deg = internal_deg;
    this->leaf_deg = leaf_deg;
    root = new node(true);
}