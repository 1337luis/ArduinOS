void msg( String message, int messageType )
{
  switch( messageType )
  {
    case -1:
    	//ERROR
      Serial.println( fC[ 1 ] + message );
    	break;
      
    case 0:
    	//NORMAL
    	break;

    case 1:
    	//INFO
    	break;
  }
}

