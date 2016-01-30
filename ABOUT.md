# Arduino-Smart_Home
Arduino uno controlled Home Automation system.

<p>Ever wanted to make your home automated..? Wanted to control the lights, fan and other appliances from your smartphone...? Or wanted a tutorial about connected devices and getting started with it..?  Home Automation will show you how to make your home automated using an android smartphone. This requires you to have no experience of android programming at all, as a free application is included for you to develop. Using this android application you will be able to control your lights, air conditioning, door locks ,etc all from your smartphone. This system uses bluetooth to connect with your device and control the various appliances in your home. Have fun with this tutorial!</p>

<h4>What are the stuff required to do this project..?</h4>
<h6>Hardware :</h6>
<p>1.Arduino / Arduino Clone or make your own custom arduino board.</p>
<p>2.A 5v TTL -UART bluetooth module like : JY-MCU BT_BOARD (Cheaper) or Bluesmirf Gold/Silver.</p>
<p>3.Five 5V SPDT relays like : 5V relay.</p>
<p>4.Prototype board or breadboard></p>
<p>5.Connecting wires.</p>

<h6>Software :</h6>
<p>1.Arduino IDE : Arduino .</p>
<p>2.Android phone with Smart-Home Application</p>

<h4>So how does it work..? </h4>
<p>The Android Home Automation project comes with a free application called “SmartHome” . This application controls the various appliances connected to your arduino and relays. When the toggle buttons on the application are pressed, corresponding bluetooth signals are sent from your android phone to the bluetooth module you have hooked up to your arduino. The arduino finds out which signal was sent and compares it to the predefined signals assigned for each appliance. When it identifies that signal, then the arduino activates the relay hooked up to its digital pin by passing 5V through it. Thus the relay is switched ON and the corresponding appliance connected to the relay is turned ON as well. To switch it OFF , arduino passes a 0V or logic low to its digital pin.
</p>
