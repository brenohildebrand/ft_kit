#!/bin/bash

if [ $# -ne 1 ]; then
	echo "Usage: $0 <program>"
	exit 1
fi

PROGRAM=$1

MODULE_PATHS=($(echo modules/* | tr " " "\n"))

IQUOTE_OPTIONS=''
for MODULE_PATH in "${MODULE_PATHS[@]}"; do
	IQUOTE_OPTIONS+=" -iquote $MODULE_PATH"
done

mkdir -p ./build
gcc -Wall -Wextra -Werror ${IQUOTE_OPTIONS} -iquote programs/${PROGRAM} modules/**/*.c programs/${PROGRAM}/*.c -o build/${PROGRAM} -g