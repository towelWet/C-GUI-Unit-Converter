
<img width="577" alt="Screen Shot 2024-09-10 at 8 45 23 PM" src="https://github.com/user-attachments/assets/fa9e38f7-0a5b-492a-9563-7b851b1e8350">

# Unit Conversion Application

This application allows users to convert between different units of temperature and weight using a simple GUI. It supports conversions between Celsius and Fahrenheit, and kilograms and pounds.

## Requirements

- GCC Compiler
- GTK+ 3

## Installation

### macOS

1. **Install Homebrew** (if not installed):
   ```bash
   /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
   ```

2. **Install GTK+ 3**:
   ```bash
   brew install gtk+3
   ```

3. **Compile the Application**:
   Navigate to the project directory and run:
   ```bash
   gcc -o unit_converter unit_converter.c gui.c `pkg-config --cflags --libs gtk+-3.0`
   ```

4. **Run the Application**:
   ```bash
   ./unit_converter
   ```

### Windows

1. **Install MinGW**:
   - Download and install MinGW from [MinGW's Official Site](http://www.mingw.org/).
   - Add the MinGW bin directory to your system's PATH environment variable.

2. **Install MSYS2** (provides pkg-config and GTK+ 3):
   - Download and install MSYS2 from [MSYS2's Official Site](https://www.msys2.org/).
   - Open MSYS2 terminal and install GTK+ 3:
     ```bash
     pacman -S mingw-w64-x86_64-gtk3
     ```

3. **Compile the Application**:
   Open MinGW or MSYS2 terminal, navigate to your project directory, and run:
   ```bash
   gcc -o unit_converter.exe unit_converter.c gui.c `pkg-config --cflags --libs gtk+-3.0`
   ```

4. **Run the Application**:
   In the same terminal, execute:
   ```bash
   ./unit_converter.exe
   ```

## Usage

- **Select the Conversion Type**: Choose the desired conversion type from the dropdown menu.
- **Enter the Value**: Type the value you wish to convert in the input field.
- **Convert**: Click the "Convert" button to see the converted value displayed.

---

This README provides clear instructions for setting up and running your unit conversion application across different operating systems, ensuring users have the information they need to get started.
