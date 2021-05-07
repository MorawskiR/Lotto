#include "header.hpp"
#include <iostream>

std::vector<int>DrawnNumbers{1,5,10,20,27};
std::vector<int>vector1{1,2,3,6,12};

std::map <size_t, std::string > CheckNums(std::vector<int> & Drawn, std::vector<int> & MyNums)
{
    for(const auto & el:Drawn)
    {
        for(const auto it:MyNums)
        {
            if (el == it)
            {
                std::cout<<"coorrctd";
            }
        }
    }

    std::map<size_t, std::string> staffMap {{10, "aa"}};
    return staffMap;
}

void print( std::map<size_t, size_t> mapa )
{
    for (const auto &i : mapa)
    {
        std::cout<<i.first<<" " <<i.second<<"\n";
    }
    std::cout<<"a";
}
// void print( std::map<size_t, std::string> nazwa)
// {
//     for (const auto &i : nazwa)
//     {
//         std::cout<<i.first<<" " <<i.second;
//     }
// }