#include <iostream>
long long getFibNum(const int index)
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
  else
  {
    res = getFibNum(index - 1) + getFibNum(index - 2);
  }
  return res;
}

int main()
{
  int num = 92;
  for(int i = 0; i <= num; i++)
  {
    getFibNum(i);
  }
  std::cout << std::endl;
}
