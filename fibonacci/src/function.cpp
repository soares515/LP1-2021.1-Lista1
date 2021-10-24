#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
  {
    unsigned int a1 = 0, a2 = 1, aux;

    std::vector<unsigned int> vetor;
    while( a2 < n )
      {
        vetor.push_back(a2);
        aux = a2;
        a2 += a1;
        a1 = aux;
      } 
    return vetor;
  }
