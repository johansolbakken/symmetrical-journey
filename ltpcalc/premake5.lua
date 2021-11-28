-- Premake.lua
workspace "LTP-calc"
    architecture "x64"
    configurations { 
        "Debug", 
        "Release" 
    }
    outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "core"
    kind "SharedLib"
    language "C++"
    cppdialect "C++17"
    location "core"
    targetdir ("bin/" .. outputdir)
    objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
    
    files { "%{prj.name}/src/**.h", "%{prj.name}/src/**.cpp" }

    filter "configurations:Debug"
        defines { "DEBUG" }
        symbols "On"
    
    filter "configurations:Release"
        defines { "NDEBUG" }
        optimize "On"

project "persistence"
    kind "SharedLib"
    language "C++"
    cppdialect "C++17"
    location "persistence"
    targetdir ("bin/" .. outputdir)
    objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
    
    files { "%{prj.name}/src/**.h", "%{prj.name}/src/**.cpp" }
    includedirs { "core/src" }

    filter "configurations:Debug"
        defines { "DEBUG" }
        symbols "On"
    
    filter "configurations:Release"
        defines { "NDEBUG" }
        optimize "On"

project "ui"
    kind "ConsoleApp"
    language "C++"
    cppdialect "C++17"
    location "ui"
    targetdir ("bin/" .. outputdir)
    objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
    
    files { "%{prj.name}/src/**.h", "%{prj.name}/src/**.cpp" }

    includedirs { "core/src", "persistence/src" }

    links { "core", "persistence" }

    filter "configurations:Debug"
        defines { "DEBUG" }
        symbols "On"
    
    filter "configurations:Release"
        defines { "NDEBUG" }
        optimize "On"

