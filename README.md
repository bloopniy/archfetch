# ARCHFETCH 


> Note: ARCHFETCH is only actively tested on x86-64 and aarch64 platforms. It may work on other platforms but is not guaranteed to do so.

<img src="screenshots/example1.png" width="49%" align="left" />
<img src="https://upload.wikimedia.org/wikipedia/commons/2/24/Transparent_Square_Tiles_Texture.png" width="49%" height="16px" align="left" />
<img src="screenshots/example4.png" width="49%" align="left" />
<img src="https://upload.wikimedia.org/wikipedia/commons/2/24/Transparent_Square_Tiles_Texture.png" width="49%" height="16px" align="left" />
<img src="screenshots/example2.png" width="48%" align="top" />
<img src="screenshots/example3.png" width="48%" align="top" />
<img src="screenshots/example5.png" height="15%" align="top" />

According configuration files for examples are located [here](https://github.com/fastfetch-cli/fastfetch/tree/dev/presets/examples).

There are [screenshots on different platforms](https://github.com/fastfetch-cli/fastfetch/wiki).

## Installation

### Arch Linux
```sh
git clone https://github.com/bloopniy/archfetch.git && cd archfetch/
cmake -S . -B build && cmake --build build && cmake --install build
```


## Usage

* Run with default configuration: `archfetch`
* Run with [all supported modules](https://github.com/fastfetch-cli/fastfetch/wiki/Support+Status#available-modules) to find what interests you: `fastfetch -c all.jsonc`
* View all data that fastfetch detects: `fastfetch -s <module1>[:<module2>][:<module3>] --format json`
* Display help messages: `fastfetch --help`
* Generate a minimal config file: `fastfetch [-s <module1>[:<module2>]] --gen-config [</path/to/config.jsonc>]`
    * Use [The online configuration generator](https://fastfetch-cli.github.io/fastfetch-config/) to generate a full config file with all optional options

### WARNING
This project was made for fun; some features may be broken or not work. Use at your own risk.


