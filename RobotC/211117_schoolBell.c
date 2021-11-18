task main()
{
	int frequency[7] = {523, 587, 659, 699, 784, 880, 988};
	int song[27] = {4,2,2,3,1,1,0,1,2,3,4,4,4,4,2,2,2,3,1,1,0,2,4,4,2,2,2};

	int i, t;
	for(i=0; i<27;i++){
		t = song[i];
		playImmediateTone(frequency[t], 10);
		if(i == 2 || i == 5 || i == 12 || i == 19) sleep(200);
		else sleep(100);
	}
}
