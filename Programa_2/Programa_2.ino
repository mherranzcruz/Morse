
/******************************************************************************
**                                                                           **
**                              Morse                                        **
**                                                                           **
**                                                                           **
******************************************************************************/

//****** Includes *************************************************************

//****** Variables ************************************************************
const int pin = 8;   // pin for speaker

int note = 1047;
int velocitat = 10;

//****** Setup ****************************************************************
void setup()
{
}

//****** Loop *****************************************************************
void loop()
{
  //T   ** Exemple SOS **
  ratlla();
  //Espai entre lletres
  espaiL();
  //R
  punt();
  ratlla();
  punt();
  //Espai entre lletres
  espaiL();
  //E
  punt();
    //Espai entre lletres
  espaiL();
  //U
  punt();
  punt();
  ratlla();
  //Espai entre lletres
  espaiL();
  //R
  punt();
  ratlla();
  punt();
    //Espai entre lletres
  espaiL();
  //E
  punt();
  //Espai entre paraules
  espaiP();
  //U
  punt();
  punt();
  ratlla();
    //Espai entre lletres
  espaiL();
  //N
  ratlla();
  punt();
    //Espai entre paraules
  espaiP();
    //1
  punt();
  ratlla();
  ratlla();
  ratlla();
  ratlla();
    //Espai entre lletres
  espaiL();
  //0
  ratlla();
  ratlla();
  ratlla();
  ratlla();
  ratlla();
  //Espai entre paraules
  espaiP();
  
}

//****** Funcions *************************************************************
void punt()
{
  tone(pin, note, 1000/velocitat);
  delay(1000/velocitat); 
  delay(1000/velocitat); 
}

void ratlla()
{
  tone(pin, note, 3*(1000/velocitat));
  delay(3*(1000/velocitat)); 
  delay(1000/velocitat);  
}

void espaiL()  //Espai entre lletres
{  
  delay(2*(1000/velocitat));  
}

void espaiP()  //Espai entre paraules
{   
  delay(6*(1000/velocitat));  
}

