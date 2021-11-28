#include "TruckBuilder.h"

namespace core {
    TruckBuilder::TruckBuilder() {
        m_truck = Truck();
    }

    void TruckBuilder::SetName(std::string name) {
        m_truck.SetTitle(name);
    }

    void TruckBuilder::AddAxle() {
        m_truck.AddAxle();
    }

    void TruckBuilder::Reset() {
        m_truck = Truck();
    }

    Truck TruckBuilder::GetProduct() {
        return m_truck;
    }
}