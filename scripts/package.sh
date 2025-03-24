echo "Current directory: $(pwd)"
cd ..
dpkg-deb --build SDDaMT
mv SDDaMT.deb SDDaMT/
