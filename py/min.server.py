import serial
import time
## check serial port
def checkokay():
ser.flushInput()
time.sleep(3)
line=ser.readline()
time.sleep(3)