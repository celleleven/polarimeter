

<img src="/Polarimeter.png" width="300">

# Open Source Polarimeter 

<a href="http://www.youtube.com/watch?feature=player_embedded&v=YOUTUBE_VIDEO_ID_HERE
" target="_blank"><img src="http://img.youtube.com/vi/YOUTUBE_VIDEO_ID_HERE/0.jpg" 
alt="IMAGE ALT TEXT HERE" width="240" height="180" border="10" /></a>

**TL;DR** Open Source Arduino controlled polarimeter used to measure the angle of polarized light rotation.


## Background
In 1913 German biochemist Leonor Michaelis and Canadian physician Maud Menten were investigating enzyme kinetics.  Using sucrose, an enzyme called invertase, and a polarimeter they were able to design a model depicting the rate of an enzyme (E), to a substrate (S) to create a product (P ).  The enzyme was invertase, the substrate was sucrose, and the product was glucose and fructose.  

![Michaelis-Menton Equation](https://pubs.rsc.org/en/Image/Get?imageInfo.ImageType=GA&imageInfo.ImageIdentifier.ManuscriptID=C4CP04334K&imageInfo.ImageIdentifier.Year=2015)

A polarimeter was used to graph the change in solution over time.  First, light from a sodium Lamp 589 nm, is passed through the first polarizing filter.  That linear light then passes into the sample cell of known length (xxx cm).  The interaction between the sample and polarized light rotates the polarized light.  The second polarizing filter is used to calculate the angle caused by the sample.  This returns the optical rotation angle.

![Setps of Polarimeter](https://www.wikitechy.com/interview-questions/chemistry/img/chemistry-images/why-na-lamp-is-used-in-a-polarimeter.png)At the initial time (T0) the Enzyme and Substrate were combined and the optical rotation was plotted.  As the Enzymed and Substrated produced more product the optical rotation changed.

![Michaelis-Menten Formula](https://wikimedia.org/api/rest_v1/media/math/render/svg/4bae00cd4d91917219daf235391295adeb36c84d)




![Polarimeter ScreenShot](/Polarimeter_screenShot.png)


## Support Websites
[Buy Open Soruce Polarimeter](https://www.celleleven.com/product/Polarimeter/)

[Wikipedia](https://en.wikipedia.org/wiki/Michaelis%E2%80%93Menten_kinetics)

[Background Experiment](https://user.eng.umd.edu/~nsw/ench485/lab14.htm)


## Hardware
|  Qty | Name | Cost | URL |
| --- | --- | --- | --- |
|  1 | Power Supply | $17.58 | https://amzn.to/3dgtzXP |
|  1 | Arduino | $3.00 | https://bit.ly/3diSqKC |
|  1 | 28BYJ-48 Stepper | $2.50 | https://amzn.to/37V8elP |
|  1 | Photo Diode | $0.18 | https://amzn.to/2zKd7RM |
|  1 | Quartz Cuvette | $0.16 | https://bit.ly/3ehhqD7 |
|  1 | LED 590mm | $0.71 | https://amzn.to/37QtQ2v |
|  1 | Peltier | $3.10 | https://amzn.to/3ejcOfI |
|  1 | Polarizer Film | $0.21 | https://amzn.to/2Nbyajc |
|  1 | Fan | $1.80 | https://amzn.to/2Bpr87S |
|  1 | OLED 128x | $7.49 | https://amzn.to/2YiiQI5 |
|  1 | Thermistor | 0.21 | https://amzn.to/2YgyELv |
|  1 | Heatsink n pad | $2.00 | https://amzn.to/2zQ5uJK |
|  1 | Relay | $1.50 | https://amzn.to/37LQWre |
|  10 | 5m Screw | $1.16 | https://bit.ly/3ddSOKp |
|  10 | 5m nuts | $0.66 | https://amzn.to/3di7AiY |
|  1 | Case |  | [Laser Cut or 3D Print Frame gcode](https://www.thingiverse.com/thing:4484626) |
|   | **Total** | $42.25 |  |



## Assembly
### Software
1. [Download Arduino IDE](https://www.arduino.cc/en/main/software)
2. Download this Zip File to your computer
3. Navigate to the ``Polarimeter Code`` folder
4. Upload Polariemter Code to Arduino 

### Electronics
1. Solder wires and components onto Arduino Sheild PCB
2. Solder OLED, (4) Buttons, Wires, and JST-XHP connector to PCB

### Case
1. [Laser Cut or 3D Print Frame gcode](https://www.thingiverse.com/thing:4484626) <br>Roof<br>Base<br>Spine<br>Rib<br>Wall-Right<br>Wall-Left<br>Dash<br>Dash Stands x 2 <br> Cooling Block Top <br> Cooling Block Bottom<br>Buttons

### Hardware
1. Add Arduino to base with screws
2. Attach Sheild to Arduino 
3. Fit RJ-11 Plug into Wall-Right hole and screw in T-slots
4. Connect wires to JST-XHP connectors
5. Add Fan to rib with screws
6. Attach rib to Wall-Right
7. Snake wires through the rib
8.  Attach 28BYJ-48 Stepper driver and motor to spine
9. Add Wall-Left and screw in T-slots
10. Connect JST-XHP wires to 29BYJ-48 Stepper
11. Snake wires through the spine
12. Assemble Cooling Block
13. Attach Colling Block to Rib
14. Add Roof and screw in T-Slots
15. 16. Assemble the DashBoard
16. Attach the remaining wire to the DashBoard
17. Attach DashBoard to Roof and screw in T-slots
18. Power On



## Directions
#### Get Solution Rotation Angle
1. Plug-in Device
2. Loading Splash will run on OLED Screen
3. Remove Cuvet and allow for calibration
4. Add solution to Cuvet and place in Polarimeter
5. Click the button that reads "Run Sample"

####  Get Michaelis-Menton Rate
1. Plug-in Device
2. Loading Splash will run on OLED Screen
3. Remove Cuvet and allow for calibration
4. Add solution to Cuvet and place in Polarimeter
5. Click the button that reads "Michaelis-Menton Kinetics"


## Trouble Shooting
1. Recalibrate
2. Go to settings and change EPROMS calibration values

## Authors

* **[S James Parsons Jr](https://www.linkedin.com/in/sjamesparsonsjr/)** 

## Purchase
[![Donation](https://i1.wp.com/calumetartcenter.com/wp-content/uploads/2013/02/paypal-buy-now-button.png?fit=284%2C136&ssl=1)](https://i1.wp.com/calumetartcenter.com/wp-content/uploads/2013/02/paypal-buy-now-button.png?fit=284%2C136&ssl=1)

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details









# Purpose:
    The purpose of this tool is two parts; first to teach Michaelis-Menten Kinetics, and two to have an affordable means of identifying optical properties of a solution.  The tool cost #% which is lower than others on the market.  You can build it yourself for $xxx, or purchases your kit from [Cell Eleven - Polarimeter](https://www.celleleven.com/polarimeter).  

# Goal:
The goal is to recreate the Michaelis-Menten experiment using the current available technologies at the best possible price.

# Research
  Overview:  Light of a know concentration is polarized and passed through a sample.  Thelight interaction with the sample also rotates the polarized light.  Using known values of light traveled, temperatures, and the angle between the two polarized films, the optical rotation of the solution can be quantized.  This is one feature to help identify a solution.

# Formula
  [α]T/λ = (100 * α)/(l * c)

# Simple Sketch:

## Parametric Model
  - Image Inline-style: ![alt text](https://github.com/Ce11%20Polarimeter%20-%20Bench%20Tool/Image/Polarimeter.png "Polarimeter")
  - Files
  - URL

## Electronics Diagram
  - Image
  - Files
  - URL

## Software Code
  - Image
  - Files
  - URL  

## BOM (Build of Materials)
Name Description Cost URL

| Name        | Description           | Cost  | URL |
| ------------- |:-------------:| -----:|-----:|
| col 3 is      | right-aligned | $1600 |-----:|
| col 2 is      | centered      |   $12 |-----:|
| zebra stripes | are neat      |    $1 |-----:|

# Total


## Tool:

## Assembly:
- Image
- Files
- URL






# Also See:

[wikipedia Polarimeter](https://en.wikipedia.org/wiki/Polarimeter)
