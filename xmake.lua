-- set minimum xmake version
set_xmakever("2.9.0")

-- includes
includes("lib/commonlibsf")

-- set project
set_project("sfse-no-console-spam")
set_version("0.2.0")
set_license("GPL-3.0")

-- set defaults
set_languages("c++23")
set_warnings("allextra")
set_defaultmode("releasedbg")

-- add rules
add_rules("mode.releasedbg", "mode.debug")
add_rules("plugin.vsxmake.autoupdate")

-- set policies
set_policy("package.requires_lock", true)

-- setup targets
target("sfse-no-console-spam")
    -- add dependencies to target
    add_deps("commonlibsf")

    -- add commonlibsf plugin
    add_rules("commonlibsf.plugin", {
        name = "no-console-spam",
        author = "qudix",
        description = "BEGONE CONSOLE SPAM!"
    })

    -- add source files
    add_files("src/*.cpp")
    add_headerfiles("src/**.h")
    add_includedirs("src")
    set_pcxxheader("src/pch.h")
