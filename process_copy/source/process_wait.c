#include "process_copy.h"

void process_wait(){
	pid_t zpid;
	int status;
	while((zpid = waitpid(-1, &status, WNOHANG)) != -1){}
}
