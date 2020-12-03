import serial
import time
from datetime import datetime

ser = serial.Serial(
    'COM4', 2000000, timeout=0, parity=serial.PARITY_NONE, rtscts=1
)

while True:
    ts = time.gmtime()
    try:
        s = str(ser.readline(100).decode())
        #if s != "": 
        #    f = open("Adgangslogg.txt", "a+")
            #f.write(time.strftime("%m-%d %H:%M:%S %Z", ts), s, "\n")
    except:
       print('ERROR')
time.sleep(1)

