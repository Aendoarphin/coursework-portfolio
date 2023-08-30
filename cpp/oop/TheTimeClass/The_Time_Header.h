#ifndef THE_TIME_HEADER_H
#define THE_TIME_HEADER_H
class The_Time
{
public:
	The_Time(); The_Time(int hour);
	void changeTime(int what);
	int getTime() const;

private:
	int whatTimeIsIt;
};
#endif
