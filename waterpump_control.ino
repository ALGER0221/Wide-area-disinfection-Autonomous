#if (ARDUINO >= 100)
 #include <Arduino.h>
#else
 #include <WProgram.h>
#endif

#include <Servo.h> 
#include <ros.h>
#include <std_msgs/UInt16.h>

ros::NodeHandle  nh;
ros::Subscriber<std_msgs::UInt16> sub("servo", turbo_lv);
Servo turbo_1;

void turbo_lv( const std_msgs::UInt16& cmd_msg){
  servo.write(cmd_msg.data); 
  if(int((cmd_msg.data)>=30)digitalWrite(3,HIGH);
  else digitalWrite(3,LOW);
}

void setup(){
  nh.initNode();
  nh.subscribe(sub);
  turbo_1.attach(6); 
  pinMode(3,OUTPUT);
}

void loop(){
  nh.spinOnce();
  delay(1);
}
