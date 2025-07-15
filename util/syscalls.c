#include <errno.h>

// Define the global errno variable.
int errno;

// newlib-nano needs this symbol as well.
// It is usually a pointer to the errno variable.
int * __errno(void) {
  return &errno;
}
