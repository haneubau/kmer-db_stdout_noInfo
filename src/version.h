#pragma once

#define VERSION "1.9.3"
#define DATE "27.08.2021"

/* 

Version history

1.9.3 (27.08.2021)
- Disabled h-mer hashatables loading in all2all mode.
- Fast CSV saving in all2all and new2all modes.

1.9.2 (16.08.2021)
- Synchronization bugfix in new2all.

1.9.1 (11.08.2021)
- Output matrices can be stored in sparse format (-sparse switch).
- Better workload balancing.

1.9.0 (09.08.2021)
- Improved parallelization scheme in new2all mode (few-fold speed improvement).
- Reduced memory footprint of -multisample-fasta mode.
- More than one input FASTA files supported in -multisample-fasta mode.

1.8.0 (19.03.2021)
- Added -extend switch which allows extending existing kmer database.
- Serialization/deserialization works much faster now.
- Fixed serious bug in -multisample-fasta mode which caused incorrect kmers counting.

1.7.6 (31.03.2020)
- Fixed bug in distance mode when sequence id contained spaces.

1.7.5 (13.02.2020)
- Some compilation warnings removed.
- Fixed crash on samples with small k-mers count or very small filter values.

1.7.4 (29.01.2020)
- Proper handling of triangle input matrices in `distance` mode (triangle outputs are produced).

1.7.3 (17.01.2020)
- Fixed rare bug in hashtable when k-mer containing only T bases was treated as an empty entry. Now an empty item is indicated by a special value instead of a special key.

1.7.2 (15.01.2020)
- Added new distance measure `-mash-query` which is a mash distance calculated w.r.t. a query length (use if the query is much shorter than database sequences).
- C++11 compatibility (compiles with G++ 4.8.5).  

1.7.1 (31.10.2019)
- Possibility to specify low threshold of k-mer minhash filter (-f-start parameter).
- When loading genome files, exact filenames are examined first. If this fails, an attempt to add predefined extensions is made.  

1.7.0 (27.09.2019)
- For performance reasons upper triangle (with diagonal) of distance matrix in all2all mode is no longer saved.
- Preparations for raw serialization of hashtables.

1.6.2: (28.05.2019) After data structure update - stable
Note: Starting from this release version numbering conforms to major.minor.patch scheme.
Added:
- Switch-phylip-out in distance mode which allows storing distance/similarity matrices in Phylip format.

Fixed several bugs from 1.51 release:
- Incorrect support of k-mer lengths < 16.
- Very long processing of long k-mers (k >= 26).
- Segmentation fault when storing minhashed k-mers on a disk (minhash mode).


1.51 (11.04.2019)
- Serious reduction of time and memory requirements of build mode caused by the changes of the data structures. 
E.g., when tested on full k-mer spectrum of 40715 pathogen genomes, time and memory footprint decreased by 1/3 (1h30 to 1h, 60 to 40GB).
- Several new parameters added.
- Lots of bugs fixed.

1.20 (12.02.2019)
Changes:
- new2all mode added,
- uniform output table format for all2all, new2all, and one2all modes,

Bugs fixed:
- proper support of samples with no k-mers of given length,
- problems with building database from minhashed k-mers.

1.12 (19.07.2018)
- Support of no-AVX2 build.

1.11 (13.07.2018)
- Proper handling of uncompressed genomes. 
- Linking against pre-installed zlib available.

1.1 (2018-06-12)
- File loading refactored.
- Small bugs fixed.

1.0 (10.02.2018)
Initial release














*/