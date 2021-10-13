#include <Arduino.h>
#include <WProgram.h>

#include <ros.h>
#include <std_msgs/UInt16.h>

ros::NodeHandle  nh;
ros::Subscriber<std_msgs::UInt16> sub("UV", UV_lv);

void UV_lv( const std_msgs::UInt16& cmd_msg){
  if(int((cmd_msg.data)>=50)digitalWrite(2,HIGH);
  else digitalWrite(2,LOW);
  }

void setup(){
  nh.initNode();
  nh.subscribe(sub);
  pinMode(2,OUTPUT);
}

void loop(){
  nh.spinOnce();
  delay(1);
}
