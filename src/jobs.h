#ifndef _JOBS_H
#define _JOBS_H

#include <unistd.h>

typedef struct Process {
  struct Process* next;
  char** argv;
  pid_t pid;
  char completed;
  int status;
} Process;

typedef struct Job {
  struct Job* next;
  char* cmd;
  Process* head;
  pid_t pgid;
  int stdin, stdout;
  int bg;
} Job;

void checkBackground();
int launchJob(Job*);

#endif
