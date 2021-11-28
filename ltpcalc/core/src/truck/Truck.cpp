#include "Truck.h"

namespace core {
    Truck::Truck() 
    : m_title("Untitled"), m_license("No license"), m_axleCount(0), m_allowedPayload(0)
    {}

    Truck::Truck(const Truck& truck) : 
    m_title(truck.GetTitle()), m_license(truck.GetLicense()), 
    m_axleCount(truck.GetAxleCount()), m_allowedPayload(truck.GetAllowedPayload()),
    m_axleDistances(truck.GetAxleDistances()), m_allowedAxleLoads(truck.GetAxleLoads()), m_deadWeights(truck.GetDeadWeights())
    {}

    void Truck::AddAxle() {
        m_axleDistances.push_back(0);
        m_allowedAxleLoads.push_back(0);
        m_deadWeights.push_back(0);
        m_axleCount++;
    }
}