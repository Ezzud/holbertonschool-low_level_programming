#ifndef _FILE_IO_
#define _FILE_IO_
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
#endif