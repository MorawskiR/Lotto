#include "header.hpp"
#include <iostream>
#include <map>


std::vector<int>DrawnNumbers{1,5,10,20,27};
std::vector<int>vector1{1,5,27,20,10}; //5
std::vector<int>vector2{1,2,4,14,18}; // 1
std::vector<int>vector3{1,2,5,8,15}; // 2
std::vector<int>vector4{6,2,5,8,15}; // 0
std::vector<int>vector5{1,2,7,20,5}; // 3
std::vector<int>vector6{1,5,10,20,5}; // 4
std::map<size_t, std::string> counter { {0,"0"}, {1,"0"}, {2, "0"}, {3,"0"}, {4,"0"} };

std::map<size_t, size_t> mapka { {0,0}, {1,0}, {2, 0}, {3,0}, {4,0}, {5,0} };
int meter = 0;
void CheckNums(std::vector<int> & Drawn, std::vector<int> & MyNums)
{
    if (meter > 0)
        meter = 0;
    
    for(const auto & el:Drawn)
    {
        for(const auto it:MyNums)
        {
            if (el == it)
            {
                meter++;
            }
        }
    }
    mapka[meter]++;
   // std::map<size_t, std::string> staffMap {{10, "aa"}};
}

void print( std::map<size_t, size_t> mapa )
{
    for (const auto &i : mapa)
    {
        std::cout<<i.first<< " " <<i.second<<"\n";
    }
  std::cout<<"\n";
}
// void print( std::map<size_t, std::string> nazwa)
// {
//     for (const auto &i : nazwa)
//     {
//         std::cout<<i.first<<" " <<i.second;
//     }
// }