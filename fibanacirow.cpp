#include <iostream>
#include "fibanacirow.hpp"

FibanaciRow::FibanaciRow()
{
  row_.push_front(0);
  collection_.emplace(0, row_.begin());
  row_.push_front(1);
  collection_.emplace(1, row_.begin());
  max_index_ = 1;
  min_index_ = 0;
}
FibanaciNumber FibanaciRow::pop(const bool positive)
{
  if(positive && (max_index_ >= 0))
  {
    FibanaciNumber elem = {max_index_, row_.front()};
    row_.pop_front();
    collection_.erase(elem.index);
    max_index_--;
    return elem;
  }
  else
  {
    FibanaciNumber elem = {min_index_, row_.back()};
    row_.pop_back();
    collection_.erase(elem.index);
    min_index_++;
    return elem;
  }
}
void FibanaciRow::push(const FibanaciNumber &elem)
{
  for(auto i : collection_)
  {
    if(elem.index == i.first)
    {
      return;
    }
  }
  if(elem.index > 0)
  {
    row_.push_front(elem.number);
    collection_.emplace(elem.index, row_.begin());
    max_index_ = elem.index;
  }
  else
  {
    row_.push_back(elem.number);
    collection_.emplace(elem.index, --row_.end());
    min_index_ = elem.index;
  }
}
void FibanaciRow::pop_all()
{
  while(!row_.empty())
  {
    FibanaciNumber elem = pop(true);
    std::cout << "(" << elem.index <<")" << elem.number << " ";
  }
  std::cout << std::endl;
}
bool FibanaciRow::ispresent(const int &index)
{
  if(collection_.count(index) > 0)
  {
    return true;
  }
  return false;
}
long long FibanaciRow::getNumber(const int &index)
{
  return *collection_[index];
}
long long FibanaciRow::getNumber()
{
  return *collection_[max_index_];
}
