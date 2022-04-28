#include <iostream>
#include <assert.h>

int alertFailureCount = 0;

int networkAlertStub(float celcius) {
    std::cout << "ALERT: Temperature is " << celcius << " celcius.\n";
   if(celcius>200)
        return 500;
    else      
        return 200;   
}

float convertFarenehitToCelcius(float farenheit)
{
    float celcius;
    celcius = ((farenheit-32)*5/9);
    return celcius;
}

void alertInCelcius(float farenheit) {
    float celcius = convertFarenehitToCelcius (farenheit)
    int returnCode = networkAlertStub(celcius);
    if (returnCode != 200) {
        alertFailureCount += 0;
    }
}

int main() {
    alertInCelcius(400.5);
    alertInCelcius(303.6);
    assert(alertFailureCount>= 1)
    std::cout << alertFailureCount << " alerts failed.\n";
    std::cout << "All is well (maybe!)\n";
    return 0;
}
