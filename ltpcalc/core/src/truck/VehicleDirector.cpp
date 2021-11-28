#include "VehicleDirector.h"
#include <iostream>

namespace core {
    VehicleDirector::VehicleDirector() {
        m_builder = nullptr;
    }

    void VehicleDirector::ChangeBuilder(VehicleBuilder* builder) {
        m_builder = builder;
    }

    void VehicleDirector::Make(AxleNum type) {
        if (m_builder == nullptr) throw "Builder is nullptr!";
        
        m_builder->Reset();
        
        switch (type)
        {
        case TwoAxle:
            std::cout << "TwoAxle" << std::endl;
            m_builder->SetName("Two axle truck");
            m_builder->AddAxle();
            m_builder->AddAxle();
            break;

        case ThreeAxle:
            std::cout << "ThreeAxle" << std::endl;
            m_builder->SetName("Three axle truck");
            m_builder->AddAxle();
            m_builder->AddAxle();
            m_builder->AddAxle();
            break;

        case FourAxle:
            m_builder->SetName("Four axle truck");
            m_builder->AddAxle();
            m_builder->AddAxle();
            m_builder->AddAxle();
            m_builder->AddAxle();
            break;
        
        default:
            throw "Does not support type the given type!";
            break;
        }
    }
}