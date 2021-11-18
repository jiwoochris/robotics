
task main()
{
	string str;

	displayTextLine(0, "%s %s", "Hello", "RobotC");

	for (int i=1; i<=7; i++){
		str += "*";
		displayTextLine(i, "%s", str);
	}

	wait1Msec(3000);
}
