AbandonedShip_Rooms2_B1F_EventObjects:: @ 838E324
	object_event 1, EVENT_OBJ_GFX_CAMPER, 0, 3, 4, 3, 2, 1, 1, 0, 0, AbandonedShip_Rooms2_B1F_EventScript_15EA4E, 0
	object_event 2, EVENT_OBJ_GFX_ITEM_BALL, 0, 13, 3, 3, 1, 1, 1, 0, 0, AbandonedShip_Rooms2_B1F_EventScript_1B1897, FLAG_ITEM_ABANDONED_SHIP_ROOMS_2_B1F_1

AbandonedShip_Rooms2_B1F_MapWarps:: @ 838E354
	warp_def 4, 7, 3, 1, MAP_ABANDONED_SHIP_CORRIDORS_B1F
	warp_def 5, 7, 3, 1, MAP_ABANDONED_SHIP_CORRIDORS_B1F
	warp_def 13, 7, 3, 0, MAP_ABANDONED_SHIP_CORRIDORS_B1F
	warp_def 14, 7, 3, 0, MAP_ABANDONED_SHIP_CORRIDORS_B1F

AbandonedShip_Rooms2_B1F_MapEvents:: @ 838E374
	map_events AbandonedShip_Rooms2_B1F_EventObjects, AbandonedShip_Rooms2_B1F_MapWarps, 0x0, 0x0
