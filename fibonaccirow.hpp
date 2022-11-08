#ifndef FIBONACCIROW_HPP
#define FIBONACCIROW_HPP
#include <list>
#include <map>

struct FibonacciNumber
{
  int index;
  long long number;
};
class FibonacciRow
{
public:
  using collection_type = std::map<int, std::list<long long>::iterator>;
  using row_type = std::list<long long>;
  FibonacciRow();
  ~FibonacciRow() = default;
  void pop_all_returning();
  void pop_all_void();
  FibonacciNumber pop(const bool positive);
  void push(const FibonacciNumber &elem);
  bool ispresent(const int &index) const;
  void deleteElem(const int &index);
  FibonacciNumber getNumber(const int &index);
  int getMaxIndex() const;
  int getMinIndex() const;
  bool empty();
private:
  row_type row_;
  collection_type collection_;
  int max_index_;
  int min_index_;
};
#endif
