# RC Car Project

## Overview
Welcome to the RC Car Project! This project aims to build a remote-controlled car using ESP32 and Raspberry Pi, incorporating path-finding techniques. It's an exciting venture for hobbyists and engineers alike, keen on exploring electronics and programming in a hands-on manner.

## Prerequisites
Before you begin, ensure you have the following:
- A Raspberry Pi
- An ESP32 module
- Basic knowledge of electronics and programming

## Installation

### Clone the Repository
Start by cloning the project repository:

```bash
git clone https://github.com/MarikTik/RC-Car.git
cd RC-Car
```


Environment Setup
Setting Up Environment Variables
For Linux and macOS Users:

    Open your terminal.

    Edit your ~/.bashrc file (Linux) or ~/.bash_profile file (macOS) using a text editor, e.g., nano:

 
```bash
nano ~/.bashrc  # For Linux
nano ~/.bash_profile  # For macOS
```

Add the following lines at the end of the file:

```bash
export WIFI_SSID="your_wifi_ssid"
export WIFI_PASSWORD="your_wifi_password"
```

Replace your_wifi_ssid and your_wifi_password with your actual WiFi credentials.

Save and exit the editor (Ctrl+O, Enter, Ctrl+X for nano).

Reload the file to apply the changes:

```bash
source ~/.bashrc  # For Linux
source ~/.bash_profile  # For macOS
```

For Windows Users:

    Open the Start menu and search for "Environment Variables".
    Click on "Edit the system environment variables".
    In the System Properties dialog, click on "Environment Variables".
    Under "User variables", click "New".
    Add WIFI_SSID as the variable name and your WiFi SSID as the value.
    Click "OK" and repeat the process to add WIFI_PASSWORD with your WiFi password as its value.
