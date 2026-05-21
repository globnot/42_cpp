#!/bin/bash

diff <(./account | sed 's/\[[0-9]*_[0-9]*\]/[TIMESTAMP]/g') \
	<(sed 's/\[[0-9]*_[0-9]*\]/[TIMESTAMP]/g' 19920104_091532.log)
