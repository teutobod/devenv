#include <cstring>

size_t RomanToInt(const char *string) {
  size_t integer = 0;
  char romanLetter = string[0];
  switch (romanLetter) {
    case 'I':
      integer = 1;
      break;
    case 'V':
      integer = 5;
      break;
  }
  return integer;
}
