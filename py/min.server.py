import serial
from sys import exit
import os
ser = serial.Serial('/dev/ttyACM0', 9600)
#Setting first boot temperature 
set_temp = 0
while True:
        
        if set_temp == 0:
                set_temp = raw_input("What temperature would you like? ")
        else:
                 print "Menu:"       
        
        print "Hello what would you like to check?"
        print "1. Temperature"
        print "2. Humidity"
        print "3. Settings"
        print "4. Exit"