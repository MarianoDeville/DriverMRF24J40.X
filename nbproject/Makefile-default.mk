#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-default.mk)" "nbproject/Makefile-local-default.mk"
include nbproject/Makefile-local-default.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=default
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/DriverMRF24J40.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/DriverMRF24J40.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

ifeq ($(COMPARE_BUILD), true)
COMPARISON_BUILD=-mafrlcsj
else
COMPARISON_BUILD=
endif

ifdef SUB_IMAGE_ADDRESS

else
SUB_IMAGE_ADDRESS_COMMAND=
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=drivers/scr/API_MRF24J40_port.c drivers/scr/API_MRF24J40.c drivers/scr/API_MSPI_port.c main.c hardware_config.c drivers/inc/interrupciones.c drivers/scr/API_delay.c drivers/scr/API_debounce.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/drivers/scr/API_MRF24J40_port.p1 ${OBJECTDIR}/drivers/scr/API_MRF24J40.p1 ${OBJECTDIR}/drivers/scr/API_MSPI_port.p1 ${OBJECTDIR}/main.p1 ${OBJECTDIR}/hardware_config.p1 ${OBJECTDIR}/drivers/inc/interrupciones.p1 ${OBJECTDIR}/drivers/scr/API_delay.p1 ${OBJECTDIR}/drivers/scr/API_debounce.p1
POSSIBLE_DEPFILES=${OBJECTDIR}/drivers/scr/API_MRF24J40_port.p1.d ${OBJECTDIR}/drivers/scr/API_MRF24J40.p1.d ${OBJECTDIR}/drivers/scr/API_MSPI_port.p1.d ${OBJECTDIR}/main.p1.d ${OBJECTDIR}/hardware_config.p1.d ${OBJECTDIR}/drivers/inc/interrupciones.p1.d ${OBJECTDIR}/drivers/scr/API_delay.p1.d ${OBJECTDIR}/drivers/scr/API_debounce.p1.d

# Object Files
OBJECTFILES=${OBJECTDIR}/drivers/scr/API_MRF24J40_port.p1 ${OBJECTDIR}/drivers/scr/API_MRF24J40.p1 ${OBJECTDIR}/drivers/scr/API_MSPI_port.p1 ${OBJECTDIR}/main.p1 ${OBJECTDIR}/hardware_config.p1 ${OBJECTDIR}/drivers/inc/interrupciones.p1 ${OBJECTDIR}/drivers/scr/API_delay.p1 ${OBJECTDIR}/drivers/scr/API_debounce.p1

# Source Files
SOURCEFILES=drivers/scr/API_MRF24J40_port.c drivers/scr/API_MRF24J40.c drivers/scr/API_MSPI_port.c main.c hardware_config.c drivers/inc/interrupciones.c drivers/scr/API_delay.c drivers/scr/API_debounce.c



CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
ifneq ($(INFORMATION_MESSAGE), )
	@echo $(INFORMATION_MESSAGE)
endif
	${MAKE}  -f nbproject/Makefile-default.mk dist/${CND_CONF}/${IMAGE_TYPE}/DriverMRF24J40.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=18F46K20
# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/drivers/scr/API_MRF24J40_port.p1: drivers/scr/API_MRF24J40_port.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/drivers/scr" 
	@${RM} ${OBJECTDIR}/drivers/scr/API_MRF24J40_port.p1.d 
	@${RM} ${OBJECTDIR}/drivers/scr/API_MRF24J40_port.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/drivers/scr/API_MRF24J40_port.p1 drivers/scr/API_MRF24J40_port.c 
	@-${MV} ${OBJECTDIR}/drivers/scr/API_MRF24J40_port.d ${OBJECTDIR}/drivers/scr/API_MRF24J40_port.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/drivers/scr/API_MRF24J40_port.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/drivers/scr/API_MRF24J40.p1: drivers/scr/API_MRF24J40.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/drivers/scr" 
	@${RM} ${OBJECTDIR}/drivers/scr/API_MRF24J40.p1.d 
	@${RM} ${OBJECTDIR}/drivers/scr/API_MRF24J40.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/drivers/scr/API_MRF24J40.p1 drivers/scr/API_MRF24J40.c 
	@-${MV} ${OBJECTDIR}/drivers/scr/API_MRF24J40.d ${OBJECTDIR}/drivers/scr/API_MRF24J40.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/drivers/scr/API_MRF24J40.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/drivers/scr/API_MSPI_port.p1: drivers/scr/API_MSPI_port.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/drivers/scr" 
	@${RM} ${OBJECTDIR}/drivers/scr/API_MSPI_port.p1.d 
	@${RM} ${OBJECTDIR}/drivers/scr/API_MSPI_port.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/drivers/scr/API_MSPI_port.p1 drivers/scr/API_MSPI_port.c 
	@-${MV} ${OBJECTDIR}/drivers/scr/API_MSPI_port.d ${OBJECTDIR}/drivers/scr/API_MSPI_port.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/drivers/scr/API_MSPI_port.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/main.p1: main.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/main.p1.d 
	@${RM} ${OBJECTDIR}/main.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/main.p1 main.c 
	@-${MV} ${OBJECTDIR}/main.d ${OBJECTDIR}/main.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/main.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/hardware_config.p1: hardware_config.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/hardware_config.p1.d 
	@${RM} ${OBJECTDIR}/hardware_config.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/hardware_config.p1 hardware_config.c 
	@-${MV} ${OBJECTDIR}/hardware_config.d ${OBJECTDIR}/hardware_config.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/hardware_config.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/drivers/inc/interrupciones.p1: drivers/inc/interrupciones.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/drivers/inc" 
	@${RM} ${OBJECTDIR}/drivers/inc/interrupciones.p1.d 
	@${RM} ${OBJECTDIR}/drivers/inc/interrupciones.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/drivers/inc/interrupciones.p1 drivers/inc/interrupciones.c 
	@-${MV} ${OBJECTDIR}/drivers/inc/interrupciones.d ${OBJECTDIR}/drivers/inc/interrupciones.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/drivers/inc/interrupciones.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/drivers/scr/API_delay.p1: drivers/scr/API_delay.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/drivers/scr" 
	@${RM} ${OBJECTDIR}/drivers/scr/API_delay.p1.d 
	@${RM} ${OBJECTDIR}/drivers/scr/API_delay.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/drivers/scr/API_delay.p1 drivers/scr/API_delay.c 
	@-${MV} ${OBJECTDIR}/drivers/scr/API_delay.d ${OBJECTDIR}/drivers/scr/API_delay.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/drivers/scr/API_delay.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/drivers/scr/API_debounce.p1: drivers/scr/API_debounce.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/drivers/scr" 
	@${RM} ${OBJECTDIR}/drivers/scr/API_debounce.p1.d 
	@${RM} ${OBJECTDIR}/drivers/scr/API_debounce.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/drivers/scr/API_debounce.p1 drivers/scr/API_debounce.c 
	@-${MV} ${OBJECTDIR}/drivers/scr/API_debounce.d ${OBJECTDIR}/drivers/scr/API_debounce.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/drivers/scr/API_debounce.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
else
${OBJECTDIR}/drivers/scr/API_MRF24J40_port.p1: drivers/scr/API_MRF24J40_port.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/drivers/scr" 
	@${RM} ${OBJECTDIR}/drivers/scr/API_MRF24J40_port.p1.d 
	@${RM} ${OBJECTDIR}/drivers/scr/API_MRF24J40_port.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/drivers/scr/API_MRF24J40_port.p1 drivers/scr/API_MRF24J40_port.c 
	@-${MV} ${OBJECTDIR}/drivers/scr/API_MRF24J40_port.d ${OBJECTDIR}/drivers/scr/API_MRF24J40_port.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/drivers/scr/API_MRF24J40_port.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/drivers/scr/API_MRF24J40.p1: drivers/scr/API_MRF24J40.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/drivers/scr" 
	@${RM} ${OBJECTDIR}/drivers/scr/API_MRF24J40.p1.d 
	@${RM} ${OBJECTDIR}/drivers/scr/API_MRF24J40.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/drivers/scr/API_MRF24J40.p1 drivers/scr/API_MRF24J40.c 
	@-${MV} ${OBJECTDIR}/drivers/scr/API_MRF24J40.d ${OBJECTDIR}/drivers/scr/API_MRF24J40.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/drivers/scr/API_MRF24J40.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/drivers/scr/API_MSPI_port.p1: drivers/scr/API_MSPI_port.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/drivers/scr" 
	@${RM} ${OBJECTDIR}/drivers/scr/API_MSPI_port.p1.d 
	@${RM} ${OBJECTDIR}/drivers/scr/API_MSPI_port.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/drivers/scr/API_MSPI_port.p1 drivers/scr/API_MSPI_port.c 
	@-${MV} ${OBJECTDIR}/drivers/scr/API_MSPI_port.d ${OBJECTDIR}/drivers/scr/API_MSPI_port.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/drivers/scr/API_MSPI_port.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/main.p1: main.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/main.p1.d 
	@${RM} ${OBJECTDIR}/main.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/main.p1 main.c 
	@-${MV} ${OBJECTDIR}/main.d ${OBJECTDIR}/main.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/main.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/hardware_config.p1: hardware_config.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/hardware_config.p1.d 
	@${RM} ${OBJECTDIR}/hardware_config.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/hardware_config.p1 hardware_config.c 
	@-${MV} ${OBJECTDIR}/hardware_config.d ${OBJECTDIR}/hardware_config.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/hardware_config.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/drivers/inc/interrupciones.p1: drivers/inc/interrupciones.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/drivers/inc" 
	@${RM} ${OBJECTDIR}/drivers/inc/interrupciones.p1.d 
	@${RM} ${OBJECTDIR}/drivers/inc/interrupciones.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/drivers/inc/interrupciones.p1 drivers/inc/interrupciones.c 
	@-${MV} ${OBJECTDIR}/drivers/inc/interrupciones.d ${OBJECTDIR}/drivers/inc/interrupciones.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/drivers/inc/interrupciones.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/drivers/scr/API_delay.p1: drivers/scr/API_delay.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/drivers/scr" 
	@${RM} ${OBJECTDIR}/drivers/scr/API_delay.p1.d 
	@${RM} ${OBJECTDIR}/drivers/scr/API_delay.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/drivers/scr/API_delay.p1 drivers/scr/API_delay.c 
	@-${MV} ${OBJECTDIR}/drivers/scr/API_delay.d ${OBJECTDIR}/drivers/scr/API_delay.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/drivers/scr/API_delay.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/drivers/scr/API_debounce.p1: drivers/scr/API_debounce.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/drivers/scr" 
	@${RM} ${OBJECTDIR}/drivers/scr/API_debounce.p1.d 
	@${RM} ${OBJECTDIR}/drivers/scr/API_debounce.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/drivers/scr/API_debounce.p1 drivers/scr/API_debounce.c 
	@-${MV} ${OBJECTDIR}/drivers/scr/API_debounce.d ${OBJECTDIR}/drivers/scr/API_debounce.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/drivers/scr/API_debounce.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assembleWithPreprocess
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
dist/${CND_CONF}/${IMAGE_TYPE}/DriverMRF24J40.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -Wl,-Map=dist/${CND_CONF}/${IMAGE_TYPE}/DriverMRF24J40.X.${IMAGE_TYPE}.map  -D__DEBUG=1  -DXPRJ_default=$(CND_CONF)  -Wl,--defsym=__MPLAB_BUILD=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -mrom=default,-fd30-ffff -mram=default,-ef4-eff,-f9c-f9c,-fd4-fd4,-fdb-fdf,-fe3-fe7,-feb-fef,-ffd-fff  $(COMPARISON_BUILD) -Wl,--memorysummary,dist/${CND_CONF}/${IMAGE_TYPE}/memoryfile.xml -o dist/${CND_CONF}/${IMAGE_TYPE}/DriverMRF24J40.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}     
	@${RM} dist/${CND_CONF}/${IMAGE_TYPE}/DriverMRF24J40.X.${IMAGE_TYPE}.hex 
	
else
dist/${CND_CONF}/${IMAGE_TYPE}/DriverMRF24J40.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -Wl,-Map=dist/${CND_CONF}/${IMAGE_TYPE}/DriverMRF24J40.X.${IMAGE_TYPE}.map  -DXPRJ_default=$(CND_CONF)  -Wl,--defsym=__MPLAB_BUILD=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     $(COMPARISON_BUILD) -Wl,--memorysummary,dist/${CND_CONF}/${IMAGE_TYPE}/memoryfile.xml -o dist/${CND_CONF}/${IMAGE_TYPE}/DriverMRF24J40.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}     
	
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/default
	${RM} -r dist/default

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
