#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61 = 0f;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	bool bLocal_98 = 0;
	bool bLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	struct<3> Local_104 = { 0, 0, 0 } ;
	struct<3> Local_107[65];
	float fLocal_303 = 0f;
	struct<3> Local_304 = { 0, 0, 0 } ;
	struct<3> Local_307 = { 0, 0, 0 } ;
	struct<3> Local_310 = { 0, 0, 0 } ;
	struct<3> Local_313 = { 0, 0, 0 } ;
	float fLocal_316 = 0f;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	var uLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	bool bLocal_335 = 0;
	int iLocal_336 = 0;
	float fLocal_337 = 0f;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	bool bLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	bool bLocal_350 = 0;
	struct<3> Local_351[65];
	int iLocal_547[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_613[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_624 = 0;
	int iLocal_625 = 0;
	var uLocal_626 = 0;
	int iLocal_627[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_638 = 0;
	int iLocal_639 = 0;
	struct<68> Local_640 = { 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	struct<535> Local_728 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_1263 = -1;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = -1082130432;
	var uLocal_1286 = 3;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = -1;
	var uLocal_1303 = 0;
	var uLocal_1304 = -1;
	var uLocal_1305 = -1;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = -1082130432;
	var uLocal_1328 = 3;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = -1;
	var uLocal_1345 = 0;
	var uLocal_1346 = -1;
	var uLocal_1347 = -1;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = -1082130432;
	var uLocal_1370 = 3;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = -1;
	var uLocal_1387 = 0;
	var uLocal_1388 = -1;
	var uLocal_1389 = -1;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = -1082130432;
	var uLocal_1412 = 3;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = -1;
	var uLocal_1429 = 0;
	var uLocal_1430 = -1;
	var uLocal_1431 = -1;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = -1082130432;
	var uLocal_1454 = 3;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = -1;
	var uLocal_1471 = 0;
	var uLocal_1472 = -1;
	var uLocal_1473 = -1;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = -1082130432;
	var uLocal_1496 = 3;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = -1;
	var uLocal_1513 = 0;
	var uLocal_1514 = -1;
	var uLocal_1515 = -1;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = -1082130432;
	var uLocal_1538 = 3;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = -1;
	var uLocal_1555 = 0;
	var uLocal_1556 = -1;
	var uLocal_1557 = -1;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = -1082130432;
	var uLocal_1580 = 3;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = -1;
	var uLocal_1597 = 0;
	var uLocal_1598 = -1;
	var uLocal_1599 = -1;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = -1082130432;
	var uLocal_1622 = 3;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = -1;
	var uLocal_1639 = 0;
	var uLocal_1640 = -1;
	var uLocal_1641 = -1;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = -1082130432;
	var uLocal_1664 = 3;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = -1;
	var uLocal_1681 = 0;
	var uLocal_1682 = -1;
	var uLocal_1683 = -1;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = -1082130432;
	var uLocal_1706 = 3;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = -1;
	var uLocal_1723 = 0;
	var uLocal_1724 = -1;
	var uLocal_1725 = -1;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = -1082130432;
	var uLocal_1748 = 3;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = -1;
	var uLocal_1765 = 0;
	var uLocal_1766 = -1;
	var uLocal_1767 = -1;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = -1082130432;
	var uLocal_1790 = 3;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = -1;
	var uLocal_1807 = 0;
	var uLocal_1808 = -1;
	var uLocal_1809 = -1;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = -1082130432;
	var uLocal_1832 = 3;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = -1;
	var uLocal_1849 = 0;
	var uLocal_1850 = -1;
	var uLocal_1851 = -1;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = -1082130432;
	var uLocal_1874 = 3;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = -1;
	var uLocal_1891 = 0;
	var uLocal_1892 = -1;
	var uLocal_1893 = -1;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = -1082130432;
	var uLocal_1916 = 3;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = -1;
	var uLocal_1933 = 0;
	var uLocal_1934 = -1;
	var uLocal_1935 = -1;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = -1082130432;
	var uLocal_1958 = 3;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = -1;
	var uLocal_1975 = 0;
	var uLocal_1976 = -1;
	var uLocal_1977 = -1;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = -1082130432;
	var uLocal_2000 = 3;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = -1;
	var uLocal_2017 = 0;
	var uLocal_2018 = -1;
	var uLocal_2019 = -1;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = -1082130432;
	var uLocal_2042 = 3;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = -1;
	var uLocal_2059 = 0;
	var uLocal_2060 = -1;
	var uLocal_2061 = -1;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = -1082130432;
	var uLocal_2084 = 3;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = -1;
	var uLocal_2101 = 0;
	var uLocal_2102 = -1;
	var uLocal_2103 = -1;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = -1082130432;
	var uLocal_2126 = 3;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = -1;
	var uLocal_2143 = 0;
	var uLocal_2144 = -1;
	var uLocal_2145 = -1;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = -1082130432;
	var uLocal_2168 = 3;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = -1;
	var uLocal_2185 = 0;
	var uLocal_2186 = -1;
	var uLocal_2187 = -1;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = -1082130432;
	var uLocal_2210 = 3;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = -1;
	var uLocal_2227 = 0;
	var uLocal_2228 = -1;
	var uLocal_2229 = -1;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = -1082130432;
	var uLocal_2252 = 3;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = -1;
	var uLocal_2269 = 0;
	var uLocal_2270 = -1;
	var uLocal_2271 = -1;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = -1082130432;
	var uLocal_2294 = 3;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = -1;
	var uLocal_2311 = 0;
	var uLocal_2312 = -1;
	var uLocal_2313 = -1;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = -1082130432;
	var uLocal_2336 = 3;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = -1;
	var uLocal_2353 = 0;
	var uLocal_2354 = -1;
	var uLocal_2355 = -1;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = -1082130432;
	var uLocal_2378 = 3;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = -1;
	var uLocal_2395 = 0;
	var uLocal_2396 = -1;
	var uLocal_2397 = -1;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = -1082130432;
	var uLocal_2420 = 3;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = -1;
	var uLocal_2437 = 0;
	var uLocal_2438 = -1;
	var uLocal_2439 = -1;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = -1082130432;
	var uLocal_2462 = 3;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = -1;
	var uLocal_2479 = 0;
	var uLocal_2480 = -1;
	var uLocal_2481 = -1;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = -1082130432;
	var uLocal_2504 = 3;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = -1;
	var uLocal_2521 = 0;
	var uLocal_2522 = -1;
	var uLocal_2523 = -1;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = -1082130432;
	var uLocal_2546 = 3;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = -1;
	var uLocal_2563 = 0;
	var uLocal_2564 = -1;
	var uLocal_2565 = -1;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = -1082130432;
	var uLocal_2588 = 3;
	var uLocal_2589 = 0;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = -1;
	var uLocal_2605 = 0;
	var uLocal_2606 = -1;
	struct<12> Local_2607[32];
	struct<12> Local_2992 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_61 = ((0.05f + 0.275f) - 0.01f);
	fLocal_303 = 40000f;
	iLocal_339 = AUDIO::GET_SOUND_ID();
	iLocal_340 = AUDIO::GET_SOUND_ID();
	iLocal_341 = -1;
	bLocal_342 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_799(ScriptParam_0))
		{
			func_759();
		}
	}
	while (true)
	{
		func_758();
		if (func_754() || func_752())
		{
			func_759();
		}
		if (func_750())
		{
			func_759();
		}
		func_723();
		switch (func_722(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			case 0:
				if (func_721() == 1)
				{
					if (func_720())
					{
						func_719(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 1);
					}
				}
				break;
			
			case 1:
				if (func_721() == 1)
				{
					func_151();
					func_139();
				}
				else if (func_721() == 3)
				{
					func_719(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 3);
				}
				break;
			
			case 3:
				func_759();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_721())
			{
				case 0:
					if (func_125())
					{
						func_124(1);
					}
					break;
				
				case 1:
					if (Local_640.f_37 == 6)
					{
						func_124(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_317, 1000, 0))
					{
						func_124(3);
					}
					break;
				
				case 3:
					func_759();
					break;
				}
		}
	}
}

int func_1(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_2(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_3()
{
	bool bVar0;
	
	if (func_45(2, 0, 0, 0, 0))
	{
		if (!BitTest(Local_640.f_2, 0))
		{
			MISC::SET_BIT(&(Local_640.f_2), false);
			Local_640.f_1 = NETWORK::GET_NETWORK_TIME();
		}
	}
	switch (Local_640.f_37)
	{
		case 0:
			if (func_44())
			{
				if (!func_32())
				{
					bVar0 = true;
				}
			}
			if (!bVar0)
			{
				func_31(1);
			}
			break;
		
		case 1:
			if (func_1(&(Local_640.f_43), func_30(), 0) || BitTest(Local_640.f_2, 0))
			{
				func_31(2);
			}
			func_32();
			break;
		
		case 2:
			Local_640.f_38 = NETWORK::GET_NETWORK_TIME();
			func_31(3);
			break;
		
		case 3:
			if (func_1(&(Local_640.f_39), func_29(0), 0) || BitTest(Local_640.f_2, 0))
			{
				if (!BitTest(Local_640.f_2, 1))
				{
					Local_640.f_1 = NETWORK::GET_NETWORK_TIME();
					MISC::SET_BIT(&(Local_640.f_2), true);
					func_28(&(Local_640.f_39), 0, 0);
				}
				else
				{
					func_31(4);
				}
			}
			func_13();
			func_9(&bLocal_342, &iLocal_341);
			func_32();
			break;
		
		case 4:
			if ((func_1(&(Local_640.f_41), 20000, 0) || Local_640.f_4[0] < 0) || func_6())
			{
				if (func_5(Local_640.f_3))
				{
					func_28(&(Local_640.f_45), 0, 0);
					func_31(5);
				}
				else
				{
					func_31(6);
				}
			}
			else
			{
				func_32();
			}
			break;
		
		case 5:
			if (func_4())
			{
				func_31(6);
			}
			break;
		
		case 6:
			break;
	}
}

int func_4()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_640.f_67[iVar0 /*2*/].f_1) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_640.f_67[iVar0 /*2*/].f_1), false))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_5(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_6()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar1 = false;
	while (bVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bVar1)))
		{
			bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bVar1));
			if (!func_7(bVar2))
			{
				if (!BitTest(Local_2607[bVar1 /*12*/].f_1, 1) || Local_2607[bVar1 /*12*/].f_3 != 6)
				{
					return 0;
				}
				else if (BitTest(Local_2607[bVar1 /*12*/].f_1, 0))
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
		}
		bVar1++;
	}
	return iVar0;
}

int func_7(bool bParam0)
{
	if (func_8(bParam0))
	{
		return 1;
	}
	return BitTest(Global_1886967[bParam0 /*609*/].f_1, 8);
}

bool func_8(bool bParam0)
{
	return BitTest(Global_1886967[bParam0 /*609*/].f_1, 2);
}

void func_9(bool bParam0, int iParam1)
{
	struct<15> Var0;
	int iVar15;
	
	if (*bParam0 >= 0 && *iParam1 >= 0)
	{
		iVar15 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(*bParam0));
		if (*iParam1 == 0)
		{
			Var0.f_3 = -154142402;
			Var0.f_11 = iVar15;
			func_10(Var0, func_11(1));
		}
		*bParam0 = -1;
		*iParam1 = -1;
	}
}

void func_10(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15)
{
	Param0.f_0 = -642704387;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam15 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Param0, 15, iParam15, Param0.f_0);
	}
}

int func_11(int iParam0)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	bVar1 = false;
	while (bVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bVar1)))
		{
			bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bVar1));
			if (func_12(bVar2, 0, 0))
			{
				if (bVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, bVar2);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

int func_12(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(bParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672741.f_3)
				{
					return Global_2672741.f_2;
				}
				else if (Global_2657921[iVar0 /*463*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_13()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	
	bVar0 = false;
	while (bVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0)))
		{
			MISC::SET_BIT(&uVar3, bVar0);
		}
		else
		{
			func_27(bVar0);
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (BitTest(uVar3, bVar0))
		{
			func_24(bVar0);
			MISC::SET_BIT(&(Local_640.f_47), bVar0);
			iVar1++;
			if (func_18(bVar0, 0))
			{
				bVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0));
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar4) && !func_14(bVar4, 0))
				{
					iVar2++;
				}
			}
		}
		bVar0++;
	}
	if (iVar1 > Local_640.f_50)
	{
		Local_640.f_50 = iVar1;
	}
	else
	{
		Local_640.f_66 = (Local_640.f_50 - iVar1);
	}
	if (iVar2 > Local_640.f_51)
	{
		Local_640.f_51 = iVar2;
	}
}

bool func_14(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_17(bParam0))
	{
		return 0;
	}
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_15(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845263[bParam0 /*877*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(bParam0) == 8;
		}
	}
	return bVar0;
}

int func_15(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_16();
	}
	if (Global_1575059[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574919[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_16()
{
	return Global_1574925;
}

int func_17(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 < 0)
	{
		return 0;
	}
	if (iVar0 >= 32)
	{
		return 0;
	}
	return 1;
}

int func_18(bool bParam0, bool bParam1)
{
	float fVar0;
	
	if (bParam0 >= 0 && bParam0 < 32)
	{
		fVar0 = SYSTEM::TO_FLOAT(Local_2607[bParam0 /*12*/].f_4);
	}
	else if (bParam0 == -1)
	{
		fVar0 = SYSTEM::TO_FLOAT(Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_20())
		{
			return 1;
		}
	}
	if (func_19())
	{
		fVar0 = (fVar0 / 10f);
	}
	switch (Local_640.f_3)
	{
		case 0:
			if (fVar0 >= Global_262145.f_11613)
			{
				return 1;
			}
			break;
		
		case 2:
			if (fVar0 >= Global_262145.f_11614)
			{
				return 1;
			}
			break;
		
		case 3:
			if (fVar0 >= Global_262145.f_11615)
			{
				return 1;
			}
			break;
		
		case 5:
			if (fVar0 >= Global_262145.f_11616)
			{
				return 1;
			}
			break;
		
		case 4:
			if (fVar0 >= Global_262145.f_11617)
			{
				return 1;
			}
			break;
		
		case 1:
			if (fVar0 >= Global_262145.f_11618)
			{
				return 1;
			}
			break;
		
		case 6:
			if (fVar0 <= Global_262145.f_11619 && fVar0 != 0f)
			{
				return 1;
			}
			break;
		
		case 9:
			if (fVar0 >= Global_262145.f_11620)
			{
				return 1;
			}
			break;
		
		case 10:
			if (fVar0 >= Global_262145.f_11621)
			{
				return 1;
			}
			break;
		
		case 18:
			if (fVar0 >= Global_262145.f_11622)
			{
				return 1;
			}
			break;
		
		case 13:
			if (fVar0 >= Global_262145.f_11623)
			{
				return 1;
			}
			break;
		
		case 7:
			if (fVar0 >= IntToFloat(Global_262145.f_11624))
			{
				return 1;
			}
			break;
		
		case 8:
			if (fVar0 >= IntToFloat(Global_262145.f_11625))
			{
				return 1;
			}
			break;
		
		case 11:
			if (fVar0 >= Global_262145.f_11737)
			{
				return 1;
			}
			break;
		
		case 12:
			if (fVar0 >= Global_262145.f_11738)
			{
				return 1;
			}
			break;
		
		case 14:
			if (fVar0 >= IntToFloat(Global_262145.f_11628))
			{
				return 1;
			}
			break;
		
		case 15:
			if (fVar0 >= IntToFloat(Global_262145.f_11630))
			{
				return 1;
			}
			break;
		
		case 16:
			if (fVar0 >= IntToFloat(Global_262145.f_11631))
			{
				return 1;
			}
			break;
		
		case 17:
			if (fVar0 >= IntToFloat(Global_262145.f_11632))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_19()
{
	switch (Local_640.f_3)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_20()
{
	if ((func_21(0) || func_21(1)) || func_21(2))
	{
		return 1;
	}
	return 0;
}

int func_21(int iParam0)
{
	if (iParam0 >= 0)
	{
		if (Local_640.f_4[iParam0] == NETWORK::PARTICIPANT_ID_TO_INT() && func_22(Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_22(int iParam0, int iParam1)
{
	if (!func_23())
	{
		return iParam0 > iParam1;
	}
	if (iParam0 == 0)
	{
		iParam0 = 2147483647;
	}
	if (iParam1 == 0)
	{
		iParam1 = 2147483647;
	}
	return iParam0 < iParam1;
}

int func_23()
{
	switch (Local_640.f_3)
	{
		case 6:
			return 1;
		
		default:
	}
	return 0;
}

void func_24(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = Local_2607[bParam0 /*12*/].f_4;
	iVar1 = Local_2607[bParam0 /*12*/].f_4.f_2;
	if (!BitTest(Local_640.f_48, bParam0))
	{
		fVar2 = SYSTEM::TO_FLOAT(Local_640.f_4[0]);
		if ((!func_23() && IntToFloat(iVar0) >= (fVar2 / 2f)) || (func_23() && IntToFloat(iVar0) <= (fVar2 * 2f)))
		{
			Local_640.f_49++;
			MISC::SET_BIT(&(Local_640.f_48), bParam0);
		}
	}
	iVar3 = -1;
	iVar4 = -2;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (Local_640.f_4[iVar3] == bParam0)
		{
			iVar3 = 32;
		}
		else if (iVar4 >= -1)
		{
			if (iVar4 >= 0)
			{
				func_26(&(Local_640.f_4[iVar3]), &iVar4);
			}
		}
		else if ((Local_640.f_4[iVar3] < 0 || func_22(iVar0, Local_2607[Local_640.f_4[iVar3] /*12*/].f_4)) || func_25(iVar0, Local_2607[Local_640.f_4[iVar3] /*12*/].f_4, iVar1, Local_2607[Local_640.f_4[iVar3] /*12*/].f_4.f_2))
		{
			iVar4 = Local_640.f_4[iVar3];
			if (func_22(iVar0, 0))
			{
				iLocal_341 = iVar3;
				bLocal_342 = bParam0;
			}
			Local_640.f_4[iVar3] = bParam0;
			iVar5 = iVar3 + 1;
			while (iVar5 <= 31)
			{
				if (Local_640.f_4[iVar5] == bParam0)
				{
					Local_640.f_4[iVar5] = -1;
				}
				iVar5++;
			}
		}
		iVar3++;
	}
}

int func_25(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (Local_640.f_3 == 2)
	{
		if (iParam0 == iParam1 && iParam2 > iParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_26(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + *iParam1);
	*iParam1 = (*uParam0 - *iParam1);
	*uParam0 = (*uParam0 - *iParam1);
}

void func_27(bool bParam0)
{
	int iVar0;
	
	if (BitTest(Local_640.f_47, bParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_640.f_4[iVar0] == bParam0)
			{
				Local_640.f_4[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		MISC::CLEAR_BIT(&(Local_640.f_48), bParam0);
		MISC::CLEAR_BIT(&(Local_640.f_47), bParam0);
	}
}

void func_28(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

int func_29(bool bParam0)
{
	if (BitTest(Local_640.f_2, 1) && !bParam0)
	{
		return 750;
	}
	switch (Local_640.f_3)
	{
		case 0:
			return Global_262145.f_10910;
		
		case 8:
			return Global_262145.f_10912;
		
		case 3:
			return Global_262145.f_10913;
		
		case 1:
			return Global_262145.f_11723;
		
		case 6:
			return Global_262145.f_11724;
		
		case 10:
			return Global_262145.f_11726;
		
		case 11:
			return Global_262145.f_11728;
		
		case 12:
			return Global_262145.f_11729;
		
		case 15:
			return Global_262145.f_11733;
		
		case 16:
			return Global_262145.f_11734;
		
		case 17:
			return Global_262145.f_11735;
		
		case 18:
			return Global_262145.f_11736;
		
		case 13:
			return Global_262145.f_11727;
		
		case 14:
			return Global_262145.f_11730;
		
		case 2:
			return Global_262145.f_10915;
		
		case 7:
			return Global_262145.f_11725;
		
		case 9:
			return Global_262145.f_11731;
		
		case 5:
			return Global_262145.f_10916;
		
		case 4:
			return Global_262145.f_10914;
		
		default:
	}
	return -1;
}

int func_30()
{
	return Global_262145.f_11693;
}

void func_31(int iParam0)
{
	Local_640.f_37 = iParam0;
}

int func_32()
{
	struct<2> Var0;
	struct<3> Var2;
	float fVar5;
	int iVar6;
	
	if (func_44() && ((Local_640.f_37 == 0 || func_5(Local_640.f_3)) || Local_640.f_54 < 10))
	{
		Var0 = { Local_640.f_67[iLocal_336 /*2*/] };
		if (func_43(Var0.f_0))
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Var0.f_1))
			{
				if (func_41(Local_640.f_3, iLocal_336, &Var2, &fVar5))
				{
					Local_640.f_55[iLocal_336] = func_37(iLocal_336);
					if (BitTest(Local_2607[Local_640.f_55[iLocal_336] /*12*/].f_2, iLocal_336))
					{
						if (func_34(&(Local_640.f_67[iLocal_336 /*2*/].f_1), Var0.f_0, Var2, fVar5, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0))
						{
							NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_ENT(Local_640.f_67[iLocal_336 /*2*/].f_1), true, 1);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_640.f_67[iLocal_336 /*2*/].f_1), 1);
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(Local_640.f_67[iLocal_336 /*2*/].f_1), true);
							VEHICLE::SET_VEHICLE_INFLUENCES_WANTED_LEVEL(NETWORK::NET_TO_VEH(Local_640.f_67[iLocal_336 /*2*/].f_1), false);
							func_33(NETWORK::NET_TO_VEH(Local_640.f_67[iLocal_336 /*2*/].f_1), 1);
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
							{
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_640.f_67[iLocal_336 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
							{
								if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_640.f_67[iLocal_336 /*2*/].f_1), "MPBitset"))
								{
									iVar6 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_640.f_67[iLocal_336 /*2*/].f_1), "MPBitset");
								}
								MISC::SET_BIT(&iVar6, 10);
								MISC::SET_BIT(&iVar6, 11);
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_640.f_67[iLocal_336 /*2*/].f_1), "MPBitset", iVar6);
							}
							Local_640.f_55[iLocal_336] = -1;
							Local_640.f_54++;
						}
					}
				}
			}
		}
		iLocal_336++;
		if (iLocal_336 >= 10)
		{
			iLocal_336 = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_33(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, 13);
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, 13);
		}
		DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
	}
}

int func_34(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	float fVar0;
	int iVar1;
	
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, false, false, false, false, false, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, bParam7, bParam6, bParam14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2738587.f_6762 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar1, true);
			}
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar1, bParam10);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam13)
				{
					NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam9);
			VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar1, true);
			if (bParam12)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_35(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_35(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_36(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
	{
		if ((Global_2635562.f_3230[1 /*6*/].f_5 == iParam5 && Global_2635562.f_3230[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2635562.f_3230[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635562.f_3230[iVar0 /*6*/] = { Global_2635562.f_3230[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635562.f_3230[1 /*6*/] = { Param0 };
		Global_2635562.f_3230[1 /*6*/].f_3 = fParam3;
		Global_2635562.f_3230[1 /*6*/].f_4 = iParam4;
		Global_2635562.f_3230[1 /*6*/].f_5 = iParam5;
	}
}

int func_36(bool bParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = bParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2648918.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2648918.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2648918.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2648918.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_37(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	var uVar7;
	bool bVar8;
	
	fVar2 = 1000000f;
	if (func_40(bParam0, &Var4, &uVar7))
	{
		iVar0 = 0;
		while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				bVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0));
				if (func_12(bVar8, 1, 1))
				{
					fVar3 = func_38(func_39(bVar8), Var4);
					if (fVar3 < fVar2)
					{
						fVar2 = fVar3;
						iVar1 = bVar0;
					}
				}
			}
			bVar0++;
		}
	}
	return iVar1;
}

float func_38(struct<3> Param0, struct<3> Param3)
{
	Param0.f_2 = 0f;
	Param3.f_2 = 0f;
	return SYSTEM::VDIST(Param0, Param3);
}

Vector3 func_39(bool bParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), false);
}

int func_40(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1729.582f, -2943.77f, 12.9443f };
			*uParam2 = 300.078f;
			break;
		
		case 1:
			*uParam1 = { 677.2984f, 769.7758f, 204.6846f };
			*uParam2 = 82.8903f;
			break;
		
		case 2:
			*uParam1 = { 1073.972f, 3003.889f, 40.5508f };
			*uParam2 = 333.2717f;
			break;
		
		case 3:
			*uParam1 = { 1928.635f, 4702.327f, 40.1958f };
			*uParam2 = 327.9112f;
			break;
		
		case 4:
			*uParam1 = { 1278.65f, 6579.366f, 1.505f };
			*uParam2 = 84.26f;
			break;
		
		case 5:
			*uParam1 = { -1700.407f, -829.8932f, 8.2542f };
			*uParam2 = 70.1811f;
			break;
		
		case 6:
			*uParam1 = { -2733.589f, 2925.563f, 1.2152f };
			*uParam2 = 176.5378f;
			break;
		
		case 7:
			*uParam1 = { 1493.418f, -2442.99f, 64.9693f };
			*uParam2 = 52.9918f;
			break;
		
		case 8:
			*uParam1 = { 569.0449f, -772.5692f, 10.4088f };
			*uParam2 = 179.3501f;
			break;
		
		case 9:
			*uParam1 = { -905.1526f, 5548.172f, 5.5251f };
			*uParam2 = 95.8361f;
			break;
		
		default:
			return 0;
	}
	return 1;
}

int func_41(int iParam0, bool bParam1, var uParam2, var uParam3)
{
	if (func_5(iParam0))
	{
		switch (bParam1)
		{
			case 0:
				*uParam2 = { -1729.582f, -2943.77f, 12.9443f };
				*uParam3 = 300.078f;
				break;
			
			case 1:
				*uParam2 = { 677.2984f, 769.7758f, 204.6846f };
				*uParam3 = 82.8903f;
				break;
			
			case 2:
				*uParam2 = { 1073.972f, 3003.889f, 40.5508f };
				*uParam3 = 333.2717f;
				break;
			
			case 3:
				*uParam2 = { 1928.635f, 4702.327f, 40.1958f };
				*uParam3 = 327.9112f;
				break;
			
			case 4:
				*uParam2 = { 1278.65f, 6579.366f, 1.505f };
				*uParam3 = 84.26f;
				break;
			
			case 5:
				*uParam2 = { -1700.407f, -829.8932f, 8.2542f };
				*uParam3 = 70.1811f;
				break;
			
			case 6:
				*uParam2 = { -2733.589f, 2925.563f, 1.2152f };
				*uParam3 = 173.6421f;
				break;
			
			case 7:
				*uParam2 = { 1493.418f, -2442.99f, 64.9693f };
				*uParam3 = 52.9918f;
				break;
			
			case 8:
				*uParam2 = { 569.0449f, -772.5692f, 10.4088f };
				*uParam3 = 179.3501f;
				break;
			
			case 9:
				*uParam2 = { -905.1526f, 5548.172f, 5.5251f };
				*uParam3 = 95.8361f;
				break;
			
			default:
				return 0;
		}
	}
	else if (func_42(iParam0))
	{
		switch (bParam1)
		{
			case 0:
				*uParam2 = { -3132.932f, 1130.534f, 19.683f };
				*uParam3 = 168.7723f;
				break;
			
			case 1:
				*uParam2 = { -1008.917f, -1640.027f, 3.4035f };
				*uParam3 = 235.1491f;
				break;
			
			case 2:
				*uParam2 = { 1075.063f, -2445.105f, 28.2896f };
				*uParam3 = 100.2369f;
				break;
			
			case 3:
				*uParam2 = { 1101.198f, -266.9387f, 68.3046f };
				*uParam3 = 359.2015f;
				break;
			
			case 4:
				*uParam2 = { 2658.878f, 1667.581f, 23.4886f };
				*uParam3 = 90.4833f;
				break;
			
			case 5:
				*uParam2 = { -399.1095f, 874.6328f, 230.2586f };
				*uParam3 = 107.5929f;
				break;
			
			case 6:
				*uParam2 = { 156.5429f, 3117.213f, 41.5677f };
				*uParam3 = 218.5338f;
				break;
			
			case 7:
				*uParam2 = { -2242.923f, 4315.749f, 46.7647f };
				*uParam3 = 236.8359f;
				break;
			
			case 8:
				*uParam2 = { -143.7363f, 6500.573f, 28.7366f };
				*uParam3 = 116.1312f;
				break;
			
			case 9:
				*uParam2 = { 1939.475f, 4628.652f, 39.3984f };
				*uParam3 = 350.0428f;
				break;
			
			default:
				return 0;
			}
	}
	return 1;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

bool func_43(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_44()
{
	return (func_5(Local_640.f_3) || func_42(Local_640.f_3));
}

int func_45(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_123(PLAYER::PLAYER_ID(), 0) || func_120(PLAYER::PLAYER_ID(), 0))
	{
		if (func_119(PLAYER::PLAYER_ID()) || func_117(PLAYER::PLAYER_ID()))
		{
			bParam2 = false;
		}
	}
	if (NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < iParam0)
	{
		if (bParam2)
		{
			func_52(sParam3, sParam4, 1);
		}
		if (func_51(26, -1))
		{
			func_49(26, -1);
		}
		return 1;
	}
	if (func_48(&(Global_1836941.f_18)))
	{
		if (!func_1(&(Global_1836941.f_18), 7500, 0))
		{
			return 0;
		}
		func_47(&(Global_1836941.f_18));
	}
	if (func_46())
	{
		if (bParam2)
		{
			func_52(sParam3, sParam4, 0);
		}
		if (func_51(26, -1))
		{
			func_49(26, -1);
		}
		return 1;
	}
	if (iParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_52(sParam3, sParam4, 1);
		}
		if (func_51(26, -1))
		{
			func_49(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_46()
{
	return BitTest(Global_1836941.f_1, 0);
}

void func_47(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_48(var uParam0)
{
	return uParam0->f_1;
}

void func_49(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	switch (bParam0)
	{
		case 0:
			STATS::SET_JOB_ACTIVITY_ID_STARTED(0, iParam1);
			break;
		
		default:
			iVar1 = func_50(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (BitTest(iVar0, bParam0))
			{
				MISC::CLEAR_BIT(&iVar0, bParam0);
				STATS::SET_JOB_ACTIVITY_ID_STARTED(iVar0, iParam1);
			}
			break;
	}
}

int func_50(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_16();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

bool func_51(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar0 = func_50(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return BitTest(iVar1, iParam0);
}

void func_52(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!BitTest(Global_1836941.f_1, 2) && !func_8(PLAYER::PLAYER_ID())) && !func_7(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2";
			}
			else
			{
				sParam1 = "FMEVEN_NUM3";
			}
		}
		func_53(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		MISC::SET_BIT(&(Global_1836941.f_1), 2);
	}
}

int func_53(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_116(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_114(&(Var0.f_69), iParam7);
	}
	return func_54(&Var0);
}

int func_54(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2672741.f_2840)
		{
			return 0;
		}
	}
	func_69(uParam0, uParam0->f_17);
	func_66(uParam0);
	if (func_65())
	{
		func_66(uParam0);
	}
	if (func_64(uParam0->f_1))
	{
		func_57();
		if (Global_2672741.f_2518[0 /*80*/].f_2 == 0)
		{
			Global_2672741.f_2518[0 /*80*/] = { *uParam0 };
			if (func_56(uParam0->f_69, 8192))
			{
				Global_1927721 = 1;
			}
			return 1;
		}
		if (((Global_2672741.f_2518[0 /*80*/].f_1 == 13 || Global_2672741.f_2518[0 /*80*/].f_1 == 53) || Global_2672741.f_2518[0 /*80*/].f_1 == 54) || Global_2672741.f_2518[0 /*80*/].f_1 == 58)
		{
			Global_2672741.f_2518[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2672741.f_2518[iVar0 + 1 /*80*/] = { Global_2672741.f_2518[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2672741.f_2518[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2672741.f_2518[iVar0 /*80*/].f_2 == 0)
		{
			Global_2672741.f_2518[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_57();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_114(&(Global_2672741.f_2518[iVar0 /*80*/].f_69), 2);
				Global_2672741.f_2518[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_56(uParam0->f_69, 128))
			{
				if (func_55(Global_2672741.f_2518[iVar0 /*80*/].f_1))
				{
					Global_2672741.f_2518[iVar0 /*80*/].f_2 = 5;
					func_114(&(Global_2672741.f_2518[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

bool func_56(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_57()
{
	bool bVar0;
	
	if (Global_2672741.f_2841)
	{
		return;
	}
	if (!Global_79517)
	{
		Global_79517 = 1;
		bVar0 = true;
	}
	else if (Global_79518)
	{
		Global_79518 = 0;
		bVar0 = true;
	}
	func_58();
	if (bVar0)
	{
		Global_79517 = 0;
	}
}

void func_58()
{
	Global_2672741.f_2842 = 0;
	Global_2672741.f_2842.f_582 = 0;
	func_62(&(Global_2672741.f_2842.f_1));
	Global_2672741.f_2842.f_1.f_1 = 0;
	func_59(&(Global_2672741.f_2842.f_1), 1);
}

void func_59(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_566 || iParam1) && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_568)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_568 = 0;
	}
	if (!Global_79517)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_79519)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_61(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_60(0);
}

void func_60(int iParam0)
{
	Global_79509 = iParam0;
	Global_79510 = iParam0;
}

int func_61(bool bParam0)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79497, 0);
}

void func_62(var uParam0)
{
	func_63(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_63(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
}

int func_64(int iParam0)
{
	if ((((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110) || iParam0 == 111)
	{
		return 1;
	}
	return 0;
}

bool func_65()
{
	return Global_2684312.f_19;
}

void func_66(var uParam0)
{
	if (func_68(uParam0->f_1))
	{
		uParam0->f_72 = func_67();
	}
}

int func_67()
{
	return 21;
}

int func_68(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_69(var uParam0, bool bParam1)
{
	if (func_68(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (bParam1 == func_113() || !func_12(bParam1, 0, 1))
	{
		return;
	}
	if (func_55(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_70(bParam1, -2, 0, 0, 0);
		}
	}
}

int func_70(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!func_17(bParam0))
	{
		return 1;
	}
	if (func_111(bParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_120437[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_111(PLAYER::PLAYER_ID()) || (func_110() && func_109())) && !BitTest(Global_2738587.f_4697, 31)) && !bParam4)
	{
		iVar1 = func_108();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_12(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_120437[iParam1] != -1)
							{
								return func_106(iParam1, bParam0, 0);
							}
							else
							{
								return func_85(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_85(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_120437[iParam1] != -1)
				{
					return func_106(iParam1, bParam0, 0);
				}
				else
				{
					return func_71(0, -1, 0);
				}
			}
			else
			{
				return func_71(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_120437[iParam1] != -1)
		{
			return func_106(iParam1, bParam0, 0);
		}
		else
		{
			return func_85(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_85(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_71(bool bParam0, int iParam1, bool bParam2)
{
	return func_72(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_72(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
	if ((func_84() || (func_83() && func_81())) && Global_1679836.f_1)
	{
		if (bParam1)
		{
			return func_80(iParam2, iVar0);
		}
		else
		{
			return func_80(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_77(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_76(1);
				}
				else
				{
					return func_76(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_73(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_73(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_76(1);
	}
	return func_76(0);
}

int func_73(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_75(iParam0, iParam1, iParam3);
	if (func_74(Global_4718592.f_126144, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_74(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_183007 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9672[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_75(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_77(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_76(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_77(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	if (((iParam0 > -1 && iParam0 < 4) && iParam1 > -1) && iParam1 < 4)
	{
		bVar0 = Global_1058104.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_25548, bVar0))
			{
				bVar1 = Global_1058104.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_78(iParam0, bVar0, iParam1, bVar1) || !func_78(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_25550[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_78(iParam0, bVar0, iParam1, bVar1) || !func_78(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_25550[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_78(iParam0, bVar0, iParam1, bVar1) || !func_78(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_25550[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_78(iParam0, bVar0, iParam1, bVar1) || !func_78(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_25550[bVar0], (12 + iParam1));
							}
							break;
						}
					}
				}
			}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3267, 0);
				
				case 1:
					return BitTest(Global_4718592.f_3267, 1);
				
				case 2:
					return BitTest(Global_4718592.f_3267, 2);
				
				case 3:
					return BitTest(Global_4718592.f_3267, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3267, 4);
				
				case 1:
					return BitTest(Global_4718592.f_3267, 5);
				
				case 2:
					return BitTest(Global_4718592.f_3267, 6);
				
				case 3:
					return BitTest(Global_4718592.f_3267, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3267, 8);
				
				case 1:
					return BitTest(Global_4718592.f_3267, 9);
				
				case 2:
					return BitTest(Global_4718592.f_3267, 10);
				
				case 3:
					return BitTest(Global_4718592.f_3267, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3267, 12);
				
				case 1:
					return BitTest(Global_4718592.f_3267, 13);
				
				case 2:
					return BitTest(Global_4718592.f_3267, 14);
				
				case 3:
					return BitTest(Global_4718592.f_3267, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_78(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == iParam2)
	{
		return 1;
	}
	if (!BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_25549, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_3318[iParam2 /*25763*/].f_25549, bParam3))
	{
		return 0;
	}
	iVar0 = 1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar4 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		bVar1 = iVar5;
		if (((!func_12(bVar1, 1, 1) || func_14(bVar1, 0)) || BitTest(Global_2657921[bVar1 /*463*/].f_199, 2)) || func_79(bVar1))
		{
		}
		else if (PLAYER::GET_PLAYER_TEAM(bVar1) != iParam2)
		{
		}
		else
		{
			iVar2 = PLAYER::GET_PLAYER_PED(bVar1);
			if (PED::IS_PED_INJURED(iVar2))
			{
			}
			else
			{
				iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
				if (iVar4 == joaat("mp_f_freemode_01") || iVar4 == joaat("mp_m_freemode_01"))
				{
					if (iVar3 == joaat("mp_f_freemode_01") || iVar3 == joaat("mp_m_freemode_01"))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if (iVar4 != iVar3)
				{
					return 0;
				}
			}
		}
		iVar5++;
	}
	return iVar0;
}

var func_79(bool bParam0)
{
	return BitTest(Global_1845263[bParam0 /*877*/].f_36.f_18, 14);
}

int func_80(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_75(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_81()
{
	if (func_82())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_187226, 4);
}

bool func_82()
{
	return BitTest(Global_4718592.f_176243, 12);
}

bool func_83()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_187226, 0);
	}
	return ((BitTest(Global_4718592.f_187226, 0) || Global_1919183) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_84()
{
	if (func_82() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_85(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1845263[PLAYER::PLAYER_ID() /*877*/] == 148)
	{
		bVar1 = true;
	}
	bVar2 = bParam0;
	if (bVar2 > -1)
	{
		if (Global_1845263[bVar2 /*877*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_94())
			{
				iVar3 = func_90(bParam0);
				if (!iVar3 == -1)
				{
					return func_88(iVar3);
				}
			}
			if ((func_87(bParam1, bParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_77(PLAYER::GET_PLAYER_TEAM(bParam1), PLAYER::GET_PLAYER_TEAM(bParam0), 0, -1) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_76(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_86(1);
			}
			else
			{
				return func_72(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836669 || Global_1836659) || Global_1845263[bParam0 /*877*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1836669 == 1 && Global_1836679 == 0))
			{
				return func_76(1);
			}
			else
			{
				return func_72(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836663 && Global_1836147.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_90(bParam0);
	if (!iVar4 == -1)
	{
		return func_88(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_86(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_87(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(bParam0) == -1 && PLAYER::GET_PLAYER_TEAM(bParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(bParam0) == PLAYER::GET_PLAYER_TEAM(bParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(bParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(bParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(bParam0) == iParam2;
}

int func_88(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_89(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_89(int iParam0)
{
	return Global_2648918.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_90(bool bParam0)
{
	if (func_17(bParam0))
	{
		if (func_92(bParam0, 1))
		{
			return Global_2648918.f_818.f_11[func_91(bParam0)];
		}
	}
	return -1;
}

int func_91(bool bParam0)
{
	if (func_17(bParam0))
	{
		return Global_1886967[bParam0 /*609*/].f_10;
	}
	return func_113();
}

bool func_92(bool bParam0, bool bParam1)
{
	if (!func_17(bParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_93(bParam0))
		{
			return 0;
		}
	}
	return Global_1886967[bParam0 /*609*/].f_10 != func_113();
}

int func_93(bool bParam0)
{
	if (func_17(bParam0))
	{
		if (Global_1886967[bParam0 /*609*/].f_10 != func_113())
		{
			return Global_1886967[bParam0 /*609*/].f_10 == bParam0;
		}
	}
	return 0;
}

int func_94()
{
	if (((((((func_105() || func_104()) || func_65()) || func_103()) || func_102()) || func_100()) || func_98()) || func_95())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_95()
{
	return func_96(Global_4718592.f_126144);
}

int func_96(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_97(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_97(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_34045[iParam0];
	}
	return -1;
}

int func_98()
{
	return func_99(Global_4718592.f_126144);
}

int func_99(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_32038[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_100()
{
	return func_101(Global_4718592.f_126144);
}

int func_101(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31332[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_102()
{
	return Global_2684312.f_24;
}

bool func_103()
{
	return Global_2684312.f_21;
}

var func_104()
{
	return Global_2684312.f_18;
}

var func_105()
{
	return Global_2684312.f_17;
}

int func_106(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058104.f_14[iParam0];
	if (func_94())
	{
		iVar2 = func_90(bParam1);
		if (!iVar2 == -1)
		{
			return func_88(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_8496[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && bParam1 != func_113())
	{
		if (Global_4718592.f_120437[iParam0] != -1 && Global_4718592.f_120437[iParam0] <= 4)
		{
			if (Global_4718592.f_120437[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_120437[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_120437[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_120437[iParam0] == 4)
			{
				if (BitTest(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_120437[iParam0];
			}
		}
		else
		{
			iVar0 = func_72(bParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_107(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_77(iParam0, PLAYER::GET_PLAYER_TEAM(bParam1), 0, -1))
		{
			iVar0 = func_86(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_107(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_183183;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_183184;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_183185;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_183186;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_108()
{
	return Global_2621446.f_2;
}

var func_109()
{
	return BitTest(Global_2621446, 4);
}

var func_110()
{
	return BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_36.f_18, 14);
}

int func_111(bool bParam0)
{
	if (func_14(bParam0, 0))
	{
		return 1;
	}
	if (func_112())
	{
		if (bParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657921[bParam0 /*463*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_112()
{
	return BitTest(Global_2621446, 3);
}

int func_113()
{
	return -1;
}

void func_114(var uParam0, int iParam1)
{
	func_115(uParam0, iParam1);
}

void func_115(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_116(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_113();
	uParam1->f_18 = func_113();
	uParam1->f_19 = func_113();
	uParam1->f_20 = func_113();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

bool func_117(bool bParam0)
{
	return func_118(bParam0, 20);
}

var func_118(bool bParam0, int iParam1)
{
	return BitTest(Global_1886967[bParam0 /*609*/].f_10.f_4, iParam1);
}

int func_119(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return func_118(bParam0, 9);
	}
	return 0;
}

int func_120(bool bParam0, int iParam1)
{
	if (Global_1886967[bParam0 /*609*/].f_10.f_33 != -1 && func_121(Global_1886967[bParam0 /*609*/].f_10.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1886967[bParam0 /*609*/].f_10.f_32 != -1)
	{
		if (func_121(Global_1886967[bParam0 /*609*/].f_10.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_122(iParam0, 0);
	return 0;
}

int func_122(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_123(bool bParam0, int iParam1)
{
	if (func_17(bParam0))
	{
		if (Global_1886967[bParam0 /*609*/].f_10.f_33 != -1 || (iParam1 && Global_1886967[bParam0 /*609*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

void func_124(int iParam0)
{
	Local_640.f_0 = iParam0;
}

int func_125()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_640.f_4[iVar0] = -1;
		iVar0++;
	}
	func_47(&(Local_640.f_39));
	func_130();
	if (func_44())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_640.f_55[iVar0] = func_37(iVar0);
			iVar0++;
		}
		func_126();
	}
	return 1;
}

void func_126()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_42(Local_640.f_3))
		{
			Local_640.f_67[iVar0 /*2*/] = func_129();
		}
		else
		{
			Local_640.f_67[iVar0 /*2*/] = func_127();
		}
		iVar0++;
	}
}

int func_127()
{
	int iVar0;
	
	switch (Local_640.f_3)
	{
		case 12:
			return func_128();
			break;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("maverick");
		
		case 1:
			return joaat("mammatus");
		
		default:
	}
	return 0;
}

int func_128()
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("stunt");
		
		case 1:
			return joaat("besra");
		
		default:
	}
	return 0;
}

int func_129()
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("sanchez");
		
		case 1:
			return joaat("pcj");
		
		default:
	}
	return 0;
}

void func_130()
{
	int iVar0;
	
	iVar0 = func_135();
	Local_640.f_3 = iVar0;
	func_131(func_133(133, iVar0, 0, 0));
}

void func_131(int iParam0)
{
	struct<4> Var0;
	int iVar4;
	
	Var0.f_0 = 1927637822;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam0;
	iVar4 = func_132(1, 1);
	if (!iVar4 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar4, Var0.f_0);
	}
}

var func_132(int iParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(bVar1);
		if (func_12(bVar2, 0, 0))
		{
			if (bVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, bVar1);
				}
				else if (!func_14(bVar2, 0))
				{
					MISC::SET_BIT(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

int func_133(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
		case 236:
		case 150:
			return iParam1;
		
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						default:
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								
								case 1:
									return 16;
								
								case 2:
									return 17;
								
								case 3:
									return 18;
								
								case 4:
									return 19;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								
								case 1:
									return 21;
								
								case 2:
									return 22;
								
								case 3:
									return 24;
								
								case 4:
									return 25;
								
								default:
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								
								case 1:
									return 27;
								
								case 2:
									return 28;
								
								case 3:
									return 29;
								
								case 4:
									return 30;
								
								default:
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								
								case 1:
									return 32;
								
								case 2:
									return 33;
								
								case 3:
									return 34;
								
								case 4:
									return 35;
								
								default:
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						case 4:
							return 8;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						case 3:
							return 15;
						
						case 4:
							return 16;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						
						case 1:
							return 18;
						
						case 2:
							return 19;
						
						case 3:
							return 20;
						
						case 4:
							return 21;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						
						case 1:
							return 24;
						
						case 2:
							return 25;
						
						case 3:
							return 26;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						
						case 1:
							return 28;
						
						case 2:
							return 29;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						
						case 1:
							return 31;
						
						case 2:
							return 32;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						
						case 1:
							return 34;
						
						case 2:
							return 35;
						
						case 3:
							return 36;
						
						default:
					}
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						
						case 1:
							return 38;
						
						case 2:
							return 39;
						
						case 3:
							return 40;
						
						default:
					}
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						default:
					}
					break;
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
			}
			break;
	}
	if (func_134(iParam0) == 1)
	{
		return iParam1;
	}
	return -1;
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		case 268:
			return 2;
		
		case 286:
			return 2;
		
		case 267:
			return 0;
		
		case 266:
			return 2;
		
		case 287:
			return 2;
		
		case 289:
			return 2;
		
		case 147:
			return 2;
		
		case 291:
			return 0;
		
		case 292:
			return 0;
		
		case 293:
			return 0;
		
		case 294:
			return 0;
		
		case 295:
			return 0;
		
		case 296:
			return 0;
		
		case 297:
			return 0;
		
		case 298:
			return 0;
		
		case 299:
			return 0;
		
		case 300:
			return 0;
		
		case 301:
			return 0;
		
		case 288:
			return 2;
		
		case 290:
			return 2;
		
		case 304:
			return 0;
		
		case 305:
			return 0;
		
		case 306:
			return 0;
		
		case 307:
			return 0;
		
		case 308:
			return 0;
		
		case 309:
			return 0;
		
		case 310:
			return 2;
		
		case 311:
			return 2;
		
		case 312:
			return 2;
		
		case 320:
			return 2;
		
		case 313:
			return 2;
		
		case 315:
			return 0;
		
		case 316:
			return 0;
		
		case 317:
			return 0;
		
		case 318:
			return 0;
		
		case 322:
			return 0;
		
		case 323:
			return 2;
		
		case 324:
			return 0;
		
		case 325:
			return 0;
		
		case 326:
			return 0;
		
		case 327:
			return 0;
		
		case 328:
			return 0;
		
		case 329:
			return 0;
		
		case 330:
			return 0;
		
		case 331:
			return 0;
		
		case 332:
			return 0;
		
		case 333:
			return 0;
		
		default:
	}
	return -1;
}

int func_135()
{
	int iVar0[19];
	float fVar20;
	int iVar21;
	float fVar22;
	
	iVar0[0] = Global_262145.f_12022;
	iVar0[1] = Global_262145.f_11695;
	iVar0[2] = Global_262145.f_12026;
	iVar0[3] = Global_262145.f_12024;
	iVar0[4] = Global_262145.f_12025;
	iVar0[5] = Global_262145.f_12027;
	iVar0[6] = Global_262145.f_11696;
	iVar0[7] = Global_262145.f_11697;
	iVar0[8] = Global_262145.f_12023;
	iVar0[9] = Global_262145.f_11703;
	iVar0[10] = Global_262145.f_11698;
	iVar0[11] = Global_262145.f_11700;
	iVar0[12] = Global_262145.f_11701;
	iVar0[13] = Global_262145.f_11699;
	iVar0[14] = Global_262145.f_11702;
	iVar0[15] = Global_262145.f_11705;
	iVar0[16] = Global_262145.f_11706;
	iVar0[17] = Global_262145.f_11707;
	iVar0[18] = Global_262145.f_11708;
	fVar20 = 0f;
	iVar21 = 0;
	while (iVar21 < iVar0)
	{
		if (func_138(iVar21) || func_136(133, iVar21, 0, 0))
		{
			iVar0[iVar21] = 0f;
		}
		else
		{
			fVar20 = (fVar20 + iVar0[iVar21]);
		}
		iVar21++;
	}
	fVar22 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar20);
	iVar21 = 0;
	while (iVar21 < iVar0)
	{
		if (fVar22 <= iVar0[iVar21])
		{
			return iVar21;
		}
		fVar22 = (fVar22 - iVar0[iVar21]);
		iVar21++;
	}
	return func_135();
}

int func_136(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 132:
		case 144:
		case 236:
		case 150:
			return 0;
		
		default:
	}
	iVar1 = func_137(iParam0);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar0 < Global_262145.f_8755)
		{
			if (Global_2698947.f_136[iVar0 /*2*/] == iVar1 && Global_2698947.f_136[iVar0 /*2*/].f_1 == func_133(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 12;
		
		case 139:
			return 14;
		
		case 141:
			return 16;
		
		case 133:
			return 9;
		
		case 138:
			return 13;
		
		case 144:
			return 17;
		
		case 132:
			return 8;
		
		case 131:
			return 10;
		
		case 146:
			return 18;
		
		case 129:
			return 11;
		
		case 140:
			return 15;
		
		case 236:
			return 19;
		
		case 150:
			return 20;
		
		default:
	}
	return -1;
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_10903;
		
		case 1:
			return Global_262145.f_11709;
		
		case 6:
			return Global_262145.f_11710;
		
		case 7:
			return Global_262145.f_11711;
		
		case 8:
			return Global_262145.f_10904;
		
		case 3:
			return Global_262145.f_10905;
		
		case 4:
			return Global_262145.f_10906;
		
		case 2:
			return Global_262145.f_10907;
		
		case 5:
			return Global_262145.f_10909;
		
		case 9:
			return Global_262145.f_11717;
		
		case 10:
			return Global_262145.f_11712;
		
		case 11:
			return Global_262145.f_11714;
		
		case 12:
			return Global_262145.f_11715;
		
		case 15:
			return Global_262145.f_11719;
		
		case 16:
			return Global_262145.f_11720;
		
		case 17:
			return Global_262145.f_11721;
		
		case 18:
			return Global_262145.f_11722;
		
		case 13:
			return Global_262145.f_11713;
		
		case 14:
			return Global_262145.f_11716;
		
		default:
	}
	return 1;
}

void func_139()
{
	bool bVar0;
	
	if (func_44())
	{
		bVar0 = false;
		while (bVar0 < 10)
		{
			if (Local_640.f_55[bVar0] == NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (func_140(bVar0))
				{
					if (!BitTest(Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2, bVar0))
					{
						MISC::SET_BIT(&(Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2), bVar0);
					}
				}
				else if (BitTest(Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2, bVar0))
				{
					MISC::CLEAR_BIT(&(Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2), bVar0);
				}
			}
			else if (BitTest(Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2, bVar0))
			{
				MISC::CLEAR_BIT(&(Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2), bVar0);
			}
			bVar0++;
		}
	}
}

int func_140(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	
	if (func_40(iParam0, &Var0, &uVar3))
	{
		if (func_141(Var0, 10f, 1065353216, 1f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_141(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, bool bParam18)
{
	Global_2635562.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam5, bParam18))
		{
			return 0;
		}
	}
	Global_2635562.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2635562.f_2++;
	if (fParam14 > 0f)
	{
		if (func_146(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15, 0))
		{
			return 0;
		}
	}
	Global_2635562.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_142(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2635562.f_2++;
	return 1;
}

int func_142(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_12(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_144(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (func_12(bVar1, 1, 1))
		{
			if (!func_14(bVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && bVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_143(bVar1) || !bParam10) && !Global_2657921[bVar1 /*463*/].f_270)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(bVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_144(bVar1), Param0, true) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(bVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_144(bVar1), Param0, true) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_143(bool bParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(bParam0)) || Global_2657921[bParam0 /*463*/].f_255)
	{
		return 1;
	}
	return 0;
}

Vector3 func_144(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if ((func_65() && Global_1845263[iVar0 /*877*/].f_844) && !func_145(Global_1845263[iVar0 /*877*/].f_845))
	{
		return Global_1845263[iVar0 /*877*/].f_845;
	}
	return func_39(bParam0);
}

int func_145(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_146(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9, int iParam10)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != bVar1) || iParam8 == 0)
		{
			if (func_12(bVar1, bParam4, bParam5))
			{
				if (iParam10 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_143(bVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_147(bVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_39(bVar1), Param0, true) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_147(bool bParam0)
{
	if (func_150(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	Global_2706987 = { func_149(bParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2706987))
	{
		return 1;
	}
	if (func_148(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	return 0;
}

int func_148(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_91(bParam0);
	if (func_17(iVar0))
	{
		if (iVar0 == func_91(bParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_149(bool bParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
	return Var0;
}

int func_150(bool bParam0, bool bParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2706987 = { func_149(bParam0) };
		Global_2707000 = { func_149(bParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2706987))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707000))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2706917, 35, &Global_2706987);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2706952, 35, &Global_2707000);
				if (Global_2706917 == Global_2706952)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_151()
{
	float fVar0;
	float fVar1;
	
	func_716();
	func_715();
	if (func_713())
	{
		func_595();
	}
	if (!func_7(PLAYER::PLAYER_ID()))
	{
		if (func_567(0, 1, 1))
		{
			if (BitTest(uLocal_331, 6))
			{
				MISC::CLEAR_BIT(&uLocal_331, 6);
			}
			switch (Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3)
			{
				case 0:
					if (Local_640.f_37 < 2)
					{
						if (Local_640.f_37 > 0)
						{
							if (Local_640.f_3 != -1)
							{
								func_566(1);
								func_565(1);
							}
						}
					}
					else
					{
						func_565(2);
					}
					break;
				
				case 1:
					func_559(9);
					if (Local_2992.f_8 == 0)
					{
						Local_2992.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
					}
					if (Local_640.f_37 >= 2)
					{
						func_565(2);
						Local_2992.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
					}
					if (func_44())
					{
						func_559(0);
					}
					func_557((func_30() - func_558(&(Local_640.f_43), 0, 0)));
					func_554(func_556((func_30() - func_558(&(Local_640.f_43), 0, 0)), 0), func_555(Local_640.f_3));
					func_479(0, func_553());
					func_463();
					func_441();
					if (func_440())
					{
						func_439();
					}
					break;
				
				case 2:
					if (Local_640.f_37 > 2)
					{
						func_566(0);
						fVar0 = 1f;
						fVar1 = 1f;
						if (func_438())
						{
							fVar0 = 0f;
							fVar1 = 0.25f;
						}
						func_420(133, fVar0, fVar1, 0, 0, 0, 0);
						func_419(Local_640.f_3, 1);
						func_418(23, 1);
						if (Local_2992.f_8 == 0)
						{
							Local_2992.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
						}
						if (Local_2992.f_9 == 0)
						{
							Local_2992.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
						}
						func_414();
						VEHICLE::SET_DISABLE_BMX_EXTRA_TRICK_FORCES(1);
						if (func_438())
						{
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
							PLAYER::SET_MAX_WANTED_LEVEL(0);
						}
						if (Local_640.f_3 == 14)
						{
							func_413(&Local_351);
						}
						func_412();
						if (!func_7(PLAYER::PLAYER_ID()))
						{
							func_53(63, "AMCH_STARTED", func_411(Local_640.f_3), func_67(), -1, func_67(), 1, 0);
							if (func_408("AMCH_WARN", func_410(Local_640.f_3), func_409(Local_640.f_3)))
							{
								HUD::CLEAR_HELP(true);
							}
						}
						if (func_44())
						{
							func_390(678f, 794f, 206f, 8f, 0);
							func_390(1911.3f, 4714.6f, 41.1f, 8f, 0);
							func_390(688.5021f, 735.4581f, 181.296f, 8f, 0);
						}
						func_565(3);
					}
					break;
				
				case 3:
					if (Local_640.f_37 > 3)
					{
						iLocal_333 = 0;
						func_565(4);
					}
					else
					{
						if (!BitTest(Local_640.f_2, 1))
						{
							func_348();
							func_345();
							func_344();
						}
						if (func_343(0) && !func_21(0))
						{
							func_342();
						}
					}
					if (func_438())
					{
						PLAYER::SET_LAW_PEDS_CAN_ATTACK_NON_WANTED_PLAYER_THIS_FRAME(PLAYER::PLAYER_ID());
					}
					func_341();
					func_316();
					func_595();
					func_479(0, 1);
					func_463();
					func_441();
					func_559(2);
					func_559(5);
					func_559(7);
					break;
				
				case 4:
					if (func_304(&uLocal_343, !BitTest(Local_640.f_2, 0)) || BitTest(Local_640.f_2, 0))
					{
						if (func_5(Local_640.f_3))
						{
							if (Local_640.f_37 == 5)
							{
								func_565(5);
							}
						}
						else
						{
							func_565(6);
						}
					}
					func_291();
					func_183();
					func_316();
					func_595();
					func_479(1, 1);
					func_412();
					break;
				
				case 5:
					if (Local_640.f_37 > 5)
					{
						func_565(6);
					}
					break;
				
				case 6:
					break;
			}
		}
		else
		{
			func_178();
		}
	}
	else
	{
		func_178();
	}
	func_158();
	func_153();
	func_152();
}

void func_152()
{
	struct<2> Var0;
	int iVar2;
	
	if (func_44())
	{
		Var0 = { Local_640.f_67[iLocal_350 /*2*/] };
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Var0.f_1))
		{
			iVar2 = NETWORK::NET_TO_VEH(Var0.f_1);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
				}
			}
		}
		iLocal_350++;
		if (iLocal_350 >= 10)
		{
			iLocal_350 = 0;
			iLocal_639 = iLocal_638;
			iLocal_638 = 0;
		}
	}
}

void func_153()
{
	if (Local_640.f_37 == 5)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_640.f_67[iLocal_350 /*2*/].f_1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_640.f_67[iLocal_350 /*2*/].f_1), false))
			{
				if (!BitTest(uLocal_626, iLocal_350))
				{
					MISC::SET_BIT(&uLocal_626, iLocal_350);
					iLocal_627[bLocal_350] = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_627[bLocal_350], "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_640.f_67[bLocal_350 /*2*/].f_1), "GTAO_FM_Events_Soundset", false, 0);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_627[bLocal_350], "Time", 30f);
				}
				if ((30000 - func_558(&(Local_640.f_45), 0, 0)) >= 0)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_640.f_67[bLocal_350 /*2*/].f_1), false))
					{
						func_559(1);
						iLocal_638 = 1;
					}
				}
				else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_640.f_67[bLocal_350 /*2*/].f_1))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(NETWORK::NET_TO_VEH(Local_640.f_67[bLocal_350 /*2*/].f_1));
					NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_640.f_67[bLocal_350 /*2*/].f_1), true, false, -1);
				}
			}
			else if (BitTest(uLocal_626, bLocal_350) && !AUDIO::HAS_SOUND_FINISHED(iLocal_627[bLocal_350]))
			{
				AUDIO::STOP_SOUND(iLocal_627[bLocal_350]);
			}
		}
		if (iLocal_639)
		{
			if (!func_111(PLAYER::PLAYER_ID()))
			{
				func_155(func_556((30000 - func_558(&(Local_640.f_45), 0, 0)), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
				func_154();
			}
		}
	}
}

void func_154()
{
	Global_1669875.f_1172 = 1;
}

void func_155(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_157(7, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1669875.f_1 = 1;
		func_156(7, bVar0);
		Global_1669875.f_4714[bVar0] = iParam0;
		StringCopy(&(Global_1669875.f_4714.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1669875.f_4714.f_172[bVar0] = iParam2;
		Global_1669875.f_4714.f_216[bVar0] = iParam3;
		Global_1669875.f_4714.f_183[bVar0] = iParam4;
		Global_1669875.f_4714.f_194[bVar0] = iParam5;
		Global_1669875.f_4714.f_249[bVar0] = iParam6;
		Global_1669875.f_4714.f_260[bVar0] = iParam7;
		Global_1669875.f_4714.f_205[bVar0] = iParam8;
		Global_1669875.f_4714.f_314[bVar0] = iParam9;
		Global_1669875.f_4714.f_325[bVar0] = iParam10;
		Global_1669875.f_4714.f_357[bVar0] = iParam11;
		Global_1669875.f_4714.f_238[bVar0] = iParam12;
		Global_1669875.f_4714.f_271[bVar0] = iParam13;
		Global_1669875.f_4714.f_368[bVar0] = iParam14;
		Global_1669875.f_4714.f_379[bVar0] = iParam15;
		Global_1669875.f_4714.f_390[bVar0] = iParam16;
		Global_1669875.f_4714.f_227[bVar0] = iParam17;
	}
}

void func_156(int iParam0, bool bParam1)
{
	MISC::SET_BIT(&(Global_1669875.f_7064[iParam0]), bParam1);
}

int func_157(int iParam0, int iParam1)
{
	return BitTest(Global_1669875.f_7064[iParam0], iParam1);
}

void func_158()
{
	if (((func_12(PLAYER::PLAYER_ID(), 1, 1) && !func_7(PLAYER::PLAYER_ID())) && !func_174(PLAYER::PLAYER_ID())) && func_567(0, 1, 1))
	{
		if (Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3 == 1)
		{
			func_171(func_173(Local_640.f_3), func_410(Local_640.f_3), 0, 0);
		}
		else if (Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3 == 3)
		{
			if (!BitTest(uLocal_331, 10))
			{
				func_159(func_409(Local_640.f_3), 0);
			}
			else
			{
				func_159("AMCH_OBJLAND", 0);
			}
		}
		else
		{
			func_412();
		}
	}
	else
	{
		func_412();
	}
}

void func_159(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_169(sParam0))
	{
		return;
	}
	func_163();
	Global_1574764 = 0;
	StringCopy(&(Global_1574764.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574764.f_9 = MISC::GET_HASH_KEY(&(Global_1574764.f_1));
	StringCopy(&(Global_1574764.f_12), sParam0, 16);
	func_162();
	func_161(bParam1);
	func_160();
}

void func_160()
{
	MISC::SET_BIT(&(Global_1574764.f_59), true);
}

void func_161(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1574764.f_59), false);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1574764.f_59), false);
}

void func_162()
{
	Global_1574764.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1574764.f_11 = NETWORK::GET_NETWORK_TIME();
}

void func_163()
{
	func_165();
	func_164(0);
}

void func_164(bool bParam0)
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1574764 = 20;
	StringCopy(&(Global_1574764.f_1), "", 32);
	Global_1574764.f_9 = 0;
	if (bVar0)
	{
		Global_1574764.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1574764.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1574764.f_12), "", 16);
	StringCopy(&(Global_1574764.f_16), "", 64);
	StringCopy(&(Global_1574764.f_32), "", 64);
	Global_1574764.f_52 = 0;
	Global_1574764.f_53 = 0;
	Global_1574764.f_54 = 0;
	Global_1574764.f_55 = -1;
	Global_1574764.f_56 = 0;
	Global_1574764.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_165()
{
	if (!func_168())
	{
	}
	if (func_167())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574764.f_12));
		func_166();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_166()
{
	switch (Global_1574764)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574764.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574764.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574764.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574764.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574764.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574764.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574764.f_16));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574764.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574764.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574764.f_16));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574764.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574764.f_16));
			return;
		
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574764.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574764.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574764.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574764.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574764.f_32));
			return;
		
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574764.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574764.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574764.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574764.f_32));
			return;
		
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574764.f_16));
			return;
		
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574764.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574764.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574764.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574764.f_32));
			return;
		
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574764.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574764.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574764.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574764.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574764.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574764.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574764.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574764.f_48));
			return;
		
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574764.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574764.f_16));
			return;
		
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574764.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574764.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574764.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574764.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574764.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574764.f_32));
			return;
		
		default:
	}
}

int func_167()
{
	if (Global_1574764 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_168()
{
	if (!func_167())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574764.f_12));
	func_166();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_169(char* sParam0)
{
	if (!func_167())
	{
		return 0;
	}
	if (Global_1574764 == 11)
	{
		return func_170(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574764.f_12));
}

bool func_170(char* sParam0)
{
	if (!func_167())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574764.f_16));
}

int func_171(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (func_172(sParam0, sParam1) && iParam3 == Global_1574764.f_58)
	{
		return 0;
	}
	func_163();
	Global_1574764 = 3;
	StringCopy(&(Global_1574764.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574764.f_9 = MISC::GET_HASH_KEY(&(Global_1574764.f_1));
	StringCopy(&(Global_1574764.f_12), sParam0, 16);
	StringCopy(&(Global_1574764.f_16), sParam1, 64);
	Global_1574764.f_58 = iParam3;
	Global_1574764.f_56 = iParam3;
	func_162();
	func_161(bParam2);
	func_160();
	return 1;
}

bool func_172(char* sParam0, char* sParam1)
{
	if (!func_167())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574764.f_12)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1574764.f_16));
}

char* func_173(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
			case 5:
			case 8:
			case 13:
				if (((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			
			case 9:
				if ((((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					return "AMCH_PREPCAR";
				}
				break;
			
			case 3:
			case 4:
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					return "AMCH_PREPBIKE";
				}
				else
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
					iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1) && VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar1))
					{
						return "AMCH_PREPBIKE";
					}
				}
				break;
			
			case 12:
				if (!PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					return "AMCH_PREPPLANE";
				}
				break;
			
			case 1:
			case 6:
			case 11:
			case 14:
				if (!PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					return "AMCH_PREPAIR";
				}
				break;
			
			case 18:
				if ((!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), false) && !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_heavysniper"), false)) && !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_marksmanrifle"), false))
				{
					return "AMCH_PREPSNIPER";
				}
				break;
			
			case 16:
				if (((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			}
	}
	return "AMCH_PREPARE";
}

int func_174(bool bParam0)
{
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		if (((func_177() && !func_176()) || func_175(PLAYER::PLAYER_ID(), 21)) || func_175(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		if (func_48(&(Global_1836941.f_13)))
		{
			if (!func_1(&(Global_1836941.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_47(&(Global_1836941.f_13));
		}
	}
	else if (BitTest(Global_1886967[bParam0 /*609*/].f_1, 10))
	{
		return 1;
	}
	return BitTest(Global_1886967[bParam0 /*609*/].f_1, 9);
}

bool func_175(bool bParam0, int iParam1)
{
	return BitTest(Global_2657921[bParam0 /*463*/].f_218, iParam1);
}

bool func_176()
{
	return Global_1574582.f_1;
}

bool func_177()
{
	return Global_1574582;
}

void func_178()
{
	if (!BitTest(uLocal_331, 6))
	{
		HUD::CLEAR_ALL_HELP_MESSAGES();
		func_479(1, 1);
		AUDIO::STOP_SOUND(iLocal_339);
		MISC::CLEAR_BIT(&uLocal_331, 4);
		func_182();
		func_180();
		HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(0f, false, 21);
		MISC::SET_BIT(&uLocal_331, 6);
		func_179();
	}
}

void func_179()
{
	Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_7 = 0;
}

void func_180()
{
	if (Global_2644862.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		func_181();
	}
}

void func_181()
{
	struct<28> Var0;
	
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2644862.f_6))
	{
		if (!Global_2644862.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2644862 = { Var0 };
	Global_2644862.f_6 = -1;
}

void func_182()
{
	struct<6> Var0;
	
	if (Global_2635562.f_490.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2635562.f_490 = { Var0 };
	}
}

void func_183()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar6;
	
	if (!BitTest(Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1, 0))
	{
		if (func_7(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), false);
			return;
		}
		if (func_174(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), false);
			return;
		}
		func_252(&iVar0, &iVar1);
		if (iVar0 > 0)
		{
			Local_2992.f_6 = (Local_2992.f_6 + iVar0);
			if (!Global_262145.f_12174)
			{
				func_250(10, Local_2992.f_6);
			}
			Global_2698492 = iVar0;
			if (func_249())
			{
				func_237(-1468524125, iVar0, &uVar6, 0, 1, 0);
			}
			else
			{
				MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_CHALLENGES", &uVar2);
			}
		}
		if (iVar1 > 0)
		{
			Local_2992.f_7 = (Local_2992.f_7 + iVar1);
			func_236();
			func_184(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
		}
		MISC::SET_BIT(&(Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), false);
	}
}

int func_184(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_185(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_185(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_195(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_39, 19))
	{
		return iVar0;
	}
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_191(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_186(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_186(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_189(iParam0, 1) };
	if (iParam0 == func_188(PLAYER::PLAYER_PED_ID()))
	{
		func_187(1);
	}
	func_191(Var0, iParam1, 0, sParam2, iParam3);
}

void func_187(int iParam0)
{
	Global_2672741.f_1686 = iParam0;
}

int func_188(int iParam0)
{
	return iParam0;
}

Vector3 func_189(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_190(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_190(int iParam0)
{
	return iParam0;
}

void func_191(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2672741.f_1085[iVar0 /*30*/].f_6 == 0 || Global_2672741.f_1085[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2672741.f_1085[iVar1 /*30*/] = { Param0 };
			Global_2672741.f_1085[iVar1 /*30*/].f_6 = 1;
			Global_2672741.f_1085[iVar1 /*30*/].f_4 = func_194(Global_2672741.f_1085[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2672741.f_1085[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2672741.f_1085[iVar1 /*30*/].f_3 = iParam3;
			Global_2672741.f_1085[iVar1 /*30*/].f_8 = iParam4;
			Global_2672741.f_1085[iVar1 /*30*/].f_9 = func_193();
			Global_2672741.f_1085[iVar1 /*30*/].f_10 = func_192();
			StringCopy(&(Global_2672741.f_1085[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2672741.f_1085[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_192()
{
	if (Global_2672741.f_1686)
	{
		Global_2672741.f_1686 = 0;
		return 1;
	}
	Global_2672741.f_1686 = 0;
	return 0;
}

var func_193()
{
	var uVar0;
	
	uVar0 = Global_2672741.f_1688;
	Global_2672741.f_1688 = 1;
	return uVar0;
}

float func_194(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, true);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_195(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_196(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_196(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_227();
	if (func_226(sParam2))
	{
	}
	if (func_225())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_223(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_222(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_220(0, &iVar1);
					break;
				
				case 3:
					func_220(1, &iVar1);
					break;
				
				case 1:
					func_218(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_262145.f_13604)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_217(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_204((func_216(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_36.f_2 != -1)
				{
					func_217(1166, iVar1, -1);
				}
				func_201(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_197((func_199(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_197((func_199(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_197(int iParam0)
{
	if (func_225())
	{
		Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_205.f_5 = iParam0;
		func_198(joaat("mpply_globalxp"), iParam0);
	}
}

void func_198(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_199(bool bParam0)
{
	if (bParam0 > -1)
	{
		if (func_12(bParam0, 0, 1))
		{
			if (bParam0 == PLAYER::PLAYER_ID())
			{
				return func_200(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1845263[bParam0 /*877*/].f_205.f_5;
			}
		}
		else
		{
			return func_200(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_200(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_201(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_149(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_202(func_203(&Var0));
			if (iVar13 == 0)
			{
				func_198(joaat("mpply_crew_local_xp_0"), (func_200(joaat("mpply_crew_local_xp_0")) + iParam0));
			}
			else if (iVar13 == 1)
			{
				func_198(joaat("mpply_crew_local_xp_1"), (func_200(joaat("mpply_crew_local_xp_1")) + iParam0));
			}
			else if (iVar13 == 2)
			{
				func_198(joaat("mpply_crew_local_xp_2"), (func_200(joaat("mpply_crew_local_xp_2")) + iParam0));
			}
			else if (iVar13 == 3)
			{
				func_198(joaat("mpply_crew_local_xp_3"), (func_200(joaat("mpply_crew_local_xp_3")) + iParam0));
			}
			else if (iVar13 == 4)
			{
				func_198(joaat("mpply_crew_local_xp_4"), (func_200(joaat("mpply_crew_local_xp_4")) + iParam0));
			}
		}
	}
}

int func_202(int iParam0)
{
	if (iParam0 == func_200(joaat("mpply_crew_0_id")))
	{
		return 0;
	}
	else if (iParam0 == func_200(joaat("mpply_crew_1_id")))
	{
		return 1;
	}
	else if (iParam0 == func_200(joaat("mpply_crew_2_id")))
	{
		return 2;
	}
	else if (iParam0 == func_200(joaat("mpply_crew_3_id")))
	{
		return 3;
	}
	else if (iParam0 == func_200(joaat("mpply_crew_4_id")))
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_203(var* uParam0)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2695893;
		}
	}
	return Global_2695893;
}

void func_204(int iParam0, int iParam1, int iParam2)
{
	if (func_225())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10256 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < func_215(640, -1))
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == func_215(640, -1))
				{
					return;
				}
			}
		}
		if (Global_262145.f_10255 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_10255 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_214(PLAYER::PLAYER_ID()))
		{
			Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_205.f_1 = iParam0;
			Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_205.f_6 = func_211(iParam0, 1);
		}
		func_208(640, iParam0, -1, 1);
		func_208(641, func_211(iParam0, 1), -1, 1);
		func_205(-1109644434, 7, 0);
	}
}

void func_205(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_207(iParam1, iParam2))
	{
		iVar0 = func_206();
		Global_2695845[iVar0] = iParam1;
		Global_2695856[iVar0] = iParam0;
	}
}

int func_206()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2695845[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_207(int iParam0, var uParam1)
{
	if (Global_1575067)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575079) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_208(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_209(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

var func_209(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_210(uParam1));
}

int func_210(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
		if (iVar1 > -1)
		{
			Global_2750546 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750546 = 1;
		}
	}
	return iVar0;
}

int func_211(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_212(iParam0, 0);
}

int func_212(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (func_213(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_213(iVar3) < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_213(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 < 100)
	{
		switch (iParam0)
		{
			case 1:
				return 0;
			
			case 2:
				return 800;
			
			case 3:
				return 2100;
			
			case 4:
				return 3800;
			
			case 5:
				return 6100;
			
			case 6:
				return 9500;
			
			case 7:
				return 12500;
			
			case 8:
				return 16000;
			
			case 9:
				return 19800;
			
			case 10:
				return 24000;
			
			case 11:
				return 28500;
			
			case 12:
				return 33400;
			
			case 13:
				return 38700;
			
			case 14:
				return 44200;
			
			case 15:
				return 50200;
			
			case 16:
				return 56400;
			
			case 17:
				return 63000;
			
			case 18:
				return 69900;
			
			case 19:
				return 77100;
			
			case 20:
				return 84700;
			
			case 21:
				return 92500;
			
			case 22:
				return 100700;
			
			case 23:
				return 109200;
			
			case 24:
				return 118000;
			
			case 25:
				return 127100;
			
			case 26:
				return 136500;
			
			case 27:
				return 146200;
			
			case 28:
				return 156200;
			
			case 29:
				return 166500;
			
			case 30:
				return 177100;
			
			case 31:
				return 188000;
			
			case 32:
				return 199200;
			
			case 33:
				return 210700;
			
			case 34:
				return 222400;
			
			case 35:
				return 234500;
			
			case 36:
				return 246800;
			
			case 37:
				return 259400;
			
			case 38:
				return 272300;
			
			case 39:
				return 285500;
			
			case 40:
				return 299000;
			
			case 41:
				return 312700;
			
			case 42:
				return 326800;
			
			case 43:
				return 341000;
			
			case 44:
				return 355600;
			
			case 45:
				return 370500;
			
			case 46:
				return 385600;
			
			case 47:
				return 401000;
			
			case 48:
				return 416600;
			
			case 49:
				return 432600;
			
			case 50:
				return 448800;
			
			case 51:
				return 465200;
			
			case 52:
				return 482000;
			
			case 53:
				return 499000;
			
			case 54:
				return 516300;
			
			case 55:
				return 533800;
			
			case 56:
				return 551600;
			
			case 57:
				return 569600;
			
			case 58:
				return 588000;
			
			case 59:
				return 606500;
			
			case 60:
				return 625400;
			
			case 61:
				return 644500;
			
			case 62:
				return joaat("pyro_sub_bass_synth");
			
			case 63:
				return 683400;
			
			case 64:
				return 703300;
			
			case 65:
				return 723400;
			
			case 66:
				return 743800;
			
			case 67:
				return 764500;
			
			case 68:
				return 785400;
			
			case 69:
				return 806500;
			
			case 70:
				return 827900;
			
			case 71:
				return 849600;
			
			case 72:
				return 871500;
			
			case 73:
				return 893600;
			
			case 74:
				return 916000;
			
			case 75:
				return 938700;
			
			case 76:
				return 961600;
			
			case 77:
				return 984700;
			
			case 78:
				return 1008100;
			
			case 79:
				return 1031800;
			
			case 80:
				return 1055700;
			
			case 81:
				return 1079800;
			
			case 82:
				return 1104200;
			
			case 83:
				return 1128800;
			
			case 84:
				return 1153700;
			
			case 85:
				return 1178800;
			
			case 86:
				return 1204200;
			
			case 87:
				return 1229800;
			
			case 88:
				return 1255600;
			
			case 89:
				return 1281700;
			
			case 90:
				return 1308100;
			
			case 91:
				return 1334600;
			
			case 92:
				return 1361400;
			
			case 93:
				return 1388500;
			
			case 94:
				return 1415800;
			
			case 95:
				return 1443300;
			
			case 96:
				return 1471100;
			
			case 97:
				return 1499100;
			
			case 98:
				return 1527300;
			
			case 99:
				return 1555800;
			
			default:
		}
	}
	else
	{
		iVar0 = (iParam0 - 99);
		iVar1 = ((iVar0 * iVar0 + 1) / 2);
		return ((1555800 + iVar0 * 28500) + iVar1 * 50);
	}
	return 1555800;
}

int func_214(bool bParam0)
{
	if (!func_17(bParam0))
	{
		return 0;
	}
	return BitTest(Global_2672741.f_1, bParam0);
}

int func_215(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_209(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_216(bool bParam0)
{
	if (Global_1574632.f_9 == 0)
	{
		if (bParam0 > -1)
		{
			if (bParam0 == PLAYER::PLAYER_ID())
			{
				return func_215(640, -1);
			}
			else if (func_214(bParam0))
			{
				return Global_1845263[bParam0 /*877*/].f_205.f_1;
			}
		}
	}
	else
	{
		return func_215(640, -1);
	}
	return 0;
}

void func_217(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_215(iParam0, func_210(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_208(iParam0, iVar0, iParam2, 1);
}

void func_218(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			bVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(bVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(bVar5) == iVar1 || func_77(PLAYER::GET_PLAYER_TEAM(bVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (bVar5 != PLAYER::PLAYER_ID())
					{
						if (func_150(PLAYER::PLAYER_ID(), bVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		bVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_219(*iParam0, 100) * (10f * Global_262145.f_4051)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_219(*iParam0, 100) * (20f * Global_262145.f_4044)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_219(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_220(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				bVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_12(bVar4, 0, 1))
				{
					if (bVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_150(PLAYER::PLAYER_ID(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar4 = iVar0;
			if (func_12(bVar4, 1, 1))
			{
				if (bVar4 != PLAYER::PLAYER_ID())
				{
					if (func_221(PLAYER::PLAYER_ID(), bVar4) <= 20f)
					{
						iVar1++;
						if (func_150(PLAYER::PLAYER_ID(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_219(*iParam1, 100) * (10f * Global_262145.f_4051)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_219(*iParam1, 100) * (20f * Global_262145.f_4044)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_221(bool bParam0, bool bParam1)
{
	return SYSTEM::VDIST(func_39(bParam0), func_39(bParam1));
	return 0f;
}

int func_222(int iParam0)
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_219(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_223(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_216(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_216(PLAYER::PLAYER_ID());
		}
	}
	if (func_224(8000, 0, 0) > 0)
	{
		if (func_224(8000, 0, 0) < (iParam0 + func_216(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_224(8000, 0, 0) - func_216(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_224(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return func_213(iParam0);
}

int func_225()
{
	return 1;
}

int func_226(char* sParam0)
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_227()
{
	int iVar0;
	
	if (func_235(PLAYER::PLAYER_ID()) || func_234(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_10288 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10288;
		}
	}
	else if (func_232() || func_229(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_23493 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_23493;
		}
	}
	else if (func_228(Global_4718592.f_183007))
	{
		if (Global_262145.f_7168 > 36000)
		{
			iVar0 = 36000;
		}
		else
		{
			iVar0 = Global_262145.f_7168;
		}
	}
	else if (Global_262145.f_7167 > 36000)
	{
		iVar0 = 36000;
	}
	else
	{
		iVar0 = Global_262145.f_7167;
	}
	return iVar0;
}

bool func_228(int iParam0)
{
	return iParam0 == 89;
}

int func_229(bool bParam0)
{
	return func_230(func_231(bParam0));
}

int func_230(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_231(bool bParam0)
{
	if (func_17(bParam0))
	{
		if (func_123(bParam0, 0))
		{
			return Global_1886967[bParam0 /*609*/].f_10.f_33;
		}
	}
	return -1;
}

bool func_232()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_65();
	}
	return func_233(Global_4718592.f_126144);
}

int func_233(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4868[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_234(bool bParam0)
{
	return Global_2657921[bParam0 /*463*/].f_121 == 2;
}

bool func_235(bool bParam0)
{
	return Global_2657921[bParam0 /*463*/].f_121 == 7;
}

void func_236()
{
	Global_2697829 = 1;
}

void func_237(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_249())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 2115896461:
		case 797947947:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
		case 571787049:
			if (iParam1 > 0 || Global_262145.f_28652)
			{
				func_238(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_238(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
		case -2013760296:
		case -1033889004:
		case -2081984382:
		case 1089562091:
		case 1989973742:
			if (iParam1 > 0 || Global_262145.f_28652)
			{
				func_238(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
		case -1029672338:
		case -1503749970:
		case -1843409092:
		case 1669058563:
		case 2102747615:
		case 2030771998:
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
		case 1280785534:
		case -1878824774:
		case 247992227:
		case -229237358:
		case -1123183389:
		case 1814197076:
		case 713955548:
		case -2026544524:
		case -719580138:
		case -163417439:
		case -550417574:
		case 208223429:
		case -1433071892:
		case 761999406:
		case -1101941763:
		case 1748245957:
		case 1036772696:
		case -1384648535:
		case -800037808:
		case -695852120:
		case 77355315:
		case 2097889166:
		case 1707592130:
		case 1628412596:
		case 883337077:
		case -1274418755:
		case -1853979468:
		case -239888995:
		case 1163066566:
		case -955087020:
		case 1874391251:
		case 1633116913:
		case 668586600:
		case 15168061:
		case 590289134:
		case 99792878:
		case 1866258778:
		case -178394060:
		case 409592287:
		case 593836803:
		case 1973036520:
		case 2063456538:
		case -728008329:
		case 119239868:
		case -456458353:
		case 1900048468:
		case 333526332:
		case -2091351051:
		case -373571001:
		case -367430800:
		case 1823444356:
		case 649031587:
		case -1539520895:
		case 560526114:
		case -256590568:
		case -470808433:
		case 1245164680:
		case -1433838369:
		case 1648751987:
		case 674719198:
		case 617724895:
		case 1424147761:
			func_238(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_238(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_249())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_16()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4537357 = 1;
			return 0;
		}
		if (Global_2697412)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4537358 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4535851[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_245(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4535851[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4535851[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4537338 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4537356 = 1;
			Global_4537359 = iParam4;
			Global_4537361 = iParam3;
			Global_4537362 = 1;
			Global_4537360 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4537359 = iParam4;
			Global_4537361 = iParam3;
			Global_4537362 = 1;
			Global_4537360 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_244(1, iParam4);
			Global_4537356 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_239(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_239(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_126.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_240(iParam0);
	}
}

void func_240(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_249())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_243(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535851[iParam0 /*85*/].f_66);
		}
		func_241(&(Global_4535851[iParam0 /*85*/]));
	}
}

void func_241(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_242(&(uParam0->f_14));
	func_242(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_242(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_243(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535851[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_244(int iParam0, int iParam1)
{
	Global_2698632 = iParam1;
	Global_2698631 = iParam0;
}

int func_245(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535851[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_249())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4535851[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535851[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4535851[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535851[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4535851[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4535851[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535851[iVar0 /*85*/].f_66 = iParam0;
			Global_4535851[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535851[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535851[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4535851[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535851[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535851[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4535851[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4537338 = 0;
			if (bParam6)
			{
				Global_4535851[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_246(Global_4535851[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_246(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<4> Var0;
	int iVar37;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_3 = 2147483647;
	Var0.f_0 = -710178565;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = { Param0.f_66 };
	Var0.f_3.f_33 = iParam85;
	iVar37 = func_248(Var0.f_1);
	if ((Global_262145.f_24288 && !Global_262145.f_24289) && !Global_262145.f_24290)
	{
		return;
	}
	if (!iVar37 == 0)
	{
		func_247();
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 37, iVar37, Var0.f_0);
	}
}

void func_247()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_248(bool bParam0)
{
	var uVar0;
	
	if (func_17(bParam0))
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

int func_249()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_250(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_24208 != -1)
		{
			if (func_251())
			{
				Global_2738587.f_283 = iParam0;
				if (iParam1 > Global_262145.f_7116)
				{
					iParam1 = Global_262145.f_7116;
				}
				Global_2738587.f_284 = iParam1;
				Global_2738587.f_285 = 0;
			}
		}
	}
}

int func_251()
{
	if (MISC::IS_PC_VERSION() && Global_1977964 == 0)
	{
		return 0;
	}
	return 0;
}

void func_252(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	if (func_18(NETWORK::PARTICIPANT_ID_TO_INT(), 1))
	{
		iVar1 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT((Local_640.f_1 - iLocal_329)) / 60f) / 1000f));
		if (iVar1 > Global_262145.f_12109)
		{
			iVar1 = Global_262145.f_12109;
		}
		else if (iVar1 < 1)
		{
			iVar1 = 1;
		}
		iVar0 = (func_290() * iVar1);
		*uParam1 = (func_289() * iVar1);
		fVar2 = func_288();
		if (fVar2 > 0f && !BitTest(Local_640.f_2, 0))
		{
			iVar3 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_29(1)) / 60f) / 1000f));
			if (iVar3 > func_287())
			{
				iVar3 = func_287();
			}
			iVar4 = Local_640.f_51;
			if (iVar4 > func_286())
			{
				iVar4 = func_286();
			}
			*uParam0 = (*uParam0 + SYSTEM::ROUND((IntToFloat(func_279(func_285(), func_284(), iVar3, fVar2, func_283(), func_282(), func_281(), iVar4)) * Global_262145.f_12122)));
			*uParam1 = (*uParam1 + SYSTEM::ROUND((IntToFloat(func_279(func_278(), func_277(), iVar3, fVar2, func_283(), func_282(), func_281(), iVar4)) * Global_262145.f_12123)));
		}
		else
		{
			func_275(1);
		}
	}
	else
	{
		func_275(0);
	}
	func_253(uParam0, 1);
	*uParam0 = (*uParam0 + iVar0);
}

void func_253(var uParam0, int iParam1)
{
	int iVar0;
	
	if (*uParam0 > 0)
	{
		if (!func_274())
		{
			if (func_273(0))
			{
				if (!func_269(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_268()))
					{
						if (func_267() == 100)
						{
							iVar0 = *uParam0;
							*uParam0 = 0;
						}
						else
						{
							iVar0 = ((*uParam0 / 100) * func_267());
							*uParam0 = (*uParam0 - iVar0);
						}
						func_265(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_258("GB_BCUT_TICK1", func_268(), iVar0, 0, 0, 1);
						}
						func_257(20);
						func_254(func_268(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_254(bool bParam0, int iParam1, int iParam2)
{
	struct<9> Var0;
	
	if (func_12(bParam0, 0, 1))
	{
		Var0.f_0 = -1141119736;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_3 = iParam1;
		Var0.f_5 = iParam2;
		Var0.f_6 = func_256(bParam0);
		func_255(&(Var0.f_7), &(Var0.f_8));
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 9, func_248(bParam0), Var0.f_0);
	}
}

void func_255(var uParam0, var uParam1)
{
	*uParam0 = Global_1916087.f_9;
	*uParam1 = Global_1916087.f_10;
}

var func_256(bool bParam0)
{
	return Global_1886967[bParam0 /*609*/].f_511;
}

void func_257(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2738587.f_5234.f_7[iVar0]), bVar1);
}

int func_258(char* sParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_70(bParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_263(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_259(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_259(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_262() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_14(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_260(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1936604.f_5[iVar0 /*53*/] = iParam0;
		Global_1936604.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1936604.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1936604.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1936604.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1936604.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1936604.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1936604.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1936604.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1936604.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1936604.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1936604.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_260(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1936604 - 1))
	{
		if (iParam0 > Global_1936604.f_5[iVar0 /*53*/].f_1)
		{
			func_261(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1936604++;
	if (Global_1936604 > 5)
	{
		Global_1936604 = 5;
		return Global_1936604;
	}
	return (Global_1936604 - 1);
}

void func_261(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1936604.f_5[iVar0 /*53*/] = { Global_1936604.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_262()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

var func_263(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_264(&cVar0);
}

var func_264(char[4] cParam0)
{
	return cParam0;
}

void func_265(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_266(1);
	}
	else
	{
		iVar1 = func_266(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_266(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_13065;
}

int func_267()
{
	return Global_262145.f_13064;
}

bool func_268()
{
	return Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10;
}

bool func_269(bool bParam0)
{
	return func_270(PLAYER::PLAYER_ID(), bParam0);
}

int func_270(bool bParam0, bool bParam1)
{
	return func_271(bParam0, bParam1, 1);
}

int func_271(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_17(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_272(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1886967[iParam0 /*609*/].f_10;
	if (iVar0 != func_113() && Global_1886967[iVar0 /*609*/].f_10.f_429 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_272(bool bParam0, int iParam1)
{
	if (func_17(bParam0))
	{
		if (Global_1886967[bParam0 /*609*/].f_10 != func_113())
		{
			if (Global_1886967[bParam0 /*609*/].f_10 == bParam0 && Global_1886967[bParam0 /*609*/].f_10.f_429 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_273(bool bParam0)
{
	return func_92(PLAYER::PLAYER_ID(), bParam0);
}

bool func_274()
{
	return func_93(PLAYER::PLAYER_ID());
}

void func_275(bool bParam0)
{
	if (bParam0)
	{
		if (func_276(1))
		{
			MISC::SET_BIT(&Global_1836966, true);
		}
	}
	else if (func_276(2))
	{
		MISC::SET_BIT(&Global_1836966, 2);
	}
}

int func_276(int iParam0)
{
	var uVar0;
	
	uVar0 = func_215(2537, -1);
	if (iParam0 == 0)
	{
		if ((BitTest(uVar0, 0) && BitTest(uVar0, 1)) && BitTest(uVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((BitTest(uVar0, 3) && BitTest(uVar0, 4)) && BitTest(uVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((BitTest(uVar0, 6) && BitTest(uVar0, 7)) && BitTest(uVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((BitTest(uVar0, 9) && BitTest(uVar0, 10)) && BitTest(uVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_277()
{
	return Global_262145.f_11609;
}

int func_278()
{
	return Global_262145.f_11607;
}

int func_279(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return func_280(SYSTEM::ROUND(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_280(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = (iParam0 / iParam1);
	iVar0 = (iVar0 * iParam1);
	iVar1 = (iVar0 + iParam1);
	iVar2 = (iParam0 - iVar0);
	iVar3 = (iVar1 - iParam0);
	if (iVar2 >= iVar3)
	{
		if (iParam2 == 1)
		{
		}
		return iVar1;
	}
	if (iParam2 == 1)
	{
	}
	return iVar0;
}

float func_281()
{
	return Global_262145.f_11612;
}

float func_282()
{
	return Global_262145.f_11611;
}

float func_283()
{
	return Global_262145.f_11610;
}

int func_284()
{
	return Global_262145.f_11608;
}

int func_285()
{
	return Global_262145.f_11606;
}

int func_286()
{
	return Global_262145.f_12014;
}

int func_287()
{
	return Global_262145.f_12013;
}

var func_288()
{
	if (func_21(0))
	{
		return Global_262145.f_11633;
	}
	if (func_21(1))
	{
		return Global_262145.f_11634;
	}
	if (func_21(2))
	{
		return Global_262145.f_11635;
	}
	return Global_262145.f_11636;
}

int func_289()
{
	return Global_262145.f_11605;
}

int func_290()
{
	return Global_262145.f_11604;
}

void func_291()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	char* sVar5;
	
	if (!BitTest(Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1, 1) && (func_303() || BitTest(Local_640.f_2, 0)))
	{
		if (func_68(func_302()))
		{
			func_301();
		}
		if (func_12(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!BitTest(Local_640.f_2, 0))
			{
				if (func_343(0))
				{
					iVar2 = Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4;
					func_297(&iVar0, &fVar1, iVar2, 1);
					if (func_21(0))
					{
						if (func_19())
						{
							func_295(64, func_296(Local_640.f_3, 0, 0, 0), "AMCH_WINNER", "AMCH_WIN", 15000, -1, fVar1, func_410(Local_640.f_3), 1, 2, 0);
						}
						else if (func_294())
						{
							func_295(69, func_296(Local_640.f_3, 0, 0, 0), "AMCH_WINNER_T", "AMCH_WIN", 15000, iVar0, -1f, func_410(Local_640.f_3), 1, 2, 0);
						}
						else
						{
							func_295(64, func_296(Local_640.f_3, 0, 0, iVar0), "AMCH_WINNER", "AMCH_WIN", 15000, iVar0, -1f, func_410(Local_640.f_3), 1, 2, 0);
						}
					}
					else if (func_21(1))
					{
						if (func_19())
						{
							func_295(67, func_296(Local_640.f_3, 0, 0, 0), "AMCH_2ND", "AMCH_OVER", 15000, -1, fVar1, func_410(Local_640.f_3), 1, 2, 0);
						}
						else if (func_294())
						{
							func_295(75, func_296(Local_640.f_3, 0, 0, 0), "AMCH_2ND_T", "AMCH_OVER", 15000, iVar0, -1f, func_410(Local_640.f_3), 1, 2, 0);
						}
						else
						{
							func_295(67, func_296(Local_640.f_3, 0, 0, iVar0), "AMCH_2ND", "AMCH_OVER", 15000, iVar0, -1f, func_410(Local_640.f_3), 1, 2, 0);
						}
					}
					else if (func_21(2))
					{
						if (func_19())
						{
							func_295(67, func_296(Local_640.f_3, 0, 0, 0), "AMCH_3RD", "AMCH_OVER", 15000, -1, fVar1, func_410(Local_640.f_3), 1, 2, 0);
						}
						else if (func_294())
						{
							func_295(75, func_296(Local_640.f_3, 0, 0, 0), "AMCH_3RD_T", "AMCH_OVER", 15000, iVar0, -1f, func_410(Local_640.f_3), 1, 2, 0);
						}
						else
						{
							func_295(67, func_296(Local_640.f_3, 0, 0, iVar0), "AMCH_3RD", "AMCH_OVER", 15000, iVar0, -1f, func_410(Local_640.f_3), 1, 2, 0);
						}
					}
					else
					{
						iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_640.f_4[0]);
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
						{
							bVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
							if (Local_2607[Local_640.f_4[0] /*12*/].f_3 < 4)
							{
								return;
							}
							iVar2 = Local_2607[Local_640.f_4[0] /*12*/].f_4;
							func_297(&iVar0, &fVar1, iVar2, 1);
							sVar5 = "AMCH_LOSE";
							if (func_19())
							{
								func_293(76, func_113(), func_296(Local_640.f_3, 0, 0, 0), sVar5, "AMCH_OVER", 15000, func_410(Local_640.f_3), -1, fVar1, 1, 2, PLAYER::GET_PLAYER_NAME(bVar4));
							}
							else if (func_294())
							{
								func_293(77, func_113(), func_296(Local_640.f_3, 0, 0, 0), "AMCH_LOSE_T", "AMCH_OVER", 15000, func_410(Local_640.f_3), iVar0, -1082130432, 1, 2, PLAYER::GET_PLAYER_NAME(bVar4));
							}
							else
							{
								func_293(76, func_113(), func_296(Local_640.f_3, 0, 0, iVar0), sVar5, "AMCH_OVER", 15000, func_410(Local_640.f_3), iVar0, -1082130432, 1, 2, PLAYER::GET_PLAYER_NAME(bVar4));
							}
						}
					}
				}
				else
				{
					func_53(66, "AMCH_OVER", "AMCH_NOWIN", 1, 15000, 2, 1, 0);
				}
			}
			else
			{
				func_52("", "", 1);
			}
			MISC::SET_BIT(&(Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), true);
			func_292(133);
		}
	}
}

void func_292(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

int func_293(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, char* sParam11)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_116(iParam0, &Var0, iParam7, sParam3, sParam4);
	Var0.f_17 = iParam1;
	StringCopy(&(Var0.f_57), sParam2, 16);
	StringCopy(&(Var0.f_61), sParam6, 16);
	StringCopy(&(Var0.f_25), sParam11, 64);
	Var0.f_6 = iParam5;
	Var0.f_7 = fParam8;
	Var0.f_71 = iParam9;
	Var0.f_72 = iParam10;
	return func_54(&Var0);
}

int func_294()
{
	return 0;
}

int func_295(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_116(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = fParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		func_114(&(Var0.f_69), iParam10);
	}
	return func_54(&Var0);
}

char* func_296(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_297(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	if (func_19())
	{
		if (bParam3)
		{
			*fParam1 = (func_298(Local_640.f_3, iParam2) / 10f);
		}
		else
		{
			*fParam1 = (SYSTEM::TO_FLOAT(iParam2) / 10f);
		}
		return 1;
	}
	*iParam0 = iParam2;
	return 0;
}

float func_298(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_300(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_299(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_299(float fParam0)
{
	return (fParam0 * 1.609344f);
}

float func_300(float fParam0)
{
	return (fParam0 / 0.3048f);
}

void func_301()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2672741.f_2518[iVar0 /*80*/].f_2 != 0)
		{
			Global_2672741.f_2518[iVar0 /*80*/].f_2 = 5;
			func_114(&(Global_2672741.f_2518[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

int func_302()
{
	return Global_2672741.f_2518[0 /*80*/].f_1;
}

var func_303()
{
	return BitTest(Global_1836941.f_1, 25);
}

int func_304(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if ((((*uParam0 > 0 && !func_315()) && !(func_123(PLAYER::PLAYER_ID(), 0) && (func_119(PLAYER::PLAYER_ID()) || func_314(PLAYER::PLAYER_ID())))) && !func_312(PLAYER::PLAYER_ID())) && !func_311(PLAYER::PLAYER_ID()))
	{
		func_310();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_48(&(uParam0->f_3)))
			{
				func_2(&(uParam0->f_3), 0, 0);
			}
			else if (func_1(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1836941.f_1), 25);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2738587.f_4694), false);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_309(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_48(&(uParam0->f_5)))
			{
				if (func_1(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_306();
				func_309(uParam0, 2);
			}
			break;
		
		case 2:
			func_306();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_305("AMEV_LBD_HELP"))
				{
					HUD::CLEAR_HELP(true);
				}
				func_309(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2738587.f_4694), true);
				func_309(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			MISC::CLEAR_BIT(&(Global_2738587.f_4694), true);
			return 1;
	}
	return 0;
}

bool func_305(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_306()
{
	if (BitTest(Global_2738587.f_4694, 0))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2738587.f_853, 2)) && func_12(PLAYER::PLAYER_ID(), 1, 1)) && !Global_76369) && !Global_61219) && !CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::SET_BIT(&(Global_2738587.f_4694), true);
			func_308("AMEV_LBD_HELP", -1);
			func_307(1);
			MISC::CLEAR_BIT(&(Global_2738587.f_4694), false);
		}
	}
}

void func_307(int iParam0)
{
	HUD::SET_HELP_MESSAGE_STYLE(3, 21, 200, 0, 0);
	if (iParam0 && !func_315())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

void func_308(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
}

void func_309(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_310()
{
	Global_2697830 = 1;
}

int func_311(bool bParam0)
{
	if (bParam0 != func_113())
	{
		return BitTest(Global_2657921[bParam0 /*463*/].f_321.f_5, 4);
	}
	return 0;
}

int func_312(bool bParam0)
{
	int iVar0;
	
	if (bParam0 != func_113())
	{
		if (func_12(bParam0, 1, 1))
		{
			if (Global_2657921[bParam0 /*463*/].f_321.f_7 != -1)
			{
				iVar0 = func_313(Global_2657921[bParam0 /*463*/].f_321.f_7);
				return (iVar0 == 2 || iVar0 == 25);
			}
		}
	}
	return 0;
}

int func_313(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 26;
			break;
		
		case 161:
			return 27;
			break;
		
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
			break;
	}
	return -1;
}

bool func_314(bool bParam0)
{
	return func_118(bParam0, 19);
}

bool func_315()
{
	return Global_2672741.f_2518[0 /*80*/].f_1 != 0;
}

void func_316()
{
	bool bVar0[3];
	bool bVar4;
	var uVar5[3];
	var uVar9[3];
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	bool bVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	var uVar26[3];
	int iVar30;
	int iVar31;
	bool bVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	
	if (Local_640.f_4[0] > -1)
	{
		iVar20 = 0;
		bVar21 = (func_340() && !func_111(PLAYER::PLAYER_ID()));
		iVar16 = 0;
		while (iVar16 < 3)
		{
			bVar0[iVar16] = func_113();
			iVar16++;
		}
		iVar16 = 0;
		while (iVar16 < 3)
		{
			if (Local_640.f_4[iVar16] > -1)
			{
				iVar30 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_640.f_4[iVar16]);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar30))
				{
					bVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar30);
					if (func_12(bVar4, 0, 1))
					{
						if (!func_14(bVar4, 0))
						{
							if (Local_2607[Local_640.f_4[iVar16] /*12*/].f_4 != 0)
							{
								bVar0[iVar24] = bVar4;
								func_297(&(uVar5[iVar24]), &(uVar9[iVar24]), Local_2607[Local_640.f_4[iVar16] /*12*/].f_4, 1);
								iVar24++;
								if (func_273(1))
								{
									if (func_92(bVar4, 1))
									{
										uVar26[iVar16] = func_70(bVar4, -2, 0, 0, 0);
									}
								}
							}
						}
					}
				}
			}
			iVar16++;
		}
		iVar17 = NETWORK::PARTICIPANT_ID_TO_INT();
		if (func_111(PLAYER::PLAYER_ID()))
		{
			iVar31 = func_338();
			bVar32 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar31);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar32))
			{
				iVar33 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar32);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar33))
				{
					iVar17 = iVar33;
				}
			}
		}
		func_297(&iVar13, &fVar18, iLocal_333, 1);
		func_297(&iVar14, &fVar19, Local_2607[iVar17 /*12*/].f_4, 1);
		iVar34 = func_29(0);
		iVar35 = func_558(&(Local_640.f_39), 0, 0);
		iVar15 = func_556(0, (iVar34 - iVar35));
		if (func_18(-1, 0))
		{
			func_335(iVar15);
		}
		if (iVar15 > 30000)
		{
			iVar22 = 1;
		}
		else
		{
			iVar22 = 6;
		}
		if (BitTest(uLocal_331, 2))
		{
			iVar23 = 2000;
		}
		else
		{
			iVar23 = 0;
		}
		if (func_340() || Local_640.f_3 == 6)
		{
			iVar25 = 2;
		}
		else
		{
			iVar25 = 1;
		}
		if (Local_640.f_37 >= 4)
		{
			iVar15 = 0;
		}
		if (func_19())
		{
			func_331(bVar0[0], bVar0[1], bVar0[2], uVar9[0], uVar9[1], uVar9[2], fVar18, fVar19, iVar15, func_296(Local_640.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_332(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		else if (func_294())
		{
			func_330(bVar0[0], bVar0[1], bVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, &iVar20, iVar22, bVar21, iVar23, func_332(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		else
		{
			func_321(bVar0[0], bVar0[1], bVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, func_296(Local_640.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_332(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		func_317();
	}
}

void func_317()
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	fVar0 = func_320();
	if (fVar0 >= 0f)
	{
		if (Local_640.f_37 == 3)
		{
			if (func_12(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
					{
						func_319(iVar1, &fLocal_337);
						fVar2 = (fVar0 + fLocal_337);
						HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(fVar2, true, 21);
						func_318(fVar0);
						return;
					}
				}
			}
		}
		if (func_305("AMCH_FLYLOW"))
		{
			HUD::CLEAR_HELP(true);
		}
		if (BitTest(uLocal_331, 4))
		{
			AUDIO::STOP_SOUND(iLocal_339);
			MISC::CLEAR_BIT(&uLocal_331, 4);
		}
		HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(0f, false, 21);
	}
}

void func_318(float fParam0)
{
	float fVar0;
	
	if (STATS::STAT_GET_FLYING_ALTITUDE(&fVar0))
	{
		if (fVar0 > fParam0)
		{
			func_559(6);
			if (!BitTest(uLocal_331, 4))
			{
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_339, "Altitude_Warning", "EXILE_1", true);
				MISC::SET_BIT(&uLocal_331, 4);
			}
		}
		else
		{
			if (func_305("AMCH_FLYLOW"))
			{
				HUD::CLEAR_HELP(true);
			}
			if (BitTest(uLocal_331, 4))
			{
				AUDIO::STOP_SOUND(iLocal_339);
				MISC::CLEAR_BIT(&uLocal_331, 4);
			}
		}
	}
}

float func_319(int iParam0, float* fParam1)
{
	float fVar0;
	struct<3> Var1;
	var uVar4;
	
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, fParam1, true, false);
	MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &uVar4, false, false);
	if (STATS::STAT_IS_PLAYER_VEHICLE_ABOVE_OCEAN())
	{
		func_559(3);
		MISC::SET_BIT(&uLocal_331, 10);
		func_28(&uLocal_327, 0, 0);
	}
	else if (BitTest(uLocal_331, 10))
	{
		if (func_1(&uLocal_327, 2000, 0))
		{
			MISC::CLEAR_BIT(&uLocal_331, 10);
		}
	}
	if (*fParam1 < 0f)
	{
		*fParam1 = 0f;
	}
	fVar0 = (Var1.f_2 - *fParam1);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 * -1f);
	}
	return fVar0;
}

float func_320()
{
	switch (Local_640.f_3)
	{
		case 11:
			return 20f;
		
		case 12:
			return 100f;
		
		default:
	}
	return -1f;
}

void func_321(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_327(0) == 0)
	{
		return;
	}
	func_326();
	iVar1 = 0;
	if (((Global_2697320[0] != iParam0 || Global_2697320[1] != iParam1) || Global_2697320[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2697320[0] = iParam0;
	Global_2697320[1] = iParam1;
	Global_2697320[2] = iParam2;
	Global_2697320[3] = 0;
	Global_2697320[4] = 0;
	if (Global_2697320[0] != func_113())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2697320[0]);
			Global_2697326[0 /*16*/] = { func_325(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_322(iParam3, &(Global_2697326[0 /*16*/]), -1, 109, 8, 1, sParam9, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, iParam16, 255, 0, 0, 0, 0, 1, -1, 0);
		}
	}
	if (Global_2697320[1] != func_113())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2697320[1]);
			Global_2697326[1 /*16*/] = { func_325(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_322(iParam4, &(Global_2697326[1 /*16*/]), -1, 108, 7, 1, sParam9, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, iParam17, 255, 0, 0, 0, 0, 1, -1, 0);
		}
	}
	if (Global_2697320[2] != func_113())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2697320[2]);
			Global_2697326[2 /*16*/] = { func_325(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_322(iParam5, &(Global_2697326[2 /*16*/]), -1, 107, 6, 1, sParam9, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, iParam18, 255, 0, 0, 0, 0, 1, -1, 0);
		}
	}
	if (bParam12)
	{
		func_322(iParam6, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 0, 0, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1, 0);
	}
	switch (iParam15)
	{
		case 0:
			if (PLAYER::PLAYER_ID() != func_113())
			{
				if (func_174(PLAYER::PLAYER_ID()) == 0)
				{
					func_322(iParam7, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), -1, 1, 4, 1, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1, 0);
				}
			}
			break;
		
		case 1:
			if (func_174(PLAYER::PLAYER_ID()) == 0)
			{
				func_322(iParam7, "HUD_USCORE", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1, 0);
			}
			break;
		
		case 2:
			if (func_174(PLAYER::PLAYER_ID()) == 0)
			{
				func_322(iParam7, "HUD_UBEST", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1, 0);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_226(sParam14))
	{
		sVar2 = sParam14;
	}
	func_155(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	*iParam10 = 0;
	func_154();
}

void func_322(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_157(6, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1669875.f_1 = 1;
		func_156(6, bVar0);
		Global_1669875.f_4085[bVar0] = iParam0;
		StringCopy(&(Global_1669875.f_4085.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1669875.f_4085.f_183[bVar0] = iParam3;
		Global_1669875.f_4085.f_172[bVar0] = iParam2;
		Global_1669875.f_4085.f_260[bVar0] = iParam4;
		Global_1669875.f_4085.f_271[bVar0] = iParam5;
		StringCopy(&(Global_1669875.f_4085.f_282[bVar0 /*16*/]), sParam6, 64);
		Global_1669875.f_4085.f_443[bVar0] = iParam7;
		Global_1669875.f_4085.f_454[bVar0] = fParam8;
		Global_1669875.f_4085.f_497[bVar0] = iParam9;
		Global_1669875.f_4085.f_508[bVar0] = iParam10;
		Global_1669875.f_4085.f_205[bVar0] = iParam11;
		Global_1669875.f_4085.f_216[bVar0] = iParam12;
		Global_1669875.f_4085.f_227[bVar0] = iParam13;
		Global_1669875.f_4085.f_238[bVar0] = iParam14;
		Global_1669875.f_4085.f_249[bVar0] = iParam15;
		Global_1669875.f_4085.f_519[bVar0] = iParam16;
		Global_1669875.f_4085.f_530[bVar0] = iParam17;
		Global_1669875.f_4085.f_541[bVar0] = iParam18;
		Global_1669875.f_4085.f_552[bVar0] = iParam19;
		Global_1669875.f_4085.f_563[bVar0] = iParam20;
		Global_1669875.f_4085.f_574[bVar0] = iParam21;
		Global_1669875.f_4085.f_585[bVar0] = iParam22;
		Global_1669875.f_4085.f_596[bVar0] = iParam23;
		Global_1669875.f_4085.f_607[bVar0] = iParam24;
		Global_1669875.f_4085.f_194[bVar0] = iParam25;
		Global_1669875.f_4085.f_618[bVar0] = iParam26;
		if (iParam15 == 5 && func_324())
		{
			Global_1669875.f_1172 = 1;
		}
		if (MISC::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1669875.f_1176 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1669875.f_1175 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1669875.f_1172 = 1;
			}
			if (func_323())
			{
				Global_1669875.f_1176 = 1;
			}
		}
	}
}

int func_323()
{
	int iVar0;
	var uVar1;
	
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_324()
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

struct<16> func_325(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_326()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2697833 = 1;
}

int func_327(bool bParam0)
{
	if (func_329())
	{
		return 0;
	}
	if (func_328())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_12(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_328()
{
	return Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_192 != 0;
}

bool func_329()
{
	return BitTest(Global_2621446, 12);
}

void func_330(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_327(0) == 0)
	{
		return;
	}
	func_326();
	iVar1 = 0;
	if (((Global_2697320[0] != iParam0 || Global_2697320[1] != iParam1) || Global_2697320[2] != iParam2) || *iParam9)
	{
		iVar1 = 1;
	}
	Global_2697320[0] = iParam0;
	Global_2697320[1] = iParam1;
	Global_2697320[2] = iParam2;
	Global_2697320[3] = 0;
	Global_2697320[4] = 0;
	if (Global_2697320[0] != func_113())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2697320[0]);
			Global_2697326[0 /*16*/] = { func_325(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_155(iParam3, &(Global_2697326[0 /*16*/]), 0, 0, -1, 0, 8, 1, 109, 0, 0, 0, 109, 0, iParam15, 0, 0, -1);
		}
	}
	if (Global_2697320[1] != func_113())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2697320[1]);
			Global_2697326[1 /*16*/] = { func_325(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_155(iParam4, &(Global_2697326[1 /*16*/]), 0, 0, -1, 0, 7, 1, 108, 0, 0, 0, 108, 0, iParam16, 0, 0, -1);
		}
	}
	if (Global_2697320[2] != func_113())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2697320[2]);
			Global_2697326[2 /*16*/] = { func_325(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_155(iParam5, &(Global_2697326[2 /*16*/]), 0, 0, -1, 0, 6, 1, 107, 0, 0, 0, 107, 0, iParam17, 0, 0, -1);
		}
	}
	if (bParam11)
	{
		func_155(iParam6, "HUD_ATTEMPTS", 0, 0, -1, 0, 5, 0, 1, 1, iParam12, 0, 0, 0, 0, 0, 0, -1);
	}
	switch (iParam14)
	{
		case 0:
			if (PLAYER::PLAYER_ID() != func_113())
			{
				if (func_174(PLAYER::PLAYER_ID()) == 0)
				{
					func_155(iParam7, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 0, 0, -1, 0, 4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
			}
			break;
		
		case 1:
			if (func_174(PLAYER::PLAYER_ID()) == 0)
			{
				func_155(iParam7, "HUD_USCORE", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			break;
		
		case 2:
			if (func_174(PLAYER::PLAYER_ID()) == 0)
			{
				func_155(iParam7, "HUD_UBEST", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_226(sParam13))
	{
		sVar2 = sParam13;
	}
	func_155(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam10, 0, 0, 0, iParam10, 0, 0, 0, 0, -1);
	*iParam9 = 0;
	func_154();
}

void func_331(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, var uParam16, var uParam17, var uParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_327(0) == 0)
	{
		return;
	}
	func_326();
	iVar1 = 0;
	if (((Global_2697320[0] != iParam0 || Global_2697320[1] != iParam1) || Global_2697320[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2697320[0] = iParam0;
	Global_2697320[1] = iParam1;
	Global_2697320[2] = iParam2;
	Global_2697320[3] = 0;
	Global_2697320[4] = 0;
	if (Global_2697320[0] != func_113())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2697320[0]);
			Global_2697326[0 /*16*/] = { func_325(1, sVar0) };
		}
		if (fParam3 > 0f)
		{
			func_322(-1, &(Global_2697326[0 /*16*/]), -1, 109, 8, 1, sParam9, 1, fParam3, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam16, 255, 0, 0, 0, 0, 1, -1, 0);
		}
	}
	if (Global_2697320[1] != func_113())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2697320[1]);
			Global_2697326[1 /*16*/] = { func_325(2, sVar0) };
		}
		if (fParam4 > 0f)
		{
			func_322(-1, &(Global_2697326[1 /*16*/]), -1, 108, 7, 1, sParam9, 1, fParam4, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam17, 255, 0, 0, 0, 0, 1, -1, 0);
		}
	}
	if (Global_2697320[2] != func_113())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2697320[2]);
			Global_2697326[2 /*16*/] = { func_325(3, sVar0) };
		}
		if (fParam5 > 0f)
		{
			func_322(-1, &(Global_2697326[2 /*16*/]), -1, 107, 6, 1, sParam9, 1, fParam5, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam18, 255, 0, 0, 0, 0, 1, -1, 0);
		}
	}
	if (bParam12)
	{
		func_322(-1, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 1, fParam6, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1, 0);
	}
	switch (iParam15)
	{
		case 0:
			if (PLAYER::PLAYER_ID() != func_113())
			{
				if (func_174(PLAYER::PLAYER_ID()) == 0)
				{
					func_322(-1, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), -1, 1, 4, 1, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1, 0);
				}
			}
			break;
		
		case 1:
			if (func_174(PLAYER::PLAYER_ID()) == 0)
			{
				func_322(-1, "HUD_USCORE", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1, 0);
			}
			break;
		
		case 2:
			if (func_174(PLAYER::PLAYER_ID()) == 0)
			{
				func_322(-1, "HUD_UBEST", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1, 0);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_226(sParam14))
	{
		sVar2 = sParam14;
	}
	if (iParam8 != -10)
	{
		func_155(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	}
	*iParam10 = 0;
	func_154();
}

char* func_332()
{
	return "HUD_COUNTDOWN";
	switch (func_334(PLAYER::PLAYER_ID()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_333())
			{
				case 0:
					return "AET_CHALL_LJ";
				
				case 1:
					return "AET_CHALL_LS";
				
				case 2:
					return "AET_CHALL_HS";
				
				case 3:
					return "AET_CHALL_LST";
				
				case 4:
					return "AET_CHALL_LW";
				
				case 5:
					return "AET_CHALL_NC";
				
				case 6:
					return "AET_CHALL_LP";
				
				case 7:
					return "AET_CHALL_VS";
				
				case 8:
					return "AET_CHALL_NM";
				
				case 9:
					return "AET_CHALL_RD";
				
				case 10:
					return "AET_CHALL_LF";
				
				case 11:
					return "AET_CHALL_LFL";
				
				case 12:
					return "AET_CHALL_LFI";
				
				case 13:
					return "AET_CHALL_LB";
				
				case 14:
					return "AET_CHALL_MB";
				
				case 15:
					return "AET_CHALL_HSH";
				
				case 16:
					return "AET_CHALL_DB";
				
				case 17:
					return "AET_CHALL_ML";
				
				case 18:
					return "AET_CHALL_LSN";
				
				default:
			}
			break;
		
		case 136:
			return "AET_PENNED";
		
		case 138:
			return "AET_PARCEL";
		
		case 139:
			return "AET_PROPERTY";
		
		case 140:
			return "AET_DDROP";
		
		case 141:
			return "AET_KCASTLE";
		
		case 144:
			return "AET_BLAST";
		
		case 129:
			return "AET_UWARF";
		
		case 146:
			return "AET_BEAST";
	}
	return "";
}

int func_333()
{
	if (func_334(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2738587.f_5152;
	}
	return -1;
}

int func_334(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return Global_1886967[iVar0 /*609*/];
	}
	return -1;
}

void func_335(int iParam0)
{
	if (func_337(PLAYER::PLAYER_ID()) || func_336(PLAYER::PLAYER_ID()) == 146)
	{
		return;
	}
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		if (BitTest(Global_2738587.f_5068, 0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2738587.f_5070)))
			{
				AUDIO::SET_RADIO_TO_STATION_NAME(&(Global_2738587.f_5070));
			}
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
			AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
			if (Global_2738587.f_5078 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2738587.f_5078);
				Global_2738587.f_5078 = -1;
			}
			Global_2738587.f_5068 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (BitTest(Global_2738587.f_5068, 0))
		{
			if (BitTest(Global_2738587.f_5068, 4))
			{
				if (!BitTest(Global_2738587.f_5068, 2))
				{
					if (AUDIO::DOES_PLAYER_VEH_HAVE_RADIO())
					{
						if ((!MISC::ARE_STRINGS_EQUAL(AUDIO::GET_RADIO_STATION_NAME(AUDIO::GET_PLAYER_RADIO_STATION_INDEX()), "OFF") && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2738587.f_5070)))
						{
							StringCopy(&(Global_2738587.f_5070), "", 32);
							AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
							AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
							AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
							AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
							AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
							AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
							MISC::SET_BIT(&(Global_2738587.f_5068), 2);
						}
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && BitTest(Global_2738587.f_5068, 5))
				{
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
				}
			}
			else if (!BitTest(Global_2738587.f_5068, 1))
			{
				if (iParam0 < 10000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_20S");
				}
				else
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S");
				}
				AUDIO::START_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
				MISC::SET_BIT(&(Global_2738587.f_5068), true);
			}
			else if (!BitTest(Global_2738587.f_5068, 4))
			{
				if (iParam0 < 27500)
				{
					if (AUDIO::GET_PLAYER_RADIO_STATION_GENRE() != 0)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !AUDIO::IS_RADIO_FADED_OUT())
						{
							StringCopy(&(Global_2738587.f_5070), AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 32);
							AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
						}
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
						MISC::SET_BIT(&(Global_2738587.f_5068), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!BitTest(Global_2738587.f_5068, 3))
				{
					Global_2738587.f_5078 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Global_2738587.f_5078, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
					MISC::SET_BIT(&(Global_2738587.f_5068), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!BitTest(Global_2738587.f_5068, 0))
			{
				Global_2738587.f_5068 = 0;
				Global_2738587.f_5078 = -1;
				AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
				AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
				AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
				MISC::SET_BIT(&(Global_2738587.f_5068), false);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || BitTest(Global_2738587.f_5068, 2))
				{
					MISC::SET_BIT(&(Global_2738587.f_5068), 2);
					MISC::SET_BIT(&(Global_2738587.f_5068), 5);
				}
				else
				{
					MISC::CLEAR_BIT(&(Global_2738587.f_5068), 5);
					MISC::CLEAR_BIT(&(Global_2738587.f_5068), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!BitTest(Global_2738587.f_5068, 0))
		{
			Global_2738587.f_5068 = 0;
			Global_2738587.f_5078 = -1;
			AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
			MISC::SET_BIT(&(Global_2738587.f_5068), false);
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				MISC::SET_BIT(&(Global_2738587.f_5068), 2);
				MISC::SET_BIT(&(Global_2738587.f_5068), 5);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_2738587.f_5068), 2);
				MISC::CLEAR_BIT(&(Global_2738587.f_5068), 5);
			}
		}
	}
}

int func_336(bool bParam0)
{
	if (bParam0 != func_113() && func_12(bParam0, 1, 1))
	{
		return Global_2657921[bParam0 /*463*/].f_321.f_17;
	}
	return -1;
}

int func_337(bool bParam0)
{
	if (bParam0 != func_113())
	{
		if (func_12(bParam0, 1, 1))
		{
			if (Global_2657921[bParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_313(Global_2657921[bParam0 /*463*/].f_321.f_7) == 19;
			}
		}
	}
	return 0;
}

var func_338()
{
	if (ENTITY::DOES_ENTITY_EXIST(func_339()))
	{
		return func_339();
	}
	return func_108();
}

var func_339()
{
	return Global_2621446.f_3;
}

int func_340()
{
	switch (Local_640.f_3)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 8:
		case 9:
		case 11:
		case 12:
		case 13:
			return 1;
		
		default:
	}
	return 0;
}

void func_341()
{
	int iVar0;
	struct<42> Var1;
	bool bVar43;
	int iVar44;
	
	Var1 = -1;
	Var1.f_22 = -1082130432;
	Var1.f_23 = 3;
	Var1.f_39 = -1;
	Var1.f_41 = -1;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		Local_728.f_534[iVar0 /*42*/] = { Var1 };
		Local_728.f_534[iVar0 /*42*/].f_1 = func_113();
		if (Local_640.f_4[iVar0] > -1)
		{
			iVar44 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_640.f_4[iVar0]);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar44))
			{
				bVar43 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar44);
				if (!func_14(bVar43, 0))
				{
					Local_728.f_534[iVar0 /*42*/] = Local_640.f_4[iVar0];
					Local_728.f_534[iVar0 /*42*/].f_1 = bVar43;
					Local_728.f_534[iVar0 /*42*/].f_7 = Local_2607[Local_640.f_4[iVar0] /*12*/].f_4;
					Local_728.f_534[iVar0 /*42*/].f_31 = -1;
					Local_728.f_1.f_108 = 8;
				}
			}
		}
		iVar0++;
	}
}

void func_342()
{
	MISC::SET_BIT(&(Global_2738587.f_1834), 19);
}

int func_343(int iParam0)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_640.f_4[iParam0];
		if (iVar0 >= 0)
		{
			if (func_22(Local_2607[iVar0 /*12*/].f_4, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_344()
{
}

void func_345()
{
	char* sVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	
	func_297(&iVar1, &fVar2, iLocal_333, 1);
	switch (Local_640.f_3)
	{
		case 2:
			sVar0 = "MP_Highest_Speed_Vehicle_Boost_Scene";
			func_347(sVar0, fVar2 >= 70f);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sVar0))
			{
				fVar2 = func_346(fVar2, 110f);
				fVar2 = ((fVar2 - 70f) / 40f);
				AUDIO::SET_AUDIO_SCENE_VARIABLE(sVar0, "HighestSpeedEngineBoost", fVar2);
			}
			break;
		
		case 8:
			sVar0 = "MP_Near_Miss_High_Score_Boost_Scene";
			fVar4 = STATS::STAT_GET_CURRENT_SPEED();
			bVar3 = (iVar1 >= 30 && fVar4 >= 40f);
			func_347(sVar0, bVar3);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sVar0))
			{
				fVar2 = SYSTEM::TO_FLOAT(iVar1);
				fVar2 = func_346(fVar2, 30f);
				fVar2 = ((fVar2 - 15f) / 15f);
				fVar4 = func_346(fVar4, 70f);
				fVar4 = ((fVar4 - 40f) / 30f);
				AUDIO::SET_AUDIO_SCENE_VARIABLE(sVar0, "VehiclePassByBoost", (fVar2 * fVar4));
			}
			if (iLocal_338 != iLocal_333)
			{
				if (iLocal_333 > 0)
				{
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_340, "Near_Miss_Counter", "GTAO_FM_Events_Soundset", false);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_340, "Count", SYSTEM::TO_FLOAT(iVar1));
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Near_Miss_Counter_Reset", "GTAO_FM_Events_Soundset", false);
				}
			}
			iLocal_338 = iLocal_333;
			break;
	}
	if (func_21(0))
	{
		if (!BitTest(uLocal_331, 3))
		{
			if (func_269(1))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", false);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_FM_Events_Soundset", false);
			}
			MISC::SET_BIT(&uLocal_331, 3);
		}
	}
	else if (BitTest(uLocal_331, 3))
	{
		if (func_269(1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", false);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_FM_Events_Soundset", false);
		}
		MISC::CLEAR_BIT(&uLocal_331, 3);
	}
}

float func_346(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_347(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
		{
			AUDIO::START_AUDIO_SCENE(sParam0);
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
	}
}

void func_348()
{
	int iVar0;
	
	if ((!func_174(PLAYER::PLAYER_ID()) && !func_14(PLAYER::PLAYER_ID(), 0)) && func_12(PLAYER::PLAYER_ID(), 1, 1))
	{
		iVar0 = func_374();
		if (iVar0 != Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4)
		{
			if (func_22(iVar0, iLocal_330) || func_373(iVar0, iLocal_330))
			{
				if (!func_372() || func_1(&uLocal_319, 1000, 0))
				{
					func_28(&uLocal_319, 0, 0);
					iLocal_330 = iVar0;
					Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4 = iVar0;
					func_351();
					if (iLocal_329 == 0)
					{
						iLocal_329 = NETWORK::GET_NETWORK_TIME();
					}
					if (Local_2992.f_11 == 0)
					{
						Local_2992.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
					}
				}
			}
		}
		iLocal_333 = func_349();
	}
}

int func_349()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = -1;
	switch (Local_640.f_3)
	{
		case 0:
			fVar1 = STATS::STAT_GET_CURRENT_JUMP_DISTANCE();
			break;
		
		case 1:
			fVar1 = STATS::STAT_GET_CURRENT_SKYDIVING_DISTANCE();
			break;
		
		case 2:
			fVar1 = STATS::STAT_GET_CURRENT_SPEED();
			break;
		
		case 3:
			fVar1 = STATS::STAT_GET_CURRENT_FRONT_WHEEL_DISTANCE();
			break;
		
		case 4:
			fVar1 = STATS::STAT_GET_CURRENT_REAR_WHEEL_DISTANCE();
			break;
		
		case 5:
			fVar1 = STATS::STAT_GET_CURRENT_DRIVE_NOCRASH_DISTANCE();
			break;
		
		case 8:
			iVar0 = STATS::STAT_GET_CURRENT_NEAR_MISS_NOCRASH_PRECISE();
			break;
		
		case 9:
			fVar1 = STATS::STAT_GET_CURRENT_DRIVING_REVERSE_DISTANCE();
			break;
		
		case 11:
			fVar1 = STATS::STAT_GET_CHALLENGE_FLYING_DIST();
			break;
		
		case 12:
			fVar1 = STATS::STAT_GET_CHALLENGE_FLYING_DIST();
			break;
		
		case 13:
			fVar1 = STATS::STAT_GET_VEHICLE_BAIL_DISTANCE();
			break;
	}
	if (func_19())
	{
		fVar1 = (fVar1 * 10f);
		iVar0 = SYSTEM::ROUND(fVar1);
	}
	iVar2 = MISC::ABSI(iVar0);
	func_350(&iVar2);
	if (iVar2 == iLocal_332)
	{
		if (func_22(iVar2, 0))
		{
			if (!BitTest(uLocal_331, 1))
			{
				func_28(&uLocal_321, 0, 0);
				Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4.f_2 = func_558(&uLocal_321, 0, 0);
				MISC::SET_BIT(&uLocal_331, true);
			}
			else if ((func_558(&uLocal_321, 0, 0) % 1000) == 0)
			{
				Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4.f_2 = func_558(&uLocal_321, 0, 0);
			}
		}
	}
	else
	{
		MISC::CLEAR_BIT(&uLocal_331, true);
	}
	if ((func_22(iLocal_332, 0) && !func_22(iVar2, 0)) && !func_1(&uLocal_323, 2000, 0))
	{
		iVar2 = iLocal_332;
		MISC::SET_BIT(&uLocal_331, 2);
	}
	else
	{
		iLocal_332 = iVar2;
		func_47(&uLocal_323);
		MISC::CLEAR_BIT(&uLocal_331, 2);
	}
	return iVar2;
}

void func_350(int iParam0)
{
	switch (Local_640.f_3)
	{
		case 2:
			if (*iParam0 > 0)
			{
				if (func_12(PLAYER::PLAYER_ID(), 1, 1))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if ((((PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
						{
							*iParam0 = 0;
						}
					}
					else
					{
						*iParam0 = 0;
					}
				}
			}
			break;
	}
}

void func_351()
{
	if (!BitTest(Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1, 2))
	{
		MISC::SET_BIT(&(Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), 2);
		func_352(1);
	}
}

void func_352(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (!BitTest(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1, 7))
		{
			if (((!func_117(PLAYER::PLAYER_ID()) && !func_7(PLAYER::PLAYER_ID())) && !func_174(PLAYER::PLAYER_ID())) && !func_371(PLAYER::PLAYER_ID()))
			{
				if (func_177())
				{
					func_364(2, 0, 1);
					func_363();
				}
				if (func_361(func_362(func_334(PLAYER::PLAYER_ID()))))
				{
					uVar0 = func_215(2483, -1);
					MISC::CLEAR_BIT(&uVar0, func_362(func_334(PLAYER::PLAYER_ID())));
					func_363();
				}
				if (func_360())
				{
					func_363();
				}
				if (func_334(PLAYER::PLAYER_ID()) > -1)
				{
					MISC::SET_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1), 7);
					if (func_359(PLAYER::PLAYER_ID()))
					{
						func_358();
					}
					func_355(func_357(func_334(PLAYER::PLAYER_ID())));
				}
			}
		}
	}
	else if (BitTest(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1, 7))
	{
		MISC::CLEAR_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1), 7);
		func_353();
	}
}

void func_353()
{
	if (func_354())
	{
		MISC::CLEAR_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1), 17);
	}
}

bool func_354()
{
	return BitTest(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1, 17);
}

void func_355(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_9222)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_356() /*5569*/].f_681.f_4243[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574743.f_1[iVar0] == -1)
			{
				Global_1574743.f_1[iVar0] = iParam0;
				Global_1574743 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_356()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_357(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 67;
		
		case 236:
			return 67;
		
		case 133:
			return 69;
		
		default:
	}
	return 68;
}

void func_358()
{
	if (!func_354())
	{
		Global_2738587.f_6910 = NETWORK::GET_NETWORK_TIME();
		MISC::SET_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1), 17);
	}
}

int func_359(bool bParam0)
{
	if (func_334(bParam0) == 236 || func_334(bParam0) == 150)
	{
		return 1;
	}
	return 0;
}

int func_360()
{
	if (Global_2672741.f_951.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_361(var uParam0)
{
	var uVar0;
	
	uVar0 = func_215(2483, -1);
	return (BitTest(uVar0, uParam0) || BitTest(uVar0, 24));
}

int func_362(int iParam0)
{
	switch (iParam0)
	{
		case 132:
			return 11;
		
		case 133:
			return 12;
		
		case 136:
			return 19;
		
		case 138:
			return 14;
		
		case 139:
			return 15;
		
		case 129:
			return 17;
		
		case 141:
			return 18;
		
		case 144:
			return 13;
		
		case 146:
			return 16;
		
		case 236:
			return 20;
		
		case 150:
			return 20;
		
		default:
	}
	return Global_262145.f_24354;
}

void func_363()
{
	if (func_360())
	{
		Global_2672741.f_951.f_16 = 1;
	}
}

void func_364(int iParam0, int iParam1, bool bParam2)
{
	if (func_177())
	{
		if (iParam1 == 1)
		{
			if (Global_2738587.f_4499 == -1)
			{
				Global_2738587.f_4499 = Global_262145.f_27440;
			}
			func_28(&(Global_2738587.f_4497), 0, 0);
			if (bParam2)
			{
				if (Global_2738587.f_4502 == -1)
				{
					Global_2738587.f_4502 = Global_262145.f_27441;
				}
				func_28(&(Global_2738587.f_4500), 0, 0);
			}
			else
			{
				Global_1574582 = 0;
				Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_8 = 0;
				func_370(1);
			}
		}
		else
		{
			Global_1574582 = 0;
			Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_8 = 0;
			func_370(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_369()) && !func_365(PLAYER::PLAYER_ID()))
		{
			Global_1057440 = 0;
		}
		STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(false, -1, -1, iParam0);
	}
}

int func_365(bool bParam0)
{
	if (func_366(bParam0, 1, 0))
	{
		if (Global_1845263[bParam0 /*877*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_366(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_367(bParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1845263[bParam0 /*877*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_367(bool bParam0)
{
	return func_368(bParam0);
}

var func_368(int iParam0)
{
	return BitTest(Global_1845263[iParam0 /*877*/].f_11.f_1, 0);
}

bool func_369()
{
	return Global_2684312.f_841;
}

void func_370(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_177())
		{
			if (func_12(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
			if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
			{
				Global_1574582.f_2 = 0;
				if (bParam0)
				{
					NETWORK::SET_LOCAL_PLAYER_AS_GHOST(false, false);
				}
			}
		}
		else
		{
			if (func_12(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
				{
					NETWORK::SET_LOCAL_PLAYER_AS_GHOST(true, false);
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

int func_371(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2707705;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_372()
{
	switch (Local_640.f_3)
	{
		case 2:
		case 3:
		case 5:
		case 4:
		case 8:
		case 1:
		case 6:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			return 1;
		
		default:
	}
	return 0;
}

int func_373(int iParam0, int iParam1)
{
	if (Local_640.f_3 == 17)
	{
		if (iParam0 < iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_374()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (!func_389())
	{
		if (Local_640.f_3 == 14)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_388(PLAYER::PLAYER_PED_ID(), 0) == -1)
			{
				iVar2 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if ((!func_387(&iVar2, 0) || ENTITY::GET_ENTITY_MODEL(iVar2) != joaat("dodo")) && ENTITY::IS_ENTITY_IN_AIR(iVar2))
				{
					func_380(Local_640.f_3 != 14, 1, 0);
					if (func_379())
					{
						iVar3 = func_378();
						if (iVar3 >= 0)
						{
							if (!BitTest(Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_8[func_377(iVar3)], func_376(iVar3)))
							{
								iLocal_334++;
								MISC::SET_BIT(&(Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_8[func_377(iVar3)]), func_376(iVar3));
							}
						}
					}
					iVar0 = iLocal_334;
				}
			}
		}
		else
		{
			iVar0 = func_375();
		}
	}
	else
	{
		STATS::STAT_GET_RECORDED_VALUE(&fVar1);
		if (func_19())
		{
			fVar1 = (fVar1 * 10f);
		}
		iVar0 = SYSTEM::ROUND(fVar1);
	}
	return MISC::ABSI(iVar0);
}

int func_375()
{
	switch (Local_640.f_3)
	{
		case 14:
			return 0;
		
		case 4:
			return 0;
		
		default:
	}
	return -1;
}

int func_376(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_377(iParam0) * 31);
}

int func_377(int iParam0)
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

int func_378()
{
	return iLocal_96;
}

int func_379()
{
	if (iLocal_103 == 1)
	{
		iLocal_103 = 0;
		return 1;
	}
	return 0;
}

void func_380(bool bParam0, bool bParam1, int iParam2)
{
	func_382(bParam0, iParam2);
	if (bParam1)
	{
		if (Local_304.f_2 < Local_307.f_2)
		{
			Local_304.f_2 = 0f;
		}
		else
		{
			Local_307.f_2 = 0f;
		}
		if (Local_310.f_2 < Local_313.f_2)
		{
			Local_310.f_2 = 0f;
		}
		else
		{
			Local_313.f_2 = 0f;
		}
	}
	switch (iLocal_97)
	{
		case 0:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_107[iLocal_96 /*3*/]) < fLocal_303)
				{
					if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_304, Local_307, fLocal_316, false, true, 0))
							{
								bLocal_98 = true;
								iLocal_97 = 1;
							}
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_310, Local_313, fLocal_316, false, true, 0))
							{
								bLocal_99 = true;
								iLocal_97 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					func_381();
				}
				else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					func_381();
				}
				else if (!ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && !bParam1)
				{
					func_381();
				}
				if (bLocal_98)
				{
					if (iLocal_102)
					{
						if (iLocal_101)
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_304, Local_307, fLocal_316, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_310, Local_313, fLocal_316, false, true, 0))
							{
								func_381();
								iLocal_103 = 1;
							}
						}
						else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_304, Local_307, fLocal_316, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_310, Local_313, fLocal_316, false, true, 0))
						{
							iLocal_101 = 1;
						}
						else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_304, Local_307, fLocal_316, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_310, Local_313, fLocal_316, false, true, 0))
						{
							func_381();
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_304, Local_307, fLocal_316, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_310, Local_313, fLocal_316, false, true, 0))
					{
						iLocal_102 = 1;
					}
					else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_304, Local_307, fLocal_316, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_310, Local_313, fLocal_316, false, true, 0))
					{
						func_381();
					}
				}
				else if (bLocal_99)
				{
					if (iLocal_102)
					{
						if (iLocal_100)
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_304, Local_307, fLocal_316, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_310, Local_313, fLocal_316, false, true, 0))
							{
								func_381();
								iLocal_103 = 1;
							}
						}
						else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_304, Local_307, fLocal_316, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_310, Local_313, fLocal_316, false, true, 0))
						{
							iLocal_100 = 1;
						}
						else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_304, Local_307, fLocal_316, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_310, Local_313, fLocal_316, false, true, 0))
						{
							func_381();
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_304, Local_307, fLocal_316, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_310, Local_313, fLocal_316, false, true, 0))
					{
						iLocal_102 = 1;
					}
					else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_304, Local_307, fLocal_316, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_310, Local_313, fLocal_316, false, true, 0))
					{
						func_381();
					}
				}
			}
			break;
	}
}

void func_381()
{
	bLocal_98 = false;
	bLocal_99 = false;
	iLocal_100 = 0;
	iLocal_101 = 0;
	iLocal_102 = 0;
	iLocal_97 = 0;
}

void func_382(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	Local_104 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	fVar1 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((uParam0 || !func_386(iVar0)) && (uParam1 || !func_385(iVar0)))
		{
			if (func_384(Local_104, Local_107[iVar0 /*3*/], 100f, 0))
			{
				fVar2 = SYSTEM::VDIST(Local_104, Local_107[iVar0 /*3*/]);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iLocal_96 = iVar0;
				}
			}
		}
		iVar0++;
	}
	func_383(iLocal_96);
}

void func_383(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Local_304 = { 1103.014f, -233.0374f, 56.13004f };
			Local_307 = { 1073.191f, -214.8478f, 66.0593f };
			fLocal_316 = 30f;
			Local_310 = { 1093.589f, -248.5926f, 56.88639f };
			Local_313 = { 1063.774f, -230.1425f, 66.67847f };
			break;
		
		case 1:
			Local_304 = { 1044.182f, -324.5904f, 49.33408f };
			Local_307 = { 1016.71f, -307.7383f, 64.81343f };
			fLocal_316 = 30f;
			Local_310 = { 1007.983f, -320.6159f, 48.4543f };
			Local_313 = { 1036.007f, -337.4204f, 64.4808f };
			break;
		
		case 2:
			Local_304 = { 916.599f, -419.8782f, 35.62748f };
			Local_307 = { 910.3793f, -383.8826f, 47.54339f };
			fLocal_316 = 7f;
			Local_310 = { 912.1362f, -420.5161f, 35.38034f };
			Local_313 = { 906.8952f, -384.6779f, 47.24926f };
			break;
		
		case 3:
			Local_304 = { 757.7189f, -472.924f, 19.2535f };
			Local_307 = { 696.5936f, -420.2115f, 35.46084f };
			fLocal_316 = 20.75f;
			Local_310 = { 744.9114f, -480.7373f, 19.06514f };
			Local_313 = { 682.5614f, -429.5533f, 37.0266f };
			break;
		
		case 4:
			Local_304 = { 680.3677f, -581.1792f, 14.2145f };
			Local_307 = { 599.8101f, -528.3059f, 33.40958f };
			fLocal_316 = 45f;
			Local_310 = { 667.3692f, -610.5356f, 13.85401f };
			Local_313 = { 582.8433f, -556.7818f, 33.40335f };
			break;
		
		case 5:
			Local_304 = { 644.2497f, -844.7504f, 12.36707f };
			Local_307 = { 526.8608f, -845.2521f, 35.9896f };
			fLocal_316 = 25f;
			Local_310 = { 644.3659f, -859.3878f, 12.59677f };
			Local_313 = { 526.8615f, -857.5208f, 36.32857f };
			break;
		
		case 6:
			Local_304 = { 634.972f, -1011.64f, 10.92594f };
			Local_307 = { 539.6501f, -1024.017f, 35.95852f };
			fLocal_316 = 25f;
			Local_310 = { 634.9612f, -1029.123f, 10.61846f };
			Local_313 = { 543.4893f, -1038.261f, 35.9593f };
			break;
		
		case 7:
			Local_304 = { 645.7223f, -1191.215f, 10.45198f };
			Local_307 = { 524.3018f, -1197.167f, 39.61172f };
			fLocal_316 = 50f;
			Local_310 = { 645.7223f, -1228.966f, 10.98015f };
			Local_313 = { 521.9379f, -1217.607f, 39.47172f };
			break;
		
		case 8:
			Local_304 = { 642.1216f, -1295.73f, 9.005976f };
			Local_307 = { 568.1702f, -1375.351f, 20.12989f };
			fLocal_316 = 7f;
			Local_310 = { 644.7772f, -1298.168f, 9.128529f };
			Local_313 = { 571.6342f, -1378.644f, 20.35802f };
			break;
		
		case 9:
			Local_304 = { 686.5675f, -1444.71f, 9.065001f };
			Local_307 = { 598.9328f, -1444.438f, 25.68846f };
			fLocal_316 = 25f;
			Local_310 = { 682.3027f, -1429.872f, 9.890836f };
			Local_313 = { 593.8217f, -1432.995f, 25.60072f };
			break;
		
		case 10:
			Local_304 = { 718.7617f, -1734.313f, 9.082874f };
			Local_307 = { 615.0017f, -1725.897f, 27.54585f };
			fLocal_316 = 30f;
			Local_310 = { 717.5355f, -1748.646f, 9.363478f };
			Local_313 = { 614.218f, -1734.848f, 27.35708f };
			break;
		
		case 11:
			Local_304 = { 694.3165f, -2049.806f, 0.009695f };
			Local_307 = { 618.6845f, -2040.014f, 25.83412f };
			fLocal_316 = 30f;
			Local_310 = { 693.1836f, -2063.225f, 0.429037f };
			Local_313 = { 607.5944f, -2055.326f, 26.91816f };
			break;
		
		case 12:
			Local_304 = { 642.6671f, -2494.551f, 0.468485f };
			Local_307 = { 570.1807f, -2513.959f, 11.78794f };
			fLocal_316 = 20f;
			Local_310 = { 647.0339f, -2506.202f, 0.583701f };
			Local_313 = { 571.1415f, -2522.975f, 10.45045f };
			break;
		
		case 13:
			Local_304 = { 691.8235f, -2558.219f, 0.363352f };
			Local_307 = { 645.8863f, -2600.311f, 9.898791f };
			fLocal_316 = 10.25f;
			Local_310 = { 695.7928f, -2561.034f, 0.346731f };
			Local_313 = { 656.3919f, -2601.972f, 9.643657f };
			break;
		
		case 14:
			Local_304 = { 723.6254f, -2562.171f, 0.255647f };
			Local_307 = { 720.752f, -2619.77f, 15.73211f };
			fLocal_316 = 15f;
			Local_310 = { 735.765f, -2561.935f, 0.311182f };
			Local_313 = { 736.1214f, -2618.767f, 15.79061f };
			break;
		
		case 15:
			Local_304 = { 891.4387f, -2603.12f, 0f };
			Local_307 = { 704.4932f, -2634.793f, 45f };
			fLocal_316 = 20f;
			Local_310 = { 893.2578f, -2616.235f, 0f };
			Local_313 = { 707.7261f, -2647.696f, 45f };
			break;
		
		case 16:
			Local_304 = { -2669.587f, 2491.96f, 2.043799f };
			Local_307 = { -2617.765f, 2841.595f, 14.0822f };
			fLocal_316 = 26.5f;
			Local_310 = { -2687.606f, 2494.868f, 2.608733f };
			Local_313 = { -2637.085f, 2846.875f, 14.15988f };
			break;
		
		case 17:
			Local_304 = { -1986.173f, 4521.799f, 0f };
			Local_307 = { -1809.903f, 4699.551f, 53.5088f };
			fLocal_316 = 17f;
			Local_310 = { -1995.668f, 4531.259f, 0f };
			Local_313 = { -1817.543f, 4708.395f, 53.50917f };
			break;
		
		case 18:
			Local_304 = { -526.0265f, 4472.442f, 0f };
			Local_307 = { -505.5714f, 4335.725f, 86.73311f };
			fLocal_316 = 10f;
			Local_310 = { -519.9281f, 4476.346f, 0f };
			Local_313 = { -500.7313f, 4336.389f, 86.71289f };
			break;
		
		case 19:
			Local_304 = { 98.1615f, 3384.489f, 45.45169f };
			Local_307 = { 154.974f, 3350.694f, 30.03358f };
			fLocal_316 = 8f;
			Local_310 = { 152.6802f, 3346.793f, 45.02156f };
			Local_313 = { 95.57188f, 3380.091f, 30.43284f };
			break;
		
		case 20:
			Local_304 = { 147.8606f, 3406.796f, 38.03672f };
			Local_307 = { 126.1329f, 3416.927f, 30.02987f };
			fLocal_316 = 14.5f;
			Local_310 = { 130.0916f, 3425.417f, 38.05672f };
			Local_313 = { 151.8703f, 3415.391f, 30.0578f };
			break;
		
		case 21:
			Local_304 = { 2830.972f, 4967.14f, 34.56013f };
			Local_307 = { 2818.719f, 4992.298f, 51.2909f };
			fLocal_316 = 10f;
			Local_310 = { 2826.767f, 4964.185f, 34.10636f };
			Local_313 = { 2814.216f, 4989.983f, 51.21849f };
			break;
		
		case 22:
			Local_304 = { -151.5764f, 4264.417f, 31.04735f };
			Local_307 = { -193.1962f, 4224.604f, 43.87255f };
			fLocal_316 = 10f;
			Local_310 = { -148.3842f, 4261.071f, 31.57409f };
			Local_313 = { -190.4719f, 4222.076f, 43.95443f };
			break;
		
		case 23:
			Local_304 = { -426.6919f, 2964.272f, 14.848f };
			Local_307 = { -396.2298f, 2959.278f, 23.50637f };
			fLocal_316 = 7f;
			Local_310 = { -425.0283f, 2967.861f, 15.22699f };
			Local_313 = { -395.6073f, 2962.607f, 24.38079f };
			break;
		
		case 24:
			Local_304 = { -192.3414f, 2864.916f, 30.72595f };
			Local_307 = { -170.1509f, 2857.128f, 43.94182f };
			fLocal_316 = 10f;
			Local_310 = { -192.0129f, 2871.603f, 29.99943f };
			Local_313 = { -169.5957f, 2863.838f, 44.03251f };
			break;
		
		case 25:
			Local_304 = { 2539.185f, 2228.772f, 18.6102f };
			Local_307 = { 2574.373f, 2169.401f, 27.26598f };
			fLocal_316 = 10f;
			Local_310 = { 2543.708f, 2231.402f, 18.331f };
			Local_313 = { 2578.079f, 2171.584f, 27.26057f };
			break;
		
		case 26:
			Local_304 = { 2954.087f, 815.7209f, 0.037901f };
			Local_307 = { 2933.189f, 796.4688f, 12.98392f };
			fLocal_316 = 35f;
			Local_310 = { 2966.123f, 806.8889f, 0.544056f };
			Local_313 = { 2950.801f, 786.7816f, 11.74596f };
			break;
		
		case 27:
			Local_304 = { 2329.673f, -459.6648f, 70.24277f };
			Local_307 = { 2413.384f, -361.2188f, 91.77886f };
			fLocal_316 = 12f;
			Local_310 = { 2324.752f, -455.5238f, 70.25145f };
			Local_313 = { 2407.409f, -356.2003f, 91.43083f };
			break;
		
		case 28:
			Local_304 = { 1943.428f, -753.251f, 80.17905f };
			Local_307 = { 1850.365f, -760.9587f, 93.02522f };
			fLocal_316 = 7f;
			Local_310 = { 1943.366f, -758.287f, 80.32291f };
			Local_313 = { 1851.354f, -765.1807f, 92.93546f };
			break;
		
		case 29:
			Local_304 = { -271.2849f, -2414.993f, -10f };
			Local_307 = { -542.9096f, -2225.856f, 52.65004f };
			fLocal_316 = 30f;
			Local_310 = { -279.8399f, -2427.212f, -10f };
			Local_313 = { -551.2656f, -2237.791f, 52.64634f };
			break;
		
		case 30:
			Local_304 = { -1483f, 2691.428f, -10f };
			Local_307 = { -1377.168f, 2600.769f, 15.95528f };
			fLocal_316 = 12f;
			Local_310 = { -1478.152f, 2696.688f, -10f };
			Local_313 = { -1378.503f, 2608.698f, 15.60924f };
			break;
		
		case 31:
			Local_304 = { 222.1519f, -2343.487f, 0.039199f };
			Local_307 = { 222.6849f, -2297.407f, 7.088753f };
			fLocal_316 = 12f;
			Local_310 = { 216.959f, -2343.487f, 0.207734f };
			Local_313 = { 216.602f, -2295.445f, 7.424279f };
			break;
		
		case 32:
			Local_304 = { 346.4622f, -2244.374f, 0.159779f };
			Local_307 = { 346.8347f, -2389.591f, 7.852059f };
			fLocal_316 = 20f;
			Local_310 = { 359.609f, -2244.468f, 0.129684f };
			Local_313 = { 355.4054f, -2390.258f, 7.080691f };
			break;
		
		case 33:
			Local_304 = { -1859.68f, -322.6357f, 56.16368f };
			Local_307 = { -1836.614f, -335.4141f, 96.1161f };
			fLocal_316 = 7.5f;
			Local_310 = { -1860.27f, -327.8634f, 57.543f };
			Local_313 = { -1837.271f, -339.2227f, 95.69325f };
			break;
		
		case 34:
			Local_304 = { -680.2632f, -600.818f, 69.11289f };
			Local_307 = { -706.6613f, -600.7515f, 30.47604f };
			fLocal_316 = 31.5f;
			Local_310 = { -680.6077f, -618.3658f, 69.27496f };
			Local_313 = { -706.3596f, -618.2385f, 30.31235f };
			break;
		
		case 35:
			Local_304 = { -1468.096f, -591.7158f, 67.05518f };
			Local_307 = { -1454.7f, -573.4518f, 29.56736f };
			fLocal_316 = 11.75f;
			Local_310 = { -1474.903f, -591.1215f, 67.08091f };
			Local_313 = { -1457.173f, -568.1316f, 29.44059f };
			break;
		
		case 36:
			Local_304 = { -1544.958f, -537.1475f, 72.44347f };
			Local_307 = { -1564.616f, -551.1829f, 32.86163f };
			fLocal_316 = 11.75f;
			Local_310 = { -1541.008f, -541.5494f, 71.61972f };
			Local_313 = { -1561.219f, -555.868f, 32.9279f };
			break;
		
		case 37:
			Local_304 = { 333.2108f, -2727.274f, 20.71663f };
			Local_307 = { 333.4297f, -2791.609f, 41.99023f };
			fLocal_316 = 20f;
			Local_310 = { 343.1127f, -2727.236f, 20.23613f };
			Local_313 = { 343.6678f, -2791.602f, 41.37928f };
			break;
		
		case 38:
			Local_304 = { 1928.071f, 6228.355f, 43.49398f };
			Local_307 = { 2039.882f, 6167.397f, 55.46405f };
			fLocal_316 = 13f;
			Local_310 = { 1931.82f, 6235.634f, 43.37382f };
			Local_313 = { 2039.598f, 6176.525f, 55.25597f };
			break;
		
		case 39:
			Local_304 = { -736.4309f, -1590.921f, 10.80892f };
			Local_307 = { -710.811f, -1516.349f, -0.098598f };
			fLocal_316 = 15f;
			Local_310 = { -727.2307f, -1585.221f, 11.78027f };
			Local_313 = { -700.0201f, -1511.783f, -0.341655f };
			break;
		
		case 40:
			Local_304 = { -676.3775f, -1548.553f, 12.33747f };
			Local_307 = { -659.329f, -1507.063f, -0.788618f };
			fLocal_316 = 25f;
			Local_310 = { -654.203f, -1536.146f, 9.191055f };
			Local_313 = { -645.9954f, -1500.219f, -2.406948f };
			break;
		
		case 41:
			Local_304 = { -624.2344f, -1537.045f, 12.60193f };
			Local_307 = { -622.1749f, -1472.877f, -0.292606f };
			fLocal_316 = 8f;
			Local_310 = { -615.4003f, -1536.65f, 12.40271f };
			Local_313 = { -619.7385f, -1472.937f, -0.243267f };
			break;
		
		case 42:
			Local_304 = { -492.5057f, -1632.457f, 24.3307f };
			Local_307 = { -418.2088f, -1487.452f, 0f };
			fLocal_316 = 25f;
			Local_310 = { -486.2016f, -1636.095f, 24.20805f };
			Local_313 = { -398.7648f, -1490.44f, 0f };
			break;
		
		case 43:
			Local_304 = { -359.3541f, -1639.693f, 13.13455f };
			Local_307 = { -388.4955f, -1690.945f, -0.183164f };
			fLocal_316 = 25f;
			Local_310 = { -378.1518f, -1705.66f, 12.47196f };
			Local_313 = { -348.9591f, -1654.411f, 0.193478f };
			break;
		
		case 44:
			Local_304 = { -243.4436f, -1814.623f, 25.69465f };
			Local_307 = { -183.9987f, -1780.645f, -0.085802f };
			fLocal_316 = 25f;
			Local_310 = { -235.1319f, -1822.094f, 25.86542f };
			Local_313 = { -175.5105f, -1788.275f, -0.506062f };
			break;
		
		case 45:
			Local_304 = { 84.55537f, -2046.159f, 13.30767f };
			Local_307 = { 17.93164f, -2045.152f, -0.031946f };
			fLocal_316 = 25f;
			Local_310 = { 17.90788f, -2035.773f, 12.62706f };
			Local_313 = { 84.57207f, -2034.184f, 0.048385f };
			break;
		
		case 46:
			Local_304 = { 221.5029f, -2232.766f, 9.88676f };
			Local_307 = { 221.6825f, -2244.081f, 4.479149f };
			fLocal_316 = 8f;
			Local_310 = { 218.583f, -2232.766f, 9.886198f };
			Local_313 = { 218.729f, -2244.081f, 4.535046f };
			break;
		
		case 47:
			Local_304 = { 221.6518f, -2184.635f, 11.66457f };
			Local_307 = { 221.6139f, -2208.137f, 5.876424f };
			fLocal_316 = 8f;
			Local_310 = { 217.8995f, -2184.635f, 11.5405f };
			Local_313 = { 218.3327f, -2208.137f, 5.864793f };
			break;
		
		case 48:
			Local_304 = { 2326.57f, 1096.031f, 76.31458f };
			Local_307 = { 2290.332f, 1136.131f, 58.85706f };
			fLocal_316 = 21f;
			Local_310 = { 2334.453f, 1103.067f, 76.26603f };
			Local_313 = { 2297.846f, 1142.897f, 58.84243f };
			break;
		
		case 49:
			Local_304 = { 2379.442f, 1150.776f, 58.79632f };
			Local_307 = { 2327.658f, 1212.366f, 72.8333f };
			fLocal_316 = 12f;
			Local_310 = { 2374.064f, 1146.282f, 58.83331f };
			Local_313 = { 2320.895f, 1209.596f, 72.79299f };
			break;
		
		case 50:
			Local_304 = { -1179.405f, -355.2554f, 56.53003f };
			Local_307 = { -1198.064f, -357.8363f, 35.35551f };
			fLocal_316 = 12.5f;
			Local_310 = { -1178.385f, -361.8784f, 56.15081f };
			Local_313 = { -1197.104f, -364.7004f, 36.49475f };
			break;
		
		case 51:
			Local_304 = { -921.3846f, -384.94f, 137.0181f };
			Local_307 = { -912.4324f, -429.229f, 36.70113f };
			fLocal_316 = 16f;
			Local_310 = { -914.1658f, -387.9444f, 137.0794f };
			Local_313 = { -906.2534f, -424.691f, 47.11882f };
			break;
		
		case 52:
			Local_304 = { -740.2564f, 246.4529f, 132.2922f };
			Local_307 = { -718.3602f, 201.0042f, 80.95571f };
			fLocal_316 = 22f;
			Local_310 = { -726.6429f, 253.0676f, 132.3319f };
			Local_313 = { -705.5858f, 210.4336f, 78.70573f };
			break;
		
		case 53:
			Local_304 = { -771.2068f, 268.2729f, 132.1689f };
			Local_307 = { -778.3417f, 313.1148f, 84.27054f };
			fLocal_316 = 16f;
			Local_310 = { -770.8035f, 310.8625f, 137.4161f };
			Local_313 = { -763.0681f, 269.044f, 83.31474f };
			break;
		
		case 54:
			Local_304 = { 259.2205f, 135.4146f, 136.7083f };
			Local_307 = { 279.2396f, 128.1379f, 100.8233f };
			fLocal_316 = 16f;
			Local_310 = { 261.9694f, 142.9676f, 136.6889f };
			Local_313 = { 281.7203f, 134.9551f, 100.7704f };
			break;
		
		case 55:
			Local_304 = { 393.548f, -30.87166f, 152.6635f };
			Local_307 = { 369.9622f, -23.88461f, 88.35776f };
			fLocal_316 = 8f;
			Local_310 = { 390.5358f, -36.08882f, 152.7813f };
			Local_313 = { 368.1275f, -28.81888f, 88.69447f };
			break;
		
		case 56:
			Local_304 = { 114.3139f, -648.4297f, 261.8488f };
			Local_307 = { 131.0782f, -733.7684f, 39.34393f };
			fLocal_316 = 20f;
			Local_310 = { 124.8467f, -646.6575f, 261.8488f };
			Local_313 = { 140.0502f, -737.427f, 39.3493f };
			break;
		
		case 57:
			Local_304 = { -215.919f, -823.8436f, 126.0224f };
			Local_307 = { -193.2237f, -761.7781f, 27.91382f };
			fLocal_316 = 20f;
			Local_310 = { -225.397f, -820.3937f, 126.0812f };
			Local_313 = { -202.9433f, -758.257f, 27.47734f };
			break;
		
		case 58:
			Local_304 = { -296.4725f, -802.0815f, 95.40108f };
			Local_307 = { -278.1352f, -747.7841f, 50.40046f };
			fLocal_316 = 20f;
			Local_310 = { -305.4602f, -798.8369f, 95.48194f };
			Local_313 = { -285.7376f, -745.0959f, 49.57651f };
			break;
		
		case 59:
			Local_304 = { -292.3034f, -823.3569f, 95.37621f };
			Local_307 = { -258.5991f, -835.5632f, 27.97946f };
			fLocal_316 = 20f;
			Local_310 = { -288.9206f, -814.022f, 95.37556f };
			Local_313 = { -255.2116f, -826.256f, 27.7375f };
			break;
		
		case 60:
			Local_304 = { -256.3589f, -714.7838f, 110.1617f };
			Local_307 = { -212.9054f, -730.532f, 32.21946f };
			fLocal_316 = 20f;
			Local_310 = { -253.7723f, -705.6632f, 110.1736f };
			Local_313 = { -210.0588f, -722.6748f, 32.46536f };
			break;
		
		case 61:
			Local_304 = { 1808.214f, 1949.246f, 71.73707f };
			Local_307 = { 1837.906f, 2127.283f, 52.80491f };
			fLocal_316 = 9.75f;
			Local_310 = { 1802.786f, 1950.262f, 71.74002f };
			Local_313 = { 1831.994f, 2127.433f, 52.83893f };
			break;
		
		case 62:
			Local_304 = { 2388.733f, 2931.941f, 46.62681f };
			Local_307 = { 2426.681f, 2883.066f, 36.21524f };
			fLocal_316 = 10f;
			Local_310 = { 2392.547f, 2934.867f, 46.6268f };
			Local_313 = { 2430.333f, 2885.908f, 36.28148f };
			break;
		
		case 63:
			Local_304 = { 2700.056f, 4836.381f, 42.07854f };
			Local_307 = { 2685.673f, 4893.38f, 30.90867f };
			fLocal_316 = 20.75f;
			Local_310 = { 2685.672f, 4821.653f, 42.18471f };
			Local_313 = { 2672.812f, 4880.356f, 31.13311f };
			break;
		
		case 64:
			Local_304 = { -1053.446f, 4766.245f, 234.3251f };
			Local_307 = { -1040.263f, 4737.157f, 204.4916f };
			fLocal_316 = 5f;
			Local_310 = { -1051.414f, 4767.193f, 234.4293f };
			Local_313 = { -1037.954f, 4738.354f, 204.5282f };
			break;
	}
}

int func_384(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (MISC::ABSF((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_385(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 8:
		case 12:
		case 13:
		case 20:
		case 31:
		case 32:
		case 46:
		case 47:
			return 1;
			break;
	}
	return 0;
}

int func_386(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 34:
		case 35:
		case 36:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
			return 1;
			break;
	}
	return 0;
}

int func_387(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false) || iParam1)
		{
			if (ENTITY::IS_ENTITY_IN_WATER(*iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_388(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, bParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, bParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, false) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_389()
{
	switch (Local_640.f_3)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 8:
		case 1:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_390(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_407() < 10)
	{
		iVar0 = func_406();
		func_391(Param0, fParam3, iVar0, iParam4);
	}
	return iVar0;
}

void func_391(struct<3> Param0, var uParam3, int iParam4, var uParam5)
{
	func_392(Param0, 0f, 0f, 0f, uParam3, 0, iParam4, uParam5);
}

void func_392(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9)
{
	struct<12> Var0;
	
	if (func_401(PLAYER::PLAYER_ID()) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_400(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_395(Var0))
		{
			Global_2635562.f_45.f_64 = func_394(PLAYER::PLAYER_ID());
			func_393(Var0, iParam8);
		}
	}
}

void func_393(struct<12> Param0, int iParam12)
{
	Global_2635562.f_368[iParam12 /*12*/] = { Param0 };
	Global_2635562.f_368[iParam12 /*12*/].f_9 = 1;
}

int func_394(bool bParam0)
{
	if (func_12(bParam0, 0, 1))
	{
		return Global_2657921[bParam0 /*463*/].f_1;
	}
	return 0;
}

int func_395(struct<12> Param0)
{
	struct<12> Var0[1];
	int iVar13;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (Global_2635562.f_45[iVar13 /*12*/].f_9 == 1)
		{
			if (!func_396(Global_2635562.f_45[iVar13 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar13++;
	}
	return 1;
}

int func_396(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam12)
	{
		if ((uParam12[iVar0 /*12*/])->f_9)
		{
			switch ((uParam12[iVar0 /*12*/])->f_10)
			{
				case 0:
					switch (Param0.f_10)
					{
						case 0:
							if (func_399(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_397(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (Param0.f_10)
					{
						case 0:
							if (func_399(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_397(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (SYSTEM::VMAG(Param0) == 0f)
	{
		return 0;
	}
	return 1;
}

bool func_397(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	fVar6 = (fParam9 * 0.7071068f);
	Var0 = { Param6 - Vector(fVar6, fVar6, fVar6) };
	Var3 = { Param6 + Vector(fVar6, fVar6, fVar6) };
	return func_398(Param0, Param3, Var0, Var3);
}

int func_398(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
{
	if (((((Param0.f_0 >= Param6.f_0 && Param0.f_1 >= Param6.f_1) && Param0.f_2 >= Param6.f_2) && Param3.f_0 <= Param9.f_0) && Param3.f_1 <= Param9.f_1) && Param3.f_2 <= Param9.f_2)
	{
		return 1;
	}
	return 0;
}

int func_399(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	
	Var0 = { Param4 - Param0 };
	if ((SYSTEM::VMAG(Var0) + fParam3) < fParam7)
	{
		return 1;
	}
	return 0;
}

void func_400(var uParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (*uParam0 <= *uParam1)
	{
		Var0.f_0 = *uParam0;
		Var3.f_0 = *uParam1;
	}
	else
	{
		Var0.f_0 = *uParam1;
		Var3.f_0 = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		Var0.f_1 = uParam0->f_1;
		Var3.f_1 = uParam1->f_1;
	}
	else
	{
		Var0.f_1 = uParam1->f_1;
		Var3.f_1 = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		Var0.f_2 = uParam0->f_2;
		Var3.f_2 = uParam1->f_2;
	}
	else
	{
		Var0.f_2 = uParam1->f_2;
		Var3.f_2 = uParam0->f_2;
	}
	*uParam0 = { Var0 };
	*uParam1 = { Var3 };
}

int func_401(bool bParam0)
{
	if (((func_404(bParam0, 1) || func_403(bParam0)) || func_123(bParam0, 0)) || func_402(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_402(bool bParam0)
{
	if (!func_12(bParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_873, 2);
}

int func_403(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return Global_1886967[iVar0 /*609*/] != -1;
	}
	return 0;
}

bool func_404(int iParam0, bool bParam1)
{
	if (func_405() != 0)
	{
		return func_394(iParam0) != 0;
	}
	return func_366(iParam0, bParam1, 0);
}

int func_405()
{
	return Global_32828;
}

int func_406()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_2635562.f_368[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_407()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2635562.f_368[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_408(char* sParam0, char* sParam1, char* sParam2)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_409(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_0";
		
		case 1:
			return "AMCH_1";
		
		case 2:
			return "AMCH_2";
		
		case 3:
			return "AMCH_3";
		
		case 4:
			return "AMCH_4";
		
		case 5:
			return "AMCH_5";
		
		case 6:
			return "AMCH_6";
		
		case 7:
			return "AMCH_7";
		
		case 8:
			return "AMCH_8";
		
		case 14:
			return "AMCH_9";
		
		case 9:
			return "AMCH_12";
		
		case 10:
			return "AMCH_13";
		
		case 11:
			return "AMCH_15";
		
		case 12:
			return "AMCH_16";
		
		case 15:
			return "AMCH_19";
		
		case 16:
			return "AMCH_20";
		
		case 17:
			return "AMCH_21";
		
		case 18:
			return "AMCH_22";
		
		case 13:
			return "AMCH_23";
		
		default:
	}
	return "";
}

char* func_410(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_0SLC";
		
		case 1:
			return "AMCH_1SLC";
		
		case 2:
			return "AMCH_2SLC";
		
		case 3:
			return "AMCH_3SLC";
		
		case 4:
			return "AMCH_4SLC";
		
		case 5:
			return "AMCH_5SLC";
		
		case 6:
			return "AMCH_6SLC";
		
		case 7:
			return "AMCH_7SLC";
		
		case 8:
			return "AMCH_8SLC";
		
		case 14:
			return "AMCH_9SLC";
		
		case 9:
			return "AMCH_12SLC";
		
		case 10:
			return "AMCH_13SLC";
		
		case 11:
			return "AMCH_15SLC";
		
		case 12:
			return "AMCH_16SLC";
		
		case 15:
			return "AMCH_19SLC";
		
		case 16:
			return "AMCH_20SLC";
		
		case 17:
			return "AMCH_21SLC";
		
		case 18:
			return "AMCH_22SLC";
		
		case 13:
			return "AMCH_23SLC";
		
		default:
	}
	return "";
}

char* func_411(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_BIG_0";
		
		case 1:
			return "AMCH_BIG_1";
		
		case 2:
			return "AMCH_BIG_2";
		
		case 3:
			return "AMCH_BIG_3";
		
		case 4:
			return "AMCH_BIG_4";
		
		case 5:
			return "AMCH_BIG_5";
		
		case 6:
			return "AMCH_BIG_6";
		
		case 7:
			return "AMCH_BIG_7";
		
		case 8:
			return "AMCH_BIG_8";
		
		case 14:
			return "AMCH_BIG_9";
		
		case 9:
			return "AMCH_BIG_12";
		
		case 10:
			return "AMCH_BIG_13";
		
		case 11:
			return "AMCH_BIG_15";
		
		case 12:
			return "AMCH_BIG_16";
		
		case 15:
			return "AMCH_BIG_19";
		
		case 16:
			return "AMCH_BIG_20";
		
		case 17:
			return "AMCH_BIG_21";
		
		case 18:
			return "AMCH_BIG_22";
		
		case 13:
			return "AMCH_BIG_23";
		
		default:
	}
	return "";
}

void func_412()
{
	if (!func_167())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1574764.f_9)
	{
		return;
	}
	func_163();
}

void func_413(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!func_386(iVar0) && !func_385(iVar0))
		{
			*(uParam0[iVar0 /*3*/]) = { Local_107[iVar0 /*3*/] };
		}
		iVar0++;
	}
}

void func_414()
{
	if (!func_389())
	{
		if (Local_640.f_3 == 14)
		{
			func_417();
		}
		Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4.f_1 = func_375();
	}
	else if ((!BitTest(Global_1836941.f_1, 4) && !BitTest(Global_1836941.f_1, 5)) && !func_416(PLAYER::PLAYER_ID()))
	{
		func_415();
	}
}

void func_415()
{
	switch (Local_640.f_3)
	{
		case 0:
			STATS::STAT_START_RECORD_STAT(8, 2);
			break;
		
		case 1:
			STATS::STAT_START_RECORD_STAT(13, 2);
			break;
		
		case 2:
			STATS::STAT_START_RECORD_STAT(4, 2);
			break;
		
		case 4:
			STATS::STAT_START_RECORD_STAT(1, 2);
			break;
		
		case 3:
			STATS::STAT_START_RECORD_STAT(2, 2);
			break;
		
		case 5:
			STATS::STAT_START_RECORD_STAT(3, 2);
			break;
		
		case 6:
			STATS::STAT_START_RECORD_STAT(11, 3);
			break;
		
		case 7:
			STATS::STAT_START_RECORD_STAT(14, 1);
			break;
		
		case 8:
			STATS::STAT_START_RECORD_STAT(29, 2);
			break;
		
		case 9:
			STATS::STAT_START_RECORD_STAT(12, 2);
			break;
		
		case 10:
			STATS::STAT_START_RECORD_STAT(10, 2);
			break;
		
		case 11:
			STATS::STAT_START_RECORD_STAT(18, 2);
			break;
		
		case 12:
			STATS::STAT_START_RECORD_STAT(20, 2);
			break;
		
		case 13:
			STATS::STAT_START_RECORD_STAT(27, 2);
			break;
		
		case 15:
			STATS::STAT_START_RECORD_STAT(26, 1);
			break;
		
		case 16:
			STATS::STAT_START_RECORD_STAT(25, 1);
			break;
		
		case 17:
			STATS::STAT_START_RECORD_STAT(22, 1);
			break;
		
		case 18:
			STATS::STAT_START_RECORD_STAT(24, 1);
			break;
	}
	MISC::SET_BIT(&uLocal_331, 8);
}

bool func_416(bool bParam0)
{
	return func_14(bParam0, 0);
}

void func_417()
{
	Local_107[0 /*3*/] = { 1083f, -231f, 60f };
	Local_107[1 /*3*/] = { 1024f, -325f, 60f };
	Local_107[2 /*3*/] = { 910f, -401f, 43f };
	Local_107[3 /*3*/] = { 721f, -457f, 26f };
	Local_107[4 /*3*/] = { 643f, -579f, 26f };
	Local_107[5 /*3*/] = { 590f, -851f, 26f };
	Local_107[6 /*3*/] = { 590f, -1023f, 16f };
	Local_107[7 /*3*/] = { 582f, -1205f, 24f };
	Local_107[8 /*3*/] = { 608f, -1335f, 16f };
	Local_107[9 /*3*/] = { 640f, -1434f, 16f };
	Local_107[10 /*3*/] = { 671f, -1742f, 20f };
	Local_107[11 /*3*/] = { 651f, -2046f, 16f };
	Local_107[12 /*3*/] = { 603f, -2505f, 9f };
	Local_107[13 /*3*/] = { 673f, -2582f, 4f };
	Local_107[14 /*3*/] = { 728f, -2594f, 10f };
	Local_107[15 /*3*/] = { 794f, -2624f, 27f };
	Local_107[16 /*3*/] = { -2663f, 2594f, 7.5f };
	Local_107[17 /*3*/] = { -1902f, 4617f, 30f };
	Local_107[18 /*3*/] = { -513f, 4427f, 40f };
	Local_107[19 /*3*/] = { 126f, 3366f, 40f };
	Local_107[20 /*3*/] = { 143f, 3418f, 36f };
	Local_107[21 /*3*/] = { 2822f, 4978f, 40f };
	Local_107[22 /*3*/] = { -162f, 4249f, 40f };
	Local_107[23 /*3*/] = { -408f, 2964f, 20f };
	Local_107[24 /*3*/] = { -181f, 2862f, 38f };
	Local_107[25 /*3*/] = { 2558f, 2201f, 24f };
	Local_107[26 /*3*/] = { 2950f, 803f, 8f };
	Local_107[27 /*3*/] = { 2369f, -409f, 80f };
	Local_107[28 /*3*/] = { 1906f, -755f, 84f };
	Local_107[29 /*3*/] = { -403f, -2333f, 40f };
	Local_107[30 /*3*/] = { -1429f, 2649f, 10f };
	Local_107[31 /*3*/] = { 219f, -2315f, 5f };
	Local_107[32 /*3*/] = { 350f, -2315f, 5f };
	Local_107[33 /*3*/] = { -1848f, -333f, 75f };
	Local_107[34 /*3*/] = { -693f, -608f, 69f };
	Local_107[35 /*3*/] = { -1461f, -582f, 53f };
	Local_107[36 /*3*/] = { -1553f, -546f, 59f };
	Local_107[37 /*3*/] = { 338f, -2758f, 23f };
	Local_107[38 /*3*/] = { 1985f, 6201f, 53f };
	Local_107[39 /*3*/] = { -713f, -1538f, 13f };
	Local_107[40 /*3*/] = { -659f, -1518f, 13f };
	Local_107[41 /*3*/] = { -620f, -1502f, 16f };
	Local_107[42 /*3*/] = { -445f, -1575f, 26f };
	Local_107[43 /*3*/] = { -373f, -1680f, 19f };
	Local_107[44 /*3*/] = { -212f, -1805f, 29f };
	Local_107[45 /*3*/] = { 47f, -2040f, 18f };
	Local_107[46 /*3*/] = { 223f, -2240f, 6f };
	Local_107[47 /*3*/] = { 218f, -2189f, 6f };
	Local_107[48 /*3*/] = { 2308f, 1124f, 78f };
	Local_107[49 /*3*/] = { 2349f, 1174f, 79f };
	Local_107[50 /*3*/] = { -1186f, -365f, 46f };
	Local_107[51 /*3*/] = { -916f, -407f, 93f };
	Local_107[52 /*3*/] = { -726f, 235f, 105f };
	Local_107[53 /*3*/] = { -774f, 286f, 112f };
	Local_107[54 /*3*/] = { 271f, 134f, 125f };
	Local_107[55 /*3*/] = { 377f, -28f, 125f };
	Local_107[56 /*3*/] = { 121f, -703f, 150f };
	Local_107[57 /*3*/] = { -204f, -784f, 74f };
	Local_107[58 /*3*/] = { -287f, -774f, 72f };
	Local_107[59 /*3*/] = { -272f, -824f, 71f };
	Local_107[60 /*3*/] = { -230f, -723f, 80f };
	Local_107[61 /*3*/] = { 1822f, 2044f, 62f };
	Local_107[62 /*3*/] = { 2410f, 2907f, 44f };
	Local_107[63 /*3*/] = { 2686f, 4858f, 36f };
	Local_107[64 /*3*/] = { -1046f, 4751f, 244f };
}

void func_418(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!BitTest(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_218, bParam0))
		{
			MISC::SET_BIT(&(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_218), bParam0);
		}
	}
	else if (BitTest(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_218, bParam0))
	{
		MISC::CLEAR_BIT(&(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_218), bParam0);
	}
}

void func_419(var uParam0, int iParam1)
{
	if (func_334(PLAYER::PLAYER_ID()) == 133 && iParam1)
	{
		Global_2738587.f_5152 = uParam0;
	}
	else
	{
		Global_2738587.f_5152 = -1;
	}
}

void func_420(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
	if (iParam0 != 133)
	{
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
	}
	Global_2738587.f_5078 = -1;
	bVar0 = (func_123(PLAYER::PLAYER_ID(), 0) && func_119(PLAYER::PLAYER_ID()));
	if (bParam6)
	{
		func_418(func_437(iParam0), 1);
	}
	else
	{
		func_436(iParam0, -1);
		if (func_8(PLAYER::PLAYER_ID()))
		{
			Global_1836941.f_3 = iParam0;
		}
		else
		{
			func_435(iParam0);
		}
		Global_1836941.f_4 = -1;
		if (func_8(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1836941.f_1), 5);
		}
		if (((func_177() && !func_176()) || func_175(PLAYER::PLAYER_ID(), 21)) || func_175(PLAYER::PLAYER_ID(), 25))
		{
			MISC::SET_BIT(&(Global_1836941.f_1), 4);
		}
		MISC::CLEAR_BIT(&(Global_1836941.f_1), 17);
		MISC::SET_BIT(&(Global_1836941.f_1), 20);
		if (func_434(iParam0))
		{
			func_433();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_430(fParam1);
		}
		if (fParam2 != 1f)
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(fParam2);
			if (iParam0 == 146)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
		}
		if (func_428(iParam0))
		{
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			MISC::SET_BIT(&(Global_1836941.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_4594666)
			{
				func_426(1);
				if (func_276(0))
				{
					MISC::SET_BIT(&(Global_1836941.f_1), 9);
				}
				if (!bParam6)
				{
					MISC::SET_BIT(&(Global_1836941.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			func_424(1);
			MISC::SET_BIT(&(Global_1836941.f_1), 12);
		}
		if (bParam5)
		{
			func_423();
			MISC::SET_BIT(&(Global_1836941.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_421(iParam0))
			{
				MISC::SET_BIT(&(Global_1836941.f_1), 21);
			}
		}
	}
	Global_2706878 = 1;
}

int func_421(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
		case 236:
		case 150:
			return 1;
		
		default:
	}
	if (func_134(iParam0) == 1)
	{
		return 1;
	}
	if (func_422())
	{
		return 1;
	}
	return 0;
}

int func_422()
{
	switch (func_333())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

void func_423()
{
	MISC::SET_BIT(&(Global_2738587.f_5069), false);
}

void func_424(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_101444.f_8 = 1;
	}
	else
	{
		Global_101444.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 61)
	{
		func_425(iVar0);
		iVar0++;
	}
}

void func_425(int iParam0)
{
	Global_101444.f_205[iParam0] = 1;
	Global_101444.f_204 = 1;
}

void func_426(int iParam0)
{
	if (func_427() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_4594666)
	{
		return;
	}
	Global_4594666 = iParam0;
	Global_4594668 = 0;
	Global_4594669 = 0;
}

int func_427()
{
	if ((((Global_1057441 != -1 && Global_1057441 != 33) && Global_1057441 != 35) && Global_1057441 != 37) && Global_1057441 != 21)
	{
		return 1;
	}
	return 0;
}

int func_428(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_429(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_429(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1886967[iVar0 /*609*/].f_1, 0);
	}
	return 0;
}

void func_430(float fParam0)
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_431())
	{
		return;
	}
	fVar0 = (Global_2738587.f_5229 - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2738587.f_5230))
	{
		if (!Global_2738587.f_5230 == SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2738587.f_5229 = fParam0;
	Global_2738587.f_5230 = SCRIPT::GET_ID_OF_THIS_THREAD();
}

int func_431()
{
	switch (func_405())
	{
		case 0:
			return func_432();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_432()
{
	switch (Global_2698640)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

void func_433()
{
	Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_210 = 0;
	MISC::CLEAR_BIT(&(Global_2738587.f_4667), true);
}

int func_434(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_435(int iParam0)
{
	Global_1886967[PLAYER::PLAYER_ID() /*609*/] = iParam0;
}

void func_436(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_361(func_362(iVar0)))
		{
			MISC::SET_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1), 2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1), 2);
		}
	}
}

int func_437(int iParam0)
{
	switch (iParam0)
	{
		case 134:
			return 21;
		
		case 254:
			return 25;
		
		default:
	}
	return 0;
}

int func_438()
{
	switch (Local_640.f_3)
	{
		case 18:
		case 16:
		case 15:
		case 17:
			return 1;
		
		default:
	}
	return 0;
}

void func_439()
{
	Global_1937732 = 1;
	if (!BitTest(Global_2748465, 0))
	{
		MISC::SET_BIT(&Global_2748465, false);
		MISC::SET_BIT(&Global_1937733, false);
	}
	if (!BitTest(Global_2748465, 1))
	{
		MISC::SET_BIT(&Global_2748465, true);
		MISC::SET_BIT(&Global_1937733, true);
	}
	if (!BitTest(Global_2748465, 5))
	{
		MISC::SET_BIT(&Global_2748465, 5);
		MISC::SET_BIT(&Global_1937733, 5);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-355737150))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-355737150, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-580979506))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-580979506, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1426452475))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1426452475, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(745417724))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(745417724, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1305304906))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1305304906, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1543175077))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1543175077, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-811770997))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-811770997, 0, false, false);
	}
}

int func_440()
{
	switch (Local_640.f_3)
	{
		case 1:
		case 6:
		case 11:
		case 12:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

void func_441()
{
	int iVar0;
	int iVar1;
	
	if (func_5(Local_640.f_3))
	{
		if (Local_640.f_3 == 1 || Local_640.f_3 == 6)
		{
			iVar0 = func_462(PLAYER::PLAYER_ID(), 1);
			iVar1 = func_211(iVar0, 1);
			if (iVar1 < 11)
			{
				if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 1, false, false);
					func_442(1);
				}
			}
			else
			{
				PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), true);
			}
		}
	}
}

void func_442(bool bParam0)
{
	int iVar0;
	
	if (PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
		func_460(PLAYER::PLAYER_ID(), func_215(586, -1), 0);
		if (func_459(3610, -1))
		{
		}
		iVar0 = func_215(2042, -1);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_458(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), iVar0));
		if (func_273(0))
		{
			func_460(PLAYER::PLAYER_ID(), func_215(586, -1), 0);
		}
		else
		{
			func_460(PLAYER::PLAYER_ID(), func_457(Global_2748778), 0);
		}
		func_455(PLAYER::PLAYER_ID(), iVar0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_448(PLAYER::PLAYER_PED_ID(), iVar0), func_447(PLAYER::PLAYER_PED_ID(), iVar0), false);
		func_446(func_215(2042, -1), 1);
		Global_2738587.f_287 = 1;
		func_443(PLAYER::PLAYER_ID(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_443(bool bParam0, int iParam1, int iParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_445();
		if (iParam2 == -1)
		{
			iParam2 = func_215(2042, -1);
		}
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(bParam0, 5, func_448(PLAYER::GET_PLAYER_PED(bParam0), iParam2), func_447(PLAYER::GET_PLAYER_PED(bParam0), iParam2), false);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(bParam0, func_458(PLAYER::GET_PLAYER_PED(bParam0), iParam2));
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::GET_PLAYER_PED(bParam0), 5, func_448(PLAYER::GET_PLAYER_PED(bParam0), iParam2), func_447(PLAYER::GET_PLAYER_PED(bParam0), iParam2), func_458(PLAYER::GET_PLAYER_PED(bParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_215(586, -1);
		}
		if (func_273(1) && func_444(bParam0))
		{
			func_460(bParam0, func_457(Global_2748778), 0);
		}
		else
		{
			func_460(bParam0, iParam1, 0);
		}
		if (BitTest(Global_4718592.f_28, 4))
		{
			func_460(bParam0, Global_1836697, 1);
		}
		func_455(bParam0, iParam2);
		PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(bParam0), 177, true);
	}
}

var func_444(bool bParam0)
{
	return func_118(bParam0, 10);
}

void func_445()
{
	Global_79220 = 0;
	Global_79221 = -1;
	Global_79222 = -1;
	Global_79223 = -1;
	Global_79224 = -1;
	Global_79228 = -1;
}

void func_446(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_445();
		func_208(2042, iParam0, -1, 1);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_448(PLAYER::PLAYER_PED_ID(), iParam0), func_447(PLAYER::PLAYER_PED_ID(), iParam0), false);
		func_455(PLAYER::PLAYER_ID(), iParam0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_458(PLAYER::PLAYER_PED_ID(), iParam0));
		if ((iParam1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
		{
			func_443(PLAYER::PLAYER_ID(), -1, -1);
		}
	}
}

int func_447(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 9;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
		
		case 13:
			return 12;
			break;
		
		case 14:
			return 13;
			break;
		
		case 15:
			return 14;
			break;
		
		case 16:
			return 15;
			break;
		
		case 17:
			return 16;
			break;
		
		case 18:
			return 17;
			break;
		
		case 19:
			return 18;
			break;
		
		case 20:
			return 19;
			break;
		
		case 21:
			return 20;
			break;
		
		case 22:
			return 21;
			break;
		
		case 23:
			return 22;
			break;
		
		case 24:
			return 23;
			break;
		
		case 25:
			return 24;
			break;
		
		case 26:
			return 25;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 2;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 4;
			break;
		
		case 32:
			return 5;
			break;
		
		case 33:
			return 6;
			break;
		
		case 34:
			return 7;
			break;
		
		case 35:
			return 8;
			break;
		
		case 36:
			return 9;
			break;
		
		case 37:
			return 10;
			break;
		
		case 38:
			return 11;
			break;
		
		case 39:
			return 12;
			break;
		
		case 40:
			return 13;
			break;
		
		case 41:
			return 14;
			break;
		
		case 42:
			return 15;
			break;
		
		case 43:
			return 16;
			break;
		
		case 44:
			return 17;
			break;
		
		case 45:
			return 18;
			break;
		
		case 46:
			return 19;
			break;
		
		case 47:
			return 0;
			break;
		
		case 48:
			return 1;
			break;
		
		case 49:
			return 2;
			break;
		
		case 50:
			return 3;
			break;
		
		case 51:
			return 4;
			break;
		
		case 52:
			return 0;
			break;
		
		case 53:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 2;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 4;
			break;
		
		case 58:
			return 5;
			break;
		
		case 59:
			return 6;
			break;
		
		case 60:
			return 7;
			break;
		
		case 61:
			return 8;
			break;
		
		case 62:
			return 0;
			break;
		
		case 63:
			return 1;
			break;
		
		case 64:
			return 0;
			break;
		
		case 65:
			return 1;
			break;
		
		case 66:
			return 2;
			break;
		
		case 67:
			return 0;
			break;
	}
	return 0;
}

var func_448(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	iVar2 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
	bVar3 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != false;
	iVar4 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	iVar5 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar1, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	iVar6 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 4));
	if (((((((bVar3 != Global_79220 || iParam1 != Global_79221) || iVar4 != Global_79222) || iVar5 != Global_79223) || iVar6 != Global_79224) || iVar0 != Global_79225) || iVar1 != Global_79226) || iVar2 != Global_79227)
	{
		Global_79220 = bVar3;
		Global_79221 = iParam1;
		Global_79222 = iVar4;
		Global_79223 = iVar5;
		Global_79224 = iVar6;
		Global_79225 = iVar0;
		Global_79226 = iVar1;
		Global_79227 = iVar2;
		Global_79228 = func_449(iParam0, iParam1);
	}
	return Global_79228;
}

int func_449(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar3 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("over_jacket"), 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_2"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("h4_draw_1"), 8))
			{
				return func_454(iParam0, iParam1, 1);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("h4_draw_0"), 8))
			{
				return func_454(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_4"), 8))
			{
				return func_454(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_5"), 8))
			{
				return func_454(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_6"), 8))
			{
				return func_454(iParam0, iParam1, 10);
			}
		}
		else
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_2"), 8))
			{
				return func_454(iParam0, iParam1, 6);
			}
			if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("h4_draw_0"), 8)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("h4_draw_1"), 8))
			{
				return func_454(iParam0, iParam1, 7);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_4"), 8))
			{
				return func_454(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_5"), 8))
			{
				return func_454(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_6"), 8))
			{
				return func_454(iParam0, iParam1, 10);
			}
		}
		return func_454(iParam0, iParam1, 9);
	}
	if (func_453(iParam0))
	{
		if (bVar1)
		{
			return func_454(iParam0, iParam1, 7);
		}
		else
		{
			return func_454(iParam0, iParam1, 1);
		}
	}
	if (iVar0 > 15)
	{
		iVar4 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 98087521, 0))
		{
			return func_454(iParam0, iParam1, 0);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -135391604, 0))
		{
			return func_454(iParam0, iParam1, 1);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1398721900, 0))
		{
			return func_454(iParam0, iParam1, 2);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1030529416, 0))
		{
			return func_454(iParam0, iParam1, 3);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 873008833, 0))
		{
			return func_454(iParam0, iParam1, 4);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1646534043, 0))
		{
			return func_454(iParam0, iParam1, 5);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1868675094, 0))
		{
			return func_454(iParam0, iParam1, 6);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1500122155, 0))
		{
			return func_454(iParam0, iParam1, 7);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1741007074, 0))
		{
			return func_454(iParam0, iParam1, 8);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -226291902, 0))
		{
			return func_454(iParam0, iParam1, 9);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 607416996, 0))
		{
			return func_454(iParam0, iParam1, 10);
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("hipster_dress"), 0))
		{
			if (bVar1)
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -405912369, 0))
		{
			return func_454(iParam0, iParam1, 1);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("dress"), 0))
		{
			if (bVar1)
			{
				return func_454(iParam0, iParam1, 5);
			}
			else
			{
				return func_454(iParam0, iParam1, 5);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("pilot_suit"), 0))
		{
			return func_454(iParam0, iParam1, 8);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("combat_gear"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 7);
				}
				else
				{
					return func_454(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("hooded_jacket"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 7);
				}
				else
				{
					return func_454(iParam0, iParam1, 1);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_5"), 0))
			{
				return func_454(iParam0, iParam1, 10);
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_32"), 0))
			{
				return func_454(iParam0, iParam1, 10);
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_33"), 0))
			{
				return func_454(iParam0, iParam1, 10);
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_30"), 0))
			{
				return func_454(iParam0, iParam1, 10);
			}
			else if (bVar1)
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_COAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_3"), 0))
		{
			iVar5 = func_452(iVar4, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar5)
				{
					case 0:
						return func_454(iParam0, iParam1, 1);
						break;
					
					case 2:
						return func_454(iParam0, iParam1, 8);
						break;
					
					default:
						iVar0 = func_451(iVar4);
						break;
				}
			}
			else
			{
				switch (iVar5)
				{
					case 2:
						return func_454(iParam0, iParam1, 6);
						break;
					
					default:
						iVar0 = func_451(iVar4);
						break;
					}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_bomb"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_draw_4"), 0))
			{
				return func_454(iParam0, iParam1, 2);
			}
			else
			{
				return func_454(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_gear"), 0))
		{
			iVar6 = func_450(iVar4, 0);
			switch (iVar6)
			{
				case 4:
					return func_454(iParam0, iParam1, 7);
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_454(iParam0, iParam1, 7);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_454(iParam0, iParam1, 7);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_454(iParam0, iParam1, 7);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_454(iParam0, iParam1, 7);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_454(iParam0, iParam1, 9);
					}
					else
					{
						return func_454(iParam0, iParam1, 7);
					}
					break;
				
				case 13:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_454(iParam0, iParam1, 9);
					}
					else
					{
						return func_454(iParam0, iParam1, 9);
					}
					break;
				
				case 14:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_454(iParam0, iParam1, 9);
					}
					break;
				
				default:
					iVar0 = func_451(iVar4);
					break;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("xmas2_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 7);
				}
				else
				{
					return func_454(iParam0, iParam1, 2);
				}
			}
			else if (bVar1)
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 1);
			}
			else
			{
				return func_454(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 1);
			}
			else if (bVar1)
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 2);
			}
			else
			{
				return func_454(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 2);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 1);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 8);
			}
			else
			{
				return func_454(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_7"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jan_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 2);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_8"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jan_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("air_draw_3"), 0))
				{
					return func_454(iParam0, iParam1, 10);
				}
				else
				{
					return func_454(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 1);
			}
		}
		else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1086258388, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_sweat"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_sweat"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 7);
				}
				else
				{
					return func_454(iParam0, iParam1, 5);
				}
			}
			else if (bVar1)
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 8);
			}
			else if (bVar1)
			{
				return func_454(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 7);
				}
				else
				{
					return func_454(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_454(iParam0, iParam1, 9);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 6);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 7);
				}
				else
				{
					return func_454(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 2);
			}
			else
			{
				return func_454(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 2);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 9);
				}
				else
				{
					return func_454(iParam0, iParam1, 1);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 7);
				}
				else
				{
					return func_454(iParam0, iParam1, 5);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 7);
				}
				else
				{
					return func_454(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 7);
				}
				else
				{
					return func_454(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 7);
				}
				else
				{
					return func_454(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 7);
				}
				else
				{
					return func_454(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_454(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 7);
				}
				else
				{
					return func_454(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_454(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 7);
				}
				else
				{
					return func_454(iParam0, iParam1, 6);
				}
			}
			else
			{
				return func_454(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 7);
				}
				else
				{
					return func_454(iParam0, iParam1, 2);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_454(iParam0, iParam1, 5);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 7);
				}
				else
				{
					return func_454(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_454(iParam0, iParam1, 9);
			}
			else
			{
				return func_454(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_22"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 7);
				}
				else
				{
					return func_454(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 9);
			}
			else
			{
				return func_454(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("air_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_454(iParam0, iParam1, 9);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 9);
			}
			else if (bVar1)
			{
				return func_454(iParam0, iParam1, 10);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_454(iParam0, iParam1, 9);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 2);
			}
			else
			{
				return func_454(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 2);
			}
			else
			{
				return func_454(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 9);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 9);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 2);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 9);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 9);
			}
			else
			{
				return func_454(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 9);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 9);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 9);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 9);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 9);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 9);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 9);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 9);
			}
			else
			{
				return func_454(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 2);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 9);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_454(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_454(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_454(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 10);
			}
			else
			{
				return func_454(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 10);
			}
			else
			{
				return func_454(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 10);
			}
			else
			{
				return func_454(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 9);
			}
			else
			{
				return func_454(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 9);
			}
			else
			{
				return func_454(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gun_draw_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_454(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gun_draw_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_454(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gun_draw_23"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_454(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gun_draw_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_454(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("smug_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_454(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("air_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 10);
			}
			else
			{
				return func_454(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 10);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_454(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 10);
			}
			else
			{
				return func_454(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("assault_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 0);
			}
			else
			{
				return func_454(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_14"), 0))
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return func_454(iParam0, iParam1, 10);
				}
				else
				{
					return func_454(iParam0, iParam1, 10);
				}
			}
			else if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 1);
			}
			else
			{
				return func_454(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 10);
			}
			else
			{
				return func_454(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 10);
			}
			else
			{
				return func_454(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 9);
			}
			else
			{
				return func_454(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 10);
			}
			else
			{
				return func_454(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe2_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 9);
			}
			else
			{
				return func_454(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 3);
			}
			else
			{
				return func_454(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 10);
			}
			else
			{
				return func_454(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 1);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 10);
			}
			else
			{
				return func_454(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 9);
			}
			else
			{
				return func_454(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe2_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 9);
			}
			else
			{
				return func_454(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 10);
			}
			else
			{
				return func_454(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("vest_shirt"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("tails_jacket"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_454(iParam0, iParam1, 7);
			}
			else
			{
				return func_454(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("smoking_jacket"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_454(iParam0, iParam1, 2);
			}
			else
			{
				return func_454(iParam0, iParam1, 7);
			}
		}
		else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("silk_pyjamas"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("silk_robe"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -826135203, 0))
		{
			return func_454(iParam0, iParam1, 6);
		}
		else
		{
			iVar7 = iVar0;
			iVar0 = func_451(iVar4);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 1);
				}
				else
				{
					return func_454(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 1);
				}
				else
				{
					return func_454(iParam0, iParam1, 0);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 6);
				}
				else
				{
					return func_454(iParam0, iParam1, 6);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 2);
				}
				else
				{
					return func_454(iParam0, iParam1, 2);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 2);
				}
				else
				{
					return func_454(iParam0, iParam1, 2);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 1);
				}
				else
				{
					return func_454(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 1);
				}
				else
				{
					return func_454(iParam0, iParam1, 1);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 2);
				}
				else
				{
					return func_454(iParam0, iParam1, 2);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 7);
				}
				else
				{
					return func_454(iParam0, iParam1, 0);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 1);
				}
				else
				{
					return func_454(iParam0, iParam1, 0);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 2);
				}
				else
				{
					return func_454(iParam0, iParam1, 2);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 7);
				}
				else
				{
					return func_454(iParam0, iParam1, 1);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 1);
				}
				else
				{
					return func_454(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 6);
				}
				else
				{
					return func_454(iParam0, iParam1, 1);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 5);
				}
				else
				{
					return func_454(iParam0, iParam1, 5);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 1);
				}
				else
				{
					return func_454(iParam0, iParam1, 4);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 1);
				}
				else
				{
					return func_454(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 6);
				}
				else
				{
					return func_454(iParam0, iParam1, 6);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 3);
				}
				else
				{
					return func_454(iParam0, iParam1, 2);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 5);
				}
				else
				{
					return func_454(iParam0, iParam1, 4);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 1);
				}
				else
				{
					return func_454(iParam0, iParam1, 0);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 1);
				}
				else
				{
					return func_454(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 6);
				}
				else
				{
					return func_454(iParam0, iParam1, 6);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 6);
				}
				else
				{
					return func_454(iParam0, iParam1, 6);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 6);
				}
				else
				{
					return func_454(iParam0, iParam1, 6);
				}
				break;
			
			case 9:
				return func_454(iParam0, iParam1, 1);
				break;
			
			case 10:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 6);
				}
				else
				{
					return func_454(iParam0, iParam1, 6);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 1);
				}
				else
				{
					return func_454(iParam0, iParam1, 0);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 1);
				}
				else
				{
					return func_454(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 1);
				}
				else
				{
					return func_454(iParam0, iParam1, 0);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 7);
				}
				else
				{
					return func_454(iParam0, iParam1, 3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_454(iParam0, iParam1, 1);
				}
				else
				{
					return func_454(iParam0, iParam1, 0);
				}
				break;
			}
	}
	return func_454(iParam0, iParam1, 0);
	return 0;
}

int func_450(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_451(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_0"), 0))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_1"), 0))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_2"), 0))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_3"), 0))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_4"), 0))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_5"), 0))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_6"), 0))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_7"), 0))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_8"), 0))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_9"), 0))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_10"), 0))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_11"), 0))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_12"), 0))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_13"), 0))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_14"), 0))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_452(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_453(int iParam0)
{
	if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 4, joaat("dungarees")))
	{
		return 1;
	}
	return 0;
}

int func_454(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 2;
					break;
				
				case 2:
					return 3;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 6;
					break;
				
				case 6:
					return 7;
					break;
				
				case 7:
					return 8;
					break;
				
				case 8:
					return 19;
					break;
				
				case 9:
					return 48;
					break;
				
				case 10:
					return 62;
					break;
			}
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
			switch (iParam2)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 11;
					break;
				
				case 2:
					return 12;
					break;
				
				case 3:
					return 13;
					break;
				
				case 4:
					return 14;
					break;
				
				case 5:
					return 15;
					break;
				
				case 6:
					return 16;
					break;
				
				case 7:
					return 17;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 49;
					break;
				
				case 10:
					return 64;
					break;
			}
			break;
		
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			switch (iParam2)
			{
				case 0:
					return 21;
					break;
				
				case 1:
					return 22;
					break;
				
				case 2:
					return 23;
					break;
				
				case 3:
					return 24;
					break;
				
				case 4:
					return 25;
					break;
				
				case 5:
					return 26;
					break;
				
				case 6:
					return 27;
					break;
				
				case 7:
					return 28;
					break;
				
				case 8:
					return 29;
					break;
				
				case 9:
					return 50;
					break;
				
				case 10:
					return 65;
					break;
			}
			break;
		
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
			switch (iParam2)
			{
				case 0:
					return 31;
					break;
				
				case 1:
					return 32;
					break;
				
				case 2:
					return 33;
					break;
				
				case 3:
					return 34;
					break;
				
				case 4:
					return 35;
					break;
				
				case 5:
					return 36;
					break;
				
				case 6:
					return 37;
					break;
				
				case 7:
					return 38;
					break;
				
				case 8:
					return 39;
					break;
				
				case 9:
					return 51;
					break;
				
				case 10:
					return 66;
					break;
			}
			break;
		
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
			switch (iParam2)
			{
				case 0:
					return 52;
					break;
				
				case 1:
					return 53;
					break;
				
				case 2:
					return 54;
					break;
				
				case 3:
					return 55;
					break;
				
				case 4:
					return 56;
					break;
				
				case 5:
					return 57;
					break;
				
				case 6:
					return 58;
					break;
				
				case 7:
					return 59;
					break;
				
				case 8:
					return 60;
					break;
				
				case 9:
					return 61;
					break;
				
				case 10:
					return 69;
					break;
			}
			break;
		
		case 62:
		case 63:
			switch (iParam2)
			{
				case 0:
					return 70;
					break;
				
				case 1:
					return 71;
					break;
				
				case 2:
					return 72;
					break;
				
				case 3:
					return 73;
					break;
				
				case 4:
					return 74;
					break;
				
				case 5:
					return 75;
					break;
				
				case 6:
					return 76;
					break;
				
				case 7:
					return 77;
					break;
				
				case 8:
					return 78;
					break;
				
				case 9:
					return 79;
					break;
				
				case 10:
					return 80;
					break;
			}
			break;
		
		case 64:
		case 65:
		case 66:
			switch (iParam2)
			{
				case 0:
					return 89;
					break;
				
				case 1:
					return 90;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 92;
					break;
				
				case 4:
					return 93;
					break;
				
				case 5:
					return 94;
					break;
				
				case 6:
					return 95;
					break;
				
				case 7:
					return 96;
					break;
				
				case 8:
					return 97;
					break;
				
				case 9:
					return 98;
					break;
				
				case 10:
					return 99;
					break;
			}
			break;
		
		case 67:
			switch (iParam2)
			{
				case 0:
					return 100;
					break;
				
				case 1:
					return 101;
					break;
				
				case 2:
					return 102;
					break;
				
				case 3:
					return 103;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 105;
					break;
				
				case 6:
					return 106;
					break;
				
				case 7:
					return 107;
					break;
				
				case 8:
					return 108;
					break;
				
				case 9:
					return 109;
					break;
				
				case 10:
					return 110;
					break;
			}
			break;
	}
	return 0;
}

void func_455(bool bParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_456(iParam1);
	if (iVar0 != joaat("p_parachute_s"))
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(bParam0, iVar0);
	}
	else
	{
		PLAYER::CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(bParam0);
	}
}

int func_456(int iParam0)
{
	if (iParam0 > 66)
	{
		return joaat("reh_p_para_bag_reh_s_01a");
	}
	else if (iParam0 > 63)
	{
		return joaat("p_para_bag_tr_s_01a");
	}
	else if (iParam0 > 61)
	{
		return joaat("vw_p_para_bag_vine_s");
	}
	else if (iParam0 > 51)
	{
		return joaat("lts_p_para_bag_pilot2_s");
	}
	else if (iParam0 > 46)
	{
		return joaat("p_para_bag_xmas_s");
	}
	else if (iParam0 > 26)
	{
		return joaat("lts_p_para_bag_lts_s");
	}
	else if (iParam0 > 0)
	{
		return joaat("lts_p_para_bag_pilot2_s");
	}
	return joaat("p_parachute_s");
}

int func_457(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 1:
			return 9;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 8;
			break;
		
		case 7:
			return 11;
			break;
		
		case 8:
			return 11;
			break;
		
		case 9:
			return 6;
			break;
		
		case 10:
			return 6;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 10;
			break;
	}
	return 0;
}

int func_458(int iParam0, int iParam1)
{
	return 0;
}

bool func_459(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void func_460(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_461(iParam1, iParam2, &iVar0, &iVar1))
	{
		PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(bParam0, iVar1);
		PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(bParam0, iVar0);
	}
	else
	{
		PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(bParam0, 0);
		PLAYER::CLEAR_PLAYER_PARACHUTE_MODEL_OVERRIDE(bParam0);
	}
}

bool func_461(int iParam0, int iParam1, var uParam2, var uParam3)
{
	*uParam2 = 0;
	*uParam3 = 0;
	switch (iParam1)
	{
		case 1:
			*uParam2 = joaat("xm_prop_x17_para_sp_s");
			*uParam3 = iParam0;
			break;
		
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 0;
					break;
				
				case 1:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 1;
					break;
				
				case 2:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 2;
					break;
				
				case 3:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 3;
					break;
				
				case 4:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 4;
					break;
				
				case 5:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 5;
					break;
				
				case 6:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 6;
					break;
				
				case 7:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 7;
					break;
				
				case 8:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 8;
					break;
				
				case 9:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 9;
					break;
				
				case 10:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 10;
					break;
				
				case 11:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 11;
					break;
				
				case 12:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 12;
					break;
				
				case 13:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 13;
					break;
				
				case 14:
					*uParam2 = joaat("tr_prop_tr_para_sp_s_01a");
					*uParam3 = 1;
					break;
				
				case 15:
					*uParam2 = joaat("tr_prop_tr_para_sp_s_01a");
					*uParam3 = 2;
					break;
				
				case 16:
					*uParam2 = joaat("tr_prop_tr_para_sp_s_01a");
					*uParam3 = 3;
					break;
				
				case 17:
					*uParam2 = joaat("reh_prop_reh_para_sp_s_01a");
					*uParam3 = 1;
					break;
			}
			break;
	}
	return *uParam2 != 0;
}

int func_462(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_216(bParam0);
}

void func_463()
{
	struct<3> Var0;
	var uVar3;
	bool bVar4;
	var uVar5;
	float fVar6;
	bool bVar7;
	struct<3> Var8;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	int iVar14;
	struct<3> Var15;
	float fVar18;
	
	if ((((!func_7(PLAYER::PLAYER_ID()) && !func_174(PLAYER::PLAYER_ID())) && !func_328()) && !func_476(PLAYER::PLAYER_ID(), 0, -1)) && !func_475(PLAYER::PLAYER_ID()))
	{
		if (func_12(PLAYER::PLAYER_ID(), 1, 1))
		{
			fVar6 = 2.147484E+09f;
			bVar7 = -1;
			Var8 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			bVar11 = func_5(Local_640.f_3);
			bVar12 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false);
			bVar13 = func_474();
			bVar4 = false;
			while (bVar4 < 10)
			{
				iVar14 = Local_640.f_67[bVar4 /*2*/].f_1;
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar14) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iVar14), false))
				{
					if (!bVar13 && bVar11)
					{
						if (bVar12 && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == NETWORK::NET_TO_VEH(iVar14))
						{
							func_352(1);
						}
					}
					MISC::SET_BIT(&uVar5, bVar4);
					if (bVar11 && func_41(Local_640.f_3, bVar4, &Var0, &uVar3))
					{
						Var15 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iVar14), true) };
						if (SYSTEM::VDIST(Var15, Var0) <= 10f)
						{
							fVar18 = SYSTEM::VDIST(Var15, Var8);
							if (fVar18 < fVar6)
							{
								fVar6 = fVar18;
								bVar7 = bVar4;
							}
						}
					}
				}
				bVar4++;
			}
			if (func_42(Local_640.f_3))
			{
				MISC::SET_BIT(&uVar5, 31);
			}
			Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_7 = uVar5;
			if (func_5(Local_640.f_3))
			{
				if ((PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()) || (ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))) || func_18(-1, 0))
				{
					if ((fVar6 < 2.147484E+09f && bVar7 >= 0) && bVar7 < 10)
					{
						if (func_41(Local_640.f_3, bVar7, &Var0, &uVar3))
						{
							func_473(Var0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1, 0, 1, -1082130432);
							func_472(Var0, 1, 0);
							func_465(10, 0, 0, 0, 0);
							MISC::SET_BIT(&uLocal_331, 5);
						}
					}
				}
				else
				{
					func_464();
				}
			}
		}
	}
	else
	{
		func_464();
	}
}

void func_464()
{
	if (BitTest(uLocal_331, 5))
	{
		func_182();
		func_180();
		MISC::CLEAR_BIT(&uLocal_331, 5);
		func_179();
	}
}

void func_465(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2672741.f_1689.f_703.f_16 != func_113())
	{
		if (BitTest(Global_2657921[Global_2672741.f_1689.f_703.f_16 /*463*/].f_424, 0) && func_466())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2643603 = 0;
	}
	Global_2635562.f_490 = iParam0;
	Global_2635562.f_490.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2635562.f_490.f_2 = iParam1;
	Global_2635562.f_490.f_3 = iParam2;
	Global_2635562.f_490.f_4 = iParam3;
	Global_2635562.f_490.f_5 = iParam4;
}

int func_466()
{
	if ((((((func_231(PLAYER::PLAYER_ID()) == 229 || func_231(PLAYER::PLAYER_ID()) == 191) || func_471()) || func_470()) || func_469()) || Global_2707706.f_227 == 1) || (Global_2635562.f_2053 && func_467(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

int func_467(int iParam0)
{
	if (func_468(iParam0))
	{
		return 1;
	}
	if (func_117(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_468(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1886967[iVar0 /*609*/].f_1, 7);
	}
	return 0;
}

bool func_469()
{
	return Global_2707705;
}

bool func_470()
{
	return Global_1836663;
}

int func_471()
{
	if (Global_4718592 == 6)
	{
		return 1;
	}
	return 0;
}

void func_472(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2635562.f_45.f_49 = { Param0 };
	Global_2635562.f_45.f_52 = iParam3;
	Global_2635562.f_45.f_53 = iParam4;
}

void func_473(struct<3> Param0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2644862.f_6))
	{
		if (!Global_2644862.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (SYSTEM::VMAG(Param0) == 0f)
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2644862.f_6))
	{
		Global_2644862.f_6 = SCRIPT::GET_ID_OF_THIS_THREAD();
	}
	Var0.f_6 = Global_2644862.f_6;
	Var0 = { Param0 };
	Var0.f_5 = fParam3;
	Var0.f_4 = fParam4;
	Var0.f_7 = iParam5;
	Var0.f_3 = fParam6;
	Var0.f_8 = iParam8;
	Var0.f_9 = iParam7;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam9;
	Var0.f_22 = iParam10;
	if (func_401(PLAYER::PLAYER_ID()))
	{
		if (iParam13 || iParam7)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam11;
	Var0.f_26 = iParam12;
	Var0.f_27 = iParam14;
	Global_2644862 = { Var0 };
}

int func_474()
{
	if ((((((func_468(PLAYER::PLAYER_ID()) || func_177()) || func_176()) || func_175(PLAYER::PLAYER_ID(), 21)) || func_175(PLAYER::PLAYER_ID(), 25)) || func_8(PLAYER::PLAYER_ID())) || func_7(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_475(bool bParam0)
{
	if (BitTest(Global_1845263[bParam0 /*877*/].f_267.f_32, 14))
	{
		return 1;
	}
	if (BitTest(Global_1845263[bParam0 /*877*/].f_267.f_32, 11))
	{
		return 1;
	}
	return 0;
}

int func_476(bool bParam0, bool bParam1, int iParam2)
{
	if (Global_1845263[bParam0 /*877*/].f_267.f_34 > 0)
	{
		if (bParam1)
		{
			if (BitTest(Global_1845263[bParam0 /*877*/].f_267.f_32, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2657921[bParam0 /*463*/].f_321.f_7 != -1)
	{
		if (iParam2 == -1 || func_313(Global_2657921[bParam0 /*463*/].f_321.f_7) != iParam2)
		{
			if (bParam1)
			{
				return func_477(bParam0) == bParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_477(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_113())
	{
		return iParam0;
	}
	if (func_478(iParam0) != -1)
	{
		iVar0 = func_313(func_478(iParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_92(iParam0, 0))
			{
				return func_91(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_113();
		}
		return Global_2657921[iParam0 /*463*/].f_321.f_10;
	}
	return func_113();
}

int func_478(int iParam0)
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			return Global_2657921[iParam0 /*463*/].f_321.f_7;
		}
		else if (((Global_1575079 || Global_2635562.f_2980) && iParam0 == PLAYER::PLAYER_ID()) && func_12(iParam0, 1, 0))
		{
			return Global_2657921[iParam0 /*463*/].f_321.f_7;
		}
	}
	return -1;
}

void func_479(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	
	if (func_552())
	{
		if (bParam1)
		{
			iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
			if (func_111(PLAYER::PLAYER_ID()))
			{
				iVar1 = func_338();
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
				{
					iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar2);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
					{
						iVar0 = iVar3;
					}
				}
			}
			if (iVar0 >= 0)
			{
				iVar4 = 0;
				while (iVar4 < func_551())
				{
					switch (Local_640.f_3)
					{
						case 14:
							if (!func_386(iVar4) && !func_385(iVar4))
							{
								func_548("AMCH_BRIDGE", bParam0, iVar0, iVar4);
							}
							break;
					}
					iVar4++;
				}
			}
		}
	}
	if (func_44())
	{
		iVar5 = 0;
		while (iVar5 < 10)
		{
			if (((!bParam0 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_640.f_67[iVar5 /*2*/].f_1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_640.f_67[iVar5 /*2*/].f_1), false)) && VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_640.f_67[iVar5 /*2*/].f_1), -1, false))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_613[iVar5]))
				{
					iLocal_613[iVar5] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_640.f_67[iVar5 /*2*/].f_1));
					HUD::SET_BLIP_SPRITE(iLocal_613[iVar5], func_547(iVar5));
					HUD::SET_BLIP_PRIORITY(iLocal_613[iVar5], 9);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_613[iVar5], func_546(iVar5));
					func_544(&(iLocal_613[iVar5]), 9);
				}
				else
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						if (SYSTEM::VDIST(Var6, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_640.f_67[iVar5 /*2*/].f_1), true)) <= 150f)
						{
							HUD::SHOW_HEIGHT_ON_BLIP(iLocal_613[iVar5], true);
						}
						else
						{
							HUD::SHOW_HEIGHT_ON_BLIP(iLocal_613[iVar5], false);
						}
					}
					func_480(iLocal_613[iVar5], 0, 1152319488, 1137180672);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_613[iVar5]))
			{
				HUD::REMOVE_BLIP(&(iLocal_613[iVar5]));
			}
			iVar5++;
		}
	}
}

void func_480(int iParam0, int iParam1, float fParam2, float fParam3)
{
	HUD::SET_BLIP_ALPHA(iParam0, func_481(iParam0, iParam1, fParam2, fParam3));
}

int func_481(int iParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	
	if (!func_543(Global_2672741) && !func_84())
	{
		fVar0 = func_483(iParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = func_482();
		}
		return (SYSTEM::ROUND((SYSTEM::TO_FLOAT((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_482()
{
	if (func_404(Global_2672741, 1))
	{
		return 50;
	}
	return 0;
}

float func_483(int iParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	iVar0 = Global_2672741;
	Var2 = { func_542(iParam0) };
	Var2.f_2 = 0f;
	if (Global_1581998 || func_538())
	{
		if (func_537(iVar0))
		{
			Var5 = { func_486(iVar0) };
		}
		else if (func_485(iVar0))
		{
			Var5 = { func_484(iVar0) };
		}
	}
	else
	{
		Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar0), false) };
	}
	Var5.f_2 = 0f;
	fVar1 = SYSTEM::VMAG(Var5 - Var2);
	if (fVar1 < fParam1)
	{
		fVar1 = fParam1;
	}
	if (fVar1 > fParam2)
	{
		fVar1 = fParam2;
	}
	fVar1 = ((fVar1 - fParam1) / (fParam2 - fParam1));
	fVar1 = (fVar1 - 1f);
	fVar1 = (fVar1 * -1f);
	return fVar1;
}

Vector3 func_484(bool bParam0)
{
	int iVar0;
	
	if (func_485(iParam0))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	return 0f, 0f, 0f;
}

int func_485(bool bParam0)
{
	int iVar0;
	
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iVar0, 2056.204f, 2954.807f, -70.69892f, 110f, 90f, 15f, false, true, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_486(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	
	if (iParam0 == func_113())
	{
	}
	if (func_536(iParam0))
	{
		iVar0 = func_535(iParam0);
		if (iVar0 != func_113())
		{
			if (!func_534(iVar0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2672741.f_258[iVar0 /*3*/][1]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2672741.f_258[iVar0 /*3*/][1], false);
				}
				else
				{
					return Global_2657921[func_535(iParam0) /*463*/].f_321.f_12;
				}
			}
			else
			{
				iVar1 = func_531(iVar0);
				if (iVar1 == -1)
				{
					iVar1 = Global_2657921[iParam0 /*463*/].f_321.f_7;
				}
				if (!iVar1 == -1)
				{
					return Global_1942781.f_558[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_530(iParam0))
	{
		iVar2 = func_529(iParam0);
		if (iVar2 != func_113())
		{
			if (!func_528(iVar2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1961179[iVar2]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_1961179[iVar2], false);
				}
				else
				{
					return Global_2657921[func_535(iParam0) /*463*/].f_321.f_12;
				}
			}
			else
			{
				iVar3 = 160;
				if (!iVar3 == -1)
				{
					return Global_1942781.f_558[iVar3 /*3*/];
				}
			}
		}
	}
	else if (func_527(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2738587.f_308))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2738587.f_308, false);
		}
	}
	else if (func_526(iParam0) && !func_525(iParam0))
	{
		iVar4 = Global_2657921[iParam0 /*463*/].f_321.f_10;
		if (iVar4 != func_113())
		{
			iVar5 = func_531(iVar4);
			if (iVar5 == -1)
			{
				iVar5 = Global_2657921[iParam0 /*463*/].f_321.f_7;
			}
			if (!iVar5 == -1)
			{
				return Global_1942781.f_558[iVar5 /*3*/];
			}
		}
	}
	else if (func_524(iParam0) && !func_523(iParam0))
	{
		if (func_537(iParam0) && func_522())
		{
			return Global_1942781.f_558[Global_2657921[iParam0 /*463*/].f_321.f_7 /*3*/];
		}
		iVar6 = Global_2657921[iParam0 /*463*/].f_321.f_10;
		if (iVar6 != func_113())
		{
			if (func_521(iVar6))
			{
				iVar7 = func_518(iVar6);
				if (iVar7 == -1)
				{
					iVar7 = Global_2657921[iParam0 /*463*/].f_321.f_7;
				}
				if (iVar7 != -1)
				{
					return Global_1942781.f_558[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_517(iParam0))
	{
		iVar8 = func_516(iParam0);
		if (iVar8 != func_113())
		{
			if (!func_515(iVar8) && !func_514(iVar8))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2672741.f_355[iVar8]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2672741.f_355[iVar8], false);
				}
				else
				{
					return Global_2657921[func_516(iParam0) /*463*/].f_321.f_20;
				}
			}
			else if (func_521(iVar8) && func_515(iVar8))
			{
				iVar9 = func_518(iVar8);
				if (iVar9 == -1)
				{
					iVar9 = Global_2657921[iParam0 /*463*/].f_321.f_7;
				}
				if (!iVar9 == -1)
				{
					return Global_1942781.f_558[iVar9 /*3*/];
				}
			}
			else if (func_513(iVar8) && func_514(iVar8))
			{
				iVar10 = func_510(iVar8);
				if (iVar10 == -1)
				{
					iVar10 = Global_2657921[iParam0 /*463*/].f_321.f_7;
				}
				if (!iVar10 == -1)
				{
					return Global_1942781.f_558[iVar10 /*3*/];
				}
			}
		}
	}
	else if (func_509(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2738587.f_310))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2738587.f_310, false);
		}
	}
	else if (func_508(iParam0) && !func_507(iParam0))
	{
		iVar11 = Global_2657921[iParam0 /*463*/].f_321.f_10;
		if (iVar11 != func_113())
		{
			if (func_506(iVar11))
			{
				iVar12 = func_503(iVar11);
				if (iVar12 == -1)
				{
					iVar12 = Global_2657921[iParam0 /*463*/].f_321.f_7;
				}
				if (iVar12 != -1)
				{
					return func_502(iVar12);
				}
			}
		}
	}
	else if (func_501(iParam0) && !func_500(iParam0))
	{
		iVar13 = Global_2657921[iParam0 /*463*/].f_321.f_10;
		if (iVar13 != func_113())
		{
			if (func_499(iVar13))
			{
				iVar14 = func_496(iVar13);
				if (iVar14 == -1)
				{
					iVar14 = Global_2657921[iParam0 /*463*/].f_321.f_7;
				}
				if (iVar14 != -1)
				{
					return Global_1942781.f_558[iVar14 /*3*/];
				}
			}
		}
	}
	else if (func_495(iParam0, 0))
	{
		iVar15 = func_494(iParam0);
		if (iVar15 != func_113())
		{
			if (!func_493(iVar15))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2672741.f_388[iVar15]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2672741.f_388[iVar15], false);
				}
				else
				{
					return Global_1886967[func_494(iParam0) /*609*/].f_591;
				}
			}
			else
			{
				iVar16 = func_496(iVar15);
				if (iVar16 == -1)
				{
					iVar16 = Global_2657921[iParam0 /*463*/].f_321.f_7;
				}
				if (!iVar16 == -1)
				{
					return Global_1942781.f_558[iVar16 /*3*/];
				}
			}
		}
	}
	else if (func_492(iParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	else if (func_491(iParam0))
	{
		iVar17 = func_477(iParam0);
		if (iVar17 != func_113())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_2672741.f_421[iVar17]))
			{
				return ENTITY::GET_ENTITY_COORDS(Global_2672741.f_421[iVar17], false);
			}
			else
			{
				return Global_1906517[iVar17 /*299*/].f_51;
			}
		}
		else
		{
			return 0f, 0f, 0f;
		}
	}
	if (func_508(iParam0))
	{
		return func_502(Global_2657921[iParam0 /*463*/].f_321.f_7);
	}
	if (func_487(iParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_1942781.f_558[Global_2657921[iParam0 /*463*/].f_321.f_7 /*3*/];
}

int func_487(int iParam0)
{
	if (((func_490(iParam0) || func_489(iParam0)) || func_488(iParam0)) || func_337(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_488(int iParam0)
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_313(Global_2657921[iParam0 /*463*/].f_321.f_7) == 15;
			}
		}
	}
	return 0;
}

int func_489(int iParam0)
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_313(Global_2657921[iParam0 /*463*/].f_321.f_7) == 16;
			}
		}
	}
	return 0;
}

int func_490(int iParam0)
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_313(Global_2657921[iParam0 /*463*/].f_321.f_7) == 14;
			}
		}
	}
	return 0;
}

int func_491(int iParam0)
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_313(Global_2657921[iParam0 /*463*/].f_321.f_7) == 20;
			}
		}
		else if (((Global_2657921[iParam0 /*463*/].f_321.f_7 != -1 && Global_1575079) && iParam0 == PLAYER::PLAYER_ID()) && func_12(iParam0, 1, 0))
		{
			return func_313(Global_2657921[iParam0 /*463*/].f_321.f_7) == 20;
		}
	}
	return 0;
}

int func_492(int iParam0)
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_313(Global_2657921[iParam0 /*463*/].f_321.f_7) == 13;
			}
		}
	}
	return 0;
}

int func_493(int iParam0)
{
	if (iParam0 != func_113())
	{
		return BitTest(Global_2657921[iParam0 /*463*/].f_321.f_3, 4);
	}
	return 0;
}

int func_494(int iParam0)
{
	if (iParam0 == func_113())
	{
		return iParam0;
	}
	return Global_2657921[iParam0 /*463*/].f_321.f_10;
}

int func_495(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657921[iParam0 /*463*/].f_321.f_10 != func_113())
			{
				return func_313(Global_2657921[iParam0 /*463*/].f_321.f_7) == 12;
			}
		}
	}
	return 0;
}

int func_496(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_113())
	{
		iVar0 = func_498(iParam0);
		if (iVar0 != 0)
		{
			return func_497(iVar0);
		}
	}
	return -1;
}

int func_497(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 102;
		
		case 2:
			return 103;
		
		case 3:
			return 104;
		
		case 4:
			return 105;
		
		case 5:
			return 106;
		
		case 6:
			return 107;
		
		case 7:
			return 108;
		
		case 8:
			return 109;
		
		case 9:
			return 110;
		
		case 10:
			return 111;
		
		default:
	}
	return -1;
}

int func_498(int iParam0)
{
	if (iParam0 != func_113())
	{
		return Global_1845263[iParam0 /*877*/].f_267.f_313;
	}
	return 0;
}

int func_499(int iParam0)
{
	if (iParam0 != func_113())
	{
		if (Global_1845263[iParam0 /*877*/].f_267.f_313 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_500(int iParam0)
{
	if (iParam0 != func_113())
	{
		if (func_501(iParam0) && Global_2657921[iParam0 /*463*/].f_321.f_10 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_501(int iParam0)
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_313(Global_2657921[iParam0 /*463*/].f_321.f_7) == 11;
			}
		}
	}
	return 0;
}

Vector3 func_502(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 750.5f, -1322.3f, 26.2802f;
		
		case 103:
			return 331.9f, -974.9f, 30f;
		
		case 104:
			return -146f, -1270f, 28.3088f;
		
		case 105:
			return -17.7f, 225.7f, 106.7566f;
		
		case 106:
			return 894.4f, -2106.4f, 29.4768f;
		
		case 107:
			return -668f, -2431.5f, 12.9444f;
		
		case 108:
			return 213.4f, -3166.6f, 4.7903f;
		
		case 109:
			return 366.6f, 237.6f, 104.9f;
		
		case 110:
			return -1275.3f, -666.8f, 25.6332f;
		
		case 111:
			return -1188.8f, -1156.9f, 4.6582f;
		
		default:
	}
	return Global_1942781.f_558[iParam0 /*3*/];
}

int func_503(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_113())
	{
		iVar0 = func_505(iParam0);
		if (iVar0 != 0)
		{
			return func_504(iVar0);
		}
	}
	return -1;
}

int func_504(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 102;
		
		case 2:
			return 103;
		
		case 3:
			return 104;
		
		case 4:
			return 105;
		
		case 5:
			return 106;
		
		case 6:
			return 107;
		
		case 7:
			return 108;
		
		case 8:
			return 109;
		
		case 9:
			return 110;
		
		case 10:
			return 111;
		
		default:
	}
	return -1;
}

int func_505(int iParam0)
{
	if (iParam0 != func_113())
	{
		return Global_1845263[iParam0 /*877*/].f_267.f_356;
	}
	return 0;
}

int func_506(int iParam0)
{
	if (iParam0 != func_113())
	{
		return Global_1845263[iParam0 /*877*/].f_267.f_356 != 0;
	}
	return 0;
}

int func_507(int iParam0)
{
	if (iParam0 != func_113())
	{
		if (func_508(iParam0) && Global_2657921[iParam0 /*463*/].f_321.f_10 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_508(int iParam0)
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_313(Global_2657921[iParam0 /*463*/].f_321.f_7) == 11;
			}
		}
	}
	return 0;
}

int func_509(int iParam0)
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_313(Global_2657921[iParam0 /*463*/].f_321.f_7) == 10;
			}
		}
	}
	return 0;
}

int func_510(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_113())
	{
		return -1;
	}
	iVar0 = func_512(iParam0);
	if (!iVar0 == 0)
	{
		return func_511(iVar0);
	}
	return -1;
}

int func_511(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 83;
			break;
		
		case 2:
			return 84;
			break;
		
		case 3:
			return 85;
			break;
		
		case 4:
			return 86;
			break;
		
		case 5:
			return 87;
			break;
	}
	return -1;
}

int func_512(int iParam0)
{
	if (iParam0 == func_113())
	{
		return 0;
	}
	return Global_1845263[iParam0 /*877*/].f_267.f_295;
}

int func_513(int iParam0)
{
	if (iParam0 != func_113())
	{
		return Global_1845263[iParam0 /*877*/].f_267.f_295 != 0;
	}
	return 0;
}

int func_514(int iParam0)
{
	if (iParam0 != func_113())
	{
		return BitTest(Global_2657921[iParam0 /*463*/].f_321.f_6, 16);
	}
	return 0;
}

int func_515(int iParam0)
{
	if (iParam0 != func_113())
	{
		return BitTest(Global_2657921[iParam0 /*463*/].f_321.f_2, 6);
	}
	return 0;
}

int func_516(int iParam0)
{
	if (iParam0 == func_113())
	{
		return iParam0;
	}
	return Global_2657921[iParam0 /*463*/].f_321.f_10;
}

int func_517(int iParam0)
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657921[iParam0 /*463*/].f_321.f_10 != func_113())
			{
				return func_313(Global_2657921[iParam0 /*463*/].f_321.f_7) == 8;
			}
		}
	}
	return 0;
}

int func_518(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_113())
	{
		return -1;
	}
	iVar0 = func_520(iParam0);
	if (!iVar0 == 0)
	{
		return func_519(iVar0);
	}
	return -1;
}

int func_519(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 89;
			break;
		
		case 2:
			return 90;
			break;
		
		case 3:
			return 91;
			break;
		
		case 4:
			return 92;
			break;
		
		case 5:
			return 93;
			break;
		
		case 6:
			return 94;
			break;
		
		case 7:
			return 95;
			break;
		
		case 8:
			return 96;
			break;
		
		case 9:
			return 97;
			break;
	}
	return -1;
}

int func_520(int iParam0)
{
	if (iParam0 == func_113())
	{
		return 0;
	}
	return Global_1845263[iParam0 /*877*/].f_267.f_302;
}

int func_521(int iParam0)
{
	if (iParam0 != func_113())
	{
		return Global_1845263[iParam0 /*877*/].f_267.f_302 != 0;
	}
	return 0;
}

int func_522()
{
	if (BitTest(Global_1942781.f_2, 13) || Global_1942781.f_3448)
	{
		return 1;
	}
	return 0;
}

int func_523(int iParam0)
{
	if (iParam0 == func_113())
	{
		return 0;
	}
	if (func_524(iParam0) && Global_2657921[iParam0 /*463*/].f_321.f_10 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_524(int iParam0)
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_313(Global_2657921[iParam0 /*463*/].f_321.f_7) == 9;
			}
		}
	}
	return 0;
}

int func_525(int iParam0)
{
	if (iParam0 == func_113())
	{
		return 0;
	}
	if (func_526(iParam0) && Global_2657921[iParam0 /*463*/].f_321.f_10 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_526(int iParam0)
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_313(Global_2657921[iParam0 /*463*/].f_321.f_7) == 4;
			}
		}
	}
	return 0;
}

int func_527(int iParam0)
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_313(Global_2657921[iParam0 /*463*/].f_321.f_7) == 6;
			}
		}
	}
	return 0;
}

int func_528(int iParam0)
{
	if (iParam0 != func_113())
	{
		return BitTest(Global_2657921[iParam0 /*463*/].f_321.f_5, 26);
	}
	return 0;
}

int func_529(int iParam0)
{
	if (iParam0 == func_113())
	{
		return iParam0;
	}
	return Global_2657921[iParam0 /*463*/].f_321.f_10;
}

int func_530(int iParam0)
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657921[iParam0 /*463*/].f_321.f_10 != func_113())
			{
				return func_313(Global_2657921[iParam0 /*463*/].f_321.f_7) == 25;
			}
		}
	}
	return 0;
}

int func_531(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_113())
	{
		return -1;
	}
	iVar0 = func_533(iParam0);
	if (!iVar0 == 0)
	{
		return func_532(iVar0);
	}
	return -1;
}

int func_532(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 22;
			break;
		
		case 2:
			return 23;
			break;
		
		case 3:
			return 24;
			break;
		
		case 4:
			return 25;
			break;
		
		case 5:
			return 26;
			break;
		
		case 6:
			return 27;
			break;
		
		case 7:
			return 28;
			break;
		
		case 8:
			return 29;
			break;
		
		case 9:
			return 30;
			break;
		
		case 10:
			return 31;
			break;
		
		case 11:
			return 32;
			break;
		
		case 12:
			return 33;
			break;
		
		case 13:
			return 34;
			break;
		
		case 14:
			return 35;
			break;
		
		case 15:
			return 36;
			break;
		
		case 16:
			return 37;
			break;
		
		case 17:
			return 38;
			break;
		
		case 18:
			return 39;
			break;
		
		case 19:
			return 40;
			break;
		
		case 20:
			return 41;
			break;
		
		case 32:
			return 159;
			break;
		
		case 21:
			return 70;
			break;
		
		case 22:
			return 71;
			break;
		
		case 23:
			return 72;
			break;
		
		case 24:
			return 73;
			break;
		
		case 25:
			return 74;
			break;
		
		case 26:
			return 75;
			break;
		
		case 27:
			return 76;
			break;
		
		case 28:
			return 77;
			break;
		
		case 29:
			return 78;
			break;
		
		case 30:
			return 79;
			break;
		
		case 31:
			return 80;
			break;
	}
	return -1;
}

int func_533(int iParam0)
{
	if (iParam0 == func_113())
	{
		return 0;
	}
	return Global_1845263[iParam0 /*877*/].f_267.f_195[5 /*13*/];
}

int func_534(int iParam0)
{
	if (iParam0 != func_113())
	{
		return BitTest(Global_2657921[iParam0 /*463*/].f_321, 6);
	}
	return 0;
}

int func_535(int iParam0)
{
	if (iParam0 == func_113())
	{
		return iParam0;
	}
	return Global_2657921[iParam0 /*463*/].f_321.f_10;
}

int func_536(int iParam0)
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657921[iParam0 /*463*/].f_321.f_10 != func_113())
			{
				return func_313(Global_2657921[iParam0 /*463*/].f_321.f_7) == 5;
			}
		}
	}
	return 0;
}

int func_537(int iParam0)
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			return Global_2657921[iParam0 /*463*/].f_321.f_7 != -1;
		}
		else if ((Global_1575079 && iParam0 == PLAYER::PLAYER_ID()) && func_12(iParam0, 1, 0))
		{
			return Global_2657921[iParam0 /*463*/].f_321.f_7 != -1;
		}
	}
	return 0;
}

int func_538()
{
	if ((func_541() || func_540()) || func_539(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_539(int iParam0)
{
	if (iParam0 == func_113())
	{
		return 0;
	}
	return BitTest(Global_1882422[iParam0 /*142*/].f_30, 20);
}

var func_540()
{
	return BitTest(Global_1956010, 1);
}

bool func_541()
{
	return BitTest(Global_1956030, 5);
}

Vector3 func_542(int iParam0)
{
	int iVar0;
	
	switch (HUD::GET_BLIP_INFO_ID_TYPE(iParam0))
	{
		case 1:
		case 2:
		case 3:
			iVar0 = HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return ENTITY::GET_ENTITY_COORDS(iVar0, false);
			}
			break;
	}
	return HUD::GET_BLIP_COORDS(iParam0);
}

int func_543(bool bParam0)
{
	if ((BitTest(Global_2657921[bParam0 /*463*/].f_73.f_2, 9) && !(BitTest(Global_2657921[bParam0 /*463*/].f_73.f_2, 6) && BitTest(Global_2657921[bParam0 /*463*/].f_73.f_2, 7))) || ((BitTest(Global_2657921[bParam0 /*463*/].f_73.f_2, 6) && !BitTest(Global_2657921[bParam0 /*463*/].f_73.f_2, 7)) && !BitTest(Global_2657921[bParam0 /*463*/].f_73.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

void func_544(var uParam0, int iParam1)
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_545(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_545(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

char* func_546(int iParam0)
{
	if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_640.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_640.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (VEHICLE::IS_THIS_MODEL_A_BIKE(Local_640.f_67[iParam0 /*2*/]) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(Local_640.f_67[iParam0 /*2*/]))
	{
		return "AMCH_BIKE";
	}
	else
	{
		return "AMBL_VEH";
	}
	return "";
}

int func_547(int iParam0)
{
	if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_640.f_67[iParam0 /*2*/]))
	{
		return 64;
	}
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_640.f_67[iParam0 /*2*/]))
	{
		return 423;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(Local_640.f_67[iParam0 /*2*/]) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(Local_640.f_67[iParam0 /*2*/]))
	{
		return 348;
	}
	return 225;
}

void func_548(char* sParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	
	if (!BitTest(Local_2607[iParam2 /*12*/].f_8[func_377(iParam3)], func_376(iParam3)) && !bParam1)
	{
		Var0 = { func_550(iParam3) };
		if (!HUD::DOES_BLIP_EXIST(iLocal_547[iParam3]))
		{
			if (!func_549(Var0, 0f, 0f, 0f, 0) && !func_549(Var0, 0f, 0f, -2000f, 0))
			{
				iLocal_547[iParam3] = HUD::ADD_BLIP_FOR_COORD(Var0);
				HUD::SET_BLIP_PRIORITY(iLocal_547[iParam3], 9);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_547[iParam3], sParam0);
				func_480(iLocal_547[iParam3], 25, 1152319488, 1137180672);
				func_544(&(iLocal_547[iParam3]), 12);
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_547[iParam3], true);
			}
		}
		else if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			HUD::SET_BLIP_ALPHA(iLocal_547[iParam3], 255);
		}
		else
		{
			func_480(iLocal_547[iParam3], 25, 1152319488, 1137180672);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_547[iParam3]))
	{
		HUD::REMOVE_BLIP(&(iLocal_547[iParam3]));
		if (!bParam1)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Checkpoint_Hit", "GTAO_FM_Events_Soundset", false);
		}
	}
}

bool func_549(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_550(int iParam0)
{
	switch (Local_640.f_3)
	{
		case 14:
			return Local_351[iParam0 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_551()
{
	switch (Local_640.f_3)
	{
		case 14:
			return 65;
		
		default:
	}
	return 0;
}

int func_552()
{
	switch (Local_640.f_3)
	{
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_553()
{
	switch (Local_640.f_3)
	{
		case -1:
			break;
		
		default:
			return 0;
	}
	return 0;
}

void func_554(var uParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_327(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_226(sParam1))
	{
		sVar0 = sParam1;
	}
	func_155(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

char* func_555(int iParam0)
{
	char* sVar0;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	return "HUD_STARTING";
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ";
			
			case 1:
				return "AST_CHALL_LS";
			
			case 2:
				return "AST_CHALL_HS";
			
			case 3:
				return "AST_CHALL_LST";
			
			case 4:
				return "AST_CHALL_LW";
			
			case 5:
				return "AST_CHALL_NC";
			
			case 6:
				return "AST_CHALL_LP";
			
			case 7:
				return "AST_CHALL_VS";
			
			case 8:
				return "AST_CHALL_NM";
			
			case 9:
				return "AST_CHALL_RD";
			
			case 10:
				return "AST_CHALL_LF";
			
			case 11:
				return "AST_CHALL_LFL";
			
			case 12:
				return "AST_CHALL_LFI";
			
			case 13:
				return "AST_CHALL_LB";
			
			case 14:
				return "AST_CHALL_MB";
			
			case 15:
				return "AST_CHALL_HSH";
			
			case 16:
				return "AST_CHALL_DB";
			
			case 17:
				return "AST_CHALL_ML";
			
			case 18:
				return "AST_CHALL_LSN";
			
			default:
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

int func_556(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_557(int iParam0)
{
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		Global_2738587.f_5068 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!BitTest(Global_2738587.f_5068, 1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", false);
			Global_2738587.f_5068 = 0;
			MISC::SET_BIT(&(Global_2738587.f_5068), true);
		}
	}
}

int func_558(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

void func_559(bool bParam0)
{
	if (!HUD::IS_RADAR_HIDDEN() && !CAM::IS_SCREEN_FADED_OUT())
	{
		switch (bParam0)
		{
			case 0:
				if (!BitTest(uLocal_624, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (func_5(Local_640.f_3))
						{
							if (Local_640.f_3 == 12)
							{
								func_308("AMCH_AIRAVI", 30000);
							}
							else
							{
								func_308("AMCH_AIRAV", 30000);
							}
						}
						else if (func_42(Local_640.f_3))
						{
							func_308("AMCH_BIKEAV", 30000);
						}
						func_307(1);
						MISC::SET_BIT(&uLocal_624, bParam0);
					}
				}
				break;
			
			case 1:
				if (!BitTest(uLocal_624, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						func_308("AMCH_BLOW", 30000);
						func_307(1);
						MISC::SET_BIT(&uLocal_624, bParam0);
					}
				}
				break;
			
			case 2:
				if (!BitTest(uLocal_624, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !func_564(63))
					{
						switch (Local_640.f_3)
						{
							case 11:
							case 12:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										func_308("AMCH_ALTI", 30000);
										func_307(1);
										MISC::SET_BIT(&uLocal_624, bParam0);
									}
								}
								break;
							
							case 8:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_308("AMCH_NMIS", 30000);
									func_307(1);
									MISC::SET_BIT(&uLocal_624, bParam0);
								}
								break;
							
							case 1:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_308("AMCH_FRFALL", -1);
									func_307(1);
									MISC::SET_BIT(&uLocal_624, bParam0);
								}
								break;
							
							case 16:
							case 15:
							case 18:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_308("AMCH_PVPO1", -1);
									func_307(1);
									MISC::SET_BIT(&uLocal_624, bParam0);
								}
								break;
							
							case 17:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_308("AMCH_PVPO2", -1);
									func_307(1);
									MISC::SET_BIT(&uLocal_624, bParam0);
								}
								break;
							
							case 4:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_308("AMCH_WHEELIE", 30000);
									func_307(1);
									MISC::SET_BIT(&uLocal_624, bParam0);
								}
								break;
							
							case 3:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_308("AMCH_STOPPIE", 30000);
									func_307(1);
									MISC::SET_BIT(&uLocal_624, bParam0);
								}
								break;
							
							case 10:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_308("AMCH_LFALL", 30000);
									func_307(1);
									MISC::SET_BIT(&uLocal_624, bParam0);
								}
								break;
							
							case 6:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_308("AMCH_LPARA", 30000);
									func_307(1);
									MISC::SET_BIT(&uLocal_624, bParam0);
								}
								break;
							}
						}
				}
				break;
			
			case 3:
				if (!BitTest(uLocal_624, bParam0))
				{
					if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_564(63))
					{
						switch (Local_640.f_3)
						{
							case 11:
							case 12:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										if (func_1(&uLocal_325, 1000, 0))
										{
											func_308("AMCH_OCEAN", 30000);
											func_307(1);
											func_47(&uLocal_325);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 5:
				if (!BitTest(uLocal_624, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !func_564(63))
					{
						switch (Local_640.f_3)
						{
							case 11:
							case 12:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										if (func_543(PLAYER::PLAYER_ID()) && !func_561(PLAYER::PLAYER_ID()))
										{
											func_308("AMCH_ALTIEXP", 30000);
											func_307(1);
											MISC::SET_BIT(&uLocal_624, bParam0);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 6:
				if (!BitTest(uLocal_624, bParam0))
				{
					if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_564(63))
					{
						if (func_1(&uLocal_325, 1000, 0))
						{
							func_308("AMCH_FLYLOW", 30000);
							func_307(1);
							func_47(&uLocal_325);
						}
					}
				}
				break;
			
			case 7:
				if (!BitTest(uLocal_624, bParam0))
				{
					if (Local_640.f_3 == 7)
					{
						if (iLocal_625 == 0)
						{
							if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_564(63))
							{
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_308("AMCH_MVS1", 30000);
									func_307(1);
									iLocal_625 = 1;
								}
							}
						}
						else if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_564(63))
						{
							if (func_12(PLAYER::PLAYER_ID(), 1, 1))
							{
								func_308("AMCH_MVS2", 30000);
								func_307(1);
								MISC::SET_BIT(&uLocal_624, bParam0);
							}
						}
					}
					if (Local_640.f_3 == 14)
					{
						if (iLocal_625 == 0)
						{
							if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_564(63))
							{
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_308("AMCH_BRBL", 30000);
									func_307(1);
									iLocal_625 = 1;
								}
							}
						}
						else if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_564(63))
						{
							if (func_12(PLAYER::PLAYER_ID(), 1, 1))
							{
								func_308("AMCH_BRBL2", 30000);
								func_307(1);
								MISC::SET_BIT(&uLocal_624, bParam0);
							}
						}
					}
				}
				break;
			
			case 9:
				if (!BitTest(uLocal_624, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						func_560("AMCH_WARN", func_410(Local_640.f_3), func_409(Local_640.f_3), 30000);
						func_307(0);
						Local_2992.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", false);
						MISC::SET_BIT(&uLocal_624, bParam0);
					}
				}
				break;
			}
	}
}

void func_560(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam3);
}

bool func_561(bool bParam0)
{
	return BitTest(Global_1668317.f_241.f_136[func_563(9) /*33*/][bParam0], func_562(9));
}

int func_562(int iParam0)
{
	return (iParam0 % 32);
}

int func_563(int iParam0)
{
	return (iParam0 / 32);
}

bool func_564(int iParam0)
{
	return Global_2672741.f_2518[0 /*80*/].f_1 == iParam0;
}

void func_565(int iParam0)
{
	Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3 = iParam0;
}

void func_566(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1), 4);
	}
}

int func_567(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_594(PLAYER::PLAYER_ID(), 14))
	{
		return 0;
	}
	if (func_175(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_175(PLAYER::PLAYER_ID(), 25))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return 0;
	}
	if (bParam1)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_365(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_593())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_592(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_591())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_117(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	else if (func_583(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	if (func_582(PLAYER::PLAYER_ID()) != func_113() && func_582(PLAYER::PLAYER_ID()) == func_91(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_580(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if (func_579(func_302()) && !func_359(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_578())
	{
		return 0;
	}
	if (func_328())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_367(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_576())
	{
		return 0;
	}
	if (func_175(PLAYER::PLAYER_ID(), 0) || func_175(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_175(PLAYER::PLAYER_ID(), 12) || func_175(PLAYER::PLAYER_ID(), 14)) || func_175(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_575(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!func_541() && !Global_2707279)
		{
			return 0;
		}
	}
	if (func_574(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_573())
	{
		return 0;
	}
	if (Global_1927715)
	{
		return 0;
	}
	if (func_402(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_572())
	{
		return 0;
	}
	if (func_570(PLAYER::PLAYER_ID()) && Global_1844902.f_172)
	{
		return 0;
	}
	if (func_569())
	{
		return 0;
	}
	if (func_469())
	{
		return 0;
	}
	if (Global_2737614)
	{
		return 0;
	}
	if (Global_1961366)
	{
		return 0;
	}
	if (func_311(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_468(PLAYER::PLAYER_ID()))
	{
		if (func_568(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_568(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return Global_1882422[iVar0 /*142*/].f_78.f_63 != 0;
	}
	return 0;
}

bool func_569()
{
	return Global_1942781.f_544;
}

int func_570(bool bParam0)
{
	if (func_571(Global_1845263[bParam0 /*877*/].f_267.f_34))
	{
		return 1;
	}
	return 0;
}

int func_571(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_572()
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_573()
{
	return Global_101444.f_394 > 0;
}

bool func_574(bool bParam0)
{
	return BitTest(Global_1845263[bParam0 /*877*/].f_267.f_32, 11);
}

int func_575(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0 == func_113())
	{
		return 0;
	}
	if (BitTest(Global_1845263[bParam0 /*877*/].f_267.f_32, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1845263[bParam0 /*877*/].f_267.f_32, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657921[bParam0 /*463*/].f_321.f_7 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_576()
{
	if (func_577() == 0)
	{
		return 1;
	}
	return 0;
}

int func_577()
{
	return Global_1574632.f_18;
}

bool func_578()
{
	return Global_1575079;
}

int func_579(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_580(bool bParam0, int iParam1)
{
	if (func_123(bParam0, 0))
	{
		return func_581(Global_1886967[bParam0 /*609*/].f_10.f_33) == iParam1;
	}
	return 0;
}

int func_581(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
		case 262:
		case 263:
		case 264:
		case 271:
		case 277:
		case 291:
		case 292:
		case 293:
		case 294:
		case 295:
		case 296:
		case 297:
		case 298:
		case 299:
		case 300:
		case 301:
		case 304:
		case 305:
		case 306:
		case 307:
		case 308:
		case 309:
		case 312:
		case 313:
		case 315:
		case 316:
		case 317:
		case 322:
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 330:
		case 331:
		case 332:
		case 333:
			return 0;
		
		case 276:
		case 267:
		case 318:
			return 3;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_582(bool bParam0)
{
	return Global_1886967[bParam0 /*609*/].f_10.f_35;
}

int func_583(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_403(bParam0) && !func_8(bParam0)) && !BitTest(Global_1886967[bParam0 /*609*/].f_1, 8));
	bVar2 = func_117(bParam0);
	uVar3 = func_177();
	uVar4 = func_584();
	if ((bVar1 && (func_468(bParam0) || func_429(bParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_119(bParam0)) && !func_314(bParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2738587.f_5234.f_222 != iVar0)
	{
		Global_2738587.f_5234.f_222 = iVar0;
	}
	return iVar0;
}

int func_584()
{
	if ((func_118(PLAYER::PLAYER_ID(), 21) || func_118(PLAYER::PLAYER_ID(), 22)) || func_588())
	{
		return 1;
	}
	if (func_586())
	{
		func_585(22);
		return 1;
	}
	return 0;
}

void func_585(bool bParam0)
{
	MISC::SET_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_4), bParam0);
}

int func_586()
{
	if (func_123(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_177() && !func_176()) || func_175(PLAYER::PLAYER_ID(), 21)) || func_175(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_587(27);
		}
	}
	return 0;
}

void func_587(bool bParam0)
{
	MISC::CLEAR_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_4), bParam0);
}

int func_588()
{
	return func_589(428, -1);
}

int func_589(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_590(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

var func_590(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(2, uParam0, func_210(uParam1));
}

bool func_591()
{
	return Global_1845263[PLAYER::PLAYER_ID() /*877*/] == 5;
}

int func_592(bool bParam0)
{
	if (Global_2657921[bParam0 /*463*/].f_272.f_4 != 0 || Global_2657921[bParam0 /*463*/].f_272.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_593()
{
	return BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_36.f_18, 0);
}

bool func_594(bool bParam0, int iParam1)
{
	return BitTest(Global_1886967[bParam0 /*609*/].f_10.f_5, iParam1);
}

void func_595()
{
	func_596(&(Local_728.f_534), &Local_728, 28, &(Local_728.f_1), &(Local_728.f_117), Local_640.f_3, 0, 0);
}

void func_596(var uParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	bool bVar35;
	bool bVar36;
	char* sVar37;
	int iVar38;
	struct<4> Var39;
	int iVar43;
	int iVar44;
	bool bVar45;
	float fVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	struct<2> Var58;
	
	if (func_712(iParam2))
	{
		return;
	}
	fVar46 = -1f;
	iVar47 = -1;
	iVar48 = -1;
	iVar50 = 0;
	iVar51 = 0;
	uParam3->f_36 = 0;
	if (func_710() || iParam2 == 29)
	{
		if (func_664(iParam1, iParam2, uParam3, Global_1836440, 0, func_713(), sParam7))
		{
			func_663(1);
			if ((!func_662() && !func_661()) || BitTest(Global_2738587.f_4694, 1))
			{
				if (func_660())
				{
					func_659();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_658(1);
						Global_1836440 = 0;
						iVar55 = -1;
						if (Global_1836664 != 1)
						{
							func_657(iParam1, 0, 0);
							if (BitTest(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 29)
						{
							iVar53 = 0;
							while (iVar53 < 32)
							{
								iVar1[iVar53] = -1;
								iVar53++;
							}
							iVar53 = 0;
							while (iVar53 < 32)
							{
								if (func_12(PLAYER::INT_TO_PLAYERINDEX(iVar53), 0, 1))
								{
									bVar36 = PLAYER::INT_TO_PLAYERINDEX(bVar53);
									if (!func_14(bVar36, 0))
									{
										if (func_653(bVar36) || func_651(bVar36, bVar35))
										{
											bVar45 = bVar36;
											if (func_93(bVar36))
											{
												iVar1[bVar45] = iVar56;
												iVar56++;
												iVar0++;
												func_648(&iVar1, bVar36, &iVar56, &iVar0, bVar35);
											}
										}
									}
								}
								bVar53++;
							}
						}
						if (!func_120(PLAYER::PLAYER_ID(), 0) && func_231(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						bVar53 = false;
						while (bVar53 < 32)
						{
							if (func_647())
							{
								if (func_12(PLAYER::INT_TO_PLAYERINDEX(bVar53), 0, 1))
								{
									bVar36 = PLAYER::INT_TO_PLAYERINDEX(bVar53);
								}
								else
								{
									bVar36 = func_113();
								}
							}
							else
							{
								bVar36 = (uParam0[bVar53 /*42*/])->f_1;
							}
							if ((func_646(bVar36) && func_643(bVar36, iParam2, bVar35)) && func_12(bVar36, 0, 1))
							{
								bVar45 = bVar36;
								iVar43 = Global_1845263[bVar45 /*877*/].f_205.f_6;
								Var39 = { func_637(bVar36) };
								if (bVar36 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar54;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar36), 64);
								*(uParam4[bVar53 /*13*/]) = { func_149(bVar36) };
								iVar38 = func_631(bVar36);
								sVar37 = "";
								if (iVar38 != 0)
								{
									sVar37 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar38);
								}
								Global_1836440++;
								if ((uParam0[bVar53 /*42*/])->f_22 != -1f)
								{
									fVar46 = (uParam0[bVar53 /*42*/])->f_22;
								}
								if ((uParam0[bVar53 /*42*/])->f_31 != -1)
								{
									iVar47 = (uParam0[bVar53 /*42*/])->f_31;
								}
								if ((uParam0[bVar53 /*42*/])->f_41 != -1)
								{
									iVar48 = (uParam0[bVar53 /*42*/])->f_41;
								}
								iVar44 = (uParam0[bVar53 /*42*/])->f_7;
								if (((uParam0[bVar53 /*42*/])->f_7 != -1 || (uParam0[bVar53 /*42*/])->f_22 != -1f) || (uParam0[bVar53 /*42*/])->f_31 != -1)
								{
									if (!func_647())
									{
										iVar51 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_629(&iVar44, &fVar46, (uParam0[bVar53 /*42*/])->f_7, iParam5);
									StringCopy(&(uParam3->f_104), func_296(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar49 = (uParam0[bVar53 /*42*/])->f_2 + 1;
									if (iVar55 != iVar49)
									{
										iVar55 = iVar49;
									}
									else
									{
										iVar49 = -2;
									}
								}
								iVar52 = func_628(bVar36, 0);
								if (bVar34)
								{
									if (func_92(bVar36, 1) && iVar1[bVar45] != -1)
									{
										iVar54 = iVar1[bVar45];
									}
									else
									{
										iVar54 = (iVar0 + iVar57);
										iVar57++;
									}
								}
								uParam3->f_38[bVar45 /*2*/].f_1 = iVar54;
								if ((uParam0[bVar53 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var58, "UW_TM", 16);
									StringIntConCat(&Var58, (uParam0[bVar53 /*42*/])->f_39, 16);
								}
								if (func_627(iParam5))
								{
									func_626(bVar36, iParam1, uParam3, iVar54, Var39, sVar37, iVar43, iVar44, iVar52, iVar51, fVar46, iVar44, iVar48, &Var58, (uParam0[bVar53 /*42*/])->f_40, iVar49, bParam6);
								}
								else
								{
									func_626(bVar36, iParam1, uParam3, iVar54, Var39, sVar37, iVar43, iVar44, iVar52, iVar51, fVar46, iVar47, iVar48, &Var58, (uParam0[bVar53 /*42*/])->f_40, iVar49, bParam6);
								}
								MISC::SET_BIT(&iVar50, bVar36);
								iVar54++;
							}
							bVar53++;
						}
						bVar53 = false;
						while (bVar53 < 32)
						{
							bVar36 = PLAYER::INT_TO_PLAYERINDEX(bVar53);
							if (func_12(bVar36, 0, 1) && !BitTest(iVar50, bVar36))
							{
								bVar36 = PLAYER::INT_TO_PLAYERINDEX(bVar53);
							}
							else
							{
								bVar36 = func_113();
							}
							if (func_646(bVar36))
							{
								if (func_12(PLAYER::INT_TO_PLAYERINDEX(bVar53), 0, 1))
								{
									bVar45 = bVar36;
									iVar43 = Global_1845263[bVar45 /*877*/].f_205.f_6;
									Var39 = { func_637(bVar36) };
									*(uParam4[bVar53 /*13*/]) = { func_149(bVar36) };
									iVar38 = func_631(bVar36);
									sVar37 = "";
									if (iVar38 != 0)
									{
										sVar37 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar38);
									}
									Global_1836440++;
									iVar52 = func_628(bVar36, 1);
									if (bVar34)
									{
										if (func_92(bVar36, 1))
										{
											iVar54 = iVar1[bVar53];
										}
										else
										{
											iVar54 = (iVar0 + iVar57);
											iVar57++;
										}
									}
									uParam3->f_38[bVar45 /*2*/].f_1 = iVar54;
									func_609(bVar36, PLAYER::GET_PLAYER_NAME(bVar36), iParam1, uParam3, iVar54, Var39, sVar37, iVar43, iVar52, iVar51);
									iVar54++;
								}
							}
							bVar53++;
						}
						if (BitTest(uParam3->f_33, 11))
						{
							func_606(uParam3, iParam1, iParam2);
						}
						func_47(&(uParam3->f_21));
						func_605();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!BitTest(uParam3->f_33, 7))
						{
							func_604(uParam3, iParam1);
							func_603(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_604(uParam3, iParam1);
						if (!BitTest(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_599(uParam3))
						{
							Global_1836664 = 1;
						}
						func_597(uParam3);
						if (Global_1836664 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1836664 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_605();
			func_658(0);
			if (BitTest(uParam3->f_33, 7))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (BitTest(uParam3->f_33, 10))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_597(var uParam0)
{
	if (!func_48(&(uParam0->f_21)))
	{
		func_2(&(uParam0->f_21), 0, 0);
	}
	else if (func_1(&(uParam0->f_21), 250, 0))
	{
		func_47(&(uParam0->f_21));
		func_598(0);
	}
}

void func_598(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1836664 != 2)
		{
			Global_1836664 = 2;
		}
	}
	else
	{
		switch (Global_1836664)
		{
			case 0:
				Global_1836664 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_599(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	bVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (bVar15 != func_113() && func_12(bVar15, 0, 1))
	{
		Var2 = { func_149(bVar15) };
		iVar1 = func_602(uParam0, uParam0->f_37);
		if (func_601(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_600(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_600(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_600(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_600(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_600(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_600(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_600(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_601(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_602(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_603(int* iParam0, bool bParam1, int iParam2)
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "COLLAPSE"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_604(var uParam0, int* iParam1)
{
	if (!BitTest(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_605()
{
	if (Global_1836664 != 0)
	{
		Global_1836664 = 0;
	}
}

void func_606(var uParam0, int* iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (bVar2 != func_113())
		{
			if (func_12(bVar2, 0, 1))
			{
				if (uParam0->f_38[bVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_608(uParam0->f_38[bVar0 /*2*/], 0, iParam2);
					func_607(iParam1, uParam0->f_38[bVar0 /*2*/].f_1, iVar1, Global_1845263[bVar0 /*877*/].f_205.f_6);
				}
			}
		}
		bVar0++;
	}
}

void func_607(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_ICON"))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

int func_608(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 65;
	switch (iParam2)
	{
		case 22:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_609(bool bParam0, char* sParam1, int* iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_625() && iParam4 < func_624())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1836442)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836664 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, sVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (BitTest(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_623("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			func_623(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_623("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			func_623("");
			if (uParam3->f_108 == 6)
			{
				func_623("");
			}
			else
			{
				func_623(&sParam5);
			}
			func_614(uParam3, bParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (func_613(uParam3))
			{
				func_612("DPAD_FRIEND");
			}
			else if (func_611(uParam3))
			{
				func_612("DPAD_FRIEND");
			}
			else if (func_610(uParam3))
			{
				func_612("DPAD_CREW");
			}
			else
			{
				func_612("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_610(var uParam0)
{
	return BitTest(uParam0->f_33, 6);
}

bool func_611(var uParam0)
{
	return BitTest(uParam0->f_33, 5);
}

void func_612(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_613(var uParam0)
{
	if (func_611(uParam0) && func_610(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_614(var uParam0, bool bParam1)
{
	if (func_622(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_618(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((BitTest(Global_4718592.f_27, 15) && bParam1 > -1) && bParam1 < 32) && BitTest(Global_2657921[bParam1 /*463*/].f_433, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (func_615())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

int func_615()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_616() || func_105())
		{
			return 1;
		}
	}
	return 0;
}

int func_616()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_105();
	}
	return func_617(Global_4718592.f_126144);
}

int func_617(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4850[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_618(bool bParam0)
{
	if ((func_12(bParam0, 0, 1) && func_619()) && func_270(bParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_619()
{
	if (func_403(PLAYER::PLAYER_ID()) || func_621())
	{
		if (!func_620(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_620(bool bParam0)
{
	if (func_334(bParam0) == 236 || func_334(bParam0) == 150)
	{
		return func_468(bParam0);
	}
	return 0;
}

int func_621()
{
	switch (func_231(PLAYER::PLAYER_ID()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_622(bool bParam0)
{
	if (func_615())
	{
		if (func_12(bParam0, 0, 1))
		{
			return func_93(bParam0);
		}
	}
	if (func_12(bParam0, 0, 1))
	{
		if (func_619())
		{
			if (func_272(bParam0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_623(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_624()
{
	int iVar0;
	
	if (Global_1836442)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_625()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1836442)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_626(bool bParam0, int* iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_625() && iParam3 < func_624())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1836442)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836664 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, sVar1))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
				if (BitTest(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_623("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_612(sParam16);
				}
				else
				{
					func_623(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_623("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				}
				if (func_647())
				{
					func_623("");
				}
				else if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_612(&(uParam2->f_104));
					}
					else
					{
						func_623("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
				}
				else
				{
					func_623("");
				}
				if (uParam2->f_108 == 6)
				{
					func_623("");
				}
				else
				{
					func_623(&sParam4);
				}
				func_614(uParam2, bParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_623("");
					func_623("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
				}
				if (func_613(uParam2))
				{
					func_612("DPAD_FRIEND");
				}
				else if (func_611(uParam2))
				{
					func_612("DPAD_FRIEND");
				}
				else if (func_610(uParam2))
				{
					func_612("DPAD_CREW");
				}
				else
				{
					func_612("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_627(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_628(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_403(bParam0)) && !func_117(bParam0))
	{
		iVar0 = func_67();
	}
	iVar1 = func_90(bParam0);
	if (!iVar1 == -1)
	{
		return func_88(iVar1);
	}
	return iVar0;
}

int func_629(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_630(iParam3))
	{
		*fParam1 = (func_298(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_627(iParam3))
	{
		*fParam1 = (func_298(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

int func_630(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_631(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_634(bParam0);
	if (iVar0 == -1)
	{
		func_632(bParam0, 1);
		return 0;
	}
	Global_1680805[iVar0 /*5*/].f_4 = 1;
	return Global_1680805[iVar0 /*5*/].f_2;
}

void func_632(bool bParam0, bool bParam1)
{
	if (!func_12(bParam0, 0, 1))
	{
		return;
	}
	if (func_634(bParam0) != -1)
	{
		return;
	}
	if (Global_1680968)
	{
		if (bParam0 == Global_1680968.f_1)
		{
			return;
		}
	}
	if (func_633(bParam0))
	{
		return;
	}
	if (Global_1681006 >= 32)
	{
		return;
	}
	Global_1680973[Global_1681006] = bParam0;
	Global_1681006++;
	if (bParam1)
	{
	}
}

int func_633(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1681006)
	{
		if (Global_1680973[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_634(bool bParam0)
{
	int iVar0;
	
	if (!func_12(bParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1680966 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1680966)
	{
		if (Global_1680805[iVar0 /*5*/].f_1 == bParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1680805[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1680805[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_635(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_635(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1680966)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1680805[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1680805[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1680805[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1680805[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1680966)
	{
		Global_1680805[iVar32 /*5*/] = { Global_1680805[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_636(&(Global_1680805[iVar32 /*5*/]));
	Global_1680966 = (Global_1680966 - 1);
}

void func_636(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_113();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_637(bool bParam0)
{
	char cVar0[32];
	
	if (func_12(bParam0, 0, 1))
	{
		Global_2706987 = { func_149(bParam0) };
		if (func_642())
		{
			if (func_601(Global_2706987))
			{
				if (!NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Global_2706987))
				{
					return cVar0;
				}
			}
		}
		else if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			return cVar0;
		}
		if (func_641(&Global_2706987))
		{
			Global_2706917 = { func_639(bParam0) };
			func_638(&Global_2706917, &cVar0);
		}
	}
	return cVar0;
}

void func_638(var* uParam0, char* sParam1)
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, sParam1);
}

struct<35> func_639(bool bParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_640(bParam0))
	{
		return Global_1575111[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_149(bParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

int func_640(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_641(var* uParam0)
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_642()
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_643(bool bParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 28)
	{
		if ((func_8(bParam0) || func_645(bParam0)) || func_7(bParam0))
		{
			return 0;
		}
	}
	if (!func_644(bParam0))
	{
		return 0;
	}
	if (!func_653(bParam0) && !func_651(bParam0, bParam2))
	{
		return 0;
	}
	return 1;
}

bool func_644(bool bParam0)
{
	return BitTest(Global_1845263[bParam0 /*877*/].f_139, 22);
}

int func_645(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return (BitTest(Global_1886967[bParam0 /*609*/].f_1, 10) || BitTest(Global_1886967[bParam0 /*609*/].f_1, 9));
	}
	return 0;
}

int func_646(bool bParam0)
{
	bool bVar0;
	
	if (bParam0 == func_113())
	{
		return 0;
	}
	if (func_14(bParam0, 0))
	{
		return 0;
	}
	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		if (BitTest(Global_1845263[bVar0 /*877*/].f_139, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_647()
{
	switch (func_231(PLAYER::PLAYER_ID()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_334(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_117(PLAYER::PLAYER_ID()))
	{
		switch (func_231(PLAYER::PLAYER_ID()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_620(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_648(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_12(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(bVar0);
			if (!func_14(bVar1, 0))
			{
				if (func_653(bVar1) || func_651(bVar1, bParam4))
				{
					if (func_649(bVar1, bParam1, 0))
					{
						(*iParam0)[bVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		bVar0++;
	}
}

int func_649(bool bParam0, int iParam1, bool bParam2)
{
	if (func_17(iParam1))
	{
		if (!bParam2)
		{
			if (func_650(bParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1886967[bParam0 /*609*/].f_10 != func_113())
		{
			return iParam1 == Global_1886967[bParam0 /*609*/].f_10;
		}
	}
	return 0;
}

int func_650(int iParam0, int iParam1)
{
	if (iParam1 != func_113())
	{
		if (iParam0 != func_113())
		{
			if (Global_1886967[iParam0 /*609*/].f_10 != func_113())
			{
				if (Global_1886967[iParam0 /*609*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_651(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		return 0;
	}
	return (Global_2657921[bParam0 /*463*/].f_246 != -1 || func_652(bParam0));
}

bool func_652(int iParam0)
{
	return Global_1845263[iParam0 /*877*/].f_192 != 0;
}

int func_653(bool bParam0)
{
	if (!func_12(bParam0, 0, 1))
	{
		return 0;
	}
	if (!func_12(PLAYER::PLAYER_ID(), 0, 1))
	{
		return 0;
	}
	if (!func_654(bParam0))
	{
		return 0;
	}
	if ((NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(bParam0, PLAYER::PLAYER_ID()) || func_231(bParam0) == 233) || func_231(bParam0) == 271)
	{
		return 1;
	}
	return 0;
}

int func_654(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_655(PLAYER::PLAYER_ID());
	bVar1 = func_655(bParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

var func_655(bool bParam0)
{
	return func_656(&(Global_2657921[bParam0 /*463*/].f_442), 0);
}

var func_656(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

void func_657(int* iParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_658(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1668314.f_2 == 0)
		{
			Global_1668314.f_2 = 1;
		}
	}
	else if (Global_1668314.f_2 == 1)
	{
		Global_1668314.f_2 = 0;
	}
}

void func_659()
{
	if (BitTest(Global_2738587.f_4694, 1))
	{
		if (func_315())
		{
			func_301();
		}
	}
}

int func_660()
{
	if (BitTest(Global_2738587.f_4694, 0) && func_315())
	{
		return 1;
	}
	if (BitTest(Global_2738587.f_4694, 1) && func_315())
	{
		return 1;
	}
	return 0;
}

int func_661()
{
	if (func_315())
	{
		if (func_55(Global_2672741.f_2518[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_662()
{
	if (func_315())
	{
		if (func_68(Global_2672741.f_2518[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_663(int iParam0)
{
	if (Global_1668314.f_1 != Global_1668314)
	{
		Global_1668314.f_1 = Global_1668314;
	}
	if (Global_1668314 != iParam0)
	{
		Global_1668314 = iParam0;
	}
}

int func_664(int* iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	char* sVar9;
	
	StringCopy(&Var0, "", 16);
	bVar5 = iParam1 == 21;
	bVar6 = func_709(iParam1);
	fVar7 = func_708();
	iVar8 = -1;
	if (iParam1 == 28 || iParam1 == 29)
	{
		if (func_707())
		{
			if (func_706() > 0 && Global_1836442)
			{
				HUD::THEFEED_HIDE_THIS_FRAME();
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::HIDE_HELP_TEXT_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_695())
		{
			func_694(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (BitTest(Global_2738587.f_4697, 26))
	{
		func_694(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_48(&(uParam2->f_19)))
	{
		if (func_706() == 1)
		{
			func_693(bVar6, iParam0, 0);
			func_2(&(uParam2->f_19), 0, 0);
			func_694(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2738587.f_4699), 5);
		}
	}
	if (func_48(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_1(&(uParam2->f_19), 10000, 0) || (func_706() == 0 && !bParam5))
		{
			func_694(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_692();
				if (iParam1 == 28 || iParam1 == 29)
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!BitTest(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_692();
					if (iParam1 == 28 || iParam1 == 29)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (func_693(bVar6, iParam0, 0))
				{
					func_657(iParam0, 0, 0);
					sVar4 = func_690(iParam1, &(Global_4718592.f_126151), bParam4);
					Var0 = { func_688(iParam1) };
					if (bParam4)
					{
						func_685(iParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 28)
					{
						func_679(iParam0, func_682(uParam2), func_680(uParam2), -1);
					}
					else if (iParam1 == 29)
					{
						sVar9 = func_673(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar9 = sParam6;
						}
						func_671(iParam0, sVar9, func_672(), -1);
					}
					else if (func_615())
					{
						uParam2->f_34 = Global_1836441;
						func_685(iParam0, sVar4, &Var0, 1, -1, Global_1836441, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_666(iParam1);
						uParam2->f_34 = Global_1836441;
						func_685(iParam0, sVar4, "", 0, iVar8, func_665(), 1);
					}
					else
					{
						iVar8 = func_666(iParam1);
						func_685(iParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), false);
				}
			}
			if (BitTest(uParam2->f_33, 0))
			{
				Global_1836440 = uParam3;
				Global_1836439 = 1;
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1836441)
					{
						MISC::CLEAR_BIT(&(uParam2->f_33), false);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_665()
{
	return Global_1836441;
}

int func_666(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_670())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 41:
			iVar0 = 22;
			break;
		
		case 0:
		case 32:
		case 31:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 42:
		case 43:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 27:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 13:
		case 14:
		case 15:
		case 18:
		case 44:
			iVar0 = 2;
			break;
		
		case 16:
			iVar0 = 17;
			break;
		
		case 17:
			iVar0 = 18;
			break;
		
		case 19:
			if (func_669(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_668(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_667(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_232())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_667(bool bParam0)
{
	return Global_2657921[bParam0 /*463*/].f_121 == 4;
}

bool func_668(bool bParam0)
{
	return Global_2657921[bParam0 /*463*/].f_121 == 7;
}

bool func_669(bool bParam0)
{
	return Global_2657921[bParam0 /*463*/].f_121 == 2;
}

bool func_670()
{
	return Global_4718592.f_1 == 0;
}

void func_671(int* iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_612(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_612("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_672()
{
	switch (func_231(PLAYER::PLAYER_ID()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_673(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_231(PLAYER::PLAYER_ID()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_675())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_269(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_269(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_674(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_182))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_674(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_675()
{
	return (func_678() && func_676(func_677()));
}

int func_676(int iParam0)
{
	return func_272(iParam0, 1);
}

int func_677()
{
	return Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_35;
}

bool func_678()
{
	return Global_1845263[PLAYER::PLAYER_ID() /*877*/] == 148;
}

void func_679(int* iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_612(sParam1);
		}
		else if (func_334(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_612("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_680(var uParam0)
{
	int iVar0;
	
	iVar0 = func_334(PLAYER::PLAYER_ID());
	if (func_681())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_333())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

bool func_681()
{
	return Global_1845131;
}

char* func_682(var uParam0)
{
	int iVar0;
	
	iVar0 = func_334(PLAYER::PLAYER_ID());
	if (func_681())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_684() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_684() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_333())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_683() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_683()
{
	return Global_2738587.f_5155;
}

int func_684()
{
	if (func_334(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2738587.f_5150;
	}
	return -1;
}

void func_685(int* iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_623(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_612(sParam1);
		}
		if (func_707() && iParam6)
		{
			if (func_687())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar1);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_612(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (func_686(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
			else if (func_65())
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_686(bool bParam0)
{
	if (func_669(bParam0) || func_668(bParam0))
	{
		return 1;
	}
	return 0;
}

bool func_687()
{
	return Global_1836442;
}

struct<4> func_688(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_689(PLAYER::PLAYER_ID()) || func_667(PLAYER::PLAYER_ID()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 13:
		case 14:
		case 15:
		case 18:
		case 16:
		case 17:
		case 19:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4718592.f_3251, 16);
			break;
	}
	if (func_615() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4718592.f_3251, 16);
	}
	return Var0;
}

bool func_689(bool bParam0)
{
	return Global_2657921[bParam0 /*463*/].f_121 == 5;
}

char* func_690(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 21 && (!func_615() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_691();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 26)
	{
		if (Global_1836684 == 0)
		{
			Global_1836684 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_1836684 == 1)
		{
			Global_1836684 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1836684 == 0)
		{
			Global_1836684 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 32:
			case 43:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 27:
			case 11:
			case 12:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 19:
			case 15:
			case 18:
			case 16:
			case 14:
			case 13:
			case 17:
			case 20:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 23:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_691()
{
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF";
	}
	if (NETWORK::NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS";
	}
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW() || unk_0xCDC936BF35EDCB73() > 0)
	{
		return "HUD_LBD_FMC";
	}
	if (NETWORK::NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_692()
{
	Global_44876 = 1;
}

bool func_693(bool bParam0, int* iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1);
}

void func_694(int* iParam0, var uParam1, bool bParam2)
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1836440 = 0;
	func_605();
	Global_1836439 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_48(&(uParam1->f_19)))
		{
			func_47(&(uParam1->f_19));
			MISC::CLEAR_BIT(&(Global_2738587.f_4699), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
	if (BitTest(uParam1->f_33, 0))
	{
		MISC::CLEAR_BIT(&(uParam1->f_33), false);
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
}

int func_695()
{
	if (func_705())
	{
		return 0;
	}
	if (func_591())
	{
		return 0;
	}
	if (!func_703())
	{
		return 0;
	}
	if (!func_576())
	{
		return 0;
	}
	if (func_702(8, -1))
	{
		return 0;
	}
	if (func_706() == 2)
	{
		return 0;
	}
	if (Global_2738587.f_4649)
	{
		return 0;
	}
	if (func_328())
	{
		return 0;
	}
	else if (!func_366(PLAYER::PLAYER_ID(), 1, 0) && Global_1573860[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_701(1) || func_699(1)) || Global_23572.f_124) || Global_23572)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_698() && Global_1962941 == 2)
	{
		return 0;
	}
	if (func_111(PLAYER::PLAYER_ID()) && !func_698())
	{
		return 0;
	}
	if (Global_1927715)
	{
		return 0;
	}
	if (Global_1927720)
	{
		return 0;
	}
	if (func_697(0))
	{
		return 0;
	}
	if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 4))
	{
		return 0;
	}
	if (Global_1662976)
	{
		return 0;
	}
	if ((Global_1957039.f_718.f_5 || Global_1959865.f_718.f_5) || Global_1956067.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1963945.f_724.f_5 || Global_1963945.f_744.f_724.f_5) || Global_1963945.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1970744.f_732.f_5)
	{
		return 0;
	}
	if (func_696(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1663018 || Global_1663019) || Global_1663020)
	{
		return 0;
	}
	return 1;
}

int func_696(bool bParam0)
{
	if (bParam0 == func_113())
	{
		return 0;
	}
	return BitTest(Global_2657921[bParam0 /*463*/].f_321.f_4, 6);
}

bool func_697(int iParam0)
{
	return BitTest(Global_2738587.f_5234.f_49, iParam0);
}

bool func_698()
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1962942, 0));
}

int func_699(bool bParam0)
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_700(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_23572.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0, 19)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0, 166) || PAD::IS_CONTROL_PRESSED(0, 167)) || PAD::IS_CONTROL_PRESSED(0, 168)) || PAD::IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_700(int iParam0)
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_701(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23572.f_4 && Global_23572.f_104 == 4);
	}
	return Global_23572.f_4;
}

bool func_702(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668317.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668317.f_1048, iParam0);
}

int func_703()
{
	if (func_704())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (MISC::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_704()
{
	return Global_1574604;
}

bool func_705()
{
	return MISC::GET_GAME_TIMER() <= Global_23711.f_6481 + 100;
}

int func_706()
{
	return Global_1668317.f_68;
}

int func_707()
{
	if (Global_1836441 > 16)
	{
		return 1;
	}
	return 0;
}

float func_708()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_709(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 22:
		case 28:
		case 29:
		case 41:
			return 1;
		
		default:
	}
	return 0;
}

int func_710()
{
	if (func_713())
	{
		return 1;
	}
	if (func_7(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_681())
	{
		return 1;
	}
	if (func_403(PLAYER::PLAYER_ID()))
	{
		switch (func_334(PLAYER::PLAYER_ID()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_711(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_711(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_711(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_711(bool bParam0)
{
	return BitTest(Global_1886967[bParam0 /*609*/].f_1, 4);
}

int func_712(int iParam0)
{
	if (iParam0 == 29)
	{
		if ((func_403(PLAYER::PLAYER_ID()) && !func_117(PLAYER::PLAYER_ID())) && !func_620(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 28)
	{
		if (func_123(PLAYER::PLAYER_ID(), 0) && func_117(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_583(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_713()
{
	if (func_714(PLAYER::PLAYER_ID()))
	{
		return Global_1581985;
	}
	return 0;
}

int func_714(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_14(bParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(bParam0);
		}
	}
	return 0;
}

void func_715()
{
	if (Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3 == 3)
	{
		if (!BitTest(uLocal_331, 8))
		{
			if ((!func_7(PLAYER::PLAYER_ID()) && !func_174(PLAYER::PLAYER_ID())) && !func_416(PLAYER::PLAYER_ID()))
			{
				func_415();
			}
		}
		else if (!BitTest(uLocal_331, 9))
		{
			if ((func_7(PLAYER::PLAYER_ID()) || func_174(PLAYER::PLAYER_ID())) || func_416(PLAYER::PLAYER_ID()))
			{
				STATS::STAT_STOP_RECORD_STAT();
				Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4 = 0;
				MISC::SET_BIT(&uLocal_331, 9);
			}
		}
	}
}

void func_716()
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_335)))
	{
		bVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bLocal_335));
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar0))
		{
			func_717(bVar0, 2);
		}
	}
	bLocal_335++;
	if (bLocal_335 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		bLocal_335 = false;
	}
}

void func_717(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (BitTest(Global_1836941.f_1, 0))
	{
		return;
	}
	if (func_48(&(Global_1836941.f_18)))
	{
		return;
	}
	if (BitTest(Global_1836941.f_2, bParam0))
	{
		if (Global_1836941 < iParam1 && BitTest(Global_1836941.f_1, 1))
		{
			MISC::SET_BIT(&(Global_1836941.f_1), false);
			return;
		}
		if (Global_1836941 != 0)
		{
			MISC::SET_BIT(&(Global_1836941.f_1), true);
		}
		Global_1836941 = 0;
		Global_1836941.f_2 = 0;
	}
	MISC::SET_BIT(&(Global_1836941.f_2), bParam0);
	bVar0 = true;
	if (func_8(bParam0))
	{
		bVar0 = false;
	}
	if (func_718(bParam0))
	{
		bVar0 = false;
	}
	if (func_14(bParam0, 0))
	{
		bVar0 = false;
	}
	if (func_7(bParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_1836941++;
	}
}

bool func_718(bool bParam0)
{
	return BitTest(Global_1886967[bParam0 /*609*/].f_1, 10);
}

void func_719(int iParam0, int iParam1)
{
	Local_2607[iParam0 /*12*/] = iParam1;
}

int func_720()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_728.f_534[iVar0 /*42*/].f_1 = func_113();
		iVar0++;
	}
	return 1;
}

int func_721()
{
	return Local_640.f_0;
}

int func_722(int iParam0)
{
	return Local_2607[iParam0 /*12*/];
}

void func_723()
{
	if (BitTest(Global_1836941.f_1, 6))
	{
		func_747();
		MISC::CLEAR_BIT(&(Global_1836941.f_1), 6);
	}
	if (!BitTest(Global_1836941.f_1, 7))
	{
		if (BitTest(Global_1836941.f_1, 4) || BitTest(Global_1836941.f_1, 16))
		{
			if (((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_315()) && func_12(PLAYER::PLAYER_ID(), 1, 1))
			{
				MISC::SET_BIT(&(Global_1836941.f_1), 7);
				func_308("FME_PASINT", 30000);
				func_307(1);
			}
		}
		else if (BitTest(Global_1836941.f_1, 17))
		{
			if (func_177() && !func_176())
			{
				MISC::CLEAR_BIT(&(Global_1836941.f_1), 17);
				MISC::SET_BIT(&(Global_1836941.f_1), 16);
			}
		}
	}
	if (!BitTest(Global_1836941.f_1, 23))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2738587.f_853, 2)) && func_12(PLAYER::PLAYER_ID(), 1, 1)) && !Global_76369) && !Global_61219) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (func_745())
			{
				func_308("AMEV_GA_RP", -1);
				if (func_231(PLAYER::PLAYER_ID()) != 200)
				{
					func_307(1);
				}
				MISC::SET_BIT(&(Global_1836941.f_1), 23);
			}
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_429(PLAYER::PLAYER_ID()))
		{
			if (!HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
			{
				HUD::PAUSE_MENU_ACTIVATE_CONTEXT(1344549371);
			}
		}
		else if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
		{
			HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1344549371);
		}
	}
	if (BitTest(Global_1836941.f_1, 9))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_315()) && func_12(PLAYER::PLAYER_ID(), 1, 1)) && !func_175(PLAYER::PLAYER_ID(), 21)) && !func_175(PLAYER::PLAYER_ID(), 25))
		{
			MISC::CLEAR_BIT(&(Global_1836941.f_1), 9);
			func_744(0);
			func_308("FME_TBL00", -1);
			func_307(1);
		}
	}
	if (func_403(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(Global_1836941.f_1, 18))
		{
			if ((func_175(PLAYER::PLAYER_ID(), 21) && BitTest(Global_1836941.f_1, 20)) && !BitTest(Global_1836941.f_1, 19))
			{
				MISC::SET_BIT(&(Global_1836941.f_1), 18);
			}
		}
		else if (BitTest(Global_1836941.f_1, 18))
		{
			if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_315()) && func_12(PLAYER::PLAYER_ID(), 1, 1)) && CAM::IS_SCREEN_FADED_IN()) && !func_743())
			{
				MISC::CLEAR_BIT(&(Global_1836941.f_1), 18);
				MISC::SET_BIT(&(Global_1836941.f_1), 19);
				func_308("AMTT_RPAS", -1);
				func_307(1);
			}
		}
	}
	if (((((func_403(PLAYER::PLAYER_ID()) && !func_8(PLAYER::PLAYER_ID())) && func_334(PLAYER::PLAYER_ID()) != 146) && !func_7(PLAYER::PLAYER_ID())) && !func_174(PLAYER::PLAYER_ID())) && !func_733())
	{
		if (func_428(func_334(PLAYER::PLAYER_ID())))
		{
			PLAYER::SET_LAW_PEDS_CAN_ATTACK_NON_WANTED_PLAYER_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		if (!BitTest(Global_1836941.f_1, 22))
		{
			MISC::SET_BIT(&(Global_1836941.f_1), 22);
		}
		if (func_468(PLAYER::PLAYER_ID()) || func_422())
		{
			if (!BitTest(Global_1836941.f_1, 10))
			{
				if (func_732(func_334(PLAYER::PLAYER_ID())))
				{
					if (func_276(0) && !Global_4594666)
					{
						MISC::SET_BIT(&(Global_1836941.f_1), 9);
					}
					if (!Global_4594666)
					{
						func_426(1);
						MISC::SET_BIT(&(Global_1836941.f_1), 14);
					}
				}
				MISC::SET_BIT(&(Global_1836941.f_1), 10);
			}
		}
		if (func_429(PLAYER::PLAYER_ID()))
		{
			if (!BitTest(Global_1836941.f_1, 11))
			{
				if (!Global_101444.f_8)
				{
					MISC::SET_BIT(&(Global_1836941.f_1), 12);
					func_424(1);
				}
				if (!func_731())
				{
					MISC::SET_BIT(&(Global_1836941.f_1), 13);
					func_423();
				}
				if (!Global_4594666)
				{
					MISC::SET_BIT(&(Global_1836941.f_1), 14);
					if (func_276(0) && !Global_4594666)
					{
						MISC::SET_BIT(&(Global_1836941.f_1), 9);
					}
					func_426(1);
				}
				MISC::SET_BIT(&(Global_1836941.f_1), 11);
			}
		}
		else
		{
			func_729(0);
		}
	}
	else
	{
		func_729(1);
	}
	func_724();
	if (func_421(func_334(PLAYER::PLAYER_ID())) && !BitTest(Global_1836941.f_1, 21))
	{
		MISC::SET_BIT(&(Global_1836941.f_1), 21);
	}
	if (((func_177() && !func_176()) || func_175(PLAYER::PLAYER_ID(), 21)) || func_175(PLAYER::PLAYER_ID(), 25))
	{
		if (!BitTest(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1, 10))
		{
			MISC::SET_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1), 10);
		}
	}
	else if (BitTest(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1, 10))
	{
		MISC::CLEAR_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1), 10);
	}
}

void func_724()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_315())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_564(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 63 || iVar0 >= 81)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (BitTest(Global_1836941.f_1, 26))
				{
					MISC::CLEAR_BIT(&(Global_1836941.f_1), 26);
				}
				func_725(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!BitTest(Global_1836941.f_1, 26))
	{
		func_47(&(Global_1836941.f_22));
		MISC::SET_BIT(&(Global_1836941.f_1), 26);
	}
}

void func_725(int iParam0, int iParam1)
{
	if (!func_48(&(Global_1836941.f_22)))
	{
		func_2(&(Global_1836941.f_22), 0, 0);
	}
	else if (func_1(&(Global_1836941.f_22), iParam1, 0))
	{
		if (func_706() > 0)
		{
			func_728(iParam0);
			if (func_305("AMEV_LBD_HELP"))
			{
				HUD::CLEAR_HELP(true);
			}
			func_47(&(Global_1836941.f_22));
		}
	}
	else
	{
		func_727(0);
		func_726();
	}
}

void func_726()
{
	Global_2738587.f_4636 = 0;
}

void func_727(int iParam0)
{
	Global_1668317.f_68 = iParam0;
}

void func_728(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2672741.f_2518[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2672741.f_2518[iVar0 /*80*/].f_2 = 5;
			func_114(&(Global_2672741.f_2518[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_729(int iParam0)
{
	if ((BitTest(Global_1836941.f_1, 11) || (BitTest(Global_1836941.f_1, 10) && iParam0)) || (BitTest(Global_1836941.f_1, 22) && iParam0))
	{
		if (BitTest(Global_1836941.f_1, 12))
		{
			MISC::CLEAR_BIT(&(Global_1836941.f_1), 12);
			func_424(0);
		}
		if (BitTest(Global_1836941.f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1836941.f_1), 13);
			func_730();
		}
		if (BitTest(Global_1836941.f_1, 14) && !func_123(PLAYER::PLAYER_ID(), 0))
		{
			MISC::CLEAR_BIT(&(Global_1836941.f_1), 14);
			func_426(0);
		}
		MISC::CLEAR_BIT(&(Global_1836941.f_1), 11);
		MISC::CLEAR_BIT(&(Global_1836941.f_1), 10);
		MISC::CLEAR_BIT(&(Global_1836941.f_1), 22);
	}
}

void func_730()
{
	MISC::CLEAR_BIT(&(Global_2738587.f_5069), false);
}

bool func_731()
{
	return BitTest(Global_2738587.f_5069, 0);
}

int func_732(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return 1;
		
		case 131:
		case 146:
			return func_429(PLAYER::PLAYER_ID());
		
		case 133:
			return (func_422() || func_5(func_333()));
		
		default:
	}
	return 0;
}

int func_733()
{
	if (((((((((func_742() || func_741()) || func_740()) || func_328()) || (func_739() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_736() && !func_735())) || Global_2625211) || Global_2625211.f_1 != 0) || Global_2625286 != 0) || (func_734() == 2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
	{
		return 1;
	}
	return 0;
}

int func_734()
{
	return Global_1057441;
}

bool func_735()
{
	return BitTest(Global_2684312.f_2, 27);
}

int func_736()
{
	if (func_738() || func_737())
	{
		return Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_95 == 8;
	}
	return 0;
}

var func_737()
{
	return Global_2684312.f_735;
}

var func_738()
{
	return BitTest(Global_2684312.f_2, 11);
}

var func_739()
{
	return BitTest(Global_2684312, 5);
}

var func_740()
{
	return BitTest(Global_2684312, 2);
}

var func_741()
{
	return BitTest(Global_2684312, 20);
}

bool func_742()
{
	return Global_2684312.f_698;
}

bool func_743()
{
	return Global_2738587.f_5164 != -1;
}

void func_744(int iParam0)
{
	int iVar0;
	
	iVar0 = func_215(2537, -1);
	if (iParam0 == 0)
	{
		if (!BitTest(iVar0, 0))
		{
			MISC::SET_BIT(&iVar0, false);
		}
		else if (!BitTest(iVar0, 1))
		{
			MISC::SET_BIT(&iVar0, true);
		}
		else if (!BitTest(iVar0, 2))
		{
			MISC::SET_BIT(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!BitTest(iVar0, 3))
		{
			MISC::SET_BIT(&iVar0, 3);
		}
		else if (!BitTest(iVar0, 4))
		{
			MISC::SET_BIT(&iVar0, 4);
		}
		else if (!BitTest(iVar0, 5))
		{
			MISC::SET_BIT(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!BitTest(iVar0, 6))
		{
			MISC::SET_BIT(&iVar0, 6);
		}
		else if (!BitTest(iVar0, 7))
		{
			MISC::SET_BIT(&iVar0, 7);
		}
		else if (!BitTest(iVar0, 8))
		{
			MISC::SET_BIT(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!BitTest(iVar0, 9))
		{
			MISC::SET_BIT(&iVar0, 9);
		}
		else if (!BitTest(iVar0, 10))
		{
			MISC::SET_BIT(&iVar0, 10);
		}
		else if (!BitTest(iVar0, 11))
		{
			MISC::SET_BIT(&iVar0, 11);
		}
	}
	func_208(2537, iVar0, -1, 1);
}

int func_745()
{
	int iVar0;
	
	if (!func_48(&(Global_1836941.f_15)))
	{
		func_2(&(Global_1836941.f_15), 0, 0);
		Global_1836941.f_17 = 0;
	}
	else if (func_1(&(Global_1836941.f_15), 1000, 0))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1836941.f_17)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1836941.f_17));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if (func_12(bVar0, 1, 1) && func_746(bVar0, 6))
				{
					if (SYSTEM::VDIST(func_39(PLAYER::PLAYER_ID()), func_39(bVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1836941.f_17++;
		if (Global_1836941.f_17 >= 32)
		{
			Global_1836941.f_17 = 0;
			func_47(&(Global_1836941.f_15));
		}
	}
	return 0;
}

int func_746(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_405() != 0)
	{
		return 0;
	}
	if (!func_214(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1845263[iVar0 /*877*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_747()
{
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_749();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::CLEAR_BIT(&(Global_1836941.f_1), 8);
	func_748();
}

void func_748()
{
	if (Global_1937732)
	{
		if (BitTest(Global_1937733, 0))
		{
			MISC::CLEAR_BIT(&Global_2748465, false);
		}
		if (BitTest(Global_1937733, 1))
		{
			MISC::CLEAR_BIT(&Global_2748465, true);
		}
		if (BitTest(Global_1937733, 5))
		{
			MISC::CLEAR_BIT(&Global_2748465, 5);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-355737150))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-355737150, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-580979506))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-580979506, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1426452475))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1426452475, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(745417724))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(745417724, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1305304906))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1305304906, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1543175077))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1543175077, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-811770997))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-811770997, 1, false, false);
		}
		Global_1937733 = 0;
	}
	Global_1937732 = 0;
}

void func_749()
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2738587.f_5230))
	{
		if (!Global_2738587.f_5230 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2738587.f_5229 < 1f)
		{
			return;
		}
	}
	Global_2738587.f_5230 = -1;
	Global_2738587.f_5229 = 1f;
}

int func_750()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_2738587.f_5067)
	{
		return 0;
	}
	if ((!func_48(&(Local_640.f_39)) && !func_48(&(Local_640.f_41))) && !func_48(&(Local_640.f_43)))
	{
		return 0;
	}
	iVar2 = NETWORK::GET_NETWORK_TIME();
	if (func_48(&(Local_640.f_41)))
	{
		iVar0 = func_751(&iVar2, &(Local_640.f_41));
		iVar1 = 20000;
	}
	else if (func_48(&(Local_640.f_39)))
	{
		iVar0 = func_751(&iVar2, &(Local_640.f_39));
		iVar1 = func_29(0);
	}
	else if (func_48(&(Local_640.f_43)))
	{
		iVar0 = func_751(&iVar2, &(Local_640.f_43));
		iVar1 = func_30();
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_751(int iParam0, var uParam1)
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*iParam0, *uParam1));
}

int func_752()
{
	if (func_753())
	{
		return 1;
	}
	return 0;
}

bool func_753()
{
	return Global_1836941.f_24;
}

int func_754()
{
	if (Global_1575052 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_757())
	{
		return 1;
	}
	if (Global_2698534)
	{
		return 1;
	}
	if (func_756())
	{
		return 1;
	}
	if (func_755(159))
	{
		if (!func_742())
		{
			return 1;
		}
	}
	if (func_755(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_431() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_431()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_755(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_756()
{
	return Global_2695951;
}

bool func_757()
{
	return Global_2684312.f_693;
}

void func_758()
{
	SYSTEM::WAIT(0);
}

void func_759()
{
	int iVar0;
	
	if (func_754())
	{
		Local_2992.f_5 = 5;
	}
	else if (BitTest(Local_640.f_2, 0))
	{
		Local_2992.f_5 = 6;
	}
	else if (func_21(0))
	{
		Local_2992.f_5 = 1;
	}
	else
	{
		Local_2992.f_5 = 2;
	}
	Local_2992.f_0 = Local_640.f_52;
	Local_2992.f_1 = Local_640.f_53;
	Local_2992.f_4 = Local_640.f_66;
	Local_2992.f_3 = Local_640.f_51;
	Local_2992.f_10 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Local_2992.f_9);
	if (!Global_262145.f_12174)
	{
		if (Local_2992.f_6 > 0)
		{
		}
	}
	if (func_19())
	{
		iVar0 = 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
		{
			func_797(Local_2992, Local_640.f_3, Local_2607[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4, iVar0, -1, -1, -1);
		}
	}
	if (BitTest(uLocal_331, 4))
	{
		AUDIO::STOP_SOUND(iLocal_339);
		MISC::CLEAR_BIT(&uLocal_331, 4);
	}
	AUDIO::RELEASE_SOUND_ID(iLocal_339);
	AUDIO::RELEASE_SOUND_ID(iLocal_340);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if ((BitTest(uLocal_626, iVar0) && iLocal_627[iVar0] != -1) && !AUDIO::HAS_SOUND_FINISHED(iLocal_627[iVar0]))
		{
			AUDIO::STOP_SOUND(iLocal_627[iVar0]);
			AUDIO::RELEASE_SOUND_ID(iLocal_627[iVar0]);
		}
		iVar0++;
	}
	func_412();
	func_479(1, 1);
	VEHICLE::SET_DISABLE_BMX_EXTRA_TRICK_FORCES(0);
	func_566(0);
	func_419(Local_640.f_3, 0);
	func_760(133, 0, Local_640.f_37 == 6);
	func_418(23, 0);
	if (func_320() >= 0f)
	{
		HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(0f, false, 21);
	}
	if (!BitTest(uLocal_331, 9))
	{
		STATS::STAT_STOP_RECORD_STAT();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_760(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (iParam0 == 133)
	{
		func_795(79, 1);
	}
	else
	{
		func_795(80, 1);
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (BitTest(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1), 13);
		}
		if (BitTest(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1, 14))
		{
			MISC::CLEAR_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1), 14);
		}
	}
	if (BitTest(Global_1836941.f_1, 21))
	{
		MISC::CLEAR_BIT(&(Global_1836941.f_1), 21);
	}
	func_791();
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
	if (bParam1)
	{
		uVar0 = func_790(func_334(PLAYER::PLAYER_ID()));
		func_418(func_437(iParam0), 0);
	}
	else
	{
		if ((bParam2 && PLAYER::PLAYER_ID() != -1) && func_789(PLAYER::PLAYER_ID()) >= 12)
		{
			func_788(2549, -1);
			iVar1 = func_215(2549, -1);
			if (iVar1 == 2)
			{
				MISC::SET_BIT(&Global_1836967, false);
			}
			else if (iVar1 == 4)
			{
				MISC::SET_BIT(&Global_1836967, true);
			}
			else if (iVar1 == 6)
			{
				MISC::SET_BIT(&Global_1836967, 2);
			}
			else if (iVar1 == 8)
			{
				MISC::SET_BIT(&Global_1836967, 3);
			}
			else if (iVar1 == 10)
			{
				MISC::SET_BIT(&Global_1836967, 4);
			}
			else if (iVar1 == 12)
			{
				MISC::SET_BIT(&Global_1836967, 5);
			}
		}
		func_787();
		func_786();
		func_785();
		if ((!func_119(PLAYER::PLAYER_ID()) && !func_314(PLAYER::PLAYER_ID())) && !func_470())
		{
			func_769();
		}
		func_768();
		if (!BitTest(Global_1940367.f_3, 0) && !BitTest(Global_1940367.f_3, 1))
		{
			func_747();
		}
		func_767();
		MISC::CLEAR_BIT(&(Global_2738587.f_1848), 2);
		func_766();
		func_179();
	}
	if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if (((PLAYER::PLAYER_ID() != -1 && !func_175(PLAYER::PLAYER_ID(), 21)) && !func_175(PLAYER::PLAYER_ID(), 25)) && !func_123(PLAYER::PLAYER_ID(), 0))
		{
			func_426(0);
			func_424(0);
			if (!bParam1)
			{
				func_765();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_51(26, -1))
		{
			Global_2698462 = -1;
			func_49(26, -1);
		}
	}
	if (!func_761())
	{
		Global_2706878 = 1;
	}
}

int func_761()
{
	if (((((((!func_686(PLAYER::PLAYER_ID()) && !func_667(PLAYER::PLAYER_ID())) && func_334(PLAYER::PLAYER_ID()) != 146) && !func_764()) && !func_763()) && !func_762(Global_4718592.f_183007)) && !func_103()) && !BitTest(Global_4718592.f_38, 28))
	{
		return 0;
	}
	return 1;
}

bool func_762(int iParam0)
{
	return iParam0 == 57;
}

int func_763()
{
	if (Global_4718592.f_126144 == Global_262145.f_10249)
	{
		return 1;
	}
	return 0;
}

int func_764()
{
	if ((Global_4718592 == 0 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && (((((((Global_4718592.f_5 != 0 || Global_4718592.f_183007 > 0) || BitTest(Global_4718592.f_4, 15)) || BitTest(Global_4718592.f_4, 18)) || BitTest(Global_4718592.f_4, 19)) || BitTest(Global_4718592.f_4, 29)) || BitTest(Global_4718592.f_4, 28)) || BitTest(Global_4718592.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_765()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1573885)
	{
		if (BitTest(Global_4544310[iVar0 /*26*/].f_12, 11))
		{
			if (BitTest(Global_4544310[iVar0 /*26*/].f_13, 26))
			{
				MISC::CLEAR_BIT(&(Global_4544310[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_766()
{
	if (BitTest(Global_2738587.f_5068, 1))
	{
		MISC::CLEAR_BIT(&(Global_2738587.f_5068), true);
	}
	if (Global_2738587.f_5068 > 0)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
		AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
		Global_2738587.f_5068 = 0;
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
		AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
		if (!MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "am_pi_menu"))
		{
			if (Global_2738587.f_5078 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2738587.f_5078);
				Global_2738587.f_5078 = -1;
			}
		}
	}
}

void func_767()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1836941 = { Var0 };
}

void func_768()
{
	var uVar0;
	
	Global_1581985 = uVar0;
}

void func_769()
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635562.f_24), &Global_2640158, 2);
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635562.f_26), &Global_2640160, 19);
	func_783();
	func_772(1, 1, 0);
	func_770();
}

void func_770()
{
	func_771(0, 0);
}

void func_771(int iParam0, int iParam1)
{
	Global_2635562.f_22 = iParam0;
	Global_2635562.f_23 = iParam1;
}

void func_772(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2635562.f_45), &Global_2640179, 323);
	}
	else
	{
		Global_2635562.f_45 = { Global_2640179 };
		Global_2635562.f_45.f_49 = { Global_2640179.f_49 };
		Global_2635562.f_45.f_52 = Global_2640179.f_52;
		Global_2635562.f_45.f_53 = Global_2640179.f_53;
	}
	if (bParam0)
	{
		func_782();
	}
	if (!bParam2)
	{
		func_774(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_773(0);
	func_182();
}

void func_773(bool bParam0)
{
	if (bParam0)
	{
		Global_2635562.f_713 = 0;
	}
	else
	{
		Global_2635562.f_713 = 1;
	}
}

void func_774(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_781())
		{
			func_780();
		}
		Global_2635562.f_714.f_668 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2635562.f_714.f_654 = iParam1;
		Global_2635562.f_714.f_655 = iParam2;
		Global_2635562.f_714.f_656 = iParam10;
		func_778();
		func_465(8, 0, 0, 0, 0);
		Global_2635562.f_714.f_657 = iParam11;
		Global_2635562.f_714.f_662 = iParam3;
		Global_2635562.f_714.f_663 = iParam4;
		Global_2635562.f_714.f_660 = iParam5;
		Global_2635562.f_714.f_661 = iParam6;
		Global_2635562.f_714.f_664 = iParam7;
		Global_2635562.f_714.f_665 = iParam8;
		Global_2635562.f_714.f_666 = iParam9;
		Global_2635562.f_714.f_667 = iParam14;
		Global_2635562.f_714.f_658 = iParam12;
		Global_2635562.f_714.f_659 = iParam13;
		Global_2635562.f_2053 = 1;
	}
	else
	{
		func_775();
	}
}

void func_775()
{
	if (func_781() && !func_777())
	{
		func_780();
	}
	if (func_777())
	{
		func_776();
	}
	else
	{
		func_778();
		func_465(0, 0, 0, 0, 0);
		Global_2635562.f_2053 = 0;
		Global_2635562.f_2052 = 0;
	}
}

void func_776()
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635562.f_714), &(Global_2635562.f_1383), 669);
	Global_2635562.f_490 = { Global_2635562.f_496 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635562.f_714.f_668)
	{
		Global_2635562.f_2052 = 0;
	}
}

int func_777()
{
	if ((Global_2635562.f_2052 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635562.f_1383.f_668) && SCRIPT::IS_THREAD_ACTIVE(Global_2635562.f_1383.f_668))
	{
		return 1;
	}
	return 0;
}

void func_778()
{
	if (func_781() && !func_777())
	{
		func_780();
	}
	func_779();
	Global_2635562.f_714 = 0;
	Global_2635562.f_714.f_602 = 0;
}

void func_779()
{
	int iVar0;
	struct<6> Var1;
	struct<3> Var7;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2635562.f_714.f_1[iVar0 /*6*/] = { Var1 };
		iVar0++;
	}
	Var7 = -1;
	Var7.f_2 = -3;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_2635562.f_714.f_603[iVar0 /*3*/] = { Var7 };
		iVar0++;
	}
}

void func_780()
{
	if (func_777())
	{
		if (Global_2635562.f_714.f_668 == Global_2635562.f_1383.f_668)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635562.f_714.f_668)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2635562.f_1383), &(Global_2635562.f_714), 669);
		Global_2635562.f_496 = { Global_2635562.f_490 };
		Global_2635562.f_2052 = 1;
	}
}

int func_781()
{
	if ((Global_2635562.f_2053 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635562.f_714.f_668) && SCRIPT::IS_THREAD_ACTIVE(Global_2635562.f_714.f_668))
	{
		return 1;
	}
	return 0;
}

void func_782()
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635562.f_368), &Global_2640502, 121);
}

void func_783()
{
	func_784();
}

void func_784()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2635562.f_2563[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2635562.f_2562 = 0;
}

void func_785()
{
	Global_2738587.f_5069 = 0;
}

void func_786()
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1 = 0;
	}
}

void func_787()
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1886967[iVar0 /*609*/] = -1;
	}
}

void func_788(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_215(iParam0, func_210(iParam1));
	iVar0++;
	func_208(iParam0, iVar0, iParam1, 1);
}

int func_789(int iParam0)
{
	return Global_1845263[iParam0 /*877*/].f_205.f_6;
}

int func_790(int iParam0)
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return 1;
		
		case 146:
			if (func_429(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_791()
{
	if (BitTest(Global_2738587.f_1835, 3) || BitTest(Global_2738587.f_1835, 4))
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
	}
	if (BitTest(Global_2738587.f_1835, 5))
	{
		MISC::CLEAR_BIT(&(Global_2738587.f_1835), 5);
	}
	if (BitTest(Global_2738587.f_1835, 3))
	{
		MISC::CLEAR_BIT(&(Global_2738587.f_1835), 3);
	}
	if (BitTest(Global_2738587.f_1835, 4))
	{
		MISC::CLEAR_BIT(&(Global_2738587.f_1835), 4);
	}
	func_794(0);
	func_793(0);
	func_792(0);
}

void func_792(int iParam0)
{
	if (Global_2738587.f_4624 != iParam0)
	{
		Global_2738587.f_4624 = iParam0;
	}
}

void func_793(bool bParam0)
{
	if (Global_2738587.f_4623 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2738587.f_4623 = bParam0;
	}
}

void func_794(int iParam0)
{
	if (Global_2738587.f_4621 != iParam0)
	{
		Global_2738587.f_4621 = iParam0;
	}
}

void func_795(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!func_796())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Global_2737646[iVar0 /*6*/] == iParam0)
		{
			if (Global_1574748.f_4[iVar0] == -1)
			{
				Global_1574748.f_4[iVar0] = iParam0;
				Global_1574748.f_1 = 1;
				Global_1574748 = iParam1;
				return;
			}
		}
		iVar0++;
	}
}

int func_796()
{
	if (Global_262145.f_36061)
	{
		return 1;
	}
	return 0;
}

void func_797(struct<12> Param0, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	char* sVar0;
	struct<13> Var1;
	struct<17> Var14;
	struct<18> Var31;
	struct<14> Var55;
	struct<13> Var69;
	struct<14> Var82;
	struct<14> Var96;
	struct<16> Var110;
	struct<13> Var126;
	struct<14> Var139;
	struct<14> Var153;
	struct<13> Var167;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_79248)
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			STATS::PLAYSTATS_FM_EVENT_VEHICLETARGET(&Var1);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, func_798()))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			Var14.f_14 = iParam14;
			Var14.f_15 = iParam15;
			Var14.f_16 = iParam16;
			STATS::PLAYSTATS_FM_EVENT_ATOB(&Var14);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
		{
			Var31 = { Param0 };
			Var31.f_12 = uParam12;
			Var31.f_13 = iParam13;
			Var31.f_14 = iParam14;
			Var31.f_15 = iParam15;
			Var31.f_16 = iParam16;
			Var31.f_17 = iParam17;
			STATS::PLAYSTATS_FM_EVENT_CHECKPOINTCOLLECTION(&Var31);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
		{
			Var55 = { Param0 };
			Var55.f_12 = uParam12;
			Var55.f_13 = SYSTEM::TO_FLOAT(iParam13);
			if (iParam14 == 1)
			{
				Var55.f_13 = (Var55.f_13 / 10f);
			}
			STATS::PLAYSTATS_FM_EVENT_CHALLENGES(&Var55);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
		{
			STATS::PLAYSTATS_FM_EVENT_PENNEDIN(&Param0);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
		{
			Var69 = { Param0 };
			Var69.f_12 = uParam12;
			STATS::PLAYSTATS_FM_EVENT_PASSTHEPARCEL(&Var69);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
		{
			Var82 = { Param0 };
			Var82.f_12 = uParam12;
			Var82.f_13 = iParam13;
			STATS::PLAYSTATS_FM_EVENT_HOTPROPERTY(&Var82);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
		{
			Var96 = { Param0 };
			Var96.f_12 = uParam12;
			Var96.f_13 = iParam13;
			STATS::PLAYSTATS_FM_EVENT_DEADDROP(&Var96);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
		{
			Var110 = { Param0 };
			Var110.f_12 = uParam12;
			Var110.f_13 = iParam13;
			Var110.f_14 = iParam14;
			Var110.f_15 = iParam15;
			STATS::PLAYSTATS_FM_EVENT_KINGOFTHECASTLE(&Var110);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var126 = { Param0 };
			Var126.f_12 = uParam12;
			STATS::PLAYSTATS_FM_EVENT_CRIMINALDAMAGE(&Var126);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var139 = { Param0 };
				Var139.f_12 = uParam12;
				Var139.f_13 = iParam13;
				STATS::PLAYSTATS_FM_EVENT_URBANWARFARE(&Var139);
			}
			else
			{
				Var153 = { Param0 };
				Var153.f_12 = uParam12;
				Var153.f_13 = iParam13;
				STATS::PLAYSTATS_FM_EVENT_COMPETITIVEURBANWARFARE(&Var153);
			}
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hunt_the_beast"))
		{
			Var167 = { Param0 };
			Var167.f_12 = uParam12;
			STATS::PLAYSTATS_FM_EVENT_HUNTBEAST(&Var167);
		}
	}
}

char* func_798()
{
	switch (Global_2698640)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

int func_799(struct<21> Param0)
{
	int iVar0;
	
	func_808(func_809(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(func_807(9));
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(func_806(9));
	func_803(0, -1, 0);
	func_801(133);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_640, 88, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_2607, 385, 0);
	if (!func_800())
	{
		func_759();
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_640.f_52), &(Local_640.f_53));
	}
	Local_2992.f_2 = NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_627[iVar0] = -1;
		iVar0++;
	}
	return 1;
}

int func_800()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_757())
		{
			return 0;
		}
		if (func_755(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

void func_801(int iParam0)
{
	func_767();
	func_802();
	func_785();
	Global_1836941.f_4 = iParam0;
	Global_1836941.f_5 = iParam0;
	func_436(iParam0, -1);
	func_28(&(Global_1836941.f_18), 0, 0);
	Global_2738587.f_4694 = 0;
	Global_2697320[0] = func_113();
	Global_2697320[1] = func_113();
	Global_2697320[2] = func_113();
	Global_2697320[3] = func_113();
	Global_2697320[4] = func_113();
	func_179();
	if (!func_579(func_302()))
	{
		func_301();
	}
	if (func_177() && !func_176())
	{
		MISC::SET_BIT(&(Global_1836941.f_1), 16);
	}
	else
	{
		MISC::SET_BIT(&(Global_1836941.f_1), 17);
	}
}

void func_802()
{
	var uVar0;
	
	Global_1836966 = uVar0;
}

int func_803(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_805();
			}
			else
			{
				return 0;
			}
		}
		if (!func_804(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_805();
					}
					else
					{
						return 0;
					}
				}
				if (func_757())
				{
					if (!bParam2)
					{
						func_805();
					}
					else
					{
						return 0;
					}
				}
				if (func_755(157))
				{
					if (!bParam2)
					{
						func_805();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_805();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_805();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_805();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_804(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575052;
}

void func_805()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_806(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 0;
		
		case 7:
			return 1;
		
		case 8:
			return 10;
		
		case 9:
			return 10;
		
		case 10:
			return 1;
		
		case 11:
			return 6;
		
		case 12:
			return 0;
		
		case 13:
			return 1;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		default:
	}
	return 0;
}

int func_807(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 0;
		
		case 13:
			return 0;
		
		case 14:
			return 1;
		
		case 15:
			return 1;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		default:
	}
	return 0;
}

void func_808(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_805();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_809(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 192:
			return 32;
		
		case 193:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 204:
			return 32;
		
		case 205:
			return 32;
		
		case 194:
			return 32;
		
		case 195:
			return 32;
		
		case 199:
			return 32;
		
		case 197:
			return 32;
		
		case 198:
			return 32;
		
		case 202:
			return 32;
		
		case 203:
			return 32;
		
		case 200:
			return 32;
		
		case 201:
			return 32;
		
		case 206:
			return 32;
		
		case 207:
			return 32;
		
		case 208:
			return 32;
		
		case 209:
			return 32;
		
		case 210:
			return 2;
		
		case 215:
			return 1;
		
		case 211:
			return 2;
		
		case 212:
			return 4;
		
		case 213:
			return 2;
		
		case 214:
			return 2;
		
		case 196:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 222:
			return 0;
		
		case 238:
			return 1;
		
		case 223:
			return 4;
		
		case 226:
			return 4;
		
		case 227:
			return 1;
		
		case 228:
			return 1;
		
		case 234:
			return 1;
		
		case 230:
			return 2;
		
		case 235:
			return 1;
		
		case 231:
			return 1;
		
		case 229:
			return 2;
		
		case 232:
			return 8;
		
		case 233:
			return 8;
		
		case 236:
			return 1;
		
		case 237:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 178:
			return 1;
		
		case 224:
			return 16;
		
		case 225:
			return 32;
		
		default:
	}
	switch (func_134(func_810(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_810(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 210:
			return 15;
		
		case 217:
			return 8;
		
		case 211:
			return 14;
		
		case 215:
			return 122;
		
		case 218:
			return 1;
		
		case 216:
			return 5;
		
		case 219:
			return 6;
		
		case 212:
			return 11;
		
		case 220:
			return 0;
		
		case 221:
			return 2;
		
		case 213:
			return 13;
		
		case 222:
			return 3;
		
		case 214:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case 79:
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		case 146:
			return 286;
		
		case 148:
			return 267;
		
		case 147:
			return 266;
		
		case 151:
			return 147;
		
		case 149:
			return 287;
		
		case 152:
			return 291;
		
		case 153:
			return 292;
		
		case 154:
			return 293;
		
		case 155:
			return 294;
		
		case 156:
			return 295;
		
		case 157:
			return 296;
		
		case 158:
			return 297;
		
		case 159:
			return 298;
		
		case 160:
			return 299;
		
		case 161:
			return 300;
		
		case 162:
			return 301;
		
		case 163:
			return 288;
		
		case 164:
			return 290;
		
		case 165:
			return 304;
		
		case 166:
			return 305;
		
		case 167:
			return 306;
		
		case 168:
			return 307;
		
		case 169:
			return 308;
		
		case 170:
			return 309;
		
		case 171:
			return 310;
		
		case 172:
			return 311;
		
		case 173:
			return 312;
		
		case 174:
			return 313;
		
		case 175:
			return 315;
		
		case 176:
			return 316;
		
		case 177:
			return 317;
		
		case 178:
			return 318;
		
		case 179:
			return 320;
		
		case 180:
			return 322;
		
		case 181:
			return 323;
		
		case 182:
			return 324;
		
		case 183:
			return 325;
		
		case 184:
			return 326;
		
		case 185:
			return 327;
		
		case 186:
			return 328;
		
		case 187:
			return 329;
		
		case 188:
			return 330;
		
		case 189:
			return 331;
		
		case 190:
			return 332;
		
		case 191:
			return 333;
		
		default:
	}
	if (bParam1)
	{
	}
	return 337;
}

