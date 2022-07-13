#!/bin/bash -x

# clean up from any previous attempts
rm -rf  WORK && mkdir WORK && cd WORK

# need a copy of the tarball in the WORK directory
cp ../gsoc-application-1.0.0.tar.gz 

# expand the upstream tarball source
tar xvf gsoc-application-1.0.0.tar.gz

# build the package
cd gsoc-application-1.0.0 
dh_make -f ../*gsoc-application-1.0.0.tar.gz
dpkg-buildpackage -uc -us
# check its contents
dpkg --contents ../*.deb

echo It should be able to install now with dpkg --install
