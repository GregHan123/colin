#include "process_copy.h"

int main(int argc, char* argv[]){
	int pronum;
	if(argc < 4)
		pronum = 5;
	else
		pronum = atoi(argv[3]);
	if(process_copy_checkpram(argc, argv[1], pronum) == 0){
		int blocksize = process_copy_blocksize(argv[1], pronum);
		process_copy_create(argv[1], argv[2], pronum, blocksize);
	}
	return 0;
}
