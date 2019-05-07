#ifndef MEM_H
#define MEM_H

#define MEMSZ 4096

class Memory 
{
public:
  Memory();
  unsigned char readMem( int pos );
  void writeMem( int pos, unsigned char value );
private:
  unsigned char mem[MEMSZ];
  void initializeMemory();
};

#endif
