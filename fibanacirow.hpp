#ifndef FIBANACIROW_HPP
#define FIBANACIROW_HPP
#include <list>
#include <map>

struct FibanaciNumber
{
  int index;
  long long number;
};
class FibanaciRow
{
public:
  using collection_type = std::map<int, std::list<long long>::iterator>;
  using row_type = std::list<long long>;
  FibanaciRow();
  ~FibanaciRow() = default;
  void pop_all();
  FibanaciNumber pop(const bool positive);
  void push(const FibanaciNumber &elem);
  bool ispresent(const int &index);
  long long getNumber(const int &index);
  long long getNumber();
private:
  row_type row_;
  collection_type collection_;
  int max_index_;
  int min_index_;
};
#endif
