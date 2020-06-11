from socketIO_client import SocketIO
import serial
import time

print("Comenzando...")
socketIO = SocketIO('201.122.174.201', 5001)
print("Conectado al servidor.")

arduino=serial.Serial('/dev/ttyACM0',9600, timeout = 3.0)

def response(*args):
    print(args[0])
    arduino.write((args[0]).encode())

socketIO.on("nuevo_mensaje", response)
socketIO.wait()

arduino.close()
