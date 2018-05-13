workspace "Aplas"
    configurations { "Debug", "Release" }

project "Aplas"
    kind "StaticLib"
    language "C++"

    includedirs {
        "include"
    }
    files {
        "include/**.hpp"
    }
