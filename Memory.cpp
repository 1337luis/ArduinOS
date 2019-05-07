#include "Memory.h"

Memory::Memory()
{
  initializeMemory();
}

unsigned char Memory::readMem( int pos )
{
  return mem[ pos ];
}

void Memory::writeMem( int pos, unsigned char value )
{
  mem[ pos ] = value;
}

void Memory::initializeMemory()
{
  for( int x = 0; x < MEMSZ; x++ ) mem[ x ] = 0x00;
}
