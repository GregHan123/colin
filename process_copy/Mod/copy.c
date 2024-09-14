#include "process_copy.h"

int main(int argc, char* argv[]){
	int s_fd = open(argv[1], O_RDONLY);
	int d_fd = open(argv[2], O_WRONLY | O_CREAT, 0666);
	int pos = atoi(argv[3]);
	int len;
	int blocksize = atoi(argv[4]);
	lseek(s_fd, pos, SEEK_SET);
    	lseek(d_fd, pos, SEEK_SET);
	char buffer[blocksize];
	bzero(buffer, blocksize);
	len = read(s_fd, buffer, blocksize);
	write(d_fd, buffer, len);
	close(s_fd);
	close(d_fd);
	return 0;
}
