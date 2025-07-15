#include <errno.h>

// Define the global errno variable.
int errno;

// newlib-nano needs these symbols.


int * __errno(void) {
  return &errno;
}

int _close(int file)
{
	return -1;
}

int _read(int file, char *ptr, int len)
{
	return 0;
}

int _write(int file, char *ptr, int len)
{
	return len;
}

int _lseek(int file, int ptr, int dir)
{
	return 0;
}
