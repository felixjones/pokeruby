Route128_EventObjects:: @ 83850D0
	object_event 1, EVENT_OBJ_GFX_SWIMMER_M, 0, 77, 24, 1, 48, 5, 5, 1, 3, Route128_EventScript_1522A4, 0
	object_event 2, EVENT_OBJ_GFX_SWIMMER_F, 0, 35, 34, 1, 28, 5, 0, 1, 7, Route128_EventScript_1522E2, 0
	object_event 3, EVENT_OBJ_GFX_STEVEN, 0, 40, 22, 3, 8, 0, 0, 0, 0, 0x0, FLAG_HIDE_STEVEN_ROUTE128
	object_event 4, EVENT_OBJ_GFX_VAR_6, 0, 37, 22, 3, 9, 1, 1, 0, 0, 0x0, FLAG_HIDE_EVIL_LEADER_ROUTE128
	object_event 5, EVENT_OBJ_GFX_VAR_7, 0, 38, 21, 3, 7, 1, 1, 0, 0, 0x0, FLAG_HIDE_OTHER_LEADER_ROUTE128
	object_event 6, EVENT_OBJ_GFX_FISHERMAN, 0, 63, 28, 3, 7, 1, 1, 1, 0, Route128_EventScript_15234E, 0
	object_event 7, EVENT_OBJ_GFX_MAN_4, 0, 24, 8, 3, 17, 1, 1, 1, 2, Route128_EventScript_152337, 0
	object_event 8, EVENT_OBJ_GFX_WOMAN_7, 0, 47, 9, 3, 10, 1, 1, 1, 3, Route128_EventScript_152320, 0

Route128_MapBGEvents:: @ 8385190
	bg_hidden_item_event 49, 9, 3, ITEM_HEART_SCALE, FLAG_HIDDEN_ITEM_5C
	bg_hidden_item_event 57, 21, 3, ITEM_HEART_SCALE, FLAG_HIDDEN_ITEM_5D
	bg_hidden_item_event 31, 33, 3, ITEM_HEART_SCALE, FLAG_HIDDEN_ITEM_5E

Route128_MapEvents:: @ 83851B4
	map_events Route128_EventObjects, 0x0, 0x0, Route128_MapBGEvents
