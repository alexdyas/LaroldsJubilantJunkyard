#include <gb/gb.h>
#include <gb/cgb.h>
#include "LaroldsJubilantJunkyard.h"

void main(void)
{
    DISPLAY_ON;
    SHOW_BKG;

    // Populate VRAM with our tile data
    // place a given number of tiles in the VRAM space dedicated to the window/background
    // Parameters - where in VRAM to store tiles , how many tiles to place in VRAM , point to tile data
    set_bkg_data(0,LaroldsJubilantJunkyard_tileCount,LaroldsJubilantJunkyard_data);

    // Set the actual background tiles
    set_bkg_tiles(0,0,20,18,LaroldsJubilantJunkyard_map_plane0);

    // Switch back to bank 0 to prevent accidentally writing to bank 1
    VBK_REG=0;
}
