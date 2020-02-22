This program was a collaboration of my work and 3 other students at Fairliegh Dickinson University. The classes you we designed are:
The FuelGauge Class:

This class simulates a fuel gauge.

Its responsibilities are:

    To know the car’s current amount of fuel, in gallons.

    To report the car’s current amount of fuel, in gallons.

    To be able to increment the amount of fuel by 1 gallon. This simulates putting fuel in the car. (The car can hold a maximum of 15 gallons.)

    To be able to decrement the amount of fuel by 1 gallon, if the amount of fuel is greater than 0 gallons. This simulates burning fuel as the car runs.

The Odometer Class

This class simulates the car’s odometer.

Its responsibilities are:

    To know the car’s current mileage.

    To report the car’s current mileage.

    To be able to increment the current mileage by 1 mile. The maximum mileage the odometer can store is 999,999 miles. When this amount is exceeded, the odometer resets the current mileage to 0.

    To be able to work with a FuelGauge object. It should decrease the FuelGauge object’s current amount of fuel by 1 gallon for every 24 miles traveled. (The car’s fuel economy is 24 miles per gallon.)

We demonstrateed the classes by creating instances of each.

We then simulate filling the car up with fuel when the program is initialized and then run a loop that increments the odometer until the car runs out of fuel.

During each loop iteration, car’s current mileage and amount of fuel is printed and the user is asked wheater or not they would like to continue driving.
