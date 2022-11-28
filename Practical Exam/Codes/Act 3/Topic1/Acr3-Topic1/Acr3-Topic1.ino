int a = 6;
int b = 7;
int c = 8;
int d = 9;
int e = 10;
int f = 11;
int g = 12;

int digit1 = 2;
int digit2 = 3;


 
char Num[10] = {
		0b0000001, //0
		0b1001111, //1
		0b0010010, //2
        0b0000110, //3
        0b1001100, //4
        0b0100100, //5
        0b0100000, //6
        0b0001111, //7
        0b0000000, //8
		0b0000100  //9
    };


 
void number(int n)
{
 digitalWrite(a, n & 0b1000000);
 digitalWrite(b, n & 0b0100000);
 digitalWrite(c, n & 0b0010000);
 digitalWrite(d, n & 0b0001000);
 digitalWrite(e, n & 0b0000100);
 digitalWrite(f, n & 0b0000010);
 digitalWrite(g, n & 0b0000001);
}
 
void setup()
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(digit1, OUTPUT);
  pinMode(digit2, OUTPUT);
  
  digitalWrite(digit1, 1); // disable digit1
  digitalWrite(digit2, 0); // disable digit2
}


long interval ;
int count = 0;
void loop(){
  
 int d1 = count / 10;
 int d2 = count % 10;
  
  
  if(millis() - interval > 1000)
 {
    count++; 
   interval = millis();
 }
  
 digitalWrite(digit2, 0); // Off digit2
 digitalWrite(digit1, 0);
 number(Num[d1]); 
 digitalWrite(digit1, 1); 
 delay(10); // 1
  
 digitalWrite(digit2, 0); // Off digit2
 digitalWrite(digit1, 0); // Off digit1
  
 number(Num[d2]); 
 digitalWrite(digit2, 1);
 delay(10); // 2
  
  if(count >= 100){
    count = 0;
  };
}

 



















