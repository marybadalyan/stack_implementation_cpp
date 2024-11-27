#include <iostream>
#include <cassert>

template <typename T>
class Stack
{
public:
    void push(const& T n)
    {
        container.push_back(n)
    }
    int pop()
    {
        assert(isEmpty())
        container.pop_back()
    }
    T top()
    {
        assert(!isEmpty())
        
        return container.back()
    }
    int size()
    {
        return container.size()
    }
    bool isEmpty()
    {
        return container.empty()
    }
private:
   std::vector<T> container;

}