#include <net/if.h>
#include <stdio.h>

int main (int argc, char** argv) {
	printf("ifindex number for interface %s: %d \n", argv[1], if_nametoindex(argv[1]));
}
