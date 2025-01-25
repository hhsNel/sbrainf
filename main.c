#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

struct arg {
	int i;
	char c;
	char *s;
	unsigned short p;
};

struct binding {
	char *string;
	void (*func)(struct arg);
	struct arg a;
};

//void insertChar(struct arg);
//void changeImmutableOffset(struct arg);
///void makeFunction(struct arg);

#include "config.h"

#define DLOG(msg) if(debug) printf(" Debug: " msg);
#define DLOGM(msg, ...) if(debug) printf(" Debug: " msg, __VA_ARGS__);

void compile(char *filename) {
	DLOGM("opening file: %s", filename);
}

int main(int argc, char** argv) {
	if(argc == 1) {
		printf("Usage:\n\
%s -c file | -r file...", argv[0]);
		exit(0);
	}
	for(int arg = 1; arg < argc; ++arg) {
		if(argv[arg][0] == '-') {
			switch(argv[arg][1]) {
				case 'd':
				debug = 1;
				break;
			case 'D':
				debug = 0;
				break;
			case 'c':
				if(arg + 1 >= argc) {
					printf("Expected filename after -c");
					exit(1);
				}
				compile(argv[++arg]);
				break;
			// case 'r':
				//if(arg + 1 >= argc) {
				//	printf("Expected filename after -r");
				//	exit(1);
				//}
				//run(argv[++arg]);
				//break;
			}
		}
	}
}


