#pragma once

#include "VehicleBuilder.h"
#include "AxleNum.h"

namespace core {
    /**
     * @brief TruckDirector is a director in builder pattern.
     * 
     */
    class VehicleDirector {
    public:
        VehicleDirector();
        void ChangeBuilder(VehicleBuilder* builder);
        void Make(const AxleNum type);

    private:
        VehicleBuilder* m_builder;
    };
}