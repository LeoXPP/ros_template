#include "ros/ros.h"
#include "std_msgs/String.h"

#include <sstream>

#include <stddef.h>
#include <stdio.h>            /* This example main program uses printf/fflush */
#include "simulink_model_closedloop.h" /* Model header file */
#include "types.h"
/**
 * This tutorial demonstrates simple sending of messages over the ROS system.
 */

real_t *out_uuuuu;

void rt_OneStep(void);
void rt_OneStep(void)
{
  static boolean_T OverrunFlag = false;

  /* Disable interrupts here */

  /* Check for overrun */
  if (OverrunFlag) {
    rtmSetErrorStatus(rtM, "Overrun");

    return;
  }

  OverrunFlag = true;

  /* Save FPU context here (if necessary) */
  /* Re-enable timer or interrupt here */
  /* Set model inputs here */

  /* Step the model */
  simulink_model_closedloop_step();

  /* Get model outputs here */
real_t *out_u ;
out_u  = out_uuuuu;
printf("the final answer is : %f", out_u[0]);
  /* Indicate task complete */
  OverrunFlag = false;

  /* Disable interrupts here */
  /* Restore FPU context here (if necessary) */
  /* Enable interrupts here */
}


int main(int argc, char *argv[])
{
	/**
	 * The ros::init() function needs to see argc and argv so that it can perform
	 * any ROS arguments and name remapping that were provided at the command line.
	 * For programmatic remappings you can use a different version of init() which takes
	 * remappings directly, but for most command-line programs, passing argc and argv is
	 * the easiest way to do it.  The third argument to init() is the name of the node.
	 *
	 * You must call one of the versions of ros::init() before using any other
	 * part of the ROS system.
	 */
	ros::init(argc, argv, "test4acados");

	/**
	 * NodeHandle is the main access point to communications with the ROS system.
	 * The first NodeHandle constructed will fully initialize this node, and the last
	 * NodeHandle destructed will close down the node.
	 */
	ros::NodeHandle n;

	/**
	 * The advertise() function is how you tell ROS that you want to
	 * publish on a given topic name. This invokes a call to the ROS
	 * master node, which keeps a registry of who is publishing and who
	 * is subscribing. After this advertise() call is made, the master
	 * node will notify anyone who is trying to subscribe to this topic name,
	 * and they will in turn negotiate a peer-to-peer connection with this
	 * node.  advertise() returns a Publisher object which allows you to
	 * publish messages on that topic through a call to publish().  Once
	 * all copies of the returned Publisher object are destroyed, the topic
	 * will be automatically unadvertised.
	 *
	 * The second parameter to advertise() is the size of the message queue
	 * used for publishing messages.  If messages are published more quickly
	 * than we can send them, the number here specifies how many messages to
	 * buffer up before throwing some away.
	 */
	ros::Publisher chatter_pub = n.advertise<std_msgs::String>("chatter", 1000);

	ros::Rate loop_rate(10);
	simulink_model_closedloop_initialize();
	/**
	 * A count of how many messages we have sent. This is used to create
	 * a unique string for each message.
	 */
	int count = 0;
	while (ros::ok())
	{
		/**
		 * This is a message object. You stuff it with data, and then publish it.
		 */
		printf("acados sim solve: returned yes yes yes!!!");
		rt_OneStep();

		std_msgs::String msg;

		std::stringstream ss;
		ss << "hello world " << count;
		msg.data = ss.str();

		ROS_INFO("%s", msg.data.c_str());

		/**
		 * The publish() function is how you send messages. The parameter
		 * is the message object. The type of this object must agree with the type
		 * given as a template parameter to the advertise<>() call, as was done
		 * in the constructor above.
		 */
		chatter_pub.publish(msg);

		ros::spinOnce();

		loop_rate.sleep();
		++count;
	}

	return 0;
}