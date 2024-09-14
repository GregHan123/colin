#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/wait.h>

int process_copy_checkpram(int argc, char* srcfile, int pronum);
int process_copy_blocksize(char* srcfile, int pronum);
int process_copy_create(char* srcfile, char* destfile, int pronum, int blocksize);
void process_wait();
