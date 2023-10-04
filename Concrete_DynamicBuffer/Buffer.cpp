// #TODO implement the buffer class

#include <Buffer.hpp>

    template<typename buff_t>
    bool
    Buffer<buff_t>::Allocate(unsigned int size){
        buff_t * tempBuff = (buff_t*) malloc(sizeof(buff_t)*size);
        mBuff.reset(tempBuff);
        mIsllocated = true;
        mSize = size;
        return mBuff.operator bool();
    }

    template<typename buff_t>
    bool
    Buffer<buff_t>::Reallocate(unsigned int size){
        return false;
    }

    template<typename buff_t>
    bool
    Buffer<buff_t>::IsAllocated(){
        return mIsllocated;
    }

    template<typename buff_t>
    unsigned int
    Buffer<buff_t>::GetSize(){
        return mSize;
    }

    template class Buffer<float>;
    template class Buffer<int>;
    template class Buffer<double>;
    template class Buffer<char>;