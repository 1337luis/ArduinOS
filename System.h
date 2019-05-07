#ifndef SYS_H
#define SYS_H

#include "Memory.h"
#include "IO.h"

class System
{
public:
  System();
  char* displayPrompt();
  char* processCommand( char* );
private:
  Memory mem;
};


#endif
