#define LED_PIN2 8
#define LED_PIN 7
#define SWITCH_PIN_ON 3 // Pin for the button to turn the LED on
#define SWITCH_PIN_OFF 4 // Pin for the button to turn the LED off
#define aref_voltage 3.3
int tempPin=0;
int tempReading;
void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
  pinMode(SWITCH_PIN_ON, INPUT);
  pinMode(SWITCH_PIN_OFF, INPUT);
  Serial.begin(9600);
  analogReference(EXTERNAL);
}

void loop() {
  static bool ledState = false;
  static bool ledState1 = false;
  // Variable to store the state of the LED
if (digitalRead(SWITCH_PIN_ON) == HIGH) {
    ledState = true;// Set the LED to be permanently on
  }
  if (digitalRead(SWITCH_PIN_OFF) == HIGH) {
    ledState = false; // Set the LED to be permanently off
  }
  if(ledState==true){
    tempReading = analogRead(tempPin);
    Serial.print("RAW Input=");
    Serial.print(tempReading);

    float voltage = tempReading * aref_voltage;
    voltage /= 1024.0;
    Serial.print("-");
    Serial.print(voltage); Serial.print("volts");

    float temperatureC = (voltage - 0.5) * 100;
    Serial.print("-Temperature");
    Serial.print(temperatureC); Serial.println("degrees C");
    if(temperatureC>=23){
      ledState1=true;
      
    }

else
    {ledState1=false;}

    delay(1000);
    digitalWrite(LED_PIN2, ledState1 ? HIGH : LOW);
  }

  digitalWrite(LED_PIN2, ledState1 ? HIGH : LOW);
  digitalWrite(LED_PIN, ledState ? HIGH : LOW); 
  // Update the LED based on the ledState
}
