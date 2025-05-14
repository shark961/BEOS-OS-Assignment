# Project Title: OS Virtualization and System Call Implementation
## Documentation description :
This project explores operating system internals using openSUSE Leap 15.5 and BeOS. 
It involves installing and configuring openSUSE in VirtualBox, using tools like YaST, 
Zypper, and Snapper, and understanding the Btrfs file system. It also examines BeOS in a 
virtual environment, focusing on its file system (BFS), strengths in multimedia performance,
and limitations on modern hardware.

##- System Call Description:
The project demonstrates system calls as a bridge between user applications and the OS kernel.
In openSUSE, it uses the fdatasync() call in C to safely flush file data to disk, supporting 
robust data handling. In BeOS, it simulates file creation and verification using C++ (ofstream, fopen()),
showcasing basic file operations. These examples provide practical insights into system-level 
programming in both current and legacy environments.
