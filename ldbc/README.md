# Download

It can be downloaded at [LDBC GRAPHALYTICS](https://ldbcouncil.org/benchmarks/graphalytics/). datagen-sf10k-fb is separated into two parts.

1. https://surfdrive.surf.nl/files/index.php/s/mQpAeUD4HIdh88R/download
2. https://surfdrive.surf.nl/files/index.php/s/bLthhT3tQytnlM0/download

After downloading, decompress it:

        $ cat datagen-sf10k-fb.tar.zst.* | tar -I zstd -xv


# Parse

The data is in "datagen-sf10k-fb/datagen-sf10k-fb.e". It outputs `datagen-sf10k-fb.lvid` file.

        $ g++ get_edgelist.cc && ./a.out


