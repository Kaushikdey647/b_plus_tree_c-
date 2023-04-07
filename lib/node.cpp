#include "node.h"

node::node(bool is_leaf){
    this->is_leaf = is_leaf;
    next = NULL;
}