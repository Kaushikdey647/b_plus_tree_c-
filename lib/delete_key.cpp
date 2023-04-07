#include "node.h"

/**
 * @brief Delete a key from the node
 * 
 * @param key 
 * @return true 
 * @return false 
 */
bool node::delete_key(int key){
    try{
        unsigned int delete_index = 
            lower_bound(keys.begin(), keys.end(), key) - keys.begin();
        // check if
        if(delete_index == keys.size() || keys[delete_index] != key)
            return false;
        keys.erase(keys.begin() + delete_index);
    }
    catch(...){
        return false;
    }
    return true;
}