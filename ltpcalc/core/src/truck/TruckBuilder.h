#pragma once

#include "VehicleBuilder.h"
#include "Truck.h"

namespace core {
    /**
     * @brief Concrete builder in builder pattern.
     * 
     */
    class TruckBuilder : public VehicleBuilder {
    public:
        TruckBuilder();
        void SetName(std::string name) override;
        void AddAxle() override;
        void Reset() override;
        Truck GetProduct();
    
    private:
        Truck m_truck;
    };
}