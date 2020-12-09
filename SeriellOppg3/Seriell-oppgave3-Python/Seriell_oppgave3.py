import serial
import time
from datetime import datetime


ser = serial.Serial(
    'COM4', 9600, timeout=0, parity=serial.PARITY_NONE, rtscts=1
)


while True:
    ts = time.gmtime()
    print(time.strftime("%m-%d %H:%M:%S %Z", ts))
    s = str(ser.readline(100).decode())


    if s != "":
        f = open("Adgangslogg.txt", "a+")   
        f.write(time.strftime("%m-%d %H:%M:%S %Z", ts))
        f.write(": ")
        f.write(s)
        f.write("\n")
        f.write("\n")


    time.sleep(1)

