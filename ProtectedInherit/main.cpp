#include <vector>

template<typename T>
class MyVariable
{
public:
    //read-only access if fine
    const T* operator->() const {return(&this->_element);}
    const T& operator*()  const {return( this->_element);}

    //write acces via this function
    T& nonconst()
    {
        //...here is some more work intended...
        return(this->_element);
    }
protected:
    T _element;
};


template<typename T>
class MyContainer: public MyVariable<T>
{
public:
    template<typename Arg>
    auto nonconst_at(Arg&& arg) -> decltype(MyVariable<T>::_element.at(arg))
    {
        //here I want to avoid the work from MyVariable<T>::nonconst()
        return(this->_element.at(arg));
    }
};


int main() {
    MyContainer<std::vector < float>> container;
    container.nonconst() = {1, 3, 5, 7};
    container.nonconst_at(1) = 65;
}
