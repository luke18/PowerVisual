This is visualization program with Map for power systems.
=======

# Environments Required
In the first place, your laptop should be 64-bit. 
## Installation
* Visual Studio 2013
* MATLAB Compiler Runtime v83[Download](http://pan.baidu.com/s/1pJ0qjur)

# Steps to take:
* Install the above softwares.
* Set path for the MCR main directory, "(MCR_PATH)" for example
* In VS2013, from the menu, select "Project > Properties" and apply the settings to "All configurations" (both debug and release targets)
* Under C/C++ properties, set the "Additional Include Directories" to "$(MCR_PATH)\extern\include"
* Under "Linker", set the "Additional Library Directories" to "$(MCR_PATH)\extern\lib\win64\microsoft"
* Extend the PATH environment variable to include the directory "$(MCR_PATH)\bin\win64"
* Put EVPSO84.dll into the above PATH