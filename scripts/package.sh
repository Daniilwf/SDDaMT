echo "Current directory: $(pwd)"
cd "$(dirname "$0")/.."
dpkg-deb --build SDDaMT
