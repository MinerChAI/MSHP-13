#!/bin/bash
cd ~
su
useradd -s /bin/bash -m tux
echo 123 | passwd tux
exit
su tux
cd ~
users
ls /boot > my_love
