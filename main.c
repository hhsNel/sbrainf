#include <stdio.h>
#include <stdint.h>

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

void insertChar(struct arg);
void changeImmutableOffset(struct arg);
void makeFunction(struct arg);

#include "config.h"

int main(int argc, char** argv) {

}
