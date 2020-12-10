# This is a FoundriesFactory bblayers include file

# Meta-subscriber-overrides is the main FoundriesFactory layer
# Do not remove unless you really know what you are doing.
BASELAYERS += "${OEROOT}/layers/meta-subscriber-overrides"

# Customize list of default BSP layers included by LMP by uncommenting
# the following lines and manually including your own list (= to replace).
# You can find the standard BSP list at the bblayers-bsp.inc file, which
# gets parsed before this file.
#
#BSPLAYERS = " \
#  ${OEROOT}/layers/meta-lmp/meta-lmp-bsp \
#"
