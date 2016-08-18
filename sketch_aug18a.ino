#define ledGreen 3
#define ledYellow 5
#define ledRed 6

float tempreture;
int delay_time = 1000;
int hot_temp = 27;
int ok_temp = 26;
int delay_time_analog = 5;

void setup() {
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledRed, OUTPUT);
}

void loop() {
	tempreture = (analogRead(0) * 5000 / 1024 - 500) / 10;

	if (tempreture >= hot_temp) {
		for (int p = 0; p < 256; p++) {
			analogWrite(ledRed, p);
			delay(delay_time_analog);
		}
		for (int p = 255; p >= 0; p--) {
			analogWrite(ledRed, p);
			delay(delay_time_analog);
		}
    delay(delay_time);
	} else if (tempreture >= ok_temp) {
		for (int p = 0; p < 256; p++) {
			analogWrite(ledYellow, p);
			delay(delay_time_analog);
		}
		for (int p = 255; p >= 0; p--) {
			analogWrite(ledYellow, p);
			delay(delay_time_analog);
		}
    delay(delay_time);
	} else {
		for (int p = 0; p < 256; p++) {
			analogWrite(ledGreen, p);
			delay(delay_time_analog);
		}
		for (int p = 255; p >= 0; p--) {
			analogWrite(ledGreen, p);
			delay(delay_time_analog);
		}
    delay(delay_time);
	}
}
