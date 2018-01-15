#ifndef ARCHER_TELEMETRYAPP_HPP
#define ARCHER_TELEMETRYAPP_HPP

#include <dji_vehicle.hpp>
#include <dji_linux_helpers.hpp>

struct BatteryData {
	uint32_t	capacity;
	int32_t		voltage;
	int32_t		current;
	uint8_t		percentage;
}

BatteryData getBatteryData(int responseTimeout);
