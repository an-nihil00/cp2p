#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <sys/socket.h>

#define DEFAULT_PORT 1917

void usage();

char name[256];
int port;

int
main(int argc, char **argv)
{
	char c;
	opterr = 0;
		
	while ((c = getopt(argc, argv, "hp:n:")) != -1) {
		switch (c)
		{
			case 'p':
				break;
			case 'n':
				break;
			case 'h':
				usage();
				return 0;
			case '?':
				if ((optopt == 'p') ||
				    (optopt == 'n'))
					fprintf (stderr, 
						"Option -%c requires "
						"an argument\n", optopt);
				else if (isprint(optopt))
					fprintf(stderr,
						"Unknown option -%c\n", 
						optopt);
				else
					fprintf(stderr,
						"Unknown option character "
						"'\\x%x'\n",optopt);
				return 1;
			default:
				abort(); //something has gone very wrong
		}
	}

	return 0;
}

void
usage()
{
	fprintf(stderr,
		"aaaa\n");
}
