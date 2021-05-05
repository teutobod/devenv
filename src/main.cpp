#include "main.h"

#include <cstring>

static size_t ConvertRomanLetterToInteger(const char roman_letter);

static size_t ForEveryLetterInRomanString(const char *roman_string);

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

static size_t ForEveryLetterInRomanString(const char *roman_string,
                                          size_t roman_string_len) {
  size_t accumulated_value = ConvertRomanLetterToInteger(roman_string[0]);

  for (int i = 1; i < roman_string_len; i++) {
    int current_number = ConvertRomanLetterToInteger(roman_string[i]);
    int previous_number = ConvertRomanLetterToInteger(roman_string[i - 1]);
    if (previous_number >= current_number) {
      accumulated_value = accumulated_value + current_number;
    } else {
      accumulated_value = current_number - previous_number;
    }
  }
  return accumulated_value;
}

size_t RomanToInt(const char *roman_string) {
  size_t converted_roman_int = 0;
  int length = strlen(roman_string);
  if (length > 0) {
    converted_roman_int = ForEveryLetterInRomanString(roman_string, length);
  }
  return converted_roman_int;
}
