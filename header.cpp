#include "header.hpp"
#include <iostream>
#include <map>


std::vector<int>DrawnNumbers{1,5,10,20,27};
std::vector<int>vector1{1,2,3,6,12};
std::map<size_t, std::string> counter { {0,"0"}, {1,"0"}, {2, "0"}, {3,"0"}, {4,"0"} };
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
    counter[1] = "aaa";
   // std::map<size_t, std::string> staffMap {{10, "aa"}};
}

void print( std::map<size_t, std::string> mapa )
{
    for (const auto &i : mapa)
    {
        std::cout<<i.first<< " " <<i.second<<"\n";
    }
  
}
// void print( std::map<size_t, std::string> nazwa)
// {
//     for (const auto &i : nazwa)
//     {
//         std::cout<<i.first<<" " <<i.second;
//     }
// }