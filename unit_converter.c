#include "unit_converter.h"

// Function to convert Fahrenheit to Celsius
double fahrenheit_to_celsius(double f) {
    return (f - 32) * 5.0 / 9.0;
}

// Function to convert Celsius to Fahrenheit
double celsius_to_fahrenheit(double c) {
    return (c * 9.0 / 5.0) + 32;
}

// Function to convert kilograms to pounds
double kg_to_lbs(double kg) {
    return kg * 2.20462;
}

// Function to convert pounds to kilograms
double lbs_to_kg(double lbs) {
    return lbs / 2.20462;
}
