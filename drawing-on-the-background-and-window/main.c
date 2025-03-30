#include <gb/gb.h>
#include <gb/cgb.h>
#include "LaroldsJubilantJunkyard.h"

void main(void)
{
    DISPLAY_ON;
    SHOW_BKG;

    // Populate VRAM with our tile data
    set_bkg_data(0,LaroldsJubilantJunkyard_tileCount,LaroldsJubilantJunkyard_data);

    // Set the actual background tiles
    set_bkg_tiles(0,0,20,18,LaroldsJubilantJunkyard_map_plane0);

    // Switch back to bank 0 to prevent accidentally writing to bank 1
    VBK_REG=0;
}
