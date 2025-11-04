#include <iostream>

template<typename KEY, typename DATA>
struct Qmap{
    Qmap(){std::cout << "Qmap\n";}
    // default implementationn
    // template definition
};

template<typename DATA>
struct Qmap<int, DATA>{
    Qmap(){std::cout << "Qmap<int,DATA>\n";}
    // optimization for int-based keys
    // partial specialization
};

template<>
struct Qmap<int, int>{
    Qmap(){std::cout << "Qmap<int,int>\n";}
    // special super fast version for int => int map!
    // full specialization
};

int main(){
    auto default_ = Qmap<float, bool>{};

    auto partial_specialization = Qmap<int, bool>{};

    auto fully_specialized = Qmap<int, int>{};
}
