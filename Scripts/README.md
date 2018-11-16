# Scripts

This folder contains any analysis scripts and parameters files used in analyzing LAPPD25 data.

### Logging on to Fermilab

* open xquartz
* kinit -f [username]
* type password
* ssh -Y [username]@annie01.fnal.gov
* source ~/setup.sh
* cd /annie/app/users/[username]/Plotmaker

### Using Plot Maker

* root -l 
* .L PlotMaker.C
* PlotMaker pm("7.30.18/","7_30_18LAPPD25_Strip13R_2700_2350_1550")
* pm.Loop()

The first parameter in PlotMaker is a string of the subdirectory where the data is. The data can be found in:

/annie/data/LAPPD25data/ToolAnalysisOutputs/

The second parameter is the string of the file you want to process (but without the extension). We aren't strict about it,
but the approximate naming convention is:

[date]LAPP25_[stripnumber/side]_[v1]_[v2]_[v3] (where v1,v2,v3 are the operational voltages)

