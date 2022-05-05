#include <assert.h>
#include <iostream>

int alertFailureCount = 0;
#define TEMP_THRESHOLD_CELCIUS 200.0

int testNetworkAlertStub(float celcius)
{
    std::cout << "ALERT: Temperature is " << celcius << " celcius.\n";
    if (celcius > TEMP_THRESHOLD_CELCIUS)
    {
        return 500;
    }
    else
    {
        return 200;
    }
}

int testProductionAlertStub(float celcius)
{
    std::cout << "ALERT: Temperature is " << celcius << " celcius.\n";
    // Threshold needs to be defined for production environment, currently returning SUCCESS in all cases.
    return 200;
}

void checkTotalFailures()
{
    assert(alertFailureCount == 1);
    std::cout << alertFailureCount << " alerts failed.\n";
}
