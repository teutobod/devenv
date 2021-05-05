#include "main.h"

#include <cstring>

static size_t ConvertRomanLetterToInteger(const char roman_letter);

static size_t ForEveryLetterInRomanString(const char *string);

static size_t ConvertRomanLetterToInteger(const char roman_letter) {
  switch (roman_letter) {
    case 'I':
      return 1;
    case 'V':
      return 5;
    case 'X':
      return 10;
  }
}

static size_t ForEveryLetterInRomanString(const char *string) {
  int length = strlen(string);
  size_t accumulated_value = 0;

  for (int i = 0; i < length; i++) {
    accumulated_value =
        accumulated_value + ConvertRomanLetterToInteger(string[i]);
  }
  return accumulated_value;
}

size_t RomanToInt(const char *string) {
  return ForEveryLetterInRomanString(string);
}
