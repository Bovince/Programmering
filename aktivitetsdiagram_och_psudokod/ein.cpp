#include <iostream>
#include <sys/select.h>
#include <ncurses.h>
#include <math.h>
#include <string>
using namespace std;
int kbhit(void)
{
struct timeval tv;
fd_set read_fd;

tv.tv_sec=0;
tv.tv_usec=0;

FD_ZERO(&read_fd);

FD_SET(0,&read_fd);

if(select(1, &read_fd,NULL, NULL, &tv) == -1)
return 0; 



if(FD_ISSET(0,&read_fd))

return 1;


return 0;
}

int main(){
while(1){
if(kbhit()){
std::cout << ".";
} 
}
return 0;
}
	
	
	
