#include "Memory.h"
#include "IO.h"
#include "System.h"

System sys;

void setup() 
{
  Serial.begin(9600);
  Serial.print( sys.displayPrompt() );
}

void loop() 
{
  if(Serial.available()){
        String my_name = Serial.readStringUntil('\n');
 
        Serial.println("Nice to meet you, " + my_name + "!");
        Serial.print( sys.displayPrompt() );
    }
}

void read_line(){
    String line_string;
 
    while(!Serial.available());
 
    if(Serial.available()){
        line_string = Serial.readStringUntil("\n");
        if(line_string.length() < LINE_BUF_SIZE){
          line_string.toCharArray(line, LINE_BUF_SIZE);
          Serial.println(line_string);
        }
        else{
          Serial.println("Input string too long.");
          error_flag = true;
        }
    }
}
