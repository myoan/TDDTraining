#include <CppUTest/CommandLineTestRunner.h>

TEST_GROUP(LightSchedulerTestGroup) {
	void setup() {
	}
	void teardown() {
	}
};

TEST(LightSchedulerTestGroup, SchedulerOnEverydayNotTimeYet) {
	//LightScheduler_ScheduleTurnOn(3, EVERYDAY, 1200);
	//FakeTimeService_SetDay(MONDAY);
	//FakeTimeService_SetMinute(1199);

	//LightScheduler_WakeUp();

	LONGS_EQUAL(LIGHT_ID_UNKNOWN, LightControllerSpy_GetLastId());
	LONGS_EQUAL(LIGHT_STATE_UNKNOWN, LightControllerSpy_GetLastState());
}

int main(int argc, char const* argv[])
{
	return CommandLineTestRunner::RunAllTests(argc, argv);
}
