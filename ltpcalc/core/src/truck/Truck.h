#pragma once

#include <string>
#include <vector>

namespace core {
    /**
     * @brief A basic Truck
     * 
     */
    class Truck {
    public:
        Truck();
        Truck(const Truck& truck);

        void AddAxle();
        
        inline void SetTitle(std::string title) { m_title = title; }
        inline std::string GetTitle() const { return m_title; }

        inline void SetLicense(std::string license) { m_license = license; }
        inline std::string GetLicense() const { return m_license; }

        inline int GetAxleCount() const { return m_axleCount; }

        inline void SetAllowedPayload(int payload) { m_allowedPayload = payload; }
        inline int GetAllowedPayload() const { return m_allowedPayload; }

        inline void SetAxleDistance(int index, int distance) { m_axleDistances[index] = distance; }
        inline std::vector<int> GetAxleDistances() const { return m_axleDistances; }
        inline void SetAxleLoad(int index, int load) { m_allowedAxleLoads[index] = load; }
        inline std::vector<int> GetAxleLoads() const { return m_allowedAxleLoads; }
        inline void SetDeadWeight(int index, int weight) { m_deadWeights[index] = weight; }
        inline std::vector<int> GetDeadWeights() const { return m_deadWeights; }


    private:
        std::string m_title;
        std::string m_license;

        int m_allowedPayload;
        int m_axleCount;
        
        std::vector<int> m_axleDistances;
        std::vector<int> m_allowedAxleLoads;
        std::vector<int> m_deadWeights;
    };
}