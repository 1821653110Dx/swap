#!/usr/bin/zsh

for core in {0..3}
do
	sudo cpufreq-set -g performance -c $core
done

cpufreq-info
