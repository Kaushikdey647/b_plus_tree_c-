#include "node.h"

/**
 * @brief Insert a key into the node
 * 
 * @param key 
 * @return true 
 * @return false 
 */
bool node::insert_key(int key){
    try{
        unsigned int insert_index = 
            upper_bound(keys.begin(), keys.end(), key) - keys.begin();
        keys.insert(keys.begin() + insert_index, key);
    }
    catch(...){
        return false;
    }
    return true;
}