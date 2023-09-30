#!/usr/bin/env bash

ls -d *-nmake-* | while read d; do h=$(echo $d | cut -d- -f1); v=$(echo $d | cut -d- -f3-); printf "%-20s %s\n" $v $d; done | sort -V
