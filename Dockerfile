FROM ubuntu:latest

# Copy the .deb package into the container
COPY SDDaMT.deb /app/

# Install dependencies, fix broken package installs, and clean up
RUN apt-get update && \
    apt-get install -y dpkg && \
    dpkg -i /app/SDDaMT.deb || apt-get -f install -y && \
    rm -rf /var/lib/apt/lists/*

# Run the executable using its absolute path
CMD ["/factorial", "5"]
