template <class T>
class minElement
{
    T element;
    public:
    minElement(){};
    minElement(T a){
        element = a;
    }
    void check(T x)
    {
    cout<<(element<x ? element : x)<<endl;
    }   
};
