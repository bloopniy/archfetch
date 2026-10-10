# ARCHFETCH 


> Note: ARCHFETCH is only actively tested on x86-64 and aarch64 platforms. It may work on other platforms but is not guaranteed to do so.

<img width="42%" align="left" alt="image" src="https://github.com/user-attachments/assets/20762345-6e58-4848-9110-66d7a0a4004b" />
<img width="50%" align="top" alt="image" src="https://github.com/user-attachments/assets/09403b9b-38d5-463e-b6d3-dfb79a4ee0d8" />
<div height=10px width=100%>archfetch </div>
<img width="60%" align="left" alt="image" src="https://github.com/user-attachments/assets/365eaf17-9058-46dd-b25f-bbe3f064347c" />
<img width="28%" align="top" alt="image" src="https://github.com/user-attachments/assets/92f48d17-5457-40b3-a35a-20c9f7395535" />


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


