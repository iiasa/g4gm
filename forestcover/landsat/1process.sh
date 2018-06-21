YEARS=(2000 2005 2010 2015 {2011..2014})
INDEX=({007..014})
for I in {0..7}
do
    wget -r -np -nH --cut-dirs=9 -A "*_TC_${YEARS[$I]}.tif.gz" ftp://ftp.glcf.umd.edu/glcf/LandsatTreecover/stow/GLCF.NPM.AA1-${INDEX[$I]}.00.TC_${YEARS[$I]}_v4/WRS2/
    find . -name '*.gz' -print0 | xargs -0 -I {} -P 10 gunzip {}
    gdalwarp -co "BIGTIFF=YES" -co "COMPRESS=LZMA" -co "NUM_THREADS=7" -co "TILED=YES" -t_srs EPSG:4326 *_TC_${YEARS[$I]}.tif forestCoverLandsatV4${YEARS[$I]}.tif
    rm *_TC_${YEARS[$I]}.tif
done
