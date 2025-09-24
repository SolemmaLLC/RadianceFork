#README

This is the fork of Radiance (https://github.com/LBNL-ETA/Radiance) that
ClimateStudio uses for building our executables. It contains minimal
changes to the src/ files contained to the branch CSbuiuld. While it should
compile as Radiance main, this is not reccomended. We use it as a
sub-module and only compile the specific libraries (from common and rt) that
we need.

