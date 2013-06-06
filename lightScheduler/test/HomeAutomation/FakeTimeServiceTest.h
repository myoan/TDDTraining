#include <TimeService.h>

enum WEEK_t {
	SUNDAY,
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY,
	WEEKEND,
	WEEKDAY,
	EVERYDAY
};

typedef struct Time {
	int minuteOfDay;
	int hourOfDay;
	WEEK_t dayOfWeek;
};

void FakeTimeService_SetMinute(int m);
void FakeTimeService_SetHour(int h);
void FakeTimeService_SetDay(WEEK_t d);
void TimeService_GetTime();

