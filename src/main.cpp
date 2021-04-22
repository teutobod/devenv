#include <cstring>

static size_t ConvertRomanLetterToInteger(const char romanLetter) {
  switch (romanLetter) {
    case 'I':
      return 1;
    case 'V':
      return 5;
  }
}

static size_t ForEveryLetterInRomanString(const char *string) {
  int length = strlen(string);
  size_t integer = 0;

  for (int i = 0; i < length; i++) {
    integer = integer + ConvertRomanLetterToInteger(string[i]);
  }
  return integer;
}

size_t RomanToInt(const char *string) {
  return ForEveryLetterInRomanString(string);
}
