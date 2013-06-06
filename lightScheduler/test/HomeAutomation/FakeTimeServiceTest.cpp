#include <CppUTest/CommandLineTestRunner.h>
#include <CppUTest/TestHarness.h>

extern "C"
{
#include "FakeTimeServiceTest.h"
}

TEST_GROUP(FakeTimeService)
{
	void setup() {
	}
	void teardown() {
	}
};

TEST(FakeTimeService, Create) {
	Time time;
	FakeTimeService_SetMinute(42);
	FakeTimeService_SetDay(SATURDAY);
	TimeService_GetTime(&time);
	LONGS_EQUAL(42, time.minuteOfDay);
	LONGS_EQUAL(SATURDAY, time.dayOfWeek);
}
