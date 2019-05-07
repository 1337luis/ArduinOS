#include "System.h"


System::System()
{
}

char* System::displayPrompt()
{
  return "root@ArduinOS# ";
}

char* System::processCommand( char* cmd )
{
  char* result = "";
  if( cmd == "ver" )
  {
    result = "1.0.0";
  } else {
    result = "El comando no existe";
  }
  return result;
}
