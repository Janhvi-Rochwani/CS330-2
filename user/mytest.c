#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "stddef.h"

int main(){
	int k = forkp(111);
	if (k == 0) printf("\nchild w p = 111");
	else { waitpid(k, NULL); printf("\nparent of %d with pid %d", k, getpid());}

	exit(0);
}
