#include <unistd.h>
#include <stdio.h>

#include "unix_utils.h"

void execute(const char_t* path, const char_t* arg) {
	if (arg != NULL) {
		execl(path, "app", arg, (char*)NULL);
	} else {
		execl(path, "app", (char*)NULL);
	}
}

void check_can_execute(const char_t* path) {
	access(path, X_OK);
}

