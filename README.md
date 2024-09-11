
<img width="577" alt="Screen Shot 2024-09-10 at 8 45 23 PM" src="https://github.com/user-attachments/assets/fa9e38f7-0a5b-492a-9563-7b851b1e8350">

Below is a detailed README file tailored for the Unit Conversion Application that explains how to set up and run the application on both Windows and macOS. This README is designed to be included in your project directory and should provide clear instructions for any user wanting to compile and use the application.

# Unit Conversion Application

This application allows users to convert between different units of temperature and weight using a simple GUI. It supports conversions between Celsius and Fahrenheit, and kilograms and pounds.

## Requirements

- GCC Compiler
- GTK+ 3

## Installation Instructions

### For macOS:

1. **Install Homebrew (if not installed):**
   ```bash
   /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
   ```

2. **Install GTK+ 3:**
   ```bash
   brew install gtk+3
   ```

3. **Compile the Application:**
   Navigate to the project directory and run:
   ```bash
   gcc -o unit_converter unit_converter.c gui.c `pkg-config --cflags --libs gtk+-3.0`
   ```

4. **Run the Application:**
   ```bash
   ./unit_converter
   ```

### For Windows:

1. **Install MSYS2:**
   - Download and install MSYS2 from [MSYS2's Official Site](https://www.msys2.org/).

2. **Update the package database and base packages:**
   ```bash
   pacman -Syu
   ```

3. **Install the MinGW-w64 toolchain and base development tools:**
   ```bash
   pacman -S mingw-w64-x86_64-toolchain base-devel
   ```

4. **Install GTK+ 3:**
   ```bash
   pacman -S mingw-w64-x86_64-gtk3
   ```

5. **Add MinGW-w64 bin to your PATH:**
   Open a new MSYS2 terminal to ensure the environment is updated:
   ```bash
   export PATH=$PATH:/mingw64/bin
   ```

6. **Compile the Application:**
   Navigate to your project directory in the MSYS2 terminal, then compile:
   ```bash
   gcc -o unit_converter unit_converter.c gui.c $(pkg-config --cflags --libs gtk+-3.0)
   ```

7. **Run the Application:**
   Still in the MSYS2 terminal, execute:
   ```bash
   ./unit_converter.exe
   ```

## Usage

- **Select the Conversion Type:** Choose the desired conversion type from the dropdown menu.
- **Enter the Value:** Type the value you wish to convert in the input field.
- **Convert:** Click the "Convert" button to see the converted value displayed.
