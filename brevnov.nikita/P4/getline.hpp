#ifndef GETLINE_HPP
#define GETLINE_HPP
#include <cstddef>
namespace brevnov
{
  char * getline(std::istream& in, char stop);
  char * newmemory(char * line, std::size_t max_size);
}
#endif
