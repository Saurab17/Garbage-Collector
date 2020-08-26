// This class defines an element that is stored
// in the garbage collection information list.
//
template <class T>
class PtrDetails
{
  public:
    unsigned refcount; // current reference count
    T *memPtr;         // pointer to allocated memory
    /* isArray is true if memPtr points
to an allocated array. It is false
otherwise. */
    bool isArray; // true if pointing to array
    /* If memPtr is pointing to an allocated
array, then arraySize contains its size */
    unsigned arraySize; // size of array
    // Here, mPtr points to the allocated memory.
    // If this is an array, then size specifies
    // the size of the array.

    PtrDetails(T *memptr, int arr_size):
        refcount(1U),
        memPtr(memptr),
        arraySize(arr_size)
    {
        // Todo: Implement PtrDetails
        if (arraySize > 0) {
            isArray = true;
        }else {
            isArray = false;
        }
    }
};
// Overloading operator== allows two class objects to be compared.
// This is needed by the STL list class.
template <class T>
bool operator==(const PtrDetails<T> &ob1,
                const PtrDetails<T> &ob2)
{
    // Todo: Implement operator==
    // if (ob1.arraySize != ob2.arraySize) {
    //     return false;
    // }

    // for(size_t i=0; i<ob1.arraySize; i++) {
    //     if(ob1.memPtr[i] != ob2.memPtr[i]) {
    //         return false;
    //     }
    // }
    if(ob1.memPtr != ob2.memPtr) {
        return false;
    }
    return true;
}
