/* Example code for Think OS.

Copyright 2015 Allen Downey
License: Creative Commons Attribution-ShareAlike 3.0

*/

typedef struct {
  // put whatever you need here
} Semaphore;

Semaphore *make_semaphore(int value);
void semaphore_wait(Semaphore *semaphore);
void semaphore_signal(Semaphore *semaphore);
