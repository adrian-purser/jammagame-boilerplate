# Test GAP file
# gap --mount="/home/ade/source/pixelart" --mount="../data" luatest.gap

export,name=game,filename=game.gbin,type=gbin,format=binary
export,name=game,filename="../src/generated/game_gbin.h",type=gbin,format=c_array
export,name=game,filename="../src/generated/game_assets.h",type=definitions,format=cheader

#==============================================================================
#
#	FONTS
#
#==============================================================================

#loadimage,src="/images/fonts/font.png"
#tileset,id=1,name="font1-horz",width=8,height=8,format=ARGB1555
#tilearray,width=95,height=1
#tileset,id=2,name="font1-vert",width=8,height=8,format=ARGB1555
#tilearray,width=95,height=1,rotate=270

