#ifndef LOCK_HEADER_HPP
#define LOCK_HEADER_HPP

#include "../interface/basicheaders/basicLibraries.hpp"

namespace Lock{

    class Lock {
        public:
            Lock();
            
            ~Lock();

            void lock();

            void unlock();

        private:
            Lock(const Lock&) = delete;
            Lock& operator=(const Lock&) = delete;

            std::unique_ptr<std::mutex> mutexPtr;
            bool locked;
    };

}

#endif