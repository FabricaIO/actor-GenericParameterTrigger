#include "GenericParameterTrigger.h"

/// @brief Gets the values of all parameters
/// @return The values of the parameters as a map
std::map<String, double> GenericParameterTrigger::getParameterValues() {
	std::map<String, double> result;
	for (const auto& m : SensorManager::measurements) {
		if (std::find(parameter_config.Parameters.begin(), parameter_config.Parameters.end(), m.parameter) != parameter_config.Parameters.end()) {
			result.insert({m.parameter, m.value});
		}
	}
	return result;
}