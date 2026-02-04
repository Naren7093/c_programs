# DHT11 with QCC743

- Read DHT11 temperature and humidity using GPIO
- Print values on UART and view using Minicom

## Connections
- VCC  → 3.3V / 5V
- DATA → GPIO_PIN_3
- GND  → GND

## Build
- make clean
- make

## Flash
- make flash CHIP=qcc743 COMX=/dev/ttyACM1

## Minicom
- sudo apt install minicom
- sudo minicom -D /dev/ttyACM1 -b 2000000

## Output
- TEMP=28 C  HUM=65 %
- DHT11 ERROR


