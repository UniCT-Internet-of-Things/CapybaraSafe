#ifndef SENSOR_FAKER_PROVIDER_H
#define SENSOR_FAKER_PROVIDER_H

#include <Arduino.h>
#include "esp_random.h"
#include "../utils/globals.h"
#include "../led_controls/led_controls.h"
#include "../pin_configuration.h"

namespace SENSOR_FAKER {
    typedef struct fall_sensor_data {
        float l_m; // linear_max
        float a_s; // acc_skewness
        float g_s; // gyro_skewness
        float p_g_m; // post_gyro_max
        float p_l_m; // post_lin_max
    } fall_sensor_data;

    typedef struct heart_sensor_data {
        float t; // temperature
        int s; // saturation
        int hr; // heart rate
    } heart_sensor_data;

    typedef struct sensor_data {
        fall_sensor_data fall_data;
        heart_sensor_data heart_data;
    } sensor_data;

    const fall_sensor_data fall_good_records[]{
            {3.4995078271054227, 0.3923627246585775,  0.7983139357758015, 0.4812768537029166,  1.9183191838390568},
            {6.9304738587821655, 0.3798632529546006,  0.5905112534998681, 2.720901011308065,   -1.0890862681262616},
            {0.1227858781944997, -0.3782949230948214, 0.5854651401384646, 0.0269744414254052,  -0.012162075634957},
            {13.861413964905491, -0.0653786548380332, 0.3255536748357137, -1.6427847699628684, 2.7178508558609966},
            {5.485712337329806,  1.5761798605190631,  0.2830231125482213, 0.4669356296888525,  0.3067956568558676}
    };

    const fall_sensor_data fall_bad_records[]{
            {8.001343533611577,  2.6430604716503456, 2.206962881262564,  4.695695635116883, 7.813437949357603},
            {14.382881100595949, 3.1911624505584086, 1.7682012901954594, 6.031719959290128, 9.564622030018851},
            {7.394160928957207,  1.7575300253923043, 1.970425708950912,  5.10026131953892,  6.85986811432493},
            {12.471895749497309, 3.336106554549044,  1.3027979702575951, 4.099293352970621, 12.067671588508734},
            {16.71039164779765,  3.366184143510885,  3.2272115207801604, 7.692888559490957, 16.20485746859099}
    };

    const heart_sensor_data heart_good_records[]{
            {37.9, 92, 104},
            {37.5, 94, 128},
            {38.3, 93, 106},
            {37.6, 99, 77},
            {37.8, 94, 61}};

    const heart_sensor_data heart_bad_records[]{
            {39.8, 90, 92},
            {39.1, 95, 151},
            {39.5, 94, 146},
            {39.3, 83, 89},
            {39.7, 95, 141}};

    fall_sensor_data get_fall_good_record();

    fall_sensor_data get_fall_bad_record();

    heart_sensor_data get_heart_good_record();

    heart_sensor_data get_heart_bad_record();

    sensor_data get_sensor_data();
}

#endif //SENSOR_FAKER_PROVIDER_H
