# E-Stop
A phyiscal E-stop button for software applications.


While a phyicsal E-Stop button is released, an Arduino Nano sends serial 1's to a PC via USB.  C code on the PC checks for a continuous string of 1's on a specified COM port.  When the message is interrupted, the C code will stop.  

An intruption will occur when the E-Stop button is preseed or the USB serial cable is disconnected.
