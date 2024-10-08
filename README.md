# no-console-spam

SFSE plugin that gets rid of the annoying console spam when loading a save. This is caused by conditions using the same functions as console commands, which print their result to the console.

### Requirements
* [XMake](https://xmake.io) [2.8.2+]
* C++23 Compiler (MSVC)

## Getting Started
```properties
git clone --recurse-submodules https://github.com/qudix/sfse-no-console-spam
cd sfse-no-console-spam
```

## Building
To build the project, run the following command:
```properties
xmake build
```

> ***Note:*** *This will generate a `build/windows/` directory in the **project's root directory** with the build output.*

## Project Generation (Optional)

### Visual Studio
If you want to generate a Visual Studio project, run the following command:
```properties
xmake project -k vsxmake
```

> ***Note:*** *This will generate a `vsxmakeXXXX/` directory in the **project's root directory** using the latest version of Visual Studio installed on the system.*

### Visual Studio Code
If you want to enable intellisense in Visual Studio Code, install the `clangd` extension and run the following command:
```properties
xmake project -k compile_commands --lsp=clangd
```

> ***Note:*** *This will generate a `compile_commands.json` file in the **project's root directory***
