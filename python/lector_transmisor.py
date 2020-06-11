from socketIO_client import SocketIO
import serial
import time


print("Comenzando...")
socketIO = SocketIO('192.168.26.216', 5001)
print("Conectado al servidor.")

arduino=serial.Serial('/dev/ttyUSB0',9600, timeout = 3.0)
arduino.isOpen()
while True:
    arduino.write("s")
    sig = arduino.readline()
    #sig = str(input ("Servo position: "))
    if not sig:
        continue
    print(sig)
    socketIO.emit("nuevo_mensaje",sig)
    time.sleep(0.1)

arduino.close()
