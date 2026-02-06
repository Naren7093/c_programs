 January 29:
 I studied the DHT11 and QCC74x datasheets to understand register usage and hardware connections.
Using this knowledge, I interfaced the DHT11 with the QCC74x board and successfully obtained temperature and humidity data.

January 30:
I interfaced the DHT11 with the QCC74x board and tried to display temperature and humidity data on the minicom and lcd.But, i didn't get proper outcome on lcd.

January 31:
I am currently analyzing the RTC code at a core level, understanding what happens internally at the hardware and register level, and verifying the implementation using the QCC74x Programming Guide and RTC datasheet. This activity is ongoing.

February 2:
I analyzed the datasheets of DHT11, MQ135, RTC (DS1307), and the QCC74x board and interfaced all sensors successfully. The temperature, humidity, air quality, and RTC data were transmitted via UART-TTL and displayed correctly on Minicom.

February 3:
I interfaced the DHT11 sensor with an OLED display on the QCC74x board. Temperature and humidity values were read correctly and displayed successfully on the OLED. Previously, I had interfaced DHT11, MQ135, and DS1307, and verified their outputs via UART-TTL on Minicom.

February 4:
Today, I focused entirely on board-to-board communication via SPI, but I couldn’t get the expected results.

February 6:
Configured GPIO0 on the QCC74x board using direct register-level programming and set it to SWGPIO output mode. Verified the configuration by blinking an LED through manual bit manipulation and software delay loops.
