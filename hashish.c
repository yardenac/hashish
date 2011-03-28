#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  *argv++;
  argc--;
  while (argc--)
	 printf("%s\n",*argv++);
}
