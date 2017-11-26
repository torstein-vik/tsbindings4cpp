#!/bin/bash

RED='\033[01;31m'
GREEN='\033[01;32m'
NC='\033[0m'

process() {
    GREP_COLOR='01;31' egrep --color=always '.*\:\ failed\!|$' | GREP_COLOR='01;32' egrep --color=always '.*\:\ succeeded\!|$'
}

make test | process
OUT=${PIPESTATUS[0]}
if [ $OUT -ne 0 ]; then
    echo -e "${RED}Some tests failed!${NC}"
else
    echo -e "${GREEN}All tests passed!${NC}"
fi
echo -e "\n"
exit $OUT
