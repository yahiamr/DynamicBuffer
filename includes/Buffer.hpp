//#TODO design the whole buffer class
#include <memory>
// template class for Buffer
// the buffer class will contain allocate, reallocate, copy constructor, free, it will be created with shared ptr
// return if buffer is allocated, return buffer size

template <typename buff_t>
class Buffer{
    public:
    Buffer() = default;

    ~Buffer() = default;

    bool
    Allocate(unsigned int size);

    bool
    Reallocate(unsigned int size);

    bool
    IsAllocated();

    unsigned int
    GetSize();

    

    private:
    // buffer pointer
    std::shared_ptr<buff_t> mBuff;
    // buffer size
    unsigned int mSize = 0;
    // buffer is allocated boolean 
    bool mAllocated = false;    
    
};