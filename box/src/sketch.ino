int led = 13;  //Output pin
int inter_trigger = 1;  //Input pin 2 (for interrupts) - Note that not all pins have hardware interrupts
volatile int state = LOW;  // Input state toggle

int count = 0;

void setup() 
{
  Serial.begin(9600); //Initialize serial communications at 9600 bps
  pinMode(led, OUTPUT);
  attachInterrupt(inter_trigger, triggered_event, RISING);  // Interrupt called on rising signal from 'trigger' pin
}

void loop() 
{
  for (int i = 0; i<1; i++)
  {
    delay(100);
  }
  Serial.println(count);
}

void triggered_event()
{
  count = count + 1;
  state = !state;
  digitalWrite(led, state);
}