# Setup
setup VScode dev environment to work with ESP-8266 


- install VScode plugin [PlaformIO IDE](https://docs.platformio.org/en/latest//integration/ide/vscode.html#quick-start) `platformio.platformio-ide`

   (this will add `$HOME/.platformio`)
- step by step tutorial https://www.electronicshub.org/programming-esp8266-using-vs-code-and-platformio/


## creating new projects
- naming convention: `<project-name>_<platform>_<framework>` (for example `myProject_espressif_ESP8266-12E_Arduino`)

## platformIO setup
verifiy that your `patformio.ini` includes the following:
```
# basic setup for ESP-8266 ESP-12E NodeMcu Amica V3 4MB FLASH
platform = espressif8266
board = esp12e
framework = arduino

# adjust platformIO monitor to: Serial.begin(115200)
monitor_speed = 115200

# include <LittleFS.h> instead of <FS.h> (SPIFFS)
board_build.filesystem = littlefs
```