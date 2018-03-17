void setup() {
  // put your setup code here, to run once:
  int Sprime = 2;
  int Gnumber = 120;
  bool Parray [Gnumber]; 
  int multi = 2;
}

  int Sprime = 2;
  int Gnumber = 120;
  bool Parray [120]; 
  int multi = 2;

void sieve ()
{
  while (Sprime < Gnumber)
    while (multi*Sprime <= Gnumber){
    Parray[Sprime*multi] = false;
    multi++;  
  }
 Sprime++;
  for (; Parray[Sprime] = true;Sprime++){
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  sieve()
}


