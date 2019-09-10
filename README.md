# lab1-devices

### Part.A Set Up a Breadboard 
[Video- analog blinking with switch](https://imgur.com/pXVnc5Y)<br><br>
[Image of the breadboard]<br><img src="https://i.imgur.com/RYWS3ej.jpg" height="50%" width="50%">

### Part.B Manually Blink LED

#### B.(a) What Color Stripes are on a 100ohm resistor

A 100ohm resistor will have 4 stripes:<br>
1. Brown (1) <br>
2. Black (0) <br>
3. Brown (1) i.e. the multiplier <br>
4. Gold/Silver/Nothing depending on quality (tolerance). Assuming Silver +/- 10% <br>
  
Thus, it would be 10*10  +/-10%  <br>

#### B.(b)
Build a circuit with the arduino unplugged - same as the one built in Part A  

### Part.C Blink LED with Arduino

#### C.(a) What line(s) of code do you need to change to make the LED blink (like, at all)?

None of the lines. The code as is witht he LED High and Low light and switch off the LED

#### C.(b) What line(s) of code do you need to change to change the rate of blinking?

By altering the delay between High and Low state we can change the duration of how long it is light. By changing the delay period after low and restarting the loop we can change the duration between it lighting again (blinking)

#### C.(c) What circuit element would you want to add to protect the board and external LED?

Keeping the resistor ensures that the voltage received from the USB port does not lead to a current surge through the board, thus safeguarding the board and the LED.

#### C.(d) Change the delay parameter to modify blink rate of your LED to make it blink faster. At what delay can you no longer perceive the LED blinking? (And how can you prove to yourself that it is, in fact, still blinking?

Around 12ms I am unable to tell for sure if the LED is blinking. By making a video on my camera which records things faster I can prove that it is indeed still blinking

#### C.(e) Modify the code to make your LED blink your way. Save your new blink code to your lab 1 repository, with a link on the README.md

My blink my way code is a rudimentary ode to "Eye of the Tiger"

[Video](https://imgur.com/0nT93B4) <br>
[Base Code](https://github.com/ankit-health-tech/lab1-devices/blob/master/blinkmyway.ino)

### 2. Blink your LED

#### 2.(a) Now modify the circuit and program so that you can blink an external LED on pin 9

[Video](https://imgur.com/4UWX7OA) <br>
[Code](https://github.com/ankit-health-tech/lab1-devices/blob/master/blinkat9.ino)

### D. Manually Fade an LED

#### D.1 Are you able to get the LED to glow the whole turning range of the potentiometer? Why or why not?
Yes.

### E. Fade a LED using Arduino

#### E.a What do you have to modify to make the code control the circuit you've built on your breadboard?

No change. the code [link to code](https://www.arduino.cc/en/Tutorial/Fade) works as is to allow for the light to blink. Except for changing the PWM light to pin 11. (the tutorial has it at Pin 9, presumably for a different board config)

#### E.b What is analogWrite()? How is that different than digitalWrite()?

As mentioned in the beginning of the assignment, Digitalwrite provides for a binary experience (high/low state) with two defined levels of brightness of high low leading to the blink experience. On the other hand, analogwrite() allows to truly fade the light across different brightness levels.

#### E.c Create your own funky pattern
Created flickering light which grows in an accelerated fashion. 
[Code](https://github.com/ankit-health-tech/lab1-devices/blob/master/flickering_light.ino)




