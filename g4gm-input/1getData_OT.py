import grass.script as grass
import time

time_start = time.time()

grass.run_command('g.region', n=90, s=-90, e=180, w=-180, nsres=0.00833333, ewres=0.00833333)

# set path to [raster] directory
directory = 'H:/Data/Maps/g4gm'

# set path for saving the output file
output_directory = 'C:/Docs/GRASS/world_G4M/'
"""
# Forestype-0C:\Docs\python\GIS
grass.read_command('r.in.gdal', input=directory + '/raster/forestType/type_DeciduousBroadleafForest_g4m_base.tif',
                   output='del0_0', overwrite=True)

grass.read_command('r.in.gdal', input=directory + '/raster/forestType/type_DeciduousNeedleleafForest_g4m_base.tif',
                   output='del0_1', overwrite=True)

grass.read_command('r.in.gdal', input=directory + '/raster/forestType/type_EvergreenBroadleafForest_g4m_base.tif',
                   output='del0_2', overwrite=True)

grass.read_command('r.in.gdal', input=directory + '/raster/forestType/type_EvergreenNeedleleafForest_g4m_base.tif',
                   output='del0_3', overwrite=True)

# soilIiasaFao90-4
grass.read_command('r.in.gdal', input=directory + '/raster/soil/soilFAO90G4m.tif',
                   output='del4', overwrite=True)

# soilIiasaSwr-5
grass.read_command('r.in.gdal', input=directory + '/raster/soil/soilSwr.tif',
                   output='del5', overwrite=True)
grass.read_command('r.null', map='del5', null='-1')

# soilIiasaAwc-6
grass.read_command('r.in.gdal', input=directory + '/raster/soil/soilAcwG4m.tif',
                   output='del6', overwrite=True)
grass.read_command('r.null', map='del6', null='-1')

# elevation-7
grass.read_command('r.in.gdal', input=directory + '/raster/elevation/gtopo30/demGtopo30.tif',
                   output='del7', overwrite=True)

month = ['01', '02', '03', '04', '05', '06', '07', '08', '09', '10', '11', '12']

# prec8_1-12
for mon in month:
    input_path = directory + '/raster/precipitation/worldclim/prec' + mon + '.tif'
    output_name = 'del8_' + mon
    grass.read_command('r.in.gdal', input=input_path, output=output_name, overwrite=True)


# temp9_1-12
for mon in month:
    input_path = directory + '/raster/temperature/worldclim/tmean' + mon + '.tif'
    output_name = 'del9_' + mon
    grass.read_command('r.in.gdal', input=input_path, output=output_name, overwrite=True)

# radi10_1-12
for mon in month:
    input_path = directory + '/raster/radiation/wc2.0_30s_srad_' + mon + '.tif'
    output_name = 'del10_' + mon
    grass.read_command('r.in.gdal', input=input_path, output=output_name, overwrite=True)

"""
#grass.run_command('g.region', n=90, s=-90, e=180, w=-180, nsres=0.5, ewres=0.5)
grass.run_command('g.region', n=0.8, s=-1.3, e=103, w=100, nsres=0.00833333, ewres=0.00833333)
# grass.run_command('g.region', n=0.3, s=0.2, e=102.5, w=102, nsres=0.00833333, ewres=0.00833333)
grass.mapcalc("del1 = row()", overwrite=True)
grass.mapcalc("del2 = col()", overwrite=True)

grass.mapcalc("del3 = if(waterLandModis30Sec == 16, null(), waterLandModis30Sec)", waterLandModis30Sec='waterLandModis30Sec', overwrite=True)

print('Writing the output file...')
grass.read_command('r.out.xyz', input=['del1','del2','del3','del0_0','del0_1','del0_2','del0_3','del4','del5','del6','del7',
                   'del8_01','del8_02','del8_03','del8_04','del8_05','del8_06','del8_07','del8_08','del8_09', 'del8_10','del8_11','del8_12',
                   'del9_01','del9_02','del9_03','del9_04','del9_05','del9_06','del9_07', 'del9_08','del9_09','del9_10','del9_11','del9_12',
                   'del10_01','del10_02','del10_03','del10_04', 'del10_05','del10_06','del10_07','del10_08','del10_09','del10_10','del10_11','del10_12'],
                   separator='\t', output=output_directory + 'baseData_Indonesia_region.txt', overwrite=True)

print('Execution time {t} minutes'.format(t=(time.time() - time_start)/60))