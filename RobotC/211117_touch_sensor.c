#pragma config(Sensor, S1,     touchSensor,    sensorEV3_Touch)

task main()
{
	motor[motorB]=50;
	motor[motorC]=50;

	while(getTouchValue(touchSensor)==0){}

	motor[motorB]=-50;
	motor[motorC]=-50;
	wait1Msec(500);
}
