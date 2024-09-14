#include "process_copy.h"

int process_copy_create(char* srcfile, char* destfile, int pronum, int blocksize){
	pid_t pid;
	int pos;
	int i;
	char buf1[1024], buf2[1024];
	bzero(buf1, 1024);
	bzero(buf2, 1024);
	for(i = 0; i < pronum; i++){
		pid = fork();
		if(pid == 0)
			break;
	}
	if(pid == 0){
		pos = i * blocksize;
		sprintf(buf1, "%d", pos);
		sprintf(buf2, "%d", blocksize);
		execl("/home/colin/lzw/process_copy/Mod/copy", "copy", srcfile, destfile, buf1, buf2, NULL);
	}
	else if(pid > 0)
		process_wait();
	
	return 1;
}
