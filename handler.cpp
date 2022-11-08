#include <iostream>
#include "handler.hpp"

long long HUI::find(const int &index, FibonacciRow &collection)
{
  return collection.getNumber(index).number;
}
void HUI::getRow(const int &start, const int &finish, FibonacciRow &collection)
{
  for(int i = start; i <= finish; i++)
  {
    long long res = collection.getNumber(i).number;
    std::cout << res << " ";
  }
  std::cout << std::endl;
}
void HUI::getFullRow(const bool clear, FibonacciRow &collection)
{
  if(collection.empty())
  {
    std::cout << "<EMPTY>" << std::endl;
    return;
  }
  if(clear)
  {
    collection.pop_all_returning();
  }
  else
  {
    for(int i = collection.getMinIndex(); i <= collection.getMaxIndex(); i++)
    {
      std::cout << collection.getNumber(i).number << " ";
    }
    std::cout << std::endl;
  }
}
long long HUI::getMax(FibonacciRow &collection)
{
  return collection.getNumber(collection.getMaxIndex()).number;
}
long long HUI::getMin(FibonacciRow &collection)
{
  return collection.getNumber(collection.getMinIndex()).number;
}
void HUI::clear(FibonacciRow &collection)
{
  collection.pop_all_void();
}
void HUI::checkIndex(const int &index)
{
  if((index >= 92) or (index <= -92))
  {
    throw std::invalid_argument("<UNREACHABLE VALUE>");
  }
}
int HUI::readNum(std::istream &input)
{
  std::string str;
  input >> str;
  for(auto i : str)
  {
    if(!(std::isdigit(i) || (i == '-')))
    {
      throw std::invalid_argument("<INVALID COMMAND SEQUENCE>");
    }
  }
  return std::stoi(str);
}
