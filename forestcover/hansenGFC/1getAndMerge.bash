#treecover 2000 from GFC-2016-v1.4
wget https://storage.googleapis.com/earthenginepartners-hansen/GFC-2016-v1.4/treecover2000.txt
wget -i treecover2000.txt

nohup nice -9 gdal_merge.py -pct -co "BIGTIFF=YES" -co "COMPRESS=LZMA" -co "NUM_THREADS=7" -o treecover2000Hansenv14m.tif Hansen_GFC-2016-v1.4_treecover2000_*.tif &
nohup gdal_translate -co "TILED=YES" -co "BIGTIFF=YES" -co "COMPRESS=LZMA" -co "NUM_THREADS=7" treecover2000Hansenv14m.tif treecover2000Hansenv14.tif &


#treecover 2010 from Hansen Verson 3
wget https://edcintl.cr.usgs.gov/downloads/sciweb1/shared/gtc/downloads/treecover2010.tar.gz
nohup nice -9 tar -xzvf treecover2010.tar.gz &
nohup nice -9 gdal_merge.py -pct -co "BIGTIFF=YES" -co "COMPRESS=LZMA" -co "NUM_THREADS=7" -o treecover2010Hansenv3m.tif ./treecover2010_v3/*_treecover2010_v3.tif &
nohup gdal_translate -co "TILED=YES" -co "BIGTIFF=YES" -co "COMPRESS=LZMA" -co "NUM_THREADS=7" treecover2010Hansenv3m.tif treecover2010Hansenv3.tif &


