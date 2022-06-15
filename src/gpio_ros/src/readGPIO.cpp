// This is a baseline readGPIO script for ONE topic to be included in your RaspberryPi.
// You MUST compile this in RaspberryPi in order for your system to work.
// You can extend this node to publish more topics (for the 3 thresholds)
// OR combine the 3 sensor inputs with a single logic statement 
// (e.g. to only output 1 when all 3 sensors gives 1)

#include "ros/ros.h" // Include necessary libraries here
#include "std_msgs/Bool.h" // We use a Boolean here, but you can use String or any other fancy msgs!
#include <wiringPi.h>

int main(int argc, char **argv)
{
  // Initialize ROS Node
  ros::init(argc, argv, "GPIO_PIN");
  ros::NodeHandle n;

  // Setup wiring Pi here
  wiringPiSetup(); // Setup the library
  
  // Configure Pi Pins
  // Remember to follow the convention of wiringPi.
  // Pls refer to image provided for the conventions.
  int pinNum = 21; // TODO: 1. Change your pins as required. You may want to initialize more pins here!
  pinMode(pinNum, INPUT); // Configure GPIO21 (pin 5) as an input  

  // TODO: 2. Set up publisher(s) to ROS topic(s) using 'advertise'

  
  // Set up a loop rate
  ros::Rate loop_rate(10);

  // Main program loop
  while(ros::ok())
  {
    // TODO: 3. Declare your ROS message here!



    // TODO: 4. Write your logic for the message here. 
    // You may want to send a ROS msg with a value of 1 when digitalPinOut is equal to 1, and vice-versa. 
    // You can also spice it up by sending a string instead of a Boolean! Feel free to be creative!
    bool digitalPinOut = digitalRead(pinNum);
    
    
    
    
    // TODO: 5. Publish your ROS msg to the publisher that you've created in part (1).
    



    // Process any call backs, and loop rate
    ros::spinOnce();
    loop_rate.sleep();

  }
  return 0;
}



