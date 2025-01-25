const struct binding bindings[] = {
	// name		function		args
//	{ ">",		insertChar,		{.c='>'} },	// move to next cell
//	{ "<",		insertChar,		{.c='>'} },	// move to prev cell
//	{ "+",		insertChar,		{.c='>'} },	// increment current cell
//	{ "-",		insertChar,		{.c='>'} },	// decrement current cell
//	{ ".",		insertChar,		{.c='>'} },	// write current cell
//	{ ",",		insertChar,		{.c='>'} },	// read 1byte to current cell
//	{ "[",		insertChar,		{.c='>'} },	// if current cell is 0, skip to after the corresponding ]
//	{ "]",		insertChar,		{.c='>'} },	// if current cell is not 0, track back to after the corresponding [
//	{ "RESERVE",	changeImmutableOffset,	{}	 },	// mark the next X cells as important	
//	{ "FUNCTION",	makeFunction,		{}	 },	// create a function declaration
};

int debug = 1;	// default debug value

