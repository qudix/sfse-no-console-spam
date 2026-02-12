includes("lib/commonlibsf")

set_project("sfse-no-console-spam")
set_version("0.2.0")
set_license("GPL-3.0")
set_languages("c++23")
set_warnings("allextra")

add_rules("mode.releasedbg", "mode.debug")
add_rules("plugin.vsxmake.autoupdate")

target("sfse-no-console-spam")
    add_rules("commonlibsf.plugin", {
        name = "no-console-spam",
        author = "qudix",
        description = "BEGONE CONSOLE SPAM!"
    })

    add_files("src/*.cpp")
    add_headerfiles("src/**.h")
    add_includedirs("src")
    set_pcxxheader("src/pch.h")
