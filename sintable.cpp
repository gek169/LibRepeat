#include <array>
#include <iostream>
#include <cmath>

template<int size, class T>constexpr std::array<T,size>getTable()
{
    std::array<T,size> result;
    for(int i = 0; i < size; ++i)
    {
        result[i] = (65280 * sinf( ((float)(i) / (float)size) * 2.0 * M_PI));
    }
    return result;
}

const std::array<int, 0x10000> sintable = getTable<0x10000,int>();

int main(){
	for(auto&a : sintable)
		std::cout << "value is " << a << std::endl;
}
