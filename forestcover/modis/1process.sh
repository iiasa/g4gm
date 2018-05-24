for YEAR in {2000..2015}; do
    wget -r -np -nH --cut-dirs=5 -A "MOD44B_V51_TREE.$YEAR.*.tif.gz" ftp://ftp.glcf.umd.edu/modis/VCF/Collection_51/$YEAR/
    gunzip *.gz
    gdal_merge.py -co "BIGTIFF=YES" -co "COMPRESS=LZMA" -co "NUM_THREADS=7" -co "TILED=YES" -o del_forestCoverModisV51$YEAR.tif MOD44B_V51_TREE.$YEAR.*.tif
    gdal_translate -co "BIGTIFF=YES" -co "COMPRESS=LZMA" -co "NUM_THREADS=7" -co "TILED=YES" del_forestCoverModisV51$YEAR.tif forestCoverModisV51$YEAR.tif
    rm del_forestCoverModisV51$YEAR.tif
    rm MOD44B_V51_TREE.$YEAR.*.tif
done
