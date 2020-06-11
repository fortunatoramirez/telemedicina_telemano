# Mano controlada a distancia en tiempo real
Mano a base de servomotores, controlada a distancia utilizando Internet (webSockets+python+Arduino)
![](images/controlando_servo_1.png)

### Probado en Ubuntu 18.04

* Server:
```console
cd /node_server
npm install
npm start
```

* Transmisor (cliente):
```console
python lector_transmisor.py
```

* Receptor

