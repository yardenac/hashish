#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <errno.h>
#include <string.h>
#include <inttypes.h>

void print_hash(char *string) {
  uint64_t thenum;
  thenum = (uint64_t) strtoull(string,(char **) NULL,10);
  //  printf("%llu %d\n",thenum,(int) sizeof(thenum)); //non-portable test line
  uint8_t * bytepointer = &thenum;
  uint8_t hold = 0;
  int counter = (int) sizeof(thenum);
  while (counter--) {
	 hold = *bytepointer++;
	 printf("  %u\n",hold);
  }
}

int main(int argc, char **argv) {
  argv++;
  argc--;
  while (argc--)
	 print_hash(*argv++);
  exit(EXIT_SUCCESS);
}
