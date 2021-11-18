task main()
{
	int frequency[7] = {523, 587, 659, 699, 784, 880, 988};
	int song[24] = {4,4,5,5,4,4,2,4,4,2,2,1,4,4,5,5,4,4,2,4,2,1,2,0};

	int i, t;
	for(i=0; i<24;i++){
		t = song[i];
		playImmediateTone(frequency[t], 20);
		if(i == 6 || i == 11 || i == 18 || i == 23) sleep(400);
		else sleep(200);
	}
}
