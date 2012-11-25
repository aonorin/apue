#include "apue.h"
#include <fcntl.h>

int main(){
FILE* fd = fopen("tmp","a+");
int result;
printf("fd=%d\n",fd);
/*lock_reg(fd,F_SETLKW,F_WRLCK,0,SEEK_SET,1);*/
result = write_lock(fd,0,SEEK_SET,0);
printf("write_lock result=%d",result);
while(1);
return 0;
}
