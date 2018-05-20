workspace "Test"
    configurations { "Debug", "Release" }

project "Aplas"
    kind "None"
    language "C++"

    includedirs {
        "../include"
    }
    files {
        "../include/**.cpp",
        "../include/**.hpp"
    }

project "QVM"
    kind "ConsoleApp"
    language "C++"

    includedirs {
        "../include"
    }
    files { "qvm.cpp" }

    filter "configurations:Debug"
        defines { "DEBUG" }
        symbols "On"

    filter "configurations:Release"
        defines { "NDEBUG" }
        optimize "On"
