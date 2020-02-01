//
// Created by hima on 2/1/20.
//
namespace TypeDeduction
{
    //auto return the type without any qualifications (const,&,....), you have to qualify it your self
    auto Add(int a, int b)
    {
        return a+b;
    }
    //decltype(auto) will return with the type and t is qualifications
    decltype(auto) ConstRef ()
    {
        const int& i = 0;
        return i;
    }
    //Note auto&& will always return a reference type
}

