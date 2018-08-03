@pushd %cd%
@cd ../..
@set PROJ_TOP=%cd%
@echo %PROJ_TOP%
@popd
@rem perl ../../tools/mpc/mwc.pl -type %1 -name_modifier %1_* -include "./baseprojects" -relative PROJ_TOP="%CD%/.." %2
perl ../../tools/mpc/mwc.pl -type %1 -name_modifier VC9_* -include "./baseprojects" -relative PROJ_TOP="%CD%/.." %2

