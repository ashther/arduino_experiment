float celsius = 0;
float fahrenheit = 0;

void setup() {
	Serial.begin(9600);
}

float findCel() {
  float sensor = 0; 
  float voltage = 0;
  sensor = analogRead(0);
  voltage = sensor * 5000 / 1024 - 500;
	celsius = voltage / 10;
	return(celsius);
}

float findFah(float celsius) {
	fahrenheit = (1.8 * celsius) + 32;
	return(fahrenheit);
}

void displayTemps(float celsius, float fahrenheit) {
	Serial.print("Temperature is ");
	Serial.print(celsius, 2);
	Serial.print(" deg. C / ");
	Serial.print(fahrenheit, 2);
	Serial.println(" deg. F");
}

void loop() {
	celsius = findCel();
	fahrenheit = findFah(celsius);
	displayTemps(celsius, fahrenheit);
	delay(1000);
}
