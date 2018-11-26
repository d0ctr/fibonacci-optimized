#include <iostream>
#include "fibanacirow.hpp"

FibanaciNumber getFibNum(const int index, FibanaciRow &fibcollection)
{
  long long res;
  if(index == 0)
  {
    res = 0;
  }
  else if(index == 1)
  {
    res = 1;
  }
  else if(fibcollection.ispresent(index))
  {
    res = fibcollection.getNumber(index);
  }
  else
  {
    res = getFibNum(index - 1, fibcollection).number + getFibNum(index - 2, fibcollection).number;
  }
  fibcollection.push(FibanaciNumber{index, res});
  return {index, res};
}

int main()
{
  FibanaciRow a;
  int num = 92;
  for(int i = 0; i <= num; i++)
  {
    getFibNum(i, a);
  }
  std::cout << std::endl;
}
