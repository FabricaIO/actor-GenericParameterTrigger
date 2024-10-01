/*
* This file and associated .cpp file are licensed under the GPLv3 License Copyright (c) 2024 Sam Groveman
*
* Contributors: Sam Groveman
*/

#pragma once
#include <Arduino.h>
#include <SensorManager.h>
#include <vector>
#include <map>

/// @brief Allows for retriveal of a particular parameter's value
class GenericParameterTrigger {
	protected:
		/// @brief Holds pump configuration
		struct {			
			/// @brief A set of sensor paramter names to use 
			std::vector<String> Parameters;

			/// @brief Whether to enable auto triggering or not
			bool Enabled;			
		} parameter_config;

		std::map<String, double> getParameterValues();
};