#include <iostream>

#include <Core.h>

int main()
{
    // Create a director
    core::VehicleDirector director;

    // Create a truck builder
    core::TruckBuilder builder;
    
    // Assign the truck builder
    director.ChangeBuilder(&builder);

    // Tell the truck builder to make a TwoAxled truck
    director.Make(core::TwoAxle);    
    core::Truck truck = builder.GetProduct();
    std::cout << truck.GetAxleCount() << std::endl;

    // Tell the turck builder to make a ThreeAxled truck
    director.Make(core::ThreeAxle);
    truck = builder.GetProduct();
    std::cout << truck.GetAxleCount() << std::endl;

    return 0;
}