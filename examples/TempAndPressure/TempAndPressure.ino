/**
 **************************************************
 *
 * @file        TempAndPressure.ino
 * @brief       This example shows how to use BMP180 sensor to measure Temperature and pressure, then calculate apsolute pressure or altitude
 *
 *
 *
 * @authors     @ soldered.com, Robert Peric
 * @link        www.solde/red.333060
 ***************************************************/

#include "BMP180-SOLDERED.h"

Bmp_180 myBmp;

void setup()
{
    Serial.begin(115200);
    Serial.println("Here I am");

    if (myBmp.begin())
        Serial.println("BMP180 init success");
    else
    {
        // Oops, something went wrong, this is usually a connection problem,
        // see the comments at the top of this sketch for the proper connections.

        Serial.println("BMP180 init fail\n\n");
        while (1)
            ; // Pause forever.
    }
}

void loop()
{
    double temp, pressure, p0, a;

    // Check for temperature readings
    // readTemperature will return number of miliseconds or 0 in case of i2c/easyC error
    int status = myBmp.startTemperature();
    if (status != 0)
    {
        delay(status);

        status = myBmp.getTemperature(temp);
        if (status != 0)
        {
            Serial.print("Temperature: ");
            Serial.println(temp);

            // Check for pressure readings
            // readPressure will return number of miliseconds or 0 in case of i2c/easyC error
            // Begin a pressure reading.
            // Oversampling: 0 to 3, higher numbers are slower, higher-res outputs.
            status = myBmp.startPressure(3);
            if (status != 0)
            {
                delay(status);

                status = myBmp.getPressure(pressure, temp);

                if (status != 0)
                {
                    Serial.print("absolute pressure: ");
                    Serial.print(pressure, 2);
                    Serial.print(" mb, ");
                    Serial.print(pressure * 0.0295333727, 2);
                    Serial.println(" inHg");

                    // The pressure sensor returns abolute pressure, which varies with altitude.
                    // To remove the effects of altitude, use the sealevel function and your current altitude.
                    // This number is commonly used in weather reports.
                    // Parameters: pressure = absolute pressure in mb, ALTITUDE = current altitude in m.
                    // Result: p0 = sea-level compensated pressure in mb
                    double altitude = 90;
                    p0 = myBmp.sealevel(pressure, altitude); // we're at 90 meters (Osijek, CRO)
                    Serial.print("relative (sea-level) pressure: ");
                    Serial.print(p0, 2);
                    Serial.print(" mb, ");
                    Serial.print(p0 * 0.0295333727, 2);
                    Serial.println(" inHg");

                    // On the other hand, if you want to determine your altitude from the pressure reading,
                    // use the altitude function along with a baseline pressure (sea-level or other).
                    // Parameters: pressure = absolute pressure in mb, p0 = baseline pressure in mb.
                    // Result: a = altitude in m.

                    a = myBmp.altitude(pressure, p0);
                    Serial.print("computed altitude: ");
                    Serial.print(a, 0);
                    Serial.print(" meters, ");
                    Serial.print(a * 3.28084, 0);
                    Serial.println(" feet");
                }
            }
        }
    }

    if (status == 0)
    {
        Serial.println("Something went wrong during temperature/pressure readings");
    }


    delay(5000);
}
