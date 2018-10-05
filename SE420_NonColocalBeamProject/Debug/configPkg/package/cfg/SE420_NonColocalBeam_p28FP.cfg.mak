# invoke SourceDir generated makefile for SE420_NonColocalBeam.p28FP
SE420_NonColocalBeam.p28FP: .libraries,SE420_NonColocalBeam.p28FP
.libraries,SE420_NonColocalBeam.p28FP: package/cfg/SE420_NonColocalBeam_p28FP.xdl
	$(MAKE) -f C:\ayush2\repo\trunk\SE420_NonColocalBeam/src/makefile.libs

clean::
	$(MAKE) -f C:\ayush2\repo\trunk\SE420_NonColocalBeam/src/makefile.libs clean

