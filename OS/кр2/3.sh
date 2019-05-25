#!/bin/bash
cd ~
mkdir my_sec
ls -ld my_sec
cd my_sec
echo secret > shadow
ls -l shadow
chmod 610 shadow
