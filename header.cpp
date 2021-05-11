#include "header.hpp"
#include <iostream>
#include <map>


std::vector<int>DrawnNumbers{3,4,14,34,35};
std::vector<int>vector1 {1,2,3,6,12 };
std::vector<int>vector2 {1,2,4,14,18 };
std::vector<int>vector3 {1,2,5,8,15 };
std::vector<int>vector4 {1,2,7,9,16 };
std::vector<int>vector5 {1,2,10,11,13 };
std::vector<int>vector6 {1,2,14,17,19 };
std::vector<int>vector7 {1,3,4,7,15 };
std::vector<int>vector8 {1,3,5,11,16 };
std::vector<int>vector9 {1,3,8,13,14 };
std::vector<int>vector10 {1,3,9,10,17 };
std::vector<int>vector11 {1,3,10,18,19 };
std::vector<int>vector12 {1,4,5,10,12 };
std::vector<int>vector13 {1,4,6,9,19 };
std::vector<int>vector14 {1,4,6,13,16 };
std::vector<int>vector15 {1,4,8,11,17 };
std::vector<int>vector16 {1,5,6,9,14 };
std::vector<int>vector17 {1,5,7,13,19 };
std::vector<int>vector18 {1,5,7,17,18 };
std::vector<int>vector19 {1,6,7,8,10 };
std::vector<int>vector20 {1,6,11,15,19 };
std::vector<int>vector21 {1,6,13,16,17 };
std::vector<int>vector22 {1,6,13,16,18 };
std::vector<int>vector23 {1,7,11,12,14 };
std::vector<int>vector24 {1,8,9,11,18 };
std::vector<int>vector25 {1,8,12,16,19 };
std::vector<int>vector26 {1,9,12,13,15 };
std::vector<int>vector27 {1,10,14,15,16 };
std::vector<int>vector28 {1,12,15,17,18 };
std::vector<int>vector29 {2,3,4,8,10 };
std::vector<int>vector30 {2,3,5,7,14 };
std::vector<int>vector31 {2,3,9,11,15 };
std::vector<int>vector32 {2,3,11,15,17 };
std::vector<int>vector33 {2,3,11,15,18 };
std::vector<int>vector34 {2,3,13,16,19 };
std::vector<int>vector35 {2,4,5,13,17 };
std::vector<int>vector36 {2,4,6,7,11 };
std::vector<int>vector37 {2,4,9,10,19 };
std::vector<int>vector38 {2,4,12,15,16 };
std::vector<int>vector39 {2,5,6,10,16 };
std::vector<int>vector40 {2,5,9,13,18 };
std::vector<int>vector41 {2,5,11,12,19 };
std::vector<int>vector42 {2,6,8,9,17 };
std::vector<int>vector43 {2,6,8,18,19 };
std::vector<int>vector44 {2,6,13,14,15 };
std::vector<int>vector45 {2,7,8,12,13 };
std::vector<int>vector46 {2,7,10,15,19 };
std::vector<int>vector47 {2,7,16,17,18 };
std::vector<int>vector48 {2,8,11,14,16 };
std::vector<int>vector49 {2,9,10,12,14 };
std::vector<int>vector50 {2,10,12,17,18 };
std::vector<int>vector51 {3,4,5,6,18 };
std::vector<int>vector52 {3,4,9,15,19 };
std::vector<int>vector53 {3,4,11,12,13 };
std::vector<int>vector54 {3,4,14,16,17 };
std::vector<int>vector55 {3,5,6,17,19 };
std::vector<int>vector56 {3,5,8,9,12 };
std::vector<int>vector57 {3,5,10,13,15 };
std::vector<int>vector58 {3,6,7,9,13 };
std::vector<int>vector59 {3,6,8,15,16 };
std::vector<int>vector60 {3,6,10,11,14 };
std::vector<int>vector61 {3,7,8,11,19 };
std::vector<int>vector62 {3,7,8,17,18 };
std::vector<int>vector63 {3,7,10,12,16 };
std::vector<int>vector64 {3,9,14,16,18 };
std::vector<int>vector65 {3,12,13,17,18 };
std::vector<int>vector66 {3,12,14,15,19 };
std::vector<int>vector67 {4,5,7,8,16 };
std::vector<int>vector68 {4,5,9,18,19 };
std::vector<int>vector69 {4,5,11,14,15 };
std::vector<int>vector70 {4,6,8,12,14 };
std::vector<int>vector71 {4,6,10,15,17 };
std::vector<int>vector72 {4,7,9,14,19 };
std::vector<int>vector73 {4,7,10,13,14 };
std::vector<int>vector74 {4,7,12,17,18 };
std::vector<int>vector75 {4,8,9,13,19 };
std::vector<int>vector76 {4,8,13,15,18 };
std::vector<int>vector77 {4,9,11,16,19 };
std::vector<int>vector78 {4,9,12,17,19 };
std::vector<int>vector79 {4,10,11,16,18 };
std::vector<int>vector80 {5,6,7,12,15 };
std::vector<int>vector81 {5,6,8,11,13 };
std::vector<int>vector82 {5,7,9,10,11 };
std::vector<int>vector83 {5,8,10,14,17 };
std::vector<int>vector84 {5,8,10,14,18 };
std::vector<int>vector85 {5,8,10,14,19 };
std::vector<int>vector86 {5,9,15,16,17 };
std::vector<int>vector87 {5,11,12,17,18 };
std::vector<int>vector88 {5,12,13,14,16 };
std::vector<int>vector89 {5,15,16,18,19 };
std::vector<int>vector90 {6,7,11,17,18 };
std::vector<int>vector91 {6,7,14,16,19 };
std::vector<int>vector92 {6,9,10,15,18 };
std::vector<int>vector93 {6,9,11,12,16 };
std::vector<int>vector94 {6,10,12,13,19 };
std::vector<int>vector95 {6,12,14,17,18 };
std::vector<int>vector96 {7,8,9,14,15 };
std::vector<int>vector97 {7,9,12,17,18 };
std::vector<int>vector98 {7,10,13,17,18 };
std::vector<int>vector99 {7,11,13,15,16 };
std::vector<int>vector100 {7,12,17,18,19 };
std::vector<int>vector101 {7,14,15,17,18 };
std::vector<int>vector102 {8,9,10,13,16 };
std::vector<int>vector103 {8,10,11,12,15 };
std::vector<int>vector104 {8,12,16,17,18 };
std::vector<int>vector105 {8,13,15,17,19 };
std::vector<int>vector106 {9,11,13,14,17 };
std::vector<int>vector107 {10,11,16,17,19 };
std::vector<int>vector108 {11,13,14,18,19 };
std::vector<int>vector109 {20,21,22,30,35 };
std::vector<int>vector110 {20,21,23,26,28 };
std::vector<int>vector111 {20,21,24,25,37 };
std::vector<int>vector112 {20,21,27,36,40 };
std::vector<int>vector113 {20,21,29,34,41 };
std::vector<int>vector114 {20,21,31,32,42 };
std::vector<int>vector115 {20,21,33,38,39 };
std::vector<int>vector116 {20,22,23,29,38 };
std::vector<int>vector117 {20,22,24,28,34 };
std::vector<int>vector118 {20,22,25,27,41 };
std::vector<int>vector119 {20,22,26,32,40 };
std::vector<int>vector120 {20,22,31,33,42 };
std::vector<int>vector121 {20,22,36,37,39 };
std::vector<int>vector122 {20,23,24,36,41 };
std::vector<int>vector123 {20,23,25,39,40 };
std::vector<int>vector124 {20,23,27,32,35 };
std::vector<int>vector125 {20,23,30,33,37 };
std::vector<int>vector126 {20,23,31,34,42 };
std::vector<int>vector127 {20,24,26,27,33 };
std::vector<int>vector128 {20,24,29,32,39 };
std::vector<int>vector129 {20,24,30,38,40 };
std::vector<int>vector130 {20,24,31,35,42 };
std::vector<int>vector131 {20,25,26,29,30 };
std::vector<int>vector132 {20,25,28,35,38 };
std::vector<int>vector133 {20,25,31,36,42 };
std::vector<int>vector134 {20,25,32,33,34 };
std::vector<int>vector135 {20,26,31,37,42 };
std::vector<int>vector136 {20,26,34,36,38 };
std::vector<int>vector137 {20,26,35,39,41 };
std::vector<int>vector138 {20,27,28,29,37 };
std::vector<int>vector139 {20,27,30,34,39 };
std::vector<int>vector140 {20,27,31,38,42 };
std::vector<int>vector141 {20,28,30,32,36 };
std::vector<int>vector142 {20,28,31,39,42 };
std::vector<int>vector143 {20,28,33,40,41 };
std::vector<int>vector144 {20,29,31,40,42 };
std::vector<int>vector145 {20,29,33,35,36 };
std::vector<int>vector146 {20,30,31,41,42 };
std::vector<int>vector147 {20,32,37,38,41 };
std::vector<int>vector148 {20,34,35,37,40 };
std::vector<int>vector149 {21,22,23,31,36 };
std::vector<int>vector150 {21,22,24,27,29 };
std::vector<int>vector151 {21,22,25,26,38 };
std::vector<int>vector152 {21,22,28,37,41 };
std::vector<int>vector153 {21,22,32,33,42 };
std::vector<int>vector154 {21,22,34,39,40 };
std::vector<int>vector155 {21,23,24,30,39 };
std::vector<int>vector156 {21,23,25,29,35 };
std::vector<int>vector157 {21,23,27,33,41 };
std::vector<int>vector158 {21,23,32,34,42 };
std::vector<int>vector159 {21,23,37,38,40 };
std::vector<int>vector160 {21,24,26,40,41 };
std::vector<int>vector161 {21,24,28,33,36 };
std::vector<int>vector162 {21,24,31,34,38 };
std::vector<int>vector163 {21,24,32,35,42 };
std::vector<int>vector164 {21,25,27,28,34 };
std::vector<int>vector165 {21,25,30,33,40 };
std::vector<int>vector166 {21,25,31,39,41 };
std::vector<int>vector167 {21,25,32,36,42 };
std::vector<int>vector168 {21,26,27,30,31 };
std::vector<int>vector169 {21,26,29,36,39 };
std::vector<int>vector170 {21,26,32,37,42 };
std::vector<int>vector171 {21,26,33,34,35 };
std::vector<int>vector172 {21,27,32,38,42 };
std::vector<int>vector173 {21,27,35,37,39 };
std::vector<int>vector174 {21,28,29,30,38 };
std::vector<int>vector175 {21,28,31,35,40 };
std::vector<int>vector176 {21,28,32,39,42 };
std::vector<int>vector177 {21,29,31,33,37 };
std::vector<int>vector178 {21,29,32,40,42 };
std::vector<int>vector179 {21,30,32,41,42 };
std::vector<int>vector180 {21,30,34,36,37 };
std::vector<int>vector181 {21,35,36,38,41 };
std::vector<int>vector182 {22,23,24,32,37 };
std::vector<int>vector183 {22,23,25,28,30 };
std::vector<int>vector184 {22,23,26,27,39 };
std::vector<int>vector185 {22,23,33,34,42 };
std::vector<int>vector186 {22,23,35,40,41 };
std::vector<int>vector187 {22,24,25,31,40 };
std::vector<int>vector188 {22,24,26,30,36 };
std::vector<int>vector189 {22,24,33,35,42 };
std::vector<int>vector190 {22,24,38,39,41 };
std::vector<int>vector191 {22,25,29,34,37 };
std::vector<int>vector192 {22,25,32,35,39 };
std::vector<int>vector193 {22,25,33,36,42 };
std::vector<int>vector194 {22,26,28,29,35 };
std::vector<int>vector195 {22,26,31,34,41 };
std::vector<int>vector196 {22,26,33,37,42 };
std::vector<int>vector197 {22,27,28,31,32 };
std::vector<int>vector198 {22,27,30,37,40 };
std::vector<int>vector199 {22,27,33,38,42 };
std::vector<int>vector200 {22,27,34,35,36 };
std::vector<int>vector201 {22,28,33,39,42 };
std::vector<int>vector202 {22,28,36,38,40 };
std::vector<int>vector203 {22,29,30,31,39 };
std::vector<int>vector204 {22,29,32,36,41 };
std::vector<int>vector205 {22,29,33,40,42 };
std::vector<int>vector206 {22,30,32,34,38 };
std::vector<int>vector207 {22,30,33,41,42 };
std::vector<int>vector208 {22,31,35,37,38 };
std::vector<int>vector209 {23,24,25,33,38 };
std::vector<int>vector210 {23,24,26,29,31 };
std::vector<int>vector211 {23,24,27,28,40 };
std::vector<int>vector212 {23,24,34,35,42 };
std::vector<int>vector213 {23,25,26,32,41 };
std::vector<int>vector214 {23,25,27,31,37 };
std::vector<int>vector215 {23,25,34,36,42 };
std::vector<int>vector216 {23,26,30,35,38 };
std::vector<int>vector217 {23,26,33,36,40 };
std::vector<int>vector218 {23,26,34,37,42 };
std::vector<int>vector219 {23,27,29,30,36 };
std::vector<int>vector220 {23,27,34,38,42 };
std::vector<int>vector221 {23,28,29,32,33 };
std::vector<int>vector222 {23,28,31,38,41 };
std::vector<int>vector223 {23,28,34,39,42 };
std::vector<int>vector224 {23,28,35,36,37 };
std::vector<int>vector225 {23,29,34,40,42 };
std::vector<int>vector226 {23,29,37,39,41 };
std::vector<int>vector227 {23,30,31,32,40 };
std::vector<int>vector228 {23,30,34,41,42 };
std::vector<int>vector229 {23,31,33,35,39 };
std::vector<int>vector230 {23,32,36,38,39 };
std::vector<int>vector231 {24,25,26,34,39 };
std::vector<int>vector232 {24,25,27,30,32 };
std::vector<int>vector233 {24,25,28,29,41 };
std::vector<int>vector234 {24,25,35,36,42 };
std::vector<int>vector235 {24,26,28,32,38 };
std::vector<int>vector236 {24,26,35,37,42 };
std::vector<int>vector237 {24,27,31,36,39 };
std::vector<int>vector238 {24,27,34,37,41 };
std::vector<int>vector239 {24,27,35,38,42 };
std::vector<int>vector240 {24,28,30,31,37 };
std::vector<int>vector241 {24,28,35,39,42 };
std::vector<int>vector242 {24,29,30,33,34 };
std::vector<int>vector243 {24,29,35,40,42 };
std::vector<int>vector244 {24,29,36,37,38 };
std::vector<int>vector245 {24,30,35,41,42 };
std::vector<int>vector246 {24,31,32,33,41 };
std::vector<int>vector247 {24,32,34,36,40 };
std::vector<int>vector248 {24,33,37,39,40 };
std::vector<int>vector249 {25,26,27,35,40 };
std::vector<int>vector250 {25,26,28,31,33 };
std::vector<int>vector251 {25,26,36,37,42 };
std::vector<int>vector252 {25,27,29,33,39 };
std::vector<int>vector253 {25,27,36,38,42 };
std::vector<int>vector254 {25,28,32,37,40 };
std::vector<int>vector255 {25,28,36,39,42 };
std::vector<int>vector256 {25,29,31,32,38 };
std::vector<int>vector257 {25,29,36,40,42 };
std::vector<int>vector258 {25,30,31,34,35 };
std::vector<int>vector259 {25,30,36,41,42 };
std::vector<int>vector260 {25,30,37,38,39 };
std::vector<int>vector261 {25,33,35,37,41 };
std::vector<int>vector262 {25,34,38,40,41 };
std::vector<int>vector263 {26,27,28,36,41 };
std::vector<int>vector264 {26,27,29,32,34 };
std::vector<int>vector265 {26,27,37,38,42 };
std::vector<int>vector266 {26,28,30,34,40 };
std::vector<int>vector267 {26,28,37,39,42 };
std::vector<int>vector268 {26,29,33,38,41 };
std::vector<int>vector269 {26,29,37,40,42 };
std::vector<int>vector270 {26,30,32,33,39 };
std::vector<int>vector271 {26,30,37,41,42 };
std::vector<int>vector272 {26,31,32,35,36 };
std::vector<int>vector273 {26,31,38,39,40 };
std::vector<int>vector274 {27,28,30,33,35 };
std::vector<int>vector275 {27,28,38,39,42 };
std::vector<int>vector276 {27,29,31,35,41 };
std::vector<int>vector277 {27,29,38,40,42 };
std::vector<int>vector278 {27,30,38,41,42 };
std::vector<int>vector279 {27,31,33,34,40 };
std::vector<int>vector280 {27,32,33,36,37 };
std::vector<int>vector281 {27,32,39,40,41 };
std::vector<int>vector282 {28,29,31,34,36 };
std::vector<int>vector283 {28,29,39,40,42 };
std::vector<int>vector284 {28,30,39,41,42 };
std::vector<int>vector285 {28,32,34,35,41 };
std::vector<int>vector286 {28,33,34,37,38 };
std::vector<int>vector287 {29,30,32,35,37 };
std::vector<int>vector288 {29,30,40,41,42 };
std::vector<int>vector289 {29,34,35,38,39 };
std::vector<int>vector290 {30,31,33,36,38 };
std::vector<int>vector291 {30,35,36,39,40 };
std::vector<int>vector292 {31,32,34,37,39 };
std::vector<int>vector293 {31,36,37,40,41 };
std::vector<int>vector294 {32,33,35,38,40 };
std::vector<int>vector295 {33,34,36,39,41 };

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
        std::cout<<"stopien wygranej - " << i.first<< ", wystapil: " <<i.second<<"\n";
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