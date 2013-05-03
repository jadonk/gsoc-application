#include <stdio.h>
#include <inttypes.h>

FILE *fp;

void pinMode(uint8_t pin, uint8_t mode)
{
	char path[40];
	int status = 0;
	snprintf(path, 40, "/sys/class/gpio/gpio%d/direction", pin);	
	printf("pinMode() called with pin=%d and mode=%d\n",pin,mode);
	if(!(fp = fopen(path, "w+")))
	{
		printf("Cannot open direction file for above pin!\n");
		return;
	}
	rewind(fp);
	if(mode == 1)
	{		
		status = fprintf(fp, "out");
		printf("File written to with status %d\n",status);
	}
	else if(mode == 0)
	{
		status = fprintf(fp, "in");
		printf("File written to with status %d\n",status);
	}
	else
	{
		printf("Invalid mode\n");
		fclose(fp);
		return;
	}
	fclose(fp);
	printf("Mode set successfully!\n");
}

void digitalWrite(uint8_t pin, uint8_t val)
{
	char path[40];
	int status = 0;
	snprintf(path, 40, "/sys/class/gpio/gpio%d/value", pin);	
	printf("digitalWrite() called with pin=%d and val=%d\n",pin,val);
	if(!(fp = fopen(path, "w+")))
	{
		printf("Cannot open value file for above pin!\n");
		return;
	}
	rewind(fp);
	if(val == 0)
	{		
		status = fprintf(fp, "%d", 0);
		printf("File written to with status %d\n",status);

	}
	else if(val == 1)
	{
		status = fprintf(fp, "%d", 1);
		printf("File written to with status %d\n",status);
	}
	else
	{
		printf("Invalid value\n");
		fclose(fp);		
		return;
	}
	fclose(fp);	
	printf("Value set successfully!\n");
}

//The LED is connected to GPIO1_6
//Hence value = 1*32 + 6 
int myLed = 38;
int main(int argc, char** argv)
{
	//Currently, it is assumed that the pin has already been exported
	pinMode(myLed, 1);
	digitalWrite(myLed, 1);
}
