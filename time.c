//time.c: Program time in seconds and displayes the corresponing  hours, minutes and seconds.
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
main()
{
	void second_to_hms(long int time_in_seconds)
	{
			long hr, min, t;
			hr = time_in_seconds/3600;
			t = time_in_seconds%3600;
			min = t/60;
			time_in_seconds = t%60;
			if(hr>0)
				printf("%ld%s:%ld%s:%ld%s", hr,(hr>1)? "hrs":"hr",min,(min>1)? "mins":"min",time_in_seconds,(time_in_seconds>1)? "secs":"sec");//modify printing display
			else if(min>0)
				printf("%ld%s:%ld%s", min,(min>1)? "mins":"min",time_in_seconds,(time_in_seconds>1)? "secs":"sec");
		 	else 
				printf("%ld%s", time_in_seconds,(time_in_seconds>1)? "secs":"sec");
	}
	second_to_hms(90);

}