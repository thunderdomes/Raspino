import serial
from time import sleep
ser = serial.Serial('/dev/ttyACM0', 9600)
while 1:
    ser.write('1')
    sleep(0.02)
    ser.readline()
    sleep(0.08)