#include "The_Time_Header.h"

The_Time::The_Time()
{
	whatTimeIsIt = 1;
}
The_Time::The_Time(int hour)
{
	whatTimeIsIt = hour;
}
void The_Time::changeTime(int what)
{
	whatTimeIsIt = what;
}
int The_Time::getTime() const
{
	return whatTimeIsIt;
}