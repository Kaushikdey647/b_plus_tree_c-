#include "node.h"

/**
 * @brief Search for the key in the node
 * 
 * @param key 
 * @return unsigned int 
 */
unsigned int node::search_key(int key){
        
    return std::upper_bound(keys.begin(), keys.end(), key) - keys.begin();
}