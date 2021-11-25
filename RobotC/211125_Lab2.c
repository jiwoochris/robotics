
void straight(){
	resetMotorEncoder( motorB );
	resetMotorEncoder( motorC );
	motor[ motorB ] = 20; motor[ motorC ] = 20;
	wait1Msec(2000);
}
task main()
{
	int degree;
	float angle = 90.0;
	float radius = 2.8;
	float axis = 12.0/2.0;
	degree = (int)( axis / radius * angle );

	resetMotorEncoder( motorB );
	resetMotorEncoder( motorC );
	setMotorTarget( motorB, degree, 20);
	setMotorTarget( motorC, -degree, 20);
	while ( getMotorRunning( motorB ) ) {}

	motor[ motorB ] = 0; motor[ motorC ] = 0;
	wait1Msec(500);
	straight();

	resetMotorEncoder( motorB );
	resetMotorEncoder( motorC );
	setMotorTarget( motorB, -degree, 20);
	setMotorTarget( motorC, degree, 20);
	while ( getMotorRunning( motorB ) ) {}

	motor[ motorB ] = 0; motor[ motorC ] = 0;
	wait1Msec(500);
	straight();
	straight();

	resetMotorEncoder( motorB );
	resetMotorEncoder( motorC );
	setMotorTarget( motorB, -degree, 20);
	setMotorTarget( motorC, degree, 20);
	while ( getMotorRunning( motorB ) ) {}

	motor[ motorB ] = 0; motor[ motorC ] = 0;
	wait1Msec(500);
	straight();
	straight();

	motor[ motorB ] = 0; motor[ motorC ] = 0;
	wait1Msec(500);

	resetMotorEncoder( motorB );
	resetMotorEncoder( motorC );
	setMotorTarget( motorB, degree, 20);
	setMotorTarget( motorC, -degree, 20);
	while ( getMotorRunning( motorB ) ) {}

	motor[ motorB ] = 0; motor[ motorC ] = 0;
	wait1Msec(500);

	straight();
	straight();

	resetMotorEncoder( motorB );
	resetMotorEncoder( motorC );
	setMotorTarget( motorB, degree, 20);
	setMotorTarget( motorC, -degree, 20);
	while ( getMotorRunning( motorB ) ) {}

	motor[ motorB ] = 0; motor[ motorC ] = 0;
	wait1Msec(500);

	straight();
	straight();
}
