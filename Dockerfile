FROM ubuntu:latest

COPY SDDaMT.deb /app/

RUN apt-get update && \
    apt-get install -y dpkg && \
    dpkg -i /app/SDDaMT.deb || apt-get -f install -y && \
    rm -rf /var/lib/apt/lists/*

CMD ["/factorial", "5"]
