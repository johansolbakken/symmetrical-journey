#pragma once

#include <string>

namespace core {
    /**
     * @brief Builder in the builder pattern
     * 
     */
    class VehicleBuilder {
    public:
        virtual void Reset() = 0;
        virtual void SetName(std::string name) = 0;
        virtual void AddAxle() = 0;
    };
}