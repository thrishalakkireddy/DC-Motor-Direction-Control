int int1=6;
int int2=5;
void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(int1,OUTPUT);
  pinMode(int2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int but1=digitalRead(2);
  int but2=digitalRead(3);
  if(but1==HIGH){
    CLOCKWISE();
  }
  else if(but2==HIGH){
    ANTICLOCKWISE();
   
  }

}

void CLOCKWISE(){

digitalWrite(int1,1);
digitalWrite(int2,0);
}
void ANTICLOCKWISE(){
  digitalWrite(int1,0);
  digitalWrite(int2,1);

}
