from socketIO_client import SocketIO
import serial
import time


print("Comenzando...")
socketIO = SocketIO('201.174.122.203', 5001)
print("Conectado al servidor.")

arduino=serial.Serial('/dev/ttyACM0',9600, timeout = 3.0)
arduino.isOpen()
while True:
    arduino.write("s")
    sig = arduino.readline()
    #sig = str(input ("Servo position: "))
    if not sig:
        continue
    print(sig)
    socketIO.emit("angulo",sig)
    time.sleep(0.1)

arduino.close()
