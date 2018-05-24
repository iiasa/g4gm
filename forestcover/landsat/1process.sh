YEARS=(2000 2005 2010 2015 {2011..2014})
INDEX=({007..014})
for I in {0..7}
do
    wget -r -np -nH --cut-dirs=9 -A "*_TC_${YEARS}.tif.gz" ftp://ftp.glcf.umd.edu/glcf/LandsatTreecover/stow/GLCF.NPM.AA1-${INDEX[$I]}.00.TC_${YEARS[$I]}_v4/WRS2/
    gunzip *.gz
    gdal_merge.py -co "BIGTIFF=YES" -co "COMPRESS=LZMA" -co "NUM_THREADS=7" -co "TILED=YES" -o del_forestCoverLandsatV4${YEARS[$I]}.tif *_TC_${YEARS}.tif
    gdal_translate -co "BIGTIFF=YES" -co "COMPRESS=LZMA" -co "NUM_THREADS=7" -co "TILED=YES" del_forestCoverLandsatV4${YEARS[$I]}.tif forestCoverLandsatV4${YEARS[$I]}.tif
    rm del_forestCoverLandsatV4${YEARS[$I]}.tif
    rm *_TC_${YEARS}.tif
done
