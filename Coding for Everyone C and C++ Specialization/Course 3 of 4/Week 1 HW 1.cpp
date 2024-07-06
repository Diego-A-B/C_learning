//   Convert this program to C++

//  change to C++ io

//  change to one line comments

//  change defines of constants to const

//  change array to vector<>

//   inline any short function



#include <iostream>
#include <vector>

const int N = 40;

inline void sum(int& p, const int N, std::vector<int> d)
{

  p = 0;

  for(int i = 0; i < N; ++i)

    p = p + d[i];

}

int main()
{
   int i;

   int accum = 0;

    std::vector<int> data(N);

   for(i = 0; i < data.size(); ++i)

      data[i] = i;

    sum(accum, N, data);

    std::cout <<"sum is "<< accum<< std::endl; 

    return 0;

}