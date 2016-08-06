void setup() {
	pinMode(3, OUTPUT);
	pinMode(5, OUTPUT);
	pinMode(6, OUTPUT);
	pinMode(9, OUTPUT);
	pinMode(10, OUTPUT);
}

void loop() {

	for (int i = 0; i <= 357; i++) {
		int j_3 = i;
		int j_5 = i - 255 * 0.1;
		int j_6 = i - 255 * 0.2;
		int j_9 = i - 255 * 0.3;
		int j_10 = i - 255 * 0.4;

		if (j_3 > 255) {
			j_3 = 255;
		} else if (j_3 < 0) {
			j_3 = 0;
		}

		if (j_5 > 255) {
			j_5 = 255;
		} else if (j_5 < 0) {
			j_5 = 0;
		}

		if (j_6 > 255) {
			j_6 = 255;
		} else if (j_6 < 0) {
			j_6 = 0;
		}

		if (j_9 > 255) {
			j_9 = 255;
		} else if (j_9 < 0) {
			j_9 = 0;
		}

		if (j_10 > 255) {
			j_10 = 255;
		} else if (j_10 < 0) {
			j_10 = 0;
		}

		analogWrite(3, j_3);
		analogWrite(5, j_5);
		analogWrite(6, j_6);
		analogWrite(9, j_9);
		analogWrite(10, j_10);
		delay(5);
	}

	for (int i = 357; i >= 0; i--) {
		int j_3 = i;
		int j_5 = i - 255 * 0.1;
		int j_6 = i - 255 * 0.2;
		int j_9 = i - 255 * 0.3;
		int j_10 = i - 255 * 0.4;

		if (j_3 > 255) {
			j_3 = 255;
		} else if (j_3 < 0) {
			j_3 = 0;
		}

		if (j_5 > 255) {
			j_5 = 255;
		} else if (j_5 < 0) {
			j_5 = 0;
		}

		if (j_6 > 255) {
			j_6 = 255;
		} else if (j_6 < 0) {
			j_6 = 0;
		}

		if (j_9 > 255) {
			j_9 = 255;
		} else if (j_9 < 0) {
			j_9 = 0;
		}

		if (j_10 > 255) {
			j_10 = 255;
		} else if (j_10 < 0) {
			j_10 = 0;
		}

		analogWrite(3, j_3);
		analogWrite(5, j_5);
		analogWrite(6, j_6);
		analogWrite(9, j_9);
		analogWrite(10, j_10);
		delay(5);
	}

	delay(1000);
	
}
