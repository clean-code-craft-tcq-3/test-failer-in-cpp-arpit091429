#include "alertTest.h"
#include <iostream>
#include <string>

float convertFarenehitToCelcius(float f) { return ((f - 32) * 5 / 9); }

void alertInCelcius(const char* env, float farenheit)
{
    int         returnCode;
    std::string environment(env);
    float       celcius = convertFarenehitToCelcius(farenheit);
    if (environment == "Test environment")
        returnCode = testNetworkAlertStub(celcius);
    else if (environment == "Production environment")
        returnCode = testProductionAlertStub(celcius);
    if (returnCode == 500)
    {
        alertFailureCount += 1;
    }
}

int main()
{
    alertInCelcius("Production environment", 400.5);
    alertInCelcius("Test environment", 403.6);
    checkTotalFailures();
    return 0;
}

