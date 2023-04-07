#include "node.h"

/**
 * @brief Construct a new node::node object
 * 
 * @param is_leaf 
 */
node::node(bool is_leaf){
    this->is_leaf = is_leaf;
    next = NULL;
}