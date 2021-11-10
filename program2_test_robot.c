#define LEFT_MOTOR motorC
#define RIGHT_MOTOR motorB

task main()
{
	motor[LEFT_MOTOR] = +50; motor[RIGHT_MOTOR] = +50;
	wait1Msec(500);
	motor[LEFT_MOTOR] = +47; motor[RIGHT_MOTOR] = 0;
	wait1Msec(750);

	motor[LEFT_MOTOR] = +50; motor[RIGHT_MOTOR] = +50;
	wait1Msec(500);
	motor[LEFT_MOTOR] = +47; motor[RIGHT_MOTOR] = 0;
	wait1Msec(750);

	motor[LEFT_MOTOR] = +50; motor[RIGHT_MOTOR] = +50;
	wait1Msec(500);
	motor[LEFT_MOTOR] = +47; motor[RIGHT_MOTOR] = 0;
	wait1Msec(750);

	motor[LEFT_MOTOR] = +50; motor[RIGHT_MOTOR] = +50;
	wait1Msec(500);
	motor[LEFT_MOTOR] = +47; motor[RIGHT_MOTOR] = 0;
	wait1Msec(750);
}
