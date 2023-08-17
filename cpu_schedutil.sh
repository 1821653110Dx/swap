#!/usr/bin/zsh

for core in {0..3}
do
	sudo cpufreq-set -g schedutil -c $core
done

cpufreq-info
