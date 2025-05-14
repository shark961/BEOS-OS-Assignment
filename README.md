
Documentation Content

 BeOS Project Documentation
 a. OS Installation
This guide outlines the installation of an outdated version of BeOS in a virtual environment.
The process was performed using VirtualBox, with default virtual hardware settings.
Due to limitations of the legacy ISO, some installation steps required manual configuration.
Although no screenshots were available, each step was verified through console messages.
The system booted successfully into the BeOS GUI environment.



 b. System Call Implementation
This section describes the implementation of a basic custom system call in the BeOS kernel.
Kernel source code was modified and recompiled using the legacy build tools included in the BeOS developer kit.
The system call was designed to return a predefined message to the user space.
Testing was completed via a simple user-level application that invoked the new call.
Functionality was confirmed by observing correct output from the user application.
