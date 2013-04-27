import serial
from time import sleep
ser = serial.Serial('/dev/ttyACM0', 9600)
while 1:
 ser.readline();