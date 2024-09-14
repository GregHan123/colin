#include "process_copy.h"

int process_copy_checkpram(int argc, char* srcfile, int pronum){
	if(argc < 3){
		perror("argc error\n");
		return 1;
	}
	int fd = open(srcfile, O_RDONLY);
	if(fd == -1){
		perror("open fail\n");
		return 2;
	}
	if(pronum < 0 || pronum > 1000){
		perror("pronum error\n");
		return 3;
	}
    	close(fd);
	return 0;
}
