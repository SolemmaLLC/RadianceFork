#README

This is the fork of Radiance (https://github.com/LBNL-ETA/Radiance) that
ClimateStudio uses for building our executables. It contains minimal
changes to the src/ files contained to the branch CSbuild. It will
not compile on its own as a number of header files have been removed.

With the original headers restored it should compile as Radiance main, but this 
is not really a useful exercise. At best it will be no different from Radiance main,
at worst it will fail to build. We use it as a sub-module and only compile
the specific libraries that we need.

