#include "process_copy.h"

int process_copy_blocksize(char* srcfile, int pronum){
	int fd = open(srcfile, O_RDONLY);
	int fsize = lseek(fd, 0, SEEK_END);
	int task = fsize / pronum;
	if(fsize % pronum > 0)
		++task;
	close(fd);
	return task;
}
