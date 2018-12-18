#include <iostream>
#include <sstream>
#include "handler.hpp"

int main()
{
  FibanaciRow memory;
  std::string string;
  while(std::getline(std::cin, string))
  {
    try
    {
      std::istringstream input{string};
      std::string command;
      input >> command;
      if(command == "find")
      {
        input.ignore();
        int index = HUI::readNum(input);
        HUI::checkIndex(index);
        std::cout << HUI::find(index, memory) << std::endl;
      }
      else if(command == "show_row")
      {
        input.ignore();
        if(std::isdigit(input.peek()) || (input.peek() == '-'))
        {
          int start = HUI::readNum(input);
          input.ignore();
          int stop = HUI::readNum(input);
          HUI::getRow(start, stop, memory);
        }
        else if(std::isalpha(input.peek()))
        {
          std::string definition;
          input >> definition;
          if(definition == "all")
          {
            HUI::getFullRow(false, memory);
          }
          else
          {
            throw std::invalid_argument("<INVALID COMMAND SEQUENCE>");
          }
        }
        else
        {
          throw std::invalid_argument("<INVALID COMMAND SEQUENCE>");
        }
      }
      else if(command == "show_max")
      {
        std::cout << HUI::getMax(memory) << std::endl;
      }
      else if(command == "show_min")
      {
        std::cout << HUI::getMin(memory) << std::endl;
      }
      else if(command == "clear")
      {
        HUI::clear(memory);
      }
      else if(command == "pop_all")
      {
        HUI::getFullRow(true, memory);
      }
      else
      {
        throw std::invalid_argument("");
      }
    }
    catch(std::invalid_argument &e)
    {
      std::cout << e.what() << std::endl;
    }
  }
  return 0;
}
