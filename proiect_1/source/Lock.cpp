#include "Lock.hpp"

namespace Lock {

    Lock::Lock() : mutexPtr(new std::mutex), locked(false) {
        mutexPtr->unlock();
    }

    Lock::~Lock(){

        if(locked) {
            unlock();
            locked = false;
        }
        
    }

    void Lock::lock(){

        if(!locked){
            mutexPtr->lock();
            locked = true;
        }

    }

    void Lock::unlock(){

        if(locked){
            mutexPtr->unlock();
            locked = false;
        }

    }

}