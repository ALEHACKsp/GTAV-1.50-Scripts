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
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	var uLocal_61 = 10;
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
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	struct<199> Local_112 = { 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 1, 0, 5, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 744705981, -178150202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1 } ;
	struct<8> Local_311[32];
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	int iLocal_570 = 0;
	int iLocal_571 = 0;
	int iLocal_572 = 0;
	int iLocal_573 = 0;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	var uLocal_576 = 1;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	int iLocal_588 = 0;
	int iLocal_589 = 0;
	int iLocal_590 = 0;
	vector3 vLocal_591 = { 0f, 0f, 0f };
	vector3 vLocal_594 = { 0f, 0f, 0f };
	int iLocal_597 = 0;
	float fLocal_598 = 0f;
	float fLocal_599 = 0f;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	struct<14> Local_605 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	vector3 vLocal_623[217] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_1275[217] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_1493 = 0;
	float fLocal_1494 = 0f;
	float fLocal_1495 = 0f;
	float fLocal_1496 = 0f;
	var uLocal_1497 = 0;
	struct<105> Local_1498 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0 } ;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = -1;
	var uLocal_1608 = -1;
	var uLocal_1609 = -1;
	var uLocal_1610 = -1;
	var uLocal_1611 = -1;
	var uLocal_1612 = -1;
	var uLocal_1613 = 0;
	var uLocal_1614 = 32;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
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
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
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
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
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
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
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
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
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
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
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
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
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
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
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
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
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
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
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
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
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
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
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
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
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
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
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
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
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
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
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
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
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
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
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
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
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
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
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
	int iLocal_2031 = 0;
	int iLocal_2032 = 0;
	int iLocal_2033 = 0;
	int iLocal_2034 = 0;
	int iLocal_2035 = 0;
	int iLocal_2036 = 0;
	int iLocal_2037 = 0;
	vector3 vLocal_2038 = { 0f, 0f, 0f };
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 12;
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
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
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
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
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
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
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
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
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
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
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
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
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
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
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
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
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
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
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
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
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
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
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
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
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
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
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
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
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
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
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
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
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
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
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
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
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
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
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
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
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
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
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
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
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
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
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
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
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
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
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
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
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
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 1065353216;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	struct<12> Local_2741 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	int iLocal_2763 = 0;
	int iLocal_2764 = 0;
	int iLocal_2765 = 0;
	int iLocal_2766 = 0;
	int iLocal_2767 = 0;
	int iLocal_2768 = 0;
	int iLocal_2769 = 0;
	vector3 vLocal_2770 = { 0f, 0f, 0f };
	float fLocal_2773 = 0f;
	float fLocal_2774 = 0f;
	vector3 vLocal_2775 = { 0f, 0f, 0f };
	float fLocal_2778 = 0f;
	int iLocal_2779 = 0;
	int iLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	int iLocal_2783 = 0;
	var uLocal_2784 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()//Position - 0x0
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
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_110 = -1;
	iLocal_111 = -1;
	iLocal_2767 = -1;
	iLocal_2768 = -1;
	fLocal_2774 = -1f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_1276(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_1223(ScriptParam_0);
	}
	else
	{
		func_1162();
	}
	while (true)
	{
		func_1161();
		if (func_1154() || func_1151(24))
		{
			func_1162();
		}
		if (func_1150())
		{
			func_1162();
		}
		func_1131();
		if (Local_112.f_197 == 2)
		{
			if (func_1127(1))
			{
				func_1072(0, 5, 0, !MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0), -1, -1, -1, -1, -1, 0);
				func_1162();
			}
		}
		switch (func_1071(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_1070() == 1)
				{
					if (func_1069())
					{
						if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 7))
						{
							if (func_1068(11))
							{
								MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 7);
							}
						}
						func_1065();
						vLocal_591 = { vLocal_623[0 /*3*/] };
						fLocal_598 = func_1064();
						fLocal_599 = fLocal_598;
						iLocal_590 = 0;
						uLocal_600 = func_1063();
						if (Local_112.f_197 == 2)
						{
							func_1061();
						}
						if (!func_1010(1))
						{
							func_1008(func_1009(), 1);
							func_1003();
						}
						func_996(136, Local_112.f_167, 0, 0);
						if (Local_112.f_197 == 2)
						{
							func_913(-1, 0, Local_112.f_197 == 2, 200, 0, 0);
							if (func_908())
							{
								MISC::SET_BIT(&iLocal_570, 1);
							}
						}
						Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/] = 1;
					}
				}
				else if (func_1070() == 4)
				{
					Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/] = 3;
				}
				break;
			
			case 1:
				if (func_1070() == 1)
				{
					func_901();
					func_744();
					func_740();
					func_739();
					func_695();
					func_628();
					func_442();
					func_441();
					func_437();
					func_433();
					func_417();
				}
				else if (func_1070() == 4)
				{
					Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/] = 3;
				}
				break;
			
			case 3:
				func_416(&(Local_112.f_22));
				if (func_415(&(Local_112.f_22)))
				{
					Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/] = 4;
				}
				break;
			
			case 2:
				Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/] = 4;
			
			case 4:
				func_1162();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (Local_112.f_197 == 2)
			{
				if (func_414())
				{
					if (func_1070() < 4)
					{
						Local_112 = 4;
					}
				}
			}
			switch (func_1070())
			{
				case 0:
					if (func_401(&(Local_112.f_167)))
					{
						func_399();
						if (func_1069())
						{
							func_1065();
							Local_112.f_184.f_7 = func_398();
							Local_112.f_8 = func_1064();
							Local_112.f_166 = func_1063();
							Local_112 = 1;
							func_397(&(Local_112.f_32), 0, 0);
							func_394(func_396(136, Local_112.f_167, 0, 0));
						}
					}
					break;
				
				case 1:
					func_384();
					func_28();
					func_3();
					if (func_1())
					{
						Local_112 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x353
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x367
{
	bool bVar0;
	int iVar1;
	
	if (Local_112.f_21 >= 2)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
			{
				if (Local_311[iVar1 /*8*/].f_7 < 5)
				{
					bVar0 = false;
				}
			}
			iVar1++;
		}
	}
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

void func_3()//Position - 0x3B6
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	if (Local_112.f_197 == 2)
	{
		return;
	}
	bVar1 = true;
	if (Local_112.f_21 > 0)
	{
		if (func_27())
		{
			iVar0 = PLAYER::GET_PLAYER_PED(Local_112.f_184.f_7);
		}
		else
		{
			func_26();
		}
		if (!func_25(vLocal_591, Local_112.f_194, 1056964608, 0))
		{
			if (!func_24(&uLocal_2781))
			{
				func_397(&uLocal_2781, 0, 0);
			}
			else if (func_23(&uLocal_2781, 500, 0))
			{
				Local_112.f_194 = { vLocal_591 };
				func_22(&uLocal_2781);
			}
		}
		uVar2 = Global_262145.f_11159;
		func_4(&(Local_112.f_184), iVar0, Local_112.f_194, bVar1, Global_262145.f_11157, Global_262145.f_11158, uVar2, 4352);
	}
}

void func_4(var uParam0, int iParam1, vector3 vParam2, bool bParam5, var uParam6, var uParam7, var uParam8, int iParam9)//Position - 0x46C
{
	int iVar0;
	int iVar1;
	
	switch (func_21(uParam0))
	{
		case 0:
			if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) == 0)
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
			}
			func_20(uParam0, 1);
			break;
		
		case 1:
			if (!func_19(vParam2))
			{
				if (func_13(uParam0, func_18(vParam2), func_17()))
				{
					if (func_9(uParam0))
					{
						func_7(uParam0);
						func_20(uParam0, 2);
					}
				}
			}
			break;
		
		case 2:
			if (bParam5)
			{
				if (func_6(uParam0))
				{
					iVar0 = NETWORK::NET_TO_PED(uParam0->f_3);
					iVar1 = NETWORK::NET_TO_VEH(uParam0->f_2);
					func_5(uParam0, iVar0, iVar1, iParam1, uParam6, uParam7, uParam8, iParam9);
				}
			}
			break;
		
		default:
			break;
	}
}

void func_5(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x520
{
	int iVar0;
	
	if (!func_24(&(uParam0->f_8)))
	{
		func_397(&(uParam0->f_8), 0, 0);
	}
	else if (func_23(&(uParam0->f_8), 5000, 0))
	{
		func_22(&(uParam0->f_8));
		iVar0 = 1;
	}
	if ((!PED::IS_PED_INJURED(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam2, 0)) && !PED::IS_PED_INJURED(iParam3))
	{
		if (((TASK::GET_SCRIPT_TASK_STATUS(iParam1, -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam1, -1273030092) != 0) || iParam3 != uParam0->f_4) || iVar0)
		{
			if (iParam3 != uParam0->f_4)
			{
				uParam0->f_4 = iParam3;
				TASK::CLEAR_PED_TASKS(iParam1);
			}
			TASK::TASK_VEHICLE_HELI_PROTECT(iParam1, iParam2, iParam3, uParam4, 32, uParam5, uParam6, uParam7);
		}
	}
}

int func_6(var uParam0)//Position - 0x5DE
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_2) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_3))
	{
		return 1;
	}
	return 0;
}

void func_7(var uParam0)//Position - 0x603
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = NETWORK::NET_TO_ENT(uParam0->f_2);
	ENTITY::SET_ENTITY_PROOFS(iVar0, 1, 1, 1, 1, 0, 0, 0, 0);
	ENTITY::_SET_ENTITY_SOMETHING(iVar0, 0);
	iVar1 = NETWORK::NET_TO_VEH(uParam0->f_2);
	VEHICLE::_0x7D6F9A3EF26136A0(iVar1, false, 0);
	VEHICLE::SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(iVar1, 0);
	iVar2 = NETWORK::NET_TO_ENT(uParam0->f_3);
	ENTITY::SET_ENTITY_INVINCIBLE(iVar2, true);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iVar1, true, 1, 0);
	VEHICLE::SET_HELI_TURBULENCE_SCALAR(iVar1, 0.3f);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(iVar1);
	PHYSICS::ACTIVATE_PHYSICS(iVar1);
	func_8(1);
}

void func_8(bool bParam0)//Position - 0x679
{
	if (bParam0)
	{
		if (Global_2359296 == 0)
		{
			Global_2359296 = 1;
		}
	}
	else if (Global_2359296 == 1)
	{
		Global_2359296 = 0;
	}
}

int func_9(var uParam0)//Position - 0x6A3
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_3))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(uParam0->f_1);
	if (STREAMING::HAS_MODEL_LOADED(uParam0->f_1))
	{
		if (func_11(uParam0->f_2))
		{
			iVar0 = NETWORK::NET_TO_ENT(uParam0->f_2);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (func_10(&(uParam0->f_3), uParam0->f_2, 4, uParam0->f_1, -1, 1, 1, 1))
				{
					return 1;
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
			}
		}
	}
	return 0;
}

int func_10(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x712
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_PED(*uParam0), iParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_11(var uParam0)//Position - 0x79A
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return !func_12(NETWORK::NET_TO_VEH(uParam0));
	}
	return 0;
}

int func_12(int iParam0)//Position - 0x7BA
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_13(var uParam0, vector3 vParam1, float fParam4)//Position - 0x7F3
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_2))
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = 1;
	bVar2 = true;
	bVar3 = false;
	iVar4 = 1;
	STREAMING::REQUEST_MODEL(*uParam0);
	if (STREAMING::HAS_MODEL_LOADED(*uParam0))
	{
		if (!func_19(vParam1))
		{
			if (func_14(&(uParam0->f_2), *uParam0, vParam1, fParam4, iVar0, iVar1, bVar2, bVar3, iVar4, 1, 0, 0, 0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(var uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)//Position - 0x85E
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
	if (iParam1 == -32878452)
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, vParam2, fParam5, iParam7, iParam6, iParam14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2531497.f_6245 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar1, 1);
			}
			ENTITY::_SET_ENTITY_SOMETHING(iVar1, iParam10);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 0);
				}
				if (bParam13)
				{
					NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(*uParam0, PLAYER::PLAYER_ID(), 1);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam9);
			VEHICLE::_0xB2E0C0D6922D31F2(iVar1, 1);
			if (bParam12)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_15(vParam2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_15(vector3 vParam0, float fParam3, int iParam4, int iParam5)//Position - 0x966
{
	int iVar0;
	
	if (func_16(PLAYER::PLAYER_ID(), vParam0, iParam4) > -1)
	{
		if ((Global_2405071.f_2910[1 /*6*/].f_5 == iParam5 && Global_2405071.f_2910[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2405071.f_2910[1 /*6*/], vParam0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405071.f_2910[iVar0 /*6*/] = { Global_2405071.f_2910[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405071.f_2910[1 /*6*/] = { vParam0 };
		Global_2405071.f_2910[1 /*6*/].f_3 = fParam3;
		Global_2405071.f_2910[1 /*6*/].f_4 = iParam4;
		Global_2405071.f_2910[1 /*6*/].f_5 = iParam5;
	}
}

int func_16(int iParam0, vector3 vParam1, int iParam4)//Position - 0xA39
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				vVar2 = { vParam1 };
				if (MISC::ABSF((Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
				{
					vVar2.z = Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

float func_17()//Position - 0xAD7
{
	return Global_4456448.f_92415[0 /*282*/].f_3;
}

Vector3 func_18(vector3 vParam0)//Position - 0xAEE
{
	vector3 vVar0;
	
	vVar0 = { vParam0 };
	vVar0.z = (vVar0.z + 100f);
	return vVar0;
}

int func_19(vector3 vParam0)//Position - 0xB10
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_20(var uParam0, int iParam1)//Position - 0xB3A
{
	uParam0->f_5 = iParam1;
}

int func_21(var uParam0)//Position - 0xB48
{
	return uParam0->f_5;
}

void func_22(var uParam0)//Position - 0xB54
{
	uParam0->f_1 = 0;
}

int func_23(var uParam0, int iParam1, bool bParam2)//Position - 0xB61
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_397(uParam0, bParam2, 0);
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

bool func_24(var uParam0)//Position - 0xBBF
{
	return uParam0->f_1;
}

int func_25(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)//Position - 0xBCB
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
		{
			if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
			{
				if (MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_26()//Position - 0xC46
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = func_398();
	iVar2 = 0;
	while (iVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
			if (func_1276(iVar0, 1, 1))
			{
				if (MISC::IS_BIT_SET(Local_311[iVar2 /*8*/].f_1, 0))
				{
					if (!MISC::IS_BIT_SET(Local_311[iVar2 /*8*/].f_1, 1))
					{
						if (!MISC::IS_BIT_SET(Local_311[iVar2 /*8*/].f_1, 11))
						{
							iVar1 = iVar0;
						}
					}
				}
			}
		}
		iVar2++;
	}
	if (Local_112.f_184.f_7 != iVar1)
	{
		Local_112.f_184.f_7 = iVar1;
	}
}

int func_27()//Position - 0xCDA
{
	int iVar0;
	int iVar1;
	
	if (Local_112.f_184.f_7 != func_398())
	{
		if (func_1276(Local_112.f_184.f_7, 1, 1))
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_112.f_184.f_7))
			{
				iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_112.f_184.f_7);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
				{
					iVar1 = iVar0;
					if (!MISC::IS_BIT_SET(Local_311[iVar1 /*8*/].f_1, 1))
					{
						if (!MISC::IS_BIT_SET(Local_311[iVar1 /*8*/].f_1, 11))
						{
							if (MISC::IS_BIT_SET(Local_311[iVar1 /*8*/].f_1, 0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_28()//Position - 0xD5F
{
	switch (Local_112.f_21)
	{
		case 0:
			func_379();
			if (MISC::IS_BIT_SET(Local_112.f_1, 2))
			{
				if (MISC::IS_BIT_SET(Local_112.f_1, 0))
				{
					MISC::SET_BIT(&(Local_112.f_1), 8);
					Local_112.f_21 = 1;
					MISC::CLEAR_AREA_OF_PROJECTILES(vLocal_623[0 /*3*/], (func_1064() + 50f), 1);
				}
			}
			else if (MISC::IS_BIT_SET(Local_112.f_1, 13))
			{
				MISC::SET_BIT(&(Local_112.f_1), 8);
				Local_112.f_21 = 1;
				MISC::CLEAR_AREA_OF_PROJECTILES(vLocal_623[0 /*3*/], (func_1064() + 50f), 1);
			}
			if (MISC::IS_BIT_SET(Local_112.f_1, 12))
			{
				Local_112.f_21 = 3;
			}
			if (MISC::IS_BIT_SET(Local_112.f_1, 16))
			{
				func_37();
				Local_112.f_21 = 3;
			}
			else if (MISC::IS_BIT_SET(Local_112.f_1, 18))
			{
				Local_112.f_21 = 3;
			}
			break;
		
		case 1:
			if (MISC::IS_BIT_SET(Local_112.f_1, 9))
			{
				Local_112.f_21 = 2;
			}
			break;
		
		case 2:
			func_33();
			func_29(0);
			if (MISC::IS_BIT_SET(Local_112.f_1, 3))
			{
				Local_112.f_21 = 3;
			}
			if (MISC::IS_BIT_SET(Local_112.f_1, 10))
			{
				Local_112.f_21 = 3;
			}
			break;
		
		case 3:
			if (MISC::IS_BIT_SET(Local_112.f_1, 16))
			{
				func_37();
			}
			if (MISC::IS_BIT_SET(Local_112.f_1, 5))
			{
				if (Local_112.f_21 == 3)
				{
					Local_112.f_21 = 5;
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			break;
	}
}

void func_29(bool bParam0)//Position - 0xEC3
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	float fVar14;
	bool bVar15;
	bool bVar16;
	vector3 vVar17;
	vector3 vVar20;
	bool bVar23;
	
	if (bParam0)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return;
		}
	}
	if (Local_112.f_197 == 0 || Local_112.f_197 == 2)
	{
		fLocal_2773 = func_32();
	}
	iVar0 = iLocal_590 + 1;
	if (!func_31(vLocal_591, 0f, 0f, 0f, 0))
	{
		if (!func_31(vLocal_2770, vLocal_591, 0))
		{
			vLocal_2770 = { vLocal_591 };
		}
	}
	if (iVar0 < 217)
	{
		vVar1 = { vLocal_623[iVar0 /*3*/] };
		fVar13 = SYSTEM::VDIST2(vLocal_591, vVar1);
		if (!func_31(vLocal_623[iVar0 /*3*/], 0f, 0f, 0f, 0))
		{
			if (!func_31(vLocal_623[iLocal_590 /*3*/], 0f, 0f, 0f, 0))
			{
				if (fVar13 < (0.1f * 0.1f))
				{
					vLocal_591 = { vLocal_623[iVar0 /*3*/] };
					iLocal_590++;
					bVar15 = true;
				}
				else
				{
					vVar4 = { vVar1 - vLocal_591 };
					vVar7 = { func_30(vVar4) };
					if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						vVar10 = { vLocal_591 + vVar7 * FtoV(MISC::GET_FRAME_TIME()) * Vector(Local_112.f_166, Local_112.f_166, Local_112.f_166) * Vector(fLocal_2773, fLocal_2773, fLocal_2773) };
					}
					else
					{
						vVar10 = { vLocal_591 + vVar7 * FtoV(MISC::GET_FRAME_TIME()) * Vector(Local_112.f_166, Local_112.f_166, Local_112.f_166) };
					}
					fVar14 = SYSTEM::VDIST2(vLocal_591, vVar10);
					if (fVar14 > fVar13)
					{
						vVar17 = { vVar1 };
					}
					else
					{
						vVar17 = { vVar10 };
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 3))
			{
				MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 3);
			}
			if (!MISC::IS_BIT_SET(Local_112.f_1, 4))
			{
				if (!func_31(vLocal_623[(iLocal_1493 - 1) /*3*/], 0f, 0f, 0f, 0))
				{
					vVar17 = { vLocal_623[(iLocal_1493 - 1) /*3*/] };
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!func_24(&(Local_112.f_172)))
		{
			func_397(&(Local_112.f_172), 0, 0);
		}
		if (!MISC::IS_BIT_SET(Local_112.f_1, 4))
		{
			if (!func_23(&(Local_112.f_172), 16000, 0))
			{
				if (!bVar15)
				{
					Local_112.f_176 = { vVar17 };
					Local_112.f_171 = iLocal_590;
				}
				else
				{
					Local_112.f_176 = { vLocal_591 };
					Local_112.f_171 = iLocal_590;
				}
			}
			else if (func_23(&(Local_112.f_172), 16500, 0))
			{
				func_22(&(Local_112.f_172));
			}
		}
	}
	if (!func_31(Local_112.f_176, 0f, 0f, 0f, 0))
	{
		if (iLocal_597 != Local_112.f_171 || !func_31(vLocal_594, Local_112.f_176, 0))
		{
			if (iLocal_597 != Local_112.f_171)
			{
				iLocal_597 = Local_112.f_171;
				vLocal_594 = { Local_112.f_176 };
				vLocal_591 = { vLocal_594 };
				iLocal_590 = iLocal_597;
				bVar15 = true;
			}
			else
			{
				vLocal_594 = { Local_112.f_176 };
				vVar20 = { Local_112.f_176 };
			}
			bVar16 = true;
		}
	}
	if (!bVar15)
	{
		if (bVar16)
		{
			bVar23 = true;
			if (bVar23)
			{
				vLocal_591 = { vVar20 };
			}
		}
		else
		{
			vLocal_591 = { vVar17 };
		}
	}
	if (MISC::IS_BIT_SET(Local_112.f_1, 4))
	{
		if (!func_31(vLocal_591, vLocal_623[(iLocal_1493 - 1) /*3*/], 0))
		{
			vLocal_591 = { vLocal_623[(iLocal_1493 - 1) /*3*/] };
		}
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_588))
	{
		HUD::SET_BLIP_COORDS(iLocal_588, vLocal_591);
	}
}

Vector3 func_30(vector3 vParam0)//Position - 0x11FD
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

bool func_31(vector3 vParam0, vector3 vParam3, bool bParam6)//Position - 0x123C
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

float func_32()//Position - 0x1283
{
	return 0.9f;
}

void func_33()//Position - 0x1290
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (!func_24(&(Local_112.f_26)))
	{
		func_397(&(Local_112.f_26), 0, 0);
	}
	if (!func_23(&(Local_112.f_26), 10000, 0))
	{
		return;
	}
	else if (!func_23(&(Local_112.f_26), 20000, 0))
	{
		if (!func_24(&uLocal_603))
		{
			func_397(&uLocal_603, 0, 0);
		}
		if (func_23(&uLocal_603, 1000, 0))
		{
			fVar0 = Local_112.f_166;
			if (fVar0 < func_36())
			{
				fVar0 = (fVar0 + 0.5f);
				fVar0 = (fVar0 * func_35());
				if (fVar0 > func_36())
				{
					fVar0 = func_36();
				}
				Local_112.f_166 = fVar0;
			}
			func_22(&uLocal_603);
		}
	}
	else if (fLocal_1495 <= (fLocal_1494 / 2f))
	{
		if (Local_112.f_166 != func_36())
		{
			Local_112.f_166 = func_36();
		}
	}
	else if (!func_24(&uLocal_603))
	{
		func_397(&uLocal_603, 0, 0);
	}
	else if (func_23(&uLocal_603, 1000, 0))
	{
		if (Local_112.f_166 > func_34())
		{
			fVar1 = (func_36() - func_34());
			fVar3 = (fLocal_1494 / 2f);
			fVar2 = ((fLocal_1495 - fVar3) / fVar3);
			fVar4 = (func_36() - (fVar1 * fVar2));
			fVar4 = (fVar4 * 0.8f);
			fVar4 = (fVar4 * func_35());
			if (fVar4 < func_34())
			{
				fVar4 = func_34();
			}
			Local_112.f_166 = fVar4;
			func_22(&uLocal_603);
		}
	}
}

float func_34()//Position - 0x13E6
{
	return Global_262145.f_11148;
}

float func_35()//Position - 0x13F5
{
	return Global_262145.f_11149;
}

float func_36()//Position - 0x1404
{
	return Global_262145.f_11146;
}

void func_37()//Position - 0x1413
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	char cVar6[32];
	struct<4> Var10;
	struct<4> Var14;
	struct<4> Var18;
	int iVar22;
	int iVar23;
	struct<20> Var24;
	int iVar46;
	int iVar47;
	int iVar48;
	bool bVar49;
	bool bVar50;
	struct<4> Var51;
	struct<4> Var55;
	var uVar59;
	var uVar60;
	int iVar64;
	var uVar65;
	int iVar69;
	char[] cVar70[8];
	var uVar71;
	int iVar72;
	var uVar73;
	char cVar77[32];
	int iVar81;
	var uVar82;
	struct<4> Var86;
	struct<4> Var90;
	struct<4> Var94;
	
	iVar5 = -1;
	Var18 = { func_378() };
	iVar22 = func_398();
	if (!func_376(PLAYER::PLAYER_ID(), 0))
	{
		iVar5 = NETWORK::PARTICIPANT_ID_TO_INT();
		iVar22 = PLAYER::PLAYER_ID();
	}
	else
	{
		iVar23 = Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_735;
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar23))
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar23))
			{
				iVar22 = iVar23;
				iVar5 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar23);
			}
		}
	}
	Var24.f_2 = 1065353216;
	Var24.f_3 = 1065353216;
	Var24.f_4 = 1;
	Var24.f_9 = -1;
	Var24.f_18 = -1;
	Var24.f_19 = -1;
	if (Local_112.f_197 != 2)
	{
		if (func_375(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 2);
			return;
		}
	}
	else if (func_368())
	{
		MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 2);
		return;
	}
	if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 2))
	{
		return;
	}
	if (MISC::IS_BIT_SET(Local_112.f_1, 12))
	{
		MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 2);
		return;
	}
	if (!func_1010(1))
	{
		if (iVar5 > -1)
		{
			if (iVar22 != func_398())
			{
				if (!MISC::IS_BIT_SET(Local_112.f_1, 17))
				{
					if (!MISC::IS_BIT_SET(Local_112.f_1, 16))
					{
						if (!MISC::IS_BIT_SET(Local_112.f_1, 18))
						{
							if (MISC::IS_BIT_SET(Local_311[iVar5 /*8*/].f_1, 0))
							{
								if (!MISC::IS_BIT_SET(iLocal_568, 17))
								{
									if (!MISC::IS_BIT_SET(Local_112.f_1, 10))
									{
										if (MISC::IS_BIT_SET(Local_112.f_1, 3) && MISC::IS_BIT_SET(Local_112.f_1, 11))
										{
											if (!MISC::IS_BIT_SET(iLocal_568, 19))
											{
												if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
												{
													if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
													{
														if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
														{
															MISC::SET_BIT(&iLocal_568, 19);
														}
													}
												}
											}
											if (MISC::IS_BIT_SET(Local_112.f_10, iVar5))
											{
												if (!MISC::IS_BIT_SET(Local_311[iVar5 /*8*/].f_1, 1))
												{
													bVar50 = true;
												}
											}
											if (func_367(&iVar46, &iVar47, &iVar48))
											{
												if (iVar48 > 2)
												{
													if (func_366(iVar22, iVar46, iVar47))
													{
														bVar2 = true;
													}
													if (!bVar2)
													{
														bVar49 = true;
													}
												}
												else if (iVar48 == 2)
												{
													if (iVar22 == iVar46 || iVar22 == iVar47)
													{
														Var51 = { func_365() };
														if (iVar22 == iVar46)
														{
															func_363(func_364(), &Var51, PLAYER::GET_PLAYER_NAME(iVar47), 1, 15000, &Var18, 2);
														}
														else
														{
															func_363(func_364(), &Var51, PLAYER::GET_PLAYER_NAME(iVar46), 1, 15000, &Var18, 2);
														}
														func_362(1);
													}
													else
													{
														if (func_366(iVar22, iVar46, iVar47))
														{
															bVar2 = true;
														}
														if (!bVar2)
														{
															Var55 = { func_361() };
															func_359(func_360(), func_398(), func_398(), -1, &Var55, &Var18, 1, 15000, 2, PLAYER::GET_PLAYER_NAME(iVar46), PLAYER::GET_PLAYER_NAME(iVar47), 0);
														}
														func_362(0);
													}
												}
												if (!bVar2 || (bVar2 && iVar4))
												{
													if (iVar5 == NETWORK::PARTICIPANT_ID_TO_INT())
													{
														func_347(bVar50, &iVar0, &iVar1, iVar48);
														if (Local_112.f_197 != 2)
														{
															Local_2741.f_6 = iVar0;
															Local_2741.f_7 = iVar1;
															Global_2461199 = iVar0;
															if (iVar0 > 0)
															{
																if (func_346())
																{
																	func_335(968073639, iVar0, &uVar59, 0, 1, 0);
																}
																else
																{
																	MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_PENNED_IN", &uVar60);
																}
															}
															if (!func_334())
															{
																if (Local_2741.f_6 > 0)
																{
																	func_333(11, Local_2741.f_6);
																}
															}
															func_332();
															func_331(0, "", -1636175450, 1487716476, iVar1, 1, -1, 0);
														}
														else
														{
															Var24 = iVar0;
															Var24.f_1 = iVar1;
															func_137(200, bVar50, &Var24, 0);
														}
													}
													MISC::SET_BIT(&iLocal_568, 17);
												}
											}
											else if (bVar50)
											{
												if (iVar5 == NETWORK::PARTICIPANT_ID_TO_INT())
												{
													func_347(1, &iVar0, &iVar1, 1);
													if (Local_112.f_197 != 2)
													{
														Local_2741.f_6 = iVar0;
														Local_2741.f_7 = iVar1;
														Global_2461199 = iVar0;
														if (iVar0 > 0)
														{
															if (func_346())
															{
																func_335(968073639, iVar0, &iVar64, 0, 1, 0);
															}
															else
															{
																MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_PENNED_IN", &uVar65);
															}
														}
														if (!func_334())
														{
															if (Local_2741.f_6 > 0)
															{
																func_333(11, Local_2741.f_6);
															}
														}
														func_332();
														func_331(0, "", -1636175450, 1487716476, iVar1, 1, -1, 0);
													}
													else
													{
														Var24 = iVar0;
														Var24.f_1 = iVar1;
														func_137(200, 1, &Var24, 0);
													}
												}
												Var10 = { func_136() };
												func_134(func_135(), "PEN_WIN", &Var10, 1, 15000, 2, 1, 0);
												MISC::SET_BIT(&iLocal_568, 17);
												func_362(1);
											}
											else if (MISC::IS_BIT_SET(Local_112.f_1, 3))
											{
												if (func_1276(iVar22, 1, 1))
												{
													iVar46 = func_133();
													if (iVar46 != func_398())
													{
														if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar46))
														{
															if (!bVar2)
															{
																if (func_131(iVar46, 1))
																{
																	iVar69 = func_130(iVar46);
																	if (iVar69 > -1)
																	{
																		uVar71 = func_128(iVar69);
																		cVar70 = func_118(iVar46);
																		bVar3 = true;
																	}
																}
															}
															if (Local_112.f_197 == 2)
															{
																bVar2 = false;
																bVar3 = false;
															}
															if (!bVar2 && !bVar3)
															{
																Var14 = { func_117() };
																func_363(func_360(), &Var14, PLAYER::GET_PLAYER_NAME(iVar46), 1, 15000, &Var18, 2);
															}
															else if (bVar3)
															{
																Var14 = { func_116() };
																func_68(func_360(), &Var18, &Var14, cVar70, uVar71, 0, -1, -1, -1, 2, -1);
															}
															else if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar46))
															{
																Var14 = { func_67() };
																func_363(91, &Var14, PLAYER::GET_PLAYER_NAME(iVar46), 1, 15000, &Var18, 2);
																iVar4 = 1;
															}
															else
															{
																Var14 = { func_117() };
																func_363(func_360(), &Var14, PLAYER::GET_PLAYER_NAME(iVar46), 1, 15000, &Var18, 2);
																iVar4 = 1;
															}
														}
													}
													else
													{
														cVar6 = { func_66() };
														func_134(func_360(), &Var18, &cVar6, 1, 15000, 2, 1, 0);
													}
													if (!bVar2 || (bVar2 && iVar4))
													{
														if (iVar5 == NETWORK::PARTICIPANT_ID_TO_INT())
														{
															func_347(0, &iVar0, &iVar1, 1);
															if (Local_112.f_197 != 2)
															{
																Local_2741.f_6 = iVar0;
																Local_2741.f_7 = iVar1;
																Global_2461199 = iVar0;
																if (iVar0 > 0)
																{
																	if (func_346())
																	{
																		func_335(968073639, iVar0, &iVar72, 0, 1, 0);
																	}
																	else
																	{
																		MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_PENNED_IN", &uVar73);
																	}
																}
																if (!func_334())
																{
																	if (Local_2741.f_6 > 0)
																	{
																		func_333(11, Local_2741.f_6);
																	}
																}
																func_332();
																func_331(0, "", -1636175450, 1487716476, iVar1, 1, -1, 0);
															}
															else
															{
																Var24 = iVar0;
																Var24.f_1 = iVar1;
																func_137(200, 0, &Var24, 0);
															}
														}
														MISC::SET_BIT(&iLocal_568, 17);
													}
													func_362(0);
												}
											}
											if (bVar49)
											{
												cVar77 = { func_65() };
												if (bVar50)
												{
													func_134(func_364(), &Var18, &cVar77, 1, -1, 2, 1, 0);
												}
												else
												{
													func_134(func_364(), &Var18, &cVar77, 1, -1, 2, 1, 0);
												}
												func_362(0);
											}
										}
									}
									else
									{
										cVar6 = { func_66() };
										func_134(func_360(), &Var18, &cVar6, 1, 15000, 2, 1, 0);
										if (iVar5 == NETWORK::PARTICIPANT_ID_TO_INT())
										{
											func_347(0, &iVar0, &iVar1, 1);
											if (Local_112.f_197 != 2)
											{
												Local_2741.f_6 = iVar0;
												Local_2741.f_7 = iVar1;
												Global_2461199 = iVar0;
												if (iVar0 > 0)
												{
													if (func_346())
													{
														func_335(968073639, iVar0, &iVar81, 0, 1, 0);
													}
													else
													{
														MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_PENNED_IN", &uVar82);
													}
												}
												func_332();
												func_331(0, "", -1636175450, 1487716476, iVar1, 1, -1, 0);
											}
											else
											{
												Var24 = iVar0;
												Var24.f_1 = iVar1;
												func_137(200, 0, &Var24, 0);
											}
										}
										MISC::SET_BIT(&iLocal_568, 17);
									}
								}
								if (MISC::IS_BIT_SET(iLocal_568, 17))
								{
									if (MISC::IS_BIT_SET(Local_311[iVar5 /*8*/].f_1, 5))
									{
										if (!MISC::IS_BIT_SET(Local_311[iVar5 /*8*/].f_1, 1))
										{
											AUDIO::STOP_SOUND(iLocal_2037);
											AUDIO::RELEASE_SOUND_ID(iLocal_2037);
										}
									}
									if (CAM::IS_SCREEN_FADED_IN())
									{
										MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 2);
									}
								}
							}
							else if (!MISC::IS_BIT_SET(Local_112.f_1, 10))
							{
								if (MISC::IS_BIT_SET(Local_112.f_1, 3))
								{
									iVar46 = func_133();
									if (iVar46 != func_398())
									{
										if (!func_367(&iVar46, &iVar47, &iVar48))
										{
											Var86 = { func_117() };
											func_62(&Var86, iVar46, 1, 0, 0, 0, 1, 1, 0);
										}
										else if (iVar48 == 2)
										{
											Var90 = { func_61() };
											func_58(&Var90, iVar46, iVar47, 1, 1, 0, 0, 1);
										}
										else
										{
											Var94 = { func_65() };
											func_53(&Var94, 1);
										}
									}
									MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 2);
									if (Local_112.f_197 != 2)
									{
										func_48(0);
									}
									else
									{
										func_362(0);
									}
								}
							}
							else
							{
								MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 2);
								if (Local_112.f_197 != 2)
								{
									func_48(0);
								}
								else
								{
									func_362(0);
								}
							}
						}
						else if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 2))
						{
							MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 2);
							if (func_38(PLAYER::PLAYER_ID()) >= 2)
							{
								func_134(func_360(), &Var18, "CAG_NOP", 1, 15000, 2, 1, 0);
							}
							func_362(0);
						}
					}
					else if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 2))
					{
						MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 2);
						if (func_38(PLAYER::PLAYER_ID()) >= 2)
						{
							func_134(func_360(), &Var18, "CAG_NOP", 1, 15000, 2, 1, 0);
						}
						func_362(0);
					}
				}
				else if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 2))
				{
					MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 2);
					if (func_38(PLAYER::PLAYER_ID()) >= 2)
					{
						if (!MISC::IS_BIT_SET(iLocal_570, 1))
						{
							func_134(func_360(), &Var18, "CAG_PRES", 1, 15000, 2, 1, 0);
						}
					}
					func_362(0);
				}
			}
			else if (func_376(PLAYER::PLAYER_ID(), 0))
			{
				if (MISC::IS_BIT_SET(Local_112.f_1, 3) && MISC::IS_BIT_SET(Local_112.f_1, 11))
				{
					MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 2);
				}
				else if (MISC::IS_BIT_SET(Local_112.f_1, 10))
				{
					MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 2);
				}
			}
		}
	}
	else if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 2))
	{
		if ((MISC::IS_BIT_SET(Local_112.f_1, 3) || MISC::IS_BIT_SET(Local_112.f_1, 10)) || MISC::IS_BIT_SET(Local_112.f_1, 16))
		{
			MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 2);
		}
	}
}

int func_38(int iParam0)//Position - 0x1E52
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	
	iVar0 = 2;
	bVar1 = ((func_47(iParam0) && !func_46(iParam0)) && !MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 8));
	bVar2 = func_45(iParam0);
	uVar3 = func_44();
	bVar4 = func_368();
	if ((bVar1 && (func_43(iParam0) || func_42(iParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_41(iParam0)) && !func_39(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2531497.f_4898.f_214 != iVar0)
	{
		Global_2531497.f_4898.f_214 = iVar0;
	}
	return iVar0;
}

bool func_39(int iParam0)//Position - 0x1F10
{
	return func_40(iParam0, 19);
}

bool func_40(int iParam0, int iParam1)//Position - 0x1F20
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

int func_41(int iParam0)//Position - 0x1F3B
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_40(iParam0, 9);
	}
	return 0;
}

int func_42(int iParam0)//Position - 0x1F59
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628955[iVar0 /*614*/].f_1, 0);
	}
	return 0;
}

int func_43(int iParam0)//Position - 0x1F7F
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628955[iVar0 /*614*/].f_1, 7);
	}
	return 0;
}

bool func_44()//Position - 0x1FA5
{
	return Global_1312417;
}

bool func_45(int iParam0)//Position - 0x1FB1
{
	return func_40(iParam0, 20);
}

bool func_46(int iParam0)//Position - 0x1FC1
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 2);
}

int func_47(int iParam0)//Position - 0x1FD9
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/] != -1;
	}
	return 0;
}

void func_48(bool bParam0)//Position - 0x1FFA
{
	if (bParam0)
	{
		if (func_49(1))
		{
			MISC::SET_BIT(&Global_1574672, 1);
		}
	}
	else if (func_49(2))
	{
		MISC::SET_BIT(&Global_1574672, 2);
	}
}

int func_49(int iParam0)//Position - 0x202C
{
	int iVar0;
	
	iVar0 = func_50(2534, -1, 0);
	if (iParam0 == 0)
	{
		if ((MISC::IS_BIT_SET(iVar0, 0) && MISC::IS_BIT_SET(iVar0, 1)) && MISC::IS_BIT_SET(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((MISC::IS_BIT_SET(iVar0, 3) && MISC::IS_BIT_SET(iVar0, 4)) && MISC::IS_BIT_SET(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((MISC::IS_BIT_SET(iVar0, 6) && MISC::IS_BIT_SET(iVar0, 7)) && MISC::IS_BIT_SET(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((MISC::IS_BIT_SET(iVar0, 9) && MISC::IS_BIT_SET(iVar0, 10)) && MISC::IS_BIT_SET(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_50(int iParam0, int iParam1, int iParam2)//Position - 0x20FD
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_51(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_51(int iParam0)//Position - 0x212F
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_52();
		if (iVar1 > -1)
		{
			Global_2542240 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2542240 = 1;
		}
	}
	return iVar0;
}

int func_52()//Position - 0x2163
{
	return Global_1312745;
}

int func_53(char* sParam0, int iParam1)//Position - 0x216F
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	func_54(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_54(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x219B
{
	int iVar0;
	
	if ((!func_57() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_376(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_55(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1671392.f_5[iVar0 /*53*/] = iParam0;
		Global_1671392.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1671392.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1671392.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1671392.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1671392.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1671392.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_55(int iParam0)//Position - 0x22A3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1671392 - 1))
	{
		if (iParam0 > Global_1671392.f_5[iVar0 /*53*/].f_1)
		{
			func_56(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1671392++;
	if (Global_1671392 > 5)
	{
		Global_1671392 = 5;
		return Global_1671392;
	}
	return (Global_1671392 - 1);
}

void func_56(int iParam0)//Position - 0x2305
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1671392.f_5[iVar0 /*53*/] = { Global_1671392.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_57()//Position - 0x233E
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

int func_58(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x234F
{
	int iVar0;
	struct<8> Var1;
	struct<8> Var17;
	
	iVar0 = -1;
	if ((NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam2)) || iParam6)
	{
		if (!bParam5)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
			StringCopy(&Var17, PLAYER::GET_PLAYER_NAME(iParam2), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
			StringCopy(&Var17, PLAYER::GET_PLAYER_NAME(iParam2), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var17))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_59(&Var1));
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_59(&Var17));
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
		func_54(22, sParam0, 1, &Var1, 0, 0, 0, 0f, 0, &Var17, 0, 0);
	}
	return iVar0;
}

var func_59(char* sParam0)//Position - 0x2405
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_60(&cVar0);
}

var func_60(char[4] cParam0)//Position - 0x2427
{
	return cParam0;
}

struct<4> func_61()//Position - 0x2431
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_WON2P", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_WON2P", 16);
			break;
	}
	return Var0;
}

int func_62(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)//Position - 0x2466
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_59(&Var1));
		if (!bParam5)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
		}
		else
		{
			Global_2507671 = { func_64(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2507601, 35, &Global_2507671))
			{
				iVar17 = 0;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2507601.f_22), "Leader") && Global_2507601.f_30 == 0)
				{
					iVar17 = 1;
				}
				if (Global_2507601.f_21 > 0)
				{
					iVar18 = 0;
				}
				else
				{
					iVar18 = 1;
				}
				if (bParam7)
				{
					if (bParam8)
					{
						Var1 = { func_63(&Var1) };
					}
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(iVar18, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2507601, 35), &(Global_2507601.f_17), Global_2507601.f_30, iVar17, 0, Global_2507601, &Var1, Global_1314030, Global_1314031, Global_1314032);
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(iVar18, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2507601, 35), &(Global_2507601.f_17), Global_2507601.f_30, iVar17, 0, Global_2507601, Global_1314030, Global_1314031, Global_1314032);
				}
			}
			else
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
			}
		}
		func_54(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_63(char* sParam0)//Position - 0x25C6
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

struct<13> func_64(int iParam0)//Position - 0x25EE
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

struct<4> func_65()//Position - 0x2605
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_DRAWD", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_DRAWD", 16);
			break;
	}
	return Var0;
}

struct<4> func_66()//Position - 0x263A
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_NWN", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_NWN", 16);
			break;
	}
	return Var0;
}

struct<4> func_67()//Position - 0x266F
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_WONPG", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_WONPG", 16);
			break;
	}
	return Var0;
}

int func_68(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x26A4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_398();
	iVar1 = func_398();
	iVar2 = func_398();
	return func_69(uParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_69(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)//Position - 0x26DF
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
	func_115(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_113(&(Var0.f_69), 4);
	return func_70(&Var0);
}

int func_70(var uParam0)//Position - 0x2793
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2437549.f_3030)
		{
			return 0;
		}
	}
	func_85(uParam0, uParam0->f_17);
	func_82(uParam0);
	if (func_81())
	{
		func_82(uParam0);
	}
	if (func_80(uParam0->f_1))
	{
		func_73();
		if (Global_2437549.f_2708[0 /*80*/].f_2 == 0)
		{
			Global_2437549.f_2708[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2437549.f_2708[0 /*80*/].f_1 == 13 || Global_2437549.f_2708[0 /*80*/].f_1 == 53) || Global_2437549.f_2708[0 /*80*/].f_1 == 54) || Global_2437549.f_2708[0 /*80*/].f_1 == 58)
		{
			Global_2437549.f_2708[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2437549.f_2708[iVar0 + 1 /*80*/] = { Global_2437549.f_2708[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2437549.f_2708[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2437549.f_2708[iVar0 /*80*/].f_2 == 0)
		{
			Global_2437549.f_2708[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_73();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_113(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 2);
				Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_72(uParam0->f_69, 128))
			{
				if (func_71(Global_2437549.f_2708[iVar0 /*80*/].f_1))
				{
					Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
					func_113(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_71(int iParam0)//Position - 0x2965
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

bool func_72(var uParam0, int iParam1)//Position - 0x29EB
{
	return (uParam0 && iParam1) != 0;
}

void func_73()//Position - 0x29FA
{
	bool bVar0;
	
	if (Global_2437549.f_3031)
	{
		return;
	}
	if (!Global_76845)
	{
		Global_76845 = 1;
		bVar0 = true;
	}
	func_74();
	if (bVar0)
	{
		Global_76845 = 0;
	}
}

void func_74()//Position - 0x2A2D
{
	Global_2437549.f_3032 = 0;
	Global_2437549.f_3032.f_578 = 0;
	func_78(&(Global_2437549.f_3032.f_1));
	Global_2437549.f_3032.f_1.f_1 = 0;
	func_75(&(Global_2437549.f_3032.f_1));
}

void func_75(var uParam0)//Position - 0x2A6E
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
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
	if (uParam0->f_564)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_564 = 0;
	}
	if (!Global_76845)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_76846)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_77(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_76(0);
}

void func_76(int iParam0)//Position - 0x2B14
{
	Global_76837 = iParam0;
	Global_76838 = iParam0;
}

bool func_77(bool bParam0)//Position - 0x2B28
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76825, 0);
}

void func_78(var uParam0)//Position - 0x2B53
{
	func_79(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_79(var uParam0)//Position - 0x2B7D
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_80(int iParam0)//Position - 0x2BFC
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

bool func_81()//Position - 0x2D09
{
	return Global_2448961.f_17;
}

void func_82(var uParam0)//Position - 0x2D17
{
	if (func_84(uParam0->f_1))
	{
		uParam0->f_72 = func_83();
	}
}

int func_83()//Position - 0x2D32
{
	return 21;
}

int func_84(int iParam0)//Position - 0x2D3C
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

void func_85(var uParam0, int iParam1)//Position - 0x2DCE
{
	if (func_84(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_398() || !func_1276(iParam1, 0, 1))
	{
		return;
	}
	if (func_71(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_86(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_86(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x2E25
{
	int iVar0;
	int iVar1;
	
	if (func_111(iParam0) && !bParam4)
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
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_149437[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_111(PLAYER::PLAYER_ID()) || (func_110() && func_109())) && !MISC::IS_BIT_SET(Global_2531497.f_4591, 31)) && !bParam4)
	{
		iVar1 = func_108();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_1276(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_149437[iParam1] != -1)
							{
								return func_106(iParam1, iParam0, 0);
							}
							else
							{
								return func_99(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_99(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_149437[iParam1] != -1)
				{
					return func_106(iParam1, iParam0, 0);
				}
				else
				{
					return func_87(0, -1, 0);
				}
			}
			else
			{
				return func_87(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_149437[iParam1] != -1)
		{
			return func_106(iParam1, iParam0, 0);
		}
		else
		{
			return func_99(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_99(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_87(bool bParam0, int iParam1, bool bParam2)//Position - 0x3005
{
	return func_88(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_88(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x301B
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_98() || (func_97() && func_95())) && Global_1384328.f_1)
	{
		if (bParam1)
		{
			return func_94(iParam2, iVar0);
		}
		else
		{
			return func_94(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_93(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_92(1);
				}
				else
				{
					return func_92(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_89(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_89(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_92(1);
	}
	return func_92(0);
}

int func_89(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x3122
{
	int iVar0;
	
	iVar0 = func_91(iParam0, iParam1, iParam3);
	if (func_90(Global_4456448.f_154360, 1))
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

int func_90(int iParam0, bool bParam1)//Position - 0x323A
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_190930 == 65)
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
		if (iParam0 == Global_262145.f_9019[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_91(int iParam0, int iParam1, int iParam2)//Position - 0x328B
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
			if (!func_93(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_92(bool bParam0)//Position - 0x32D2
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_93(int iParam0, int iParam1, int iParam2)//Position - 0x32E9
{
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
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 0);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 1);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 2);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 4);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 5);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 6);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 8);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 9);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 10);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 12);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 13);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 14);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_94(int iParam0, int iParam1)//Position - 0x34B4
{
	if (iParam0 == -1)
	{
		iParam0 = func_91(iParam1, iParam0, 4);
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

bool func_95()//Position - 0x3502
{
	if (func_96())
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_4456448.f_195024, 4);
}

bool func_96()//Position - 0x3524
{
	return MISC::IS_BIT_SET(Global_4456448.f_184550, 12);
}

bool func_97()//Position - 0x353C
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_195024, 0);
	}
	return ((MISC::IS_BIT_SET(Global_4456448.f_195024, 0) || Global_1654024) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_98()//Position - 0x3589
{
	if (func_96() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_99(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x35A6
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590446[PLAYER::PLAYER_ID() /*871*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590446[iVar2 /*871*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_102())
			{
				iVar3 = func_130(iParam0);
				if (!iVar3 == -1)
				{
					return func_128(iVar3);
				}
			}
			if ((func_101(iParam1, iParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_93(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && MISC::IS_BIT_SET(Global_4456448.f_15, 23)) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_92(1);
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_100(1);
			}
			else
			{
				return func_88(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574407 || Global_1574398) || Global_1590446[iParam0 /*871*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574407 == 1 && Global_1574417 == 0))
			{
				return func_92(1);
			}
			else
			{
				return func_88(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574402 && Global_1573899.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_130(iParam0);
	if (!iVar4 == -1)
	{
		return func_128(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_100(bool bParam0)//Position - 0x3749
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_101(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3760
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_102()//Position - 0x37D8
{
	if (((func_105() || func_104()) || func_81()) || func_103())
	{
		return 1;
	}
	return 0;
}

bool func_103()//Position - 0x380A
{
	return Global_2448961.f_19;
}

var func_104()//Position - 0x3818
{
	return Global_2448961.f_16;
}

var func_105()//Position - 0x3826
{
	return Global_2448961.f_15;
}

int func_106(int iParam0, int iParam1, bool bParam2)//Position - 0x3834
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969029.f_13[iParam0];
	if (func_102())
	{
		iVar2 = func_130(iParam1);
		if (!iVar2 == -1)
		{
			return func_128(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4456448.f_106[iParam0 /*11610*/].f_5831[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_398())
	{
		if (Global_4456448.f_149437[iParam0] != -1 && Global_4456448.f_149437[iParam0] <= 4)
		{
			if (Global_4456448.f_149437[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_149437[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_149437[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_149437[iParam0] == 4)
			{
				if (MISC::IS_BIT_SET(Global_4456448.f_15, 29))
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
				iVar0 = Global_4456448.f_149437[iParam0];
			}
		}
		else
		{
			iVar0 = func_88(iParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_107(iParam0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_15, 26) && !func_93(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_100(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_107(int iParam0)//Position - 0x39C1
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_191014;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_191015;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_191016;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_191017;
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

var func_108()//Position - 0x3A96
{
	return Global_2359302.f_2;
}

bool func_109()//Position - 0x3AA4
{
	return MISC::IS_BIT_SET(Global_2359302, 4);
}

bool func_110()//Position - 0x3AB5
{
	return MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_39.f_18, 14);
}

int func_111(int iParam0)//Position - 0x3AD2
{
	if (func_376(iParam0, 0))
	{
		return 1;
	}
	if (func_112())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_112()//Position - 0x3B14
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

void func_113(var uParam0, int iParam1)//Position - 0x3B25
{
	func_114(uParam0, iParam1);
}

void func_114(var uParam0, var uParam1)//Position - 0x3B35
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_115(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x3B46
{
	uParam1->f_17 = func_398();
	uParam1->f_18 = func_398();
	uParam1->f_19 = func_398();
	uParam1->f_20 = func_398();
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

struct<4> func_116()//Position - 0x3BC4
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_WONPG2", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_WONPG2", 16);
			break;
	}
	return Var0;
}

struct<4> func_117()//Position - 0x3BF9
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_WONP", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_WONP", 16);
			break;
	}
	return Var0;
}

char* func_118(int iParam0)//Position - 0x3C2E
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		iVar0 = func_127(&(Global_1628955[iParam0 /*614*/].f_11.f_104));
		return iVar0;
	}
	if (Global_1628955[iParam0 /*614*/].f_11.f_120 != Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_120)
	{
		iVar0 = func_122(iParam0, 0);
		return iVar0;
	}
	if (((func_40(iParam0, 28) || func_40(PLAYER::PLAYER_ID(), 28)) || func_121(iParam0)) && !func_120(iParam0))
	{
		return func_122(iParam0, 0);
	}
	iVar1 = func_119(iParam0);
	if (iVar1 != func_398())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_122(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_398())
	{
		iVar0 = func_127(&(Global_1628955[iVar1 /*614*/].f_11.f_104));
		if (MISC::IS_STRING_NULL_OR_EMPTY(iVar0))
		{
			return func_122(iVar1, 0);
		}
		else
		{
			return iVar0;
		}
	}
	return "";
}

int func_119(int iParam0)//Position - 0x3D34
{
	if (iParam0 != func_398())
	{
		return Global_1628955[iParam0 /*614*/].f_11;
	}
	return func_398();
}

int func_120(int iParam0)//Position - 0x3D57
{
	struct<13> Var0;
	
	Var0 = { func_64(iParam0) };
	if (MISC::IS_DURANGO_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_121(int iParam0)//Position - 0x3D87
{
	struct<13> Var0;
	
	if (iParam0 != func_398())
	{
		Var0 = { func_64(iParam0) };
		if (MISC::IS_ORBIS_VERSION() || MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				return 0;
			}
		}
		else if (MISC::IS_DURANGO_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_122(int iParam0, bool bParam1)//Position - 0x3DE0
{
	if (!bParam1)
	{
		if (func_124(iParam0, 1))
		{
			return func_123();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_123()//Position - 0x3E06
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

bool func_124(int iParam0, bool bParam1)//Position - 0x3E15
{
	return func_125(iParam0, bParam1, 1);
}

int func_125(int iParam0, bool bParam1, int iParam2)//Position - 0x3E26
{
	int iVar0;
	
	if (iParam0 == func_398())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_126(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628955[iParam0 /*614*/].f_11;
	if (iVar0 != func_398() && Global_1628955[iVar0 /*614*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_126(int iParam0, int iParam1)//Position - 0x3E82
{
	if (iParam0 != func_398())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_398())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 == iParam0 && Global_1628955[iParam0 /*614*/].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_127(var uParam0)//Position - 0x3ED1
{
	return uParam0;
}

int func_128(int iParam0)//Position - 0x3EDB
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_129(iParam0);
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

var func_129(int iParam0)//Position - 0x3F9E
{
	return Global_2417783.f_2105.f_44[iParam0 /*2*/].f_1;
}

int func_130(int iParam0)//Position - 0x3FB5
{
	if (!iParam0 == func_398())
	{
		if (func_131(iParam0, 1))
		{
			return Global_2417783.f_2105.f_11[func_119(iParam0)];
		}
	}
	return -1;
}

bool func_131(int iParam0, bool bParam1)//Position - 0x3FE7
{
	if (!bParam1)
	{
		if (func_132(iParam0))
		{
			return 0;
		}
	}
	return Global_1628955[iParam0 /*614*/].f_11 != func_398();
}

int func_132(int iParam0)//Position - 0x4013
{
	if (iParam0 != func_398())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_398())
		{
			return Global_1628955[iParam0 /*614*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_133()//Position - 0x4048
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_398();
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (iVar0 == func_398())
		{
			if (MISC::IS_BIT_SET(Local_112.f_10, iVar2))
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)))
				{
					iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
					if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
					{
						iVar0 = iVar1;
					}
				}
			}
		}
		iVar2++;
	}
	return iVar0;
}

int func_134(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x40A7
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
	func_115(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_113(&(Var0.f_69), iParam7);
	}
	return func_70(&Var0);
}

int func_135()//Position - 0x4127
{
	if (Local_112.f_197 != 2)
	{
		return 64;
	}
	return 87;
}

struct<4> func_136()//Position - 0x4141
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_WON", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_WON", 16);
			break;
	}
	return Var0;
}

void func_137(int iParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x4177
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	func_329(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_328(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_327(iParam0, bParam3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_325(iParam0))
	{
		if (bParam1)
		{
			if (func_324(PLAYER::PLAYER_ID()) > 0)
			{
				func_323();
			}
			else
			{
				func_322();
			}
		}
		else
		{
			func_321();
		}
	}
	func_305(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_303(iParam0, uParam2, &iVar0, &iVar5);
	func_280(iParam0, uParam2, &iVar0, &iVar5);
	func_266(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_249(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2531497.f_4898.f_380 = uVar4;
	}
	else
	{
		Global_2531497.f_4898.f_380 = iVar5;
	}
	iVar8 = func_248();
	if (iVar8 != func_398() && iParam0 != 148)
	{
		if (func_131(PLAYER::PLAYER_ID(), 0))
		{
			if (!func_246(PLAYER::PLAYER_ID(), iVar8, 1))
			{
				func_236(&iVar0, 1);
			}
		}
	}
	func_230(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1674861.f_10 = iVar1;
		func_332();
		func_182(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1674861.f_9 = iVar0;
		func_169(iParam0, iVar0, iVar7, uVar4, iVar5, uParam2);
		func_168(iParam0, iVar0);
		if (func_167(iParam0))
		{
			if (func_166(iParam0) > -1)
			{
				func_333(func_166(iParam0), iVar0);
			}
		}
		Global_2461199 = iVar0;
		func_165(&Global_2459463, 0, 0);
	}
	if (func_41(PLAYER::PLAYER_ID()) || func_45(PLAYER::PLAYER_ID()))
	{
		func_153(iParam0);
	}
	if (func_152(iParam0))
	{
		Global_1674879.f_13 = iVar0;
		Global_1674879.f_14 = iVar1;
	}
	if (func_151(iParam0))
	{
		Global_1674933.f_13 = iVar0;
		Global_1674933.f_14 = iVar1;
	}
	if (func_150(iParam0))
	{
		Global_1674996.f_12 = iVar0;
		Global_1674996.f_13 = iVar1;
	}
	if (func_149(iParam0))
	{
		Global_1675040.f_12 = iVar0;
		Global_1675040.f_13 = iVar1;
	}
	if (func_148(iParam0))
	{
		Global_1675094.f_12 = iVar0;
		Global_1675094.f_13 = iVar1;
	}
	if (func_147(iParam0))
	{
		if (func_146(iParam0))
		{
			Global_1675175.f_12 = iVar0;
			Global_1675175.f_13 = iVar1;
		}
		else if (func_140(iParam0))
		{
			Global_1675228.f_12 = iVar0;
			Global_1675228.f_13 = iVar1;
		}
	}
	if (func_139(iParam0))
	{
		Global_1675312.f_12 = iVar0;
		Global_1675312.f_13 = iVar1;
	}
	if (func_138(iParam0))
	{
		Global_1675387.f_16 = iVar0;
		Global_1675387.f_17 = iVar1;
	}
}

int func_138(int iParam0)//Position - 0x4555
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_139(int iParam0)//Position - 0x456F
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_140(int iParam0)//Position - 0x4589
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_141(func_142(PLAYER::PLAYER_ID()))))
	{
		return 1;
	}
	return 0;
}

int func_141(int iParam0)//Position - 0x4612
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_142(int iParam0)//Position - 0x464A
{
	if (func_145(iParam0) == 237 || func_145(iParam0) == 250)
	{
		return func_143(iParam0);
	}
	return -1;
}

int func_143(int iParam0)//Position - 0x4677
{
	if (func_144(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_181;
	}
	return -1;
}

int func_144(int iParam0, int iParam1)//Position - 0x469A
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_145(int iParam0)//Position - 0x46D5
{
	if (func_144(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_33;
	}
	return -1;
}

int func_146(int iParam0)//Position - 0x46F8
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

int func_147(int iParam0)//Position - 0x470C
{
	switch (iParam0)
	{
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_148(int iParam0)//Position - 0x4762
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_149(int iParam0)//Position - 0x477C
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_150(int iParam0)//Position - 0x479C
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_151(int iParam0)//Position - 0x47C2
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_152(int iParam0)//Position - 0x4812
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590446[PLAYER::PLAYER_ID() /*871*/] == 148 && func_126(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_153(int iParam0)//Position - 0x48F4
{
	if (func_164(PLAYER::PLAYER_ID()) && func_162())
	{
		if (func_161(iParam0))
		{
			func_157(9639, -1);
		}
		else if (func_156(iParam0))
		{
			func_157(9641, -1);
		}
		else if (func_155(iParam0, 1))
		{
			func_157(9642, -1);
		}
		else if (func_154(iParam0))
		{
			func_157(9643, -1);
		}
	}
}

int func_154(int iParam0)//Position - 0x495E
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_155(int iParam0, int iParam1)//Position - 0x498A
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

int func_156(int iParam0)//Position - 0x49DF
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_157(int iParam0, int iParam1)//Position - 0x4A0B
{
	int iVar0;
	
	iVar0 = func_50(iParam0, func_51(iParam1), 0);
	iVar0++;
	if (!func_160(iParam0))
	{
		func_159(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_158(iParam0, iVar0, iParam1, 1);
	}
}

void func_158(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4A4C
{
	int iVar0;
	
	iVar0 = Global_2542527[iParam0 /*3*/][func_51(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1384207[func_51(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1384213[func_51(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1384219[func_51(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1384225[func_51(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1384177[func_51(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1384183[func_51(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1384189[func_51(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1384195[func_51(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1384147[func_51(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1384153[func_51(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1384159[func_51(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1384165[func_51(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1384237[func_51(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1384243[func_51(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1384249[func_51(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1384255[func_51(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1384267[func_51(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1384273[func_51(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1384279[func_51(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1384285[func_51(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2578592[0 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2578592[1 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2578592[2 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2578592[3 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 9509:
			Global_2578729[func_51(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1384291[func_51(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1384297[func_51(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1384303[func_51(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1384315[func_51(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2578659[0 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2578659[1 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2578659[2 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2578659[3 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2578659[4 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2578732[0 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2578732[1 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2578732[2 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2578732[3 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2578732[4 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2578748[0 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2578748[1 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2578748[2 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2578748[3 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2578748[4 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2578659[5 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2578592[4 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2578764[func_51(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2578773[func_51(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2578767[func_51(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2578776[func_51(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2578770[func_51(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2578779[func_51(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2578782[func_51(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2578659[6 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2578592[5 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2578659[7 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2578592[6 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2578659[8 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2578592[7 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2578659[9 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2578592[8 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2578659[10 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2578592[9 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2578659[11 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2578592[10 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2578659[12 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2578592[11 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2578659[13 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2578592[12 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2578659[14 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2578592[13 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2578659[15 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2578592[14 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2578659[16 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2578592[15 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2578659[17 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2578592[16 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2578592[17 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2578592[18 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2578592[19 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2578592[20 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2578785[func_51(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2578788[func_51(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2578791[func_51(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2578794[func_51(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2578797[func_51(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2578800[func_51(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2578803[func_51(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2578806[func_51(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2578809[func_51(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2578812[func_51(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2578815[func_51(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2578818[func_51(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2578821[func_51(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2578824[func_51(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2578592[21 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_159(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x53CF
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_51(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_160(int iParam0)//Position - 0x53FF
{
	if (Global_1384128)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 9509:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
			case 8534:
				return 1;
				break;
			}
	}
	return 0;
}

int func_161(int iParam0)//Position - 0x5663
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

bool func_162()//Position - 0x56B9
{
	return func_163(PLAYER::PLAYER_ID());
}

bool func_163(int iParam0)//Position - 0x56C9
{
	return func_126(iParam0, 1);
}

bool func_164(int iParam0)//Position - 0x56D8
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_119, 14);
}

void func_165(var uParam0, bool bParam1, bool bParam2)//Position - 0x56FE
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

int func_166(int iParam0)//Position - 0x573B
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_167(int iParam0)//Position - 0x581C
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_168(int iParam0, int iParam1)//Position - 0x5884
{
	if (func_164(PLAYER::PLAYER_ID()) && func_162())
	{
		if (func_161(iParam0) && iParam1 > 0)
		{
			func_159(9640, (func_50(9640, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_169(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)//Position - 0x58C8
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<2> Var7;
	
	iVar5 = func_181();
	if (iVar5 != func_398())
	{
		func_180(iVar5, &uVar0, &uVar1);
	}
	bVar6 = !func_179(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_346())
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, uParam3);
			}
			break;
		
		case 190:
			if (func_162())
			{
				if (!func_346())
				{
					Var7 = { func_178() };
					MONEY::_NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(func_177(Var7)), func_176(Var7), iParam4);
				}
			}
			else if (func_346())
			{
				func_335(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			break;
		
		case 226:
			if (func_175())
			{
				if (!func_346())
				{
					MONEY::_NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(func_177(func_174(PLAYER::PLAYER_ID()))), 5, iParam4);
				}
			}
			else if (func_346())
			{
				func_335(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			break;
		
		case 230:
			if (func_175())
			{
				if (!func_346())
				{
					iVar2 = func_170(uParam5->f_16, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						iVar3 = (iVar3 - iParam2);
					}
					MONEY::_0x6B7E4FB50D5F3D65(iVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_346())
			{
				func_335(463142405, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_SMUGGLING(uVar0, uVar1, iParam1, bVar6);
			}
			break;
		
		case 233:
			if (func_346())
			{
				func_335(1407278493, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_GANGOPS_JOBS_PREP_PARTICIPATION(iParam1);
			}
			break;
		
		case 237:
			if (func_175())
			{
				if (!func_346())
				{
					MONEY::_0x0B39CF0D53F1C883(iParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_346())
			{
				func_335(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			break;
		
		case 250:
			if (func_346())
			{
				func_335(-961034881, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_0xA75EAC69F59E96E7(iParam1);
			}
			break;
		
		case 249:
			if (func_346())
			{
				func_335(1135468152, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_0xC5156361F26E2212(iParam1);
			}
			break;
		
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_346())
			{
				func_335(-634726636, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_0x1FDA0AA679C9919B(iParam1);
			}
			break;
		
		case 243:
			if (func_346())
			{
				func_335(1698417709, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CASINO_MISSION_REWARD(iParam1);
			}
			break;
		
		case 158:
			if (uParam5->f_21)
			{
				if (func_346())
				{
					func_335(1668610896, iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					unk_0x72E7C7B9615FA3C3(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (func_346())
			{
				func_335(-2032529561, iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				unk_0x72E7C7B9615FA3C3(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		
		default:
			if (func_346())
			{
				func_335(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_0x0CB1BE0633C024A8(uVar0, uVar1, iParam1, bVar6);
			}
			break;
	}
}

int func_170(int iParam0, int iParam1)//Position - 0x5D6E
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_173(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_171(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_171(int iParam0, int iParam1)//Position - 0x5D97
{
	return (func_172(iParam0) * iParam1);
}

int func_172(int iParam0)//Position - 0x5DA8
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22294;
		
		case 0:
			return Global_262145.f_22295;
		
		case 1:
			return Global_262145.f_22296;
		
		case 2:
			return Global_262145.f_22297;
		
		case 3:
			return Global_262145.f_22298;
		
		case 4:
			return Global_262145.f_22299;
		
		case 5:
			return Global_262145.f_22300;
		
		case 6:
			return Global_262145.f_22301;
		
		case 7:
			return Global_262145.f_22302;
		
		default:
	}
	return 0;
}

float func_173(int iParam0, int iParam1)//Position - 0x5E48
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22304);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22306;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22303);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22306;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22303);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22307;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22307;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22307;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22308;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22305);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22308;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22305);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22308;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22305);
			break;
	}
	iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(iVar2) * fVar0);
}

int func_174(int iParam0)//Position - 0x5F60
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return Global_1590446[iParam0 /*871*/].f_273.f_179[5 /*12*/];
}

bool func_175()//Position - 0x5F86
{
	return func_132(PLAYER::PLAYER_ID());
}

int func_176(int iParam0)//Position - 0x5F96
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

char* func_177(int iParam0)//Position - 0x60DC
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_178()//Position - 0x62BE
{
	return Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_193;
}

bool func_179(bool bParam0)//Position - 0x62D7
{
	return func_131(PLAYER::PLAYER_ID(), bParam0);
}

void func_180(int iParam0, var uParam1, var uParam2)//Position - 0x62E9
{
	*uParam1 = Global_1628955[iParam0 /*614*/].f_11.f_8[0];
	*uParam2 = Global_1628955[iParam0 /*614*/].f_11.f_8[1];
}

int func_181()//Position - 0x6317
{
	return Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11;
}

int func_182(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x632C
{
	return func_183(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_183(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x634E
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_193(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_189(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_184(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_184(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x63C7
{
	vector3 vVar0;
	
	vVar0 = { func_187(iParam0, 1) };
	if (iParam0 == func_186(PLAYER::PLAYER_PED_ID()))
	{
		func_185(1);
	}
	func_189(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_185(int iParam0)//Position - 0x63FB
{
	Global_2437549.f_1890 = iParam0;
}

int func_186(int iParam0)//Position - 0x640C
{
	return iParam0;
}

Vector3 func_187(int iParam0, bool bParam1)//Position - 0x6416
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		vVar3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_188(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
		{
			fVar6 = vVar3.z;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar7, &vVar10);
	if (bParam1)
	{
		fVar13 = (vVar10.z + 0.18f);
	}
	else
	{
		fVar13 = (vVar7.z + 0.18f);
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar6, 0f, 0f, fVar13) };
	return vVar0;
}

int func_188(int iParam0)//Position - 0x64DA
{
	return iParam0;
}

void func_189(vector3 vParam0, int iParam3, int iParam4, char* sParam5, int iParam6)//Position - 0x64E4
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2437549.f_1289[iVar0 /*30*/].f_6 == 0 || Global_2437549.f_1289[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2437549.f_1289[iVar1 /*30*/] = { vParam0 };
			Global_2437549.f_1289[iVar1 /*30*/].f_6 = 1;
			Global_2437549.f_1289[iVar1 /*30*/].f_4 = func_192(Global_2437549.f_1289[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437549.f_1289[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2437549.f_1289[iVar1 /*30*/].f_3 = iParam3;
			Global_2437549.f_1289[iVar1 /*30*/].f_8 = iParam4;
			Global_2437549.f_1289[iVar1 /*30*/].f_9 = func_191();
			Global_2437549.f_1289[iVar1 /*30*/].f_10 = func_190();
			StringCopy(&(Global_2437549.f_1289[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2437549.f_1289[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_190()//Position - 0x65FB
{
	if (Global_2437549.f_1890)
	{
		Global_2437549.f_1890 = 0;
		return 1;
	}
	Global_2437549.f_1890 = 0;
	return 0;
}

var func_191()//Position - 0x6625
{
	var uVar0;
	
	uVar0 = Global_2437549.f_1892;
	Global_2437549.f_1892 = 1;
	return uVar0;
}

float func_192(vector3 vParam0, var uParam3, var uParam4)//Position - 0x6640
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vParam0, true);
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

var func_193(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x66D9
{
	var uVar0;
	
	uVar0 = func_194(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_194(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x66FC
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (iParam1 == 0)
	{
		if (func_229(PLAYER::PLAYER_ID()) || func_228(PLAYER::PLAYER_ID()))
		{
			if (Global_262145.f_9635 > 16000)
			{
				iVar2 = 16000;
			}
			else
			{
				iVar2 = Global_262145.f_9635;
			}
		}
		else if (func_226() || func_225(PLAYER::PLAYER_ID()))
		{
			if (Global_262145.f_22762 > 16000)
			{
				iVar2 = 16000;
			}
			else
			{
				iVar2 = Global_262145.f_22762;
			}
		}
		else if (func_103())
		{
			if (Global_262145.f_27882 > 16000)
			{
				iVar2 = 16000;
			}
			else
			{
				iVar2 = Global_262145.f_27882;
			}
		}
		else if (Global_262145.f_6635 > 10000)
		{
			iVar2 = 10000;
		}
		else
		{
			iVar2 = Global_262145.f_6635;
		}
	}
	if (func_224(sParam2))
	{
	}
	if (func_223())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_221(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_220(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_217(0, &iVar1);
					break;
				
				case 3:
					func_217(1, &iVar1);
					break;
				
				case 1:
					func_214(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1686907)
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
			func_213(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_204((func_211(PLAYER::PLAYER_ID(), 1) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_39.f_2 != -1)
				{
					func_213(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_199(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_195((func_197(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_195((func_197(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_195(int iParam0)//Position - 0x6929
{
	if (func_223())
	{
		Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_211.f_5 = iParam0;
		func_196(joaat("mpply_globalxp"), iParam0);
	}
}

void func_196(int iParam0, int iParam1)//Position - 0x6954
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_197(int iParam0)//Position - 0x6970
{
	if (iParam0 > -1)
	{
		if (func_1276(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_198(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_5;
			}
		}
		else
		{
			return func_198(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_198(int iParam0)//Position - 0x69C1
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

void func_199(int iParam0)//Position - 0x69DF
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_64(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_202(func_203(&Var0));
			if (iVar13 == 0)
			{
				func_201(&Global_1384134, iParam0);
				func_200(joaat("mpply_crew_local_xp_0"), Global_1384134);
			}
			else if (iVar13 == 1)
			{
				func_201(&Global_1384135, iParam0);
				func_200(joaat("mpply_crew_local_xp_1"), Global_1384135);
			}
			else if (iVar13 == 2)
			{
				func_201(&Global_1384136, iParam0);
				func_200(joaat("mpply_crew_local_xp_2"), Global_1384136);
			}
			else if (iVar13 == 3)
			{
				func_201(&Global_1384137, iParam0);
				func_200(joaat("mpply_crew_local_xp_3"), Global_1384137);
			}
			else if (iVar13 == 4)
			{
				func_201(&Global_1384138, iParam0);
				func_200(joaat("mpply_crew_local_xp_4"), Global_1384138);
			}
		}
	}
}

void func_200(int iParam0, int iParam1)//Position - 0x6AB3
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1384129 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1384131 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1384131 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1384132 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1384133 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1384134 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1384135 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1384136 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1384137 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1384138 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1384139 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1384140 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1384141 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1384142 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1384143 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1384144 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1384145 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_201(var uParam0, int iParam1)//Position - 0x6BD8
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_202(int iParam0)//Position - 0x6BE9
{
	if (iParam0 == Global_1384129)
	{
		return 0;
	}
	else if (iParam0 == Global_1384130)
	{
		return 1;
	}
	else if (iParam0 == Global_1384131)
	{
		return 2;
	}
	else if (iParam0 == Global_1384132)
	{
		return 3;
	}
	else if (iParam0 == Global_1384133)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_203(var uParam0)//Position - 0x6C46
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2458924;
		}
	}
	return Global_2458924;
}

void func_204(int iParam0, int iParam1, int iParam2)//Position - 0x6C69
{
	if (func_223())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1384279[func_51(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1384279[func_51(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
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
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_210(PLAYER::PLAYER_ID()))
		{
			Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_211.f_1 = iParam0;
			Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_211.f_6 = func_208(iParam0, 1);
		}
		func_158(639, iParam0, -1, 1);
		func_159(640, func_208(iParam0, 1), -1, 1, 0);
		Global_1384279[func_51(-1)] = iParam0;
		func_205(-1109644434, 7, 0);
	}
}

void func_205(int iParam0, int iParam1, int iParam2)//Position - 0x6D8F
{
	int iVar0;
	
	if (func_207(iParam1, iParam2))
	{
		iVar0 = func_206();
		Global_2458876[iVar0] = iParam1;
		Global_2458887[iVar0] = iParam0;
	}
}

int func_206()//Position - 0x6DBC
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2458876[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_207(int iParam0, var uParam1)//Position - 0x6DF1
{
	if (Global_1312861)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312873) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_208(int iParam0, bool bParam1)//Position - 0x6E77
{
	if (bParam1)
	{
	}
	return func_209(iParam0, 0);
}

int func_209(int iParam0, int iParam1)//Position - 0x6E8B
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
		if (Global_290594[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_290594[iVar3] < iParam0)
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

int func_210(int iParam0)//Position - 0x6F4A
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_2437549.f_1, iParam0);
	}
	return 1;
}

int func_211(int iParam0, bool bParam1)//Position - 0x6F6F
{
	if (bParam1)
	{
	}
	return func_212(iParam0);
}

int func_212(int iParam0)//Position - 0x6F82
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1384279[func_51(-1)];
			}
			else if (func_210(iParam0))
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1384279[func_51(-1)];
	}
	return 0;
}

void func_213(int iParam0, int iParam1, int iParam2)//Position - 0x6FDF
{
	int iVar0;
	
	iVar0 = func_50(iParam0, func_51(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_160(iParam0))
	{
		func_159(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_158(iParam0, iVar0, iParam2, 1);
	}
}

void func_214(int iParam0)//Position - 0x7021
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_93(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_216(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_215(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_215(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_215(int iParam0, int iParam1)//Position - 0x710C
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_216(int iParam0, int iParam1)//Position - 0x712D
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2507671 = { func_64(iParam0) };
		Global_2507684 = { func_64(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2507671))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2507684))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2507601, 35, &Global_2507671);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2507636, 35, &Global_2507684);
				if (Global_2507601 == Global_2507636)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_217(bool bParam0, int iParam1)//Position - 0x719A
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
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
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_1276(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_216(PLAYER::PLAYER_ID(), iVar4))
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
			iVar4 = iVar0;
			if (func_1276(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_218(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_216(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_215(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_215(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_218(int iParam0, int iParam1)//Position - 0x72B2
{
	return SYSTEM::VDIST(func_219(iParam0), func_219(iParam1));
	return 0f;
}

Vector3 func_219(int iParam0)//Position - 0x72CE
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_220(int iParam0)//Position - 0x72E1
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_215(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_221(int iParam0)//Position - 0x7318
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_211(PLAYER::PLAYER_ID(), 1))
		{
			iParam0 = -func_211(PLAYER::PLAYER_ID(), 1);
		}
	}
	if (func_222(8000, 0, 0) > 0)
	{
		if (func_222(8000, 0, 0) < (iParam0 + func_211(PLAYER::PLAYER_ID(), 1)))
		{
			iParam0 = (func_222(8000, 0, 0) - func_211(PLAYER::PLAYER_ID(), 1));
		}
	}
	return iParam0;
}

int func_222(int iParam0, bool bParam1, int iParam2)//Position - 0x7380
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
	return Global_290594[iParam0];
}

int func_223()//Position - 0x73A8
{
	return 1;
}

int func_224(char* sParam0)//Position - 0x73B1
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

int func_225(int iParam0)//Position - 0x73EA
{
	return func_148(func_145(iParam0));
}

bool func_226()//Position - 0x73FC
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_81();
	}
	return func_227(Global_4456448.f_154360);
}

int func_227(int iParam0)//Position - 0x7420
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_228(int iParam0)//Position - 0x745A
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

bool func_229(int iParam0)//Position - 0x746F
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

void func_230(int iParam0, var uParam1, var uParam2)//Position - 0x7484
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_235(7))
	{
		return;
	}
	iVar0 = func_233(iParam0);
	iVar1 = func_232(iParam0);
	iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2531497.f_4898.f_263, NETWORK::GET_NETWORK_TIME()));
	if (func_231(iParam0) != -1)
	{
		if (iVar2 > func_231(iParam0))
		{
			iVar2 = func_231(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12395)
	{
		iVar2 = Global_262145.f_12395;
	}
	iVar3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_231(int iParam0)//Position - 0x752E
{
	if (func_155(iParam0, 0) || func_156(iParam0))
	{
		return Global_262145.f_18475;
	}
	if (func_161(iParam0))
	{
		return Global_262145.f_18474;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18471;
		
		case 191:
			return Global_262145.f_18473;
		
		case 190:
			return Global_262145.f_18472;
		
		case 227:
			return Global_262145.f_21031;
		
		case 226:
			return Global_262145.f_21019;
		
		case 225:
			return Global_262145.f_21039;
		
		case 230:
			return Global_262145.f_22291;
		
		case 229:
			return Global_262145.f_22195;
		
		case 233:
			return Global_262145.f_22767;
		
		case 237:
			return Global_262145.f_23930;
		
		case 238:
			return Global_262145.f_24041;
		
		case 249:
			return Global_262145.f_24057;
		
		case 243:
			return Global_262145.f_26237;
		
		default:
	}
	return -1;
}

int func_232(int iParam0)//Position - 0x7641
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12486;
		
		case 152:
			return Global_262145.f_12521;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12509;
		
		case 157:
			return Global_262145.f_12476;
		
		case 159:
			return Global_262145.f_12459;
		
		case 164:
			return Global_262145.f_12499;
		
		case 160:
			return Global_262145.f_12549;
		
		case 162:
			return Global_262145.f_12569;
		
		case 163:
			return Global_262145.f_12534;
		
		case 154:
			return Global_262145.f_12604;
		
		case 155:
			return Global_262145.f_12594;
		
		case 153:
			return Global_262145.f_12558;
		
		case 170:
			return Global_262145.f_14983;
		
		case 171:
			return Global_262145.f_15042;
		
		case 172:
			return Global_262145.f_15060;
		
		case 173:
			return Global_262145.f_15001;
		
		case 166:
			return Global_262145.f_15016;
		
		case 167:
			return Global_262145.f_15107;
		
		case 169:
			return Global_262145.f_15079;
		
		case 168:
			return Global_262145.f_15072;
		
		case 179:
			return Global_262145.f_18354;
		
		case 180:
			return Global_262145.f_18132;
		
		case 182:
			return Global_262145.f_18132;
		
		case 183:
			return Global_262145.f_18132;
		
		case 185:
			return Global_262145.f_18132;
		
		case 186:
			return Global_262145.f_18132;
		
		case 189:
			return Global_262145.f_18354;
		
		case 190:
			return Global_262145.f_18008;
		
		case 191:
			return Global_262145.f_18099;
		
		case 192:
			return Global_262145.f_17893;
		
		case 193:
			return Global_262145.f_18354;
		
		case 194:
			return Global_262145.f_18354;
		
		case 195:
			return Global_262145.f_18132;
		
		case 197:
			return Global_262145.f_18132;
		
		case 198:
			return Global_262145.f_18132;
		
		case 199:
			return Global_262145.f_18354;
		
		case 200:
			return Global_262145.f_18354;
		
		case 201:
			return Global_262145.f_18354;
		
		case 205:
			return Global_262145.f_18354;
		
		case 207:
			return Global_262145.f_18132;
		
		case 208:
			return Global_262145.f_18132;
		
		case 209:
			return Global_262145.f_18132;
		
		case 210:
			return Global_262145.f_18354;
		
		case 211:
			return Global_262145.f_18354;
		
		case 214:
			return Global_262145.f_19204;
		
		case 215:
			return Global_262145.f_19206;
		
		case 216:
			return Global_262145.f_19208;
		
		case 217:
			return Global_262145.f_19210;
		
		case 218:
			return Global_262145.f_19212;
		
		case 219:
			return Global_262145.f_19214;
		
		case 220:
			return Global_262145.f_19216;
		
		case 221:
			return Global_262145.f_19218;
		
		case 225:
			if (!func_175())
			{
				return Global_262145.f_21041;
			}
			break;
		
		case 226:
			if (!func_175())
			{
				return Global_262145.f_21021;
			}
			break;
		
		case 227:
			if (!func_175())
			{
				return Global_262145.f_21033;
			}
			break;
		
		case 229:
			if (!func_175())
			{
				return Global_262145.f_22197;
			}
			break;
		
		case 230:
			if (!func_175())
			{
				return Global_262145.f_22293;
			}
			break;
		
		case 233:
			if (!func_175())
			{
				return Global_262145.f_22766;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (!func_175())
			{
				return Global_262145.f_23932;
			}
			break;
		
		case 238:
			if (!func_175())
			{
				return Global_262145.f_24043;
			}
			break;
		
		case 249:
			if (!func_175())
			{
				return Global_262145.f_24059;
			}
			break;
		
		case 243:
			if (!func_175())
			{
				return Global_262145.f_26240;
			}
			break;
		
		case 158:
			if (!func_175())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_233(int iParam0)//Position - 0x7B0C
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12485;
		
		case 152:
			return Global_262145.f_12520;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12508;
		
		case 157:
			return Global_262145.f_12475;
		
		case 159:
			return Global_262145.f_12458;
		
		case 164:
			return Global_262145.f_12498;
		
		case 160:
			return Global_262145.f_12548;
		
		case 162:
			return Global_262145.f_12568;
		
		case 163:
			return Global_262145.f_12533;
		
		case 154:
			return Global_262145.f_12603;
		
		case 155:
			return Global_262145.f_12593;
		
		case 153:
			return Global_262145.f_12557;
		
		case 170:
			return Global_262145.f_14982;
		
		case 171:
			return Global_262145.f_15041;
		
		case 172:
			return Global_262145.f_15059;
		
		case 173:
			return Global_262145.f_15000;
		
		case 166:
			return Global_262145.f_15015;
		
		case 179:
			return Global_262145.f_18353;
		
		case 180:
			return Global_262145.f_18131;
		
		case 182:
			return Global_262145.f_18131;
		
		case 183:
			return Global_262145.f_18131;
		
		case 185:
			return Global_262145.f_18131;
		
		case 186:
			return Global_262145.f_18131;
		
		case 189:
			return Global_262145.f_18353;
		
		case 193:
			return Global_262145.f_18353;
		
		case 194:
			return Global_262145.f_18353;
		
		case 195:
			return Global_262145.f_18131;
		
		case 197:
			return Global_262145.f_18131;
		
		case 198:
			return Global_262145.f_18131;
		
		case 199:
			return Global_262145.f_18353;
		
		case 200:
			return Global_262145.f_18353;
		
		case 201:
			return Global_262145.f_18353;
		
		case 205:
			return Global_262145.f_18353;
		
		case 207:
			return Global_262145.f_18131;
		
		case 208:
			return Global_262145.f_18131;
		
		case 209:
			return Global_262145.f_18131;
		
		case 210:
			return Global_262145.f_18353;
		
		case 211:
			return Global_262145.f_18353;
		
		case 190:
			if (func_234(0))
			{
				return Global_262145.f_18007;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (func_234(0))
			{
				return Global_262145.f_18098;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (func_234(0))
			{
				return Global_262145.f_17892;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_19203;
		
		case 215:
			return Global_262145.f_19205;
		
		case 216:
			return Global_262145.f_19207;
		
		case 217:
			return Global_262145.f_19209;
		
		case 218:
			return Global_262145.f_19211;
		
		case 219:
			return Global_262145.f_19213;
		
		case 220:
			return Global_262145.f_19215;
		
		case 221:
			return Global_262145.f_19217;
		
		case 225:
			if (func_234(0))
			{
				return Global_262145.f_21040;
			}
			break;
		
		case 226:
			if (func_234(0))
			{
				return Global_262145.f_21020;
			}
			break;
		
		case 227:
			if (func_234(0))
			{
				return Global_262145.f_21032;
			}
			break;
		
		case 229:
			if (func_234(0))
			{
				return Global_262145.f_22196;
			}
			break;
		
		case 230:
			if (func_234(0))
			{
				return Global_262145.f_22292;
			}
			break;
		
		case 233:
			if (func_234(0))
			{
				return Global_262145.f_22768;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (func_234(0))
			{
				return Global_262145.f_23931;
			}
			break;
		
		case 238:
			if (func_234(0))
			{
				return Global_262145.f_24042;
			}
			break;
		
		case 249:
			if (func_234(0))
			{
				return Global_262145.f_24058;
			}
			break;
		
		case 243:
			return Global_262145.f_26236;
		
		case 158:
			if (func_234(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

bool func_234(bool bParam0)//Position - 0x7FDA
{
	return func_124(PLAYER::PLAYER_ID(), bParam0);
}

bool func_235(int iParam0)//Position - 0x7FEC
{
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_43, iParam0);
}

void func_236(int iParam0, int iParam1)//Position - 0x8007
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_175())
		{
			if (func_179(0))
			{
				if (!func_234(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_181()))
					{
						if (func_245() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_245());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_243(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_242("GB_BCUT_TICK1", func_181(), iVar0, 0, 0, 1, 1);
						}
						func_241(20);
						func_237(func_181(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_237(int iParam0, int iParam1, int iParam2)//Position - 0x80A8
{
	struct<8> Var0;
	
	if (func_1276(iParam0, 0, 1))
	{
		Var0 = -1590759069;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_240(iParam0);
		func_239(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_238(iParam0));
	}
}

int func_238(int iParam0)//Position - 0x80FE
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

void func_239(var uParam0, var uParam1)//Position - 0x8116
{
	*uParam0 = Global_1651198.f_9;
	*uParam1 = Global_1651198.f_10;
}

var func_240(int iParam0)//Position - 0x8130
{
	return Global_1628955[iParam0 /*614*/].f_532;
}

void func_241(int iParam0)//Position - 0x8144
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2531497.f_4898.f_7[iVar0]), iVar1);
}

int func_242(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x816D
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_86(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_59(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
		func_54(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_243(int iParam0, bool bParam1)//Position - 0x8205
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_244(1);
	}
	else
	{
		iVar1 = func_244(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_244(bool bParam0)//Position - 0x8237
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_245()//Position - 0x825D
{
	return Global_262145.f_12389;
}

int func_246(int iParam0, int iParam1, bool bParam2)//Position - 0x826C
{
	if (iParam1 != func_398())
	{
		if (!bParam2)
		{
			if (func_247(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628955[iParam0 /*614*/].f_11 != func_398())
		{
			return iParam1 == Global_1628955[iParam0 /*614*/].f_11;
		}
	}
	return 0;
}

int func_247(int iParam0, int iParam1)//Position - 0x82B6
{
	if (iParam1 != func_398())
	{
		if (iParam0 != func_398())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 != func_398())
			{
				if (Global_1628955[iParam0 /*614*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_248()//Position - 0x82FB
{
	return Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_35;
}

void func_249(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x8312
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	bVar18 = func_234(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_175())
		{
			iVar17 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar17 = func_181();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1590446[iVar11 /*871*/].f_849.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar13 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = SYSTEM::CEIL(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1590446[iVar11 /*871*/].f_849.f_2;
			}
			else
			{
				iVar2 = func_265(Global_1590446[iVar11 /*871*/].f_849, *uParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - SYSTEM::CEIL((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_264(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == PLAYER::PLAYER_ID())
				{
					func_263("TICK_TCUT", iVar10, 1);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1675175.f_49 = *uParam3;
			if (iVar17 == PLAYER::PLAYER_ID())
			{
				if (iVar2 > 0)
				{
					func_262(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_260(*uParam3);
				}
				iVar6 = func_259(&uVar5);
				iVar7 = Global_262145.f_23961;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_23960));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_241(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar22 = iVar21;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar22))
							{
								iVar23 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar22);
								if (func_258(iVar23))
								{
									func_250(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_23933;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_23934;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686916 = *iParam2;
					func_241(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_250(int iParam0, int iParam1, int iParam2)//Position - 0x8579
{
	var uVar0;
	
	uVar0 = func_252(iParam0);
	func_251(iParam0, uVar0, iParam1, iParam2);
}

void func_251(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x8595
{
	struct<8> Var0;
	
	Var0 = -1548391120;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_240(iParam0);
	func_239(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_398())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_238(iParam0));
		}
	}
}

int func_252(int iParam0)//Position - 0x85FB
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_257();
	iVar0 = func_255(iParam0, iVar0);
	iVar1 = Global_1628955[func_181() /*614*/].f_11.f_449;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14943));
	if (iVar0 < func_254())
	{
		iVar0 = func_254();
	}
	if (iVar0 > func_253())
	{
		iVar0 = func_253();
	}
	return iVar0;
}

int func_253()//Position - 0x8654
{
	return Global_262145.f_14944;
}

int func_254()//Position - 0x8663
{
	return Global_262145.f_16119;
}

int func_255(int iParam0, int iParam1)//Position - 0x8672
{
	int iVar0;
	
	iVar0 = (func_324(iParam0) * func_256());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_256()//Position - 0x8690
{
	return Global_262145.f_16118;
}

var func_257()//Position - 0x869F
{
	return Global_262145.f_12381;
}

int func_258(int iParam0)//Position - 0x86AE
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (iParam0 != PLAYER::PLAYER_ID())
		{
			if (func_246(iParam0, PLAYER::PLAYER_ID(), 0))
			{
				if (!func_40(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_259(var uParam0)//Position - 0x86E7
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_376(iVar2, 0) && !func_246(iVar2, PLAYER::PLAYER_ID(), 1))
			{
				iVar1++;
			}
			else if (func_376(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_260(int iParam0)//Position - 0x8753
{
	func_261(iParam0, 7236);
}

void func_261(int iParam0, int iParam1)//Position - 0x8764
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_50(iParam1, -1, 0);
	func_159(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_262(int iParam0)//Position - 0x878D
{
	func_261(iParam0, 7231);
}

int func_263(char* sParam0, int iParam1, int iParam2)//Position - 0x879E
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	func_54(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_264(int iParam0)//Position - 0x87D3
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_23962);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return SYSTEM::ROUND(fVar1);
}

int func_265(struct<5> Param0, int iParam5)//Position - 0x8807
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam5 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(Param0.f_1));
	fVar2 = SYSTEM::TO_FLOAT(iVar0);
	return SYSTEM::FLOOR((fVar2 * fVar1));
}

void func_266(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)//Position - 0x8871
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_234(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_175())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_181();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_16 == 8)
			{
				iVar0 = (func_278(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_269(uParam1->f_16) + uParam1->f_8);
			}
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_171(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_170(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_268(*iParam2) > 0)
			{
				if (iVar15 == PLAYER::PLAYER_ID())
				{
					func_263("SMTICK_RONCUT", func_268(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_268(*iParam2));
			}
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_267(iVar2, iVar9);
				iVar6 = func_259(&uVar5);
				iVar7 = Global_262145.f_22310;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_22309));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_241(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_258(iVar20))
								{
									func_250(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22243;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_22244;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686916 = *iParam2;
					func_241(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_267(int iParam0, int iParam1)//Position - 0x8AB7
{
	if (iParam0 > 0)
	{
		func_261(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_261(iParam1, 6117);
	}
}

int func_268(int iParam0)//Position - 0x8ADD
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22277);
	if (fVar1 > SYSTEM::TO_FLOAT(Global_262145.f_22278))
	{
		fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22278);
	}
	return SYSTEM::ROUND(fVar1);
}

int func_269(int iParam0)//Position - 0x8B1D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_276())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_278(PLAYER::PLAYER_ID());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_271(func_272(func_275(iVar0), -1, -1));
		if (func_270(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_270(int iParam0)//Position - 0x8B7B
{
	switch (iParam0)
	{
		case -508960047:
			return 5;
		
		case -1996578712:
			return 5;
		
		case -324063008:
			return 7;
		
		case -1537242760:
			return 7;
		
		case 167523060:
			return 1;
		
		case 440723308:
			return 1;
		
		case -1821684485:
			return 6;
		
		case 1075487129:
			return 6;
		
		case 1339867730:
			return 4;
		
		case 1158536477:
			return 4;
		
		case -1222709082:
			return 0;
		
		case -260422691:
			return 0;
		
		case -1117639471:
			return 3;
		
		case -1434473216:
			return 3;
		
		case 690570889:
			return 2;
		
		case 320416020:
			return 2;
		
		default:
	}
	return -1;
}

int func_271(int iParam0)//Position - 0x8C2B
{
	switch (iParam0)
	{
		case 1:
			return -508960047;
		
		case 2:
			return -1996578712;
		
		case 3:
			return -324063008;
		
		case 4:
			return -1537242760;
		
		case 5:
			return 167523060;
		
		case 6:
			return 440723308;
		
		case 7:
			return -1821684485;
		
		case 8:
			return 1075487129;
		
		case 9:
			return 1339867730;
		
		case 10:
			return 1158536477;
		
		case 11:
			return -1222709082;
		
		case 12:
			return -260422691;
		
		case 13:
			return -1117639471;
		
		case 14:
			return -1434473216;
		
		case 15:
			return 690570889;
		
		case 16:
			return 320416020;
		
		default:
	}
	return 0;
}

int func_272(int iParam0, int iParam1, int iParam2)//Position - 0x8D1B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_52();
	}
	iVar0 = 0;
	iVar1 = func_274(iParam0, iParam1);
	iVar2 = func_273(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_273(int iParam0)//Position - 0x8D61
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - STATS::_0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - STATS::_0x94F12ABF9C79E339((iParam0 - 27258)) * 8) * 8;
	}
	return iVar0;
}

int func_274(int iParam0, int iParam1)//Position - 0x9162
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_52();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	return iVar0;
}

int func_275(int iParam0)//Position - 0x9510
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

bool func_276()//Position - 0x977A
{
	return func_277() != 0;
}

int func_277()//Position - 0x9788
{
	return Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_260;
}

int func_278(int iParam0)//Position - 0x97A1
{
	if (iParam0 != func_398() && func_279(iParam0))
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_260.f_3;
	}
	return 0;
}

int func_279(int iParam0)//Position - 0x97D3
{
	if (iParam0 != func_398())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_260 != 0;
	}
	return 0;
}

void func_280(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x97F9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_234(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_175())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_181();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_174(iVar15);
			iVar0 = (func_302(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_298(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21023));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21022));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_295(iVar16, iVar2);
				if (func_291(iVar16) >= Global_262145.f_20571 || iVar2 >= Global_262145.f_20571)
				{
					func_281(5);
				}
				iVar6 = func_259(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_262145.f_21025);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_21024));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_241(108);
					}
					else
					{
						func_241(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_258(iVar20))
								{
									func_250(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_21026;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21027;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686916 = *iParam2;
					func_241(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_281(int iParam0)//Position - 0x9A34
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20559)
			{
				if (func_283(Global_262145.f_20560))
				{
					func_282("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20561)
			{
				if (func_283(Global_262145.f_20562))
				{
					func_282("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20563)
			{
				if (func_283(Global_262145.f_20564))
				{
					func_282("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20565)
			{
				if (func_283(Global_262145.f_20566))
				{
					func_282("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20567)
			{
				if (func_283(Global_262145.f_20568))
				{
					func_282("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20569)
			{
				if (func_283(Global_262145.f_20570))
				{
					func_263("CLOTHAWDSTRAP3", Global_262145.f_20571, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20572)
			{
				if (func_283(Global_262145.f_20573))
				{
					func_263("CLOTHAWDSTRAP5", Global_262145.f_20705, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20575)
			{
				if (func_283(Global_262145.f_20576))
				{
					func_282("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20577)
			{
				if (func_283(Global_262145.f_20578))
				{
					func_282("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20579)
			{
				if (func_283(Global_262145.f_20580))
				{
					func_282("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20581)
			{
				if (func_283(Global_262145.f_20582))
				{
					func_282("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20583)
			{
				if (func_283(Global_262145.f_20584))
				{
					func_282("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20585)
			{
				if (func_283(Global_262145.f_20586))
				{
					func_282("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20587)
			{
				if (func_283(Global_262145.f_20588))
				{
					func_282("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20589)
			{
				if (func_283(Global_262145.f_20590))
				{
					func_282("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_282(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x9D31
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	if (!iParam3 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	if (!bParam4)
	{
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	}
	else
	{
		Global_2507671 = { func_64(PLAYER::PLAYER_ID()) };
		if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2507601, 35, &Global_2507671))
		{
			iVar1 = 0;
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2507601.f_22), "Leader") && Global_2507601.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2507601.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(iVar2, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2507601, 35), &(Global_2507601.f_17), Global_2507601.f_30, iVar1, 0, Global_2507601, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), Global_1314030, Global_1314031, Global_1314032);
		}
		else
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
		}
	}
	func_54(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_283(int iParam0)//Position - 0x9E24
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case -1191485992:
		case -1735342207:
			if (!func_288(15417, -1, -1))
			{
				func_287(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case -120911428:
		case -1407302654:
		case -2039798986:
			if (!func_288(15418, -1, -1))
			{
				func_287(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case -1359197372:
		case -140996548:
		case -1850642937:
			if (!func_288(15425, -1, -1))
			{
				func_287(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -695364761:
		case 1263491585:
		case -1307315235:
		case 258618816:
			if (!func_288(15405, -1, -1))
			{
				func_287(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case -571324979:
		case 1374601256:
			if (!func_288(15393, -1, -1))
			{
				func_287(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case -660288110:
			if (!func_288(15409, -1, -1))
			{
				func_287(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case -1802539904:
		case -1005186539:
		case -426022529:
			if (!func_288(15396, -1, -1))
			{
				func_287(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2098369500:
		case -1196968784:
		case -1314656979:
		case -1132522169:
			if (!func_288(15412, -1, -1))
			{
				func_287(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1172743557:
		case -1502212019:
		case 1110085176:
		case -889671110:
			if (!func_286(209, -1))
			{
				func_284(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1883175477:
		case -584614481:
		case -1736983851:
		case -182614393:
			if (!func_288(15403, -1, -1))
			{
				func_287(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case -890709710:
		case -1496983695:
		case 48701978:
			if (!func_286(209, -1))
			{
				func_284(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -869990766:
		case -581140963:
		case 1827333048:
		case -646852824:
			if (!func_288(15389, -1, -1))
			{
				func_287(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case -542628448:
		case -870458464:
		case 420690954:
		case -408392811:
			if (!func_286(209, -1))
			{
				func_284(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_288(15398, -1, -1))
			{
				func_287(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -1361097493:
		case -73647644:
		case -1036580403:
		case -1765816422:
		case -1991379993:
		case -1731611121:
			if (!func_288(15400, -1, -1))
			{
				func_287(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1167465472:
		case -313418417:
		case -203035350:
		case -1533320367:
		case 2065127290:
		case -390081030:
			if (!func_286(209, -1))
			{
				func_284(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2105609173:
		case -698486936:
		case 917598912:
		case 939297301:
		case -56403312:
		case -1368923829:
			if (!func_288(15408, -1, -1))
			{
				func_287(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1864920868:
		case -1072905530:
		case 682284723:
		case 1186965403:
		case -292700571:
		case -2068738593:
			if (!func_286(209, -1))
			{
				func_284(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case -648899601:
		case -612123774:
			if (!func_288(15411, -1, -1))
			{
				func_287(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case -889194678:
		case 801334272:
			if (!func_288(15397, -1, -1))
			{
				func_287(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case -146705667:
			if (!func_288(15413, -1, -1))
			{
				func_287(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case -1997689882:
		case 627387411:
		case -847831191:
			if (!func_288(15391, -1, -1))
			{
				func_287(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case -1563654102:
		case 1932815241:
		case -1617209023:
		case 308545041:
		case 1682427144:
			if (!func_288(15388, -1, -1))
			{
				func_287(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case -720081735:
		case 1626031863:
		case -1391954917:
		case 35480964:
		case 2029975158:
			if (!func_286(209, -1))
			{
				func_284(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1124704392:
		case -850093035:
		case 926585800:
		case -1832969872:
		case 1539395388:
		case 1377465778:
			if (!func_288(15401, -1, -1))
			{
				func_287(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 1029334921:
		case -322091380:
		case -1604737223:
		case -836382797:
			if (!func_288(15394, -1, -1))
			{
				func_287(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case -534855486:
		case -1168575065:
		case -1367129204:
		case -1006027910:
			if (!func_286(209, -1))
			{
				func_284(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -516333262:
		case 756873456:
		case 87453937:
		case -1438775324:
			if (!func_288(15406, -1, -1))
			{
				func_287(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case -730037708:
		case -1686659723:
		case -1094274807:
			if (!func_288(15395, -1, -1))
			{
				func_287(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case -970458486:
		case 1992217604:
		case -1348726092:
			if (!func_286(209, -1))
			{
				func_284(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1490658501:
		case 975601953:
		case -1934557208:
		case 1786218600:
			if (!func_288(15410, -1, -1))
			{
				func_287(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1735635238:
		case 1614208560:
		case -1034032319:
		case -1858021894:
			if (!func_288(15407, -1, -1))
			{
				func_287(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case -726032561:
		case 1747334867:
		case 1237632771:
			if (!func_286(209, -1))
			{
				func_284(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1931617488:
		case -1824987162:
		case 236389050:
		case 1987485798:
			if (!func_286(209, -1))
			{
				func_284(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1726332301:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_288(15414, -1, -1))
			{
				func_287(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1382922530:
		case 734151492:
		case -357636850:
		case -1021993708:
			if (!func_288(15415, -1, -1))
			{
				func_287(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case -1766862320:
		case 479676642:
		case -1654828636:
			if (!func_288(15399, -1, -1))
			{
				func_287(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1776790350:
		case 579562906:
		case 242920617:
		case -1365707749:
			if (!func_288(15404, -1, -1))
			{
				func_287(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1988057295:
		case -619754931:
		case -1219723702:
		case -388208479:
			if (!func_286(209, -1))
			{
				func_284(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case -1576971340:
		case 2087194554:
			if (!func_288(15392, -1, -1))
			{
				func_287(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case -1405036369:
		case -622901905:
		case 981732339:
			if (!func_288(15390, -1, -1))
			{
				func_287(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case -981132613:
		case 1271443068:
			if (!func_288(15402, -1, -1))
			{
				func_287(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case -292922355:
		case -34538790:
		case -1908986844:
		case -1785118184:
			if (!func_288(15416, -1, -1))
			{
				func_287(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1495432685:
		case 1898518287:
		case 2029126042:
		case -1521032813:
			if (!func_286(209, -1))
			{
				func_284(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -2123485438:
		case 1457900554:
		case -14316613:
		case 619771057:
			if (!func_288(15426, -1, -1))
			{
				func_287(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case -815706791:
		case -1066127505:
		case 1281631799:
		case -1519028808:
			if (!func_288(15422, -1, -1))
			{
				func_287(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1318802347:
		case -1366750043:
		case 447234752:
		case 1996626130:
			if (!func_288(15423, -1, -1))
			{
				func_287(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case -1981759857:
			if (!func_288(15421, -1, -1))
			{
				func_287(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case -1639289459:
		case -562607521:
		case -879279621:
			if (!func_288(15427, -1, -1))
			{
				func_287(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case -919314748:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_288(15419, -1, -1))
			{
				func_287(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case -884280700:
		case -85982412:
		case 1573086793:
			if (!func_288(15420, -1, -1))
			{
				func_287(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_284(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA999
{
	int iVar0;
	
	if (func_285())
	{
		iVar0 = Global_2576213[iParam0 /*3*/][func_51(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_285()//Position - 0xA9CB
{
	return 1;
	return 0;
}

int func_286(int iParam0, int iParam1)//Position - 0xA9D8
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2576213[iParam0 /*3*/][func_51(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_287(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xAA04
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
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	if (iParam2 == -1)
	{
		iParam2 = func_52();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar22, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_288(int iParam0, int iParam1, int iParam2)//Position - 0xB056
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_52();
	}
	iVar1 = func_290(iParam0, iParam1);
	uVar2 = func_289(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_289(int iParam0)//Position - 0xB093
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28355)) * 64);
	}
	return iVar0;
}

int func_290(int iParam0, int iParam1)//Position - 0xB42F
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_52();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_291(int iParam0)//Position - 0xB7A8
{
	int iVar0;
	
	iVar0 = func_293(iParam0);
	return func_50(func_292(iVar0), -1, 0);
}

int func_292(int iParam0)//Position - 0xB7C4
{
	switch (iParam0)
	{
		case 0:
			return 3951;
		
		case 1:
			return 3952;
		
		case 2:
			return 3953;
		
		case 3:
			return 3954;
		
		case 4:
			return 3955;
		
		case 5:
			return 5456;
		
		default:
	}
	return 3951;
}

int func_293(int iParam0)//Position - 0xB81E
{
	int iVar0;
	
	if (func_294(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_179[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_294(int iParam0)//Position - 0xB860
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_295(int iParam0, int iParam1)//Position - 0xB87F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_293(iParam0);
	iVar1 = func_292(iVar0);
	iVar2 = (func_50(iVar1, -1, 0) + iParam1);
	func_159(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_272(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_179[iVar0 /*12*/] != 0)
			{
				iVar1 = func_292(iVar0);
				iVar3 = (iVar3 + func_50(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_297(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_296(9357, iVar5, -1, 1);
	}
}

var func_296(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xB934
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_52();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - STATS::_0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - STATS::_0x94F12ABF9C79E339((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = STATS::STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_297(int iParam0)//Position - 0xBEF6
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_298(int iParam0, int iParam1, int iParam2)//Position - 0xBF36
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_176(iParam1);
	if (func_294(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16948;
				if (func_299(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16953);
				}
				if (func_299(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16958);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16947;
				if (func_299(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16952);
				}
				if (func_299(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16957);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16946;
				if (func_299(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16951);
				}
				if (func_299(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16956);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16944;
				if (func_299(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16949);
				}
				if (func_299(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16954);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16945;
				if (func_299(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16950);
				}
				if (func_299(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16955);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_21048;
				if (func_299(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21050);
				}
				if (func_299(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21049);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_299(int iParam0, int iParam1, int iParam2)//Position - 0xC111
{
	int iVar0;
	
	if (func_301(iParam0, iParam1))
	{
		iVar0 = func_300(iParam0, iParam1);
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_300(int iParam0, int iParam1)//Position - 0xC14C
{
	int iVar0;
	
	if (func_294(iParam1) && iParam0 != func_398())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_301(int iParam0, int iParam1)//Position - 0xC198
{
	int iVar0;
	
	if (func_294(iParam1) && iParam0 != func_398())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_302(int iParam0, int iParam1)//Position - 0xC1E3
{
	int iVar0;
	
	if (iParam0 == func_398())
	{
		return 0;
	}
	if (func_294(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_303(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0xC242
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<2> Var15;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	int iVar25;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_162())
			{
				Var0 = { func_178() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar2 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar3 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (uParam1->f_15 + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*uParam3 = SYSTEM::CEIL(fVar6);
				}
				iVar7 = func_298(PLAYER::PLAYER_ID(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18583);
					iVar7 = SYSTEM::ROUND(fVar8);
				}
				else
				{
					fVar9 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18582);
					iVar7 = SYSTEM::ROUND(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_259(&uVar10);
				iVar12 = SYSTEM::ROUND(Global_262145.f_18573);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = SYSTEM::CEIL((IntToFloat(iVar11) * Global_262145.f_18572));
				iVar14 = ((*iParam2 / 100) * iVar13);
				*iParam2 = (*iParam2 + iVar14);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar11 > 0)
				{
					func_241(86);
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (func_234(0))
			{
				Var15 = { func_304(func_181()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar17 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar18 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (uParam1->f_15 + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*uParam3 = SYSTEM::CEIL(fVar21);
				}
				iVar22 = func_298(func_181(), Var15, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18583));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18582));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_18622;
				iVar24 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_18623;
				if (*iParam2 > iVar25)
				{
					*iParam2 = iVar25;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_304(int iParam0)//Position - 0xC4E5
{
	return Global_1628955[iParam0 /*614*/].f_11.f_193;
}

void func_305(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)//Position - 0xC4FC
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_132(PLAYER::PLAYER_ID()))
		{
			if (bParam1)
			{
				func_320();
			}
			func_319();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_132(PLAYER::PLAYER_ID()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_311(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_182));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_310(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_259(&uVar2);
					iVar4 = Global_262145.f_16129;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = SYSTEM::CEIL((IntToFloat(iVar3) * Global_262145.f_15338));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_241(44);
					}
				}
				func_308(*iParam3);
				func_307();
				Global_2531497.f_4898.f_379 = *iParam3;
				iVar7 = 0;
				while (iVar7 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
				{
					iVar8 = iVar7;
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar8))
					{
						iVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar8);
						if (func_258(iVar9))
						{
							func_250(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_132(PLAYER::PLAYER_ID()))
		{
			func_306();
		}
	}
}

void func_306()//Position - 0xC668
{
	int iVar0;
	
	iVar0 = Global_2578770[func_52()];
	iVar0++;
	func_158(3667, iVar0, -1, 1);
}

void func_307()//Position - 0xC68D
{
	int iVar0;
	
	iVar0 = Global_2578776[func_52()];
	iVar0++;
	func_158(3666, iVar0, -1, 1);
}

void func_308(int iParam0)//Position - 0xC6B2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2578779[func_52()];
	iVar0 = (iVar0 + iParam0);
	func_158(3668, iVar0, -1, 1);
	if (func_272(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_309(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_296(7666, iVar2, -1, 1);
	}
}

int func_309(int iParam0)//Position - 0xC714
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16262;
			break;
		
		case 2:
			return Global_262145.f_16263;
			break;
		
		case 3:
			return Global_262145.f_16264;
			break;
		
		case 4:
			return Global_262145.f_16265;
			break;
		
		case 5:
			return Global_262145.f_16266;
			break;
		
		case 6:
			return Global_262145.f_16267;
			break;
		
		case 7:
			return Global_262145.f_16268;
			break;
		
		case 8:
			return Global_262145.f_16269;
			break;
		
		case 9:
			return Global_262145.f_16270;
			break;
		
		case 10:
			return Global_262145.f_16271;
			break;
		
		case 11:
			return Global_262145.f_16272;
			break;
		
		case 12:
			return Global_262145.f_16273;
			break;
		
		case 13:
			return Global_262145.f_16274;
			break;
		
		case 14:
			return Global_262145.f_16275;
			break;
		
		case 15:
			return Global_262145.f_16276;
			break;
		
		case 16:
			return Global_262145.f_16277;
			break;
		
		case 17:
			return Global_262145.f_16278;
			break;
		
		case 18:
			return Global_262145.f_16279;
			break;
		
		case 19:
			return Global_262145.f_16280;
			break;
		
		case 20:
			return Global_262145.f_16281;
			break;
		
		case 21:
			return Global_262145.f_16282;
			break;
		
		case 22:
			return Global_262145.f_16283;
			break;
		
		case 23:
			return Global_262145.f_16284;
			break;
		
		case 24:
			return Global_262145.f_16285;
			break;
	}
	return 0;
}

var func_310(int iParam0)//Position - 0xC8EC
{
	if (iParam0 >= Global_262145.f_15316)
	{
		return Global_262145.f_15337;
	}
	else if (iParam0 >= Global_262145.f_15315)
	{
		return Global_262145.f_15336;
	}
	else if (iParam0 >= Global_262145.f_15314)
	{
		return Global_262145.f_15335;
	}
	else if (iParam0 >= Global_262145.f_15313)
	{
		return Global_262145.f_15334;
	}
	else if (iParam0 >= Global_262145.f_15312)
	{
		return Global_262145.f_15333;
	}
	else if (iParam0 >= Global_262145.f_15311)
	{
		return Global_262145.f_15332;
	}
	else if (iParam0 >= Global_262145.f_15310)
	{
		return Global_262145.f_15331;
	}
	else if (iParam0 >= Global_262145.f_15309)
	{
		return Global_262145.f_15330;
	}
	else if (iParam0 >= Global_262145.f_15308)
	{
		return Global_262145.f_15329;
	}
	else if (iParam0 >= Global_262145.f_15307)
	{
		return Global_262145.f_15328;
	}
	else if (iParam0 >= Global_262145.f_15306)
	{
		return Global_262145.f_15327;
	}
	else if (iParam0 >= Global_262145.f_15305)
	{
		return Global_262145.f_15326;
	}
	else if (iParam0 >= Global_262145.f_15304)
	{
		return Global_262145.f_15325;
	}
	else if (iParam0 >= Global_262145.f_15303)
	{
		return Global_262145.f_15324;
	}
	else if (iParam0 >= Global_262145.f_15302)
	{
		return Global_262145.f_15323;
	}
	else if (iParam0 >= Global_262145.f_15301)
	{
		return Global_262145.f_15322;
	}
	else if (iParam0 >= Global_262145.f_15300)
	{
		return Global_262145.f_15321;
	}
	else if (iParam0 >= Global_262145.f_15299)
	{
		return Global_262145.f_15320;
	}
	else if (iParam0 >= Global_262145.f_15298)
	{
		return Global_262145.f_15319;
	}
	else if (iParam0 >= Global_262145.f_15297)
	{
		return Global_262145.f_15318;
	}
	return Global_262145.f_15317;
}

int func_311(int iParam0)//Position - 0xCAEC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_318(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_317(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_316(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_312(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_312(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_316(MISC::GET_RANDOM_INT_IN_RANGE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_312(int iParam0)//Position - 0xCB68
{
	int iVar0;
	
	if (func_315(iParam0))
	{
		iVar0 = func_313(func_314(iParam0));
		return func_50(iVar0, -1, 0);
	}
	return 0;
}

int func_313(int iParam0)//Position - 0xCB91
{
	if (iParam0 == 0)
	{
		return 3646;
	}
	else if (iParam0 == 1)
	{
		return 3647;
	}
	else if (iParam0 == 2)
	{
		return 3648;
	}
	else if (iParam0 == 3)
	{
		return 3649;
	}
	else if (iParam0 == 4)
	{
		return 3650;
	}
	return 3646;
}

int func_314(int iParam0)//Position - 0xCBE4
{
	int iVar0;
	
	if (func_315(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_102[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_315(int iParam0)//Position - 0xCC26
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_316(int iParam0)//Position - 0xCC45
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15516;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15514;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15518;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15512;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15510;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15520;
	}
	return 0;
}

int func_317(int iParam0, int iParam1)//Position - 0xCCBD
{
	int iVar0;
	
	if (func_315(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1676590[iVar0] == iParam1 && Global_1676597[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_318(int iParam0)//Position - 0xCD03
{
	int iVar0;
	
	if (func_315(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_102[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_319()//Position - 0xCD44
{
	int iVar0;
	
	iVar0 = Global_2578767[func_52()];
	iVar0++;
	Global_2578767[func_52()] = iVar0;
	func_158(3665, iVar0, -1, 1);
}

void func_320()//Position - 0xCD75
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2578764[func_52()];
	iVar1 = Global_2578773[func_52()];
	iVar0++;
	iVar1++;
	Global_2578764[func_52()] = iVar0;
	Global_2578773[func_52()] = iVar1;
	Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_124 = iVar1;
	func_158(3663, iVar0, -1, 1);
	func_158(3664, iVar1, -1, 1);
}

void func_321()//Position - 0xCDE1
{
	if (func_175())
	{
		Global_2449755.f_3072.f_134 = 0;
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_449 = Global_2449755.f_3072.f_134;
	}
}

void func_322()//Position - 0xCE13
{
	if (func_175())
	{
		if (Global_2449755.f_3072.f_134 < 10)
		{
			Global_2449755.f_3072.f_134++;
			Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_449 = Global_2449755.f_3072.f_134;
		}
	}
}

void func_323()//Position - 0xCE5D
{
	if (func_175())
	{
		if (Global_2449755.f_3072.f_134 > 0)
		{
			Global_2449755.f_3072.f_134 = (Global_2449755.f_3072.f_134 - 1);
			Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_449 = Global_2449755.f_3072.f_134;
		}
	}
}

int func_324(int iParam0)//Position - 0xCEA6
{
	return Global_1628955[iParam0 /*614*/].f_11.f_28;
}

int func_325(int iParam0)//Position - 0xCEBB
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
		case 158:
			if (func_179(1) && !func_234(1))
			{
				if (func_326(func_181()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_326(int iParam0)//Position - 0xCF36
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 26);
}

int func_327(int iParam0, bool bParam1)//Position - 0xCF5C
{
	if (bParam1)
	{
		return Global_262145.f_18269;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12506) * Global_262145.f_12511));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12456) * Global_262145.f_12461));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12483) * Global_262145.f_12487));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12496) * Global_262145.f_12500));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12518) * Global_262145.f_12523));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12680) * Global_262145.f_12681));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12686) * Global_262145.f_12687));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12684) * Global_262145.f_12685));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12678) * Global_262145.f_12679));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12682) * Global_262145.f_12683));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12676) * Global_262145.f_12677));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_15039;
		
		case 172:
			return Global_262145.f_15055;
		
		case 173:
			return Global_262145.f_14998;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_18277;
		
		case 180:
			return Global_262145.f_18152;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18160;
		
		case 185:
			return Global_262145.f_18169;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18365;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18382;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18229;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18413;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18291;
		
		case 205:
			return Global_262145.f_18400;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18258;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18395;
		
		case 211:
			return Global_262145.f_18359;
		
		case 214:
			return Global_262145.f_18953;
		
		case 215:
			return Global_262145.f_18963;
		
		case 216:
			return Global_262145.f_18973;
		
		case 217:
			return Global_262145.f_18982;
		
		case 218:
			return Global_262145.f_18991;
		
		case 219:
			return Global_262145.f_19007;
		
		case 241:
			return Global_262145.f_24078;
		
		case 242:
			return Global_262145.f_24074;
		
		case 248:
			return Global_262145.f_24077;
		
		case 244:
			return Global_262145.f_24075;
		
		case 239:
			return Global_262145.f_24079;
		
		case 240:
			return Global_262145.f_24080;
		
		case 243:
			return Global_262145.f_26235;
		
		default:
	}
	return 0;
}

int func_328(int iParam0, bool bParam1, bool bParam2)//Position - 0xD320
{
	if (bParam2)
	{
		return Global_262145.f_18270;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12507) * Global_262145.f_12512));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12457) * Global_262145.f_12462));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12484) * Global_262145.f_12488));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12497) * Global_262145.f_12501));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12519) * Global_262145.f_12524));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12556) * Global_262145.f_12559));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12602) * Global_262145.f_12605));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12592) * Global_262145.f_12595));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12547) * Global_262145.f_12550));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12567) * Global_262145.f_12572));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12532) * Global_262145.f_12535));
		
		case 170:
			return Global_262145.f_14981;
		
		case 171:
			return Global_262145.f_15040;
		
		case 172:
			return Global_262145.f_15056;
		
		case 173:
			return Global_262145.f_14999;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_17078;
		
		case 168:
			return Global_262145.f_17077;
		
		case 179:
			return Global_262145.f_18278;
		
		case 180:
			return Global_262145.f_18153;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18161;
		
		case 185:
			return Global_262145.f_18170;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18366;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18383;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18230;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18414;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18292;
		
		case 205:
			return Global_262145.f_18401;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18259;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18396;
		
		case 211:
			return Global_262145.f_18360;
		
		case 214:
			return Global_262145.f_18954;
		
		case 215:
			return Global_262145.f_18964;
		
		case 216:
			return Global_262145.f_18974;
		
		case 217:
			return Global_262145.f_18983;
		
		case 218:
			return Global_262145.f_18992;
		
		case 219:
			return Global_262145.f_19008;
		
		case 178:
			if (func_175())
			{
				return Global_262145.f_18831;
			}
			else if (bParam1)
			{
				return Global_262145.f_18832;
			}
			break;
		
		case 188:
			if (func_175())
			{
				return Global_262145.f_18915;
			}
			else if (bParam1)
			{
				return Global_262145.f_18916;
			}
			break;
		
		case 225:
			if (func_175() && !func_162())
			{
				if (func_326(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21036;
				}
				else
				{
					return Global_262145.f_21037;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_21038;
			}
			break;
		
		case 226:
			if (func_175() && !func_162())
			{
				if (func_326(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21016;
				}
				else
				{
					return Global_262145.f_21017;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_21018;
			}
			break;
		
		case 227:
			if (func_175() && !func_162())
			{
				if (func_326(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21028;
				}
				else
				{
					return Global_262145.f_21029;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_21030;
			}
			break;
		
		case 229:
			if (func_175() && !func_162())
			{
				if (func_326(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22192;
				}
				else
				{
					return Global_262145.f_22193;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_22194;
			}
			break;
		
		case 230:
			if (func_175() && !func_162())
			{
				if (func_326(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22288;
				}
				else
				{
					return Global_262145.f_22289;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_22290;
			}
			break;
		
		case 233:
			if (func_175() && !func_162())
			{
				if (func_326(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22764;
				}
				else
				{
					return Global_262145.f_22765;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_22763;
			}
			break;
		
		case 241:
			return Global_262145.f_24085;
		
		case 242:
			return Global_262145.f_24081;
		
		case 244:
			return Global_262145.f_24082;
		
		case 248:
			return Global_262145.f_24084;
		
		case 239:
			return Global_262145.f_24086;
		
		case 240:
			return Global_262145.f_24087;
		
		case 237:
			if (func_175() && !func_162())
			{
				if (func_326(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23927;
				}
				else
				{
					return Global_262145.f_23928;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_23929;
			}
			break;
		
		case 238:
			if (func_175() && !func_162())
			{
				if (func_326(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24038;
				}
				else
				{
					return Global_262145.f_24039;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_24040;
			}
			break;
		
		case 249:
			if (func_175() && !func_162())
			{
				if (func_326(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24054;
				}
				else
				{
					return Global_262145.f_24055;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_24056;
			}
			break;
		
		case 243:
			if (func_175() && !func_162())
			{
				if (func_326(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_26238;
				}
				else
				{
					return Global_262145.f_26239;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_26238;
			}
			break;
		
		case 158:
			if (func_175() && !func_162())
			{
				if (func_326(PLAYER::PLAYER_ID()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_162())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_329(int iParam0, var uParam1, var uParam2)//Position - 0xDAB6
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_330(iParam0))
	{
		if (!func_175())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12400;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_131(PLAYER::PLAYER_ID(), 1))
	{
		if (func_152(iParam0))
		{
			*uParam1 = (Global_262145.f_18129 / 100f);
			*uParam2 = (Global_262145.f_18129 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_24088;
			*uParam2 = Global_262145.f_24088;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_24089;
			*uParam2 = Global_262145.f_24089;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_24091;
			*uParam2 = Global_262145.f_24091;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_24092;
			*uParam2 = Global_262145.f_24092;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_24093;
			*uParam2 = Global_262145.f_24093;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_24094;
			*uParam2 = Global_262145.f_24094;
		}
		else
		{
			*uParam1 = Global_262145.f_12397;
			*uParam2 = Global_262145.f_12396;
		}
	}
	else if (func_152(iParam0))
	{
		*uParam1 = (Global_262145.f_18130 / 100f);
		*uParam2 = (Global_262145.f_18130 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_24095;
		*uParam2 = Global_262145.f_24095;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_24096;
		*uParam2 = Global_262145.f_24096;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_24098;
		*uParam2 = Global_262145.f_24098;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_24099;
		*uParam2 = Global_262145.f_24099;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_24100;
		*uParam2 = Global_262145.f_24100;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_24101;
		*uParam2 = Global_262145.f_24101;
	}
	else
	{
		*uParam1 = Global_262145.f_12399;
		*uParam2 = Global_262145.f_12398;
	}
	iVar0 = func_248();
	if (iVar0 != func_398())
	{
		if (func_246(PLAYER::PLAYER_ID(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_330(int iParam0)//Position - 0xDD19
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

var func_331(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xDD5D
{
	return func_193(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

void func_332()//Position - 0xDD79
{
	Global_2460540 = 1;
}

void func_333(int iParam0, int iParam1)//Position - 0xDD86
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23477 == 0 || Global_262145.f_23477 == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_262145.f_23477 == 1)
			{
				Global_2531497.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6584)
				{
					iParam1 = Global_262145.f_6584;
				}
				Global_2531497.f_284 = iParam1;
				Global_2531497.f_285 = 0;
			}
		}
	}
}

bool func_334()//Position - 0xDDF8
{
	return Global_262145.f_11406;
}

void func_335(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xDE07
{
	int iVar0;
	
	if (!func_346())
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
		case 1850983186:
		case 763367758:
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
			if (iParam1 > 0 || Global_262145.f_27520)
			{
				func_336(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case 312105838:
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
			func_336(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
			if (iParam1 > 0 || Global_262145.f_27520)
			{
				func_336(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_336(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_336(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xE474
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_346())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_52()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4264386 = 1;
			return 0;
		}
		if (Global_2460158)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264387 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263810[iVar2 /*84*/].f_65.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_343(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263810[*uParam0 /*84*/].f_65.f_8 = 1;
					Global_4263810[*uParam0 /*84*/].f_65.f_12 = 1;
				}
			}
			Global_4264371 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264385 = 1;
			Global_4264388 = iParam4;
			Global_4264390 = iParam3;
			Global_4264391 = 1;
			Global_4264389 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264388 = iParam4;
			Global_4264390 = iParam3;
			Global_4264391 = 1;
			Global_4264389 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_342(1, iParam4);
			Global_4264385 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_337(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_337(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xE61F
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_338(iParam0);
	}
}

void func_338(int iParam0)//Position - 0xE657
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_346())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_341(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4263810[iParam0 /*84*/].f_65);
		}
		func_339(&(Global_4263810[iParam0 /*84*/]));
	}
}

void func_339(var uParam0)//Position - 0xE6AB
{
	uParam0->f_65 = 0;
	uParam0->f_65 = 2147483647;
	uParam0->f_65.f_1 = 0;
	uParam0->f_65.f_2 = 0;
	uParam0->f_65.f_3 = -1593119440;
	uParam0->f_65.f_4 = -2085313189;
	uParam0->f_65.f_5 = 0;
	uParam0->f_65.f_6 = 1227573907;
	uParam0->f_65.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_340(&(uParam0->f_13));
	func_340(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_65.f_8 = 0;
	uParam0->f_65.f_9 = 0;
	uParam0->f_65.f_10 = 0;
	uParam0->f_65.f_11 = 0;
	uParam0->f_65.f_13 = 0;
	uParam0->f_65.f_12 = 0;
	uParam0->f_65.f_14 = 0;
	uParam0->f_65.f_15 = 0;
	uParam0->f_65.f_16 = 0;
	uParam0->f_65.f_18 = 0;
}

void func_340(var uParam0)//Position - 0xE7B2
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

int func_341(int iParam0)//Position - 0xE7FA
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263810[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_342(int iParam0, int iParam1)//Position - 0xE824
{
	Global_2461338 = iParam1;
	Global_2461337 = iParam0;
}

int func_343(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0xE838
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263810[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_346())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263810[iVar0 /*84*/].f_65.f_2 = 1;
			Global_4263810[iVar0 /*84*/].f_65.f_1 = iParam5;
			Global_4263810[iVar0 /*84*/].f_65.f_3 = iParam1;
			Global_4263810[iVar0 /*84*/].f_65.f_4 = iParam2;
			Global_4263810[iVar0 /*84*/].f_65.f_7 = iParam3;
			Global_4263810[iVar0 /*84*/].f_65.f_5 = 0;
			Global_4263810[iVar0 /*84*/].f_65 = iParam0;
			Global_4263810[iVar0 /*84*/].f_65.f_6 = iParam4;
			Global_4263810[iVar0 /*84*/].f_65.f_11 = uParam8;
			Global_4263810[iVar0 /*84*/].f_65.f_10 = iParam7;
			Global_4263810[iVar0 /*84*/].f_65.f_13 = iParam9;
			Global_4263810[iVar0 /*84*/].f_65.f_12 = 0;
			Global_4263810[iVar0 /*84*/].f_65.f_14 = MISC::GET_FRAME_COUNT();
			Global_4263810[iVar0 /*84*/].f_65.f_18 = 0;
			Global_4264371 = 0;
			if (bParam6)
			{
				Global_4263810[iVar0 /*84*/].f_65.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_344(Global_4263810[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_344(struct<66> Param0, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, int iParam84)//Position - 0xE974
{
	vector3 vVar0;
	int iVar35;
	
	if (iParam84 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = -1969967074;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.f_2 = { Param0.f_65 };
	vVar0.f_2.f_32 = iParam84;
	iVar35 = func_238(vVar0.y);
	if ((Global_262145.f_23556 && !Global_262145.f_23557) && !Global_262145.f_23558)
	{
		return;
	}
	if (!iVar35 == 0)
	{
		func_345();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar35);
	}
}

void func_345()//Position - 0xEA06
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_346()//Position - 0xEA16
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_347(bool bParam0, int iParam1, int iParam2, int iParam3)//Position - 0xEA2D
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	
	if (Local_112.f_197 == 2)
	{
		func_358(bParam0, iParam1, iParam2, iParam3);
		return;
	}
	if (iLocal_2767 == -1)
	{
		iLocal_2767 = func_357(&uLocal_621, 0, 0);
	}
	if (!bParam0)
	{
		if (Local_112.f_197 != 2)
		{
			func_48(1);
		}
	}
	if (iLocal_2767 < (Global_262145.f_11288 * 60000))
	{
		fVar0 = Global_262145.f_11292;
	}
	else if (iLocal_2767 < (Global_262145.f_11289 * 60000))
	{
		fVar0 = Global_262145.f_11293;
	}
	else if (iLocal_2767 < (Global_262145.f_11290 * 60000))
	{
		fVar0 = Global_262145.f_11294;
	}
	else if (iLocal_2767 < (Global_262145.f_11291 * 60000))
	{
		fVar0 = Global_262145.f_11295;
	}
	else
	{
		fVar0 = Global_262145.f_11296;
	}
	fVar1 = SYSTEM::TO_FLOAT(func_356());
	fVar2 = SYSTEM::TO_FLOAT(func_355());
	fVar3 = SYSTEM::TO_FLOAT(func_354());
	fVar4 = SYSTEM::TO_FLOAT(func_353());
	fVar5 = func_352();
	iVar6 = func_351();
	if (iLocal_2768 > iVar6)
	{
		iLocal_2768 = iVar6;
	}
	uVar7 = func_350(1);
	uVar8 = func_348(1);
	*iParam1 = uVar7;
	*iParam2 = uVar8;
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Local_112.f_1, 14))
		{
			iVar9 = SYSTEM::ROUND((((fVar1 * fVar0) + (((fVar3 * fVar0) * (SYSTEM::TO_FLOAT(iLocal_2768) * fVar5)) / IntToFloat(iParam3))) * Global_262145.f_11444));
			*iParam2 = (*iParam2 + SYSTEM::ROUND((((fVar2 * fVar0) + ((fVar4 * fVar0) * (SYSTEM::TO_FLOAT(iLocal_2768) * fVar5))) * Global_262145.f_11445)));
			if (Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_5 == -1)
			{
				Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_5 = *iParam1;
			}
			func_236(&iVar9, 1);
			*iParam1 = (*iParam1 + iVar9);
		}
	}
}

int func_348(bool bParam0)//Position - 0xEBE0
{
	int iVar0;
	
	if (!bParam0)
	{
		return Global_262145.f_11300;
	}
	func_349();
	iVar0 = (Global_262145.f_11300 * iLocal_2763);
	if (Local_112.f_197 == 2)
	{
		return 0;
	}
	return iVar0;
}

void func_349()//Position - 0xEC17
{
	float fVar0;
	
	if (iLocal_2763 != 0)
	{
		return;
	}
	if (func_24(&uLocal_2761))
	{
		iLocal_2763 = func_357(&uLocal_2761, 0, 0);
	}
	fVar0 = SYSTEM::TO_FLOAT(iLocal_2763);
	fVar0 = (fVar0 / 60000f);
	iLocal_2763 = SYSTEM::FLOOR(fVar0);
	if (iLocal_2763 >= 1)
	{
	}
	else
	{
		iLocal_2763 = 1;
	}
	if (iLocal_2763 > Global_262145.f_11435)
	{
		iLocal_2763 = Global_262145.f_11435;
	}
}

int func_350(bool bParam0)//Position - 0xEC80
{
	int iVar0;
	
	if (!bParam0)
	{
		return Global_262145.f_11299;
	}
	func_349();
	iVar0 = (Global_262145.f_11299 * iLocal_2763);
	if (Local_112.f_197 == 2)
	{
		return 0;
	}
	return iVar0;
}

var func_351()//Position - 0xECB7
{
	if (Local_112.f_197 == 2)
	{
		return Global_262145.f_18342;
	}
	return Global_262145.f_11298;
}

var func_352()//Position - 0xECDB
{
	if (Local_112.f_197 == 2)
	{
		return Global_262145.f_18341;
	}
	return Global_262145.f_11297;
}

var func_353()//Position - 0xECFF
{
	if (Local_112.f_197 == 2)
	{
		return Global_262145.f_18335;
	}
	return Global_262145.f_11287;
}

var func_354()//Position - 0xED23
{
	if (Local_112.f_197 == 2)
	{
		return Global_262145.f_18333;
	}
	return Global_262145.f_11286;
}

var func_355()//Position - 0xED47
{
	if (Local_112.f_197 == 2)
	{
		return Global_262145.f_18334;
	}
	return Global_262145.f_11285;
}

var func_356()//Position - 0xED6B
{
	if (Local_112.f_197 == 2)
	{
		return Global_262145.f_18332;
	}
	return Global_262145.f_11284;
}

int func_357(var uParam0, bool bParam1, bool bParam2)//Position - 0xED8F
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

void func_358(bool bParam0, var uParam1, var uParam2, int iParam3)//Position - 0xEDD6
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	
	if (iLocal_2767 == -1)
	{
		iLocal_2767 = func_357(&uLocal_621, 0, 0);
	}
	if (iLocal_2767 < (Global_262145.f_11288 * 60000))
	{
		fVar0 = Global_262145.f_18336;
	}
	else if (iLocal_2767 < (Global_262145.f_11289 * 60000))
	{
		fVar0 = Global_262145.f_18337;
	}
	else if (iLocal_2767 < (Global_262145.f_11290 * 60000))
	{
		fVar0 = Global_262145.f_18338;
	}
	else if (iLocal_2767 < (Global_262145.f_11291 * 60000))
	{
		fVar0 = Global_262145.f_18339;
	}
	else
	{
		fVar0 = Global_262145.f_18340;
	}
	fVar1 = SYSTEM::TO_FLOAT(func_356());
	fVar2 = SYSTEM::TO_FLOAT(func_355());
	fVar3 = SYSTEM::TO_FLOAT(func_354());
	fVar4 = SYSTEM::TO_FLOAT(func_353());
	fVar5 = func_352();
	iVar6 = func_351();
	if (iLocal_2768 > iVar6)
	{
		iLocal_2768 = iVar6;
	}
	uVar7 = func_350(1);
	uVar8 = func_348(1);
	*uParam1 = uVar7;
	*uParam2 = uVar8;
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Local_112.f_1, 14))
		{
			iVar9 = SYSTEM::ROUND((((fVar1 * fVar0) + (((fVar3 * fVar0) * (SYSTEM::TO_FLOAT(iLocal_2768) * fVar5)) / IntToFloat(iParam3))) * Global_262145.f_11444));
			*uParam2 = (*uParam2 + SYSTEM::ROUND((((fVar2 * fVar0) + ((fVar4 * fVar0) * (SYSTEM::TO_FLOAT(iLocal_2768) * fVar5))) * Global_262145.f_11445)));
			if (Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_5 == -1)
			{
				Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_5 = *uParam1;
			}
			func_236(&iVar9, 1);
			*uParam1 = (*uParam1 + iVar9);
		}
	}
}

int func_359(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xEF5F
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
	func_115(uParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_17 = iParam1;
	Var0.f_18 = iParam2;
	Var0.f_71 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_72 = iParam8;
	StringCopy(&(Var0.f_25), sParam9, 64);
	StringCopy(&(Var0.f_41), sParam10, 64);
	StringCopy(&(Var0.f_57), sParam11, 16);
	return func_70(&Var0);
}

int func_360()//Position - 0xEFEE
{
	if (Local_112.f_197 != 2)
	{
		return 66;
	}
	return 88;
}

struct<4> func_361()//Position - 0xF008
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_DRAW2P", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_DRAW2P", 16);
			break;
	}
	return Var0;
}

void func_362(bool bParam0)//Position - 0xF03F
{
	if (Local_112.f_197 == 2)
	{
		if (!MISC::IS_BIT_SET(iLocal_569, 31))
		{
			Global_1674861.f_2 = Local_112.f_179;
			Global_1674861.f_3 = Local_112.f_180;
			if (bParam0)
			{
				func_1072(1, 1, 0, !MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0), -1, -1, -1, -1, -1, 0);
			}
			else
			{
				func_1072(0, 2, 0, !MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0), -1, -1, -1, -1, -1, 0);
			}
		}
	}
}

int func_363(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)//Position - 0xF0B4
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
	func_115(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_25), sParam2, 64);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam6;
	return func_70(&Var0);
}

int func_364()//Position - 0xF126
{
	if (Local_112.f_197 != 2)
	{
		return 68;
	}
	return 88;
}

struct<4> func_365()//Position - 0xF140
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_DRAWP", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_DRAWP", 16);
			break;
	}
	return Var0;
}

int func_366(int iParam0, int iParam1, int iParam2)//Position - 0xF177
{
	return 0;
	if (!func_175())
	{
		return 0;
	}
	if (iParam1 != func_398())
	{
		if (func_246(iParam1, iParam0, 1))
		{
			return 1;
		}
	}
	if (iParam2 != func_398())
	{
		if (func_246(iParam2, iParam0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_367(int iParam0, int iParam1, int iParam2)//Position - 0xF1C2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = func_133();
	*iParam1 = func_398();
	if (iVar0 != func_398())
	{
		*iParam2 = 1;
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (MISC::IS_BIT_SET(Local_112.f_10, iVar2))
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)))
				{
					iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
					if (!func_376(iVar1, 0))
					{
						if (iVar1 != iVar0)
						{
							if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
							{
								iVar4 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
								iVar3 = iVar4;
								if (!MISC::IS_BIT_SET(Local_311[iVar3 /*8*/].f_1, 1))
								{
									*iParam2++;
									if (*iParam1 == func_398())
									{
										*iParam0 = iVar0;
										*iParam1 = iVar1;
									}
								}
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	if (*iParam2 > 1)
	{
		return 1;
	}
	return 0;
}

int func_368()//Position - 0xF27E
{
	if ((func_40(PLAYER::PLAYER_ID(), 21) || func_40(PLAYER::PLAYER_ID(), 22)) || func_374())
	{
		return 1;
	}
	if (func_370())
	{
		func_369(22);
		return 1;
	}
	return 0;
}

void func_369(int iParam0)//Position - 0xF2C3
{
	MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_4), iParam0);
}

int func_370()//Position - 0xF2E0
{
	if (func_144(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_44() && !func_373()) || func_372(PLAYER::PLAYER_ID(), 21)) || func_372(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_371(27);
		}
	}
	return 0;
}

void func_371(int iParam0)//Position - 0xF333
{
	MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_4), iParam0);
}

bool func_372(int iParam0, int iParam1)//Position - 0xF350
{
	return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_208, iParam1);
}

bool func_373()//Position - 0xF369
{
	return Global_1312417.f_1;
}

bool func_374()//Position - 0xF377
{
	return func_286(356, -1);
}

bool func_375(int iParam0)//Position - 0xF387
{
	if (func_46(iParam0))
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 8);
}

bool func_376(int iParam0, int iParam1)//Position - 0xF3AD
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_377(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590446[iParam0 /*871*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_377(int iParam0, bool bParam1)//Position - 0xF3F8
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_52();
	}
	if (Global_1312853[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

struct<4> func_378()//Position - 0xF439
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_OVR", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "BK_RUN_OVER", 16);
			break;
	}
	return Var0;
}

void func_379()//Position - 0xF470
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = MISC::IS_BIT_SET(Local_112.f_1, 1);
	if (Local_112.f_197 == 2)
	{
		bVar0 = true;
	}
	if (MISC::IS_BIT_SET(Local_112.f_1, 6))
	{
		if (!MISC::IS_BIT_SET(Local_112.f_1, 7))
		{
			if (func_383() - func_357(&(Local_112.f_24), 0, 0)) >= func_382()
			{
				func_22(&(Local_112.f_24));
				MISC::SET_BIT(&(Local_112.f_1), 7);
			}
		}
	}
	iVar1 = func_383();
	if (MISC::IS_BIT_SET(Local_112.f_1, 7))
	{
		iVar1 = func_382();
	}
	if (!MISC::IS_BIT_SET(Local_112.f_1, 12))
	{
		if (bVar0)
		{
			if (func_24(&(Local_112.f_30)))
			{
				func_22(&(Local_112.f_30));
			}
			if (!func_24(&(Local_112.f_24)))
			{
				func_397(&(Local_112.f_24), 0, 0);
				if (Local_112.f_34 > 0)
				{
					iVar2 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), (-1 * Local_112.f_34));
					func_381(&(Local_112.f_24), iVar2);
					Local_112.f_34 = 0;
				}
			}
			else if (!MISC::IS_BIT_SET(Local_112.f_1, 2))
			{
				if ((iVar1 - func_357(&(Local_112.f_24), 0, 0)) <= 0)
				{
					if (MISC::IS_BIT_SET(Local_112.f_1, 1))
					{
						MISC::SET_BIT(&(Local_112.f_1), 2);
					}
					else
					{
						MISC::SET_BIT(&(Local_112.f_1), 16);
					}
				}
			}
		}
		else
		{
			if (MISC::IS_BIT_SET(Local_112.f_1, 0))
			{
				if (func_24(&(Local_112.f_24)))
				{
					Local_112.f_34 = func_357(&(Local_112.f_24), 0, 0);
				}
			}
			else
			{
				Local_112.f_34 = 0;
			}
			if (func_24(&(Local_112.f_24)))
			{
				func_22(&(Local_112.f_24));
			}
			if (!func_24(&(Local_112.f_30)))
			{
				func_397(&(Local_112.f_30), 0, 0);
			}
			else if (func_23(&(Local_112.f_30), func_380(), 0))
			{
				MISC::SET_BIT(&(Local_112.f_1), 12);
			}
		}
	}
}

int func_380()//Position - 0xF602
{
	if (Local_112.f_197 != 2)
	{
		return Global_262145.f_11137;
	}
	return Global_262145.f_18329 * 1000;
}

void func_381(var uParam0, int iParam1)//Position - 0xF629
{
	*uParam0 = iParam1;
	uParam0->f_1 = 1;
}

int func_382()//Position - 0xF63B
{
	return Global_262145.f_11152;
}

int func_383()//Position - 0xF64A
{
	if (Local_112.f_197 != 2)
	{
		return Global_262145.f_11136;
	}
	return 300000;
}

void func_384()//Position - 0xF66B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	
	bVar6 = false;
	bVar7 = false;
	if (Local_112 != 4)
	{
		iLocal_571 = 0;
		while (iLocal_571 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_571)))
			{
				iVar0++;
				iVar11 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_571));
				if (!func_376(iVar11, 0))
				{
					if (Local_112.f_197 == 2)
					{
						if (!bVar10)
						{
							if (func_393() != func_398())
							{
								if (func_393() == iVar11)
								{
									bVar10 = true;
								}
							}
							else
							{
								bVar10 = true;
							}
						}
					}
					if (MISC::IS_BIT_SET(Local_311[iLocal_571 /*8*/].f_1, 0))
					{
						iVar1++;
					}
					if (!func_46(iVar11) || (Local_112.f_197 == 2 && func_38(iVar11) > 0))
					{
						iVar4++;
					}
					else if (Local_112.f_21 == 0)
					{
						if (Local_112.f_197 == 2)
						{
							if (func_38(iVar11) == 0)
							{
							}
						}
					}
					if (Local_112.f_21 == 0)
					{
						if (!MISC::IS_BIT_SET(Local_311[iLocal_571 /*8*/].f_1, 0))
						{
							if (MISC::IS_BIT_SET(Local_311[iLocal_571 /*8*/].f_1, 13))
							{
								iVar5 = func_392();
								if (iVar5 < func_391())
								{
									MISC::SET_BIT(&(Local_112.f_35), iLocal_571);
								}
							}
							else if (MISC::IS_BIT_SET(Local_112.f_35, iLocal_571))
							{
								MISC::CLEAR_BIT(&(Local_112.f_35), iLocal_571);
							}
						}
					}
					if (!MISC::IS_BIT_SET(Local_112.f_1, 9))
					{
						if (Local_112.f_21 == 1)
						{
							if (MISC::IS_BIT_SET(Local_311[iLocal_571 /*8*/].f_1, 0))
							{
								if (!MISC::IS_BIT_SET(Local_311[iLocal_571 /*8*/].f_1, 4))
								{
									bVar7 = true;
								}
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					if (!MISC::IS_BIT_SET(Local_112.f_1, 4))
					{
						if (MISC::IS_BIT_SET(Local_311[iLocal_571 /*8*/].f_1, 3))
						{
							bVar8 = true;
						}
					}
					if (MISC::IS_BIT_SET(Local_311[iLocal_571 /*8*/].f_1, 0))
					{
						if (!MISC::IS_BIT_SET(Local_311[iLocal_571 /*8*/].f_1, 1))
						{
							if (!MISC::IS_BIT_SET(Local_112.f_1, 4) || (MISC::IS_BIT_SET(Local_112.f_1, 4) && !MISC::IS_BIT_SET(Local_311[iLocal_571 /*8*/].f_1, 5)))
							{
								if (func_390(bVar8))
								{
									iVar2++;
									if (!MISC::IS_BIT_SET(Local_112.f_9, iLocal_571))
									{
										MISC::SET_BIT(&(Local_112.f_9), iLocal_571);
										MISC::SET_BIT(&(Local_112.f_10), iVar11);
										if (MISC::IS_BIT_SET(Local_112.f_1, 3) && !MISC::IS_BIT_SET(Local_112.f_1, 11))
										{
										}
									}
									if (MISC::IS_BIT_SET(Local_112.f_1, 4))
									{
										iVar9 = 1;
									}
								}
							}
							else if (!MISC::IS_BIT_SET(Local_112.f_1, 3))
							{
								if (MISC::IS_BIT_SET(Local_112.f_9, iLocal_571))
								{
									MISC::CLEAR_BIT(&(Local_112.f_9), iLocal_571);
									MISC::CLEAR_BIT(&(Local_112.f_10), iVar11);
								}
								if (MISC::IS_BIT_SET(Local_112.f_1, 4))
								{
									if (MISC::IS_BIT_SET(Local_311[iLocal_571 /*8*/].f_1, 5))
									{
										iVar3++;
									}
								}
							}
						}
						else if (MISC::IS_BIT_SET(Local_112.f_9, iLocal_571))
						{
							MISC::CLEAR_BIT(&(Local_112.f_9), iLocal_571);
							MISC::CLEAR_BIT(&(Local_112.f_10), iVar11);
						}
					}
					else
					{
						if (MISC::IS_BIT_SET(Local_112.f_9, iLocal_571))
						{
							MISC::CLEAR_BIT(&(Local_112.f_9), iLocal_571);
						}
						if (MISC::IS_BIT_SET(Local_112.f_10, iVar11))
						{
							MISC::CLEAR_BIT(&(Local_112.f_10), iVar11);
						}
					}
					if (func_1276(iVar11, 1, 1))
					{
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(Local_112.f_9, iLocal_571))
					{
						MISC::CLEAR_BIT(&(Local_112.f_9), iLocal_571);
					}
					if (MISC::IS_BIT_SET(Local_112.f_35, iLocal_571))
					{
						MISC::CLEAR_BIT(&(Local_112.f_35), iLocal_571);
					}
				}
				if (Local_112.f_21 <= 2)
				{
					bVar6 = true;
				}
				else if (!MISC::IS_BIT_SET(Local_311[iLocal_571 /*8*/].f_1, 2))
				{
					if (!func_376(iVar11, 0))
					{
					}
					bVar6 = true;
				}
			}
			else
			{
				if (MISC::IS_BIT_SET(Local_112.f_9, iLocal_571))
				{
					MISC::CLEAR_BIT(&(Local_112.f_9), iLocal_571);
				}
				if (MISC::IS_BIT_SET(Local_112.f_35, iLocal_571))
				{
					MISC::CLEAR_BIT(&(Local_112.f_35), iLocal_571);
				}
			}
			iLocal_571++;
		}
		if (Local_112.f_197 == 2)
		{
			if (!MISC::IS_BIT_SET(Local_112.f_1, 17))
			{
				if (!bVar10)
				{
					MISC::SET_BIT(&(Local_112.f_1), 17);
				}
			}
		}
		if (iVar1 > Local_112.f_183)
		{
			Local_112.f_183 = iVar1;
		}
		if (iVar0 > Local_112.f_182)
		{
			Local_112.f_182 = iVar0;
		}
		else
		{
			Local_112.f_181 = (Local_112.f_182 - iVar0);
		}
		if (Local_112.f_165 != (iVar2 + iVar3))
		{
			Local_112.f_165 = (iVar2 + iVar3);
			func_386();
		}
		if (!MISC::IS_BIT_SET(Local_112.f_1, 13))
		{
			if (Local_112.f_165 >= func_391() || (iVar4 >= 2 && Local_112.f_165 >= iVar4))
			{
				MISC::SET_BIT(&(Local_112.f_1), 13);
			}
		}
		if (Local_112.f_21 == 0)
		{
			if (!MISC::IS_BIT_SET(Local_112.f_1, 0))
			{
				if (iVar1 >= 1)
				{
					MISC::SET_BIT(&(Local_112.f_1), 0);
				}
			}
			else if (iVar1 == 0)
			{
				MISC::CLEAR_BIT(&(Local_112.f_1), 0);
			}
			if (!MISC::IS_BIT_SET(Local_112.f_1, 1))
			{
				if (iVar1 >= 2)
				{
					MISC::SET_BIT(&(Local_112.f_1), 1);
				}
			}
			else if (iVar1 < 2)
			{
				MISC::CLEAR_BIT(&(Local_112.f_1), 1);
			}
			if (!MISC::IS_BIT_SET(Local_112.f_1, 6))
			{
				if (iVar1 >= func_385())
				{
					MISC::SET_BIT(&(Local_112.f_1), 6);
				}
			}
			if (Local_112.f_197 == 2)
			{
				if (!MISC::IS_BIT_SET(Local_112.f_1, 18))
				{
					if (func_24(&(Local_112.f_32)))
					{
						if (func_23(&(Local_112.f_32), 10000, 0))
						{
							if (iVar4 < 2)
							{
								MISC::SET_BIT(&(Local_112.f_1), 18);
							}
						}
					}
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_112.f_1, 9))
		{
			if (Local_112.f_21 == 1)
			{
				if (!bVar7)
				{
					MISC::SET_BIT(&(Local_112.f_1), 9);
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_112.f_1, 4))
		{
			if (bVar8)
			{
				MISC::SET_BIT(&(Local_112.f_1), 4);
			}
		}
		if (MISC::IS_BIT_SET(Local_112.f_1, 4))
		{
			if (!MISC::IS_BIT_SET(Local_112.f_1, 3))
			{
				if (!MISC::IS_BIT_SET(Local_112.f_1, 10))
				{
					if (!func_24(&(Local_112.f_28)))
					{
						func_397(&(Local_112.f_28), 0, 0);
					}
					else if (func_23(&(Local_112.f_28), 60000, 0))
					{
						MISC::SET_BIT(&(Local_112.f_1), 10);
					}
				}
				if (iVar2 == 0 && iVar3 == 0)
				{
					if (!MISC::IS_BIT_SET(Local_112.f_1, 10))
					{
						MISC::SET_BIT(&(Local_112.f_1), 10);
					}
				}
			}
		}
		if (Local_112.f_21 == 2)
		{
			if (!MISC::IS_BIT_SET(Local_112.f_1, 3))
			{
				if (iVar2 == 1 || iVar9)
				{
					Local_112.f_169 = 1900;
					Local_112.f_168 = 18000;
					MISC::SET_BIT(&(Local_112.f_1), 3);
					if (!MISC::IS_BIT_SET(Local_112.f_1, 4))
					{
						MISC::SET_BIT(&(Local_112.f_1), 11);
					}
					if (iVar1 == 1)
					{
						if (!MISC::IS_BIT_SET(Local_112.f_1, 14))
						{
							MISC::SET_BIT(&(Local_112.f_1), 14);
						}
					}
				}
				else if (iVar2 == 0)
				{
					if (!MISC::IS_BIT_SET(Local_112.f_1, 3))
					{
						if (!MISC::IS_BIT_SET(Local_112.f_1, 4) || (MISC::IS_BIT_SET(Local_112.f_1, 4) && iVar3 == 0))
						{
							MISC::SET_BIT(&(Local_112.f_1), 3);
							if (!MISC::IS_BIT_SET(Local_112.f_1, 4))
							{
								MISC::SET_BIT(&(Local_112.f_1), 11);
							}
						}
					}
				}
				else if (iVar4 == 0)
				{
					Local_112.f_21 = 5;
				}
				else if (MISC::IS_BIT_SET(Local_112.f_1, 4))
				{
				}
			}
		}
		if (MISC::IS_BIT_SET(Local_112.f_1, 3))
		{
			if (!func_24(&(Local_112.f_174)))
			{
				func_397(&(Local_112.f_174), 0, 0);
			}
			if (func_23(&(Local_112.f_174), 100, 0))
			{
				if (!MISC::IS_BIT_SET(Local_112.f_1, 11))
				{
					func_386();
					MISC::SET_BIT(&(Local_112.f_1), 11);
				}
			}
		}
		if (Local_112.f_21 > 2)
		{
			if (!MISC::IS_BIT_SET(Local_112.f_1, 5))
			{
				if (!bVar6)
				{
					MISC::SET_BIT(&(Local_112.f_1), 5);
				}
			}
		}
	}
}

int func_385()//Position - 0xFDAE
{
	if (Global_262145.f_11407 < Global_262145.f_11476)
	{
		return Global_262145.f_11407;
	}
	return Global_262145.f_11476;
}

void func_386()//Position - 0xFDD8
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			func_389(iVar0);
			bVar2 = MISC::IS_BIT_SET(Local_311[iVar0 /*8*/].f_1, 0);
			bVar3 = true;
			if (!bVar2)
			{
				bVar3 = false;
			}
			if (MISC::IS_BIT_SET(Local_311[iVar0 /*8*/].f_1, 1))
			{
				bVar3 = false;
			}
			if (MISC::IS_BIT_SET(Local_112.f_1, 4))
			{
				if (MISC::IS_BIT_SET(Local_311[iVar0 /*8*/].f_1, 5))
				{
					bVar3 = false;
				}
			}
			func_388(iVar0, iVar1, bVar3, bVar2);
		}
		else if (Local_112.f_36[iVar0 /*4*/].f_2 != -1)
		{
			func_389(iVar0);
		}
		iVar0++;
	}
	func_387();
}

void func_387()//Position - 0xFE8B
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	iVar0 = 31;
	while (iVar0 >= 0)
	{
		iVar1 = 31;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_112.f_36[iVar1 /*4*/].f_2 > Local_112.f_36[(iVar1 - 1) /*4*/].f_2)
				{
					uVar2 = Local_112.f_36[iVar1 /*4*/].f_2;
					uVar3 = Local_112.f_36[iVar1 /*4*/];
					uVar4 = Local_112.f_36[iVar1 /*4*/].f_1;
					uVar5 = Local_112.f_36[iVar1 /*4*/].f_3;
					Local_112.f_36[iVar1 /*4*/].f_2 = Local_112.f_36[(iVar1 - 1) /*4*/].f_2;
					Local_112.f_36[iVar1 /*4*/] = Local_112.f_36[(iVar1 - 1) /*4*/];
					Local_112.f_36[iVar1 /*4*/].f_1 = Local_112.f_36[(iVar1 - 1) /*4*/].f_1;
					Local_112.f_36[iVar1 /*4*/].f_3 = Local_112.f_36[(iVar1 - 1) /*4*/].f_3;
					Local_112.f_36[(iVar1 - 1) /*4*/].f_2 = uVar2;
					Local_112.f_36[(iVar1 - 1) /*4*/].f_3 = uVar5;
					Local_112.f_36[(iVar1 - 1) /*4*/] = uVar3;
					Local_112.f_36[(iVar1 - 1) /*4*/].f_1 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_388(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xFF92
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar0 = 1;
	}
	if (bParam3)
	{
		iVar1 = 1;
	}
	Local_112.f_36[iParam0 /*4*/] = iParam0;
	Local_112.f_36[iParam0 /*4*/].f_1 = iParam1;
	Local_112.f_36[iParam0 /*4*/].f_2 = iVar0;
	Local_112.f_36[iParam0 /*4*/].f_3 = iVar1;
}

void func_389(int iParam0)//Position - 0xFFD8
{
	Local_112.f_36[iParam0 /*4*/] = -1;
	Local_112.f_36[iParam0 /*4*/].f_1 = -1;
	Local_112.f_36[iParam0 /*4*/].f_2 = -1;
	Local_112.f_36[iParam0 /*4*/].f_3 = -1;
}

int func_390(bool bParam0)//Position - 0x1000B
{
	if (!MISC::IS_BIT_SET(Local_112.f_1, 3))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_112.f_1, 3))
	{
		if (!MISC::IS_BIT_SET(Local_112.f_1, 11))
		{
			if (MISC::IS_BIT_SET(Local_112.f_1, 4))
			{
				return 1;
			}
			if (bParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_391()//Position - 0x10058
{
	if (Local_112.f_197 != 2)
	{
		return Global_262145.f_11407;
	}
	return Global_262145.f_18331;
}

int func_392()//Position - 0x1007C
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (MISC::IS_BIT_SET(Local_112.f_35, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_393()//Position - 0x100AC
{
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_112.f_198)))
	{
		return NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_112.f_198));
	}
	return func_398();
}

void func_394(int iParam0)//Position - 0x100D6
{
	vector3 vVar0;
	int iVar3;
	
	vVar0.x = 226654995;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.z = iParam0;
	iVar3 = func_395(1, 1);
	if (!iVar3 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iVar3);
	}
}

var func_395(int iParam0, bool bParam1)//Position - 0x10110
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_1276(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_376(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_396(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x10175
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
	return -1;
}

void func_397(var uParam0, bool bParam1, bool bParam2)//Position - 0x109DA
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

int func_398()//Position - 0x10A1F
{
	return -1;
}

void func_399()//Position - 0x10A28
{
	if (Local_112.f_197 != -1)
	{
		return;
	}
	switch (Local_112.f_167)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			Local_112.f_197 = 0;
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			Local_112.f_197 = 2;
			func_400();
			break;
	}
}

void func_400()//Position - 0x10A94
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (Local_112.f_198 == -1)
		{
			Local_112.f_198 = NETWORK::PARTICIPANT_ID_TO_INT();
		}
	}
}

int func_401(var uParam0)//Position - 0x10AB3
{
	if (func_411())
	{
		*uParam0 = MISC::GET_RANDOM_INT_IN_RANGE(6, 11);
		if (!func_405(*uParam0, 1128792064))
		{
		}
		else
		{
			return 0;
		}
	}
	else
	{
		*uParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	}
	if (!func_404(*uParam0))
	{
		if (!func_402(136, *uParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_402(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x10B11
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 132:
		case 144:
		case 236:
			return 0;
		
		default:
	}
	iVar1 = func_403(iParam0);
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iVar0 < Global_262145.f_8112)
		{
			if (Global_2501271.f_130[iVar0 /*2*/] == iVar1 && Global_2501271.f_130[iVar0 /*2*/].f_1 == func_396(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_403(int iParam0)//Position - 0x10B90
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
		
		default:
	}
	return -1;
}

int func_404(int iParam0)//Position - 0x10C24
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_11139;
			break;
		
		case 1:
			return Global_262145.f_11140;
			break;
		
		case 2:
			return Global_262145.f_11141;
			break;
		
		case 3:
			return Global_262145.f_11142;
			break;
		
		case 4:
			return Global_262145.f_11143;
			break;
		
		case 6:
			return Global_262145.f_18344;
			break;
		
		case 7:
			return Global_262145.f_18345;
			break;
		
		case 8:
			return Global_262145.f_18346;
			break;
		
		case 9:
			return Global_262145.f_18347;
			break;
		
		case 10:
			return Global_262145.f_18348;
			break;
	}
	return 0;
}

bool func_405(int iParam0, float fParam1)//Position - 0x10CF2
{
	return func_406(func_410(iParam0), fParam1, 1, 1, 0, 0, 0, 0);
}

int func_406(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x10D0C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_1276(iVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_409(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam9) && bParam6) && func_407(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_219(iVar1), vParam0, true) < fParam3)
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

int func_407(int iParam0)//Position - 0x10E08
{
	if (func_216(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2507671 = { func_64(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2507671))
	{
		return 1;
	}
	if (func_408(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_408(int iParam0, int iParam1)//Position - 0x10E4F
{
	int iVar0;
	
	iVar0 = func_119(iParam0);
	if (!iVar0 == func_398())
	{
		if (iVar0 == func_119(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_409(int iParam0)//Position - 0x10E7A
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2424073[iParam0 /*421*/].f_245)
	{
		return 1;
	}
	return 0;
}

Vector3 func_410(int iParam0)//Position - 0x10EA5
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 6:
			vVar0 = { 770.8729f, -232.9857f, 65.1145f };
			break;
		
		case 7:
			vVar0 = { 157.237f, -1519.715f, 28.1416f };
			break;
		
		case 8:
			vVar0 = { -899.8332f, 5567.762f, 2.7747f };
			break;
		
		case 9:
			vVar0 = { -1894.427f, 2010.27f, 140.5029f };
			break;
		
		case 10:
			vVar0 = { 1036.689f, -619.3324f, 57.1851f };
			break;
	}
	return vVar0;
}

bool func_411()//Position - 0x10F44
{
	return func_412(PLAYER::PLAYER_ID()) == 200;
}

int func_412(int iParam0)//Position - 0x10F57
{
	if (func_413(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_32;
	}
	return -1;
}

int func_413(int iParam0, int iParam1)//Position - 0x10F7A
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_32 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

int func_414()//Position - 0x10FB5
{
	if (Global_2531497.f_4898.f_38)
	{
		Global_2531497.f_4898.f_38 = 0;
		return 1;
	}
	return 0;
}

int func_415(var uParam0)//Position - 0x10FD8
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_416(var uParam0)//Position - 0x11001
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_397(uParam0, 0, 0);
		}
	}
}

void func_417()//Position - 0x11020
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (!func_376(PLAYER::PLAYER_ID(), 0))
	{
		switch (iLocal_2783)
		{
			case 0:
				if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4, 0))
				{
					if (func_432("PEN_BIKE"))
					{
						MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 0);
					}
				}
				else if (!func_432("PEN_BIKE"))
				{
					MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 0);
				}
				iLocal_2783++;
				break;
			
			case 1:
				if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4, 1))
				{
					if (func_432("PEN_VEHG"))
					{
						MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 1);
					}
				}
				else if (!func_432("PEN_VEHG"))
				{
					MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 1);
				}
				iLocal_2783++;
				break;
			
			case 2:
				if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4, 2))
				{
					if (func_432("PEN_PBIKE"))
					{
						MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 2);
					}
				}
				else if (!func_432("PEN_PBIKE"))
				{
					MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 2);
				}
				iLocal_2783++;
				break;
			
			case 3:
				if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4, 3))
				{
					if (func_432("PEN_PVEHG"))
					{
						MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 3);
					}
				}
				else if (!func_432("PEN_PVEHG"))
				{
					MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 3);
				}
				iLocal_2783++;
				break;
			
			case 4:
				if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4, 4))
				{
					if (func_432("PEN_AREA"))
					{
						MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 4);
					}
				}
				else if (!func_432("PEN_AREA"))
				{
					MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 4);
				}
				iLocal_2783++;
				break;
			
			case 5:
				if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4, 5))
				{
					if (func_432("PEN_BAREA"))
					{
						MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 5);
					}
				}
				else if (!func_432("PEN_BAREA"))
				{
					MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 5);
				}
				iLocal_2783++;
				break;
			
			case 6:
				if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4, 6))
				{
					if (func_432("PEN_EXITV"))
					{
						MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 6);
					}
				}
				else if (!func_432("PEN_EXITV"))
				{
					MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 6);
				}
				iLocal_2783++;
				break;
			
			case 7:
				Var0 = { func_431() };
				if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4, 7))
				{
					if (func_432(&Var0))
					{
						MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 7);
					}
				}
				else if (!func_432(&Var0))
				{
					MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 7);
				}
				iLocal_2783++;
				break;
		}
		if (iLocal_2783 > 7)
		{
			iLocal_2783 = 0;
		}
	}
	else
	{
		if (Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4 != 0)
		{
			Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4 = 0;
		}
		iVar4 = Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_735;
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar4))
			{
				iVar5 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar4);
				iVar6 = iVar5;
				switch (iLocal_2783)
				{
					case 0:
						if (!MISC::IS_BIT_SET(Local_311[iVar6 /*8*/].f_4, 0))
						{
							if (func_432("PEN_BIKE"))
							{
								func_430();
							}
						}
						else if (!func_432("PEN_BIKE"))
						{
							func_418("PEN_BIKE", 0);
						}
						iLocal_2783++;
						break;
					
					case 1:
						if (!MISC::IS_BIT_SET(Local_311[iVar6 /*8*/].f_4, 1))
						{
							if (func_432("PEN_VEHG"))
							{
								func_430();
							}
						}
						else if (!func_432("PEN_VEHG"))
						{
							func_418("PEN_VEHG", 0);
						}
						iLocal_2783++;
						break;
					
					case 2:
						if (!MISC::IS_BIT_SET(Local_311[iVar6 /*8*/].f_4, 2))
						{
							if (func_432("PEN_PBIKE"))
							{
								func_430();
							}
						}
						else if (!func_432("PEN_PBIKE"))
						{
							func_418("PEN_PBIKE", 0);
						}
						iLocal_2783++;
						break;
					
					case 3:
						if (!MISC::IS_BIT_SET(Local_311[iVar6 /*8*/].f_4, 3))
						{
							if (func_432("PEN_PVEHG"))
							{
								func_430();
							}
						}
						else if (!func_432("PEN_PVEHG"))
						{
							func_418("PEN_PVEHG", 0);
						}
						iLocal_2783++;
						break;
					
					case 4:
						if (!MISC::IS_BIT_SET(Local_311[iVar6 /*8*/].f_4, 4))
						{
							if (func_432("PEN_AREA"))
							{
								func_430();
							}
						}
						else if (!func_432("PEN_AREA"))
						{
							func_418("PEN_AREA", 0);
						}
						iLocal_2783++;
						break;
					
					case 5:
						if (!MISC::IS_BIT_SET(Local_311[iVar6 /*8*/].f_4, 5))
						{
							if (func_432("PEN_BAREA"))
							{
								func_430();
							}
						}
						else if (!func_432("PEN_BAREA"))
						{
							func_418("PEN_BAREA", 0);
						}
						iLocal_2783++;
						break;
					
					case 6:
						if (!MISC::IS_BIT_SET(Local_311[iVar6 /*8*/].f_4, 6))
						{
							if (func_432("PEN_EXITV"))
							{
								func_430();
							}
						}
						else if (!func_432("PEN_EXITV"))
						{
							func_418("PEN_EXITV", 0);
						}
						iLocal_2783++;
						break;
					
					case 7:
						Var0 = { func_431() };
						if (!MISC::IS_BIT_SET(Local_311[iVar6 /*8*/].f_4, 7))
						{
							if (func_432(&Var0))
							{
								func_430();
							}
						}
						else if (!func_432(&Var0))
						{
							func_418(&Var0, 0);
						}
						iLocal_2783++;
						break;
				}
				if (iLocal_2783 > 7)
				{
					iLocal_2783 = 0;
				}
			}
		}
	}
}

void func_418(char* sParam0, bool bParam1)//Position - 0x115F5
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_428(sParam0))
	{
		return;
	}
	func_422();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = MISC::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_421();
	func_420(bParam1);
	func_419();
}

void func_419()//Position - 0x11660
{
	MISC::SET_BIT(&(Global_1312585.f_59), 1);
}

void func_420(bool bParam0)//Position - 0x11673
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1312585.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1312585.f_59), 0);
}

void func_421()//Position - 0x11699
{
	Global_1312585.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312585.f_11 = NETWORK::GET_NETWORK_TIME();
}

void func_422()//Position - 0x116BE
{
	func_424();
	func_423(0);
}

void func_423(bool bParam0)//Position - 0x116CF
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1312585 = 20;
	StringCopy(&(Global_1312585.f_1), "", 32);
	Global_1312585.f_9 = 0;
	if (bVar0)
	{
		Global_1312585.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1312585.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1312585.f_12), "", 16);
	StringCopy(&(Global_1312585.f_16), "", 64);
	StringCopy(&(Global_1312585.f_32), "", 64);
	Global_1312585.f_52 = 0;
	Global_1312585.f_53 = 0;
	Global_1312585.f_54 = 0;
	Global_1312585.f_55 = -1;
	Global_1312585.f_56 = 0;
	Global_1312585.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_424()//Position - 0x11761
{
	if (!func_427())
	{
	}
	if (func_426())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312585.f_12));
		func_425();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_425()//Position - 0x1178A
{
	switch (Global_1312585)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 9:
			HUD::_ADD_TEXT_COMPONENT_SUBSTRING_UNK(&(Global_1312585.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 11:
			HUD::_ADD_TEXT_COMPONENT_SUBSTRING_UNK(&(Global_1312585.f_16));
			return;
		
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_48));
			return;
		
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			return;
		
		default:
	}
}

int func_426()//Position - 0x119FC
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

int func_427()//Position - 0x11A12
{
	if (!func_426())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312585.f_12));
	func_425();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_428(int iParam0)//Position - 0x11A38
{
	if (!func_426())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_429(iParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_12));
}

bool func_429(int iParam0)//Position - 0x11A7C
{
	if (!func_426())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_16));
}

void func_430()//Position - 0x11AAE
{
	if (!func_426())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312585.f_9)
	{
		return;
	}
	func_422();
}

struct<4> func_431()//Position - 0x11ADB
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_STARTO", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_STARTO", 16);
			break;
	}
	return Var0;
}

int func_432(int iParam0)//Position - 0x11B12
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return 0;
	}
	if (!func_426())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(iParam0) > 63)
		{
			return 0;
		}
	}
	else if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(iParam0) > 23)
	{
		return 0;
	}
	return func_428(iParam0);
}

void func_433()//Position - 0x11B63
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0))
	{
		if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 1))
		{
			bVar5 = true;
		}
	}
	if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
	{
		if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 1))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (iVar1 != PLAYER::PLAYER_PED_ID())
						{
							if (PED::IS_PED_A_PLAYER(iVar1))
							{
								iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
								if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
								{
									iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
									iVar4 = iVar3;
									if (MISC::IS_BIT_SET(Local_311[iVar4 /*8*/].f_1, 0))
									{
										bVar5 = true;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (func_436(PLAYER::PLAYER_ID()))
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		func_435();
		func_434();
	}
}

void func_434()//Position - 0x11C4F
{
	Global_2531497.f_1791.f_56 = 1;
}

void func_435()//Position - 0x11C61
{
	Global_2531497.f_1791.f_54 = 1;
}

bool func_436(int iParam0)//Position - 0x11C73
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 4);
}

void func_437()//Position - 0x11C8B
{
	float fVar0;
	
	if (!func_24(&uLocal_2753) || (func_24(&uLocal_2753) && func_23(&uLocal_2753, 5000, 0)))
	{
		fVar0 = func_440(PLAYER::PLAYER_PED_ID(), vLocal_591, 1);
		if (!func_439(PLAYER::PLAYER_ID()))
		{
			if (fVar0 <= 700f)
			{
				func_438(1);
			}
		}
		else if (fVar0 > 700f)
		{
			func_438(0);
		}
		func_22(&uLocal_2753);
		func_397(&uLocal_2753, 0, 0);
	}
}

void func_438(bool bParam0)//Position - 0x11D0A
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 5);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 5);
	}
}

int func_439(int iParam0)//Position - 0x11D3E
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 5);
	}
	return 0;
}

float func_440(int iParam0, vector3 vParam1, bool bParam4)//Position - 0x11D64
{
	vector3 vVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, bParam4);
}

void func_441()//Position - 0x11D9E
{
	if (Local_112.f_197 != 2)
	{
		if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0) || MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
		{
			if (!MISC::IS_BIT_SET(iLocal_569, 11))
			{
				if (Local_112.f_21 == 2)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("PENNED_IN_START_MUSIC"))
					{
						MISC::SET_BIT(&iLocal_569, 11);
					}
				}
			}
			else if (MISC::IS_BIT_SET(iLocal_569, 15))
			{
				if (!MISC::IS_BIT_SET(iLocal_569, 12))
				{
					if (!MISC::IS_BIT_SET(iLocal_569, 16))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("PENNED_IN_70_PERCENT"))
						{
							MISC::SET_BIT(&iLocal_569, 16);
						}
					}
				}
			}
			if (!MISC::IS_BIT_SET(iLocal_569, 12))
			{
				if (MISC::IS_BIT_SET(iLocal_569, 11))
				{
					if (Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 > 2)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("PENNED_IN_STOP_MUSIC"))
						{
							MISC::SET_BIT(&iLocal_569, 12);
						}
					}
				}
			}
		}
	}
	else if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0) || MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
	{
		if (!MISC::IS_BIT_SET(iLocal_569, 11))
		{
			if (Local_112.f_21 == 2)
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("CAGED_IN_START_MUSIC"))
				{
					MISC::SET_BIT(&iLocal_569, 11);
					AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
				}
			}
		}
		else if (MISC::IS_BIT_SET(iLocal_569, 15))
		{
			if (!MISC::IS_BIT_SET(iLocal_569, 12))
			{
				if (!MISC::IS_BIT_SET(iLocal_569, 16))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("CAGED_IN_70_PERCENT"))
					{
						MISC::SET_BIT(&iLocal_569, 16);
					}
				}
			}
		}
		if (!MISC::IS_BIT_SET(iLocal_569, 12))
		{
			if (MISC::IS_BIT_SET(iLocal_569, 11))
			{
				if (Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 > 2)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("CAGED_IN_STOP_MUSIC"))
					{
						MISC::SET_BIT(&iLocal_569, 12);
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
					}
				}
			}
		}
	}
}

void func_442()//Position - 0x11F51
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_376(PLAYER::PLAYER_ID(), 0))
	{
		if (MISC::IS_BIT_SET(iLocal_569, 22))
		{
			MISC::CLEAR_BIT(&iLocal_569, 22);
		}
		return;
	}
	if (func_626())
	{
		func_503(0);
	}
	iVar0 = Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_735;
	if (!MISC::IS_BIT_SET(iLocal_569, 22))
	{
		if (Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1 != 0)
		{
			Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1 = 0;
		}
		MISC::SET_BIT(&iLocal_569, 22);
	}
	if (!MISC::IS_BIT_SET(iLocal_569, 13))
	{
		MISC::SET_BIT(&iLocal_569, 13);
		func_430();
	}
	if (iLocal_2780 == 2)
	{
		func_494();
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
		{
			iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
			iVar2 = iVar1;
			iVar3 = Local_311[iVar2 /*8*/].f_7;
			if (iVar3 > 0)
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_589))
				{
					HUD::REMOVE_BLIP(&iLocal_589);
				}
			}
			switch (iVar3)
			{
				case 0:
					func_487(1, 0);
					func_477();
					func_463();
					break;
				
				case 1:
					func_463();
					func_487(!MISC::IS_BIT_SET(iLocal_568, 9), 0);
					break;
				
				case 2:
					func_29(1);
					func_457();
					func_487(0, 0);
					func_448();
					if (MISC::IS_BIT_SET(Local_311[iVar2 /*8*/].f_1, 5))
					{
						if (!MISC::IS_BIT_SET(Local_311[iVar2 /*8*/].f_1, 1))
						{
							if (!func_24(&uLocal_601))
							{
								func_397(&uLocal_601, 0, 0);
							}
							if (func_24(&uLocal_601))
							{
								if ((func_447() - func_357(&uLocal_601, 0, 0)) >= 0)
								{
									func_444((func_447() - func_357(&uLocal_601, 0, 0)), "PEN_ELM", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
					}
					else if (func_24(&uLocal_601))
					{
						func_22(&uLocal_601);
					}
					func_37();
					break;
				
				case 3:
					if (MISC::IS_BIT_SET(Local_311[iVar2 /*8*/].f_1, 0) || MISC::IS_BIT_SET(Local_311[iVar2 /*8*/].f_1, 6))
					{
						func_487(0, 1);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_588))
					{
						HUD::SET_BLIP_COLOUR(iLocal_588, 55);
					}
					func_37();
					break;
				
				default:
					if (MISC::IS_BIT_SET(Local_311[iVar2 /*8*/].f_1, 2))
					{
						func_443();
					}
					break;
				}
			}
	}
	if (Local_112.f_21 > 4)
	{
		func_1162();
	}
}

void func_443()//Position - 0x12186
{
	if (HUD::DOES_BLIP_EXIST(iLocal_588))
	{
		HUD::REMOVE_BLIP(&iLocal_588);
	}
}

void func_444(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x1219F
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_446(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_445(7, iVar0);
		Global_1375006.f_4453[iVar0] = iParam0;
		StringCopy(&(Global_1375006.f_4453.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1375006.f_4453.f_172[iVar0] = iParam2;
		Global_1375006.f_4453.f_216[iVar0] = iParam3;
		Global_1375006.f_4453.f_183[iVar0] = iParam4;
		Global_1375006.f_4453.f_194[iVar0] = iParam5;
		Global_1375006.f_4453.f_249[iVar0] = iParam6;
		Global_1375006.f_4453.f_260[iVar0] = iParam7;
		Global_1375006.f_4453.f_205[iVar0] = iParam8;
		Global_1375006.f_4453.f_314[iVar0] = iParam9;
		Global_1375006.f_4453.f_325[iVar0] = iParam10;
		Global_1375006.f_4453.f_357[iVar0] = iParam11;
		Global_1375006.f_4453.f_238[iVar0] = iParam12;
		Global_1375006.f_4453.f_271[iVar0] = iParam13;
		Global_1375006.f_4453.f_368[iVar0] = iParam14;
		Global_1375006.f_4453.f_379[iVar0] = iParam15;
		Global_1375006.f_4453.f_390[iVar0] = iParam16;
		Global_1375006.f_4453.f_227[iVar0] = iParam17;
	}
}

void func_445(int iParam0, int iParam1)//Position - 0x122FC
{
	MISC::SET_BIT(&(Global_1375006.f_6184[iParam0]), iParam1);
}

bool func_446(int iParam0, int iParam1)//Position - 0x12315
{
	return MISC::IS_BIT_SET(Global_1375006.f_6184[iParam0], iParam1);
}

int func_447()//Position - 0x1232E
{
	if (Local_112.f_197 != 2)
	{
		return Global_262145.f_11153;
	}
	return 15000;
}

void func_448()//Position - 0x1234E
{
	float fVar0;
	float fVar1;
	
	if (MISC::IS_BIT_SET(Local_112.f_1, 3))
	{
		return;
	}
	if (iLocal_2768 == -1)
	{
		if (Local_112.f_165 > 0)
		{
			iLocal_2768 = Local_112.f_165;
		}
	}
	else if (Local_112.f_165 > iLocal_2768)
	{
		iLocal_2768 = Local_112.f_165;
	}
	if (func_454(0))
	{
		if (!func_1010(1))
		{
			func_451(Local_112.f_165, "PEN_REMP", -1, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	fVar0 = func_450();
	if (fVar0 >= fLocal_1495)
	{
		fLocal_1495 = fVar0;
	}
	if (!MISC::IS_BIT_SET(iLocal_569, 15))
	{
		if (fLocal_1495 >= fLocal_1496)
		{
			MISC::SET_BIT(&iLocal_569, 15);
		}
	}
	fVar1 = (fLocal_1494 - fLocal_1495);
	if (func_454(0))
	{
		if (!func_1010(1))
		{
			func_449(SYSTEM::ROUND(fVar1), SYSTEM::ROUND(fLocal_1494), "PEN_DST", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1);
		}
	}
}

void func_449(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)//Position - 0x12447
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_446(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_445(0, iVar0);
		Global_1375006.f_1114[iVar0] = iParam0;
		Global_1375006.f_1114.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1375006.f_1114.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1375006.f_1114.f_194[iVar0] = iParam3;
		Global_1375006.f_1114.f_183[iVar0] = iParam4;
		Global_1375006.f_1114.f_216[iVar0] = iParam5;
		Global_1375006.f_1114.f_227[iVar0 /*3*/] = iParam6;
		Global_1375006.f_1114.f_227[iVar0 /*3*/].f_1 = iParam7;
		Global_1375006.f_1114.f_258[iVar0] = iParam8;
		Global_1375006.f_1114.f_269[iVar0] = iParam9;
		Global_1375006.f_1114.f_312[iVar0] = iParam10;
		Global_1375006.f_1114.f_323[iVar0] = iParam11;
		Global_1375006.f_1114.f_334[iVar0] = iParam12;
		Global_1375006.f_1114.f_345[iVar0] = iParam13;
		Global_1375006.f_1109 = 1;
		Global_1375006.f_1114.f_356[iVar0] = iParam14;
		Global_1375006.f_1114.f_367[iVar0] = iParam15;
		Global_1375006.f_1114.f_378[iVar0] = iParam16;
		Global_1375006.f_1114.f_389[iVar0] = iParam17;
		Global_1375006.f_1114.f_400[iVar0] = iParam18;
		Global_1375006.f_1114.f_411[iVar0] = iParam19;
		Global_1375006.f_1114.f_422[iVar0] = iParam20;
		Global_1375006.f_1114.f_433[iVar0] = iParam21;
		Global_1375006.f_1114.f_444[iVar0] = iParam22;
		Global_1375006.f_1114.f_455[iVar0] = iParam23;
		Global_1375006.f_1114.f_466[iVar0] = iParam24;
		Global_1375006.f_1114.f_205[iVar0] = iParam25;
	}
}

float func_450()//Position - 0x1262F
{
	float fVar0;
	int iVar1;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_591, vLocal_623[iLocal_590 /*3*/], true);
	if (iLocal_590 > 0)
	{
		iVar1 = 0;
		while (iVar1 <= (iLocal_590 - 1))
		{
			fVar0 = (fVar0 + fLocal_1275[iVar1]);
			iVar1++;
		}
	}
	return fVar0;
}

void func_451(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)//Position - 0x12678
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_446(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_445(6, iVar0);
		Global_1375006.f_3835[iVar0] = iParam0;
		StringCopy(&(Global_1375006.f_3835.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1375006.f_3835.f_183[iVar0] = iParam3;
		Global_1375006.f_3835.f_172[iVar0] = iParam2;
		Global_1375006.f_3835.f_260[iVar0] = iParam4;
		Global_1375006.f_3835.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1375006.f_3835.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1375006.f_3835.f_443[iVar0] = iParam7;
		Global_1375006.f_3835.f_454[iVar0] = iParam8;
		Global_1375006.f_3835.f_497[iVar0] = iParam9;
		Global_1375006.f_3835.f_508[iVar0] = iParam10;
		Global_1375006.f_3835.f_205[iVar0] = iParam11;
		Global_1375006.f_3835.f_216[iVar0] = iParam12;
		Global_1375006.f_3835.f_227[iVar0] = iParam13;
		Global_1375006.f_3835.f_238[iVar0] = iParam14;
		Global_1375006.f_3835.f_249[iVar0] = iParam15;
		Global_1375006.f_3835.f_519[iVar0] = iParam16;
		Global_1375006.f_3835.f_530[iVar0] = iParam17;
		Global_1375006.f_3835.f_541[iVar0] = iParam18;
		Global_1375006.f_3835.f_552[iVar0] = iParam19;
		Global_1375006.f_3835.f_563[iVar0] = iParam20;
		Global_1375006.f_3835.f_574[iVar0] = iParam21;
		Global_1375006.f_3835.f_585[iVar0] = iParam22;
		Global_1375006.f_3835.f_596[iVar0] = iParam23;
		Global_1375006.f_3835.f_607[iVar0] = iParam24;
		Global_1375006.f_3835.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_453())
		{
			Global_1375006.f_1109 = 1;
		}
		if (MISC::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1375006.f_1113 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1375006.f_1112 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1375006.f_1109 = 1;
			}
			if (func_452())
			{
				Global_1375006.f_1113 = 1;
			}
		}
	}
}

int func_452()//Position - 0x128E9
{
	int iVar0;
	var uVar1;
	
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_453()//Position - 0x1290D
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

int func_454(bool bParam0)//Position - 0x1294B
{
	if (func_456())
	{
		return 0;
	}
	if (func_455())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_1276(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_455()//Position - 0x12982
{
	return Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_196 != 0;
}

bool func_456()//Position - 0x12999
{
	return MISC::IS_BIT_SET(Global_2359302, 12);
}

void func_457()//Position - 0x129AB
{
	if (iLocal_2769)
	{
		func_443();
		if (func_462(100f, 10f, 5f))
		{
			iLocal_2769 = 1;
		}
	}
	func_458();
	if (HUD::DOES_BLIP_EXIST(iLocal_588))
	{
		HUD::SET_BLIP_SCALE(iLocal_588, fLocal_598);
	}
}

void func_458()//Position - 0x129EB
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_461();
	fVar1 = (fVar0 / fLocal_1494);
	fVar2 = ((((func_1064() - func_460()) * fVar1) + func_460()) * func_459());
	if (fVar2 < func_460())
	{
		fVar2 = func_460();
	}
	if (fVar2 > func_1064())
	{
		fVar2 = func_1064();
	}
	fLocal_599 = fLocal_598;
	if (fVar2 > fLocal_599)
	{
		fVar2 = fLocal_599;
	}
	fLocal_598 = fVar2;
	if (MISC::IS_BIT_SET(Local_112.f_1, 4))
	{
		if (fLocal_598 != func_460())
		{
			fLocal_598 = func_460();
		}
	}
	if (!func_24(&uLocal_2757) || (func_24(&uLocal_2757) && func_23(&uLocal_2757, 5000, 0)))
	{
		func_22(&uLocal_2757);
		func_397(&uLocal_2757, 0, 0);
		Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_6 = fLocal_598;
	}
}

float func_459()//Position - 0x12AB6
{
	return Global_262145.f_11150;
}

float func_460()//Position - 0x12AC5
{
	if (Local_112.f_197 != 2)
	{
		return Global_262145.f_11145;
	}
	return Global_262145.f_18350;
}

float func_461()//Position - 0x12AE9
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_591, vLocal_623[iLocal_590 + 1 /*3*/], true);
	iVar1 = iLocal_590 + 1;
	if (iVar1 < (iLocal_1493 - 1))
	{
		iVar2 = iVar1;
		while (iVar2 <= (iLocal_1493 - 1))
		{
			fVar0 = (fVar0 + fLocal_1275[iVar2]);
			iVar2++;
		}
	}
	return fVar0;
}

int func_462(float fParam0, float fParam1, float fParam2)//Position - 0x12B3F
{
	float fVar0;
	
	fVar0 = MISC::ABSF((fParam0 - fParam1));
	if (fLocal_598 > fParam1)
	{
		fLocal_598 = (fLocal_598 - IntToFloat(SYSTEM::FLOOR(((fVar0 / fParam2) * MISC::GET_FRAME_TIME()))));
		if (fLocal_598 < fParam1)
		{
			fLocal_598 = fParam1;
		}
	}
	else
	{
		fLocal_598 = fParam1;
		return 1;
	}
	return 0;
}

void func_463()//Position - 0x12B8C
{
	if (!MISC::IS_BIT_SET(iLocal_568, 7))
	{
		func_476(&uLocal_2735);
		MISC::SET_BIT(&iLocal_568, 7);
	}
	if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 4))
	{
		if (func_475(&uLocal_2735))
		{
			if (MISC::IS_BIT_SET(Local_112.f_1, 8))
			{
				if (func_464(&uLocal_2735, 1, 0, 1))
				{
					MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 4);
				}
			}
		}
	}
}

int func_464(var uParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x12BF7
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
	{
		if (func_1010(1))
		{
			return 1;
		}
	}
	if (func_475(uParam0))
	{
		if (!func_474(&(uParam0->f_3)))
		{
			func_472(&(uParam0->f_3));
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 100, 0);
		}
		iVar0 = SYSTEM::FLOOR(func_469(&(uParam0->f_3)));
		iVar1 = MISC::ABSI((iVar0 - 3));
		bVar2 = false;
		if (func_72(uParam0->f_1, 4))
		{
			if (uParam0->f_2 >= 5)
			{
				if (!func_72(uParam0->f_1, 16))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "GO", "HUD_MINI_GAME_SOUNDSET", 0);
					func_113(&(uParam0->f_1), 16);
					AUDIO::STOP_STREAM();
				}
			}
			else
			{
				uParam0->f_2++;
			}
		}
		if (!func_72(uParam0->f_1, 8))
		{
			if (iVar1 == 3 && !func_72(uParam0->f_1, 1))
			{
				func_113(&(uParam0->f_1), 1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", 0);
				func_468(uParam0, iVar1);
			}
			else if (iVar1 == 2 && !func_72(uParam0->f_1, 2))
			{
				func_113(&(uParam0->f_1), 2);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", 0);
				func_468(uParam0, iVar1);
			}
			else if (iVar1 == 1 && !func_72(uParam0->f_1, 4))
			{
				func_113(&(uParam0->f_1), 4);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", 0);
				func_468(uParam0, iVar1);
				if (!func_376(PLAYER::PLAYER_ID(), 0))
				{
					func_418("PEN_AREA", 0);
				}
			}
			else if (iVar1 == 0 && !func_72(uParam0->f_1, 8))
			{
				func_113(&(uParam0->f_1), 8);
				HUD::GET_HUD_COLOUR(18, &iVar3, &iVar4, &iVar5, &uVar6);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
				func_467("CNTDWN_GO");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar4);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_443();
				func_1008(func_1009(), 0);
				MISC::SET_BIT(&iLocal_568, 9);
				if (!MISC::IS_BIT_SET(iLocal_568, 6))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("pennedIn", 0, 1);
					MISC::SET_BIT(&iLocal_568, 6);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_Player_Outside_Bubble_Scene"))
					{
						AUDIO::STOP_AUDIO_SCENE("MP_Player_Outside_Bubble_Scene");
					}
					AUDIO::START_AUDIO_SCENE("MP_Player_Inside_Bubble_Scene");
				}
				if (!bParam1)
				{
					bVar2 = true;
				}
			}
		}
		else if (iVar1 == 1)
		{
			bVar2 = true;
		}
		if ((iParam2 && func_466()) || iVar0 > 5)
		{
			bVar2 = true;
		}
		if (bVar2)
		{
			if (bParam3)
			{
				uParam0->f_1 = 0;
				func_465(&(uParam0->f_3));
			}
			AUDIO::STOP_AUDIO_SCENE("RACES_RADIO_MUTE_scene");
			AUDIO::START_AUDIO_SCENE("MP_RACE_GENERAL_SCENE");
			iVar7 = 0;
			while (iVar7 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar7)))
				{
					iVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar7));
					if (iVar8 != PLAYER::PLAYER_ID())
					{
						iVar9 = PLAYER::GET_PLAYER_PED(iVar8);
						if (PED::IS_PED_IN_ANY_VEHICLE(iVar9, 0))
						{
							iVar10 = PED::GET_VEHICLE_PED_IS_IN(iVar9, 0);
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iVar10, "MP_RACE_NPC_CAR_Group", 0f);
						}
					}
				}
				iVar7++;
			}
			return 1;
		}
	}
	return 0;
}

void func_465(var uParam0)//Position - 0x12EF5
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_466()//Position - 0x12F0B
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 18) || PAD::IS_CONTROL_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_467(char* sParam0)//Position - 0x12F3D
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_468(var uParam0, int iParam1)//Position - 0x12F4F
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
	HUD::ADD_TEXT_COMPONENT_INTEGER(MISC::ABSI(iParam1));
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

float func_469(var uParam0)//Position - 0x12FA2
{
	if (func_474(uParam0))
	{
		if (func_471(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_470(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_470(bool bParam0)//Position - 0x12FE1
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_471(var uParam0)//Position - 0x13039
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

void func_472(int iParam0)//Position - 0x13049
{
	func_473(iParam0, 0f);
}

void func_473(int iParam0, float fParam1)//Position - 0x13058
{
	iParam0->f_1 = (func_470(MISC::IS_BIT_SET(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_474(var uParam0)//Position - 0x13086
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

int func_475(var uParam0)//Position - 0x13096
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		return 0;
	}
	return 1;
}

void func_476(var uParam0)//Position - 0x130AE
{
	*uParam0 = unk_0x67D02A194A2FC2BD("COUNTDOWN");
}

void func_477()//Position - 0x130C1
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	
	bVar0 = MISC::IS_BIT_SET(Local_112.f_1, 1);
	if (!func_486())
	{
		return;
	}
	iVar1 = func_383();
	if (MISC::IS_BIT_SET(Local_112.f_1, 7))
	{
		iVar1 = func_382();
	}
	if (Local_112.f_197 == 2)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar6 = func_391();
		if (iVar6 > iLocal_2764)
		{
			iVar6 = iLocal_2764;
		}
		if (iVar7 != Local_112.f_165)
		{
			iVar7 = Local_112.f_165;
		}
		if (!func_376(PLAYER::PLAYER_ID(), 0))
		{
			Var2 = { func_431() };
			if (Local_112.f_197 != 2)
			{
				if (!func_432(&Var2))
				{
					func_418(&Var2, 0);
				}
			}
			else if (!func_432(&Var2))
			{
				func_483(&Var2, "CAG_BLIP", iLocal_2766, 0);
			}
		}
		if (Local_112.f_197 != 2)
		{
			if ((iVar1 - func_357(&(Local_112.f_24), 0, 0)) >= 0)
			{
				func_482((iVar1 - func_357(&(Local_112.f_24), 0, 0)));
				func_478(iVar7, iVar6, (iVar1 - func_357(&(Local_112.f_24), 0, 0)), 1, func_481(-1));
			}
			else
			{
				func_478(iVar7, iVar6, 0, 1, func_481(-1));
			}
		}
		else if ((iVar1 - func_357(&(Local_112.f_24), 0, 0)) >= 0)
		{
			func_482((iVar1 - func_357(&(Local_112.f_24), 0, 0)));
			func_478(iVar7, iVar6, (iVar1 - func_357(&(Local_112.f_24), 0, 0)), 1, "SYG_GOTOTIMER");
		}
		else
		{
			func_478(iVar7, iVar6, 0, 1, "SYG_GOTOTIMER");
		}
	}
	else if (!func_376(PLAYER::PLAYER_ID(), 0))
	{
		Var2 = { func_431() };
		if (func_432(&Var2))
		{
			func_430();
		}
	}
}

void func_478(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)//Position - 0x1323E
{
	char* sVar0;
	
	if (func_454(0) == 0)
	{
		return;
	}
	func_480();
	func_479(iParam0, iParam1, "HUD_PARITIC", -1, 1, 4, 0, 0, 0, 0, 0, 1, 1, 0, 255, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_224(sParam4))
	{
		sVar0 = sParam4;
	}
	func_444(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0, -1);
}

void func_479(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)//Position - 0x1329E
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_446(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_445(4, iVar0);
		Global_1375006.f_3163[iVar0] = iParam0;
		Global_1375006.f_3163.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1375006.f_3163.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1375006.f_3163.f_183[iVar0] = iParam3;
		Global_1375006.f_3163.f_216[iVar0] = iParam5;
		Global_1375006.f_3163.f_194[iVar0] = iParam4;
		Global_1375006.f_3163.f_227[iVar0] = iParam6;
		Global_1375006.f_3163.f_270[iVar0] = iParam7;
		Global_1375006.f_3163.f_281[iVar0] = iParam8;
		Global_1375006.f_3163.f_292[iVar0] = iParam9;
		Global_1375006.f_3163.f_303[iVar0] = iParam10;
		Global_1375006.f_3163.f_314[iVar0] = iParam11;
		Global_1375006.f_3163.f_325[iVar0] = iParam13;
		Global_1375006.f_3163.f_336[iVar0] = iParam14;
		Global_1375006.f_3163.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && MISC::IS_PC_VERSION()) && iParam12)
		{
			Global_1375006.f_1109 = 1;
		}
	}
}

void func_480()//Position - 0x133F8
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2460544 = 1;
}

char* func_481(int iParam0)//Position - 0x1341B
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

void func_482(int iParam0)//Position - 0x13624
{
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		Global_2531497.f_4735 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!MISC::IS_BIT_SET(Global_2531497.f_4735, 1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2531497.f_4735 = 0;
			MISC::SET_BIT(&(Global_2531497.f_4735), 1);
		}
	}
}

void func_483(char* sParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x1367C
{
	if (func_484(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312585 = 19;
		Global_1312585.f_56 = iParam2;
	}
}

int func_484(char* sParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0x136A1
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
	if (func_485(sParam0, sParam1) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	func_422();
	Global_1312585 = 3;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = MISC::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	Global_1312585.f_58 = uParam3;
	Global_1312585.f_56 = uParam3;
	func_421();
	func_420(bParam2);
	func_419();
	return 1;
}

bool func_485(int iParam0, int iParam1)//Position - 0x1374B
{
	if (!func_426())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam1))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_12)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(iParam1) == MISC::GET_HASH_KEY(&(Global_1312585.f_16));
}

int func_486()//Position - 0x137A3
{
	if (Local_112.f_197 != 2)
	{
		return 1;
	}
	else if (func_908())
	{
		return 1;
	}
	else if (func_38(PLAYER::PLAYER_ID()) == 3)
	{
		return 1;
	}
	if (func_432("CAG_STARTO"))
	{
		func_430();
	}
	return 0;
}

void func_487(bool bParam0, bool bParam1)//Position - 0x137E8
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	vector3 vVar5;
	float fVar8;
	float fVar9;
	float fVar10;
	bool bVar11;
	
	if (Local_112.f_197 == 2)
	{
		if (func_38(PLAYER::PLAYER_ID()) < 2)
		{
			return;
		}
	}
	if (!bParam0)
	{
		if (!bParam1 || func_493())
		{
			HUD::GET_HUD_COLOUR(12, &uVar0, &uVar1, &uVar2, &iVar3);
		}
		else
		{
			HUD::GET_HUD_COLOUR(3, &uVar0, &uVar1, &uVar2, &iVar3);
		}
	}
	else if (Local_112.f_197 == 2)
	{
		HUD::GET_HUD_COLOUR(iLocal_2766, &uVar0, &uVar1, &uVar2, &iVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(29, &uVar0, &uVar1, &uVar2, &iVar3);
	}
	fVar4 = 0.5f;
	vVar5 = { vLocal_591 };
	fVar8 = (fLocal_598 * 2f);
	switch (Local_112.f_167)
	{
		case 0:
			fVar9 = 36.9f;
			fVar10 = 7.875f;
			fVar8 = func_492();
			vVar5 = { func_491() };
			break;
		
		case 1:
			fVar9 = 26.25f;
			fVar10 = 4.375f;
			fVar8 = func_492();
			vVar5 = { func_491() };
			break;
		
		case 2:
			fVar9 = 49.875f;
			fVar10 = 12f;
			fVar8 = func_492();
			vVar5 = { func_491() };
			break;
		
		case 3:
			fVar9 = 9.5f;
			fVar10 = 0f;
			fVar8 = func_492();
			vVar5 = { func_491() };
			break;
		
		case 4:
			fVar9 = 38.75f;
			fVar10 = 10.25f;
			fVar8 = func_492();
			vVar5 = { func_491() };
			break;
		
		case 6:
			fVar9 = 5.25f;
			fVar10 = 0f;
			fVar8 = func_492();
			vVar5 = { func_491() };
			break;
		
		case 7:
			fVar9 = 5.25f;
			fVar10 = 0.875f;
			fVar8 = func_492();
			vVar5 = { func_491() };
			break;
		
		case 8:
			fVar9 = 15.375f;
			fVar10 = 4.75f;
			fVar8 = func_492();
			vVar5 = { func_491() };
			break;
		
		case 9:
			fVar9 = 13.625f;
			fVar10 = 4.5f;
			fVar8 = 38.875f;
			vVar5 = { func_491() };
			break;
		
		case 10:
			fVar9 = 7.75f;
			fVar10 = 2f;
			fVar8 = func_492();
			vVar5 = { func_491() };
			break;
	}
	vVar5.z = (vVar5.z - fVar10);
	if (func_493())
	{
		fVar4 = (fVar4 / 2f);
	}
	if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
	{
		if (func_1010(1))
		{
			bVar11 = true;
		}
	}
	if (!func_490())
	{
		if (func_489(PLAYER::PLAYER_ID()) == 0)
		{
			if (!func_488())
			{
				if (!bParam0)
				{
					if (!MISC::IS_BIT_SET(Local_112.f_1, 3))
					{
						if (!bVar11)
						{
							GRAPHICS::_0x799017F9E3B10112(vLocal_591, fLocal_598, uVar0, uVar1, uVar2, fVar4);
						}
					}
				}
				else
				{
					GRAPHICS::DRAW_MARKER(1, vVar5, 0f, 0f, 0f, 0f, 0f, 0f, fVar8, fVar8, fVar9, uVar0, uVar1, uVar2, iVar3, 0, 0, 2, 0, 0, 0, 0);
				}
			}
		}
	}
}

bool func_488()//Position - 0x13A96
{
	return MISC::IS_BIT_SET(Global_2448961, 20);
}

int func_489(int iParam0)//Position - 0x13AA8
{
	return Global_1590446[iParam0 /*871*/].f_196;
}

bool func_490()//Position - 0x13ABB
{
	return (MISC::IS_BIT_SET(iLocal_569, 5) || MISC::IS_BIT_SET(iLocal_569, 8));
}

Vector3 func_491()//Position - 0x13ADA
{
	vector3 vVar0;
	
	switch (Local_112.f_167)
	{
		case 0:
			vVar0 = { vLocal_591 };
			vVar0.x = 1457.639f;
			vVar0.y = -2371.45f;
			break;
		
		case 1:
			vVar0 = { vLocal_591 };
			vVar0.x = -1903.733f;
			vVar0.y = 2042.75f;
			break;
		
		case 2:
			vVar0 = { vLocal_591 };
			vVar0.x = 2237.85f;
			vVar0.y = 1469f;
			break;
		
		case 3:
			vVar0 = { vLocal_591 };
			vVar0.x = -1210.197f;
			vVar0.y = -2437.739f;
			break;
		
		case 4:
			vVar0 = { vLocal_591 };
			vVar0.x = 106.968f;
			vVar0.y = 7003.605f;
			break;
		
		case 6:
			vVar0 = { vLocal_591 };
			break;
		
		case 7:
			vVar0 = { vLocal_591 };
			break;
		
		case 8:
			vVar0 = { vLocal_591 };
			vVar0.x = -2653.049f;
			vVar0.y = 1505.637f;
			break;
		
		case 9:
			vVar0 = { vLocal_591 };
			vVar0.x = -1464.237f;
			vVar0.y = 2789.826f;
			break;
		
		case 10:
			vVar0 = { vLocal_591 };
			vVar0.x = 999.892f;
			vVar0.y = -677.42f;
			break;
	}
	return vVar0;
}

float func_492()//Position - 0x13C23
{
	float fVar0;
	
	switch (Local_112.f_167)
	{
		case 0:
			fVar0 = 155.375f;
			break;
		
		case 1:
			fVar0 = 94.75f;
			break;
		
		case 2:
			fVar0 = 198.75f;
			break;
		
		case 3:
			fVar0 = 250f;
			break;
		
		case 4:
			fVar0 = 196.375f;
			break;
		
		case 7:
			fVar0 = 36f;
			break;
		
		case 6:
		case 8:
		case 9:
		case 10:
			fVar0 = 42.5f;
			break;
	}
	return fVar0;
}

int func_493()//Position - 0x13CB8
{
	if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		return MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 11);
	}
	return 0;
}

void func_494()//Position - 0x13CDD
{
	if (!MISC::IS_BIT_SET(iLocal_569, 19))
	{
		func_502();
		HUD::_0xCD74233600C4EA6B(0);
		if (func_501("SCTV_HELI_HLP"))
		{
			HUD::CLEAR_HELP(1);
		}
		func_496(&(Local_112.f_184), 1, MISC::IS_BIT_SET(Local_112.f_1, 5), 0);
		if (!func_376(PLAYER::PLAYER_ID(), 0))
		{
			MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 11);
			MISC::CLEAR_BIT(&(Global_2424073[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*421*/].f_195), 2);
			MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 14);
			func_495(PLAYER::PLAYER_ID(), 0);
		}
		MISC::SET_BIT(&iLocal_569, 19);
	}
}

void func_495(int iParam0, int iParam1)//Position - 0x13D73
{
	int iVar0;
	
	iVar0 = 0;
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset");
	}
	MISC::CLEAR_BIT(&iVar0, iParam1);
	DECORATOR::DECOR_SET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset", iVar0);
}

void func_496(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x13DB8
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	}
	if (bParam2)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_2) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_2))
		{
			iVar0 = NETWORK::NET_TO_ENT(uParam0->f_2);
			if (bParam3)
			{
				func_500(&(uParam0->f_2));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
			}
		}
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_3) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_3))
		{
			iVar1 = NETWORK::NET_TO_ENT(uParam0->f_3);
			if (bParam3)
			{
				func_500(&(uParam0->f_3));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
	}
	func_497(1, -1);
	func_8(0);
}

void func_497(bool bParam0, int iParam1)//Position - 0x13E51
{
	int iVar0;
	
	if (!func_499(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22350.f_8385)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_22350.f_8385 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_22350.f_5628[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, 0);
		Global_22350.f_5628[iVar0] = 0;
	}
	if (Global_22350.f_5614[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_22350.f_5614[iVar0] = 0;
	}
	if (Global_22350.f_5621[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_22350.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_498(&(Global_22350.f_5660[iVar0 /*10*/]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_498(var uParam0)//Position - 0x13F0F
{
	if (uParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_499(var uParam0, bool bParam1, int iParam2)//Position - 0x13F38
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_22350.f_5721[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_22350.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22350.f_5721[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_500(var uParam0)//Position - 0x13FD5
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

int func_501(char* sParam0)//Position - 0x14012
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_502()//Position - 0x14025
{
	Global_2437549.f_1155.f_10 = 0;
}

void func_503(bool bParam0)//Position - 0x14037
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		Global_1365114[iVar0 /*42*/] = -1;
		Global_1365114[iVar0 /*42*/].f_1 = func_398();
		Global_1365114[iVar0 /*42*/].f_9 = -1;
		Global_1365114[iVar0 /*42*/].f_31 = -1;
		StringCopy(&(Local_1498.f_104), "FM_AE_SORT_12", 16);
		if (Local_112.f_36[iVar0 /*4*/] > -1)
		{
			if (Local_112.f_36[iVar0 /*4*/].f_3 > 0)
			{
				Global_1365114[iVar0 /*42*/] = Local_112.f_36[iVar0 /*4*/];
				Global_1365114[iVar0 /*42*/].f_1 = Local_112.f_36[iVar0 /*4*/].f_1;
				Global_1365114[iVar0 /*42*/].f_9 = -1;
				Global_1365114[iVar0 /*42*/].f_41 = Local_112.f_36[iVar0 /*4*/].f_2;
			}
		}
		iVar0++;
	}
	if (bParam0)
	{
		if (!func_625())
		{
			if (Local_1498.f_103 != 136)
			{
				Local_1498.f_103 = 136;
			}
			else
			{
				func_623(1, 136);
			}
		}
	}
	iVar1 = 26;
	if (Local_112.f_197 == 2)
	{
		iVar1 = 27;
	}
	func_504(&Global_1365114, &uLocal_1497, iVar1, &Local_1498, &uLocal_1614, -1, 0, 0);
}

void func_504(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7)//Position - 0x14137
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	int iVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	int iVar42;
	int iVar43;
	int iVar44;
	float fVar45;
	int iVar46;
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
	struct<2> Var57;
	
	if (func_622(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_621() || iParam2 == 27)
	{
		if (func_573(uParam1, iParam2, uParam3, Global_1574182, 0, func_626(), iParam7))
		{
			func_572(1);
			if ((!func_571() && !func_570()) || MISC::IS_BIT_SET(Global_2531497.f_4588, 1))
			{
				if (func_569())
				{
					func_566();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_565(1);
						Global_1574182 = 0;
						iVar54 = -1;
						if (Global_1574403 != 1)
						{
							func_564(uParam1, 0, 0);
							if (MISC::IS_BIT_SET(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 27)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_1276(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
									if (!func_376(iVar35, 0))
									{
										if ((func_563(iVar35) || Global_2424073[iVar35 /*421*/].f_236 != -1) || func_562(iVar35))
										{
											iVar44 = iVar35;
											if (func_132(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_561(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_559(PLAYER::PLAYER_ID(), 0) && func_145(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_558())
							{
								if (func_1276(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
								}
								else
								{
									iVar35 = func_398();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_557(iVar35) && func_554(iVar35, iParam2)) && func_1276(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1590446[iVar44 /*871*/].f_211.f_6;
								Var38 = { func_549(iVar35) };
								if (iVar35 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_64(iVar35) };
								iVar37 = func_543(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
								}
								Global_1574182++;
								if ((uParam0[iVar52 /*42*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*42*/])->f_22;
								}
								if ((uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									iVar46 = (uParam0[iVar52 /*42*/])->f_31;
								}
								if ((uParam0[iVar52 /*42*/])->f_41 != -1)
								{
									iVar47 = (uParam0[iVar52 /*42*/])->f_41;
								}
								iVar43 = (uParam0[iVar52 /*42*/])->f_9;
								if (((uParam0[iVar52 /*42*/])->f_9 != -1 || (uParam0[iVar52 /*42*/])->f_22 != -1f) || (uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									if (!func_558())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_538(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_537(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*42*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_536(iVar35, 0);
								if (bVar34)
								{
									if (func_131(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
								if ((uParam0[iVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var57, "UW_TM", 16);
									StringIntConCat(&Var57, (uParam0[iVar52 /*42*/])->f_39, 16);
								}
								if (func_535(iParam5))
								{
									func_534(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_534(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								MISC::SET_BIT(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							if (func_1276(iVar35, 0, 1) && !MISC::IS_BIT_SET(iVar49, iVar35))
							{
								iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							}
							else
							{
								iVar35 = func_398();
							}
							if (func_557(iVar35))
							{
								if (func_1276(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1590446[iVar44 /*871*/].f_211.f_6;
									Var38 = { func_549(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_64(iVar35) };
									iVar37 = func_543(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
									}
									Global_1574182++;
									iVar51 = func_536(iVar35, 1);
									if (bVar34)
									{
										if (func_131(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
									func_517(iVar35, PLAYER::GET_PLAYER_NAME(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							func_514(uParam3, uParam1);
						}
						func_22(&(uParam3->f_21));
						func_513();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!MISC::IS_BIT_SET(uParam3->f_33, 7))
						{
							func_512(uParam3, uParam1);
							func_511(uParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_512(uParam3, uParam1);
						if (!MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_507(uParam3))
						{
							Global_1574403 = 1;
						}
						func_505(uParam3);
						if (Global_1574403 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574403 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_513();
			func_565(0);
			if (MISC::IS_BIT_SET(uParam3->f_33, 7))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (MISC::IS_BIT_SET(uParam3->f_33, 10))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_505(var uParam0)//Position - 0x14788
{
	if (!func_24(&(uParam0->f_21)))
	{
		func_397(&(uParam0->f_21), 0, 0);
	}
	else if (func_23(&(uParam0->f_21), 250, 0))
	{
		func_22(&(uParam0->f_21));
		func_506(0);
	}
}

void func_506(bool bParam0)//Position - 0x147C4
{
	if (bParam0)
	{
		if (Global_1574403 != 2)
		{
			Global_1574403 = 2;
		}
	}
	else
	{
		switch (Global_1574403)
		{
			case 0:
				Global_1574403 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_507(var uParam0)//Position - 0x1480A
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (iVar15 != func_398() && func_1276(iVar15, 0, 1))
	{
		Var2 = { func_64(iVar15) };
		iVar1 = func_510(uParam0, uParam0->f_37);
		if (func_509(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_508(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_508(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_508(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_508(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_508(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_508(uParam0, iVar0, 0);
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

void func_508(var uParam0, int iParam1, int iParam2)//Position - 0x14937
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_509(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x14949
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_510(var uParam0, int iParam1)//Position - 0x14959
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_511(var uParam0, bool bParam1, int iParam2)//Position - 0x14969
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "COLLAPSE"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_512(var uParam0, var uParam1)//Position - 0x149A1
{
	if (!MISC::IS_BIT_SET(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_513()//Position - 0x149D9
{
	if (Global_1574403 != 0)
	{
		Global_1574403 = 0;
	}
}

void func_514(var uParam0, var uParam1)//Position - 0x149EE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_398())
		{
			if (func_1276(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_516(uParam0->f_38[iVar0 /*2*/], 0);
					func_515(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590446[iVar0 /*871*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_515(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x14A61
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

int func_516(int iParam0, bool bParam1)//Position - 0x14A9E
{
	int iVar0;
	
	iVar0 = 65;
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

void func_517(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x14AD2
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_533() && iParam4 < func_532())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574184)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574403 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam2, sVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (MISC::IS_BIT_SET(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_531("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			func_531(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_531("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			func_531("");
			if (uParam3->f_108 == 6)
			{
				func_531("");
			}
			else
			{
				func_531(&sParam5);
			}
			func_521(uParam3, iParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (func_520(uParam3))
			{
				func_467("DPAD_FRIEND");
			}
			else if (func_519(uParam3))
			{
				func_467("DPAD_FRIEND");
			}
			else if (func_518(uParam3))
			{
				func_467("DPAD_CREW");
			}
			else
			{
				func_467("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_518(var uParam0)//Position - 0x14BFC
{
	return MISC::IS_BIT_SET(uParam0->f_33, 6);
}

bool func_519(var uParam0)//Position - 0x14C0D
{
	return MISC::IS_BIT_SET(uParam0->f_33, 5);
}

int func_520(var uParam0)//Position - 0x14C1E
{
	if (func_519(uParam0) && func_518(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_521(var uParam0, int iParam1)//Position - 0x14C3F
{
	if (func_530(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_525(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((MISC::IS_BIT_SET(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && MISC::IS_BIT_SET(Global_2424073[iParam1 /*421*/].f_411, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (func_522())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

int func_522()//Position - 0x14CC0
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_523() || func_105())
		{
			return 1;
		}
	}
	return 0;
}

int func_523()//Position - 0x14CE5
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_105();
	}
	return func_524(Global_4456448.f_154360);
}

int func_524(int iParam0)//Position - 0x14D09
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4990[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_525(int iParam0)//Position - 0x14D43
{
	if ((func_1276(iParam0, 0, 1) && func_526()) && func_124(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_526()//Position - 0x14D70
{
	if (func_47(PLAYER::PLAYER_ID()) || func_529())
	{
		if (!func_527(PLAYER::PLAYER_ID(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_527(int iParam0, int iParam1)//Position - 0x14DA0
{
	if (func_528(iParam0) == iParam1)
	{
		return func_43(iParam0);
	}
	return 0;
}

int func_528(int iParam0)//Position - 0x14DBD
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/];
	}
	return -1;
}

int func_529()//Position - 0x14DDC
{
	switch (func_145(PLAYER::PLAYER_ID()))
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

int func_530(int iParam0)//Position - 0x14E1A
{
	if (func_522())
	{
		if (func_1276(iParam0, 0, 1))
		{
			return func_132(iParam0);
		}
	}
	if ((func_1276(iParam0, 0, 1) && func_526()) && func_126(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_531(char* sParam0)//Position - 0x14E62
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_532()//Position - 0x14E70
{
	int iVar0;
	
	if (Global_1574184)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_533()//Position - 0x14E8C
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574184)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_534(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0x14EA4
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_533() && iParam3 < func_532())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574184)
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
		if (Global_1574403 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, sVar1))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
				if (MISC::IS_BIT_SET(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_531("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_467(sParam16);
				}
				else
				{
					func_531(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_531("");
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
				if (func_558())
				{
					func_531("");
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
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_467(&(uParam2->f_104));
					}
					else
					{
						func_531("");
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
					func_531("");
				}
				if (uParam2->f_108 == 6)
				{
					func_531("");
				}
				else
				{
					func_531(&sParam4);
				}
				func_521(uParam2, iParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
				{
					func_531("");
					func_531("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(iParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(iParam8);
				}
				if (func_520(uParam2))
				{
					func_467("DPAD_FRIEND");
				}
				else if (func_519(uParam2))
				{
					func_467("DPAD_FRIEND");
				}
				else if (func_518(uParam2))
				{
					func_467("DPAD_CREW");
				}
				else
				{
					func_467("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_535(int iParam0)//Position - 0x151FE
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

int func_536(int iParam0, bool bParam1)//Position - 0x15222
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_47(iParam0)) && !func_45(iParam0))
	{
		iVar0 = func_83();
	}
	iVar1 = func_130(iParam0);
	if (!iVar1 == -1)
	{
		return func_128(iVar1);
	}
	return iVar0;
}

char* func_537(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x1526C
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

int func_538(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0x153F9
{
	if (func_542(iParam3))
	{
		*fParam1 = (func_539(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_535(iParam3))
	{
		*fParam1 = (func_539(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_539(int iParam0, int iParam1)//Position - 0x15449
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
				return func_541(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_540(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_540(float fParam0)//Position - 0x154EC
{
	return (fParam0 / 1.609344f);
}

float func_541(float fParam0)//Position - 0x154FC
{
	return (fParam0 / 0.3048f);
}

int func_542(int iParam0)//Position - 0x1550C
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

int func_543(int iParam0)//Position - 0x15568
{
	int iVar0;
	
	iVar0 = func_546(iParam0);
	if (iVar0 == -1)
	{
		func_544(iParam0, 1);
		return 0;
	}
	Global_1385294[iVar0 /*5*/].f_4 = 1;
	return Global_1385294[iVar0 /*5*/].f_2;
}

void func_544(int iParam0, bool bParam1)//Position - 0x1559E
{
	if (!func_1276(iParam0, 0, 1))
	{
		return;
	}
	if (func_546(iParam0) != -1)
	{
		return;
	}
	if (Global_1385457)
	{
		if (iParam0 == Global_1385457.f_1)
		{
			return;
		}
	}
	if (func_545(iParam0))
	{
		return;
	}
	if (Global_1385495 >= 32)
	{
		return;
	}
	Global_1385462[Global_1385495] = iParam0;
	Global_1385495++;
	if (bParam1)
	{
	}
}

int func_545(int iParam0)//Position - 0x1560A
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1385495)
	{
		if (Global_1385462[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_546(int iParam0)//Position - 0x1563C
{
	int iVar0;
	
	if (!func_1276(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1385455 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1385455)
	{
		if (Global_1385294[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1385294[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1385294[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_547(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_547(int iParam0)//Position - 0x156BB
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1385455)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1385294[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1385294[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1385294[iParam0 /*5*/].f_2), 64);
			HUD::_THEFEED_ADD_TXD_REF(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1385294[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1385455)
	{
		Global_1385294[iVar32 /*5*/] = { Global_1385294[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_548(&(Global_1385294[iVar32 /*5*/]));
	Global_1385455 = (Global_1385455 - 1);
}

void func_548(var uParam0)//Position - 0x15771
{
	*uParam0 = 0;
	uParam0->f_1 = func_398();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_549(int iParam0)//Position - 0x1579E
{
	char cVar0[32];
	
	if (func_1276(iParam0, 0, 1))
	{
		Global_2507671 = { func_64(iParam0) };
		if (MISC::IS_DURANGO_VERSION())
		{
			if (func_509(Global_2507671))
			{
				if (!NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Global_2507671))
				{
					return cVar0;
				}
			}
		}
		else if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			return cVar0;
		}
		if (func_553(&Global_2507671))
		{
			Global_2507601 = { func_551(iParam0) };
			func_550(&Global_2507601, &cVar0);
		}
	}
	return cVar0;
}

void func_550(var uParam0, char* sParam1)//Position - 0x1581F
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, sParam1);
}

struct<35> func_551(int iParam0)//Position - 0x15831
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_552(iParam0))
	{
		return Global_1312905[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_64(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

int func_552(int iParam0)//Position - 0x1586D
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_553(var uParam0)//Position - 0x15883
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

int func_554(int iParam0, int iParam1)//Position - 0x158A9
{
	if (iParam1 == 26)
	{
		if ((func_46(iParam0) || func_556(iParam0)) || func_375(iParam0))
		{
			return 0;
		}
	}
	if (!func_555(iParam0))
	{
		return 0;
	}
	if ((!func_563(iParam0) && Global_2424073[iParam0 /*421*/].f_236 == -1) && !func_562(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_555(int iParam0)//Position - 0x15918
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_142, 22);
}

int func_556(int iParam0)//Position - 0x15931
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 10) || MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 9));
	}
	return 0;
}

int func_557(int iParam0)//Position - 0x1596F
{
	int iVar0;
	
	if (iParam0 == func_398())
	{
		return 0;
	}
	if (func_376(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (MISC::IS_BIT_SET(Global_1590446[iVar0 /*871*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_558()//Position - 0x159B4
{
	switch (func_145(PLAYER::PLAYER_ID()))
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
	switch (func_528(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_45(PLAYER::PLAYER_ID()))
	{
		switch (func_145(PLAYER::PLAYER_ID()))
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
	if (func_527(PLAYER::PLAYER_ID(), 236))
	{
		return 1;
	}
	return 0;
}

int func_559(int iParam0, int iParam1)//Position - 0x15AF0
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 && func_560(Global_1628955[iParam0 /*614*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1)
	{
		if (func_560(Global_1628955[iParam0 /*614*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_560(int iParam0)//Position - 0x15B56
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
	return func_155(iParam0, 0);
	return 0;
}

void func_561(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x15BB0
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1276(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_376(iVar1, 0))
			{
				if ((func_563(iVar1) || Global_2424073[iVar1 /*421*/].f_236 != -1) || func_562(iVar1))
				{
					if (func_246(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_562(int iParam0)//Position - 0x15C3A
{
	return Global_1590446[iParam0 /*871*/].f_196 != 0;
}

int func_563(int iParam0)//Position - 0x15C4F
{
	if (func_1276(iParam0, 0, 1))
	{
		if (func_1276(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, PLAYER::PLAYER_ID()) || func_145(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_564(var uParam0, int iParam1, int iParam2)//Position - 0x15C90
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_565(bool bParam0)//Position - 0x15CBE
{
	if (bParam0)
	{
		if (Global_1373497.f_2 == 0)
		{
			Global_1373497.f_2 = 1;
		}
	}
	else if (Global_1373497.f_2 == 1)
	{
		Global_1373497.f_2 = 0;
	}
}

void func_566()//Position - 0x15CF0
{
	if (MISC::IS_BIT_SET(Global_2531497.f_4588, 1))
	{
		if (func_568())
		{
			func_567();
		}
	}
}

void func_567()//Position - 0x15D12
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2437549.f_2708[iVar0 /*80*/].f_2 != 0)
		{
			Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			func_113(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

bool func_568()//Position - 0x15D5D
{
	return Global_2437549.f_2708[0 /*80*/].f_1 != 0;
}

int func_569()//Position - 0x15D73
{
	if (MISC::IS_BIT_SET(Global_2531497.f_4588, 0) && func_568())
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2531497.f_4588, 1) && func_568())
	{
		return 1;
	}
	return 0;
}

int func_570()//Position - 0x15DB4
{
	if (func_568())
	{
		if (func_71(Global_2437549.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_571()//Position - 0x15DDB
{
	if (func_568())
	{
		if (func_84(Global_2437549.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_572(int iParam0)//Position - 0x15E02
{
	if (Global_1373497.f_1 != Global_1373497)
	{
		Global_1373497.f_1 = Global_1373497;
	}
	if (Global_1373497 != iParam0)
	{
		Global_1373497 = iParam0;
	}
}

int func_573(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x15E30
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	char* sVar9;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_620(iParam1);
	if (iParam1 == 20)
	{
		bVar5 = true;
	}
	fVar7 = func_619();
	iVar8 = -1;
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_618())
		{
			if (func_617() > 0 && Global_1574184)
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
		if (!func_601())
		{
			func_600(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (MISC::IS_BIT_SET(Global_2531497.f_4591, 26))
	{
		func_600(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_24(&(uParam2->f_19)))
	{
		if (func_617() == 1)
		{
			func_599(bVar6, uParam0, 0);
			func_397(&(uParam2->f_19), 0, 0);
			func_600(uParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2531497.f_4592), 5);
		}
	}
	if (func_24(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_23(&(uParam2->f_19), 10000, 0) || (func_617() == 0 && !bParam5))
		{
			func_600(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_598();
				if (iParam1 == 26 || iParam1 == 27)
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_598();
					if (iParam1 == 26 || iParam1 == 27)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (func_599(bVar6, uParam0, 0))
				{
					func_564(uParam0, 0, 0);
					sVar4 = func_596(iParam1, &(Global_4456448.f_154367), bParam4);
					Var0 = { func_594(iParam1) };
					if (bParam4)
					{
						func_591(uParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_585(uParam0, func_588(uParam2), func_586(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar9 = func_581(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam6))
						{
							sVar9 = iParam6;
						}
						func_579(uParam0, sVar9, func_580(), -1);
					}
					else if (func_522())
					{
						uParam2->f_34 = Global_1574183;
						func_591(uParam0, sVar4, &Var0, 1, -1, Global_1574183, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_574(iParam1);
						uParam2->f_34 = Global_1574183;
						func_591(uParam0, sVar4, "", 0, iVar8, Global_1574183, 1);
					}
					else
					{
						iVar8 = func_574(iParam1);
						func_591(uParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				Global_1574182 = uParam3;
				Global_1574181 = 1;
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574183)
					{
						MISC::CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_574(int iParam0)//Position - 0x1610F
{
	int iVar0;
	
	iVar0 = -1;
	if (func_578())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 39:
			iVar0 = 22;
			break;
		
		case 0:
		case 30:
		case 29:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
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
		
		case 25:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_577(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_576(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_575(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_226())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_575(int iParam0)//Position - 0x16268
{
	return Global_2424073[iParam0 /*421*/].f_115 == 4;
}

bool func_576(int iParam0)//Position - 0x1627D
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

bool func_577(int iParam0)//Position - 0x16292
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

bool func_578()//Position - 0x162A7
{
	return Global_4456448.f_1 == 0;
}

void func_579(var uParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x162B7
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(iParam2))
		{
			func_467(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_467("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_580()//Position - 0x16316
{
	switch (func_145(PLAYER::PLAYER_ID()))
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

char* func_581(var uParam0)//Position - 0x1636E
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
	switch (func_145(PLAYER::PLAYER_ID()))
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
			if (func_583())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_234(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_234(1))
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
			if (func_582(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_582(int iParam0)//Position - 0x1679A
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

bool func_583()//Position - 0x167CC
{
	return (func_584() && func_163(func_248()));
}

bool func_584()//Position - 0x167E5
{
	return Global_1590446[PLAYER::PLAYER_ID() /*871*/] == 148;
}

void func_585(var uParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x167FB
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(iParam2))
		{
			func_467(sParam1);
		}
		else if (func_528(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_467("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_586(var uParam0)//Position - 0x16882
{
	int iVar0;
	
	iVar0 = func_528(PLAYER::PLAYER_ID());
	if (func_625())
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
			switch (func_587())
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

int func_587()//Position - 0x16A2D
{
	if (func_528(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2531497.f_4819;
	}
	return -1;
}

char* func_588(var uParam0)//Position - 0x16A50
{
	int iVar0;
	
	iVar0 = func_528(PLAYER::PLAYER_ID());
	if (func_625())
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
			if (func_590() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_590() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_587())
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
			if (func_589() == 1)
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

int func_589()//Position - 0x16C45
{
	return Global_2531497.f_4822;
}

int func_590()//Position - 0x16C54
{
	if (func_528(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2531497.f_4817;
	}
	return -1;
}

void func_591(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x16C77
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_531(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_467(sParam1);
		}
		if (func_618() && iParam6)
		{
			if (func_593())
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
			func_467(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (func_592(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
			else if (func_81())
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(220);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_592(int iParam0)//Position - 0x16D38
{
	if (func_577(iParam0) || func_576(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_593()//Position - 0x16D5A
{
	return Global_1574184;
}

struct<4> func_594(int iParam0)//Position - 0x16D66
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_595(PLAYER::PLAYER_ID()) || func_575(PLAYER::PLAYER_ID()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_40, 16);
			break;
	}
	if (func_522() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_40, 16);
	}
	return Var0;
}

bool func_595(int iParam0)//Position - 0x16E01
{
	return Global_2424073[iParam0 /*421*/].f_115 == 5;
}

int func_596(int iParam0, int iParam1, bool bParam2)//Position - 0x16E16
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_522() || MISC::IS_STRING_NULL_OR_EMPTY(iParam1)))
	{
		uVar0 = func_597();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_1574422 == 0)
		{
			Global_1574422 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1))
	{
		if (Global_1574422 == 1)
		{
			Global_1574422 = 0;
		}
		return iParam1;
	}
	else
	{
		if (Global_1574422 == 0)
		{
			Global_1574422 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 30:
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
			case 25:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 21:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return iParam1;
}

char* func_597()//Position - 0x16F7A
{
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF";
	}
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW())
	{
		return "HUD_LBD_FMC";
	}
	if (NETWORK::NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS";
	}
	if (NETWORK::NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_598()//Position - 0x16FBE
{
	Global_42316 = 1;
}

bool func_599(bool bParam0, var uParam1, bool bParam2)//Position - 0x16FCA
{
	if (bParam0)
	{
		*uParam1 = unk_0x67D02A194A2FC2BD("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x67D02A194A2FC2BD("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x67D02A194A2FC2BD("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1);
}

void func_600(var uParam0, var uParam1, bool bParam2)//Position - 0x1700A
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574182 = 0;
	func_513();
	Global_1574181 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_24(&(uParam1->f_19)))
		{
			func_22(&(uParam1->f_19));
			MISC::CLEAR_BIT(&(Global_2531497.f_4592), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
	}
	if (MISC::IS_BIT_SET(uParam1->f_33, 0))
	{
		MISC::CLEAR_BIT(&(uParam1->f_33), 0);
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
}

int func_601()//Position - 0x1707C
{
	if (func_616())
	{
		return 0;
	}
	if (func_615())
	{
		return 0;
	}
	if (!func_613())
	{
		return 0;
	}
	if (!func_611())
	{
		return 0;
	}
	if (func_610(8, -1))
	{
		return 0;
	}
	if (func_617() == 2)
	{
		return 0;
	}
	if (Global_2531497.f_4543)
	{
		return 0;
	}
	if (func_455())
	{
		return 0;
	}
	else if (!func_607(PLAYER::PLAYER_ID(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_606(1) || func_604(1)) || Global_22211.f_124) || Global_22211)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_603() && Global_1695601 == 2)
	{
		return 0;
	}
	if (func_111(PLAYER::PLAYER_ID()) && !func_603())
	{
		return 0;
	}
	if (Global_1662552)
	{
		return 0;
	}
	if (Global_1662557)
	{
		return 0;
	}
	if (func_235(0))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 4))
	{
		return 0;
	}
	if (Global_1366560)
	{
		return 0;
	}
	if ((Global_1688874.f_705.f_5 || Global_1691685.f_705.f_5) || Global_1687917.f_705.f_5)
	{
		return 0;
	}
	if ((Global_1696566.f_711.f_5 || Global_1696566.f_731.f_711.f_5) || Global_1696566.f_1469.f_711.f_5)
	{
		return 0;
	}
	if (func_602(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1366595 || Global_1366596) || Global_1366597)
	{
		return 0;
	}
	return 1;
}

bool func_602(int iParam0)//Position - 0x17247
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309.f_4, 6);
}

bool func_603()//Position - 0x1726F
{
	return (MISC::IS_BIT_SET(Global_4456448.f_30, 12) && MISC::IS_BIT_SET(Global_1695602, 0));
}

int func_604(bool bParam0)//Position - 0x17291
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_605(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22211.f_130)
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

int func_605(int iParam0)//Position - 0x1737C
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_606(bool bParam0)//Position - 0x173D9
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

int func_607(int iParam0, bool bParam1, bool bParam2)//Position - 0x17402
{
	if (bParam1)
	{
		if (func_608(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590446[iParam0 /*871*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_608(int iParam0)//Position - 0x17434
{
	return func_609(iParam0);
}

bool func_609(int iParam0)//Position - 0x17442
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_13.f_1, 0);
}

bool func_610(int iParam0, int iParam1)//Position - 0x1745C
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1373500.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1373500.f_1048, iParam0);
}

int func_611()//Position - 0x17497
{
	if (func_612() == 0)
	{
		return 1;
	}
	return 0;
}

int func_612()//Position - 0x174AC
{
	return Global_1312467.f_18;
}

int func_613()//Position - 0x174BA
{
	if (func_614())
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

bool func_614()//Position - 0x174F9
{
	return Global_1312439;
}

bool func_615()//Position - 0x17505
{
	return Global_1590446[PLAYER::PLAYER_ID() /*871*/] == 5;
}

bool func_616()//Position - 0x1751A
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_617()//Position - 0x1752F
{
	return Global_1373500.f_68;
}

int func_618()//Position - 0x1753D
{
	if (Global_1574183 > 16)
	{
		return 1;
	}
	return 0;
}

float func_619()//Position - 0x17553
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_620(int iParam0)//Position - 0x17577
{
	switch (iParam0)
	{
		case 20:
		case 26:
		case 27:
		case 39:
			return 1;
		
		default:
	}
	return 0;
}

int func_621()//Position - 0x175A3
{
	if (func_626())
	{
		return 1;
	}
	if (func_375(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_625())
	{
		return 1;
	}
	if (func_47(PLAYER::PLAYER_ID()))
	{
		switch (func_528(PLAYER::PLAYER_ID()))
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
				if (!func_436(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_436(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_436(PLAYER::PLAYER_ID()))
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

int func_622(int iParam0)//Position - 0x1767E
{
	if (iParam0 == 27)
	{
		if ((func_47(PLAYER::PLAYER_ID()) && !func_45(PLAYER::PLAYER_ID())) && !func_527(PLAYER::PLAYER_ID(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_144(PLAYER::PLAYER_ID(), 0) && func_45(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_38(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_623(bool bParam0, int iParam1)//Position - 0x176EF
{
	if (bParam0)
	{
		if (!Global_1590319)
		{
			if (!func_1068(0) && !func_1068(func_624(iParam1)))
			{
				Global_1590319 = 1;
			}
		}
	}
	else if (Global_1590319)
	{
		Global_1590319 = 0;
	}
}

int func_624(int iParam0)//Position - 0x17731
{
	switch (iParam0)
	{
		case 131:
			return 10;
		
		case 132:
			return 1;
		
		case 133:
			return 2;
		
		case 136:
			return 11;
		
		case 138:
			return 5;
		
		case 139:
			return 6;
		
		case 129:
			return 8;
		
		case 140:
			return 4;
		
		case 141:
			return 9;
		
		case 144:
			return 3;
		
		case 146:
			return 7;
		
		case 236:
			return 12;
		
		default:
	}
	return Global_262145.f_23622;
}

bool func_625()//Position - 0x177C4
{
	return Global_1590319;
}

int func_626()//Position - 0x177D0
{
	if (func_627(PLAYER::PLAYER_ID()))
	{
		return Global_1319097;
	}
	return 0;
}

int func_627(int iParam0)//Position - 0x177EB
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_376(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

void func_628()//Position - 0x1780E
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	
	bVar4 = true;
	bVar5 = true;
	if (iLocal_2780 == 1 && !func_455())
	{
		func_691(&vLocal_2038);
	}
	switch (iLocal_2780)
	{
		case 0:
			if (func_690())
			{
				iLocal_2780++;
			}
			break;
		
		case 1:
			iVar0 = PLAYER::GET_PLAYER_PED(Local_112.f_184.f_7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
				vLocal_2038.f_2 = { vVar1 };
			}
			else if (!func_19(vLocal_2038.f_2))
			{
				vVar1 = { vLocal_2038.f_2 };
			}
			vLocal_2038.y = NETWORK::NET_TO_ENT(Local_112.f_184.f_2);
			if (ENTITY::DOES_ENTITY_EXIST(vLocal_2038.y))
			{
				if (!ENTITY::IS_ENTITY_DEAD(vLocal_2038.y, 0))
				{
					if (!func_682())
					{
						if (func_19(vLocal_2775))
						{
							if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
								{
									vLocal_2775 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
									fLocal_2778 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
								}
							}
						}
					}
					NETWORK::SET_ENTITY_LOCALLY_INVISIBLE(vLocal_2038.y);
					if (Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_222 == 99)
					{
						if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 11))
						{
							GRAPHICS::SET_NIGHTVISION(false);
							if (!HUD::_0xC2D2AD9EAAE265B8())
							{
								HUD::_0xCD74233600C4EA6B(1);
							}
							NETWORK::_0x267C78C60E806B9A(vLocal_2038.y, 1);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), vLocal_2038.y, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(vLocal_2038.y, "chassis"), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 11);
							MISC::SET_BIT(&(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_195), 2);
							MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 14);
							func_681(PLAYER::PLAYER_ID(), 0);
							func_676();
						}
						if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 12))
						{
							func_667(PLAYER::PLAYER_ID(), 0, 8192, 0);
							ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
							MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 12);
						}
						func_658();
						func_656();
						if (func_682())
						{
							func_667(PLAYER::PLAYER_ID(), 1, 0, 0);
							iLocal_2780++;
						}
						else
						{
							func_639(&(Local_112.f_184), &vLocal_2038, vLocal_2038.y, vVar1, bVar5, bVar4);
							if (bVar4)
							{
								if (!MISC::IS_BIT_SET(iLocal_569, 18) && func_631(0, 1, 1, 0))
								{
									func_630("SCTV_HELI_HLP", 30000);
									if (Local_112.f_197 != 2)
									{
										func_629(1);
									}
									MISC::SET_BIT(&iLocal_569, 18);
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_629(int iParam0)//Position - 0x17A9B
{
	HUD::_SET_HELP_MESSAGE_TEXT_STYLE(3, 21, 200, 0, 0);
	if (iParam0 && !func_568())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_630(char[4] cParam0, int iParam1)//Position - 0x17ACA
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam1);
}

int func_631(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x17AE1
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_638())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_616())
	{
		return 0;
	}
	if (func_637())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_607(PLAYER::PLAYER_ID(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_636(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_635())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (Global_1574181)
	{
		return 0;
	}
	if (func_634())
	{
		return 0;
	}
	if (func_633())
	{
		return 0;
	}
	if (func_455())
	{
		return 0;
	}
	if (Global_73784)
	{
		return 0;
	}
	if (Global_2541150)
	{
		return 0;
	}
	if (func_632(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_632(int iParam0)//Position - 0x17BDE
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2508348;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
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

bool func_633()//Position - 0x17C4A
{
	return Global_2448961.f_591;
}

bool func_634()//Position - 0x17C59
{
	return Global_2448961.f_744;
}

bool func_635()//Position - 0x17C68
{
	return Global_2437549.f_3032.f_578;
}

int func_636(int iParam0)//Position - 0x17C7A
{
	if (Global_2424073[iParam0 /*421*/].f_208 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_637()//Position - 0x17C96
{
	return MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_39.f_18, 0);
}

int func_638()//Position - 0x17CB2
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_639(var uParam0, var uParam1, int iParam2, vector3 vParam3, bool bParam6, bool bParam7)//Position - 0x17CD4
{
	switch (func_655(uParam1))
	{
		case 0:
			if (func_654() || bParam6)
			{
				func_653(uParam1, 1);
			}
			break;
		
		case 1:
			if (!CAM::DOES_CAM_EXIST(*uParam1))
			{
				*uParam1 = CAM::CREATE_CAM("default_scripted_camera", 0);
			}
			else
			{
				INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
				CAM::ATTACH_CAM_TO_ENTITY(*uParam1, iParam2, 0f, 2.75f, -1.25f, 1);
				CAM::SET_CAM_ACTIVE(*uParam1, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				func_8(1);
				func_653(uParam1, 2);
			}
			break;
		
		case 2:
			if (CAM::DOES_CAM_EXIST(*uParam1))
			{
				if (!CAM::IS_CAM_ACTIVE(*uParam1))
				{
					CAM::ATTACH_CAM_TO_ENTITY(*uParam1, iParam2, 0f, 2.75f, -1.25f, 1);
					CAM::SET_CAM_ACTIVE(*uParam1, 1);
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				}
				else
				{
					CAM::POINT_CAM_AT_COORD(*uParam1, vParam3);
				}
				if (bParam7)
				{
					func_640(uParam1);
				}
				if (func_654() && !bParam6)
				{
					func_496(uParam0, 1, 1, 1);
					func_653(uParam1, 0);
				}
			}
			else
			{
				func_653(uParam1, 0);
			}
			break;
		
		default:
			break;
	}
}

void func_640(var uParam0)//Position - 0x17DEE
{
	struct<9> Var0;
	
	Var0 = { func_652() };
	if (func_650(0, -1, 0))
	{
		switch (uParam0->f_694)
		{
			case 0:
				func_648(&(uParam0->f_7));
				func_647(2, 202, "HUD_QUIT", &(uParam0->f_7), 1, 359);
				uParam0->f_694++;
				break;
			
			case 1:
				func_641(&(uParam0->f_6), &Var0, &(uParam0->f_7), 0);
				break;
			}
	}
}

void func_641(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x17E5B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 1 || PAD::_0x6CD79468A1E595C6(2))
	{
		*uParam2 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		func_646(uParam2);
	}
	if (Global_1315712 < 2)
	{
		func_645(1);
	}
	if (*uParam2 == 0)
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			*uParam0 = unk_0x67D02A194A2FC2BD("instructional_buttons");
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_680)
			{
				if (MISC::IS_BIT_SET(uParam2->f_676, iVar0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
					if (!MISC::IS_BIT_SET(uParam2->f_677, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*56*/].f_53;
						iVar2 = uParam2->f_1[iVar0 /*56*/].f_54;
						iVar3 = uParam2->f_1[iVar0 /*56*/].f_55;
						func_644(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar1, iVar2, true));
						if (iVar3 < 359)
						{
							func_644(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0 /*56*/].f_53;
						iVar5 = uParam2->f_1[iVar0 /*56*/].f_54;
						func_644(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(iVar4, iVar5, true));
					}
					if (MISC::IS_BIT_SET(uParam2->f_674, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (MISC::IS_BIT_SET(uParam2->f_675, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*56*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[iVar0 /*56*/].f_37));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_467(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						if (MISC::IS_BIT_SET(uParam2->f_678, iVar0))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam2->f_1[iVar0 /*56*/].f_54);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(359);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
					func_644(&(uParam2->f_1[iVar0 /*56*/]));
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[iVar0 /*56*/].f_16)))
					{
						func_644(&(uParam2->f_1[iVar0 /*56*/].f_16));
					}
					if (MISC::IS_BIT_SET(uParam2->f_674, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (MISC::IS_BIT_SET(uParam2->f_675, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*56*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[iVar0 /*56*/].f_37));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_467(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(359);
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar0++;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam2->f_686);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			*uParam2 = 1;
		}
	}
	uParam2->f_682 = 0.05f;
	uParam2->f_683 = 0.045f;
	uParam2->f_684 = 0f;
	uParam2->f_685 = 0f;
	if (*uParam2 == 1)
	{
		func_643(*uParam0, uParam1);
	}
	func_642();
}

void func_642()//Position - 0x181D8
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_643(var uParam0, var uParam1)//Position - 0x181F6
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_644(char* sParam0)//Position - 0x18215
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_645(int iParam0)//Position - 0x18223
{
	Global_1315712 = iParam0;
}

void func_646(var uParam0)//Position - 0x18231
{
	uParam0->f_679 = 0;
}

void func_647(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x1823F
{
	int iVar0;
	
	if (uParam3->f_680 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_680;
	StringCopy(&(uParam3->f_1[iVar0 /*56*/].f_32), sParam2, 16);
	MISC::SET_BIT(&(uParam3->f_676), iVar0);
	uParam3->f_1[iVar0 /*56*/].f_53 = iParam0;
	uParam3->f_1[iVar0 /*56*/].f_54 = iParam1;
	uParam3->f_1[iVar0 /*56*/].f_55 = iParam5;
	if (bParam4)
	{
		MISC::SET_BIT(&(uParam3->f_678), iVar0);
		if (iParam5 < 359)
		{
		}
	}
	uParam3->f_680++;
}

void func_648(var uParam0)//Position - 0x182BC
{
	func_649(uParam0);
	uParam0->f_679 = 1;
}

void func_649(var uParam0)//Position - 0x182D0
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*56*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*56*/].f_36 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_37), "", 64);
		uParam0->f_1[iVar0 /*56*/].f_53 = 2;
		uParam0->f_1[iVar0 /*56*/].f_54 = 359;
		uParam0->f_1[iVar0 /*56*/].f_55 = 359;
		iVar0++;
	}
	uParam0->f_674 = 0;
	uParam0->f_675 = 0;
	uParam0->f_676 = 0;
	uParam0->f_678 = 0;
	uParam0->f_677 = 0;
	uParam0->f_679 = 0;
	uParam0->f_680 = 0;
	uParam0->f_682 = 0f;
	uParam0->f_683 = 0f;
	uParam0->f_684 = 0f;
	uParam0->f_685 = 0f;
	uParam0->f_686 = 1f;
}

bool func_650(char* sParam0, int iParam1, bool bParam2)//Position - 0x183A4
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_499(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22350.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_5635[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_22350.f_5635[iVar0 /*4*/]), 9);
		Global_22350.f_5628[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_22350.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
	Global_22350.f_5614[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", 0);
		Global_22350.f_5621[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22350.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_651(&(Global_22350.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_651(var uParam0)//Position - 0x1849A
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = unk_0x67D02A194A2FC2BD(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

struct<9> func_652()//Position - 0x1853C
{
	struct<9> Var0;
	
	Var0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

void func_653(var uParam0, int iParam1)//Position - 0x18580
{
	uParam0->f_5 = iParam1;
}

int func_654()//Position - 0x1858E
{
	if ((!PAD::_IS_INPUT_DISABLED(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 231)) || (PAD::_IS_INPUT_DISABLED(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 44)))
	{
		return 1;
	}
	return 0;
}

int func_655(var uParam0)//Position - 0x185C7
{
	return uParam0->f_5;
}

void func_656()//Position - 0x185D3
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_657();
}

void func_657()//Position - 0x185E3
{
	Global_22211.f_134 = 1;
}

void func_658()//Position - 0x185F1
{
	func_666();
	func_659(0);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
}

void func_659(int iParam0)//Position - 0x1860C
{
	if (func_665())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_664(0))
		{
			func_660(iParam0);
		}
		MISC::SET_BIT(&Global_7357, 2);
	}
}

void func_660(int iParam0)//Position - 0x1863F
{
	if (func_665())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_663())
		{
			func_662(1, 1);
		}
		else
		{
			func_662(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7357, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7356, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 30);
	}
	if (!func_661())
	{
		Global_19486.f_1 = 3;
	}
}

int func_661()//Position - 0x186C9
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_662(bool bParam0, bool bParam1)//Position - 0x186F0
{
	if (bParam0)
	{
		if (func_664(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19423);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
}

bool func_663()//Position - 0x18764
{
	return MISC::IS_BIT_SET(Global_1687880, 5);
}

int func_664(int iParam0)//Position - 0x18775
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_7356, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_665()//Position - 0x187CF
{
	return MISC::IS_BIT_SET(Global_1687880, 19);
}

void func_666()//Position - 0x187E1
{
	Global_2437549.f_1155.f_10 = 1;
}

void func_667(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x187F3
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	int iVar26;
	int iVar27;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_675())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		bVar24 = iParam2 & 16777216 != false;
		if (!func_611())
		{
			bVar25 = false;
			if (bParam1 == 1)
			{
				bVar25 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar25 = true;
			}
			if (bVar9 == 1)
			{
				bVar25 = true;
			}
			if (bVar25)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), 0))
			{
				return;
			}
			iVar26 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				}
				else if (bVar13 || (!func_376(PLAYER::PLAYER_ID(), 0) && !func_112()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar26, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar18)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(0);
					}
					Global_2424073[iParam0 /*421*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				func_672(0, 0, 0);
				if (bVar24)
				{
					STREAMING::CLEAR_FOCUS();
				}
				if (!func_671(iVar26) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar26))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar26, true, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar26))
				{
					if (!bVar20)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar26, false);
					}
					ENTITY::_SET_ENTITY_SOMETHING(iVar26, 1);
				}
				else if (!bVar20)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar26, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar26, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(iParam0, 0);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar26) && PED::_HAS_STREAMED_PED_ASSETS_LOADED(iVar26))
				{
					PED::_0x4668D80430D6C299(iVar26);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar26, 1);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_670();
					func_669();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar22)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2424073[iParam0 /*421*/].f_245 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
				if (Global_2405071.f_2670)
				{
					Global_2405071.f_2670 = 0;
				}
			}
			else
			{
				if (!func_671(iVar26) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar26))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar26, !bVar14, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar26))
					{
						if (!bVar20)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar26, bVar15);
						}
						if (!bVar15)
						{
							ENTITY::_SET_ENTITY_SOMETHING(iVar26, 1);
						}
					}
					if (func_668(Global_4456448.f_190930))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar26, true);
					}
				}
				if (Global_1312850)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar26, bVar16);
				if (bVar2)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar26) && !PED::IS_PED_IN_ANY_VEHICLE(iVar26, 0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar26);
					}
				}
			}
			iVar27 = 0;
			if (bVar1)
			{
				iVar27 |= 2;
			}
			if (bVar2)
			{
				iVar27 |= 4;
			}
			if (bVar3)
			{
				iVar27 |= 8;
			}
			if (bVar4)
			{
				iVar27 |= 16;
			}
			if (bVar5)
			{
				iVar27 |= 32;
			}
			if (bVar6)
			{
				iVar27 |= 64;
			}
			if (bVar7)
			{
				iVar27 |= 128;
			}
			if (bVar8)
			{
				iVar27 |= 256;
			}
			if (bVar9)
			{
				iVar27 |= 512;
			}
			if (bVar10)
			{
				iVar27 |= 1024;
			}
			if (bVar11)
			{
				iVar27 |= 2048;
			}
			if (bVar12)
			{
				iVar27 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar27);
		}
	}
}

bool func_668(int iParam0)//Position - 0x18C5F
{
	return iParam0 == 17;
}

void func_669()//Position - 0x18C6C
{
	vector3 vVar0;
	
	Global_2437549.f_1232 = 0;
	Global_2437549.f_1233 = 0;
	Global_2437549.f_1234 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437549.f_1239 = -1;
	Global_2437549.f_1240 = 0;
	Global_2405071.f_2681 = { vVar0 };
}

void func_670()//Position - 0x18CB9
{
	Global_2405071.f_692 = 0;
	Global_2405071.f_2724 = 0;
	Global_2405071.f_510 = 0;
	Global_2405071.f_598 = 0;
	Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_207 = 0;
	Global_2405071.f_2679 = 0;
}

int func_671(int iParam0)//Position - 0x18CF7
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_672(int iParam0, int iParam1, int iParam2)//Position - 0x18D28
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_674();
			}
			else if (!MISC::IS_BIT_SET(Global_2359302.f_67, 1))
			{
				if (MISC::IS_BIT_SET(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::_0x2A2173E46DAECD12(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2359302.f_67), 1);
			}
		}
		if (func_376(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(iParam0, iParam1, 1);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(iParam0, iParam1);
		func_673(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_673(int iParam0, int iParam1)//Position - 0x18DFE
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
	}
}

void func_674()//Position - 0x18E1A
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!MISC::IS_BIT_SET(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = CAM::_0xEE778F8C7E1142E2(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2359302.f_67), 2);
			MISC::SET_BIT(&(Global_2359302.f_67), 0);
		}
	}
}

int func_675()//Position - 0x18E75
{
	if (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_35 && !Global_2449755.f_2846.f_214 == -1)
	{
		return 1;
	}
	return 0;
}

void func_676()//Position - 0x18EA3
{
	if (func_680() || func_679())
	{
		func_678();
		func_677();
	}
}

void func_677()//Position - 0x18EC4
{
	if ((!func_455() && !func_633()) && Global_2449754)
	{
		Global_4456448.f_154360 = 0;
	}
}

void func_678()//Position - 0x18EF2
{
	Global_2448961.f_656 = 1;
}

var func_679()//Position - 0x18F02
{
	return Global_2448961.f_635;
}

bool func_680()//Position - 0x18F11
{
	return MISC::IS_BIT_SET(Global_2448961.f_2, 11);
}

void func_681(int iParam0, int iParam1)//Position - 0x18F25
{
	int iVar0;
	
	iVar0 = 0;
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset");
	}
	MISC::SET_BIT(&iVar0, iParam1);
	DECORATOR::DECOR_SET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset", iVar0);
}

int func_682()//Position - 0x18F6A
{
	if (func_689(&vLocal_2038))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_112.f_1, 3))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_112.f_1, 5))
	{
		return 1;
	}
	if (func_683())
	{
		return 1;
	}
	if (func_1010(0))
	{
		return 1;
	}
	if (func_376(PLAYER::PLAYER_ID(), 0))
	{
		return 1;
	}
	if (Local_112.f_184.f_7 == func_398())
	{
		return 1;
	}
	return 0;
}

int func_683()//Position - 0x18FD9
{
	if (MISC::IS_BIT_SET(Global_2531497.f_393.f_5, 0))
	{
		return 1;
	}
	if (func_685() && Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_98 != 3)
	{
		return 1;
	}
	if (func_684() && Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_98 != 3)
	{
		return 1;
	}
	if (Global_2394768)
	{
		return 1;
	}
	if (Global_1574647.f_20)
	{
		return 1;
	}
	return 0;
}

bool func_684()//Position - 0x1904D
{
	return MISC::IS_BIT_SET(Global_2448961, 5);
}

int func_685()//Position - 0x1905E
{
	if (((func_688() || func_488()) || func_687()) || func_686())
	{
		return 1;
	}
	return 0;
}

bool func_686()//Position - 0x19090
{
	return MISC::IS_BIT_SET(Global_2448961, 1);
}

bool func_687()//Position - 0x190A1
{
	return MISC::IS_BIT_SET(Global_2448961, 2);
}

bool func_688()//Position - 0x190B2
{
	return Global_2448961.f_598;
}

bool func_689(var uParam0)//Position - 0x190C1
{
	return MISC::IS_BIT_SET(uParam0->f_696, 2);
}

int func_690()//Position - 0x190D3
{
	if (!func_6(&(Local_112.f_184)))
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0))
	{
		return 0;
	}
	if (Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 < 3)
	{
		return 0;
	}
	if (!func_1276(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Local_112.f_1, 3))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Local_112.f_1, 5))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Local_112.f_1, 12))
	{
		return 0;
	}
	if (Local_112.f_184.f_7 == func_398())
	{
		return 0;
	}
	if (!func_1276(Local_112.f_184.f_7, 1, 1))
	{
		return 0;
	}
	if (Local_112.f_184.f_7 == PLAYER::PLAYER_ID())
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(iLocal_569, 21))
	{
		return 0;
	}
	if (func_455())
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (Local_112.f_165 < 2)
	{
		return 0;
	}
	return 1;
}

void func_691(var uParam0)//Position - 0x191C7
{
	if (!MISC::IS_BIT_SET(uParam0->f_696, 2))
	{
		switch (uParam0->f_695)
		{
			case 0:
				if (!HUD::IS_PAUSE_MENU_ACTIVE())
				{
					if (func_694(uParam0))
					{
						func_693(uParam0);
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("SPEC_LEAVE", "SPEC_SURE", 36, 0, 0, -1, 0, 0, 1, 0);
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 201))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "EXIT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							uParam0->f_695++;
						}
					}
					else
					{
						func_692(uParam0);
					}
				}
				break;
			
			case 1:
				MISC::SET_BIT(&(uParam0->f_696), 2);
				break;
			}
	}
}

void func_692(var uParam0)//Position - 0x1925C
{
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_696, 0))
		{
			MISC::SET_BIT(&(uParam0->f_696), 0);
		}
		if (!MISC::IS_BIT_SET(uParam0->f_696, 1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			MISC::SET_BIT(&(uParam0->f_696), 1);
		}
	}
}

void func_693(var uParam0)//Position - 0x192B6
{
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202))
	{
		if (MISC::IS_BIT_SET(uParam0->f_696, 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			MISC::CLEAR_BIT(&(uParam0->f_696), 0);
		}
	}
}

bool func_694(var uParam0)//Position - 0x192F7
{
	return MISC::IS_BIT_SET(uParam0->f_696, 0);
}

void func_695()//Position - 0x19309
{
	vector3 vVar0;
	
	if (Local_112.f_197 != 2)
	{
		return;
	}
	if (Local_112.f_21 > 0)
	{
		return;
	}
	vVar0 = { vLocal_623[0 /*3*/] };
	if (!func_31(vVar0, 0f, 0f, 0f, 0))
	{
		func_696(200, vVar0, &uLocal_2784, 1140457472, 1144750080, 0);
	}
}

void func_696(int iParam0, vector3 vParam1, var uParam4, float fParam5, float fParam6, int iParam7)//Position - 0x1935B
{
	float fVar0;
	float fVar1;
	
	if ((((func_47(PLAYER::PLAYER_ID()) && !func_46(PLAYER::PLAYER_ID())) && !MISC::IS_BIT_SET(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1, 8)) && (func_43(PLAYER::PLAYER_ID()) || func_42(PLAYER::PLAYER_ID()))) || func_19(vParam1))
	{
		return;
	}
	Global_1674852 = { vParam1 };
	fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vParam1);
	func_735(iParam0, fVar0);
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_41(PLAYER::PLAYER_ID()) || func_734(PLAYER::PLAYER_ID()))
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
	if (fVar0 < fParam5)
	{
		if (!(func_372(PLAYER::PLAYER_ID(), 21) || func_372(PLAYER::PLAYER_ID(), 25)))
		{
			func_733(vParam1, 1, 0);
		}
		if (!*uParam4 && func_1276(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam4 = 1;
			if (func_732(iParam0))
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(func_731(iParam0));
				if (func_730(iParam0, -1))
				{
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 1);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 1);
					}
					MISC::SET_BIT(&(Global_1674852.f_3), 0);
				}
			}
			if (func_729(iParam0))
			{
				fVar1 = func_728(iParam0);
				if (fVar1 != 1f)
				{
					func_724(fVar1);
					MISC::SET_BIT(&(Global_1674852.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_723(iParam0) && func_41(PLAYER::PLAYER_ID()))
				{
					func_721(1);
					func_720(2);
				}
			}
			func_369(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_40(PLAYER::PLAYER_ID(), 19))
			{
				func_371(19);
			}
		}
		if (*uParam4 && func_1276(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam4 = 0;
			if (func_732(iParam0))
			{
				if (MISC::IS_BIT_SET(Global_1674852.f_3, 0))
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					MISC::CLEAR_BIT(&(Global_1674852.f_3), 0);
				}
			}
			if (func_729(iParam0))
			{
				func_719();
				MISC::CLEAR_BIT(&(Global_1674852.f_3), 1);
			}
			if (iParam7 && !func_47(PLAYER::PLAYER_ID()))
			{
				if (func_145(PLAYER::PLAYER_ID()) != 152)
				{
					func_698();
				}
			}
			if (func_235(2))
			{
				func_721(0);
				func_697(2);
			}
		}
	}
}

void func_697(int iParam0)//Position - 0x195DE
{
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_43), iParam0);
}

void func_698()//Position - 0x195F5
{
	MISC::_COPY_MEMORY(&(Global_2405071.f_24), &Global_2409324, 2);
	MISC::_COPY_MEMORY(&(Global_2405071.f_26), &Global_2409326, 19);
	func_717();
	func_701(1, 1, 0);
	func_699();
}

void func_699()//Position - 0x1962B
{
	func_700(0, 0);
}

void func_700(int iParam0, int iParam1)//Position - 0x19639
{
	Global_2405071.f_22 = iParam0;
	Global_2405071.f_23 = iParam1;
}

void func_701(bool bParam0, bool bParam1, bool bParam2)//Position - 0x19651
{
	if (bParam1)
	{
		MISC::_COPY_MEMORY(&(Global_2405071.f_45), &Global_2409345, 318);
	}
	else
	{
		Global_2405071.f_45 = { Global_2409345 };
		Global_2405071.f_45.f_49 = { Global_2409345.f_49 };
		Global_2405071.f_45.f_52 = Global_2409345.f_52;
		Global_2405071.f_45.f_53 = Global_2409345.f_53;
	}
	if (bParam0)
	{
		func_716();
	}
	if (!bParam2)
	{
		func_704(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_703(0);
	func_702();
}

void func_702()//Position - 0x196F7
{
	struct<6> Var0;
	
	if (Global_2405071.f_485.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2405071.f_485 = { Var0 };
	}
}

void func_703(bool bParam0)//Position - 0x1971C
{
	if (bParam0)
	{
		Global_2405071.f_703 = 0;
	}
	else
	{
		Global_2405071.f_703 = 1;
	}
}

void func_704(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x1973C
{
	if (bParam0)
	{
		if (func_715())
		{
			func_714();
		}
		Global_2405071.f_704.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405071.f_704.f_504 = iParam1;
		Global_2405071.f_704.f_505 = iParam2;
		Global_2405071.f_704.f_506 = iParam10;
		func_712();
		func_708(8, 0, 0, 0, 0);
		Global_2405071.f_704.f_507 = iParam11;
		Global_2405071.f_704.f_512 = iParam3;
		Global_2405071.f_704.f_513 = iParam4;
		Global_2405071.f_704.f_510 = iParam5;
		Global_2405071.f_704.f_511 = iParam6;
		Global_2405071.f_704.f_514 = iParam7;
		Global_2405071.f_704.f_515 = iParam8;
		Global_2405071.f_704.f_516 = iParam9;
		Global_2405071.f_704.f_517 = iParam14;
		Global_2405071.f_704.f_508 = iParam12;
		Global_2405071.f_704.f_509 = iParam13;
		Global_2405071.f_1743 = 1;
	}
	else
	{
		func_705();
	}
}

void func_705()//Position - 0x19827
{
	if (func_715() && !func_707())
	{
		func_714();
	}
	if (func_707())
	{
		func_706();
	}
	else
	{
		func_712();
		func_708(0, 0, 0, 0, 0);
		Global_2405071.f_1743 = 0;
		Global_2405071.f_1742 = 0;
	}
}

void func_706()//Position - 0x1986F
{
	MISC::_COPY_MEMORY(&(Global_2405071.f_704), &(Global_2405071.f_1223), 519);
	Global_2405071.f_485 = { Global_2405071.f_491 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_518)
	{
		Global_2405071.f_1742 = 0;
	}
}

int func_707()//Position - 0x198B7
{
	if ((Global_2405071.f_1742 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_1223.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405071.f_1223.f_518))
	{
		return 1;
	}
	return 0;
}

void func_708(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x198F6
{
	if (Global_2437549.f_1893.f_690.f_16 != func_398())
	{
		if (MISC::IS_BIT_SET(Global_2424073[Global_2437549.f_1893.f_690.f_16 /*421*/].f_402, 0) && func_709())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412637 = 0;
	}
	Global_2405071.f_485 = iParam0;
	Global_2405071.f_485.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405071.f_485.f_2 = iParam1;
	Global_2405071.f_485.f_3 = iParam2;
	Global_2405071.f_485.f_4 = iParam3;
	Global_2405071.f_485.f_5 = iParam4;
}

int func_709()//Position - 0x19995
{
	if (((((func_145(PLAYER::PLAYER_ID()) == 229 || func_145(PLAYER::PLAYER_ID()) == 191) || func_711()) || func_710()) || func_632(PLAYER::PLAYER_ID())) || Global_2508349.f_226 == 1)
	{
		return 0;
	}
	return 1;
}

bool func_710()//Position - 0x199F1
{
	return Global_1574402;
}

int func_711()//Position - 0x199FD
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_712()//Position - 0x19A12
{
	if (func_715() && !func_707())
	{
		func_714();
	}
	func_713();
	Global_2405071.f_704 = 0;
}

void func_713()//Position - 0x19A3B
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405071.f_704.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_714()//Position - 0x19A76
{
	if (func_707())
	{
		if (Global_2405071.f_704.f_518 == Global_2405071.f_1223.f_518)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_518)
	{
		MISC::_COPY_MEMORY(&(Global_2405071.f_1223), &(Global_2405071.f_704), 519);
		Global_2405071.f_491 = { Global_2405071.f_485 };
		Global_2405071.f_1742 = 1;
	}
}

int func_715()//Position - 0x19AE4
{
	if ((Global_2405071.f_1743 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405071.f_704.f_518))
	{
		return 1;
	}
	return 0;
}

void func_716()//Position - 0x19B23
{
	MISC::_COPY_MEMORY(&(Global_2405071.f_363), &Global_2409663, 121);
}

void func_717()//Position - 0x19B3C
{
	func_718();
	Global_2405071.f_2252 = 0;
}

void func_718()//Position - 0x19B50
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405071.f_2253[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_719()//Position - 0x19B7C
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2531497.f_4894))
	{
		if (!Global_2531497.f_4894 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2531497.f_4893 < 1f)
		{
			return;
		}
	}
	Global_2531497.f_4894 = -1;
	Global_2531497.f_4893 = 1f;
}

void func_720(int iParam0)//Position - 0x19BC3
{
	MISC::SET_BIT(&(Global_2531497.f_4898.f_43), iParam0);
}

void func_721(int iParam0)//Position - 0x19BDA
{
	if (func_722() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_722()//Position - 0x19C0F
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

int func_723(int iParam0)//Position - 0x19C55
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

void func_724(float fParam0)//Position - 0x19CA5
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_725())
	{
		return;
	}
	fVar0 = (Global_2531497.f_4893 - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2531497.f_4894))
	{
		if (!Global_2531497.f_4894 == SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2531497.f_4893 = fParam0;
	Global_2531497.f_4894 = SCRIPT::GET_ID_OF_THIS_THREAD();
}

int func_725()//Position - 0x19D11
{
	switch (func_727())
	{
		case 0:
			return func_726();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_726()//Position - 0x19D44
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_727()//Position - 0x19D68
{
	return Global_30736;
}

float func_728(int iParam0)//Position - 0x19D73
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
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
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 243:
		case 158:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_729(int iParam0)//Position - 0x19F13
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_730(int iParam0, int iParam1)//Position - 0x19FDB
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_731(int iParam0)//Position - 0x1A15C
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_732(int iParam0)//Position - 0x1A214
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

void func_733(vector3 vParam0, int iParam3, int iParam4)//Position - 0x1A312
{
	Global_2405071.f_45.f_49 = { vParam0 };
	Global_2405071.f_45.f_52 = iParam3;
	Global_2405071.f_45.f_53 = iParam4;
}

int func_734(int iParam0)//Position - 0x1A33C
{
	if (func_132(iParam0))
	{
		if (func_41(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_735(int iParam0, float fParam1)//Position - 0x1A35B
{
	int iVar0;
	
	iVar0 = func_738(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_736();
	}
}

void func_736()//Position - 0x1A381
{
	if (!func_737(PLAYER::PLAYER_ID()))
	{
		func_369(25);
	}
}

bool func_737(int iParam0)//Position - 0x1A39B
{
	return func_40(iParam0, 25);
}

int func_738(int iParam0)//Position - 0x1A3AB
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12522;
		
		case 142:
			return Global_262145.f_12510;
		
		case 157:
			return Global_262145.f_12477;
		
		case 159:
			return Global_262145.f_12460;
		
		case 162:
			return Global_262145.f_12571;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

void func_739()//Position - 0x1A421
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(Local_112.f_1, 3))
	{
		if (Local_112.f_197 == 2)
		{
			if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0))
			{
				if (Local_112.f_21 >= 2)
				{
					if (!MISC::IS_BIT_SET(iLocal_570, 3))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
								iLocal_2035 = iVar0;
								ENTITY::SET_ENTITY_PROOFS(iVar0, 0, 1, 1, 0, 0, 0, 0, 0);
								MISC::SET_BIT(&iLocal_570, 3);
							}
						}
					}
					else if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2035))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2035, 0))
							{
								ENTITY::SET_ENTITY_PROOFS(iLocal_2035, 0, 0, 0, 0, 0, 0, 0, 0);
								MISC::CLEAR_BIT(&iLocal_570, 3);
							}
						}
					}
					else if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (iVar0 != iLocal_2035)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_2035))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2035, 0))
								{
									ENTITY::SET_ENTITY_PROOFS(iLocal_2035, 0, 0, 0, 0, 0, 0, 0, 0);
									MISC::CLEAR_BIT(&iLocal_570, 3);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (MISC::IS_BIT_SET(iLocal_570, 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2035))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2035, 0))
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_2035, 0, 0, 0, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&iLocal_570, 3);
			}
		}
	}
}

void func_740()//Position - 0x1A563
{
	if (Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 == 0 || Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 == 2)
	{
		if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0) || MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
		{
			if (!func_743())
			{
				func_742();
			}
		}
	}
	else if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0) || MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
	{
		if (func_743())
		{
			func_741();
		}
	}
}

void func_741()//Position - 0x1A5FA
{
	MISC::CLEAR_BIT(&(Global_1674852.f_3), 5);
}

void func_742()//Position - 0x1A60D
{
	MISC::SET_BIT(&(Global_1674852.f_3), 5);
}

bool func_743()//Position - 0x1A620
{
	return MISC::IS_BIT_SET(Global_1674852.f_3, 5);
}

void func_744()//Position - 0x1A633
{
	char cVar0[32];
	char* sVar4;
	int iVar5;
	char cVar6[32];
	char cVar10[32];
	struct<4> Var14;
	struct<4> Var18;
	struct<4> Var22;
	struct<4> Var26;
	
	if (func_376(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	switch (Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7)
	{
		case 0:
			if (Local_112.f_197 == 2)
			{
				if (!MISC::IS_BIT_SET(iLocal_569, 29))
				{
					if (func_908())
					{
						func_886(200, 1, Local_112.f_197, 0);
					}
					else
					{
						func_886(200, 0, Local_112.f_197, 0);
					}
					MISC::SET_BIT(&iLocal_569, 29);
				}
			}
			if (!func_1010(1))
			{
				if (MISC::IS_BIT_SET(iLocal_568, 31))
				{
					func_1008(func_1009(), 1);
					func_1003();
					MISC::CLEAR_BIT(&iLocal_568, 31);
				}
				if (Local_112.f_21 == 0)
				{
					if (!MISC::IS_BIT_SET(iLocal_568, 0))
					{
						if (func_631(0, 1, 1, 1))
						{
							if (func_885())
							{
								sVar4 = func_884();
								if (Local_112.f_197 == 2)
								{
									if (func_885())
									{
										func_883(sVar4, "CAG_BLIPS", iLocal_2766, 30000);
									}
								}
								else
								{
									func_630(sVar4, 30000);
									func_629(0);
								}
								MISC::SET_BIT(&iLocal_568, 0);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
							}
						}
					}
				}
				if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0))
				{
					if (func_882(1))
					{
						if (!MISC::IS_BIT_SET(Global_1574647.f_1, 8))
						{
							func_881();
						}
						if (MISC::IS_BIT_SET(iLocal_569, 3))
						{
							cVar0 = { func_880() };
							if (func_501(&cVar0))
							{
								if (func_23(&uLocal_2759, 3000, 0))
								{
									MISC::CLEAR_BIT(&iLocal_569, 3);
									func_22(&uLocal_2759);
									HUD::CLEAR_HELP(1);
								}
							}
						}
						if (iLocal_2032 < func_391())
						{
							if (!func_436(PLAYER::PLAYER_ID()))
							{
								func_879(1);
							}
							if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 8))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
								if (!func_44())
								{
									if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(0);
										MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 8);
										PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 0);
										PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 422, true);
									}
									else if (func_877(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))))
									{
										if (func_876(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
										{
											NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(0);
											PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 0);
											MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 8);
											PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 422, true);
										}
									}
								}
							}
							else if (func_44())
							{
								MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 8);
							}
							if (!MISC::IS_BIT_SET(iLocal_568, 18))
							{
								MISC::SET_BIT(&iLocal_568, 18);
							}
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (!func_44())
								{
									if (func_877(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))))
									{
										if (MISC::IS_BIT_SET(iLocal_568, 24))
										{
											MISC::CLEAR_BIT(&iLocal_568, 24);
										}
										if (MISC::IS_BIT_SET(iLocal_568, 23))
										{
											MISC::CLEAR_BIT(&iLocal_568, 23);
										}
										iVar5 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar5, 0))
										{
											PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, true);
											if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar5, -1, 0) == PLAYER::PLAYER_PED_ID())
											{
												if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
												{
													if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
													{
														if (PED::CAN_KNOCK_PED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID()))
														{
															PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
														}
													}
													else if (!PED::CAN_KNOCK_PED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID()))
													{
														PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
													}
												}
												if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 13))
												{
													MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 13);
												}
												if (MISC::IS_BIT_SET(Local_112.f_35, NETWORK::PARTICIPANT_ID_TO_INT()))
												{
													if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
													{
														MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 6);
													}
													MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 0);
													iLocal_2034 = iVar5;
													if (Local_2741.f_11 == 0)
													{
														Local_2741.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
													}
													sVar4 = func_875();
													if (func_501(sVar4))
													{
														HUD::CLEAR_HELP(1);
													}
												}
											}
											else
											{
												if (!MISC::IS_BIT_SET(iLocal_568, 11))
												{
													if (func_631(0, 1, 1, 1))
													{
														if (func_885())
														{
															cVar6 = { func_874() };
															if (func_885())
															{
																func_630(&cVar6, 30000);
															}
															if (Local_112.f_197 != 2)
															{
																func_629(1);
															}
															MISC::SET_BIT(&iLocal_568, 11);
														}
													}
												}
												if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
												{
													MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 6);
												}
											}
										}
									}
									else
									{
										if (!MISC::IS_BIT_SET(iLocal_568, 24))
										{
											if (func_631(0, 1, 1, 1))
											{
												if (func_885())
												{
													sVar4 = func_873();
													if (func_885())
													{
														func_630(sVar4, 30000);
													}
													if (Local_112.f_197 != 2)
													{
														func_629(1);
													}
													MISC::SET_BIT(&iLocal_568, 24);
												}
											}
										}
										if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 8))
										{
											func_872(1);
											MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 8);
											PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
										}
									}
								}
								else if (!MISC::IS_BIT_SET(iLocal_568, 23))
								{
									if (func_631(0, 1, 1, 1))
									{
										MISC::SET_BIT(&iLocal_568, 23);
										if (func_885())
										{
											func_630("PEN_PASSMD", 30000);
										}
										if (Local_112.f_197 != 2)
										{
											func_629(1);
										}
									}
								}
							}
							else
							{
								if (!MISC::IS_BIT_SET(iLocal_568, 1))
								{
									if (MISC::IS_BIT_SET(iLocal_568, 0))
									{
										if (func_631(0, 1, 1, 1))
										{
											if (func_885())
											{
												sVar4 = func_875();
												if (func_885())
												{
													func_630(sVar4, 30000);
												}
												if (Local_112.f_197 != 2)
												{
													func_629(1);
												}
												MISC::SET_BIT(&iLocal_568, 1);
											}
										}
									}
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2034, 0))
								{
								}
								if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
								{
									MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 6);
								}
							}
							func_871();
						}
					}
					else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (MISC::IS_BIT_SET(Global_1574647.f_1, 8))
						{
							func_869();
						}
						if (MISC::IS_BIT_SET(iLocal_568, 24))
						{
							MISC::CLEAR_BIT(&iLocal_568, 24);
						}
						if (MISC::IS_BIT_SET(iLocal_568, 18))
						{
							MISC::CLEAR_BIT(&iLocal_568, 18);
						}
						if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 8))
						{
							func_872(1);
							PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
							MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 8);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 422, false);
						}
						if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
						{
							MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 6);
						}
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::CAN_KNOCK_PED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
						}
						if (MISC::IS_BIT_SET(iLocal_569, 4))
						{
							if (!MISC::IS_BIT_SET(iLocal_569, 3))
							{
								if (func_631(0, 1, 1, 1))
								{
									if (func_885())
									{
										MISC::CLEAR_BIT(&iLocal_569, 4);
										MISC::SET_BIT(&iLocal_569, 3);
										func_22(&uLocal_2759);
										func_397(&uLocal_2759, 0, 0);
										cVar0 = { func_880() };
										if (func_885())
										{
											func_630(&cVar0, 30000);
										}
										if (Local_112.f_197 != 2)
										{
											func_629(1);
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (!func_882(1))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 8))
							{
								func_872(1);
								MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 8);
								PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
								PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 422, false);
							}
							MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 0);
							MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 13);
							func_1003();
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::CAN_KNOCK_PED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
							}
							if (MISC::IS_BIT_SET(iLocal_568, 18))
							{
								MISC::CLEAR_BIT(&iLocal_568, 18);
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2034, 0))
							{
							}
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
							if (func_436(PLAYER::PLAYER_ID()))
							{
								func_879(0);
							}
							MISC::SET_BIT(&iLocal_569, 4);
						}
					}
					else
					{
						if (MISC::IS_BIT_SET(iLocal_569, 3))
						{
							cVar0 = { func_880() };
							if (func_501(&cVar0))
							{
								if (func_23(&uLocal_2759, 3000, 0))
								{
									MISC::CLEAR_BIT(&iLocal_569, 3);
									func_22(&uLocal_2759);
									HUD::CLEAR_HELP(1);
								}
							}
						}
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
						}
						if (func_44())
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::CAN_KNOCK_PED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
							}
							MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 0);
							MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 13);
						}
						else if (!MISC::IS_BIT_SET(iLocal_568, 25))
						{
							if (MISC::IS_BIT_SET(Local_112.f_1, 7))
							{
								if (func_631(0, 1, 1, 1))
								{
									if (func_885())
									{
										cVar10 = { func_868() };
										if (func_885())
										{
											func_630(&cVar10, 30000);
										}
										if (Local_112.f_197 != 2)
										{
											func_629(1);
										}
										MISC::SET_BIT(&iLocal_568, 25);
									}
								}
							}
						}
						func_871();
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if ((!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) || (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))) || !func_877(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))))
						{
							MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 0);
							MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 13);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2034, 0))
							{
							}
						}
						else if (MISC::IS_BIT_SET(Local_112.f_1, 1))
						{
							cVar0 = { func_867() };
							if (func_501(&cVar0))
							{
								HUD::CLEAR_HELP(1);
							}
						}
						else if (!MISC::IS_BIT_SET(iLocal_568, 3))
						{
							if (func_631(0, 1, 1, 1))
							{
								if (func_885())
								{
									cVar0 = { func_867() };
									if (func_885())
									{
										func_630(&cVar0, 30000);
									}
									if (Local_112.f_197 != 2)
									{
										func_629(1);
									}
									MISC::SET_BIT(&iLocal_568, 3);
								}
							}
						}
					}
					if (MISC::IS_BIT_SET(iLocal_568, 0))
					{
						if (!MISC::IS_BIT_SET(iLocal_568, 2))
						{
							if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0))
							{
								if (MISC::IS_BIT_SET(Local_112.f_1, 1))
								{
									if (func_631(0, 1, 1, 1))
									{
										if (func_885())
										{
											cVar0 = { func_866() };
											if (func_885())
											{
												func_630(&cVar0, 30000);
											}
											if (Local_112.f_197 != 2)
											{
												func_629(1);
											}
											MISC::SET_BIT(&iLocal_568, 2);
										}
									}
								}
							}
						}
					}
				}
				func_487(1, 0);
				func_477();
				func_463();
			}
			else if (!MISC::IS_BIT_SET(iLocal_568, 31))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_589))
				{
					HUD::REMOVE_BLIP(&iLocal_589);
				}
				func_443();
				func_430();
				MISC::SET_BIT(&iLocal_568, 31);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 422, false);
				if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0))
				{
					MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 0);
				}
			}
			if (Local_112.f_21 >= 1)
			{
				if (!MISC::IS_BIT_SET(Local_112.f_1, 12))
				{
					if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0))
					{
						if (Local_112.f_197 == 2)
						{
							if (!func_908())
							{
								func_721(1);
							}
							func_860(0);
							func_736();
							func_859(1);
						}
						else
						{
							func_850(136, 0f, 0f, 1, 1, 1, 0);
							func_826(1);
							func_879(0);
						}
						func_879(0);
						if (HUD::DOES_BLIP_EXIST(iLocal_589))
						{
							HUD::REMOVE_BLIP(&iLocal_589);
						}
						func_430();
						func_825(1);
						func_822();
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::CAN_KNOCK_PED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
						}
						iLocal_587 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
						if (Local_112.f_197 != 2)
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_585);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 422, true);
						}
						else
						{
							func_872(0);
							ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 1, 1, 0, 0, 0, 0, 0);
							MISC::SET_BIT(&iLocal_570, 2);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 422, false);
						}
						func_819(8, 0, 1);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						func_397(&uLocal_2761, 0, 0);
						Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 1;
					}
					else if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
					{
						if (Local_112.f_197 == 2)
						{
						}
						else
						{
							func_850(136, 0f, 0f, 1, 1, 0, 0);
						}
						func_430();
						if (HUD::DOES_BLIP_EXIST(iLocal_589))
						{
							HUD::REMOVE_BLIP(&iLocal_589);
						}
						func_825(1);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						func_879(0);
						Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 1;
					}
					else
					{
						if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 8))
						{
							func_872(1);
							PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
							MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 8);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 422, false);
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_589))
						{
							HUD::REMOVE_BLIP(&iLocal_589);
						}
						func_879(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
						func_430();
						func_818(&uLocal_2735);
						Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 3;
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 8))
					{
						func_872(1);
						PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
						MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 8);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 422, false);
					}
					func_443();
					if (HUD::DOES_BLIP_EXIST(iLocal_589))
					{
						HUD::REMOVE_BLIP(&iLocal_589);
					}
					func_430();
					func_818(&uLocal_2735);
					func_879(0);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
					Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 3;
				}
			}
			else if (Local_112.f_197 != 2 && func_815(2, 0, 1, 0, 0))
			{
				func_879(0);
				Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 5;
			}
			func_814();
			break;
		
		case 1:
			func_463();
			func_814();
			func_487(!MISC::IS_BIT_SET(iLocal_568, 9), 0);
			func_871();
			func_813();
			if (Local_112.f_21 >= 2)
			{
				func_397(&uLocal_621, 0, 0);
				Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 2;
			}
			break;
		
		case 2:
			if (Local_2741.f_9 == 0)
			{
				Local_2741.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
			}
			if (Local_112.f_197 == 2)
			{
				if (!MISC::IS_BIT_SET(iLocal_570, 0))
				{
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					MISC::SET_BIT(&iLocal_570, 0);
				}
				else if (PLAYER::GET_MAX_WANTED_LEVEL() > 0)
				{
					PLAYER::SET_MAX_WANTED_LEVEL(0);
				}
			}
			func_29(1);
			func_457();
			func_487(0, 0);
			func_804();
			func_448();
			func_503(0);
			func_797();
			func_814();
			func_795();
			sVar4 = func_875();
			if (!MISC::IS_BIT_SET(iLocal_568, 13))
			{
				Var26 = { func_794() };
				if (!func_1010(1))
				{
					if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
					{
						if (func_631(0, 0, 1, 1))
						{
							if (!func_793(55))
							{
								func_630(&Var26, 30000);
								if (Local_112.f_197 != 2)
								{
									func_629(1);
								}
								MISC::SET_BIT(&iLocal_568, 13);
							}
						}
					}
				}
				else
				{
					Var14 = { func_874() };
					Var18 = { func_868() };
					Var22 = { func_880() };
					if ((((((func_501(&Var26) || func_501(&Var22)) || func_501(&Var14)) || func_501(sVar4)) || func_501(&Var18)) || func_501("PEN_MPLAY")) || func_501("PEN_START2"))
					{
						HUD::CLEAR_HELP(1);
					}
				}
			}
			else if (iLocal_572 != 0)
			{
				if (!MISC::IS_BIT_SET(iLocal_568, 5))
				{
					if (func_631(0, 0, 1, 1))
					{
						if (!func_793(55))
						{
							func_630("PEN_STILLP", 30000);
							if (Local_112.f_197 != 2)
							{
								func_629(1);
							}
							MISC::SET_BIT(&iLocal_568, 5);
						}
					}
				}
			}
			if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 1))
			{
				Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 3;
				func_430();
				if (HUD::DOES_BLIP_EXIST(iLocal_2036))
				{
					HUD::REMOVE_BLIP(&iLocal_2036);
				}
			}
			else if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
			{
				if (MISC::IS_BIT_SET(iLocal_568, 12))
				{
					Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 3;
					func_430();
				}
			}
			if (Local_112.f_21 == 3)
			{
				func_443();
				func_430();
				Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 3;
			}
			if (func_455())
			{
				if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0))
				{
					MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 0);
				}
				if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
				{
					MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 6);
				}
				if (func_792())
				{
					func_791(0);
				}
				MISC::SET_BIT(&iLocal_569, 20);
				func_443();
				func_430();
				func_872(1);
				MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 8);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 422, false);
				Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 3;
			}
			else if (Local_112.f_21 == 4)
			{
				Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 4;
			}
			else if (Local_112.f_21 > 4)
			{
				Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 5;
			}
			else if (Local_112.f_197 != 2 && func_815(2, 0, 1, 0, 0))
			{
				Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 5;
			}
			else if (func_490())
			{
				func_443();
				func_430();
				func_872(1);
				MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 8);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 422, false);
				Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 3;
			}
			break;
		
		case 3:
			if (!func_1010(1))
			{
				if ((!MISC::IS_BIT_SET(Local_112.f_1, 17) && !MISC::IS_BIT_SET(Local_112.f_1, 16)) && !MISC::IS_BIT_SET(Local_112.f_1, 18))
				{
					func_786();
					func_784();
				}
				func_814();
				if ((!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0) || MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 1)) || MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
				{
					if (Local_112.f_21 > 1 && Local_112.f_21 < 3)
					{
						if (!MISC::IS_BIT_SET(iLocal_569, 17))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_588))
							{
								HUD::SET_BLIP_COLOUR(iLocal_588, 55);
								MISC::SET_BIT(&iLocal_569, 17);
							}
						}
						func_29(1);
						func_457();
					}
					if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0) || MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
					{
						func_487(0, 1);
					}
				}
			}
			else if (MISC::IS_BIT_SET(iLocal_569, 17))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_588))
				{
					HUD::REMOVE_BLIP(&iLocal_588);
				}
			}
			if (MISC::IS_BIT_SET(iLocal_570, 0))
			{
				PLAYER::SET_MAX_WANTED_LEVEL(5);
				MISC::CLEAR_BIT(&iLocal_570, 0);
			}
			if (func_792())
			{
				if (func_455())
				{
					func_791(0);
				}
			}
			func_37();
			if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0))
			{
				if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 2))
				{
					func_503(1);
				}
			}
			else
			{
				func_783();
			}
			if (MISC::IS_BIT_SET(iLocal_568, 6))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_Player_Inside_Bubble_Scene"))
				{
					AUDIO::STOP_AUDIO_SCENE("MP_Player_Inside_Bubble_Scene");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_Player_Outside_Bubble_Scene"))
				{
					AUDIO::STOP_AUDIO_SCENE("MP_Player_Outside_Bubble_Scene");
				}
				GRAPHICS::ANIMPOSTFX_STOP("pennedIn");
				GRAPHICS::ANIMPOSTFX_PLAY("PennedInOut", 0, 0);
				MISC::CLEAR_BIT(&iLocal_568, 6);
			}
			if (Local_112.f_197 != 2)
			{
				if (func_47(PLAYER::PLAYER_ID()))
				{
					func_826(0);
					func_825(0);
					MISC::SET_BIT(&iLocal_569, 24);
					func_757(136, 0, 1);
				}
			}
			else if (!MISC::IS_BIT_SET(iLocal_569, 24))
			{
				func_825(0);
				MISC::SET_BIT(&iLocal_569, 24);
			}
			if (!MISC::IS_BIT_SET(iLocal_569, 21))
			{
				if (MISC::IS_BIT_SET(iLocal_569, 14) || MISC::IS_BIT_SET(iLocal_568, 20))
				{
					MISC::SET_BIT(&iLocal_569, 21);
				}
			}
			if (func_682())
			{
				if (func_745())
				{
					if (Local_112.f_21 == 4)
					{
						Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 4;
					}
					else if (Local_112.f_21 > 4)
					{
						Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 5;
					}
					else
					{
						func_494();
					}
				}
			}
			break;
		
		case 4:
			if (Local_112.f_21 > 4)
			{
				Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 5;
			}
			break;
		
		case 5:
			func_1162();
			break;
	}
}

int func_745()//Position - 0x1B9BF
{
	if ((func_493() && !func_19(vLocal_2775)) || MISC::IS_BIT_SET(iLocal_569, 23))
	{
		switch (iLocal_2779)
		{
			case 0:
				if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(500);
				}
				else
				{
					iLocal_2779++;
				}
				break;
			
			case 1:
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					MISC::SET_BIT(&iLocal_569, 23);
					func_756();
					func_494();
					iLocal_2779++;
				}
				break;
			
			case 2:
				if (func_746(vLocal_2775, fLocal_2778, 0, 1, 0, 0, 1, 0, 1, 0, 0))
				{
					iLocal_2779++;
				}
				break;
			
			case 3:
				if (!CAM::IS_SCREEN_FADING_IN() && !CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(500);
					iLocal_2779++;
				}
				break;
			
			case 4:
				if (CAM::IS_SCREEN_FADED_IN())
				{
					iLocal_2779++;
				}
				break;
			
			case 5:
				return 1;
				break;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_746(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, float fParam12)//Position - 0x1BACA
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	
	Global_22211.f_6 = 1;
	if (Global_2437549.f_1232 && Global_2437549.f_1240)
	{
		func_754(0, bParam9);
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam9)
	{
		if (Global_2437549.f_1232)
		{
			func_754(0, bParam9);
		}
		return 0;
	}
	if ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !bParam9) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		return 0;
	}
	if (!func_753())
	{
		if (func_752(PLAYER::PLAYER_ID(), 1, 0) && !(func_603() || func_751()))
		{
			if (((bParam9 && func_1276(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_222 == 1)
			{
			}
			else if (func_750() == 28)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = (fParam3 + 360f);
	}
	if (fParam3 >= 360f)
	{
		fParam3 = (fParam3 + -360f);
	}
	if (!Global_2437549.f_1232 && !bParam11)
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
		if ((MISC::ABSF((vVar1.x - vParam0.x)) < 0.2f && MISC::ABSF((vVar1.y - vParam0.y)) < 0.2f) && MISC::ABSF((vVar1.z - vParam0.z)) < 1.2f)
		{
			fVar4 = (fParam3 - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
			if (fVar4 > 180f)
			{
				fVar4 = (fVar4 + -360f);
			}
			if (fVar4 < -180f)
			{
				fVar4 = (fVar4 + 360f);
			}
			if (MISC::ABSF(fVar4) < 1f)
			{
				Global_2437549.f_1232 = 0;
				Global_2437549.f_1233 = 0;
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					PLAYER::STOP_PLAYER_TELEPORT();
				}
				return 1;
			}
		}
	}
	if (((!vParam0.x == Global_2437549.f_1234 || !vParam0.y == Global_2437549.f_1234.f_1) || !vParam0.z == Global_2437549.f_1234.f_2) || !fParam3 == Global_2437549.f_1237)
	{
		if (Global_2437549.f_1232 == 1)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2437549.f_1238) < func_749(0))
			{
				return 0;
			}
			PLAYER::STOP_PLAYER_TELEPORT();
			Global_2437549.f_1233 = 1;
		}
		else
		{
			Global_2437549.f_1233 = 0;
		}
		Global_2437549.f_1234 = { vParam0 };
		Global_2437549.f_1237 = fParam3;
		Global_2437549.f_1232 = 0;
	}
	if (!Global_2437549.f_1232 && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		if (bParam4)
		{
			bParam5 = false;
		}
		bParam7 = bParam7;
		if (bParam7)
		{
		}
		if (bParam5)
		{
		}
		if (bParam8)
		{
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!MISC::IS_BIT_SET(Global_98721.f_1357[44], 16))
			{
				func_748(0);
			}
			if (!WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), &(Global_2405071.f_497)))
			{
				Global_2405071.f_497 = 0;
			}
		}
		if (bParam4)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar0))
				{
					Global_2437549.f_1239 = 0;
				}
			}
		}
		if (Global_2437549.f_1239 > -1)
		{
			Global_2437549.f_1238 = NETWORK::GET_NETWORK_TIME();
			Global_2437549.f_1232 = 1;
		}
		else
		{
			if (bParam9)
			{
				if (bParam4)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
						{
							ENTITY::SET_ENTITY_COORDS(iVar0, vParam0, 0, 1, 1, 1);
							ENTITY::SET_ENTITY_HEADING(iVar0, fParam3);
							if (fParam12 != 0f)
							{
								ENTITY::SET_ENTITY_ROTATION(iVar0, fParam12, 0f, fParam3, 2, 1);
							}
						}
						else
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
						}
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vParam0, 0, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
					}
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vParam0, 0, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
				}
				func_754(bParam6, bParam9);
				return 1;
			}
			else
			{
				STREAMING::CLEAR_FOCUS();
				PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), vParam0, fParam3, bParam4, bParam10, 0);
			}
			Global_2437549.f_1238 = NETWORK::GET_NETWORK_TIME();
			Global_2437549.f_1232 = 1;
		}
	}
	if (Global_2437549.f_1232)
	{
		Global_22211.f_6 = 1;
		Global_2437549.f_1238 = NETWORK::GET_NETWORK_TIME();
		if (Global_2437549.f_1239 > -1)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			}
			if (func_747(&(Global_2437549.f_1239), vParam0, fParam3, iVar0))
			{
				func_754(bParam6, bParam9);
				return 1;
			}
		}
		else
		{
			if (bParam9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Global_2437549.f_1234) < 2f)
				{
					if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					{
						PLAYER::STOP_PLAYER_TELEPORT();
					}
					func_754(bParam6, bParam9);
					return 1;
				}
			}
			if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
			{
				if (fParam12 != 0f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_ROTATION(iVar0, fParam12, 0f, fParam3, 2, 1);
						Global_2437549.f_1240 = 1;
						return 0;
					}
				}
				func_754(bParam6, bParam9);
				return 1;
			}
		}
	}
	return 0;
}

int func_747(var uParam0, vector3 vParam1, float fParam4, int iParam5)//Position - 0x1BFA8
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_2437549.f_1241) && !ENTITY::IS_ENTITY_DEAD(Global_2437549.f_1241, 0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2437549.f_1241);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2437549.f_1241 = iParam5;
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2437549.f_1241);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2437549.f_1241))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_2437549.f_1241, 0))
				{
					ENTITY::SET_ENTITY_HEADING(Global_2437549.f_1241, fParam4);
					ENTITY::SET_ENTITY_COORDS(Global_2437549.f_1241, vParam1, 0, 1, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_748(int iParam0)//Position - 0x1C04F
{
	int iVar0;
	
	iVar0 = Global_2405071.f_2680;
	if ((AUDIO::_0x2DD39BF3E2F9C47F() && Global_2405071.f_2678 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2405071.f_2677)
	{
		if (!AUDIO::IS_RADIO_RETUNING())
		{
			Global_2405071.f_2677 = iVar0;
		}
	}
}

int func_749(bool bParam0)//Position - 0x1C0A4
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_750()//Position - 0x1C0C7
{
	return Global_1312808;
}

bool func_751()//Position - 0x1C0D3
{
	return ((MISC::IS_BIT_SET(Global_4456448.f_30, 12) && MISC::IS_BIT_SET(Global_1695602, 12)) && Global_1695601 == 8);
}

int func_752(int iParam0, bool bParam1, int iParam2)//Position - 0x1C102
{
	if (Global_2424073[iParam0 /*421*/].f_222 == 99)
	{
		if ((iParam2 && Global_2424073[iParam0 /*421*/].f_225 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2424073[iParam0 /*421*/].f_222 == 13)
		{
			return 0;
		}
	}
	return 1;
}

bool func_753()//Position - 0x1C159
{
	return Global_1312850;
}

void func_754(bool bParam0, bool bParam1)//Position - 0x1C165
{
	if (!bParam0)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	}
	if (!bParam1)
	{
		STREAMING::CLEAR_FOCUS();
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
	}
	func_669();
	if (!MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 14))
	{
		func_755();
	}
}

void func_755()//Position - 0x1C1CE
{
	Global_2540318.f_80 = 1;
}

void func_756()//Position - 0x1C1DD
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
			}
		}
	}
}

void func_757(int iParam0, bool bParam1, bool bParam2)//Position - 0x1C212
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (MISC::IS_BIT_SET(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 13);
		}
		if (MISC::IS_BIT_SET(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1, 14))
		{
			MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 14);
		}
	}
	if (MISC::IS_BIT_SET(Global_1574647.f_1, 21))
	{
		MISC::CLEAR_BIT(&(Global_1574647.f_1), 21);
	}
	func_779();
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_778(func_528(PLAYER::PLAYER_ID()));
		func_776(func_777(iParam0), 0);
	}
	else
	{
		if ((bParam2 && PLAYER::PLAYER_ID() != -1) && func_775(PLAYER::PLAYER_ID()) >= 12)
		{
			func_157(2546, -1);
			iVar1 = func_50(2546, -1, 0);
			if (iVar1 == 2)
			{
				MISC::SET_BIT(&Global_1574673, 0);
			}
			else if (iVar1 == 4)
			{
				MISC::SET_BIT(&Global_1574673, 1);
			}
			else if (iVar1 == 6)
			{
				MISC::SET_BIT(&Global_1574673, 2);
			}
			else if (iVar1 == 8)
			{
				MISC::SET_BIT(&Global_1574673, 3);
			}
			else if (iVar1 == 10)
			{
				MISC::SET_BIT(&Global_1574673, 4);
			}
			else if (iVar1 == 12)
			{
				MISC::SET_BIT(&Global_1574673, 5);
			}
		}
		func_774();
		func_773();
		func_772();
		if ((!func_41(PLAYER::PLAYER_ID()) && !func_39(PLAYER::PLAYER_ID())) && !func_710())
		{
			func_698();
		}
		func_771();
		if (!MISC::IS_BIT_SET(Global_1674852.f_3, 0) && !MISC::IS_BIT_SET(Global_1674852.f_3, 1))
		{
			func_869();
		}
		func_770();
		MISC::CLEAR_BIT(&(Global_2531497.f_1746), 2);
		func_769();
		func_768();
	}
	if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if (((PLAYER::PLAYER_ID() != -1 && !func_372(PLAYER::PLAYER_ID(), 21)) && !func_372(PLAYER::PLAYER_ID(), 25)) && !func_144(PLAYER::PLAYER_ID(), 0))
		{
			func_721(0);
			func_766(0);
			if (!bParam1)
			{
				func_765();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_764(26, -1))
		{
			Global_2461173 = -1;
			func_762(26, -1);
		}
	}
	if (!func_758())
	{
		Global_2507562 = 1;
	}
}

int func_758()//Position - 0x1C47E
{
	if ((((((!func_592(PLAYER::PLAYER_ID()) && !func_575(PLAYER::PLAYER_ID())) && func_528(PLAYER::PLAYER_ID()) != 146) && !func_761()) && !func_760()) && !func_759(Global_4456448.f_190930)) && !func_103())
	{
		return 0;
	}
	return 1;
}

bool func_759(int iParam0)//Position - 0x1C4EA
{
	return iParam0 == 57;
}

int func_760()//Position - 0x1C4F7
{
	if (Global_4456448.f_154360 == Global_262145.f_9596)
	{
		return 1;
	}
	return 0;
}

int func_761()//Position - 0x1C518
{
	if ((Global_4456448 == 0 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && (((((((Global_4456448.f_5 != 0 || Global_4456448.f_190930 > 0) || MISC::IS_BIT_SET(Global_4456448.f_4, 15)) || MISC::IS_BIT_SET(Global_4456448.f_4, 18)) || MISC::IS_BIT_SET(Global_4456448.f_4, 19)) || MISC::IS_BIT_SET(Global_4456448.f_4, 29)) || MISC::IS_BIT_SET(Global_4456448.f_4, 28)) || MISC::IS_BIT_SET(Global_4456448.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_762(int iParam0, int iParam1)//Position - 0x1C5C2
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_52();
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x723C1CE13FBFDB67(0, iParam1);
			break;
		
		default:
			iVar1 = func_763(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (MISC::IS_BIT_SET(iVar0, iParam0))
			{
				MISC::CLEAR_BIT(&iVar0, iParam0);
				STATS::_0x723C1CE13FBFDB67(iVar0, iParam1);
			}
			break;
	}
}

int func_763(int iParam0)//Position - 0x1C61E
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_52();
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

bool func_764(int iParam0, int iParam1)//Position - 0x1C681
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_52();
	}
	iVar0 = func_763(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return MISC::IS_BIT_SET(iVar1, iParam0);
}

void func_765()//Position - 0x1C6AD
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (MISC::IS_BIT_SET(Global_2359721[iVar0 /*26*/].f_12, 11))
		{
			if (MISC::IS_BIT_SET(Global_2359721[iVar0 /*26*/].f_13, 26))
			{
				MISC::CLEAR_BIT(&(Global_2359721[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_766(bool bParam0)//Position - 0x1C703
{
	int iVar0;
	
	if (bParam0)
	{
		Global_98721.f_8 = 1;
	}
	else
	{
		Global_98721.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_767(iVar0);
		iVar0++;
	}
}

void func_767(int iParam0)//Position - 0x1C73A
{
	Global_98721.f_181[iParam0] = 1;
	Global_98721.f_180 = 1;
}

void func_768()//Position - 0x1C754
{
	Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_7 = 0;
}

void func_769()//Position - 0x1C76A
{
	if (MISC::IS_BIT_SET(Global_2531497.f_4735, 1))
	{
		MISC::CLEAR_BIT(&(Global_2531497.f_4735), 1);
	}
	if (Global_2531497.f_4735 > 0)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
		AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
		Global_2531497.f_4735 = 0;
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
		AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
		if (!MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "am_pi_menu"))
		{
			if (Global_2531497.f_4745 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2531497.f_4745);
				Global_2531497.f_4745 = -1;
			}
		}
	}
}

void func_770()//Position - 0x1C808
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574647 = { Var0 };
}

void func_771()//Position - 0x1C837
{
	var uVar0;
	
	Global_1319097 = uVar0;
}

void func_772()//Position - 0x1C845
{
	Global_2531497.f_4736 = 0;
}

void func_773()//Position - 0x1C855
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1 = 0;
	}
}

void func_774()//Position - 0x1C873
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1628955[iVar0 /*614*/] = -1;
	}
}

int func_775(int iParam0)//Position - 0x1C891
{
	return Global_1590446[iParam0 /*871*/].f_211.f_6;
}

void func_776(int iParam0, bool bParam1)//Position - 0x1C8A6
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_208, iParam0))
		{
			MISC::SET_BIT(&(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_208), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_208, iParam0))
	{
		MISC::CLEAR_BIT(&(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_208), iParam0);
	}
}

int func_777(int iParam0)//Position - 0x1C909
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

int func_778(int iParam0)//Position - 0x1C92F
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
			if (func_42(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_779()//Position - 0x1C991
{
	if (MISC::IS_BIT_SET(Global_2531497.f_1735, 3) || MISC::IS_BIT_SET(Global_2531497.f_1735, 4))
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
	}
	if (MISC::IS_BIT_SET(Global_2531497.f_1735, 5))
	{
		MISC::CLEAR_BIT(&(Global_2531497.f_1735), 5);
	}
	if (MISC::IS_BIT_SET(Global_2531497.f_1735, 3))
	{
		MISC::CLEAR_BIT(&(Global_2531497.f_1735), 3);
	}
	if (MISC::IS_BIT_SET(Global_2531497.f_1735, 4))
	{
		MISC::CLEAR_BIT(&(Global_2531497.f_1735), 4);
	}
	func_782(0);
	func_781(0);
	func_780(0);
}

void func_780(int iParam0)//Position - 0x1CA32
{
	if (Global_2531497.f_4520 != iParam0)
	{
		Global_2531497.f_4520 = iParam0;
	}
}

void func_781(bool bParam0)//Position - 0x1CA4F
{
	if (Global_2531497.f_4519 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2531497.f_4519 = bParam0;
	}
}

void func_782(int iParam0)//Position - 0x1CA74
{
	if (Global_2531497.f_4517 != iParam0)
	{
		Global_2531497.f_4517 = iParam0;
	}
}

void func_783()//Position - 0x1CA91
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0);
			if (iVar1 != 0)
			{
				if (iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (PED::IS_PED_A_PLAYER(iVar1))
					{
						iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
						if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
						{
							iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
							iVar4 = iVar3;
							if (MISC::IS_BIT_SET(Local_311[iVar4 /*8*/].f_1, 0))
							{
								if (!MISC::IS_BIT_SET(Local_311[iVar4 /*8*/].f_1, 1))
								{
									bVar5 = true;
								}
							}
						}
					}
				}
			}
		}
	}
	if (bVar5)
	{
		func_871();
	}
}

void func_784()//Position - 0x1CB29
{
	char cVar0[32];
	
	if (!MISC::IS_BIT_SET(Local_112.f_1, 12))
	{
		if (!MISC::IS_BIT_SET(iLocal_568, 10))
		{
			if (Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 == 3)
			{
				if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 1))
				{
					if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0))
					{
						if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
						{
							if (!MISC::IS_BIT_SET(iLocal_569, 20))
							{
								if (!func_490())
								{
									if (func_631(0, 1, 1, 1))
									{
										cVar0 = { func_785() };
										func_630(&cVar0, 30000);
										if (Local_112.f_197 != 2)
										{
											func_629(1);
										}
										MISC::SET_BIT(&iLocal_568, 10);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

struct<4> func_785()//Position - 0x1CBDE
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_NAVAIL", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_NAVAIL", 16);
			break;
	}
	return Var0;
}

void func_786()//Position - 0x1CC15
{
	struct<4> Var0;
	
	if (!MISC::IS_BIT_SET(iLocal_568, 4))
	{
		if (!MISC::IS_BIT_SET(Local_112.f_1, 12))
		{
			if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0))
			{
				if (func_631(0, 1, 1, 1))
				{
					if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 1))
					{
						if (MISC::IS_BIT_SET(iLocal_569, 5))
						{
							if (!MISC::IS_BIT_SET(iLocal_569, 6))
							{
								Var0 = { func_790() };
								func_630(&Var0, -1);
								if (Local_112.f_197 != 2)
								{
									func_629(1);
								}
								MISC::SET_BIT(&iLocal_569, 6);
							}
						}
						else if (MISC::IS_BIT_SET(iLocal_569, 8))
						{
							if (!MISC::IS_BIT_SET(iLocal_569, 6))
							{
								Var0 = { func_789() };
								func_630(&Var0, -1);
								if (Local_112.f_197 != 2)
								{
									func_629(1);
								}
								MISC::SET_BIT(&iLocal_569, 6);
							}
						}
						else if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
						{
							if (!MISC::IS_BIT_SET(iLocal_569, 6))
							{
								Var0 = { func_789() };
								func_630(&Var0, -1);
								if (Local_112.f_197 != 2)
								{
									func_629(1);
								}
								MISC::SET_BIT(&iLocal_569, 6);
							}
						}
					}
					else if (!MISC::IS_BIT_SET(Local_112.f_1, 5))
					{
						Var0 = { func_788() };
						func_630(&Var0, 30000);
						if (Local_112.f_197 != 2)
						{
							func_629(1);
						}
					}
					MISC::SET_BIT(&iLocal_568, 4);
				}
			}
			else if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 1))
			{
				if (func_631(0, 1, 1, 1))
				{
					if (!MISC::IS_BIT_SET(iLocal_568, 20))
					{
						Var0 = { func_788() };
						func_630(&Var0, 30000);
						if (Local_112.f_197 != 2)
						{
							func_629(1);
						}
						MISC::SET_BIT(&iLocal_568, 4);
					}
				}
			}
		}
		else
		{
			Var0 = { func_787() };
			func_53(&Var0, 1);
			MISC::SET_BIT(&iLocal_568, 4);
		}
	}
}

struct<4> func_787()//Position - 0x1CDD2
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_EXPD", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_EXPD", 16);
			break;
	}
	return Var0;
}

struct<4> func_788()//Position - 0x1CE09
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_NAVAIL2", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_NAVAIL2", 16);
			break;
	}
	return Var0;
}

struct<4> func_789()//Position - 0x1CE40
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_EXITD", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_EXITD", 16);
			break;
	}
	return Var0;
}

struct<4> func_790()//Position - 0x1CE77
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_EXITP", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_EXITP", 16);
			break;
	}
	return Var0;
}

void func_791(int iParam0)//Position - 0x1CEAE
{
	Global_2531497.f_4821 = iParam0;
}

bool func_792()//Position - 0x1CEBF
{
	return Global_2531497.f_4821;
}

bool func_793(int iParam0)//Position - 0x1CECE
{
	return Global_2437549.f_2708[0 /*80*/].f_1 == iParam0;
}

struct<4> func_794()//Position - 0x1CEE5
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_NDRV2", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_NDRV2", 16);
			break;
	}
	return Var0;
}

void func_795()//Position - 0x1CF1C
{
	if (Local_112.f_197 == 2)
	{
		if (!MISC::IS_BIT_SET(iLocal_569, 30))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!MISC::IS_BIT_SET(iLocal_569, 2))
					{
						if (!func_24(&uLocal_619))
						{
							func_397(&uLocal_619, 0, 0);
						}
						else if (func_23(&uLocal_619, 10000, 0))
						{
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								func_796("BRS_BM_EXP1", -1);
								MISC::SET_BIT(&iLocal_569, 30);
							}
						}
					}
				}
			}
		}
	}
}

void func_796(char[4] cParam0, int iParam1)//Position - 0x1CF9B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

void func_797()//Position - 0x1CFB2
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	if (!MISC::IS_BIT_SET(iLocal_568, 16))
	{
		if (Local_112.f_21 > 1)
		{
			if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						iLocal_2033 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2033, -1, 0) == PLAYER::PLAYER_PED_ID())
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_2033))
							{
								if (((((!func_803(iLocal_2033, 1) && !func_802(iLocal_2033)) && !func_801(iLocal_2033)) && !func_800(iLocal_2033)) && !func_799(iLocal_2033)) && !func_798(iLocal_2033))
								{
									if (func_877(ENTITY::GET_ENTITY_MODEL(iLocal_2033)))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2033, 0, 1);
										MISC::SET_BIT(&iLocal_568, 16);
										iVar2 = 0;
										while (iVar2 < 32)
										{
											ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_2033, 0, Global_1574964[iVar2]);
											iVar2++;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2033))
	{
		if (!func_803(iLocal_2033, 1) && !func_800(iLocal_2033))
		{
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_2033)))
			{
				iVar1 = "PEN_BIKE";
			}
			else
			{
				iVar1 = "PEN_VEHG";
			}
			bVar3 = true;
		}
		else
		{
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_2033)))
			{
				iVar1 = "PEN_PBIKE";
			}
			else
			{
				iVar1 = "PEN_PVEHG";
			}
			bVar3 = true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2033))
	{
		if (func_803(iLocal_2033, 1) || func_800(iLocal_2033))
		{
			if (Local_112.f_21 == 2)
			{
				if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 1))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2033, 0))
					{
						if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 5))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2033))
								{
									if (!func_432(iVar1))
									{
										func_418(iVar1, 0);
									}
								}
								else if (func_432(iVar1))
								{
									func_430();
								}
							}
						}
						else if (func_432(iVar1))
						{
							func_430();
						}
					}
					else if (bVar3)
					{
						if (func_432(iVar1))
						{
							func_430();
						}
					}
				}
			}
		}
	}
	if (MISC::IS_BIT_SET(iLocal_568, 16))
	{
		if (Local_112.f_21 == 2)
		{
			if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2033, 0))
				{
					if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 5))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2033))
							{
								if (!HUD::DOES_BLIP_EXIST(iLocal_2036))
								{
									iLocal_2036 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_2033);
									HUD::SET_BLIP_AS_FRIENDLY(iLocal_2036, true);
								}
								if (!func_432(iVar1))
								{
									func_418(iVar1, 0);
								}
							}
							else if (func_877(ENTITY::GET_ENTITY_MODEL(iLocal_2033)))
							{
								if (HUD::DOES_BLIP_EXIST(iLocal_2036))
								{
									HUD::REMOVE_BLIP(&iLocal_2036);
								}
								if (bVar3)
								{
									if (func_432(iVar1))
									{
										func_430();
									}
								}
							}
						}
					}
					else if (bVar3)
					{
						if (func_432(iVar1))
						{
							func_430();
						}
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_2036))
					{
						HUD::REMOVE_BLIP(&iLocal_2036);
					}
					if (bVar3)
					{
						if (func_432(iVar1))
						{
							func_430();
						}
					}
				}
			}
		}
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_2036) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2033, 0))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (func_877(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					if (iVar0 != iLocal_2033)
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) == PLAYER::PLAYER_PED_ID())
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
							{
								iLocal_2033 = iVar0;
								if (bVar3)
								{
									if (func_432(iVar1))
									{
										func_430();
									}
								}
								HUD::REMOVE_BLIP(&iLocal_2036);
								if (!func_803(iLocal_2033, 1))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2033, 0, 1);
								}
							}
						}
						else if (bVar3)
						{
							if (func_432(iVar1))
							{
								func_430();
							}
						}
					}
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2033, 0))
			{
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_569, 1))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				MISC::SET_BIT(&iLocal_569, 1);
				MISC::CLEAR_BIT(&iLocal_569, 2);
			}
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!MISC::IS_BIT_SET(iLocal_569, 2))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (func_877(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					MISC::CLEAR_BIT(&iLocal_569, 1);
					MISC::CLEAR_BIT(&iLocal_569, 2);
				}
				else
				{
					MISC::SET_BIT(&iLocal_569, 2);
				}
			}
		}
		else if (MISC::IS_BIT_SET(iLocal_569, 2))
		{
			MISC::CLEAR_BIT(&iLocal_569, 2);
		}
	}
	if (Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 == 2)
	{
		if (!MISC::IS_BIT_SET(iLocal_569, 5))
		{
			if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar4, -1, 0) == PLAYER::PLAYER_PED_ID())
						{
							MISC::SET_BIT(&iLocal_569, 5);
							func_430();
						}
					}
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_569, 8))
	{
		if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar4, -1, 0) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar4, -1, 0) != 0)
					{
						MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 0);
						MISC::SET_BIT(&iLocal_569, 8);
					}
				}
			}
		}
	}
}

int func_798(int iParam0)//Position - 0x1D51C
{
	if (Global_2531497.f_314 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_799(int iParam0)//Position - 0x1D535
{
	if (Global_2531497.f_306 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_800(int iParam0)//Position - 0x1D54E
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3) && DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			if (MISC::IS_BIT_SET(iVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_801(int iParam0)//Position - 0x1D597
{
	if (Global_2531497.f_302[0] == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_802(int iParam0)//Position - 0x1D5B3
{
	if (Global_2531497.f_301 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_803(int iParam0, bool bParam1)//Position - 0x1D5CC
{
	if (Global_76577)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_804()//Position - 0x1D60B
{
	char[] cVar0[8];
	
	if (MISC::IS_BIT_SET(Local_112.f_1, 3) || MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 10))
	{
		if (MISC::IS_BIT_SET(iLocal_568, 6))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_Player_Inside_Bubble_Scene"))
			{
				AUDIO::STOP_AUDIO_SCENE("MP_Player_Inside_Bubble_Scene");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_Player_Outside_Bubble_Scene"))
			{
				AUDIO::STOP_AUDIO_SCENE("MP_Player_Outside_Bubble_Scene");
			}
			GRAPHICS::ANIMPOSTFX_STOP("pennedIn");
			GRAPHICS::ANIMPOSTFX_PLAY("PennedInOut", 0, 0);
			MISC::CLEAR_BIT(&iLocal_568, 6);
		}
		if (func_432("PEN_BAREA"))
		{
			func_430();
		}
		if (func_432("PEN_BAREA"))
		{
			func_430();
		}
		if (func_432("PEN_AREA"))
		{
			func_430();
		}
		return;
	}
	if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
	{
		if (func_1010(1))
		{
			if (MISC::IS_BIT_SET(iLocal_568, 6))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_Player_Inside_Bubble_Scene"))
				{
					AUDIO::STOP_AUDIO_SCENE("MP_Player_Inside_Bubble_Scene");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_Player_Outside_Bubble_Scene"))
				{
					AUDIO::STOP_AUDIO_SCENE("MP_Player_Outside_Bubble_Scene");
				}
				GRAPHICS::ANIMPOSTFX_STOP("pennedIn");
				GRAPHICS::ANIMPOSTFX_PLAY("PennedInOut", 0, 0);
				MISC::CLEAR_BIT(&iLocal_568, 6);
			}
			if (func_432("PEN_BAREA"))
			{
				func_430();
			}
			if (func_432("PEN_BAREA"))
			{
				func_430();
			}
			if (func_432("PEN_AREA"))
			{
				func_430();
			}
			func_443();
			return;
		}
	}
	if ((func_882(0) && !MISC::IS_BIT_SET(iLocal_569, 2)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 9))
		{
			MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 9);
		}
		if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 10))
		{
			if (MISC::IS_BIT_SET(Local_112.f_1, 4))
			{
				MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 10);
			}
			else if (MISC::IS_BIT_SET(iLocal_569, 9))
			{
				MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 10);
			}
		}
		if (func_24(&uLocal_601))
		{
			func_22(&uLocal_601);
			PAD::_SET_CONTROL_GROUP_COLOR(0, 255, 255, 255);
		}
		if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 5))
		{
			MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 5);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "OOB_Cancel", "GTAO_FM_Events_Soundset", 0);
			AUDIO::STOP_SOUND(iLocal_2037);
			AUDIO::RELEASE_SOUND_ID(iLocal_2037);
			MISC::CLEAR_BIT(&iLocal_569, 7);
		}
		if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
		{
			if (!func_793(55))
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_2033) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2033, 0))
				{
					if (func_432("PEN_AREA"))
					{
						func_430();
					}
				}
				else if (!HUD::DOES_BLIP_EXIST(iLocal_2036))
				{
					if (!func_432("PEN_AREA"))
					{
						func_418("PEN_AREA", 0);
					}
				}
			}
		}
		else if (!func_432("PEN_AREA"))
		{
			func_418("PEN_AREA", 0);
		}
		if (!MISC::IS_BIT_SET(iLocal_568, 6))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_Player_Outside_Bubble_Scene"))
			{
				AUDIO::STOP_AUDIO_SCENE("MP_Player_Outside_Bubble_Scene");
			}
			AUDIO::START_AUDIO_SCENE("MP_Player_Inside_Bubble_Scene");
			GRAPHICS::ANIMPOSTFX_PLAY("pennedIn", 0, 1);
			MISC::SET_BIT(&iLocal_568, 6);
		}
	}
	else
	{
		if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 9))
		{
			MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 9);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_811();
			if (!MISC::IS_BIT_SET(iLocal_569, 2))
			{
				if (!func_432("PEN_BAREA"))
				{
					func_418("PEN_BAREA", 0);
				}
			}
			else
			{
				if (!func_432("PEN_EXITV"))
				{
					func_418("PEN_EXITV", 0);
				}
				if (!MISC::IS_BIT_SET(iLocal_568, 24))
				{
					if (func_631(0, 1, 1, 1))
					{
						cVar0 = func_873();
						func_630(cVar0, 30000);
						if (Local_112.f_197 != 2)
						{
							func_629(1);
						}
						MISC::SET_BIT(&iLocal_568, 24);
					}
				}
			}
		}
		if (MISC::IS_BIT_SET(iLocal_568, 6))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_Player_Inside_Bubble_Scene"))
			{
				AUDIO::STOP_AUDIO_SCENE("MP_Player_Inside_Bubble_Scene");
			}
			AUDIO::START_AUDIO_SCENE("MP_Player_Outside_Bubble_Scene");
			GRAPHICS::ANIMPOSTFX_STOP("pennedIn");
			GRAPHICS::ANIMPOSTFX_PLAY("PennedInOut", 0, 0);
			MISC::CLEAR_BIT(&iLocal_568, 6);
		}
		if (!func_24(&uLocal_601))
		{
			func_397(&uLocal_601, 0, 0);
		}
		if (!MISC::IS_BIT_SET(iLocal_569, 7))
		{
			MISC::SET_BIT(&iLocal_569, 7);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "OOB_Start", "GTAO_FM_Events_Soundset", 0);
			iLocal_2037 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_2037, "OOB_Timer_Dynamic", "GTAO_FM_Events_Soundset", 0);
			AUDIO::SET_VARIABLE_ON_SOUND(iLocal_2037, "Time", (SYSTEM::TO_FLOAT(func_447()) / 1000f));
		}
		if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 5))
		{
			MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 5);
		}
		if (!MISC::IS_BIT_SET(iLocal_568, 12))
		{
			if (func_24(&uLocal_601))
			{
				if ((func_447() - func_357(&uLocal_601, 0, 0)) >= 0)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						func_444((func_447() - func_357(&uLocal_601, 0, 0)), "PEN_ELM", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
					}
					else
					{
						func_808();
					}
				}
				else
				{
					func_808();
				}
			}
		}
	}
	func_805();
	func_871();
}

void func_805()//Position - 0x1DB00
{
	int iVar0;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) != PLAYER::PLAYER_PED_ID())
	{
		if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0))
		{
			if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 1))
			{
				return;
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
	{
		return;
	}
	if (MISC::IS_BIT_SET(iLocal_569, 2))
	{
		return;
	}
	func_806();
	func_813();
}

void func_806()//Position - 0x1DB96
{
	char cVar0[32];
	
	if (!MISC::IS_BIT_SET(iLocal_568, 21))
	{
		if ((PAD::IS_CONTROL_JUST_PRESSED(0, 75) || PAD::IS_CONTROL_PRESSED(0, 75)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 75))
		{
			MISC::SET_BIT(&iLocal_568, 21);
		}
	}
	else if (!MISC::IS_BIT_SET(iLocal_568, 22))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			cVar0 = { func_807() };
			func_630(&cVar0, 30000);
			if (Local_112.f_197 != 2)
			{
				func_629(1);
			}
			MISC::SET_BIT(&iLocal_568, 22);
		}
	}
}

struct<4> func_807()//Position - 0x1DC17
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_EXV", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_EXV", 16);
			break;
	}
	return Var0;
}

void func_808()//Position - 0x1DC4E
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 1))
	{
		return;
	}
	if (MISC::IS_BIT_SET(iLocal_568, 18))
	{
		MISC::CLEAR_BIT(&iLocal_568, 18);
	}
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 422, false);
	MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 8);
	PAD::_0xCB0360EFEFB2580D(0);
	if (!MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
	{
		func_349();
		MISC::SET_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 1);
		Local_605.f_2 = -1851137829;
		Local_605.f_10 = PLAYER::PLAYER_ID();
		func_809(Local_605, func_810(1));
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
				}
				if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iVar0);
					if (Local_112.f_197 == 2)
					{
						ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
						ENTITY::SET_ENTITY_PROOFS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0, 0, 0, 0, 0, 0, 0, 0);
						MISC::CLEAR_BIT(&iLocal_570, 2);
						NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(0);
					}
					else
					{
						func_872(1);
					}
					if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0)))
					{
						NETWORK::NETWORK_EXPLODE_VEHICLE(iVar0, 1, 0, -1);
					}
					else
					{
						NETWORK::_0x2A5E0621DD815A9A(iVar0, 1, 0, 0);
					}
					func_791(1);
					MISC::SET_BIT(&iLocal_568, 20);
				}
			}
			else
			{
				if (MISC::IS_BIT_SET(iLocal_570, 2))
				{
					ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
					MISC::CLEAR_BIT(&iLocal_570, 2);
				}
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, 0);
				func_791(1);
				MISC::SET_BIT(&iLocal_568, 20);
			}
		}
		else
		{
			func_791(1);
			MISC::SET_BIT(&iLocal_569, 14);
		}
		iLocal_2767 = func_357(&uLocal_621, 0, 0);
	}
	if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 5))
	{
		MISC::CLEAR_BIT(&(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 5);
		AUDIO::STOP_SOUND(iLocal_2037);
		AUDIO::RELEASE_SOUND_ID(iLocal_2037);
		MISC::CLEAR_BIT(&iLocal_569, 7);
	}
	MISC::SET_BIT(&iLocal_568, 12);
}

void func_809(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)//Position - 0x1DE71
{
	Param0 = 564131320;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam14);
	}
}

int func_810(int iParam0)//Position - 0x1DE9E
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_1276(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_811()//Position - 0x1DEFB
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	fVar1 = 80f;
	fVar2 = 0f;
	iVar3 = 130;
	iVar4 = 130;
	fVar0 = ((fVar1 + fVar2) + IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 3)));
	if (NETWORK::GET_NETWORK_TIME() - iLocal_2031) >= SYSTEM::ROUND((60000f / fVar0))
	{
		if (!MISC::IS_BIT_SET(iLocal_568, 15))
		{
			MISC::SET_BIT(&iLocal_568, 15);
		}
		iLocal_2031 = NETWORK::GET_NETWORK_TIME();
	}
	else if (MISC::IS_BIT_SET(iLocal_568, 15))
	{
		MISC::CLEAR_BIT(&iLocal_568, 15);
	}
	if (func_812())
	{
		PAD::SET_PAD_SHAKE(0, 0, 0);
		PAD::SET_PAD_SHAKE(0, iVar3, iVar4);
		PAD::_SET_CONTROL_GROUP_COLOR(0, 255, 0, 0);
	}
	else
	{
		PAD::_SET_CONTROL_GROUP_COLOR(0, 255, 255, 255);
	}
}

bool func_812()//Position - 0x1DF9C
{
	return MISC::IS_BIT_SET(iLocal_568, 15);
}

void func_813()//Position - 0x1DFAD
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
}

void func_814()//Position - 0x1DFC9
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(iLocal_568, 14))
	{
		if ((Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 == 1 || Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 == 2) || (((func_436(PLAYER::PLAYER_ID()) && func_882(0)) && MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0)) && !func_1010(1)))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iVar0, 0, 0);
						MISC::SET_BIT(&iLocal_568, 14);
					}
				}
			}
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 >= 3 || MISC::IS_BIT_SET(iLocal_568, 31))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iVar0, 1, 0);
						MISC::CLEAR_BIT(&iLocal_568, 14);
					}
				}
			}
		}
		else
		{
			MISC::CLEAR_BIT(&iLocal_568, 14);
		}
	}
}

int func_815(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)//Position - 0x1E0EB
{
	if (func_144(PLAYER::PLAYER_ID(), 0) || func_559(PLAYER::PLAYER_ID(), 0))
	{
		if (func_41(PLAYER::PLAYER_ID()) || func_45(PLAYER::PLAYER_ID()))
		{
			bParam2 = false;
		}
	}
	if (NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < iParam0)
	{
		if (bParam2)
		{
			func_817(sParam3, sParam4, 1);
		}
		if (func_764(26, -1))
		{
			func_762(26, -1);
		}
		return 1;
	}
	if (func_24(&(Global_1574647.f_18)))
	{
		if (!func_23(&(Global_1574647.f_18), 7500, 0))
		{
			return 0;
		}
		func_22(&(Global_1574647.f_18));
	}
	if (func_816())
	{
		if (bParam2)
		{
			func_817(sParam3, sParam4, 0);
		}
		if (func_764(26, -1))
		{
			func_762(26, -1);
		}
		return 1;
	}
	if (iParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_817(sParam3, sParam4, 1);
		}
		if (func_764(26, -1))
		{
			func_762(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_816()//Position - 0x1E1E2
{
	return MISC::IS_BIT_SET(Global_1574647.f_1, 0);
}

void func_817(char* sParam0, char* sParam1, bool bParam2)//Position - 0x1E1F5
{
	if ((!MISC::IS_BIT_SET(Global_1574647.f_1, 2) && !func_46(PLAYER::PLAYER_ID())) && !func_375(PLAYER::PLAYER_ID()))
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
		func_134(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		MISC::SET_BIT(&(Global_1574647.f_1), 2);
	}
}

void func_818(var uParam0)//Position - 0x1E26F
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("HUD_MINI_GAME_SOUNDSET");
}

void func_819(int iParam0, int iParam1, bool bParam2)//Position - 0x1E285
{
	if (func_44())
	{
		if (iParam1 == 1)
		{
			if (Global_2531497.f_4395 == -1)
			{
				Global_2531497.f_4395 = Global_262145.f_26329;
			}
			func_165(&(Global_2531497.f_4393), 0, 0);
			if (bParam2)
			{
				if (Global_2531497.f_4398 == -1)
				{
					Global_2531497.f_4398 = Global_262145.f_26330;
				}
				func_165(&(Global_2531497.f_4396), 0, 0);
			}
			else
			{
				Global_1312417 = 0;
				Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_8 = 0;
				func_872(1);
			}
		}
		else
		{
			Global_1312417 = 0;
			Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_8 = 0;
			func_872(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_821()) && !func_820(PLAYER::PLAYER_ID()))
		{
			Global_968396 = 0;
		}
		STATS::_PLAYSTATS_PASSIVE_MODE(0, -1, -1, iParam0);
	}
}

int func_820(int iParam0)//Position - 0x1E34F
{
	if (func_607(iParam0, 1, 0))
	{
		if (Global_1590446[iParam0 /*871*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_821()//Position - 0x1E374
{
	return Global_2448961.f_740;
}

void func_822()//Position - 0x1E383
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_824(&iVar0) && DECORATOR::DECOR_EXIST_ON(iVar0, "Veh_Modded_By_Player"))
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (func_1276(iVar2, 0, 1))
			{
				if (DECORATOR::DECOR_GET_INT(iVar0, "Veh_Modded_By_Player") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar2))
				{
					func_823(func_238(iVar2));
				}
			}
			iVar1++;
		}
	}
}

void func_823(int iParam0)//Position - 0x1E3E6
{
	struct<2> Var0;
	
	Var0 = -1264082575;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 2, iParam0);
	}
}

int func_824(var uParam0)//Position - 0x1E412
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		*uParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec1", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(*uParam0, "bombdec1"))
			{
				return 1;
			}
		}
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(*uParam0, "bombdec"))
			{
				return 1;
			}
		}
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombowner", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(*uParam0, "bombowner"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_825(bool bParam0)//Position - 0x1E48D
{
	if (bParam0)
	{
		Global_1312451 = 1;
	}
	else
	{
		Global_1312451 = 0;
	}
}

void func_826(bool bParam0)//Position - 0x1E4A7
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1, 0))
		{
			Global_2461173 = func_528(PLAYER::PLAYER_ID());
			if (Global_2461173 == -1)
			{
				Global_2461173 = Global_1574647.f_4;
			}
			if (func_849(Global_2461173) == 0)
			{
				if (func_848(1) > 0)
				{
					func_847(26, -1);
				}
			}
			if (func_44())
			{
				func_819(2, 0, 1);
				func_846();
			}
			if (func_1068(0))
			{
				iVar1 = func_50(2480, -1, 0);
				MISC::CLEAR_BIT(&iVar1, 0);
				func_846();
			}
			if (func_1068(func_624(func_528(PLAYER::PLAYER_ID()))))
			{
				iVar1 = func_50(2480, -1, 0);
				MISC::CLEAR_BIT(&iVar1, func_624(func_528(PLAYER::PLAYER_ID())));
				func_846();
			}
			if (func_845())
			{
				func_846();
			}
			MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1, 0))
	{
		if ((!func_844() && !func_843()) && !func_842())
		{
			Global_2461173 = -1;
			func_762(26, -1);
		}
		else if (func_849(Global_2461173) == 0)
		{
			iVar0 = func_829(1);
			if (iVar0 > 0)
			{
				func_827(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_213(1932, 1, -1);
				func_827(joaat("mpply_activity_ended"), 1);
			}
		}
		else if (func_764(26, -1))
		{
			Global_2461173 = -1;
			func_762(26, -1);
		}
		MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 0);
	}
}

void func_827(int iParam0, int iParam1)//Position - 0x1E62D
{
	int iVar0;
	
	iVar0 = func_198(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_828(iParam0))
	{
		func_196(iParam0, iVar0);
	}
	else
	{
		func_200(iParam0, iVar0);
	}
}

int func_828(int iParam0)//Position - 0x1E661
{
	if (Global_1384128)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_829(int iParam0)//Position - 0x1E6E5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2460056 == 0)
	{
		return 0;
	}
	if (func_842())
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (func_841() || func_839()))
		{
			Global_2459003 = 1;
		}
	}
	Global_2460056 = 0;
	if (Global_1315700)
	{
		iVar0 = 1;
	}
	if (Global_2459003)
	{
		iVar0 = 1;
	}
	if (Global_2459002)
	{
		iVar0 = 1;
	}
	if (func_72(Global_110588.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2458925)
	{
		iVar0 = 1;
	}
	if (func_838(512))
	{
		iVar0 = 1;
	}
	if (func_837(128))
	{
		iVar0 = 1;
	}
	if (Global_1315724 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_753())
	{
		iVar0 = 0;
	}
	if (Global_2459495)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_835())
		{
			if (Global_4456448.f_156036 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_376(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_834())
	{
		iVar0 = 0;
	}
	if ((Global_2459003 || Global_2459002) || Global_1315700)
	{
		if (func_839())
		{
			iVar0 = 0;
		}
	}
	Global_2459495 = 0;
	Global_2459002 = 0;
	Global_2459003 = 0;
	Global_1315700 = 0;
	Global_2458925 = 0;
	func_832(&(Global_110588.f_1), 32);
	func_831(512);
	func_830(128);
	return iVar0;
}

void func_830(int iParam0)//Position - 0x1E838
{
	Global_110645 = (Global_110645 - (Global_110645 && iParam0));
}

void func_831(int iParam0)//Position - 0x1E850
{
	Global_110646 = (Global_110646 - (Global_110646 && iParam0));
}

void func_832(var uParam0, int iParam1)//Position - 0x1E868
{
	func_833(uParam0, iParam1);
}

void func_833(var uParam0, var uParam1)//Position - 0x1E878
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_834()//Position - 0x1E88D
{
	if (((Global_1574425 || Global_1574395) || func_376(PLAYER::PLAYER_ID(), 0)) || func_110())
	{
		return 1;
	}
	return 0;
}

int func_835()//Position - 0x1E8C4
{
	switch (func_836())
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

int func_836()//Position - 0x1E8FE
{
	return Global_2449755.f_1.f_2822;
}

bool func_837(int iParam0)//Position - 0x1E90F
{
	return (Global_110645 && iParam0) != 0;
}

bool func_838(int iParam0)//Position - 0x1E920
{
	return (Global_110646 && iParam0) != 0;
}

int func_839()//Position - 0x1E931
{
	if (func_849(Global_2461173))
	{
		return 0;
	}
	if (func_840(PLAYER::PLAYER_ID(), 146))
	{
		return 1;
	}
	return 0;
}

int func_840(int iParam0, int iParam1)//Position - 0x1E95A
{
	if (Global_1628955[iParam0 /*614*/] == iParam1)
	{
		return func_42(iParam0);
	}
	return 0;
}

int func_841()//Position - 0x1E97A
{
	if (func_849(Global_2461173))
	{
		return 0;
	}
	if (func_42(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

bool func_842()//Position - 0x1E9A1
{
	return MISC::IS_BIT_SET(Global_1312424, 0);
}

bool func_843()//Position - 0x1E9B2
{
	return Global_1312842;
}

bool func_844()//Position - 0x1E9BE
{
	return Global_1312873;
}

int func_845()//Position - 0x1E9CA
{
	if (Global_2437549.f_1155.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_846()//Position - 0x1E9E4
{
	if (func_845())
	{
		Global_2437549.f_1155.f_16 = 1;
	}
}

void func_847(int iParam0, int iParam1)//Position - 0x1E9FD
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_52();
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x723C1CE13FBFDB67(0, iParam1);
			break;
		
		default:
			iVar1 = func_763(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (!MISC::IS_BIT_SET(iVar0, iParam0))
			{
				MISC::SET_BIT(&iVar0, iParam0);
				STATS::_0x723C1CE13FBFDB67(iVar0, iParam1);
			}
			break;
	}
}

int func_848(int iParam0)//Position - 0x1EA5A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_1315724 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_753())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_835())
		{
			if (Global_4456448.f_156036 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_376(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_834())
	{
		iVar0 = 0;
	}
	Global_2460056 = 1;
	return iVar0;
}

int func_849(int iParam0)//Position - 0x1EAC6
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_11389)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_11391)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_11388)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_11392)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_11393)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_11394)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_11390)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_11395)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_11396)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_11397)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_11398)
			{
				return 1;
			}
			break;
		
		case 236:
			break;
	}
	return 0;
}

void func_850(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1EBDC
{
	bool bVar0;
	
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
	}
	Global_2531497.f_4745 = -1;
	bVar0 = (func_144(PLAYER::PLAYER_ID(), 0) && func_41(PLAYER::PLAYER_ID()));
	if (bParam6)
	{
		func_776(func_777(iParam0), 1);
	}
	else
	{
		func_858(iParam0, -1);
		if (func_46(PLAYER::PLAYER_ID()))
		{
			Global_1574647.f_3 = iParam0;
		}
		else
		{
			func_857(iParam0);
		}
		Global_1574647.f_4 = -1;
		if (func_46(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1574647.f_1), 5);
		}
		if (((func_44() && !func_373()) || func_372(PLAYER::PLAYER_ID(), 21)) || func_372(PLAYER::PLAYER_ID(), 25))
		{
			MISC::SET_BIT(&(Global_1574647.f_1), 4);
		}
		MISC::CLEAR_BIT(&(Global_1574647.f_1), 17);
		MISC::SET_BIT(&(Global_1574647.f_1), 20);
		if (func_856(iParam0))
		{
			func_855();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_724(fParam1);
		}
		if (fParam2 != 1f)
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(fParam2);
			if (iParam0 == 146)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			}
		}
		if (func_854(iParam0))
		{
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			MISC::SET_BIT(&(Global_1574647.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2391045)
			{
				func_721(1);
				if (func_49(0))
				{
					MISC::SET_BIT(&(Global_1574647.f_1), 9);
				}
				if (!bParam6)
				{
					MISC::SET_BIT(&(Global_1574647.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			func_766(1);
			MISC::SET_BIT(&(Global_1574647.f_1), 12);
		}
		if (bParam5)
		{
			func_853();
			MISC::SET_BIT(&(Global_1574647.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_851(iParam0))
			{
				MISC::SET_BIT(&(Global_1574647.f_1), 21);
			}
		}
	}
	Global_2507562 = 1;
}

int func_851(int iParam0)//Position - 0x1EDC0
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
			return 1;
		
		default:
	}
	if (func_852())
	{
		return 1;
	}
	return 0;
}

int func_852()//Position - 0x1EE1B
{
	switch (func_587())
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

void func_853()//Position - 0x1EE49
{
	MISC::SET_BIT(&(Global_2531497.f_4736), 0);
}

int func_854(int iParam0)//Position - 0x1EE5D
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_42(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_855()//Position - 0x1EE9B
{
	Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_200 = 0;
	MISC::CLEAR_BIT(&(Global_2531497.f_4561), 1);
}

int func_856(int iParam0)//Position - 0x1EEBD
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_857(int iParam0)//Position - 0x1EED7
{
	Global_1628955[PLAYER::PLAYER_ID() /*614*/] = iParam0;
}

void func_858(int iParam0, int iParam1)//Position - 0x1EEEC
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_1068(0) || func_1068(func_624(iVar0)))
		{
			MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 2);
		}
	}
}

void func_859(bool bParam0)//Position - 0x1EF52
{
	if (bParam0)
	{
		if (!func_40(PLAYER::PLAYER_ID(), 9))
		{
			if (func_38(PLAYER::PLAYER_ID()) != 0)
			{
				func_369(9);
			}
		}
	}
	else if (func_40(PLAYER::PLAYER_ID(), 9))
	{
		func_371(9);
	}
}

void func_860(int iParam0)//Position - 0x1EF98
{
	if (!func_45(PLAYER::PLAYER_ID()))
	{
		if (iParam0 || func_38(PLAYER::PLAYER_ID()) != 0)
		{
			func_369(20);
			func_861(func_863());
			if (func_47(PLAYER::PLAYER_ID()))
			{
				if (!MISC::IS_BIT_SET(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1, 8))
				{
					MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 8);
				}
			}
		}
	}
}

void func_861(int iParam0)//Position - 0x1F007
{
	int iVar0;
	
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_862() /*10828*/].f_6168.f_4015[iVar0 /*3*/] == iParam0)
		{
			if (Global_1312570.f_1[iVar0] == -1)
			{
				Global_1312570.f_1[iVar0] = iParam0;
				Global_1312570 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_862()//Position - 0x1F06A
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_863()//Position - 0x1F077
{
	int iVar0;
	
	iVar0 = func_145(PLAYER::PLAYER_ID());
	if (func_865(iVar0) == 0)
	{
		return -1;
	}
	if (func_156(iVar0))
	{
		return 65;
	}
	if (func_161(iVar0))
	{
		return 66;
	}
	if (func_864(iVar0))
	{
		return 63;
	}
	return 64;
}

int func_864(int iParam0)//Position - 0x1F0C3
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_865(int iParam0)//Position - 0x1F0FB
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
			return 0;
		
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

struct<4> func_866()//Position - 0x1F2BB
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_START2", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_START2", 16);
			break;
	}
	return Var0;
}

struct<4> func_867()//Position - 0x1F2F2
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_MPLAY", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_MPLAY", 16);
			break;
	}
	return Var0;
}

struct<4> func_868()//Position - 0x1F329
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_QSTART", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_QSTART", 16);
			break;
	}
	return Var0;
}

void func_869()//Position - 0x1F360
{
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_719();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::CLEAR_BIT(&(Global_1574647.f_1), 8);
	func_870();
}

void func_870()//Position - 0x1F386
{
	if (Global_1672277)
	{
		if (MISC::IS_BIT_SET(Global_1672278, 0))
		{
			MISC::CLEAR_BIT(&Global_2540191, 0);
		}
		if (MISC::IS_BIT_SET(Global_1672278, 1))
		{
			MISC::CLEAR_BIT(&Global_2540191, 1);
		}
		if (MISC::IS_BIT_SET(Global_1672278, 5))
		{
			MISC::CLEAR_BIT(&Global_2540191, 5);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-355737150))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-355737150, 1, 0, 0);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-580979506))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-580979506, 1, 0, 0);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1426452475))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1426452475, 1, 0, 0);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(745417724))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(745417724, 1, 0, 0);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1305304906))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1305304906, 1, 0, 0);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1543175077))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1543175077, 1, 0, 0);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-811770997))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-811770997, 1, 0, 0);
		}
		Global_1672278 = 0;
	}
	Global_1672277 = 0;
}

void func_871()//Position - 0x1F486
{
	PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 116, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 91, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 92, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	if (Local_112.f_197 != 2)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
	}
}

void func_872(bool bParam0)//Position - 0x1F4FF
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_44())
		{
			if (func_1276(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(0);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(1);
			if (Global_1312417.f_1 == 0 || Global_1312417.f_2 == 1)
			{
				Global_1312417.f_2 = 0;
				if (bParam0)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(0, 0);
				}
			}
		}
		else
		{
			if (func_1276(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 0);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1312417.f_1 == 0 || Global_1312417.f_2 == 1)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(1, 0);
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(1);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(0);
		}
	}
}

char* func_873()//Position - 0x1F5F8
{
	char* sVar0;
	
	switch (Local_112.f_197)
	{
		case 0:
			sVar0 = "PEN_VALVEH";
			break;
		
		case 2:
			sVar0 = "CAG_VEH";
			break;
	}
	return sVar0;
}

struct<4> func_874()//Position - 0x1F629
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_NDRV", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_NDRV", 16);
			break;
	}
	return Var0;
}

char* func_875()//Position - 0x1F660
{
	char* sVar0;
	
	switch (Local_112.f_197)
	{
		case 0:
			sVar0 = "PEN_VEH";
			break;
		
		case 2:
			sVar0 = "CAG_VEH";
			break;
	}
	return sVar0;
}

int func_876(int iParam0)//Position - 0x1F691
{
	int iVar0;
	
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
		}
		if (MISC::IS_BIT_SET(iVar0, 10))
		{
			return 0;
		}
	}
	return 1;
}

int func_877(int iParam0)//Position - 0x1F6CE
{
	int iVar0;
	
	iVar0 = 1;
	if ((((iParam0 == joaat("rhino") || iParam0 == joaat("dump")) || iParam0 == joaat("limo2")) || iParam0 == -286046740) || iParam0 == -1254331310)
	{
		iVar0 = 0;
	}
	switch (Local_112.f_197)
	{
		case 0:
			break;
		
		case 2:
			if (((!VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) && !func_878(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
			{
				iVar0 = 0;
			}
			break;
	}
	if (Global_1574647.f_12 != 0 && iParam0 == Global_1574647.f_12)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_878(int iParam0)//Position - 0x1F789
{
	switch (iParam0)
	{
		case joaat("chimera"):
			return 1;
		
		default:
	}
	return 0;
}

void func_879(bool bParam0)//Position - 0x1F7A3
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 4);
	}
}

struct<4> func_880()//Position - 0x1F7D7
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_REGS", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_REGS", 16);
			break;
	}
	return Var0;
}

void func_881()//Position - 0x1F80E
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		MISC::SET_BIT(&(Global_1574647.f_1), 8);
	}
}

int func_882(bool bParam0)//Position - 0x1F84B
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	
	if (Local_112.f_197 == 2)
	{
		if (func_38(PLAYER::PLAYER_ID()) < 2)
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			vVar4 = { func_491() };
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, vVar4, false);
			fVar7 = (func_492() / 2f);
			if (fVar0 <= fVar7)
			{
				if (MISC::ABSF((vVar4.z - vVar1.z)) <= fVar7)
				{
					return 1;
				}
			}
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (fLocal_598 < 10f)
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, vLocal_591, false);
			if (fVar0 <= fLocal_598)
			{
				if (MISC::ABSF((vLocal_591.z - vVar1.z)) <= 10f)
				{
					return 1;
				}
			}
		}
		else
		{
			fVar0 = func_440(PLAYER::PLAYER_PED_ID(), vLocal_591, 1);
			if (fVar0 <= fLocal_598)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_883(char[4] cParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x1F944
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam3);
}

char* func_884()//Position - 0x1F96F
{
	char* sVar0;
	
	switch (Local_112.f_197)
	{
		case 0:
			sVar0 = "PEN_START";
			break;
		
		case 2:
			sVar0 = "CAG_STARC";
			break;
	}
	return sVar0;
}

int func_885()//Position - 0x1F9A0
{
	if (Local_112.f_197 != 2)
	{
		return 1;
	}
	else if (func_908())
	{
		return 1;
	}
	else if (func_38(PLAYER::PLAYER_ID()) >= 2)
	{
		return 1;
	}
	return 0;
}

void func_886(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1F9D6
{
	float fVar0;
	
	if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 != iParam0)
	{
		func_900(-1);
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 = iParam0;
		if (func_899() != -1)
		{
			func_898(-1);
		}
		if (func_897() != -1)
		{
			func_896(-1);
		}
		func_895(iParam2);
		func_893(iParam0);
		if (!func_729(iParam0))
		{
			fVar0 = func_728(iParam0);
			if (fVar0 != 1f)
			{
				func_724(fVar0);
				MISC::SET_BIT(&(Global_1674852.f_3), 1);
			}
		}
		if (!func_732(iParam0) || iParam3)
		{
			if (func_730(iParam0, iParam2) && iParam3 == 1)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				}
				MISC::SET_BIT(&(Global_1674852.f_3), 0);
			}
			else if (PLAYER::GET_MAX_WANTED_LEVEL() < 5)
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				PLAYER::SET_MAX_WANTED_LEVEL(5);
			}
		}
		if (func_44())
		{
			func_369(27);
		}
		if (bParam1)
		{
			if (!func_368())
			{
				func_721(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((MISC::IS_BIT_SET(Global_2531497.f_4555, 1) || MISC::IS_BIT_SET(Global_2531497.f_4555, 4)) || MISC::IS_BIT_SET(Global_2531497.f_4555, 0))
			{
				func_241(6);
			}
			func_892();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, 0);
			MISC::ENABLE_DISPATCH_SERVICE(5, 0);
		}
		if (func_47(PLAYER::PLAYER_ID()) && func_41(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 8);
		}
		func_888();
		if (func_887(iParam0))
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, 0);
			MISC::ENABLE_DISPATCH_SERVICE(5, 0);
			MISC::SET_BIT(&(Global_1674852.f_3), 6);
		}
		Global_2531497.f_6307 = 0;
	}
}

int func_887(int iParam0)//Position - 0x1FBF3
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_888()//Position - 0x1FC3D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = func_891();
	iVar2 = func_119(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (func_246(iVar1, iVar2, 1) || func_889(iVar1, PLAYER::PLAYER_ID()))
			{
				PLAYER::_0x55FCC0C390620314(PLAYER::PLAYER_ID(), iVar1, iVar3);
				PLAYER::_0x55FCC0C390620314(iVar1, PLAYER::PLAYER_ID(), iVar3);
			}
		}
		iVar0++;
	}
}

int func_889(int iParam0, int iParam1)//Position - 0x1FCAD
{
	if (func_131(iParam0, 1) && func_131(iParam1, 1))
	{
		return (func_890(iParam0) == func_119(iParam1) || func_890(iParam1) == func_119(iParam0));
	}
	return 0;
}

int func_890(int iParam0)//Position - 0x1FCEF
{
	if (func_131(iParam0, 1))
	{
		return Global_1628955[func_119(iParam0) /*614*/].f_11.f_484;
	}
	return func_398();
}

int func_891()//Position - 0x1FD1A
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_181();
	if (iVar0 != func_398())
	{
		if (func_1276(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return MISC::IS_BIT_SET(Global_1628955[iVar1 /*614*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_892()//Position - 0x1FD5B
{
	if (MISC::IS_BIT_SET(Global_2531497.f_4555, 1))
	{
		MISC::CLEAR_BIT(&(Global_2531497.f_4555), 1);
	}
	if (MISC::IS_BIT_SET(Global_2531497.f_4555, 4))
	{
		MISC::CLEAR_BIT(&(Global_2531497.f_4555), 4);
	}
	if (MISC::IS_BIT_SET(Global_2531497.f_4555, 6))
	{
		MISC::CLEAR_BIT(&(Global_2531497.f_4555), 6);
	}
	MISC::CLEAR_BIT(&(Global_2531497.f_4555), 0);
	MISC::CLEAR_BIT(&(Global_2531497.f_4555), 2);
	Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_746 = 0;
	if (Global_2531497.f_4557 > 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(Global_2531497.f_4557);
	}
	Global_2531497.f_4556 = 0;
}

void func_893(int iParam0)//Position - 0x1FDF9
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_50(3791, -1, 0);
	iVar1 = func_894(iParam0);
	if (iVar1 != -1)
	{
		MISC::SET_BIT(&iVar0, iVar1);
		func_159(3791, iVar0, -1, 1, 0);
	}
}

int func_894(int iParam0)//Position - 0x1FE2E
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_895(int iParam0)//Position - 0x1FEC5
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1628955[iVar0 /*614*/].f_11.f_181 != iParam0)
	{
		Global_1628955[iVar0 /*614*/].f_11.f_181 = iParam0;
	}
}

void func_896(int iParam0)//Position - 0x1FEF4
{
	if (Global_2531497.f_4898.f_338 != iParam0)
	{
		Global_2531497.f_4898.f_338 = iParam0;
	}
}

int func_897()//Position - 0x1FF17
{
	return Global_2531497.f_4898.f_338;
}

void func_898(int iParam0)//Position - 0x1FF29
{
	if (Global_2531497.f_4898.f_337 != iParam0)
	{
		Global_2531497.f_4898.f_337 = iParam0;
	}
}

int func_899()//Position - 0x1FF4C
{
	return Global_2531497.f_4898.f_337;
}

void func_900(int iParam0)//Position - 0x1FF5E
{
	Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_32 = iParam0;
}

void func_901()//Position - 0x1FF77
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!MISC::IS_BIT_SET(iLocal_569, 9))
	{
		if (MISC::IS_BIT_SET(Local_112.f_1, 4))
		{
			MISC::SET_BIT(&iLocal_569, 9);
		}
	}
	if (Local_112 != 4)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				iVar5 = PLAYER::GET_PLAYER_PED(iVar4);
				if (!func_376(iVar4, 0))
				{
					if (Local_311[iVar0 /*8*/].f_7 == 0)
					{
						if (iVar0 != NETWORK::PARTICIPANT_ID_TO_INT())
						{
							if (MISC::IS_BIT_SET(Local_311[iVar0 /*8*/].f_1, 0))
							{
								iVar1++;
							}
						}
						if (!func_46(iVar4))
						{
							iVar2++;
						}
					}
					if (!MISC::IS_BIT_SET(iLocal_569, 10))
					{
						if (!MISC::IS_BIT_SET(iLocal_569, 9))
						{
							if (MISC::IS_BIT_SET(Local_311[iVar0 /*8*/].f_1, 3))
							{
								MISC::SET_BIT(&iLocal_569, 9);
							}
						}
					}
					if (iVar0 != NETWORK::PARTICIPANT_ID_TO_INT())
					{
						if (Local_112.f_197 == 0 || Local_112.f_197 == 2)
						{
							if (!MISC::IS_BIT_SET(iLocal_2765, iVar0))
							{
								NETWORK::_0xA7C511FA1C5BDA38(iVar4, 0);
								MISC::SET_BIT(&iLocal_2765, iVar0);
							}
						}
						if (Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 == 2)
						{
							if (Local_311[iVar0 /*8*/].f_7 == 2)
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									if (!MISC::IS_BIT_SET(Local_311[iVar0 /*8*/].f_1, 6) && !func_907(PLAYER::PLAYER_PED_ID(), iVar5))
									{
										if (!MISC::IS_BIT_SET(iLocal_572, iVar0))
										{
											if (!MISC::IS_BIT_SET(Local_311[iVar0 /*8*/].f_1, 1))
											{
												MISC::SET_BIT(&iLocal_572, iVar0);
												func_905(iVar4, 441, 1, 0);
												if (Local_112.f_197 == 2)
												{
													func_902(iVar4, 1, 1, 0);
												}
											}
										}
										else if (MISC::IS_BIT_SET(Local_311[iVar0 /*8*/].f_1, 1))
										{
											MISC::CLEAR_BIT(&iLocal_572, iVar0);
											func_905(iVar4, 441, 0, 0);
											if (Local_112.f_197 == 2)
											{
												func_902(iVar4, 1, 0, 0);
											}
										}
									}
								}
							}
							else if (MISC::IS_BIT_SET(iLocal_572, iVar0))
							{
								MISC::CLEAR_BIT(&iLocal_572, iVar0);
								func_905(iVar4, 441, 0, 0);
								if (Local_112.f_197 == 2)
								{
									func_902(iVar4, 1, 0, 0);
								}
							}
						}
						else if (MISC::IS_BIT_SET(iLocal_572, iVar0))
						{
							MISC::CLEAR_BIT(&iLocal_572, iVar0);
							func_905(iVar4, 441, 0, 0);
							if (Local_112.f_197 == 2)
							{
								func_902(iVar4, 1, 0, 0);
							}
						}
						if (Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 > 0)
						{
							if (!MISC::IS_BIT_SET(iLocal_573, iVar0) && !MISC::IS_BIT_SET(Local_112.f_1, 3))
							{
								if (MISC::IS_BIT_SET(Local_311[iVar0 /*8*/].f_1, 9))
								{
									AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iVar5, "MP_Penned_In_Vehicles_In_Bubble_Group", 0f);
									MISC::SET_BIT(&iLocal_573, iVar0);
									if (PED::IS_PED_IN_ANY_VEHICLE(iVar5, 0))
									{
										iVar3 = PED::GET_VEHICLE_PED_IS_IN(iVar5, 0);
										AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iVar3, "MP_Penned_In_Vehicles_In_Bubble_Group", 0f);
									}
								}
							}
							else if (!MISC::IS_BIT_SET(Local_311[iVar0 /*8*/].f_1, 9) || MISC::IS_BIT_SET(Local_112.f_1, 3))
							{
								AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iVar5, 0f);
								MISC::CLEAR_BIT(&iLocal_573, iVar0);
								if (PED::IS_PED_IN_ANY_VEHICLE(iVar5, 0))
								{
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(iVar5, 0);
									AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iVar3, 0f);
								}
							}
						}
						if (Local_112.f_197 == 0 || Local_112.f_197 == 2)
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (!PED::IS_PED_INJURED(iVar5))
								{
									if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 8))
									{
										if (!MISC::IS_BIT_SET(iLocal_574, iVar0))
										{
											if (!MISC::IS_BIT_SET(Local_311[iVar0 /*8*/].f_1, 8))
											{
												if (!func_907(PLAYER::PLAYER_PED_ID(), iVar5))
												{
													if (!MISC::IS_BIT_SET(Local_311[iVar0 /*8*/].f_1, 11))
													{
														MISC::SET_BIT(&iLocal_574, iVar0);
														MISC::SET_BIT(&iLocal_575, iVar4);
														NETWORK::_0xA7C511FA1C5BDA38(iVar4, 1);
													}
												}
											}
										}
										else if (MISC::IS_BIT_SET(Local_311[iVar0 /*8*/].f_1, 8))
										{
											MISC::CLEAR_BIT(&iLocal_574, iVar0);
											MISC::CLEAR_BIT(&iLocal_575, iVar4);
											NETWORK::_0xA7C511FA1C5BDA38(iVar4, 0);
										}
										else if (MISC::IS_BIT_SET(Local_311[iVar0 /*8*/].f_1, 11))
										{
											MISC::CLEAR_BIT(&iLocal_574, iVar0);
											MISC::CLEAR_BIT(&iLocal_575, iVar4);
											NETWORK::_0xA7C511FA1C5BDA38(iVar4, 0);
										}
										else if (func_907(PLAYER::PLAYER_PED_ID(), iVar5))
										{
											MISC::CLEAR_BIT(&iLocal_574, iVar0);
											MISC::CLEAR_BIT(&iLocal_575, iVar4);
											NETWORK::_0xA7C511FA1C5BDA38(iVar4, 0);
										}
									}
									else if (MISC::IS_BIT_SET(iLocal_574, iVar0))
									{
										NETWORK::_0xA7C511FA1C5BDA38(iVar4, 0);
										MISC::CLEAR_BIT(&iLocal_574, iVar0);
										MISC::CLEAR_BIT(&iLocal_575, iVar4);
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_2032 != iVar1)
		{
			iLocal_2032 = iVar1;
		}
		if (iLocal_2764 != iVar2)
		{
			iLocal_2764 = iVar2;
		}
	}
}

void func_902(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x203E5
{
	var uVar0;
	
	if (func_904(iParam0))
	{
		return;
	}
	if (func_903(&(Global_2416074.f_619[iParam0]), &(Global_2416074.f_982[iParam0]), &(Global_2416074.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416074.f_454[iParam0] = iParam1;
		}
	}
}

int func_903(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)//Position - 0x20437
{
	if (bParam5)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			*uParam1 = SCRIPT::GET_ID_OF_THIS_THREAD();
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(*uParam0) || *uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam3)
		{
			if (!MISC::IS_BIT_SET(*iParam2, iParam4))
			{
				*uParam6 = 1;
				MISC::SET_BIT(iParam2, iParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (MISC::IS_BIT_SET(*iParam2, iParam4))
			{
				*uParam6 = 1;
				MISC::CLEAR_BIT(iParam2, iParam4);
			}
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
	}
	return 0;
}

int func_904(int iParam0)//Position - 0x204FC
{
	if (iParam0 == func_398())
	{
		return 1;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_725())
	{
		return 1;
	}
	return 0;
}

void func_905(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x20525
{
	bool bVar0;
	
	if (func_904(iParam0))
	{
		return;
	}
	if (func_903(&(Global_2416074.f_586[iParam0]), &(Global_2416074.f_949[iParam0]), &(Global_2416074.f_388), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416074.f_421[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_906();
		}
	}
}

void func_906()//Position - 0x20580
{
	Global_2416074.f_1515 = 1;
}

bool func_907(int iParam0, int iParam1)//Position - 0x20590
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0) || !PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0))
	{
		return 0;
	}
	return PED::GET_VEHICLE_PED_IS_IN(iParam0, 0) == PED::GET_VEHICLE_PED_IS_IN(iParam1, 0);
}

int func_908()//Position - 0x205CF
{
	if (func_131(PLAYER::PLAYER_ID(), 1))
	{
		if (PLAYER::PLAYER_ID() == func_393())
		{
			return 1;
		}
		else if (func_909(PLAYER::PLAYER_ID(), func_393(), 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_909(int iParam0, int iParam1, bool bParam2)//Position - 0x2060A
{
	return func_910(iParam0, iParam1, bParam2, 1);
}

int func_910(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x2061D
{
	if (iParam1 != func_398() && iParam0 != func_398())
	{
		if (!bParam2)
		{
			if (func_912(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_1628955[iParam0 /*614*/].f_11 != func_398())
		{
			if (iParam1 == Global_1628955[iParam0 /*614*/].f_11)
			{
				return func_911(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_911(int iParam0, int iParam1)//Position - 0x20680
{
	if (func_132(iParam0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_450 == iParam1;
	}
	return 0;
}

int func_912(int iParam0, int iParam1, int iParam2)//Position - 0x206A6
{
	if (iParam1 != func_398())
	{
		if (iParam0 != func_398())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 != func_398())
			{
				if (Global_1628955[iParam0 /*614*/].f_11 == iParam0)
				{
					if (Global_1628955[iParam0 /*614*/].f_11.f_450 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

void func_913(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x206FE
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_528(PLAYER::PLAYER_ID());
		Global_1675140 = iVar0;
		Global_1675140.f_1 = iParam0;
		if (func_181() != func_398())
		{
			Global_1675140.f_2 = func_995(func_181());
			Global_1675140.f_3 = func_994(func_181());
		}
		if (func_248() != func_398())
		{
			func_180(func_248(), &(Global_1675140.f_2), &(Global_1675140.f_3));
		}
		Global_1675140.f_7 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675140.f_28 = func_993(PLAYER::PLAYER_ID());
		Global_1675140.f_13 = 0;
		Global_1675140.f_14 = 0;
		if (func_131(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675140.f_23 = func_992(func_234(1));
		}
	}
	else
	{
		iVar0 = func_145(PLAYER::PLAYER_ID());
	}
	if (bParam2 || func_152(iVar0))
	{
		if (iParam3 != -1 && bParam2)
		{
			iVar0 = iParam3;
		}
		Global_1674879 = iVar0;
		if (func_161(iVar0))
		{
			Global_1674879.f_1 = 4;
		}
		else if (func_991(iVar0))
		{
			Global_1674879.f_1 = 5;
		}
		else if (func_155(iVar0, 0))
		{
			Global_1674879.f_1 = 2;
			if (func_154(iVar0))
			{
				Global_1674879.f_1 = 3;
			}
		}
		else
		{
			Global_1674879.f_1 = 1;
		}
		if (func_181() != func_398())
		{
			Global_1674879.f_4 = func_995(func_181());
			Global_1674879.f_5 = func_994(func_181());
		}
		if (func_248() != func_398())
		{
			func_180(func_248(), &(Global_1674879.f_6), &(Global_1674879.f_7));
		}
		Global_1674879.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1674879.f_27 = 1;
			Global_1674879.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1674879.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1674879.f_40 = func_176(iParam1);
			Global_1674879.f_41 = func_990();
			Global_1674879.f_42 = func_302(PLAYER::PLAYER_ID(), iParam1);
			Global_1674879.f_44 = func_989(PLAYER::PLAYER_ID(), iParam1);
		}
		if (!func_175() || iVar0 != 192)
		{
			Global_1674879.f_53 = 0;
		}
	}
	else if (func_150(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1674996 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1674996 = iParam0 + 1;
		}
		else
		{
			Global_1674996 = func_988(PLAYER::PLAYER_ID());
		}
		switch (iVar0)
		{
			case 225:
				if (func_143(PLAYER::PLAYER_ID()) == 0)
				{
					Global_1674996.f_1 = 0;
				}
				else
				{
					Global_1674996.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1674996.f_1 = 2;
				break;
			
			case 227:
				Global_1674996.f_1 = 3;
				break;
		}
		Global_1674996.f_21 = 1;
		Global_1674996.f_22 = 1;
		if (func_181() != func_398())
		{
			Global_1674996.f_4 = func_995(func_181());
			Global_1674996.f_5 = func_994(func_181());
		}
		if (func_248() != func_398())
		{
			func_180(func_248(), &(Global_1674996.f_4), &(Global_1674996.f_5));
		}
		Global_1674996.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1674996.f_20 = iParam0;
		}
	}
	else if (func_151(iVar0))
	{
		if (iParam3 != -1 && bParam2)
		{
		}
		Global_1674933 = iVar0;
		Global_1674879.f_1 = 1;
		if (func_181() != func_398())
		{
			Global_1674933.f_4 = func_995(func_181());
			Global_1674933.f_5 = func_994(func_181());
		}
		if (func_248() != func_398())
		{
			func_180(func_248(), &(Global_1674933.f_6), &(Global_1674933.f_7));
		}
		Global_1674933.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1674933.f_21 = iParam0;
		}
	}
	else if (func_149(iVar0))
	{
		Global_1675040 = iVar0;
		Global_1675040.f_1 = iParam0;
		Global_1675040.f_21 = 1;
		Global_1675040.f_22 = 1;
		if (func_181() != func_398())
		{
			Global_1675040.f_4 = func_995(func_181());
			Global_1675040.f_5 = func_994(func_181());
		}
		if (func_248() != func_398())
		{
			func_180(func_248(), &(Global_1675040.f_4), &(Global_1675040.f_5));
		}
		Global_1675040.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1675040.f_20 = iParam0;
		}
		Global_1675040.f_27 = func_986(func_52(), 5);
		Global_1675040.f_28 = func_992(func_279(PLAYER::PLAYER_ID()));
		Global_1675040.f_29 = func_50(6107, -1, 0);
		Global_1675040.f_30 = func_50(6103, -1, 0);
		Global_1675040.f_31 = func_50(6104, -1, 0);
		Global_1675040.f_32 = func_50(6106, -1, 0);
		Global_1675040.f_33 = func_50(6105, -1, 0);
		Global_1675040.f_34 = func_50(6108, -1, 0);
		Global_1675040.f_7 = func_984();
		Global_1675040.f_51 = func_992(bParam4);
	}
	else if (func_148(iVar0))
	{
		Global_1675094 = iVar0;
		Global_1675094.f_1 = iParam0;
		Global_1675094.f_21 = 1;
		Global_1675094.f_22 = 1;
		if (func_181() != func_398())
		{
			Global_1675094.f_4 = func_995(func_181());
			Global_1675094.f_5 = func_994(func_181());
		}
		if (func_248() != func_398())
		{
			func_180(func_248(), &(Global_1675094.f_4), &(Global_1675094.f_5));
		}
		Global_1675094.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1675094.f_20 = iParam0;
		}
		Global_1675094.f_24 = func_50(6157, -1, 0);
		Global_1675094.f_25 = func_50(6162, -1, 0);
		Global_1675094.f_26 = func_50(6163, -1, 0);
		Global_1675094.f_27 = func_992((((func_983() || func_982()) || func_981()) || func_980(PLAYER::PLAYER_ID())));
		Global_1675094.f_28 = func_50(6164, -1, 0);
		Global_1675094.f_29 = func_992(func_979());
		Global_1675094.f_31 = 0;
		Global_1675094.f_30 = 0;
		Global_1675094.f_32 = 0;
		Global_1675094.f_33 = 0;
		Global_1675094.f_34 = 0;
		Global_1675094.f_16 = 0;
		Global_1675094.f_7 = func_984();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_141(func_142(PLAYER::PLAYER_ID()))))
	{
		Global_1675228 = iVar0;
		Global_1675228.f_1 = iParam0;
		Global_1675228.f_21 = 1;
		Global_1675228.f_22 = 1;
		Global_1675228.f_7 = func_984();
		if (func_181() != func_398())
		{
			Global_1675228.f_4 = func_995(func_181());
			Global_1675228.f_5 = func_994(func_181());
		}
		if (func_248() != func_398())
		{
			func_180(func_248(), &(Global_1675228.f_4), &(Global_1675228.f_5));
		}
		if (func_181() != -1)
		{
			Global_1675228.f_17 = func_775(func_181());
		}
		Global_1675228.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675228.f_28 = func_993(PLAYER::PLAYER_ID());
		Global_1675228.f_16 = 0;
		Global_1675228.f_24 = 0;
		Global_1675228.f_23 = 0;
		if (func_131(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675228.f_33 = func_992(func_234(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1675175 = iVar0;
		Global_1675175.f_1 = iParam0;
		Global_1675175.f_21 = 1;
		Global_1675175.f_22 = 1;
		Global_1675175.f_7 = func_984();
		Global_1675175.f_24 = 0;
		Global_1675175.f_23 = 0;
		Global_1675175.f_16 = 0;
		if (func_181() != func_398())
		{
			Global_1675175.f_4 = func_995(func_181());
			Global_1675175.f_5 = func_994(func_181());
		}
		Global_1675175.f_28 = func_993(PLAYER::PLAYER_ID());
		if (Global_1675175.f_28)
		{
			Global_1675175.f_29 = func_978(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1675175.f_29 = 0;
		}
		Global_1675175.f_30 = func_962(PLAYER::PLAYER_ID(), 4, -1);
		Global_1675175.f_31 = func_961(PLAYER::PLAYER_ID());
		Global_1675175.f_32 = func_992(func_960(PLAYER::PLAYER_ID()));
		Global_1675175.f_33 = func_992(func_959(PLAYER::PLAYER_ID()));
		Global_1675175.f_34 = func_992(func_958(PLAYER::PLAYER_ID()));
		Global_1675175.f_35 = func_992(func_957(PLAYER::PLAYER_ID()));
		Global_1675175.f_36 = func_956(PLAYER::PLAYER_ID());
		Global_1675175.f_37 = func_955(PLAYER::PLAYER_ID());
		Global_1675175.f_39 = func_954(PLAYER::PLAYER_ID());
		if (func_131(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675175.f_41 = func_992(func_234(1));
		}
		if (func_248() != func_398())
		{
			func_180(func_248(), &(Global_1675175.f_4), &(Global_1675175.f_5));
		}
		Global_1675175.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675175.f_28 = func_993(PLAYER::PLAYER_ID());
	}
	else if (func_139(iVar0))
	{
		Global_1675312 = iVar0;
		Global_1675312.f_1 = func_143(PLAYER::PLAYER_ID());
		Global_1675312.f_2 = func_953();
		Global_1675312.f_3 = func_952();
		Global_1675312.f_4 = func_995(func_181());
		Global_1675312.f_5 = func_994(func_181());
		Global_1675312.f_7 = func_984();
		Global_1675312.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (func_181() != -1)
		{
			Global_1675312.f_17 = func_775(func_181());
		}
		Global_1675312.f_21 = 1;
		Global_1675312.f_22 = 1;
		Global_1675312.f_25 = iParam0;
		Global_1675312.f_27 = func_992(func_951(PLAYER::PLAYER_ID()));
		Global_1675312.f_28 = func_949(21, -1);
	}
	else if (func_138(iVar0))
	{
		Global_1675387 = Global_786547.f_1;
		Global_1675387.f_2 = Global_786547;
		Global_1675387.f_6 = func_995(func_181());
		Global_1675387.f_7 = func_994(func_181());
		if (func_131(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675387.f_8 = func_992(func_234(1));
		}
		if (func_181() != -1)
		{
			Global_1675387.f_9 = func_775(func_181());
		}
		Global_1675387.f_10 = func_984();
		Global_1675387.f_19 = 1;
		Global_1675387.f_20 = 1;
		Global_1675387.f_21 = 0;
		Global_1675387.f_22 = 0;
		Global_1675387.f_23 = 0;
		Global_1703065 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	else
	{
		if (func_181() != func_398())
		{
			Global_1674861 = func_995(func_181());
			Global_1674861.f_1 = func_994(func_181());
		}
		Global_1674861.f_5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674861.f_13 = func_948();
		Global_1674861.f_15 = 0;
		if (func_179(1))
		{
			if (func_248() == func_181())
			{
				Global_1674861.f_15 = 1;
			}
		}
		if (func_947())
		{
			Global_1674996.f_28 = 1;
		}
		if (((((func_946() || func_945()) || func_944()) || func_943()) || func_942()) || func_941(PLAYER::PLAYER_ID()))
		{
			Global_1674996.f_30 = 1;
		}
		if (func_939(func_940(-1881846085)))
		{
			Global_1674996.f_32 = 1;
		}
		if (func_922(func_938(joaat("caddy"))))
		{
			Global_1674996.f_31 = 1;
		}
		if (func_921(PLAYER::PLAYER_ID()) || func_920(PLAYER::PLAYER_ID()))
		{
			Global_1674996.f_29 = 1;
		}
		if (func_919(PLAYER::PLAYER_ID()))
		{
			Global_1674996.f_33 = 1;
			Global_1674996.f_34 = 1;
		}
		if (func_918(PLAYER::PLAYER_ID()))
		{
			Global_1674996.f_36 = 1;
		}
		if (func_917(0, PLAYER::PLAYER_ID()) == 1)
		{
			Global_1674996.f_35 = 1;
		}
		if (func_916(PLAYER::PLAYER_ID(), 3, &uVar1))
		{
			Global_1674996.f_37 = 1;
		}
		if (func_916(PLAYER::PLAYER_ID(), 7, &uVar1))
		{
			Global_1674996.f_38 = 1;
		}
		if (func_915(PLAYER::PLAYER_ID()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_914(PLAYER::PLAYER_ID(), iVar2);
				if (func_299(PLAYER::PLAYER_ID(), iVar3, 0))
				{
					Global_1674996.f_39 = 1;
				}
				if (func_299(PLAYER::PLAYER_ID(), iVar3, 2))
				{
					Global_1674996.f_40 = 1;
				}
				if (func_299(PLAYER::PLAYER_ID(), iVar3, 1))
				{
					Global_1674996.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_914(int iParam0, int iParam1)//Position - 0x212BC
{
	var uVar0;
	
	if (iParam0 == func_398())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_294(Global_1590446[iParam0 /*871*/].f_273.f_179[iParam1 /*12*/]))
	{
		uVar0 = Global_1590446[iParam0 /*871*/].f_273.f_179[iParam1 /*12*/];
	}
	return uVar0;
}

int func_915(int iParam0)//Position - 0x21315
{
	int iVar0;
	
	if (iParam0 == func_398())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_916(int iParam0, int iParam1, var uParam2)//Position - 0x21357
{
	int iVar0;
	
	if (iParam0 != func_398())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_917(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_917(int iParam0, int iParam1)//Position - 0x21391
{
	if (iParam1 == func_398())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 0))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 3))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 6))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 9))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 12))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 15))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 18))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 21))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 1))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 4))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 7))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 10))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 13))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 16))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 19))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 22))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 2))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 5))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 8))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 11))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 14))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 17))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 20))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 23))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

bool func_918(int iParam0)//Position - 0x216E5
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 7);
}

bool func_919(int iParam0)//Position - 0x21701
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 8);
}

bool func_920(int iParam0)//Position - 0x2171E
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 11);
}

bool func_921(int iParam0)//Position - 0x21748
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 10);
}

int func_922(int iParam0)//Position - 0x21772
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_949(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_936(11));
		func_935(iVar1, &iVar0, 1);
		iVar2 = func_949(func_924(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_50(func_923(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_923(int iParam0, int iParam1)//Position - 0x217EE
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2828;
				
				case 40:
					return 2835;
				
				case 41:
					return 2842;
				
				case 42:
					return 2849;
				
				case 43:
					return 2856;
				
				case 44:
					return 2863;
				
				case 45:
					return 2870;
				
				case 46:
					return 2877;
				
				case 47:
					return 2884;
				
				case 48:
					return 2891;
				
				case 49:
					return 2898;
				
				case 50:
					return 2904;
				
				case 51:
					return 2910;
				
				case 52:
					return 2952;
				
				case 53:
					return 2959;
				
				case 54:
					return 2966;
				
				case 55:
					return 2973;
				
				case 56:
					return 2980;
				
				case 57:
					return 2987;
				
				case 58:
					return 2994;
				
				case 59:
					return 3001;
				
				case 60:
					return 3008;
				
				case 61:
					return 3015;
				
				case 62:
					return 3022;
				
				case 63:
					return 3028;
				
				case 64:
					return 3034;
				
				case 65:
					return 3235;
				
				case 66:
					return 3243;
				
				case 67:
					return 3251;
				
				case 68:
					return 3259;
				
				case 69:
					return 3267;
				
				case 70:
					return 3275;
				
				case 71:
					return 3283;
				
				case 72:
					return 3291;
				
				case 73:
					return 3299;
				
				case 74:
					return 3307;
				
				case 75:
					return 3315;
				
				case 76:
					return 3323;
				
				case 77:
					return 3331;
				
				case 78:
					return 3339;
				
				case 79:
					return 3347;
				
				case 80:
					return 3355;
				
				case 81:
					return 3363;
				
				case 82:
					return 3371;
				
				case 83:
					return 3379;
				
				case 84:
					return 3387;
				
				case 85:
					return 3395;
				
				case 86:
					return 3402;
				
				case 87:
					return 3409;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				
				case 89:
					return 4039;
				
				case 90:
					return 4047;
				
				case 91:
					return 4055;
				
				case 92:
					return 4063;
				
				case 93:
					return 4071;
				
				case 94:
					return 4079;
				
				case 95:
					return 4087;
				
				case 96:
					return 4095;
				
				case 97:
					return 4103;
				
				case 98:
					return 4111;
				
				case 99:
					return 4119;
				
				case 100:
					return 4127;
				
				case 101:
					return 4135;
				
				case 102:
					return 4143;
				
				case 103:
					return 4151;
				
				case 104:
					return 4159;
				
				case 105:
					return 4167;
				
				case 106:
					return 4175;
				
				case 107:
					return 4183;
				
				case 108:
					return 4191;
				
				case 109:
					return 4199;
				
				case 110:
					return 4207;
				
				case 111:
					return 4215;
				
				case 112:
					return 4223;
				
				case 113:
					return 4231;
				
				case 114:
					return 4239;
				
				case 115:
					return 4247;
				
				case 116:
					return 4255;
				
				case 117:
					return 4263;
				
				case 118:
					return 4271;
				
				case 119:
					return 4279;
				
				case 120:
					return 4287;
				
				case 121:
					return 4295;
				
				case 122:
					return 4303;
				
				case 123:
					return 4311;
				
				case 124:
					return 4319;
				
				case 125:
					return 4327;
				
				case 126:
					return 4335;
				
				case 127:
					return 4343;
				
				case 128:
					return 4351;
				
				case 129:
					return 4359;
				
				case 130:
					return 4367;
				
				case 131:
					return 4375;
				
				case 132:
					return 4383;
				
				case 133:
					return 4391;
				
				case 134:
					return 4399;
				
				case 135:
					return 4407;
				
				case 136:
					return 4415;
				
				case 137:
					return 4423;
				
				case 138:
					return 4431;
				
				case 139:
					return 4439;
				
				case 140:
					return 4447;
				
				case 141:
					return 4455;
				
				case 142:
					return 4463;
				
				case 143:
					return 4471;
				
				case 144:
					return 4479;
				
				case 145:
					return 4487;
				
				case 146:
					return 4495;
				
				case 147:
					return 4503;
				
				case 148:
					return 4511;
				
				case 149:
					return 4519;
				
				case 150:
					return 4527;
				
				case 151:
					return 4535;
				
				case 152:
					return 4543;
				
				case 153:
					return 4551;
				
				case 154:
					return 4559;
				
				case 155:
					return 4567;
				
				case 156:
					return 4575;
				
				case 157:
					return 4583;
				
				case 158:
					return 5476;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				
				case 160:
					return 5932;
				
				case 161:
					return 5939;
				
				case 162:
					return 5946;
				
				case 163:
					return 5953;
				
				case 164:
					return 5960;
				
				case 165:
					return 5967;
				
				case 166:
					return 5974;
				
				case 167:
					return 5981;
				
				case 168:
					return 5988;
				
				case 169:
					return 5995;
				
				case 170:
					return 6002;
				
				case 171:
					return 6009;
				
				case 172:
					return 6016;
				
				case 173:
					return 6023;
				
				case 174:
					return 6030;
				
				case 175:
					return 6037;
				
				case 176:
					return 6044;
				
				case 177:
					return 6051;
				
				case 178:
					return 6058;
				
				case 179:
					return 6065;
				
				case 180:
					return 6072;
				
				case 181:
					return 6079;
				
				case 182:
					return 6086;
				
				case 183:
					return 6093;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				
				case 185:
					return 6177;
				
				case 186:
					return 6184;
				
				case 187:
					return 6191;
				
				case 188:
					return 6198;
				
				case 189:
					return 6205;
				
				case 190:
					return 6212;
				
				case 191:
					return 6219;
				
				case 192:
					return 6226;
				
				case 193:
					return 6233;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				
				case 195:
					return 6574;
				
				case 196:
					return 6581;
				
				case 197:
					return 6588;
				
				case 198:
					return 6595;
				
				case 199:
					return 6602;
				
				case 200:
					return 6609;
				
				case 201:
					return 6616;
				
				case 202:
					return 6623;
				
				case 203:
					return 6630;
				
				case 204:
					return 6637;
				
				case 205:
					return 6644;
				
				case 206:
					return 6651;
				
				case 207:
					return 6658;
				
				case 208:
					return 6665;
				
				case 209:
					return 6672;
				
				case 210:
					return 6679;
				
				case 211:
					return 6686;
				
				case 212:
					return 6693;
				
				case 213:
					return 6700;
				
				case 214:
					return 6707;
				
				case 215:
					return 6714;
				
				case 216:
					return 6721;
				
				case 217:
					return 6728;
				
				case 218:
					return 6735;
				
				case 219:
					return 6742;
				
				case 220:
					return 6749;
				
				case 221:
					return 6756;
				
				case 222:
					return 6763;
				
				case 223:
					return 6770;
				
				case 224:
					return 6777;
				
				case 225:
					return 6784;
				
				case 226:
					return 6791;
				
				case 227:
					return 6798;
				
				case 228:
					return 6805;
				
				case 229:
					return 6812;
				
				case 230:
					return 6819;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7289;
				
				case 232:
					return 7296;
				
				case 233:
					return 7303;
				
				case 234:
					return 7310;
				
				case 235:
					return 7317;
				
				case 236:
					return 7324;
				
				case 237:
					return 7331;
				
				case 238:
					return 7338;
				
				case 239:
					return 7345;
				
				case 240:
					return 7352;
				
				case 241:
					return 7359;
				
				case 242:
					return 7366;
				
				case 243:
					return 7373;
				
				case 244:
					return 7380;
				
				case 245:
					return 7387;
				
				case 246:
					return 7394;
				
				case 247:
					return 7401;
				
				case 248:
					return 7408;
				
				case 249:
					return 7415;
				
				case 250:
					return 7422;
				
				case 251:
					return 7429;
				
				case 252:
					return 7436;
				
				case 253:
					return 7443;
				
				case 254:
					return 7450;
				
				case 255:
					return 7457;
				
				case 256:
					return 7464;
				
				case 257:
					return 7471;
				
				case 258:
					return 7478;
				
				case 259:
					return 7485;
				
				case 260:
					return 7492;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8012;
				
				case 262:
					return 8019;
				
				case 263:
					return 8026;
				
				case 264:
					return 8033;
				
				case 265:
					return 8040;
				
				case 266:
					return 8047;
				
				case 267:
					return 8054;
				
				case 268:
					return 8061;
				
				case 269:
					return 8068;
				
				case 270:
					return 8075;
				
				case 271:
					return 8536;
				
				case 272:
					return 8543;
				
				case 273:
					return 8550;
				
				case 274:
					return 8557;
				
				case 275:
					return 8564;
				
				case 276:
					return 8571;
				
				case 277:
					return 8578;
				
				case 278:
					return 8585;
				
				case 279:
					return 8592;
				
				case 280:
					return 8599;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2829;
				
				case 40:
					return 2836;
				
				case 41:
					return 2843;
				
				case 42:
					return 2850;
				
				case 43:
					return 2857;
				
				case 44:
					return 2864;
				
				case 45:
					return 2871;
				
				case 46:
					return 2878;
				
				case 47:
					return 2885;
				
				case 48:
					return 2892;
				
				case 49:
					return 2899;
				
				case 50:
					return 2905;
				
				case 51:
					return 2911;
				
				case 52:
					return 2953;
				
				case 53:
					return 2960;
				
				case 54:
					return 2967;
				
				case 55:
					return 2974;
				
				case 56:
					return 2981;
				
				case 57:
					return 2988;
				
				case 58:
					return 2995;
				
				case 59:
					return 3002;
				
				case 60:
					return 3009;
				
				case 61:
					return 3016;
				
				case 62:
					return 3023;
				
				case 63:
					return 3029;
				
				case 64:
					return 3035;
				
				case 65:
					return 3236;
				
				case 66:
					return 3244;
				
				case 67:
					return 3252;
				
				case 68:
					return 3260;
				
				case 69:
					return 3268;
				
				case 70:
					return 3276;
				
				case 71:
					return 3284;
				
				case 72:
					return 3292;
				
				case 73:
					return 3300;
				
				case 74:
					return 3308;
				
				case 75:
					return 3316;
				
				case 76:
					return 3324;
				
				case 77:
					return 3332;
				
				case 78:
					return 3340;
				
				case 79:
					return 3348;
				
				case 80:
					return 3356;
				
				case 81:
					return 3364;
				
				case 82:
					return 3372;
				
				case 83:
					return 3380;
				
				case 84:
					return 3388;
				
				case 85:
					return 3396;
				
				case 86:
					return 3403;
				
				case 87:
					return 3410;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				
				case 89:
					return 4040;
				
				case 90:
					return 4048;
				
				case 91:
					return 4056;
				
				case 92:
					return 4064;
				
				case 93:
					return 4072;
				
				case 94:
					return 4080;
				
				case 95:
					return 4088;
				
				case 96:
					return 4096;
				
				case 97:
					return 4104;
				
				case 98:
					return 4112;
				
				case 99:
					return 4120;
				
				case 100:
					return 4128;
				
				case 101:
					return 4136;
				
				case 102:
					return 4144;
				
				case 103:
					return 4152;
				
				case 104:
					return 4160;
				
				case 105:
					return 4168;
				
				case 106:
					return 4176;
				
				case 107:
					return 4184;
				
				case 108:
					return 4192;
				
				case 109:
					return 4200;
				
				case 110:
					return 4208;
				
				case 111:
					return 4216;
				
				case 112:
					return 4224;
				
				case 113:
					return 4232;
				
				case 114:
					return 4240;
				
				case 115:
					return 4248;
				
				case 116:
					return 4256;
				
				case 117:
					return 4264;
				
				case 118:
					return 4272;
				
				case 119:
					return 4280;
				
				case 120:
					return 4288;
				
				case 121:
					return 4296;
				
				case 122:
					return 4304;
				
				case 123:
					return 4312;
				
				case 124:
					return 4320;
				
				case 125:
					return 4328;
				
				case 126:
					return 4336;
				
				case 127:
					return 4344;
				
				case 128:
					return 4352;
				
				case 129:
					return 4360;
				
				case 130:
					return 4368;
				
				case 131:
					return 4376;
				
				case 132:
					return 4384;
				
				case 133:
					return 4392;
				
				case 134:
					return 4400;
				
				case 135:
					return 4408;
				
				case 136:
					return 4416;
				
				case 137:
					return 4424;
				
				case 138:
					return 4432;
				
				case 139:
					return 4440;
				
				case 140:
					return 4448;
				
				case 141:
					return 4456;
				
				case 142:
					return 4464;
				
				case 143:
					return 4472;
				
				case 144:
					return 4480;
				
				case 145:
					return 4488;
				
				case 146:
					return 4496;
				
				case 147:
					return 4504;
				
				case 148:
					return 4512;
				
				case 149:
					return 4520;
				
				case 150:
					return 4528;
				
				case 151:
					return 4536;
				
				case 152:
					return 4544;
				
				case 153:
					return 4552;
				
				case 154:
					return 4560;
				
				case 155:
					return 4568;
				
				case 156:
					return 4576;
				
				case 157:
					return 4584;
				
				case 158:
					return 5477;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				
				case 160:
					return 5933;
				
				case 161:
					return 5940;
				
				case 162:
					return 5947;
				
				case 163:
					return 5954;
				
				case 164:
					return 5961;
				
				case 165:
					return 5968;
				
				case 166:
					return 5975;
				
				case 167:
					return 5982;
				
				case 168:
					return 5989;
				
				case 169:
					return 5996;
				
				case 170:
					return 6003;
				
				case 171:
					return 6010;
				
				case 172:
					return 6017;
				
				case 173:
					return 6024;
				
				case 174:
					return 6031;
				
				case 175:
					return 6038;
				
				case 176:
					return 6045;
				
				case 177:
					return 6052;
				
				case 178:
					return 6059;
				
				case 179:
					return 6066;
				
				case 180:
					return 6073;
				
				case 181:
					return 6080;
				
				case 182:
					return 6087;
				
				case 183:
					return 6094;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				
				case 185:
					return 6178;
				
				case 186:
					return 6185;
				
				case 187:
					return 6192;
				
				case 188:
					return 6199;
				
				case 189:
					return 6206;
				
				case 190:
					return 6213;
				
				case 191:
					return 6220;
				
				case 192:
					return 6227;
				
				case 193:
					return 6234;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				
				case 195:
					return 6575;
				
				case 196:
					return 6582;
				
				case 197:
					return 6589;
				
				case 198:
					return 6596;
				
				case 199:
					return 6603;
				
				case 200:
					return 6610;
				
				case 201:
					return 6617;
				
				case 202:
					return 6624;
				
				case 203:
					return 6631;
				
				case 204:
					return 6638;
				
				case 205:
					return 6645;
				
				case 206:
					return 6652;
				
				case 207:
					return 6659;
				
				case 208:
					return 6666;
				
				case 209:
					return 6673;
				
				case 210:
					return 6680;
				
				case 211:
					return 6687;
				
				case 212:
					return 6694;
				
				case 213:
					return 6701;
				
				case 214:
					return 6708;
				
				case 215:
					return 6715;
				
				case 216:
					return 6722;
				
				case 217:
					return 6729;
				
				case 218:
					return 6736;
				
				case 219:
					return 6743;
				
				case 220:
					return 6750;
				
				case 221:
					return 6757;
				
				case 222:
					return 6764;
				
				case 223:
					return 6771;
				
				case 224:
					return 6778;
				
				case 225:
					return 6785;
				
				case 226:
					return 6792;
				
				case 227:
					return 6799;
				
				case 228:
					return 6806;
				
				case 229:
					return 6813;
				
				case 230:
					return 6820;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				
				case 232:
					return 7297;
				
				case 233:
					return 7304;
				
				case 234:
					return 7311;
				
				case 235:
					return 7318;
				
				case 236:
					return 7325;
				
				case 237:
					return 7332;
				
				case 238:
					return 7339;
				
				case 239:
					return 7346;
				
				case 240:
					return 7353;
				
				case 241:
					return 7360;
				
				case 242:
					return 7367;
				
				case 243:
					return 7374;
				
				case 244:
					return 7381;
				
				case 245:
					return 7388;
				
				case 246:
					return 7395;
				
				case 247:
					return 7402;
				
				case 248:
					return 7409;
				
				case 249:
					return 7416;
				
				case 250:
					return 7423;
				
				case 251:
					return 7430;
				
				case 252:
					return 7437;
				
				case 253:
					return 7444;
				
				case 254:
					return 7451;
				
				case 255:
					return 7458;
				
				case 256:
					return 7465;
				
				case 257:
					return 7472;
				
				case 258:
					return 7479;
				
				case 259:
					return 7486;
				
				case 260:
					return 7493;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8013;
				
				case 262:
					return 8020;
				
				case 263:
					return 8027;
				
				case 264:
					return 8034;
				
				case 265:
					return 8041;
				
				case 266:
					return 8048;
				
				case 267:
					return 8055;
				
				case 268:
					return 8062;
				
				case 269:
					return 8069;
				
				case 270:
					return 8076;
				
				case 271:
					return 8537;
				
				case 272:
					return 8544;
				
				case 273:
					return 8551;
				
				case 274:
					return 8558;
				
				case 275:
					return 8565;
				
				case 276:
					return 8572;
				
				case 277:
					return 8579;
				
				case 278:
					return 8586;
				
				case 279:
					return 8593;
				
				case 280:
					return 8600;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 49:
					return 2900;
				
				case 50:
					return 2906;
				
				case 51:
					return 2912;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 62:
					return 3024;
				
				case 63:
					return 3030;
				
				case 64:
					return 3036;
				
				case 65:
					return 3237;
				
				case 66:
					return 3245;
				
				case 67:
					return 3253;
				
				case 68:
					return 3261;
				
				case 69:
					return 3269;
				
				case 70:
					return 3277;
				
				case 71:
					return 3285;
				
				case 72:
					return 3293;
				
				case 73:
					return 3301;
				
				case 74:
					return 3309;
				
				case 75:
					return 3317;
				
				case 76:
					return 3325;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case 79:
					return 3349;
				
				case 80:
					return 3357;
				
				case 81:
					return 3365;
				
				case 82:
					return 3373;
				
				case 83:
					return 3381;
				
				case 84:
					return 3389;
				
				case 85:
					return 3397;
				
				case 86:
					return 3404;
				
				case 87:
					return 3411;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				
				case 89:
					return 4041;
				
				case 90:
					return 4049;
				
				case 91:
					return 4057;
				
				case 92:
					return 4065;
				
				case 93:
					return 4073;
				
				case 94:
					return 4081;
				
				case 95:
					return 4089;
				
				case 96:
					return 4097;
				
				case 97:
					return 4105;
				
				case 98:
					return 4113;
				
				case 99:
					return 4121;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4145;
				
				case 103:
					return 4153;
				
				case 104:
					return 4161;
				
				case 105:
					return 4169;
				
				case 106:
					return 4177;
				
				case 107:
					return 4185;
				
				case 108:
					return 4193;
				
				case 109:
					return 4201;
				
				case 110:
					return 4209;
				
				case 111:
					return 4217;
				
				case 112:
					return 4225;
				
				case 113:
					return 4233;
				
				case 114:
					return 4241;
				
				case 115:
					return 4249;
				
				case 116:
					return 4257;
				
				case 117:
					return 4265;
				
				case 118:
					return 4273;
				
				case 119:
					return 4281;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4305;
				
				case 123:
					return 4313;
				
				case 124:
					return 4321;
				
				case 125:
					return 4329;
				
				case 126:
					return 4337;
				
				case 127:
					return 4345;
				
				case 128:
					return 4353;
				
				case 129:
					return 4361;
				
				case 130:
					return 4369;
				
				case 131:
					return 4377;
				
				case 132:
					return 4385;
				
				case 133:
					return 4393;
				
				case 134:
					return 4401;
				
				case 135:
					return 4409;
				
				case 136:
					return 4417;
				
				case 137:
					return 4425;
				
				case 138:
					return 4433;
				
				case 139:
					return 4441;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4465;
				
				case 143:
					return 4473;
				
				case 144:
					return 4481;
				
				case 145:
					return 4489;
				
				case 146:
					return 4497;
				
				case 147:
					return 4505;
				
				case 148:
					return 4513;
				
				case 149:
					return 4521;
				
				case 150:
					return 4529;
				
				case 151:
					return 4537;
				
				case 152:
					return 4545;
				
				case 153:
					return 4553;
				
				case 154:
					return 4561;
				
				case 155:
					return 4569;
				
				case 156:
					return 4577;
				
				case 157:
					return 4585;
				
				case 158:
					return 5478;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				
				case 232:
					return 7298;
				
				case 233:
					return 7305;
				
				case 234:
					return 7312;
				
				case 235:
					return 7319;
				
				case 236:
					return 7326;
				
				case 237:
					return 7333;
				
				case 238:
					return 7340;
				
				case 239:
					return 7347;
				
				case 240:
					return 7354;
				
				case 241:
					return 7361;
				
				case 242:
					return 7368;
				
				case 243:
					return 7375;
				
				case 244:
					return 7382;
				
				case 245:
					return 7389;
				
				case 246:
					return 7396;
				
				case 247:
					return 7403;
				
				case 248:
					return 7410;
				
				case 249:
					return 7417;
				
				case 250:
					return 7424;
				
				case 251:
					return 7431;
				
				case 252:
					return 7438;
				
				case 253:
					return 7445;
				
				case 254:
					return 7452;
				
				case 255:
					return 7459;
				
				case 256:
					return 7466;
				
				case 257:
					return 7473;
				
				case 258:
					return 7480;
				
				case 259:
					return 7487;
				
				case 260:
					return 7494;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8014;
				
				case 262:
					return 8021;
				
				case 263:
					return 8028;
				
				case 264:
					return 8035;
				
				case 265:
					return 8042;
				
				case 266:
					return 8049;
				
				case 267:
					return 8056;
				
				case 268:
					return 8063;
				
				case 269:
					return 8070;
				
				case 270:
					return 8077;
				
				case 271:
					return 8538;
				
				case 272:
					return 8545;
				
				case 273:
					return 8552;
				
				case 274:
					return 8559;
				
				case 275:
					return 8566;
				
				case 276:
					return 8573;
				
				case 277:
					return 8580;
				
				case 278:
					return 8587;
				
				case 279:
					return 8594;
				
				case 280:
					return 8601;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case 79:
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				
				case 262:
					return 8022;
				
				case 263:
					return 8029;
				
				case 264:
					return 8036;
				
				case 265:
					return 8043;
				
				case 266:
					return 8050;
				
				case 267:
					return 8057;
				
				case 268:
					return 8064;
				
				case 269:
					return 8071;
				
				case 270:
					return 8078;
				
				case 271:
					return 8539;
				
				case 272:
					return 8546;
				
				case 273:
					return 8553;
				
				case 274:
					return 8560;
				
				case 275:
					return 8567;
				
				case 276:
					return 8574;
				
				case 277:
					return 8581;
				
				case 278:
					return 8588;
				
				case 279:
					return 8595;
				
				case 280:
					return 8602;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case 79:
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				
				case 262:
					return 8023;
				
				case 263:
					return 8030;
				
				case 264:
					return 8037;
				
				case 265:
					return 8044;
				
				case 266:
					return 8051;
				
				case 267:
					return 8058;
				
				case 268:
					return 8065;
				
				case 269:
					return 8072;
				
				case 270:
					return 8079;
				
				case 271:
					return 8540;
				
				case 272:
					return 8547;
				
				case 273:
					return 8554;
				
				case 274:
					return 8561;
				
				case 275:
					return 8568;
				
				case 276:
					return 8575;
				
				case 277:
					return 8582;
				
				case 278:
					return 8589;
				
				case 279:
					return 8596;
				
				case 280:
					return 8603;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 13:
					return 1723;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 65:
					return 3242;
				
				case 66:
					return 3250;
				
				case 67:
					return 3258;
				
				case 68:
					return 3266;
				
				case 69:
					return 3274;
				
				case 70:
					return 3282;
				
				case 71:
					return 3290;
				
				case 72:
					return 3298;
				
				case 73:
					return 3306;
				
				case 74:
					return 3314;
				
				case 75:
					return 3322;
				
				case 76:
					return 3330;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case 79:
					return 3354;
				
				case 80:
					return 3362;
				
				case 81:
					return 3370;
				
				case 82:
					return 3378;
				
				case 83:
					return 3386;
				
				case 84:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				
				case 89:
					return 4046;
				
				case 90:
					return 4054;
				
				case 91:
					return 4062;
				
				case 92:
					return 4070;
				
				case 93:
					return 4078;
				
				case 94:
					return 4086;
				
				case 95:
					return 4094;
				
				case 96:
					return 4102;
				
				case 97:
					return 4110;
				
				case 98:
					return 4118;
				
				case 99:
					return 4126;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4150;
				
				case 103:
					return 4158;
				
				case 104:
					return 4166;
				
				case 105:
					return 4174;
				
				case 106:
					return 4182;
				
				case 107:
					return 4190;
				
				case 108:
					return 4198;
				
				case 109:
					return 4206;
				
				case 110:
					return 4214;
				
				case 111:
					return 4222;
				
				case 112:
					return 4230;
				
				case 113:
					return 4238;
				
				case 114:
					return 4246;
				
				case 115:
					return 4254;
				
				case 116:
					return 4262;
				
				case 117:
					return 4270;
				
				case 118:
					return 4278;
				
				case 119:
					return 4286;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4310;
				
				case 123:
					return 4318;
				
				case 124:
					return 4326;
				
				case 125:
					return 4334;
				
				case 126:
					return 4342;
				
				case 127:
					return 4350;
				
				case 128:
					return 4358;
				
				case 129:
					return 4366;
				
				case 130:
					return 4374;
				
				case 131:
					return 4382;
				
				case 132:
					return 4390;
				
				case 133:
					return 4398;
				
				case 134:
					return 4406;
				
				case 135:
					return 4414;
				
				case 136:
					return 4422;
				
				case 137:
					return 4430;
				
				case 138:
					return 4438;
				
				case 139:
					return 4446;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4470;
				
				case 143:
					return 4478;
				
				case 144:
					return 4486;
				
				case 145:
					return 4494;
				
				case 146:
					return 4502;
				
				case 147:
					return 4510;
				
				case 148:
					return 4518;
				
				case 149:
					return 4526;
				
				case 150:
					return 4534;
				
				case 151:
					return 4542;
				
				case 152:
					return 4550;
				
				case 153:
					return 4558;
				
				case 154:
					return 4566;
				
				case 155:
					return 4574;
				
				case 156:
					return 4582;
				
				case 157:
					return 4590;
				
				case 158:
					return 5483;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				
				case 262:
					return 8025;
				
				case 263:
					return 8032;
				
				case 264:
					return 8039;
				
				case 265:
					return 8046;
				
				case 266:
					return 8053;
				
				case 267:
					return 8060;
				
				case 268:
					return 8067;
				
				case 269:
					return 8074;
				
				case 270:
					return 8081;
				
				case 271:
					return 8542;
				
				case 272:
					return 8549;
				
				case 273:
					return 8556;
				
				case 274:
					return 8563;
				
				case 275:
					return 8570;
				
				case 276:
					return 8577;
				
				case 277:
					return 8584;
				
				case 278:
					return 8591;
				
				case 279:
					return 8598;
				
				case 280:
					return 8605;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case 79:
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				
				case 262:
					return 8024;
				
				case 263:
					return 8031;
				
				case 264:
					return 8038;
				
				case 265:
					return 8045;
				
				case 266:
					return 8052;
				
				case 267:
					return 8059;
				
				case 268:
					return 8066;
				
				case 269:
					return 8073;
				
				case 270:
					return 8080;
				
				case 271:
					return 8541;
				
				case 272:
					return 8548;
				
				case 273:
					return 8555;
				
				case 274:
					return 8562;
				
				case 275:
					return 8569;
				
				case 276:
					return 8576;
				
				case 277:
					return 8583;
				
				case 278:
					return 8590;
				
				case 279:
					return 8597;
				
				case 280:
					return 8604;
				
				default:
			}
			break;
	}
	return 1629;
}

int func_924(int iParam0)//Position - 0x274F3
{
	int iVar0;
	
	if (iParam0 < 281)
	{
		iVar0 = 0;
		while (iVar0 < 23)
		{
			if (iParam0 >= func_936(iVar0) && iParam0 < func_925(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_925(int iParam0)//Position - 0x27536
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
		
		case 21:
			return 268;
			break;
		
		case 22:
			return 278;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_934(iParam0);
		return func_933(iVar0);
	}
	return (func_926(iParam0, -1) * iParam0 + 1);
}

int func_926(int iParam0, int iParam1)//Position - 0x27668
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_929(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_928(iParam1))
			{
				return 0;
			}
			else if (func_927(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 <= 126 && iParam1 > 0)
			{
				if (Global_1049852[iParam1 /*1951*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049852[iParam1 /*1951*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049852[iParam1 /*1951*/].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
		
		case 22:
			return 10;
			break;
	}
	return 0;
}

int func_927(int iParam0, int iParam1)//Position - 0x2789B
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_928(int iParam0)//Position - 0x27978
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

int func_929(int iParam0, bool bParam1, bool bParam2)//Position - 0x279A7
{
	if (bParam2)
	{
		return func_930(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_930(PLAYER::PLAYER_ID(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_930(int iParam0, bool bParam1)//Position - 0x27A82
{
	if (Global_1590284 != func_398())
	{
		if (!func_932(Global_1590284))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1590284)
			{
				if (MISC::IS_BIT_SET(Global_2424073[Global_1590284 /*421*/].f_195, 24) || func_931(Global_1590284))
				{
					return 1;
				}
			}
		}
	}
	return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_195, 24);
}

int func_931(int iParam0)//Position - 0x27AEE
{
	if (iParam0 != func_398())
	{
		return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_195, 9);
	}
	return 0;
}

int func_932(int iParam0)//Position - 0x27B14
{
	if (iParam0 != func_398())
	{
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 2);
	}
	return 0;
}

int func_933(int iParam0)//Position - 0x27B40
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		default:
	}
	return -1;
}

int func_934(int iParam0)//Position - 0x27B71
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

void func_935(int iParam0, int iParam1, bool bParam2)//Position - 0x27B97
{
	if (Global_262145.f_10163)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1671745[iParam0] - 1);
		if (bParam2)
		{
			if ((MISC::GET_FRAME_COUNT() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_936(int iParam0)//Position - 0x27BD7
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
		
		case 21:
			return 258;
			break;
		
		case 22:
			return 268;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_934(iParam0);
		return func_937(iVar0);
	}
	return (func_926(iParam0, -1) * iParam0);
}

int func_937(int iParam0)//Position - 0x27D06
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		default:
	}
	return -1;
}

int func_938(int iParam0)//Position - 0x27D37
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_939(int iParam0)//Position - 0x27DC0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_935(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_50(func_923(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_940(int iParam0)//Position - 0x27E06
{
	switch (iParam0)
	{
		case -1881846085:
			return 0;
			break;
	}
	return -1;
}

int func_941(int iParam0)//Position - 0x27E23
{
	if (iParam0 != func_398())
	{
		if (Global_1590446[iParam0 /*871*/].f_273.f_335 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_942()//Position - 0x27E4C
{
	return func_50(6542, -1, 0) != 0;
}

bool func_943()//Position - 0x27E5F
{
	return func_50(6163, -1, 0) != 0;
}

bool func_944()//Position - 0x27E72
{
	return func_50(5380, -1, 0) != 0;
}

bool func_945()//Position - 0x27E85
{
	return func_50(3828, -1, 0) != 0;
}

bool func_946()//Position - 0x27E98
{
	return func_50(3223, -1, 0) != 0;
}

bool func_947()//Position - 0x27EAB
{
	return func_50(5379, -1, 0) != 0;
}

int func_948()//Position - 0x27EBE
{
	int iVar0;
	
	iVar0 = func_181();
	if (iVar0 != func_398())
	{
		return Global_1628955[iVar0 /*614*/].f_11.f_98;
	}
	return 0;
}

int func_949(int iParam0, int iParam1)//Position - 0x27EE6
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_52();
	}
	if (iParam0 == 7 && !Global_262145.f_16972)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_934(iParam0);
		if (iVar1 == 0 && func_50(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_950(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_993(PLAYER::PLAYER_ID()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1384285[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2578729[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 23)
		{
			return 0;
		}
		return Global_2578592[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_950(int iParam0)//Position - 0x27FC1
{
	if (!Global_262145.f_23651)
	{
		return 0;
	}
	return func_50(7207, iParam0, 0) != 0;
}

int func_951(int iParam0)//Position - 0x27FE4
{
	if (iParam0 != func_398())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_365 != 0;
	}
	return 0;
}

int func_952()//Position - 0x2800C
{
	if (Global_1674861.f_3 != 0)
	{
		return Global_1674861.f_3;
	}
	return -1;
}

int func_953()//Position - 0x28028
{
	if (Global_1674861.f_2 != 0)
	{
		return Global_1674861.f_2;
	}
	return -1;
}

int func_954(int iParam0)//Position - 0x28044
{
	if (iParam0 != func_398())
	{
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_330, 12);
	}
	return 0;
}

int func_955(int iParam0)//Position - 0x2806E
{
	if (iParam0 != func_398())
	{
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_330, 10);
	}
	return 0;
}

int func_956(int iParam0)//Position - 0x28098
{
	if (iParam0 != func_398())
	{
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_330, 11);
	}
	return 0;
}

bool func_957(int iParam0)//Position - 0x280C2
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 4);
}

bool func_958(int iParam0)//Position - 0x280ED
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 3);
}

bool func_959(int iParam0)//Position - 0x28118
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 2);
}

bool func_960(int iParam0)//Position - 0x28143
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 1);
}

bool func_961(int iParam0)//Position - 0x2816E
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 31);
}

int func_962(int iParam0, int iParam1, int iParam2)//Position - 0x2818B
{
	if (iParam0 == func_398() || !func_977(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_972(iParam0, iParam2);
		
		case 1:
			return func_970(iParam0, iParam2);
		
		case 3:
			return func_969(iParam0);
		
		case 2:
			return func_964(iParam0, iParam2);
		
		case 4:
			return func_963(iParam0);
		
		default:
	}
	return 0;
}

bool func_963(int iParam0)//Position - 0x28207
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 6);
}

int func_964(int iParam0, int iParam1)//Position - 0x28232
{
	switch (iParam1)
	{
		case 10:
			return func_968(iParam0);
		
		case 11:
			return func_967(iParam0);
		
		case 12:
			return func_966(iParam0);
		
		case 13:
			return func_965(iParam0);
		
		default:
	}
	return 0;
}

bool func_965(int iParam0)//Position - 0x2827E
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 15);
}

bool func_966(int iParam0)//Position - 0x282AA
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 14);
}

bool func_967(int iParam0)//Position - 0x282D6
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 13);
}

bool func_968(int iParam0)//Position - 0x28302
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 12);
}

bool func_969(int iParam0)//Position - 0x2832E
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 5);
}

int func_970(int iParam0, int iParam1)//Position - 0x28359
{
	switch (iParam1)
	{
		case 5:
			return func_971(iParam0);
		
		case 6:
			return func_960(iParam0);
		
		case 7:
			return func_959(iParam0);
		
		case 8:
			return func_958(iParam0);
		
		case 9:
			return func_957(iParam0);
		
		default:
	}
	return 0;
}

bool func_971(int iParam0)//Position - 0x283B4
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 0);
}

int func_972(int iParam0, int iParam1)//Position - 0x283DF
{
	switch (iParam1)
	{
		case 0:
			return func_976(iParam0);
		
		case 1:
			return func_975(iParam0);
		
		case 2:
			return func_974(iParam0);
		
		case 3:
			return func_973(iParam0);
		
		case 4:
			return func_961(iParam0);
		
		default:
	}
	return 0;
}

bool func_973(int iParam0)//Position - 0x2843A
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 10);
}

bool func_974(int iParam0)//Position - 0x28466
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 9);
}

bool func_975(int iParam0)//Position - 0x28492
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 8);
}

bool func_976(int iParam0)//Position - 0x284BE
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 7);
}

bool func_977(int iParam0)//Position - 0x284E9
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_978(int iParam0)//Position - 0x284FE
{
	int iVar0;
	
	if (iParam0 == func_398())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_962(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_962(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_962(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_962(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_979()//Position - 0x2855D
{
	return func_50(6156, -1, 0) != 0;
}

int func_980(int iParam0)//Position - 0x28570
{
	if (iParam0 != func_398())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_267 != 0;
	}
	return 0;
}

bool func_981()//Position - 0x28596
{
	return func_50(6164, -1, 0) == 3;
}

bool func_982()//Position - 0x285A9
{
	return func_50(6164, -1, 0) == 2;
}

bool func_983()//Position - 0x285BC
{
	return func_50(6164, -1, 0) == 1;
}

int func_984()//Position - 0x285CF
{
	int iVar0;
	
	if (func_162())
	{
		return 4;
	}
	else if (func_175())
	{
		if (func_326(PLAYER::PLAYER_ID()))
		{
			return 8;
		}
		return 6;
	}
	if (func_234(1))
	{
		iVar0 = func_985(PLAYER::PLAYER_ID());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_179(1))
	{
		if (func_326(func_181()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_985(int iParam0)//Position - 0x28642
{
	if (func_131(iParam0, 1))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_451;
	}
	return -1;
}

int func_986(int iParam0, int iParam1)//Position - 0x28666
{
	return func_50(func_987(iParam1), iParam0, 0);
}

int func_987(int iParam0)//Position - 0x2867B
{
	switch (iParam0)
	{
		case 0:
			return 3898;
		
		case 1:
			return 3927;
		
		case 2:
			return 3931;
		
		case 3:
			return 3935;
		
		case 4:
			return 3939;
		
		case 5:
			return 5450;
		
		default:
	}
	return 3898;
}

int func_988(int iParam0)//Position - 0x286D5
{
	if (func_145(iParam0) == 225 || func_145(iParam0) == 226)
	{
		return func_143(iParam0);
	}
	return -1;
}

int func_989(int iParam0, int iParam1)//Position - 0x28702
{
	int iVar0;
	
	if (iParam0 == func_398())
	{
		return 0;
	}
	if (func_294(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_990()//Position - 0x28761
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_301(PLAYER::PLAYER_ID(), iVar0))
		{
			MISC::SET_BIT(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_991(int iParam0)//Position - 0x28793
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_992(bool bParam0)//Position - 0x287B9
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_993(int iParam0)//Position - 0x287CB
{
	if (iParam0 != func_398())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_318 != 0;
	}
	return 0;
}

int func_994(int iParam0)//Position - 0x287F1
{
	if (iParam0 == func_398())
	{
		return -1;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_8[1];
}

int func_995(int iParam0)//Position - 0x28816
{
	if (iParam0 == func_398())
	{
		return -1;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_8[0];
}

void func_996(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2883B
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_997("kwUfKUus6EuQyNSL8KpY-w");
					func_997("yMTOFLfO2UKwzKrmgPP7kg");
					func_997("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_997("tP5HSeCA0UiHnkRzakdO2Q");
					func_997("uEkrqoerQEmQ0uZRtp4rkw");
					func_997("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_997("UOTaXepxrUOUEU7QtfBvGQ");
					break;
				
				case 6:
					func_997("734uySYXUk2ej47Ni5jlZw");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_997("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_997("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_997("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_997("uEkrqoerQEmQ0uZRtp4rkw");
					func_997("92t91kL3Wkqvl2Kc82cNSA");
					func_997("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_997("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_997("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_997("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_997("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_997("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_997("fOfm7nzMLkav0ldcSCNAzA");
					func_997("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_997("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_997("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_997("Ma78E44OMkGfYPmCPZXUNA");
					func_997("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_997("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_997("gxmtJHj2OUWQDt8nNMy3TQ");
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
							func_997("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_997("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_997("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_997("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_997("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_997("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_997("3AAj-muvN0iHI5IMyGlboA");
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
							func_997("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_997("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_997("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_997("fOfm7nzMLkav0ldcSCNAzA");
							func_997("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_997("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_997("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_997("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_997("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_997("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_997("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_997("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_997("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_997("fOfm7nzMLkav0ldcSCNAzA");
							func_997("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_997("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_997("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_997("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_997("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_997("xIXaDwts7kKz0sbMnwYlCQ");
							break;
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
								case 1:
									func_997("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_997("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_997("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_997("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_997("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_997("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_997("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_997("aGBjo2rKi0yMDLl3a2ATGA");
									func_997("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_997("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_997("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_997("f2lnL6wZPkGWUowu0yLm1Q");
									func_997("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_997("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_997("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_997("W-OJzHlM-0ym9PsIASYZtw");
									func_997("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_997("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_997("TjGz31AMYE6bGCjAIitu6w");
									func_997("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_997("QmlvLMLCwkOvoZlkAstYxw");
									func_997("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_997("BktATxH9R0Wp2x0kWSbqjw");
									func_997("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_997("f2lnL6wZPkGWUowu0yLm1Q");
									break;
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
								case 1:
									func_997("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_997("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_997("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_997("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_997("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_997("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_997("Cl3Gh6-LMkuZ7Z_jPqSE8g");
									break;
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
									func_997("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_997("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_997(int iParam0)//Position - 0x28FC9
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return;
	}
	iVar0 = MISC::GET_HASH_KEY(iParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (MISC::IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_12, 11))
		{
			if (func_998(&(Global_2359721[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!MISC::IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_13, 26))
				{
					MISC::SET_BIT(&(Global_2359721[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_998(var uParam0)//Position - 0x2904D
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_1000(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_999(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_999(var uParam0)//Position - 0x290B4
{
	struct<13> Var0;
	int iVar13;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_1000(uParam0);
	if (iVar13 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_107189[iVar13 /*13*/];
		
		case 62:
			return Global_917806.f_9405[iVar13 /*13*/];
		
		default:
	}
	return Var0;
}

int func_1000(var uParam0)//Position - 0x2912B
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_1002(uParam0->f_1))
	{
		if (func_1001(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (MISC::IS_BIT_SET(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!MISC::IS_BIT_SET(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1218)
			{
				if (MISC::IS_BIT_SET(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (MISC::IS_BIT_SET(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_917806.f_604[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!MISC::IS_BIT_SET(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (MISC::IS_BIT_SET(Global_917806.f_604[iVar0 /*88*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_917806.f_604[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		if (MISC::IS_BIT_SET(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_939452.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (MISC::IS_BIT_SET(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (MISC::IS_BIT_SET(Global_939452.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_939452.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_1001(var uParam0)//Position - 0x2939B
{
	if (Global_2398103)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_2398103.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_1002(int iParam0)//Position - 0x293C0
{
	return iParam0 == 9999;
}

void func_1003()//Position - 0x293CE
{
	struct<4> Var0;
	
	if (!HUD::DOES_BLIP_EXIST(iLocal_589))
	{
		if (func_1007())
		{
			iLocal_589 = HUD::ADD_BLIP_FOR_COORD(func_491());
			if (Local_112.f_197 == 2)
			{
				HUD::SET_BLIP_SPRITE(iLocal_589, 493);
			}
			else
			{
				HUD::SET_BLIP_SPRITE(iLocal_589, 441);
			}
			HUD::SET_BLIP_FLASHES(iLocal_589, 1);
			HUD::SET_BLIP_FLASH_TIMER(iLocal_589, 7000);
			HUD::SET_BLIP_PRIORITY(iLocal_589, 9);
			Var0 = { func_1006() };
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_589, &Var0);
			if (Local_112.f_197 == 2)
			{
				func_1004(&iLocal_589, iLocal_2766);
			}
			else
			{
				func_1004(&iLocal_589, 29);
			}
			if (!MISC::IS_BIT_SET(iLocal_568, 30))
			{
				HUD::FLASH_MINIMAP_DISPLAY();
				MISC::SET_BIT(&iLocal_568, 30);
			}
		}
	}
}

void func_1004(int iParam0, int iParam1)//Position - 0x29476
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		iVar0 = func_1005(iParam1);
		HUD::SET_BLIP_COLOUR(*iParam0, iVar0);
	}
}

int func_1005(int iParam0)//Position - 0x2949C
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

struct<4> func_1006()//Position - 0x29704
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_BLIP", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_BLIP", 16);
			break;
	}
	return Var0;
}

int func_1007()//Position - 0x2973B
{
	if (Local_112.f_197 != 2)
	{
		return 1;
	}
	else if (func_908())
	{
		return 1;
	}
	else if (func_38(PLAYER::PLAYER_ID()) >= 2)
	{
		return 1;
	}
	return 0;
}

void func_1008(vector3 vParam0, bool bParam3)//Position - 0x29771
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_588))
	{
		if (func_1007())
		{
			if (!bParam3)
			{
				iLocal_588 = HUD::ADD_BLIP_FOR_RADIUS(vParam0, fLocal_598);
				if (Local_112.f_197 != 2)
				{
					HUD::SET_BLIP_COLOUR(iLocal_588, 5);
				}
				else
				{
					HUD::SET_BLIP_COLOUR(iLocal_588, 5);
				}
			}
			else
			{
				iLocal_588 = HUD::ADD_BLIP_FOR_RADIUS(func_491(), (func_492() / 2f));
				if (Local_112.f_197 != 2)
				{
					func_1004(&iLocal_588, 29);
				}
				else
				{
					func_1004(&iLocal_588, iLocal_2766);
				}
			}
			HUD::SET_BLIP_ALPHA(iLocal_588, 100);
			HUD::SHOW_HEIGHT_ON_BLIP(iLocal_588, 0);
		}
	}
}

Vector3 func_1009()//Position - 0x297FD
{
	return vLocal_623[0 /*3*/];
}

int func_1010(bool bParam0)//Position - 0x2980D
{
	int iVar0;
	
	if (Local_112.f_197 != 2)
	{
		if (func_375(PLAYER::PLAYER_ID()))
		{
			iVar0 = 1;
		}
		if (func_1068(0))
		{
			iVar0 = 1;
		}
		if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
		{
			if (func_375(PLAYER::PLAYER_ID()))
			{
				iVar0 = 1;
			}
		}
	}
	else
	{
		if (func_368())
		{
			iVar0 = 1;
		}
		if (func_1060())
		{
			iVar0 = 1;
		}
		if (!func_1033(1, 1, 1, 0))
		{
			iVar0 = 1;
		}
		if (func_1032(200))
		{
			iVar0 = 1;
		}
	}
	if (bParam0)
	{
		if (Local_112.f_197 == 2)
		{
			if (!func_1033(1, 1, 1, 0))
			{
				iVar0 = 1;
			}
		}
		else if (!func_1020(0, 1, 1))
		{
			iVar0 = 1;
		}
	}
	if (!func_1012(136, 0, 0))
	{
		iVar0 = 1;
	}
	if (Global_1662552)
	{
		iVar0 = 1;
	}
	if (func_1011(PLAYER::PLAYER_ID()))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1011(int iParam0)//Position - 0x298DF
{
	if (!func_1276(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590446[iParam0 /*871*/].f_35;
}

bool func_1012(int iParam0, bool bParam1, bool bParam2)//Position - 0x29902
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_7686 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_1016(PLAYER::PLAYER_ID(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4718 == 1)
		{
			return 1;
		}
	}
	if (func_1015() || func_1014())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_1013())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1574634[iVar1], iVar0);
}

int func_1013()//Position - 0x29A70
{
	int iVar0;
	
	if (Global_1312447)
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2531497.f_1731, 23))
	{
		return 1;
	}
	if (func_1015())
	{
		return 1;
	}
	if (func_1014())
	{
		return 1;
	}
	iVar0 = Global_1384267[func_51(-1)];
	if (MISC::IS_BIT_SET(iVar0, 7))
	{
		MISC::SET_BIT(&(Global_2531497.f_1731), 23);
		return 1;
	}
	return 0;
}

bool func_1014()//Position - 0x29AD6
{
	return Global_1312861;
}

bool func_1015()//Position - 0x29AE2
{
	return Global_1312863;
}

bool func_1016(int iParam0, int iParam1)//Position - 0x29AEE
{
	var uVar0;
	int iVar1;
	
	if (!func_1019())
	{
		return 0;
	}
	if (func_1018())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_1017(iParam1);
	iVar1 = uVar0;
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_725, iVar1);
}

int func_1017(int iParam0)//Position - 0x29B36
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		default:
	}
	return 1;
}

bool func_1018()//Position - 0x29CA9
{
	return MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_146, 3);
}

int func_1019()//Position - 0x29CC3
{
	if (Global_1312447)
	{
		return 1;
	}
	if (func_1015())
	{
		return 1;
	}
	if (func_1014())
	{
		return 1;
	}
	return func_286(120, -1);
}

int func_1020(bool bParam0, bool bParam1, bool bParam2)//Position - 0x29CF3
{
	if (func_1031(PLAYER::PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_372(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_372(PLAYER::PLAYER_ID(), 25))
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
	if (func_820(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_637())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_1030(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_615())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_45(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	else if (func_38(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	if (func_1029(PLAYER::PLAYER_ID()) != func_398() && func_1029(PLAYER::PLAYER_ID()) == func_119(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_1027(func_1028()) && func_528(PLAYER::PLAYER_ID()) != 236)
	{
		return 0;
	}
	if (func_844())
	{
		return 0;
	}
	if (func_455())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_608(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_611())
	{
		return 0;
	}
	if (func_372(PLAYER::PLAYER_ID(), 0) || func_372(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_372(PLAYER::PLAYER_ID(), 12) || func_372(PLAYER::PLAYER_ID(), 14)) || func_372(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_1026(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!func_663() && !Global_2507941)
		{
			return 0;
		}
	}
	if (func_1025(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_1024())
	{
		return 0;
	}
	if (Global_1662552)
	{
		return 0;
	}
	if (func_1011(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_1023())
	{
		return 0;
	}
	if (func_1022(PLAYER::PLAYER_ID()) && Global_1590095.f_171)
	{
		return 0;
	}
	if (func_1021())
	{
		return 0;
	}
	if (func_632(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_2530556)
	{
		return 0;
	}
	if (Global_1694287)
	{
		return 0;
	}
	return 1;
}

bool func_1021()//Position - 0x29F2B
{
	return Global_1676879.f_443;
}

int func_1022(int iParam0)//Position - 0x29F3A
{
	if (func_928(Global_1590446[iParam0 /*871*/].f_273.f_26))
	{
		return 1;
	}
	return 0;
}

int func_1023()//Position - 0x29F5C
{
	if (Global_4254407.f_904 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_1024()//Position - 0x29F74
{
	return Global_98721.f_346 > 0;
}

bool func_1025(int iParam0)//Position - 0x29F85
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 11);
}

int func_1026(int iParam0, bool bParam1, bool bParam2)//Position - 0x29FA1
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_1027(int iParam0)//Position - 0x2A00B
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

int func_1028()//Position - 0x2A055
{
	return Global_2437549.f_2708[0 /*80*/].f_1;
}

int func_1029(int iParam0)//Position - 0x2A069
{
	return Global_1628955[iParam0 /*614*/].f_11.f_35;
}

int func_1030(int iParam0)//Position - 0x2A07E
{
	if (Global_2424073[iParam0 /*421*/].f_261.f_4 != 0 || Global_2424073[iParam0 /*421*/].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_1031(int iParam0, int iParam1)//Position - 0x2A0B2
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_5, iParam1);
}

int func_1032(int iParam0)//Position - 0x2A0CD
{
	if (!func_175() && !func_131(PLAYER::PLAYER_ID(), 1))
	{
		if (!func_41(PLAYER::PLAYER_ID()))
		{
			if (func_368())
			{
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		
		case 151:
			break;
		
		case 152:
			break;
	}
	return 0;
}

int func_1033(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x2A126
{
	if (func_1031(PLAYER::PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_372(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_372(PLAYER::PLAYER_ID(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			return 0;
		}
	}
	if (!func_555(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_820(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_637())
	{
		return 0;
	}
	if (func_615())
	{
		return 0;
	}
	if (func_844())
	{
		return 0;
	}
	if (func_455())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_608(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_611())
	{
		return 0;
	}
	if (func_372(PLAYER::PLAYER_ID(), 0) || func_372(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_372(PLAYER::PLAYER_ID(), 12) || func_372(PLAYER::PLAYER_ID(), 14)) || func_372(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_1053(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_1038())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_1024())
		{
			return 0;
		}
	}
	if (Global_1662552)
	{
		return 0;
	}
	if (func_1011(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_1023())
	{
		return 0;
	}
	if (func_1037(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((func_1036(PLAYER::PLAYER_ID()) && func_1035(PLAYER::PLAYER_ID()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_1034())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 4))
	{
		return 0;
	}
	if (func_1030(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_632(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

bool func_1034()//Position - 0x2A31A
{
	return Global_1676879.f_4090 != -1;
}

int func_1035(int iParam0)//Position - 0x2A32B
{
	if (iParam0 != func_398() && func_1276(iParam0, 1, 1))
	{
		return Global_2424073[iParam0 /*421*/].f_309.f_14;
	}
	return -1;
}

int func_1036(int iParam0)//Position - 0x2A35C
{
	if (iParam0 != func_398() && func_1276(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309, 3);
	}
	return 0;
}

int func_1037(int iParam0)//Position - 0x2A390
{
	if (MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 14))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 11))
	{
		return 1;
	}
	return 0;
}

int func_1038()//Position - 0x2A3CF
{
	int iVar0;
	
	iVar0 = func_145(PLAYER::PLAYER_ID());
	if (((func_928(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_26) || func_1052(PLAYER::PLAYER_ID())) || func_1051(PLAYER::PLAYER_ID())) || func_1050(PLAYER::PLAYER_ID()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_1049(PLAYER::PLAYER_ID()))
	{
		if (func_161(iVar0) || func_991(iVar0))
		{
			return 1;
		}
	}
	if (func_1048(PLAYER::PLAYER_ID()))
	{
		if (func_991(iVar0))
		{
			return 1;
		}
	}
	if (func_1047(PLAYER::PLAYER_ID()))
	{
		if (func_150(iVar0))
		{
			return 1;
		}
	}
	if (func_1046(PLAYER::PLAYER_ID()))
	{
		if (func_149(iVar0))
		{
			return 1;
		}
	}
	if (func_1045(PLAYER::PLAYER_ID()))
	{
		if (func_148(iVar0))
		{
			return 1;
		}
	}
	if (func_1044(PLAYER::PLAYER_ID()))
	{
		if (func_1043(iVar0))
		{
			return 1;
		}
	}
	if (func_1042(PLAYER::PLAYER_ID(), 0))
	{
		if (func_864(iVar0))
		{
			if (func_1041(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (func_1039(PLAYER::PLAYER_ID()))
	{
		if (func_138(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1039(int iParam0)//Position - 0x2A528
{
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_1040(int iParam0)//Position - 0x2A56F
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
	}
	return -1;
}

int func_1041(int iParam0)//Position - 0x2A937
{
	if (func_1029(iParam0) != func_398())
	{
		return func_1029(iParam0) == func_119(iParam0);
	}
	return 0;
}

int func_1042(int iParam0, bool bParam1)//Position - 0x2A95D
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == -1988428699)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_398())
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_1043(int iParam0)//Position - 0x2A9EB
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_1044(int iParam0)//Position - 0x2AA17
{
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_1045(int iParam0)//Position - 0x2AA5E
{
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_1046(int iParam0)//Position - 0x2AAA5
{
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_1047(int iParam0)//Position - 0x2AAEB
{
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_1048(int iParam0)//Position - 0x2AB31
{
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_1049(int iParam0)//Position - 0x2AB77
{
	if (func_927(Global_1590446[iParam0 /*871*/].f_273.f_26, -1))
	{
		return 1;
	}
	return 0;
}

int func_1050(int iParam0)//Position - 0x2AB9A
{
	if (func_929(Global_1590446[iParam0 /*871*/].f_273.f_26, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_1051(int iParam0)//Position - 0x2ABBE
{
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_1052(int iParam0)//Position - 0x2AC04
{
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 0;
			}
		}
	}
	return 0;
}

int func_1053(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)//Position - 0x2AC4A
{
	if (Global_1590446[iParam0 /*871*/].f_273.f_26 > 0)
	{
		if (bParam1)
		{
			if (MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_1052(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_1048(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_1051(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_1047(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_1046(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_1045(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_1059(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_1044(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_1058(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_1042(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_1057(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_1039(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_1056(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_1055(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_1054(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1054(int iParam0)//Position - 0x2ADA9
{
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_1055(int iParam0)//Position - 0x2ADF0
{
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_1056(int iParam0)//Position - 0x2AE37
{
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_1057(int iParam0)//Position - 0x2AE7E
{
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_1058(int iParam0)//Position - 0x2AEC5
{
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_1059(int iParam0)//Position - 0x2AF0C
{
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_398())
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_1060()//Position - 0x2AF6C
{
	return 0;
}

void func_1061()//Position - 0x2AF75
{
	int iVar0;
	
	if (iLocal_2766 == 0)
	{
		iVar0 = func_393();
		if (iVar0 != func_398())
		{
			iLocal_2766 = func_1062(iVar0);
		}
	}
}

int func_1062(int iParam0)//Position - 0x2AF9C
{
	int iVar0;
	
	iVar0 = func_130(iParam0);
	if (iVar0 != -1)
	{
		return func_128(iVar0);
	}
	return 1;
}

var func_1063()//Position - 0x2AFBC
{
	return Global_262145.f_11147;
}

float func_1064()//Position - 0x2AFCB
{
	if (Local_112.f_197 != 2)
	{
		return Global_262145.f_11144;
	}
	return Global_262145.f_18349;
}

void func_1065()//Position - 0x2AFEF
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	if (!func_31(vLocal_623[0 /*3*/], 0f, 0f, 0f, 0))
	{
		return;
	}
	switch (Local_112.f_167)
	{
		case 0:
			vLocal_623[0 /*3*/] = { 1476.637f, -2436.075f, 65.2401f };
			vLocal_623[1 /*3*/] = { 1591.158f, -1980.835f, 93.9884f };
			vLocal_623[2 /*3*/] = { 1105.58f, -1734.014f, 34.7122f };
			vLocal_623[3 /*3*/] = { 674.1869f, -1733.183f, 28.3527f };
			vLocal_623[4 /*3*/] = { 276.4475f, -1857.687f, 25.8607f };
			vLocal_623[5 /*3*/] = { 241.6554f, -1713.72f, 28.1339f };
			vLocal_623[6 /*3*/] = { 276.8612f, -1670.451f, 28.3137f };
			vLocal_623[7 /*3*/] = { 158.5084f, -1512.412f, 28.1416f };
			vLocal_623[8 /*3*/] = { 154.052f, -1394.604f, 28.3049f };
			vLocal_623[9 /*3*/] = { 297.3363f, -1202.901f, 28.1848f };
			vLocal_623[10 /*3*/] = { 216.0453f, -1130.863f, 28.3051f };
			vLocal_623[11 /*3*/] = { 303.6096f, -1124.259f, 28.4586f };
			vLocal_623[12 /*3*/] = { 349.6563f, -953.8064f, 28.4776f };
			vLocal_623[13 /*3*/] = { 228.3761f, -955.8815f, 28.3232f };
			iLocal_1493 = 14;
			break;
		
		case 1:
			vLocal_623[0 /*3*/] = { -1900.185f, 2050.775f, 139.7211f };
			vLocal_623[1 /*3*/] = { -1797.919f, 1886.775f, 147.74f };
			vLocal_623[2 /*3*/] = { -1710.175f, 1885.316f, 160.217f };
			vLocal_623[3 /*3*/] = { -1610.52f, 2033.944f, 101.5237f };
			vLocal_623[4 /*3*/] = { -1517.004f, 2141.703f, 55.0511f };
			vLocal_623[5 /*3*/] = { -1337.505f, 2178.097f, 51.2807f };
			vLocal_623[6 /*3*/] = { -1147.637f, 2341.332f, 98.8094f };
			vLocal_623[7 /*3*/] = { -934.5955f, 2262.843f, 140.7183f };
			vLocal_623[8 /*3*/] = { -730.47f, 2344.86f, 68.405f };
			vLocal_623[9 /*3*/] = { -708.701f, 2426.99f, 61.1469f };
			vLocal_623[10 /*3*/] = { -573.3401f, 2500.494f, 50.3152f };
			vLocal_623[11 /*3*/] = { -545.0461f, 2672.93f, 44.4979f };
			vLocal_623[12 /*3*/] = { -436.4757f, 2756.389f, 44.6457f };
			vLocal_623[13 /*3*/] = { -322.5151f, 2775.025f, 61.0514f };
			vLocal_623[14 /*3*/] = { -149.1279f, 2737.515f, 54.9277f };
			vLocal_623[15 /*3*/] = { 222.302f, 2489.443f, 53.8394f };
			vLocal_623[16 /*3*/] = { 569.7415f, 2454.868f, 58.4488f };
			vLocal_623[17 /*3*/] = { 753.546f, 2518.788f, 72.1194f };
			vLocal_623[18 /*3*/] = { 924.3738f, 2593.375f, 60.2089f };
			vLocal_623[19 /*3*/] = { 965.1749f, 2621.371f, 45.0674f };
			vLocal_623[20 /*3*/] = { 1039.363f, 2671.289f, 38.5509f };
			iLocal_1493 = 21;
			break;
		
		case 2:
			vLocal_623[0 /*3*/] = { 2304f, 1469f, 66f };
			vLocal_623[1 /*3*/] = { 2131f, 2031f, 96f };
			vLocal_623[2 /*3*/] = { 2059f, 2868f, 52f };
			vLocal_623[3 /*3*/] = { 2707f, 3485f, 64f };
			vLocal_623[4 /*3*/] = { 2855f, 3729f, 47f };
			vLocal_623[5 /*3*/] = { 2506f, 4153f, 41f };
			vLocal_623[6 /*3*/] = { 2885f, 4472f, 51f };
			vLocal_623[7 /*3*/] = { 2786.236f, 4941.378f, 32.6857f };
			vLocal_623[8 /*3*/] = { 2890.608f, 5034.026f, 30.7725f };
			vLocal_623[9 /*3*/] = { 3058.765f, 5052.091f, 24.441f };
			vLocal_623[10 /*3*/] = { 3063.052f, 5094.116f, 23.0524f };
			vLocal_623[11 /*3*/] = { 3131.718f, 5101.371f, 20.6628f };
			vLocal_623[12 /*3*/] = { 3175.018f, 5118.771f, 16.61f };
			vLocal_623[13 /*3*/] = { 3228.467f, 5133.4f, 18.321f };
			vLocal_623[14 /*3*/] = { 3283.499f, 5150.864f, 17.6323f };
			vLocal_623[15 /*3*/] = { 3297.67f, 5150.701f, 17.3023f };
			vLocal_623[16 /*3*/] = { 3320.565f, 5151.295f, 17.3289f };
			vLocal_623[17 /*3*/] = { 3337.017f, 5151.827f, 17.4344f };
			vLocal_623[18 /*3*/] = { 3348.801f, 5152.016f, 18.4475f };
			iLocal_1493 = 19;
			break;
		
		case 3:
			func_1067();
			vLocal_623[0 /*3*/] = { -1210.197f, -2437.739f, 12.9452f };
			vLocal_623[1 /*3*/] = { -1342.587f, -2667.462f, 12.9449f };
			vLocal_623[2 /*3*/] = { -1220.798f, -2861.65f, 12.9455f };
			vLocal_623[3 /*3*/] = { -1126.435f, -2699.413f, 22.00294f };
			vLocal_623[4 /*3*/] = { -1017.039f, -2713.215f, 34.56547f };
			vLocal_623[5 /*3*/] = { -936.5955f, -2585.454f, 21.38621f };
			vLocal_623[6 /*3*/] = { -841.7922f, -2569.529f, 16.83603f };
			vLocal_623[7 /*3*/] = { -723.1095f, -2396.833f, 17.03123f };
			vLocal_623[8 /*3*/] = { -616.2985f, -2279.408f, 13.04065f };
			vLocal_623[9 /*3*/] = { -677.7834f, -2181.811f, 14.21462f };
			vLocal_623[10 /*3*/] = { -613.1539f, -2109.985f, 21.81665f };
			vLocal_623[11 /*3*/] = { -475.038f, -2148f, 17.4868f };
			vLocal_623[12 /*3*/] = { -336.4597f, -2143.653f, 13.9572f };
			vLocal_623[13 /*3*/] = { -256.3312f, -2131.896f, 22.1408f };
			vLocal_623[14 /*3*/] = { -162.249f, -2084.908f, 26.85073f };
			vLocal_623[15 /*3*/] = { -161.8921f, -2043.37f, 21.8606f };
			vLocal_623[16 /*3*/] = { -154.6475f, -2009.529f, 21.8819f };
			vLocal_623[17 /*3*/] = { -186.8038f, -2005.34f, 26.6204f };
			vLocal_623[18 /*3*/] = { -216.7214f, -1999.232f, 26.7554f };
			iLocal_1493 = 19;
			break;
		
		case 4:
			vLocal_623[0 /*3*/] = { 105.443f, 7028.38f, 10.2844f };
			vLocal_623[1 /*3*/] = { 157.7284f, 6525.143f, 30.6533f };
			vLocal_623[2 /*3*/] = { -59.2422f, 6653.804f, 28.721f };
			vLocal_623[3 /*3*/] = { -168.4514f, 6476.554f, 29.0678f };
			vLocal_623[4 /*3*/] = { -111.8802f, 6419.246f, 30.4455f };
			vLocal_623[5 /*3*/] = { -154.2424f, 6339.732f, 30.6176f };
			vLocal_623[6 /*3*/] = { -93.9484f, 6279.499f, 30.3124f };
			vLocal_623[7 /*3*/] = { -182.7545f, 6195.686f, 30.1968f };
			vLocal_623[8 /*3*/] = { -260.1141f, 6185.812f, 30.4429f };
			vLocal_623[9 /*3*/] = { -304.2122f, 6227.968f, 30.4542f };
			vLocal_623[10 /*3*/] = { -473.7666f, 6066.529f, 29.34f };
			vLocal_623[11 /*3*/] = { -715.7206f, 6049.093f, -0.0726f };
			vLocal_623[12 /*3*/] = { -811.3691f, 5957.282f, 19.4103f };
			vLocal_623[13 /*3*/] = { -897.6384f, 6050.558f, 43.1834f };
			iLocal_1493 = 14;
			break;
		
		case 6:
			vLocal_623[0 /*3*/] = { 770.8729f, -232.9857f, 65.1145f };
			vLocal_623[1 /*3*/] = { 838.7502f, -256.9497f, 64.6297f };
			vLocal_623[2 /*3*/] = { 903.3063f, -221.7793f, 68.666f };
			vLocal_623[3 /*3*/] = { 935.5661f, -166.9423f, 73.4974f };
			vLocal_623[4 /*3*/] = { 935.502f, -150.7537f, 73.7236f };
			vLocal_623[5 /*3*/] = { 903.4067f, -123.2328f, 76.2099f };
			vLocal_623[6 /*3*/] = { 881.9219f, -103.4221f, 78.4213f };
			vLocal_623[7 /*3*/] = { 880.8146f, -80.6718f, 77.7643f };
			vLocal_623[8 /*3*/] = { 924.9553f, -20.0444f, 77.7643f };
			vLocal_623[9 /*3*/] = { 953.8312f, -19.9404f, 77.764f };
			vLocal_623[10 /*3*/] = { 968.3574f, -3.2091f, 79.9909f };
			vLocal_623[11 /*3*/] = { 1009.373f, 64.5172f, 79.9909f };
			vLocal_623[12 /*3*/] = { 1004.334f, 70.7857f, 79.9909f };
			vLocal_623[13 /*3*/] = { 961.9669f, 97.0632f, 79.9909f };
			vLocal_623[14 /*3*/] = { 974.4698f, 116.5434f, 79.9909f };
			vLocal_623[15 /*3*/] = { 1023.872f, 169.1899f, 79.9905f };
			vLocal_623[16 /*3*/] = { 1023.795f, 181.0932f, 79.8559f };
			vLocal_623[17 /*3*/] = { 1003.224f, 191.8311f, 79.9087f };
			vLocal_623[18 /*3*/] = { 945.6973f, 122.5348f, 79.7235f };
			vLocal_623[19 /*3*/] = { 931.2999f, 104.402f, 78.3884f };
			vLocal_623[20 /*3*/] = { 884.1791f, 48.7134f, 77.631f };
			vLocal_623[21 /*3*/] = { 820.7046f, -20.0586f, 79.7007f };
			vLocal_623[22 /*3*/] = { 824.5161f, -65.76f, 79.6442f };
			vLocal_623[23 /*3*/] = { 854.3058f, -113.1723f, 78.3323f };
			vLocal_623[24 /*3*/] = { 847.928f, -140.3758f, 77.3008f };
			vLocal_623[25 /*3*/] = { 825.0543f, -176.4968f, 71.886f };
			vLocal_623[26 /*3*/] = { 803.1815f, -203.4303f, 71.9304f };
			vLocal_623[27 /*3*/] = { 772.341f, -248.5203f, 65.1143f };
			vLocal_623[28 /*3*/] = { 766.5759f, -268.8026f, 65.4267f };
			vLocal_623[29 /*3*/] = { 751.6126f, -300.7643f, 58.892f };
			vLocal_623[30 /*3*/] = { 723.4518f, -321.204f, 51.9976f };
			vLocal_623[31 /*3*/] = { 691.1819f, -341.8955f, 39.0741f };
			vLocal_623[32 /*3*/] = { 644.3198f, -353.9926f, 29.0699f };
			vLocal_623[33 /*3*/] = { 628.4379f, -365.0165f, 23.5751f };
			vLocal_623[34 /*3*/] = { 607.2872f, -399.7075f, 23.7997f };
			vLocal_623[35 /*3*/] = { 599.2954f, -478.0787f, 23.7562f };
			vLocal_623[36 /*3*/] = { 566.7018f, -553.8478f, 23.7368f };
			vLocal_623[37 /*3*/] = { 538.7103f, -643.3187f, 23.7397f };
			vLocal_623[38 /*3*/] = { 508.0503f, -682.8132f, 24.2827f };
			vLocal_623[39 /*3*/] = { 456.5249f, -685.2498f, 26.8735f };
			vLocal_623[40 /*3*/] = { 456.4284f, -821.7599f, 26.5584f };
			vLocal_623[41 /*3*/] = { 406.9605f, -830.3608f, 28.3306f };
			vLocal_623[42 /*3*/] = { 406.1039f, -876.7354f, 28.3905f };
			vLocal_623[43 /*3*/] = { 402.9865f, -938.0498f, 28.4551f };
			vLocal_623[44 /*3*/] = { 404.8474f, -950.4066f, 28.4433f };
			vLocal_623[45 /*3*/] = { 416.964f, -954.1458f, 28.4324f };
			vLocal_623[46 /*3*/] = { 485.1107f, -954.6018f, 26.3922f };
			vLocal_623[47 /*3*/] = { 496.7718f, -957.6362f, 26.1527f };
			vLocal_623[48 /*3*/] = { 500.8447f, -966.6793f, 26.4009f };
			vLocal_623[49 /*3*/] = { 499.6066f, -1038.969f, 27.357f };
			vLocal_623[50 /*3*/] = { 482.2613f, -1070.182f, 28.2113f };
			vLocal_623[51 /*3*/] = { 462.5394f, -1125.002f, 28.3189f };
			vLocal_623[52 /*3*/] = { 452.1105f, -1131.479f, 28.4588f };
			vLocal_623[53 /*3*/] = { 411.7074f, -1132.298f, 28.4582f };
			vLocal_623[54 /*3*/] = { 401.2792f, -1126.838f, 28.4871f };
			vLocal_623[55 /*3*/] = { 398.4309f, -1108.895f, 28.4618f };
			vLocal_623[56 /*3*/] = { 398.5521f, -1011.637f, 28.4602f };
			vLocal_623[57 /*3*/] = { 391.9118f, -1000.936f, 28.4172f };
			vLocal_623[58 /*3*/] = { 384.0373f, -999.108f, 28.4212f };
			vLocal_623[59 /*3*/] = { 280.6655f, -998.2255f, 28.2999f };
			vLocal_623[60 /*3*/] = { 274.747f, -997.3961f, 28.3239f };
			vLocal_623[61 /*3*/] = { 254.8134f, -990.8824f, 28.2714f };
			vLocal_623[62 /*3*/] = { 244.1949f, -980.8467f, 28.3573f };
			vLocal_623[63 /*3*/] = { 244.9183f, -958.1761f, 28.3041f };
			vLocal_623[64 /*3*/] = { 265.0497f, -896.29f, 27.9801f };
			vLocal_623[65 /*3*/] = { 259.8165f, -869.8301f, 28.273f };
			vLocal_623[66 /*3*/] = { 226.9681f, -839.9088f, 29.2632f };
			vLocal_623[67 /*3*/] = { 224.8172f, -815.2034f, 29.5278f };
			vLocal_623[68 /*3*/] = { 223.5029f, -758.9518f, 29.8235f };
			vLocal_623[69 /*3*/] = { 234.023f, -729.6653f, 29.8196f };
			vLocal_623[70 /*3*/] = { 268.7956f, -743.4052f, 33.64f };
			vLocal_623[71 /*3*/] = { 224.9066f, -736.6704f, 33.2013f };
			vLocal_623[72 /*3*/] = { 172.0603f, -721.1422f, 32.1324f };
			vLocal_623[73 /*3*/] = { 75.1364f, -688.8935f, 30.6218f };
			vLocal_623[74 /*3*/] = { 112.1867f, -577.6705f, 30.47f };
			vLocal_623[75 /*3*/] = { 58.5058f, -554.6415f, 32.7843f };
			vLocal_623[76 /*3*/] = { -35.6377f, -545.9135f, 38.9156f };
			vLocal_623[77 /*3*/] = { -77.4362f, -537.5404f, 39.1736f };
			iLocal_1493 = 78;
			break;
		
		case 7:
			vLocal_623[0 /*3*/] = { 174.5999f, -2079.691f, 16.7487f };
			vLocal_623[1 /*3*/] = { 152.0048f, -2053.034f, 17.3217f };
			vLocal_623[2 /*3*/] = { 150.1924f, -2031.796f, 17.3217f };
			vLocal_623[3 /*3*/] = { 152.2747f, -2013.484f, 17.1417f };
			vLocal_623[4 /*3*/] = { 156.9549f, -2002.106f, 17.2518f };
			vLocal_623[5 /*3*/] = { 164.4116f, -1991.569f, 17.2641f };
			vLocal_623[6 /*3*/] = { 205.3133f, -1942.91f, 20.535f };
			vLocal_623[7 /*3*/] = { 211.3832f, -1932.955f, 21.5803f };
			vLocal_623[8 /*3*/] = { 208.533f, -1920.367f, 22.2848f };
			vLocal_623[9 /*3*/] = { 196.7893f, -1907.76f, 22.6872f };
			vLocal_623[10 /*3*/] = { 182.3722f, -1898.424f, 22.5606f };
			vLocal_623[11 /*3*/] = { 108.5148f, -1864.741f, 23.4672f };
			vLocal_623[12 /*3*/] = { 86.2217f, -1841.194f, 24.2874f };
			vLocal_623[13 /*3*/] = { 43.7092f, -1805.996f, 24.4549f };
			vLocal_623[14 /*3*/] = { 17.8062f, -1777.351f, 28.2925f };
			vLocal_623[15 /*3*/] = { 21.8941f, -1750.064f, 28.3031f };
			vLocal_623[16 /*3*/] = { 44.7469f, -1721.505f, 28.3031f };
			vLocal_623[17 /*3*/] = { 63.9396f, -1707.914f, 28.2608f };
			vLocal_623[18 /*3*/] = { 76.1903f, -1681.886f, 28.3242f };
			vLocal_623[19 /*3*/] = { 86.0975f, -1653.219f, 28.3469f };
			vLocal_623[20 /*3*/] = { 116.5378f, -1632.756f, 28.3471f };
			vLocal_623[21 /*3*/] = { 152.7263f, -1602.194f, 28.3415f };
			vLocal_623[22 /*3*/] = { 143.9074f, -1564.712f, 28.2093f };
			vLocal_623[23 /*3*/] = { 145.1265f, -1550.904f, 28.1529f };
			vLocal_623[24 /*3*/] = { 153.1621f, -1536.478f, 28.3099f };
			vLocal_623[25 /*3*/] = { 156.3295f, -1515.14f, 28.1416f };
			vLocal_623[26 /*3*/] = { 148.7433f, -1498.556f, 28.1416f };
			vLocal_623[27 /*3*/] = { 128.6626f, -1476.814f, 28.1416f };
			vLocal_623[28 /*3*/] = { 104.1582f, -1414.095f, 28.1921f };
			vLocal_623[29 /*3*/] = { 83.6966f, -1380.602f, 28.2915f };
			vLocal_623[30 /*3*/] = { 50.458f, -1383.531f, 28.2943f };
			vLocal_623[31 /*3*/] = { -1.9688f, -1383.943f, 28.3059f };
			vLocal_623[32 /*3*/] = { -24.7047f, -1377.866f, 28.1996f };
			vLocal_623[33 /*3*/] = { -92.3499f, -1377.083f, 28.3276f };
			vLocal_623[34 /*3*/] = { -130.9038f, -1387.612f, 28.4695f };
			vLocal_623[35 /*3*/] = { -148.5784f, -1398.707f, 29.0652f };
			vLocal_623[36 /*3*/] = { -148.0146f, -1415.724f, 29.7007f };
			vLocal_623[37 /*3*/] = { -140.9057f, -1431.51f, 29.8724f };
			vLocal_623[38 /*3*/] = { -172.1216f, -1469.894f, 31.0887f };
			vLocal_623[39 /*3*/] = { -200.9877f, -1510.344f, 30.632f };
			vLocal_623[40 /*3*/] = { -228.8574f, -1535.488f, 30.6189f };
			vLocal_623[41 /*3*/] = { -242.2845f, -1539.538f, 30.5592f };
			vLocal_623[42 /*3*/] = { -256.5187f, -1570.94f, 30.9427f };
			vLocal_623[43 /*3*/] = { -268.7609f, -1629.413f, 30.8488f };
			vLocal_623[44 /*3*/] = { -255.8852f, -1689.953f, 30.8488f };
			vLocal_623[45 /*3*/] = { -224.6088f, -1727.568f, 31.5576f };
			vLocal_623[46 /*3*/] = { -182.6528f, -1758.622f, 28.8952f };
			vLocal_623[47 /*3*/] = { -148.3479f, -1787.901f, 28.7988f };
			vLocal_623[48 /*3*/] = { -122.57f, -1807.999f, 27.3089f };
			vLocal_623[49 /*3*/] = { -73.0749f, -1876.611f, 7.596f };
			vLocal_623[50 /*3*/] = { -39.416f, -1901.59f, 9.9099f };
			vLocal_623[51 /*3*/] = { 7.5512f, -1955.098f, 4.4117f };
			vLocal_623[52 /*3*/] = { 55.3094f, -2021.311f, 0.4589f };
			vLocal_623[53 /*3*/] = { 69.4583f, -2095.662f, 0.2051f };
			vLocal_623[54 /*3*/] = { 49.8936f, -2146.708f, 1.5683f };
			vLocal_623[55 /*3*/] = { 41.0185f, -2157.943f, 4.4323f };
			vLocal_623[56 /*3*/] = { 24.7718f, -2164.335f, 8.1637f };
			vLocal_623[57 /*3*/] = { -2.2288f, -2158.396f, 9.2835f };
			vLocal_623[58 /*3*/] = { -22.7019f, -2158.668f, 9.3111f };
			vLocal_623[59 /*3*/] = { -38.4647f, -2199.598f, 6.8117f };
			vLocal_623[60 /*3*/] = { -45.3264f, -2212.231f, 6.8117f };
			vLocal_623[61 /*3*/] = { -55.3598f, -2222.49f, 6.8117f };
			vLocal_623[62 /*3*/] = { -82.3358f, -2223.918f, 6.8117f };
			vLocal_623[63 /*3*/] = { -131.381f, -2223.081f, 6.8117f };
			vLocal_623[64 /*3*/] = { -150.9629f, -2233.896f, 6.8117f };
			vLocal_623[65 /*3*/] = { -158.0284f, -2244.346f, 6.8117f };
			vLocal_623[66 /*3*/] = { -181.3241f, -2250.348f, 6.8117f };
			vLocal_623[67 /*3*/] = { -262.8565f, -2253.175f, 6.9858f };
			vLocal_623[68 /*3*/] = { -294.0698f, -2233.267f, 7.2625f };
			vLocal_623[69 /*3*/] = { -297.9966f, -2218.1f, 8.5029f };
			vLocal_623[70 /*3*/] = { -313.9771f, -2206.949f, 8.4925f };
			vLocal_623[71 /*3*/] = { -327.7408f, -2209.155f, 7.2109f };
			vLocal_623[72 /*3*/] = { -364.1004f, -2262.198f, 6.6082f };
			vLocal_623[73 /*3*/] = { -374.4983f, -2272.426f, 6.6082f };
			vLocal_623[74 /*3*/] = { -375.8295f, -2282.563f, 6.6082f };
			iLocal_1493 = 75;
			break;
		
		case 8:
			vLocal_623[0 /*3*/] = { -2653.049f, 1505.637f, 116.9031f };
			vLocal_623[1 /*3*/] = { -2663.594f, 1470.743f, 122.7177f };
			vLocal_623[2 /*3*/] = { -2681.781f, 1433.767f, 120.1581f };
			vLocal_623[3 /*3*/] = { -2701.294f, 1403.518f, 112.9536f };
			vLocal_623[4 /*3*/] = { -2717.157f, 1376.807f, 105.1303f };
			vLocal_623[5 /*3*/] = { -2748.094f, 1336.441f, 89.7583f };
			vLocal_623[6 /*3*/] = { -2772.662f, 1306.338f, 82.0139f };
			vLocal_623[7 /*3*/] = { -2807.116f, 1282.497f, 71.1255f };
			vLocal_623[8 /*3*/] = { -2860.727f, 1279.025f, 58.2654f };
			vLocal_623[9 /*3*/] = { -2904.519f, 1259.097f, 40.7003f };
			vLocal_623[10 /*3*/] = { -2921.85f, 1257.993f, 37.2144f };
			vLocal_623[11 /*3*/] = { -2945.241f, 1243.167f, 31.8372f };
			vLocal_623[12 /*3*/] = { -2971.91f, 1212.205f, 23.1993f };
			vLocal_623[13 /*3*/] = { -2993.662f, 1208.524f, 18.0748f };
			vLocal_623[14 /*3*/] = { -3038.551f, 1209.651f, 14.0096f };
			vLocal_623[15 /*3*/] = { -3107.971f, 1226.064f, 9.658f };
			vLocal_623[16 /*3*/] = { -3199.303f, 1252.489f, 4.3497f };
			vLocal_623[17 /*3*/] = { -3218.386f, 1252.134f, 2.8398f };
			vLocal_623[18 /*3*/] = { -3236.587f, 1234.213f, 2.2581f };
			vLocal_623[19 /*3*/] = { -3257.229f, 1188.7f, 1.6827f };
			vLocal_623[20 /*3*/] = { -3268.847f, 1110.996f, 1.1708f };
			vLocal_623[21 /*3*/] = { -3286.199f, 1046.93f, 2.2738f };
			vLocal_623[22 /*3*/] = { -3291.467f, 984.0225f, 2.3848f };
			vLocal_623[23 /*3*/] = { -3291.941f, 951.162f, 1.1346f };
			vLocal_623[24 /*3*/] = { -3284.428f, 937.3236f, 1.0801f };
			vLocal_623[25 /*3*/] = { -3266.242f, 925.3865f, 1.6379f };
			vLocal_623[26 /*3*/] = { -3234.646f, 874.3011f, 1.695f };
			vLocal_623[27 /*3*/] = { -3219.083f, 829.6504f, 1.2816f };
			vLocal_623[28 /*3*/] = { -3198.246f, 813.9434f, 2.7979f };
			vLocal_623[29 /*3*/] = { -3165.079f, 798.1581f, 6.5002f };
			vLocal_623[30 /*3*/] = { -3143.296f, 790.5193f, 7.0137f };
			vLocal_623[31 /*3*/] = { -3124.516f, 789.1387f, 16.9934f };
			vLocal_623[32 /*3*/] = { -3094.212f, 777.5895f, 18.5135f };
			vLocal_623[33 /*3*/] = { -3086.898f, 756.6077f, 19.5227f };
			vLocal_623[34 /*3*/] = { -3093.979f, 726.5751f, 20.3224f };
			vLocal_623[35 /*3*/] = { -3082.263f, 693.1727f, 15.8985f };
			vLocal_623[36 /*3*/] = { -3056.846f, 661.2524f, 9.0803f };
			vLocal_623[37 /*3*/] = { -3043.558f, 636.358f, 6.5869f };
			vLocal_623[38 /*3*/] = { -3024.625f, 583.9476f, 6.8377f };
			vLocal_623[39 /*3*/] = { -3019.437f, 554.1682f, 6.6729f };
			vLocal_623[40 /*3*/] = { -3021.381f, 512.9918f, 6.234f };
			vLocal_623[41 /*3*/] = { -3031.198f, 466.6764f, 5.5596f };
			vLocal_623[42 /*3*/] = { -3049.935f, 424.7576f, 5.5665f };
			vLocal_623[43 /*3*/] = { -3066.961f, 377.4491f, 6.0668f };
			vLocal_623[44 /*3*/] = { -3057.431f, 345.7499f, 8.5701f };
			vLocal_623[45 /*3*/] = { -3046.631f, 292.6304f, 18.9137f };
			vLocal_623[46 /*3*/] = { -3041.826f, 279.6342f, 16.9957f };
			vLocal_623[47 /*3*/] = { -3035.306f, 269.0156f, 14.7234f };
			vLocal_623[48 /*3*/] = { -3012.362f, 233.9675f, 15.2325f };
			vLocal_623[49 /*3*/] = { -3013.188f, 213.9026f, 15.268f };
			vLocal_623[50 /*3*/] = { -3011.671f, 196.2197f, 15.146f };
			vLocal_623[51 /*3*/] = { -3006.454f, 177.695f, 14.8855f };
			vLocal_623[52 /*3*/] = { -2994.663f, 154.9807f, 14.3746f };
			vLocal_623[53 /*3*/] = { -2979.672f, 136.2853f, 13.7377f };
			vLocal_623[54 /*3*/] = { -2950.832f, 112.3324f, 12.904f };
			vLocal_623[55 /*3*/] = { -2921.329f, 97.7186f, 12.7178f };
			vLocal_623[56 /*3*/] = { -2851.489f, 75.2672f, 13.5427f };
			vLocal_623[57 /*3*/] = { -2836.61f, 32.9254f, 12.8794f };
			vLocal_623[58 /*3*/] = { -2831.988f, 18.7339f, 10.4085f };
			vLocal_623[59 /*3*/] = { -2824.56f, -8.0105f, 6.1181f };
			vLocal_623[60 /*3*/] = { -2803.649f, -81.9439f, -0.221f };
			vLocal_623[61 /*3*/] = { -2780.207f, -96.5313f, 0.3584f };
			vLocal_623[62 /*3*/] = { -2736.673f, -109.0135f, 0.5296f };
			vLocal_623[63 /*3*/] = { -2700.451f, -141.5591f, 0.9655f };
			vLocal_623[64 /*3*/] = { -2671.83f, -175.5449f, 1.0133f };
			vLocal_623[65 /*3*/] = { -2630.613f, -198.3817f, 2.1479f };
			vLocal_623[66 /*3*/] = { -2547.985f, -249.0516f, 2.2801f };
			vLocal_623[67 /*3*/] = { -2473.847f, -295.0556f, 2.7219f };
			vLocal_623[68 /*3*/] = { -2434.094f, -326.3175f, 3.0194f };
			vLocal_623[69 /*3*/] = { -2410.113f, -331.2293f, 2.6013f };
			vLocal_623[70 /*3*/] = { -2376.031f, -335.9692f, 2.5363f };
			vLocal_623[71 /*3*/] = { -2356.186f, -344.7604f, 2.6766f };
			vLocal_623[72 /*3*/] = { -2327.246f, -365.7754f, 2.3142f };
			vLocal_623[73 /*3*/] = { -2276.542f, -398.5323f, 1.8233f };
			vLocal_623[74 /*3*/] = { -2230.823f, -415.3987f, 3.087f };
			vLocal_623[75 /*3*/] = { -2213.564f, -418.7813f, 5.5765f };
			vLocal_623[76 /*3*/] = { -2199.396f, -420.4765f, 11.8061f };
			vLocal_623[77 /*3*/] = { -2176.137f, -416.0254f, 12.2345f };
			vLocal_623[78 /*3*/] = { -2126.029f, -402.4269f, 11.7143f };
			vLocal_623[79 /*3*/] = { -2102.225f, -366.2369f, 11.8076f };
			vLocal_623[80 /*3*/] = { -2095.268f, -318.8827f, 12.0248f };
			vLocal_623[81 /*3*/] = { -2093.999f, -264.2969f, 18.7933f };
			vLocal_623[82 /*3*/] = { -2089.104f, -214.1321f, 19.5783f };
			vLocal_623[83 /*3*/] = { -2071.153f, -210.7178f, 21.0689f };
			vLocal_623[84 /*3*/] = { -2050.075f, -223.6322f, 25.6497f };
			vLocal_623[85 /*3*/] = { -2030.981f, -224.0641f, 27.9967f };
			vLocal_623[86 /*3*/] = { -1998.867f, -224.0556f, 31.1763f };
			vLocal_623[87 /*3*/] = { -1987.922f, -232.1616f, 32.9357f };
			vLocal_623[88 /*3*/] = { -1986.724f, -241.0943f, 33.9168f };
			vLocal_623[89 /*3*/] = { -1980.237f, -257.3627f, 33.6684f };
			vLocal_623[90 /*3*/] = { -1966.573f, -261.1625f, 34.9521f };
			vLocal_623[91 /*3*/] = { -1948.827f, -242.7568f, 34.8759f };
			vLocal_623[92 /*3*/] = { -1938.963f, -233.8106f, 35.8376f };
			vLocal_623[93 /*3*/] = { -1911.051f, -214.8513f, 35.2168f };
			vLocal_623[94 /*3*/] = { -1874.86f, -185.5185f, 37.115f };
			vLocal_623[95 /*3*/] = { -1864.559f, -180.1412f, 43.2547f };
			vLocal_623[96 /*3*/] = { -1850.851f, -185.8726f, 45.6611f };
			vLocal_623[97 /*3*/] = { -1834.413f, -189.1538f, 48.8693f };
			vLocal_623[98 /*3*/] = { -1815.983f, -200.1424f, 50.7411f };
			vLocal_623[99 /*3*/] = { -1805.788f, -203.853f, 51.7412f };
			vLocal_623[100 /*3*/] = { -1792.717f, -217.502f, 50.9357f };
			vLocal_623[101 /*3*/] = { -1774.695f, -229.8553f, 51.7138f };
			vLocal_623[102 /*3*/] = { -1756.903f, -238.1252f, 52.0989f };
			vLocal_623[103 /*3*/] = { -1736.251f, -241.4447f, 52.672f };
			vLocal_623[104 /*3*/] = { -1712.573f, -240.3414f, 53.0528f };
			vLocal_623[105 /*3*/] = { -1699.116f, -234.5364f, 54.4754f };
			vLocal_623[106 /*3*/] = { -1689.302f, -217.4817f, 56.5364f };
			vLocal_623[107 /*3*/] = { -1682.485f, -202.5944f, 56.595f };
			vLocal_623[108 /*3*/] = { -1680.894f, -188.3022f, 56.5344f };
			vLocal_623[109 /*3*/] = { -1682.963f, -173.7911f, 56.5401f };
			vLocal_623[110 /*3*/] = { -1689.333f, -162.1221f, 56.5802f };
			vLocal_623[111 /*3*/] = { -1702.223f, -155.7313f, 56.3958f };
			vLocal_623[112 /*3*/] = { -1709.647f, -161.5643f, 56.4539f };
			vLocal_623[113 /*3*/] = { -1715.474f, -168.1092f, 56.503f };
			vLocal_623[114 /*3*/] = { -1725.536f, -168.0596f, 56.7325f };
			vLocal_623[115 /*3*/] = { -1733.644f, -169.4988f, 57.5363f };
			vLocal_623[116 /*3*/] = { -1733.434f, -177.1803f, 58.3052f };
			vLocal_623[117 /*3*/] = { -1731.431f, -182.4709f, 57.4901f };
			vLocal_623[118 /*3*/] = { -1730.025f, -191.5667f, 57.3605f };
			iLocal_1493 = 119;
			break;
		
		case 9:
			vLocal_623[0 /*3*/] = { -1463.912f, 2789.826f, 20.0877f };
			vLocal_623[1 /*3*/] = { -1477.148f, 2845.476f, 25.45f };
			vLocal_623[2 /*3*/] = { -1506.965f, 2872.34f, 30.2234f };
			vLocal_623[3 /*3*/] = { -1577.26f, 2932.705f, 31.917f };
			vLocal_623[4 /*3*/] = { -1591.626f, 2997.577f, 32.261f };
			vLocal_623[5 /*3*/] = { -1639.98f, 3059.17f, 29.948f };
			vLocal_623[6 /*3*/] = { -1645.001f, 3178.496f, 29.4591f };
			vLocal_623[7 /*3*/] = { -1655.642f, 3226.443f, 33.7777f };
			vLocal_623[8 /*3*/] = { -1694.704f, 3249.402f, 32.0673f };
			vLocal_623[9 /*3*/] = { -1725.478f, 3262.473f, 31.5433f };
			vLocal_623[10 /*3*/] = { -1951.812f, 3391.708f, 31.1172f };
			vLocal_623[11 /*3*/] = { -1984.661f, 3398.118f, 31.1172f };
			vLocal_623[12 /*3*/] = { -2011.397f, 3398.739f, 30.4796f };
			vLocal_623[13 /*3*/] = { -2034.775f, 3383.387f, 30.2602f };
			vLocal_623[14 /*3*/] = { -2065.773f, 3384.615f, 30.3096f };
			vLocal_623[15 /*3*/] = { -2109.027f, 3382.438f, 30.9568f };
			vLocal_623[16 /*3*/] = { -2137.183f, 3393.041f, 31.1325f };
			vLocal_623[17 /*3*/] = { -2143.365f, 3397.595f, 32.7541f };
			vLocal_623[18 /*3*/] = { -2161.112f, 3410.701f, 31.6593f };
			vLocal_623[19 /*3*/] = { -2187.906f, 3415.621f, 31.7261f };
			vLocal_623[20 /*3*/] = { -2199.671f, 3426.611f, 31.6199f };
			vLocal_623[21 /*3*/] = { -2217.014f, 3434.519f, 31.6187f };
			vLocal_623[22 /*3*/] = { -2237.547f, 3433.59f, 31.6194f };
			vLocal_623[23 /*3*/] = { -2251.789f, 3432.903f, 32.4218f };
			vLocal_623[24 /*3*/] = { -2256.215f, 3432.564f, 31.059f };
			vLocal_623[25 /*3*/] = { -2276.618f, 3439.096f, 31.0393f };
			vLocal_623[26 /*3*/] = { -2292.811f, 3446.875f, 30.8394f };
			vLocal_623[27 /*3*/] = { -2315.683f, 3443.764f, 30.3699f };
			vLocal_623[28 /*3*/] = { -2341.133f, 3432.404f, 28.5928f };
			vLocal_623[29 /*3*/] = { -2365.814f, 3428.073f, 26.8742f };
			vLocal_623[30 /*3*/] = { -2381.983f, 3423.883f, 30.3016f };
			vLocal_623[31 /*3*/] = { -2394.041f, 3416.595f, 30.5506f };
			vLocal_623[32 /*3*/] = { -2530.589f, 3337.515f, 30.4319f };
			vLocal_623[33 /*3*/] = { -2548.137f, 3339.134f, 28.6846f };
			vLocal_623[34 /*3*/] = { -2562.008f, 3341.58f, 28.0224f };
			vLocal_623[35 /*3*/] = { -2588.223f, 3351.021f, 24.6836f };
			vLocal_623[36 /*3*/] = { -2594.071f, 3356.079f, 22.1251f };
			vLocal_623[37 /*3*/] = { -2595.745f, 3365.915f, 17.9894f };
			vLocal_623[38 /*3*/] = { -2595.793f, 3377.574f, 12.8038f };
			vLocal_623[39 /*3*/] = { -2608.662f, 3392.612f, 13.1174f };
			vLocal_623[40 /*3*/] = { -2623.495f, 3407.143f, 13.6065f };
			vLocal_623[41 /*3*/] = { -2653.212f, 3424.437f, 13.7192f };
			vLocal_623[42 /*3*/] = { -2699.876f, 3437.248f, 12.9223f };
			vLocal_623[43 /*3*/] = { -2721.948f, 3443.959f, 11.9598f };
			vLocal_623[44 /*3*/] = { -2779.478f, 3456.656f, 10.6559f };
			vLocal_623[45 /*3*/] = { -2804.644f, 3470.18f, 9.7878f };
			vLocal_623[46 /*3*/] = { -2825.771f, 3501.169f, 7.9953f };
			vLocal_623[47 /*3*/] = { -2837.044f, 3518.584f, 7.4085f };
			vLocal_623[48 /*3*/] = { -2864.506f, 3523.516f, 7.1469f };
			vLocal_623[49 /*3*/] = { -2913.54f, 3523.989f, 7.2342f };
			vLocal_623[50 /*3*/] = { -2944.496f, 3519.349f, 7.215f };
			vLocal_623[51 /*3*/] = { -2957.936f, 3509.118f, 7.5977f };
			vLocal_623[52 /*3*/] = { -2968.712f, 3494.814f, 8.0967f };
			vLocal_623[53 /*3*/] = { -2982.313f, 3472.155f, 8.5156f };
			vLocal_623[54 /*3*/] = { -2997.359f, 3440.916f, 8.5745f };
			vLocal_623[55 /*3*/] = { -3006.354f, 3441.868f, 8.3125f };
			vLocal_623[56 /*3*/] = { -3010.171f, 3442.161f, 7.8361f };
			vLocal_623[57 /*3*/] = { -3016.127f, 3442.632f, 6.1649f };
			vLocal_623[58 /*3*/] = { -3044.019f, 3439.902f, 2.6837f };
			vLocal_623[59 /*3*/] = { -3083.78f, 3434.43f, 0.6736f };
			vLocal_623[60 /*3*/] = { -3108.864f, 3426.914f, 0.5969f };
			vLocal_623[61 /*3*/] = { -3121.052f, 3417.526f, 0.8856f };
			vLocal_623[62 /*3*/] = { -3128.933f, 3401.378f, 0.723f };
			vLocal_623[63 /*3*/] = { -3127.117f, 3385.608f, -0.0289f };
			vLocal_623[64 /*3*/] = { -3120.614f, 3370.245f, -0.3007f };
			vLocal_623[65 /*3*/] = { -3120.843f, 3355.337f, -0.3184f };
			vLocal_623[66 /*3*/] = { -3131.457f, 3337.666f, -0.4124f };
			vLocal_623[67 /*3*/] = { -3130.055f, 3331.133f, 0.453f };
			vLocal_623[68 /*3*/] = { -3126.044f, 3311.187f, 1.9264f };
			vLocal_623[69 /*3*/] = { -3121.625f, 3297.583f, 4.969f };
			vLocal_623[70 /*3*/] = { -3114.625f, 3288.416f, 5.7302f };
			vLocal_623[71 /*3*/] = { -3109.753f, 3286.727f, 5.3114f };
			vLocal_623[72 /*3*/] = { -3094.209f, 3285.138f, 3.4169f };
			vLocal_623[73 /*3*/] = { -3078.461f, 3294.387f, 3.5013f };
			vLocal_623[74 /*3*/] = { -3064.696f, 3299.328f, 4.393f };
			vLocal_623[75 /*3*/] = { -3042.485f, 3298.661f, 4.2975f };
			vLocal_623[76 /*3*/] = { -3012.822f, 3298.938f, 8.3148f };
			vLocal_623[77 /*3*/] = { -3005.919f, 3298.79f, 8.8372f };
			vLocal_623[78 /*3*/] = { -2979.524f, 3296.409f, 9.4458f };
			vLocal_623[79 /*3*/] = { -2965.909f, 3290.236f, 10.2551f };
			vLocal_623[80 /*3*/] = { -2956.04f, 3279.582f, 10.3873f };
			vLocal_623[81 /*3*/] = { -2941.26f, 3267.032f, 10.8597f };
			vLocal_623[82 /*3*/] = { -2928.623f, 3259.063f, 10.4515f };
			vLocal_623[83 /*3*/] = { -2922.033f, 3248.532f, 9.6349f };
			vLocal_623[84 /*3*/] = { -2917.52f, 3233.934f, 9.5718f };
			vLocal_623[85 /*3*/] = { -2907.681f, 3215.423f, 9.8787f };
			vLocal_623[86 /*3*/] = { -2879.219f, 3175.582f, 9.9335f };
			vLocal_623[87 /*3*/] = { -2837.914f, 3137.461f, 9.104f };
			vLocal_623[88 /*3*/] = { -2778.595f, 3095.414f, 7.9147f };
			vLocal_623[89 /*3*/] = { -2755.339f, 3093.435f, 7.9238f };
			vLocal_623[90 /*3*/] = { -2732.754f, 3091.263f, 11.8101f };
			vLocal_623[91 /*3*/] = { -2715.51f, 3088.629f, 18.9392f };
			vLocal_623[92 /*3*/] = { -2704.912f, 3088.065f, 22.5439f };
			vLocal_623[93 /*3*/] = { -2698.571f, 3088.829f, 24.5249f };
			vLocal_623[94 /*3*/] = { -2688.089f, 3088.755f, 26.9138f };
			vLocal_623[95 /*3*/] = { -2668.202f, 3087.626f, 31.0204f };
			vLocal_623[96 /*3*/] = { -2663.953f, 3087.523f, 31.2972f };
			vLocal_623[97 /*3*/] = { -2649.556f, 3076.861f, 31.3129f };
			vLocal_623[98 /*3*/] = { -2625.872f, 3048.057f, 31.3104f };
			vLocal_623[99 /*3*/] = { -2598.408f, 3019.676f, 31.4648f };
			vLocal_623[100 /*3*/] = { -2586.226f, 3015.642f, 31.7198f };
			vLocal_623[101 /*3*/] = { -2560.566f, 2996.848f, 37.5706f };
			vLocal_623[102 /*3*/] = { -2552.737f, 2986.765f, 36.5308f };
			vLocal_623[103 /*3*/] = { -2545.417f, 2969.709f, 35.8487f };
			vLocal_623[104 /*3*/] = { -2540.366f, 2955.316f, 35.0142f };
			vLocal_623[105 /*3*/] = { -2532.989f, 2947.141f, 34.4408f };
			vLocal_623[106 /*3*/] = { -2527.326f, 2945.037f, 33.7632f };
			vLocal_623[107 /*3*/] = { -2510.012f, 2935.014f, 31.8324f };
			vLocal_623[108 /*3*/] = { -2506.855f, 2927.783f, 31.8324f };
			vLocal_623[109 /*3*/] = { -2502f, 2923.38f, 31.8656f };
			vLocal_623[110 /*3*/] = { -2453.283f, 2895.443f, 31.827f };
			vLocal_623[111 /*3*/] = { -2448.633f, 2893.234f, 31.8105f };
			vLocal_623[112 /*3*/] = { -2441.97f, 2894.076f, 31.8161f };
			vLocal_623[113 /*3*/] = { -2435.053f, 2899.211f, 31.8101f };
			vLocal_623[114 /*3*/] = { -2419.494f, 2912.728f, 31.8101f };
			vLocal_623[115 /*3*/] = { -2410.999f, 2920.665f, 31.8101f };
			vLocal_623[116 /*3*/] = { -2402.981f, 2926.109f, 31.8101f };
			vLocal_623[117 /*3*/] = { -2388.711f, 2931.548f, 31.8101f };
			vLocal_623[118 /*3*/] = { -2376.195f, 2935.068f, 31.8101f };
			vLocal_623[119 /*3*/] = { -2362.174f, 2937.172f, 31.8101f };
			vLocal_623[120 /*3*/] = { -2349.693f, 2937.485f, 31.8097f };
			vLocal_623[121 /*3*/] = { -2335.747f, 2935.854f, 31.8095f };
			vLocal_623[122 /*3*/] = { -2318.942f, 2929.66f, 31.7445f };
			vLocal_623[123 /*3*/] = { -2297.421f, 2923.055f, 31.402f };
			vLocal_623[124 /*3*/] = { -2273.065f, 2913.495f, 31.1485f };
			vLocal_623[125 /*3*/] = { -2255.359f, 2902.834f, 31.3591f };
			vLocal_623[126 /*3*/] = { -2229.69f, 2883.807f, 31.236f };
			vLocal_623[127 /*3*/] = { -2202.925f, 2869.314f, 31.1578f };
			vLocal_623[128 /*3*/] = { -2183.306f, 2857.042f, 31.1936f };
			vLocal_623[129 /*3*/] = { -2163.49f, 2841.464f, 31.3816f };
			vLocal_623[130 /*3*/] = { -2149.862f, 2823.891f, 31.4544f };
			vLocal_623[131 /*3*/] = { -2144.587f, 2808.735f, 31.4497f };
			vLocal_623[132 /*3*/] = { -2132.177f, 2795.02f, 31.7241f };
			vLocal_623[133 /*3*/] = { -2108.141f, 2785.463f, 31.7808f };
			vLocal_623[134 /*3*/] = { -2068.579f, 2784.021f, 31.4615f };
			vLocal_623[135 /*3*/] = { -2051.136f, 2791.31f, 31.825f };
			vLocal_623[136 /*3*/] = { -2042.002f, 2795.728f, 31.2093f };
			vLocal_623[137 /*3*/] = { -2024.121f, 2799.866f, 31.5836f };
			vLocal_623[138 /*3*/] = { -2004.372f, 2797.404f, 31.7003f };
			vLocal_623[139 /*3*/] = { -1976.047f, 2791.383f, 31.5104f };
			vLocal_623[140 /*3*/] = { -1947.483f, 2778.565f, 31.1414f };
			vLocal_623[141 /*3*/] = { -1936.379f, 2768.897f, 31.1447f };
			vLocal_623[142 /*3*/] = { -1929.758f, 2758.106f, 30.6489f };
			vLocal_623[143 /*3*/] = { -1925.991f, 2751.949f, 25.9925f };
			vLocal_623[144 /*3*/] = { -1921.41f, 2746.268f, 24.8392f };
			vLocal_623[145 /*3*/] = { -1915.137f, 2739.659f, 23.8019f };
			vLocal_623[146 /*3*/] = { -1900.307f, 2727.201f, 21.1878f };
			vLocal_623[147 /*3*/] = { -1883.745f, 2715.262f, 19.6892f };
			vLocal_623[148 /*3*/] = { -1875.748f, 2711.08f, 12.552f };
			vLocal_623[149 /*3*/] = { -1867.896f, 2703.139f, 3.0778f };
			vLocal_623[150 /*3*/] = { -1861.963f, 2692.423f, 3.1018f };
			vLocal_623[151 /*3*/] = { -1857.476f, 2683.575f, 3.2905f };
			vLocal_623[152 /*3*/] = { -1848.774f, 2668.988f, 2.0379f };
			vLocal_623[153 /*3*/] = { -1842.34f, 2663.985f, 1.5316f };
			vLocal_623[154 /*3*/] = { -1838.295f, 2661.605f, 0.5979f };
			vLocal_623[155 /*3*/] = { -1815.526f, 2665.483f, 0.7053f };
			vLocal_623[156 /*3*/] = { -1805.632f, 2669.156f, 2.2314f };
			vLocal_623[157 /*3*/] = { -1786.138f, 2670.602f, 2.2725f };
			vLocal_623[158 /*3*/] = { -1771.023f, 2668.491f, 2.1361f };
			vLocal_623[159 /*3*/] = { -1760.869f, 2665.975f, 1.8861f };
			vLocal_623[160 /*3*/] = { -1755.284f, 2664.367f, 1.7509f };
			vLocal_623[161 /*3*/] = { -1748.707f, 2663.003f, 1.9587f };
			vLocal_623[162 /*3*/] = { -1736.189f, 2659.886f, 1.9917f };
			vLocal_623[163 /*3*/] = { -1728.476f, 2658.183f, 1.9464f };
			vLocal_623[164 /*3*/] = { -1722.725f, 2657.996f, 2.0025f };
			vLocal_623[165 /*3*/] = { -1719.555f, 2657.884f, 1.4411f };
			vLocal_623[166 /*3*/] = { -1715.606f, 2657.734f, 0.7234f };
			vLocal_623[167 /*3*/] = { -1710.382f, 2658.301f, 0.4668f };
			vLocal_623[168 /*3*/] = { -1707.359f, 2659.483f, 0.282f };
			vLocal_623[169 /*3*/] = { -1703.736f, 2660.578f, 0.5126f };
			vLocal_623[170 /*3*/] = { -1697.277f, 2662.122f, 0.7382f };
			vLocal_623[171 /*3*/] = { -1694.411f, 2662.705f, 1.5014f };
			vLocal_623[172 /*3*/] = { -1690.597f, 2663.54f, 1.8258f };
			vLocal_623[173 /*3*/] = { -1683.022f, 2665.116f, 1.8626f };
			vLocal_623[174 /*3*/] = { -1677.613f, 2664.286f, 1.8642f };
			vLocal_623[175 /*3*/] = { -1675.041f, 2662.993f, 1.525f };
			vLocal_623[176 /*3*/] = { -1669.615f, 2661.57f, 1.3865f };
			vLocal_623[177 /*3*/] = { -1660.996f, 2660.514f, 1.5346f };
			vLocal_623[178 /*3*/] = { -1654.274f, 2660.621f, 1.3163f };
			vLocal_623[179 /*3*/] = { -1652.602f, 2661.721f, 0.846f };
			vLocal_623[180 /*3*/] = { -1650.772f, 2663.604f, 0.3205f };
			vLocal_623[181 /*3*/] = { -1648.723f, 2666.767f, -0.3498f };
			vLocal_623[182 /*3*/] = { -1646.614f, 2670.389f, -0.2246f };
			vLocal_623[183 /*3*/] = { -1645.298f, 2672.659f, 0.4074f };
			vLocal_623[184 /*3*/] = { -1643.886f, 2675.479f, 1.3415f };
			vLocal_623[185 /*3*/] = { -1643.052f, 2678.978f, 1.7816f };
			vLocal_623[186 /*3*/] = { -1643.81f, 2684.713f, 1.9387f };
			vLocal_623[187 /*3*/] = { -1644.436f, 2692.437f, 2.6905f };
			vLocal_623[188 /*3*/] = { -1643.396f, 2700.886f, 4.7337f };
			vLocal_623[189 /*3*/] = { -1642.371f, 2702.699f, 4.6934f };
			vLocal_623[190 /*3*/] = { -1634.92f, 2708.292f, 4.7769f };
			vLocal_623[191 /*3*/] = { -1622.842f, 2712.665f, 4.7364f };
			vLocal_623[192 /*3*/] = { -1616.741f, 2718.592f, 4.7278f };
			vLocal_623[193 /*3*/] = { -1615.26f, 2726.292f, 4.782f };
			vLocal_623[194 /*3*/] = { -1615.372f, 2740.197f, 5.415f };
			vLocal_623[195 /*3*/] = { -1615.563f, 2747.673f, 7.4045f };
			vLocal_623[196 /*3*/] = { -1615.097f, 2751.565f, 8.8844f };
			vLocal_623[197 /*3*/] = { -1611.762f, 2755.532f, 10.7072f };
			vLocal_623[198 /*3*/] = { -1608.429f, 2757.899f, 11.9354f };
			vLocal_623[199 /*3*/] = { -1603.668f, 2759.287f, 13.1858f };
			vLocal_623[200 /*3*/] = { -1595.852f, 2761.264f, 15.6171f };
			vLocal_623[201 /*3*/] = { -1591.107f, 2762.998f, 17.0786f };
			vLocal_623[202 /*3*/] = { -1588.631f, 2765.09f, 17.4527f };
			vLocal_623[203 /*3*/] = { -1583.653f, 2766.244f, 17.432f };
			vLocal_623[204 /*3*/] = { -1575.535f, 2763.518f, 17.2576f };
			vLocal_623[205 /*3*/] = { -1568.713f, 2759.889f, 17.0294f };
			vLocal_623[206 /*3*/] = { -1560.931f, 2756.537f, 16.5327f };
			vLocal_623[207 /*3*/] = { -1550.389f, 2752.672f, 16.8426f };
			vLocal_623[208 /*3*/] = { -1539.915f, 2745.988f, 16.6513f };
			vLocal_623[209 /*3*/] = { -1329.159f, 2560.402f, 16.6908f };
			vLocal_623[210 /*3*/] = { -1312.168f, 2545.424f, 17.302f };
			vLocal_623[211 /*3*/] = { -1299.685f, 2536.006f, 17.8598f };
			vLocal_623[212 /*3*/] = { -1294.188f, 2532.739f, 18.3548f };
			vLocal_623[213 /*3*/] = { -1288.149f, 2528.114f, 18.6202f };
			iLocal_1493 = 214;
			break;
		
		case 10:
			vLocal_623[0 /*3*/] = { 1007.392f, -677.4196f, 55.6986f };
			vLocal_623[1 /*3*/] = { 1015.88f, -640.8702f, 57.6189f };
			vLocal_623[2 /*3*/] = { 1028.693f, -521.0793f, 60.0037f };
			vLocal_623[3 /*3*/] = { 1001.013f, -469.0658f, 62.3685f };
			vLocal_623[4 /*3*/] = { 1024.273f, -438.0688f, 64.0854f };
			vLocal_623[5 /*3*/] = { 1099.331f, -371.6267f, 66.0863f };
			vLocal_623[6 /*3*/] = { 1154.278f, -350.7854f, 66.0453f };
			vLocal_623[7 /*3*/] = { 1196.453f, -317.2407f, 68.006f };
			vLocal_623[8 /*3*/] = { 1228.658f, -285.5526f, 69.5564f };
			vLocal_623[9 /*3*/] = { 1269.14f, -280.8539f, 78.9299f };
			vLocal_623[10 /*3*/] = { 1303.481f, -279.4128f, 89.277f };
			vLocal_623[11 /*3*/] = { 1307.264f, -261.738f, 93.4534f };
			vLocal_623[12 /*3*/] = { 1275.53f, -228.7392f, 97.2897f };
			vLocal_623[13 /*3*/] = { 1280.287f, -201.123f, 100.2999f };
			vLocal_623[14 /*3*/] = { 1316.522f, -182.0543f, 106.8589f };
			vLocal_623[15 /*3*/] = { 1328.355f, -161.1792f, 109.7738f };
			vLocal_623[16 /*3*/] = { 1330.984f, -124.4583f, 116.3178f };
			vLocal_623[17 /*3*/] = { 1349.718f, -112.3109f, 120.3794f };
			vLocal_623[18 /*3*/] = { 1440.839f, -126.4933f, 136.0253f };
			vLocal_623[19 /*3*/] = { 1547.464f, -88.492f, 155.8418f };
			vLocal_623[20 /*3*/] = { 1572.396f, -73.2005f, 158.7627f };
			vLocal_623[21 /*3*/] = { 1617.536f, -76.5607f, 164.2157f };
			vLocal_623[22 /*3*/] = { 1634.688f, -86.0398f, 166.32f };
			vLocal_623[23 /*3*/] = { 1652.054f, -86.2994f, 169.5492f };
			vLocal_623[24 /*3*/] = { 1677.106f, -69.6387f, 172.8701f };
			vLocal_623[25 /*3*/] = { 1708.012f, -81.5238f, 176.1925f };
			vLocal_623[26 /*3*/] = { 1727.578f, -106.2123f, 177.8113f };
			vLocal_623[27 /*3*/] = { 1743.88f, -104.5237f, 180.5338f };
			vLocal_623[28 /*3*/] = { 1787.022f, -75.6841f, 189.1488f };
			vLocal_623[29 /*3*/] = { 1830.548f, -88.8782f, 185.5151f };
			vLocal_623[30 /*3*/] = { 1869.148f, -84.2897f, 188.3576f };
			vLocal_623[31 /*3*/] = { 1908.125f, -94.0947f, 189.7598f };
			vLocal_623[32 /*3*/] = { 1935.856f, -70.0841f, 194.3318f };
			vLocal_623[33 /*3*/] = { 1965.012f, -81.9638f, 206.0977f };
			vLocal_623[34 /*3*/] = { 1994.382f, -81.4886f, 210.8208f };
			vLocal_623[35 /*3*/] = { 2015.317f, -15.1936f, 200.4373f };
			vLocal_623[36 /*3*/] = { 2045.597f, -7.7503f, 209.3502f };
			vLocal_623[37 /*3*/] = { 2097.736f, 3.6562f, 214.3764f };
			vLocal_623[38 /*3*/] = { 2170.912f, -23.0015f, 227.7495f };
			vLocal_623[39 /*3*/] = { 2216.6f, -39.4283f, 202.1804f };
			vLocal_623[40 /*3*/] = { 2265.253f, -42.4669f, 176.595f };
			vLocal_623[41 /*3*/] = { 2317.634f, -62.7793f, 143.5891f };
			vLocal_623[42 /*3*/] = { 2361.621f, -88.1377f, 114.5316f };
			vLocal_623[43 /*3*/] = { 2415.541f, -127.203f, 88.2837f };
			vLocal_623[44 /*3*/] = { 2442.605f, -132.4298f, 88.5436f };
			vLocal_623[45 /*3*/] = { 2467.73f, -87.5151f, 90.4025f };
			vLocal_623[46 /*3*/] = { 2478.927f, -49.3336f, 91.7194f };
			vLocal_623[47 /*3*/] = { 2514.862f, -54.7729f, 90.5497f };
			vLocal_623[48 /*3*/] = { 2535.467f, -44.4498f, 95.4292f };
			vLocal_623[49 /*3*/] = { 2551.987f, -14.4109f, 96.8787f };
			vLocal_623[50 /*3*/] = { 2564.848f, 7.4979f, 95.322f };
			vLocal_623[51 /*3*/] = { 2574.244f, 28.346f, 94.1519f };
			vLocal_623[52 /*3*/] = { 2583.104f, 64.6646f, 97.2344f };
			vLocal_623[53 /*3*/] = { 2590.313f, 90.8608f, 96.7709f };
			vLocal_623[54 /*3*/] = { 2605.615f, 146.4206f, 97.0373f };
			vLocal_623[55 /*3*/] = { 2608.438f, 159.9902f, 97.7789f };
			vLocal_623[56 /*3*/] = { 2616.801f, 193.4394f, 97.8768f };
			vLocal_623[57 /*3*/] = { 2620.917f, 208.1355f, 99.8613f };
			vLocal_623[58 /*3*/] = { 2622.716f, 214.0569f, 100.3944f };
			vLocal_623[59 /*3*/] = { 2625.155f, 223.4091f, 100.4454f };
			vLocal_623[60 /*3*/] = { 2628.51f, 238.1807f, 98.0427f };
			vLocal_623[61 /*3*/] = { 2631.146f, 251.6104f, 99.134f };
			vLocal_623[62 /*3*/] = { 2644.033f, 286.1281f, 96.6342f };
			vLocal_623[63 /*3*/] = { 2668.01f, 344.2533f, 93.6781f };
			vLocal_623[64 /*3*/] = { 2674.79f, 475.0252f, 93.3655f };
			vLocal_623[65 /*3*/] = { 2677.321f, 563.7356f, 92.1778f };
			vLocal_623[66 /*3*/] = { 2676.736f, 657.8879f, 88.5073f };
			vLocal_623[67 /*3*/] = { 2689.552f, 707.0382f, 83.2467f };
			vLocal_623[68 /*3*/] = { 2694.685f, 719.9797f, 79.118f };
			vLocal_623[69 /*3*/] = { 2705.136f, 742.6617f, 63.8294f };
			vLocal_623[70 /*3*/] = { 2732.751f, 770.7942f, 48.8289f };
			vLocal_623[71 /*3*/] = { 2754.752f, 779.1329f, 37.7362f };
			vLocal_623[72 /*3*/] = { 2795.073f, 775.9935f, 19.6025f };
			vLocal_623[73 /*3*/] = { 2815.378f, 772.0298f, 18.5162f };
			vLocal_623[74 /*3*/] = { 2823.101f, 760.8618f, 18.5399f };
			vLocal_623[75 /*3*/] = { 2829.417f, 747.6486f, 18.4988f };
			vLocal_623[76 /*3*/] = { 2838.551f, 742.6433f, 18.5283f };
			vLocal_623[77 /*3*/] = { 2852.99f, 747.0413f, 18.3301f };
			vLocal_623[78 /*3*/] = { 2866.382f, 755.1819f, 18.1503f };
			vLocal_623[79 /*3*/] = { 2876.903f, 759.4967f, 16.8825f };
			vLocal_623[80 /*3*/] = { 2883.941f, 767.9843f, 17.9021f };
			vLocal_623[81 /*3*/] = { 2890.169f, 774.4565f, 18.7225f };
			vLocal_623[82 /*3*/] = { 2898.975f, 775.8782f, 19.8196f };
			vLocal_623[83 /*3*/] = { 2908.946f, 777.8163f, 22.677f };
			vLocal_623[84 /*3*/] = { 2911.956f, 780.126f, 23.7715f };
			vLocal_623[85 /*3*/] = { 2917.168f, 783.8945f, 24.2316f };
			vLocal_623[86 /*3*/] = { 2924.857f, 790.0166f, 24.7335f };
			vLocal_623[87 /*3*/] = { 2934.356f, 798.6711f, 23.9277f };
			vLocal_623[88 /*3*/] = { 2940.85f, 803.635f, 23.7534f };
			vLocal_623[89 /*3*/] = { 2944.641f, 806.6476f, 23.5292f };
			vLocal_623[90 /*3*/] = { 2951.772f, 813.8921f, 22.0205f };
			iLocal_1493 = 91;
			break;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1493)
	{
		vVar1 = { vLocal_623[iVar0 /*3*/] };
		vVar4 = { vLocal_623[iVar0 + 1 /*3*/] };
		if (!func_31(vVar4, 0f, 0f, 0f, 0))
		{
			fLocal_1275[iVar0] = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, vVar4, true);
			fLocal_1494 = (fLocal_1494 + fLocal_1275[iVar0]);
		}
		iVar0++;
	}
	fLocal_1496 = ((fLocal_1494 * 70f) / 100f);
	func_1066(vLocal_623[0 /*3*/]);
}

void func_1066(vector3 vParam0)//Position - 0x2EF18
{
	Global_1574647.f_6 = { vParam0 };
}

void func_1067()//Position - 0x2EF2C
{
	Global_1672277 = 1;
	if (!MISC::IS_BIT_SET(Global_2540191, 0))
	{
		MISC::SET_BIT(&Global_2540191, 0);
		MISC::SET_BIT(&Global_1672278, 0);
	}
	if (!MISC::IS_BIT_SET(Global_2540191, 1))
	{
		MISC::SET_BIT(&Global_2540191, 1);
		MISC::SET_BIT(&Global_1672278, 1);
	}
	if (!MISC::IS_BIT_SET(Global_2540191, 5))
	{
		MISC::SET_BIT(&Global_2540191, 5);
		MISC::SET_BIT(&Global_1672278, 5);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-355737150))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-355737150, 0, 0, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-580979506))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-580979506, 0, 0, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1426452475))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1426452475, 0, 0, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(745417724))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(745417724, 0, 0, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1305304906))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1305304906, 0, 0, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1543175077))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1543175077, 0, 0, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-811770997))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-811770997, 0, 0, 0);
	}
}

bool func_1068(int iParam0)//Position - 0x2F03E
{
	int iVar0;
	
	iVar0 = func_50(2480, -1, 0);
	return MISC::IS_BIT_SET(iVar0, iParam0);
}

int func_1069()//Position - 0x2F059
{
	return 1;
}

int func_1070()//Position - 0x2F062
{
	return Local_112;
}

int func_1071(int iParam0)//Position - 0x2F06C
{
	return Local_311[iParam0 /*8*/];
}

void func_1072(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x2F07B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_528(PLAYER::PLAYER_ID());
		Global_1675140.f_4 = func_953();
		Global_1675140.f_5 = func_952();
		if (func_42(PLAYER::PLAYER_ID()) || func_43(PLAYER::PLAYER_ID()))
		{
			Global_1675140.f_6 = 1;
		}
		else
		{
			Global_1675140.f_6 = 0;
		}
		Global_1675140.f_1 = func_1123(bParam9);
		Global_1675140.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675140.f_9 = func_992(bParam0);
		Global_1675140.f_10 = iParam1;
		Global_1675140.f_17 = Global_1675140.f_2;
		Global_1675140.f_18 = Global_1675140.f_2;
		Global_1675140.f_19 = func_984();
		Global_1675140.f_21 = (Global_1675140.f_8 - Global_1675140.f_7);
		if (func_131(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675140.f_23 = func_992(func_234(1));
		}
		Global_1675140.f_24 = func_1122(PLAYER::PLAYER_ID());
		Global_1675140.f_28 = func_993(PLAYER::PLAYER_ID());
		if (Global_1675140.f_24 > 2)
		{
			Global_1675140.f_24 = 2;
		}
		func_1120(iVar0);
	}
	else
	{
		iVar0 = func_145(PLAYER::PLAYER_ID());
	}
	if (func_152(iVar0))
	{
		Global_1674879.f_2 = func_953();
		Global_1674879.f_3 = func_952();
		Global_1674879.f_50 = iParam4;
		Global_1674879.f_51 = iParam5;
		Global_1674879.f_10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674879.f_20 = (Global_1674879.f_10 - Global_1674879.f_9);
		Global_1674879.f_12 = iParam1;
		Global_1674879.f_19 = func_1116(iVar0, bParam0, func_1119(bParam3));
		if (bParam0)
		{
			Global_1674879.f_11 = 1;
		}
		else
		{
			Global_1674879.f_11 = 0;
		}
		if ((func_41(PLAYER::PLAYER_ID()) || func_39(PLAYER::PLAYER_ID())) || func_45(PLAYER::PLAYER_ID()))
		{
			Global_1674879.f_8 = 1;
		}
		else
		{
			Global_1674879.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1674879.f_43 = 0;
			Global_1674879.f_45 = func_989(func_181(), iParam2);
			Global_1674879.f_47 = iParam7;
			Global_1674879.f_46 = iParam6;
			Global_1674879.f_52 = func_1115(func_181(), iParam2);
		}
		func_1113(iVar0);
	}
	else if (func_151(iVar0))
	{
		Global_1674933.f_2 = func_953();
		Global_1674933.f_3 = func_952();
		Global_1674933.f_10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674933.f_19 = (Global_1674933.f_10 - Global_1674933.f_9);
		Global_1674933.f_12 = iParam1;
		if (bParam0)
		{
			Global_1674933.f_11 = 1;
		}
		else
		{
			Global_1674933.f_11 = 0;
		}
		if ((func_41(PLAYER::PLAYER_ID()) || func_39(PLAYER::PLAYER_ID())) || func_45(PLAYER::PLAYER_ID()))
		{
			Global_1674933.f_8 = 1;
		}
		else
		{
			Global_1674933.f_8 = 0;
		}
		func_1111(iVar0);
	}
	else if (func_150(iVar0))
	{
		Global_1674996.f_2 = func_953();
		Global_1674996.f_3 = func_952();
		Global_1674996.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674996.f_18 = (Global_1674996.f_9 - Global_1674996.f_8);
		Global_1674996.f_11 = iParam1;
		Global_1674996.f_7 = func_984();
		Global_1674996.f_42 = func_986(func_52(), 5);
		iVar1 = PLAYER::PLAYER_ID();
		iVar2 = func_174(iVar1);
		Global_1674996.f_28 = iVar2;
		Global_1674996.f_29 = func_992((func_921(iVar1) || func_920(iVar1)));
		Global_1674996.f_30 = func_992(func_1110(iVar1));
		Global_1674996.f_32 = func_992(func_918(iVar1));
		Global_1674996.f_33 = func_992(func_919(iVar1));
		Global_1674996.f_34 = func_992(func_1109(iVar1));
		Global_1674996.f_35 = func_992(func_917(0, iVar1) == 1);
		Global_1674996.f_36 = func_992(func_1108(iVar1));
		Global_1674996.f_37 = func_992(func_1107(iVar1));
		Global_1674996.f_38 = func_992(func_1106(iVar1));
		Global_1674996.f_39 = func_992(func_299(iVar1, iVar2, 0));
		Global_1674996.f_40 = func_992(func_299(iVar1, iVar2, 2));
		Global_1674996.f_41 = func_992(func_299(iVar1, iVar2, 1));
		if (func_1105(iVar1))
		{
			Global_1674996.f_31 = 2;
		}
		else if (func_1104(iVar1))
		{
			Global_1674996.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1674996.f_10 = 1;
		}
		else
		{
			Global_1674996.f_10 = 0;
		}
		if ((func_41(PLAYER::PLAYER_ID()) || func_39(PLAYER::PLAYER_ID())) || func_45(PLAYER::PLAYER_ID()))
		{
			Global_1674996.f_6 = 1;
		}
		else
		{
			Global_1674996.f_6 = 0;
		}
		Global_1674996.f_21 = -2;
		Global_1674996.f_22 = -2;
		func_1102(iVar0);
	}
	else if (func_149(iVar0))
	{
		Global_1675040.f_2 = func_953();
		Global_1675040.f_3 = func_952();
		if ((func_41(PLAYER::PLAYER_ID()) || func_39(PLAYER::PLAYER_ID())) || func_45(PLAYER::PLAYER_ID()))
		{
			Global_1675040.f_6 = 1;
		}
		else
		{
			Global_1675040.f_6 = 0;
		}
		Global_1675040.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675040.f_10 = func_992(bParam0);
		Global_1675040.f_11 = iParam1;
		Global_1675040.f_17 = func_985(func_248());
		Global_1675040.f_18 = (Global_1675040.f_9 - Global_1675040.f_8);
		Global_1675040.f_20 = iParam8;
		Global_1675040.f_21 = -2;
		Global_1675040.f_22 = -2;
		Global_1675040.f_27 = func_1101();
		Global_1675040.f_29 = func_50(6107, -1, 0);
		Global_1675040.f_30 = func_50(6103, -1, 0);
		Global_1675040.f_31 = func_50(6104, -1, 0);
		Global_1675040.f_32 = func_50(6106, -1, 0);
		Global_1675040.f_33 = func_50(6105, -1, 0);
		Global_1675040.f_34 = func_50(6108, -1, 0);
		Global_1675040.f_36 = func_992(func_234(1));
		Global_1675040.f_37 = func_1099();
		func_1089();
		func_1087(iVar0);
	}
	else if (func_148(iVar0))
	{
		Global_1675094.f_2 = func_953();
		Global_1675094.f_3 = func_952();
		if ((func_41(PLAYER::PLAYER_ID()) || func_39(PLAYER::PLAYER_ID())) || func_45(PLAYER::PLAYER_ID()))
		{
			Global_1675094.f_6 = 1;
		}
		else
		{
			Global_1675094.f_6 = 0;
		}
		Global_1675094.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675094.f_10 = func_992(bParam0);
		Global_1675094.f_11 = iParam1;
		Global_1675094.f_18 = (Global_1675094.f_9 - Global_1675094.f_8);
		Global_1675094.f_20 = iParam8;
		Global_1675094.f_23 = Global_786547;
		Global_1675094.f_36 = Global_786547.f_1;
		Global_1675094.f_24 = func_50(6157, -1, 0);
		Global_1675094.f_25 = func_50(6162, -1, 0);
		Global_1675094.f_26 = func_50(6163, -1, 0);
		Global_1675094.f_27 = func_992((((func_983() || func_982()) || func_981()) || func_980(PLAYER::PLAYER_ID())));
		Global_1675094.f_28 = func_50(6164, -1, 0);
		Global_1675094.f_29 = func_992(func_979());
		Global_1675094.f_35 = -1;
		Global_1675094.f_38 = -1;
		Global_1675094.f_39 = Global_1675094.f_4;
		Global_1675094.f_40 = Global_1675094.f_5;
		Global_1675094.f_41 = func_953();
		Global_1675094.f_42 = func_992(func_234(1));
		Global_1675094.f_44 = Global_1675094.f_18;
		func_1085(iVar0);
	}
	else if (func_140(iVar0))
	{
		if (Global_1675228.f_2 == -1)
		{
			Global_1675228.f_2 = func_953();
		}
		if (Global_1675228.f_3 == -1)
		{
			Global_1675228.f_3 = func_952();
		}
		if ((func_41(PLAYER::PLAYER_ID()) || func_39(PLAYER::PLAYER_ID())) || func_45(PLAYER::PLAYER_ID()))
		{
			Global_1675228.f_6 = 1;
		}
		else
		{
			Global_1675228.f_6 = 0;
		}
		Global_1675228.f_1 = func_1123(0);
		Global_1675228.f_7 = func_984();
		Global_1675228.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675228.f_10 = func_992(bParam0);
		Global_1675228.f_11 = iParam1;
		if (func_181() != -1)
		{
			Global_1675228.f_17 = func_775(func_181());
		}
		Global_1675228.f_18 = (Global_1675228.f_9 - Global_1675228.f_8);
		Global_1675228.f_19 = Global_2531497.f_6307;
		Global_1675228.f_28 = func_993(PLAYER::PLAYER_ID());
		Global_1675228.f_29 = func_992(func_1084(PLAYER::PLAYER_ID()));
		Global_1675228.f_30 = func_992(func_1083(PLAYER::PLAYER_ID()));
		Global_1675228.f_31 = func_961(PLAYER::PLAYER_ID());
		if (func_131(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675228.f_33 = func_992(func_234(1));
		}
		if (Global_1675228.f_34 > 2)
		{
			Global_1675228.f_34 = 2;
		}
		func_1081(iVar0);
	}
	else if (func_146(iVar0))
	{
		Global_1675175.f_2 = func_953();
		Global_1675175.f_3 = func_952();
		if ((func_41(PLAYER::PLAYER_ID()) || func_39(PLAYER::PLAYER_ID())) || func_45(PLAYER::PLAYER_ID()))
		{
			Global_1675175.f_6 = 1;
		}
		else
		{
			Global_1675175.f_6 = 0;
		}
		Global_1675175.f_1 = func_1123(0);
		Global_1675175.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675175.f_10 = func_992(bParam0);
		Global_1675175.f_11 = iParam1;
		Global_1675175.f_18 = (Global_1675175.f_9 - Global_1675175.f_8);
		Global_1675175.f_28 = func_993(PLAYER::PLAYER_ID());
		if (Global_1675175.f_28)
		{
			Global_1675175.f_29 = func_978(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1675175.f_29 = 0;
		}
		Global_1675175.f_30 = func_962(PLAYER::PLAYER_ID(), 4, -1);
		Global_1675175.f_31 = func_961(PLAYER::PLAYER_ID());
		Global_1675175.f_32 = func_992(func_960(PLAYER::PLAYER_ID()));
		Global_1675175.f_33 = func_992(func_959(PLAYER::PLAYER_ID()));
		Global_1675175.f_34 = func_992(func_958(PLAYER::PLAYER_ID()));
		Global_1675175.f_35 = func_992(func_957(PLAYER::PLAYER_ID()));
		Global_1675175.f_36 = func_956(PLAYER::PLAYER_ID());
		Global_1675175.f_37 = func_955(PLAYER::PLAYER_ID());
		Global_1675175.f_39 = func_954(PLAYER::PLAYER_ID());
		if (func_131(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675175.f_41 = func_992(func_234(1));
		}
		if (Global_1675175.f_42 > 2)
		{
			Global_1675175.f_42 = 2;
		}
		func_1079(iVar0);
	}
	else if (func_139(iVar0))
	{
		Global_1675312.f_2 = func_953();
		Global_1675312.f_3 = func_952();
		Global_1675312.f_4 = func_995(func_181());
		Global_1675312.f_5 = func_994(func_181());
		if ((func_41(PLAYER::PLAYER_ID()) || func_39(PLAYER::PLAYER_ID())) || func_45(PLAYER::PLAYER_ID()))
		{
			Global_1675312.f_6 = 1;
		}
		else
		{
			Global_1675312.f_6 = 0;
		}
		Global_1675312.f_7 = func_984();
		Global_1675312.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675312.f_10 = func_992(bParam0);
		Global_1675312.f_11 = iParam1;
		if (func_248() != -1)
		{
			Global_1675312.f_17 = func_775(func_248());
		}
		Global_1675312.f_18 = (Global_1675312.f_9 - Global_1675312.f_8);
		Global_1675312.f_21 = 1;
		Global_1675312.f_22 = 1;
		Global_1675312.f_25 = func_1078(PLAYER::PLAYER_ID());
		Global_1675312.f_27 = func_992(func_951(PLAYER::PLAYER_ID()));
		Global_1675312.f_28 = func_949(21, -1);
		Global_1675312.f_29 = func_992(func_1077(PLAYER::PLAYER_ID()));
		func_1075(iVar0);
	}
	else if (func_138(iVar0))
	{
		Global_1675387.f_6 = func_995(func_181());
		Global_1675387.f_7 = func_994(func_181());
		if (func_131(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675387.f_8 = func_992(func_234(1));
		}
		Global_1675387.f_10 = func_984();
		Global_1675387.f_11 = 1;
		Global_1675387.f_13 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1703065);
		Global_1675387.f_14 = iParam1;
		Global_1675387.f_19 = 1;
		Global_1675387.f_20 = 1;
		func_1073(iVar0);
	}
	else
	{
		Global_1674861.f_6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (bParam0)
		{
			Global_1674861.f_7 = 1;
		}
		else
		{
			Global_1674861.f_7 = 0;
		}
		Global_1674861.f_8 = iParam1;
		if (Global_1674861.f_4 == 0)
		{
			if ((func_41(PLAYER::PLAYER_ID()) || func_39(PLAYER::PLAYER_ID())) || func_45(PLAYER::PLAYER_ID()))
			{
				Global_1674861.f_4 = 1;
			}
		}
	}
}

void func_1073(int iParam0)//Position - 0x2FC6A
{
	if (iParam0 == 0)
	{
	}
	unk_0x53C31853EC9531FF(&Global_1675387);
	func_1074();
}

void func_1074()//Position - 0x2FC84
{
	struct<36> Var0;
	
	Global_1675387 = { Var0 };
	Global_1675387.f_23 = 0;
	Global_1675387.f_22 = 0;
	Global_1675387.f_21 = 0;
}

void func_1075(int iParam0)//Position - 0x2FCAD
{
	if (iParam0 == 0)
	{
	}
	STATS::_PLAYSTATS_CASINO_MISSION_ENDED(&Global_1675312);
	func_1076();
}

void func_1076()//Position - 0x2FCC7
{
	struct<31> Var0;
	
	Global_1675312 = { Var0 };
}

int func_1077(int iParam0)//Position - 0x2FCDB
{
	if (iParam0 != func_398())
	{
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_365.f_2, 6);
	}
	return 0;
}

int func_1078(int iParam0)//Position - 0x2FD06
{
	if (func_145(iParam0) == 243)
	{
		return func_143(iParam0);
	}
	return -1;
}

void func_1079(int iParam0)//Position - 0x2FD23
{
	STATS::_0x2D7A9B577E72385E(&Global_1675175);
	func_1080();
}

void func_1080()//Position - 0x2FD37
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1675175 = { Var0 };
}

void func_1081(int iParam0)//Position - 0x2FE60
{
	STATS::_0x830C3A44EB3F2CF9(&Global_1675228);
	func_1082();
}

void func_1082()//Position - 0x2FE74
{
	struct<39> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1675228 = { Var0 };
}

bool func_1083(int iParam0)//Position - 0x2FF67
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_318.f_1, 0);
}

bool func_1084(int iParam0)//Position - 0x2FF92
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_318.f_1, 19);
}

void func_1085(int iParam0)//Position - 0x2FFBE
{
	STATS::_PLAYSTATS_H2_FMPREP_END(&Global_1675094);
	func_1086();
}

void func_1086()//Position - 0x2FFD2
{
	struct<46> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1675094 = { Var0 };
	Global_1675094.f_16 = 0;
}

void func_1087(int iParam0)//Position - 0x300E2
{
	STATS::_PLAYSTATS_SMUG_MISSION_ENDED(&Global_1675040);
	func_1088();
}

void func_1088()//Position - 0x300F6
{
	struct<54> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1675040 = { Var0 };
	Global_1675040.f_23 = 0;
	Global_1675040.f_24 = 0;
	Global_1675040.f_16 = 0;
}

void func_1089()//Position - 0x30242
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_936(12));
		func_935(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323611[iVar1 /*141*/].f_66 != 0 && func_1091(Global_1323611[iVar1 /*141*/].f_66, 1))
			{
				if (Global_2531497.f_896 != iVar1)
				{
					if (func_1090(Global_1323611[iVar1 /*141*/].f_66))
					{
						if (Global_1323611[iVar1 /*141*/].f_66 != 0)
						{
							iVar3 = Global_1323611[iVar1 /*141*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1675040.f_38 = iVar3;
								break;
							
							case 1:
								Global_1675040.f_39 = iVar3;
								break;
							
							case 2:
								Global_1675040.f_40 = iVar3;
								break;
							
							case 3:
								Global_1675040.f_41 = iVar3;
								break;
							
							case 4:
								Global_1675040.f_42 = iVar3;
								break;
							
							case 5:
								Global_1675040.f_43 = iVar3;
								break;
							
							case 6:
								Global_1675040.f_44 = iVar3;
								break;
							
							case 7:
								Global_1675040.f_45 = iVar3;
								break;
							
							case 8:
								Global_1675040.f_46 = iVar3;
								break;
							
							case 9:
								Global_1675040.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_1090(int iParam0)//Position - 0x30388
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case -1984275979:
		case -42959138:
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case -749299473:
		case -975345305:
		case -1700874274:
		case -392675425:
		case -1763555241:
		case 1043222410:
		case joaat("lazer"):
		case -1386191424:
		case 1565978651:
		case 1036591958:
		case -1007528109:
		case -32878452:
		case -1523619738:
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case 1181327175:
		case 447548909:
		case -726768679:
			return 1;
		
		default:
	}
	if (iParam0 == 1692272545)
	{
		return 1;
	}
	return 0;
}

int func_1091(int iParam0, bool bParam1)//Position - 0x304C4
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_1098())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_1097() && !func_1096()) && !func_1095()) && !func_1094()) && !func_1098())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_1095())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_1093(iParam0))
		{
			return 0;
		}
	}
	if (!func_1092(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_1092(int iParam0)//Position - 0x30644
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_346())
	{
		return 1;
	}
	NETSHOPPING::_NET_GAMESERVER_GET_TRANSACTION_MANAGER_DATA(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_1093(int iParam0)//Position - 0x30710
{
	int iVar0;
	int iVar1;
	
	if (Global_2507711)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6599 && !Global_262145.f_12910) && iVar1 < Global_262145.f_12911)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14210 && iVar1 < Global_262145.f_14222)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14206 && iVar1 < Global_262145.f_14218)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14207 && iVar1 < Global_262145.f_14219)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14208 && iVar1 < Global_262145.f_14220)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14209 && iVar1 < Global_262145.f_14221)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14211 && iVar1 < Global_262145.f_14223)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14212 && iVar1 < Global_262145.f_14215)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14213 && iVar1 < Global_262145.f_14216)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14214 && iVar1 < Global_262145.f_14217)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16841 && iVar1 < Global_262145.f_16806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16836 && iVar1 < Global_262145.f_16801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16840 && iVar1 < Global_262145.f_16805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16839 && iVar1 < Global_262145.f_16804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16833 && iVar1 < Global_262145.f_16798)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16834 && iVar1 < Global_262145.f_16799)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16837 && iVar1 < Global_262145.f_16802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16838 && iVar1 < Global_262145.f_16803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16835 && iVar1 < Global_262145.f_16800)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16843 && iVar1 < Global_262145.f_16808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16844 && iVar1 < Global_262145.f_16809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16832 && iVar1 < Global_262145.f_16797)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16831 && iVar1 < Global_262145.f_16796)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16830 && iVar1 < Global_262145.f_16795)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16842 && iVar1 < Global_262145.f_16807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16845 && iVar1 < Global_262145.f_16810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16846 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16847 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16848 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16995 && iVar1 < Global_262145.f_17017)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16996 && iVar1 < Global_262145.f_17018)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16997 && iVar1 < Global_262145.f_17019)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16998 && iVar1 < Global_262145.f_17020)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16999 && iVar1 < Global_262145.f_17021)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17000 && iVar1 < Global_262145.f_17022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17002 && iVar1 < Global_262145.f_17023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17003 && iVar1 < Global_262145.f_17024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17004 && iVar1 < Global_262145.f_17025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17005 && iVar1 < Global_262145.f_17026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17006 && iVar1 < Global_262145.f_17027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17007 && iVar1 < Global_262145.f_17028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17008 && iVar1 < Global_262145.f_17029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17014 && iVar1 < Global_262145.f_17036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17011 && iVar1 < Global_262145.f_17032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17012 && iVar1 < Global_262145.f_17033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17013 && iVar1 < Global_262145.f_17034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17001 && iVar1 < Global_262145.f_17035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17009 && iVar1 < Global_262145.f_17030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17010 && iVar1 < Global_262145.f_17031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18647 && iVar1 < Global_262145.f_18744)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18648 && iVar1 < Global_262145.f_18745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18649 && iVar1 < Global_262145.f_18746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18650 && iVar1 < Global_262145.f_18747)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18651 && iVar1 < Global_262145.f_18748)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18652 && iVar1 < Global_262145.f_18749)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18653 && iVar1 < Global_262145.f_18750)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18654 && iVar1 < Global_262145.f_18751)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18655 && iVar1 < Global_262145.f_18752)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18656 && iVar1 < Global_262145.f_18753)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18657 && iVar1 < Global_262145.f_18754)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18658 && iVar1 < Global_262145.f_18755)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18659 && iVar1 < Global_262145.f_18756)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18660 && iVar1 < Global_262145.f_18757)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18661 && iVar1 < Global_262145.f_18758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18662 && iVar1 < Global_262145.f_18759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18663 && iVar1 < Global_262145.f_18760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18664 && iVar1 < Global_262145.f_18761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18665 && iVar1 < Global_262145.f_18762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18666 && iVar1 < Global_262145.f_18763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_262145.f_19728 && iVar1 < Global_262145.f_19724)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_262145.f_19729 && iVar1 < Global_262145.f_19725)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_262145.f_19730 && iVar1 < Global_262145.f_19726)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_262145.f_19731 && iVar1 < Global_262145.f_19727)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_262145.f_20607 && iVar1 < Global_262145.f_20615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_262145.f_20608 && iVar1 < Global_262145.f_20616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_262145.f_20609 && iVar1 < Global_262145.f_20617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_262145.f_20610 && iVar1 < Global_262145.f_20618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_262145.f_20611 && iVar1 < Global_262145.f_20619)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_262145.f_20612 && iVar1 < Global_262145.f_20620)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_262145.f_21384 && iVar1 < Global_262145.f_21404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_262145.f_21396 && iVar1 < Global_262145.f_21416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_262145.f_21387 && iVar1 < Global_262145.f_21407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_262145.f_21397 && iVar1 < Global_262145.f_21417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_262145.f_21385 && iVar1 < Global_262145.f_21405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_262145.f_21401 && iVar1 < Global_262145.f_21421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_262145.f_21399 && iVar1 < Global_262145.f_21419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_262145.f_21400 && iVar1 < Global_262145.f_21420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_262145.f_21395 && iVar1 < Global_262145.f_21415)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_262145.f_21402 && iVar1 < Global_262145.f_21422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_262145.f_21398 && iVar1 < Global_262145.f_21418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_262145.f_21394 && iVar1 < Global_262145.f_21414)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_262145.f_21386 && iVar1 < Global_262145.f_21406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_262145.f_21388 && iVar1 < Global_262145.f_21408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_262145.f_21389 && iVar1 < Global_262145.f_21409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_262145.f_21390 && iVar1 < Global_262145.f_21410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_262145.f_21391 && iVar1 < Global_262145.f_21411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_262145.f_21392 && iVar1 < Global_262145.f_21412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_262145.f_21393 && iVar1 < Global_262145.f_21413)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_262145.f_22345 && iVar1 < Global_262145.f_22373)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_22346 && iVar1 < Global_262145.f_22374)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_262145.f_22347 && iVar1 < Global_262145.f_22375)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_262145.f_22348 && iVar1 < Global_262145.f_22376)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_262145.f_22349 && iVar1 < Global_262145.f_22377)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_262145.f_22350 && iVar1 < Global_262145.f_22378)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_262145.f_22351 && iVar1 < Global_262145.f_22379)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_262145.f_22352 && iVar1 < Global_262145.f_22380)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_262145.f_22353 && iVar1 < Global_262145.f_22381)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_262145.f_22354 && iVar1 < Global_262145.f_22382)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_262145.f_22355 && iVar1 < Global_262145.f_22383)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_262145.f_22356 && iVar1 < Global_262145.f_22384)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_262145.f_22357 && iVar1 < Global_262145.f_22385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_262145.f_22358 && iVar1 < Global_262145.f_22386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_262145.f_22359 && iVar1 < Global_262145.f_22387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_262145.f_22360 && iVar1 < Global_262145.f_22388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_262145.f_22361 && iVar1 < Global_262145.f_22389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_262145.f_22362 && iVar1 < Global_262145.f_22390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_262145.f_22363 && iVar1 < Global_262145.f_22391)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_262145.f_22364 && iVar1 < Global_262145.f_22392)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_262145.f_22365 && iVar1 < Global_262145.f_22393)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_262145.f_22366 && iVar1 < Global_262145.f_22394)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_262145.f_22367 && iVar1 < Global_262145.f_22395)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_262145.f_22368 && iVar1 < Global_262145.f_22396)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_262145.f_22369 && iVar1 < Global_262145.f_22397)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_262145.f_23561 && iVar1 < Global_262145.f_23577)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_262145.f_23562 && iVar1 < Global_262145.f_23578)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_262145.f_23566 && iVar1 < Global_262145.f_23582)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_262145.f_23569 && iVar1 < Global_262145.f_23585)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_262145.f_23574 && iVar1 < Global_262145.f_23590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_262145.f_23568 && iVar1 < Global_262145.f_23584)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_262145.f_23560 && iVar1 < Global_262145.f_23576)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_262145.f_23567 && iVar1 < Global_262145.f_23583)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_262145.f_23573 && iVar1 < Global_262145.f_23589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_262145.f_23572 && iVar1 < Global_262145.f_23588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_262145.f_23563 && iVar1 < Global_262145.f_23579)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_262145.f_23565 && iVar1 < Global_262145.f_23581)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_262145.f_23575 && iVar1 < Global_262145.f_23591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_262145.f_23571 && iVar1 < Global_262145.f_23587)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_262145.f_23564 && iVar1 < Global_262145.f_23580)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_262145.f_23570 && iVar1 < Global_262145.f_23586)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_262145.f_23651 && iVar1 < Global_262145.f_23638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_262145.f_23652 && iVar1 < Global_262145.f_23639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_262145.f_23657 && iVar1 < Global_262145.f_23644)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_262145.f_23656 && iVar1 < Global_262145.f_23643)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_262145.f_23654 && iVar1 < Global_262145.f_23641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_262145.f_23660 && iVar1 < Global_262145.f_23647)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -638562243)
	{
		if (!Global_262145.f_23662 && iVar1 < Global_262145.f_23649)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_262145.f_23663 && iVar1 < Global_262145.f_23650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_262145.f_23661 && iVar1 < Global_262145.f_23648)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -420911112)
	{
		if (!Global_262145.f_23653 && iVar1 < Global_262145.f_23640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_262145.f_23655 && iVar1 < Global_262145.f_23642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -54332285)
	{
		if (!Global_262145.f_23659 && iVar1 < Global_262145.f_23646)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -307958377)
	{
		if (!Global_262145.f_23658 && iVar1 < Global_262145.f_23645)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1721676810)
	{
	}
	else if (iParam0 == -801550069)
	{
	}
	else if (iParam0 == 679453769)
	{
	}
	else if (iParam0 == 1909700336)
	{
	}
	else if (iParam0 == 2139203625)
	{
	}
	else if (iParam0 == -1890996696)
	{
	}
	else if (iParam0 == 2038858402)
	{
	}
	else if (iParam0 == -1146969353)
	{
	}
	else if (iParam0 == 1542143200)
	{
	}
	else if (iParam0 == -579747861)
	{
	}
	else if (iParam0 == 444994115)
	{
	}
	else if (iParam0 == 1637620610)
	{
	}
	else if (iParam0 == -755532233)
	{
	}
	else if (iParam0 == 540101442)
	{
	}
	else if (iParam0 == -1106120762)
	{
	}
	else if (iParam0 == -1478704292)
	{
	}
	else if (iParam0 == -2096690334)
	{
	}
	else if (iParam0 == 1591739866)
	{
		if (!Global_262145.f_25913 && iVar1 < Global_262145.f_25915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1168952148)
	{
		if (!Global_262145.f_24926 && iVar1 < Global_262145.f_24919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1566607184)
	{
		if (!Global_262145.f_24927 && iVar1 < Global_262145.f_24920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -331467772)
	{
		if (!Global_262145.f_24928 && iVar1 < Global_262145.f_24921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1279262537)
	{
		if (!Global_262145.f_24929 && iVar1 < Global_262145.f_24922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -49115651)
	{
		if (!Global_262145.f_25914 && iVar1 < Global_262145.f_25916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456744817)
	{
		if (!Global_262145.f_24930 && iVar1 < Global_262145.f_24923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -507495760)
	{
		if (!Global_262145.f_24931 && iVar1 < Global_262145.f_24924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -286046740)
	{
		if (!Global_262145.f_24932 && iVar1 < Global_262145.f_24925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1044193113)
	{
		if (!Global_262145.f_24937 && iVar1 < Global_262145.f_24958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 686471183)
	{
		if (!Global_262145.f_24938 && iVar1 < Global_262145.f_24959)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -941272559)
	{
		if (!Global_262145.f_24939 && iVar1 < Global_262145.f_24960)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829436850)
	{
		if (!Global_262145.f_24940 && iVar1 < Global_262145.f_24961)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -682108547)
	{
		if (!Global_262145.f_24941 && iVar1 < Global_262145.f_24962)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 722226637)
	{
		if (!Global_262145.f_24942 && iVar1 < Global_262145.f_24963)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1854776567)
	{
		if (!Global_262145.f_24943 && iVar1 < Global_262145.f_24964)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1862507111)
	{
		if (!Global_262145.f_24944 && iVar1 < Global_262145.f_24965)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -882629065)
	{
		if (!Global_262145.f_24945 && iVar1 < Global_262145.f_24966)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -362150785)
	{
		if (!Global_262145.f_24946 && iVar1 < Global_262145.f_24967)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 310284501)
	{
		if (!Global_262145.f_24947 && iVar1 < Global_262145.f_24968)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 916547552)
	{
		if (!Global_262145.f_24948 && iVar1 < Global_262145.f_24969)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1804415708)
	{
		if (!Global_262145.f_24949 && iVar1 < Global_262145.f_24970)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1934384720)
	{
		if (!Global_262145.f_24950 && iVar1 < Global_262145.f_24971)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1349095620)
	{
		if (!Global_262145.f_24951 && iVar1 < Global_262145.f_24972)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -208911803)
	{
		if (!Global_262145.f_24952 && iVar1 < Global_262145.f_24973)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -324618589)
	{
		if (!Global_262145.f_24953 && iVar1 < Global_262145.f_24974)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -664141241)
	{
		if (!Global_262145.f_24954 && iVar1 < Global_262145.f_24975)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1323778901)
	{
		if (!Global_262145.f_24955 && iVar1 < Global_262145.f_24976)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1620126302)
	{
		if (!Global_262145.f_24956 && iVar1 < Global_262145.f_24977)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -447711397)
	{
		if (!Global_262145.f_24957 && iVar1 < Global_262145.f_24978)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1118611807)
	{
		if (!Global_262145.f_27748 && iVar1 < Global_262145.f_27769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 409049982)
	{
		if (!Global_262145.f_27749 && iVar1 < Global_262145.f_27770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1756021720)
	{
		if (!Global_262145.f_27750 && iVar1 < Global_262145.f_27771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2031587082)
	{
		if (!Global_262145.f_27751 && iVar1 < Global_262145.f_27772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1693751655)
	{
		if (!Global_262145.f_27752 && iVar1 < Global_262145.f_27773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 987469656)
	{
		if (!Global_262145.f_27753 && iVar1 < Global_262145.f_27774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 872704284)
	{
		if (!Global_262145.f_27754 && iVar1 < Global_262145.f_27775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 408825843)
	{
		if (!Global_262145.f_27755 && iVar1 < Global_262145.f_27776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 740289177)
	{
		if (!Global_262145.f_27756 && iVar1 < Global_262145.f_27777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -834353991)
	{
		if (!Global_262145.f_27757 && iVar1 < Global_262145.f_27778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 301304410)
	{
		if (!Global_262145.f_27758 && iVar1 < Global_262145.f_27779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 960812448)
	{
		if (!Global_262145.f_27759 && iVar1 < Global_262145.f_27780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1284356689)
	{
		if (!Global_262145.f_27760 && iVar1 < Global_262145.f_27781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 394110044)
	{
		if (!Global_262145.f_27761 && iVar1 < Global_262145.f_27782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1938952078)
	{
		if (!Global_262145.f_27762 && iVar1 < Global_262145.f_27783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_27763 && iVar1 < Global_262145.f_27784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_27764 && iVar1 < Global_262145.f_27785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_27765 && iVar1 < Global_262145.f_27786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1254331310)
	{
		if (!Global_262145.f_27766 && iVar1 < Global_262145.f_27787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_27767 && iVar1 < Global_262145.f_27788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_27768 && iVar1 < Global_262145.f_27789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 340154634)
	{
		if ((!Global_262145.f_27791 && iVar1 < Global_262145.f_27792) && !Global_262145.f_27746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1960756985)
	{
		if ((!Global_262145.f_27794 && iVar1 < Global_262145.f_27795) && !Global_262145.f_27747)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1132721664)
	{
		if (!Global_262145.f_27799 && iVar1 < Global_262145.f_27802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 83136452)
	{
		if (!Global_262145.f_27800 && iVar1 < Global_262145.f_27803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456336509)
	{
		if (!Global_262145.f_27801 && iVar1 < Global_262145.f_27804)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_1094()//Position - 0x32BDB
{
	return 0;
}

int func_1095()//Position - 0x32BE4
{
	return 1;
}

int func_1096()//Position - 0x32BED
{
	return 1;
}

int func_1097()//Position - 0x32BF6
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_1098()//Position - 0x32C0F
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAVE_JUST_UPLOAD_LATER())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150394 == 2)
	{
		return 1;
	}
	else if (Global_150394 == 3)
	{
		return 0;
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

var func_1099()//Position - 0x32CCA
{
	var uVar0;
	
	uVar0 = func_1100();
	if (!func_175())
	{
		if (func_181() != func_398())
		{
			uVar0 = func_1122(func_181()) + 1;
		}
	}
	return uVar0;
}

int func_1100()//Position - 0x32CF9
{
	return func_1122(PLAYER::PLAYER_ID()) + 1;
}

int func_1101()//Position - 0x32D0B
{
	return func_50(6113, -1, 0);
}

void func_1102(int iParam0)//Position - 0x32D1C
{
	if (iParam0 == 0)
	{
	}
	STATS::_PLAYSTATS_GUNRUN_MISSION_ENDED(&Global_1674996);
	func_1103();
}

void func_1103()//Position - 0x32D36
{
	struct<44> Var0;
	
	Global_1674996 = { Var0 };
	Global_1674996.f_23 = 0;
	Global_1674996.f_24 = 0;
	Global_1674996.f_16 = 0;
}

bool func_1104(int iParam0)//Position - 0x32D5F
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 12);
}

bool func_1105(int iParam0)//Position - 0x32D7C
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 13);
}

int func_1106(int iParam0)//Position - 0x32D99
{
	if (iParam0 != func_398())
	{
		if ((MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 12) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 13)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_1107(int iParam0)//Position - 0x32DFA
{
	if (iParam0 != func_398())
	{
		if ((MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 0) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 1)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_1108(int iParam0)//Position - 0x32E58
{
	if (iParam0 != func_398())
	{
		if (((((MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 3) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 4)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 5)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 0)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 1)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_1109(int iParam0)//Position - 0x32F01
{
	if (iParam0 != func_398())
	{
		if ((MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 6) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 7)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_1110(int iParam0)//Position - 0x32F60
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 9);
}

void func_1111(int iParam0)//Position - 0x32F8A
{
	if (iParam0 == 0)
	{
	}
	STATS::_0x7D8BA05688AD64C7(&Global_1674933);
	func_1112();
}

void func_1112()//Position - 0x32FA4
{
	struct<63> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1674933 = { Var0 };
	Global_1674933.f_24 = 0;
	Global_1674933.f_25 = 0;
	Global_1674933.f_17 = 0;
}

void func_1113(int iParam0)//Position - 0x3310E
{
	if (iParam0 == 0)
	{
	}
	STATS::_0xBF371CD2B64212FD(&Global_1674879);
	func_1114();
}

void func_1114()//Position - 0x33128
{
	struct<54> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1674879 = { Var0 };
	Global_1674879.f_29 = 0;
	Global_1674879.f_30 = 0;
	Global_1674879.f_17 = 0;
}

int func_1115(int iParam0, int iParam1)//Position - 0x3325C
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_299(iParam0, iParam1, 2);
	bVar1 = func_299(iParam0, iParam1, 1);
	bVar2 = func_299(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_1116(int iParam0, bool bParam1, bool bParam2)//Position - 0x33312
{
	int iVar0;
	int iVar1;
	
	if (func_161(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17687;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17686;
		}
		else
		{
			iVar0 = Global_262145.f_17668;
		}
		iVar1 = 19;
	}
	else if (func_991(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_155(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17667;
			iVar1 = 20;
		}
	}
	else if (func_152(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17687;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17686;
		}
		else
		{
			iVar0 = Global_262145.f_17668;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		STATS::_PLAYSTATS_EARNED_MC_POINTS(func_995(func_181()), func_994(func_181()), func_953(), func_952(), iVar1, iVar0);
	}
	func_1118(iVar0);
	func_1117(iVar0);
	return iVar0;
}

void func_1117(int iParam0)//Position - 0x33405
{
	int iVar0;
	
	iVar0 = func_50(3968, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_490 = iVar0;
	func_159(3968, iVar0, -1, 1, 0);
}

void func_1118(int iParam0)//Position - 0x33453
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	Global_1628955[iVar0 /*614*/].f_11.f_489 = (Global_1628955[iVar0 /*614*/].f_11.f_489 + iParam0);
	if (Global_1628955[iVar0 /*614*/].f_11.f_489 < -9999)
	{
		Global_1628955[iVar0 /*614*/].f_11.f_489 = 9999;
	}
	else if (Global_1628955[iVar0 /*614*/].f_11.f_489 > 9999)
	{
		Global_1628955[iVar0 /*614*/].f_11.f_489 = 9999;
	}
}

int func_1119(bool bParam0)//Position - 0x334CD
{
	if (bParam0)
	{
		return 0;
	}
	if (func_41(PLAYER::PLAYER_ID()) || func_45(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_1120(int iParam0)//Position - 0x334FC
{
	STATS::_0x316DB59CD14C1774(&Global_1675140);
	func_1121();
}

void func_1121()//Position - 0x33510
{
	struct<35> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_1675140 = { Var0 };
}

int func_1122(int iParam0)//Position - 0x335F1
{
	if (func_119(iParam0) == func_398())
	{
		return 0;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_19;
}

int func_1123(bool bParam0)//Position - 0x33617
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_528(PLAYER::PLAYER_ID());
	}
	else
	{
		iVar0 = func_145(PLAYER::PLAYER_ID());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_1126(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_1125(PLAYER::PLAYER_ID());
			if (func_141(func_142(PLAYER::PLAYER_ID())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_1125(PLAYER::PLAYER_ID());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_1124(PLAYER::PLAYER_ID());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_1124(PLAYER::PLAYER_ID());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_1124(int iParam0)//Position - 0x3374F
{
	if (func_145(PLAYER::PLAYER_ID()) == 238 || func_145(PLAYER::PLAYER_ID()) == 249)
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_498;
	}
	return -1;
}

int func_1125(int iParam0)//Position - 0x33788
{
	if (func_145(PLAYER::PLAYER_ID()) == 237 || func_145(PLAYER::PLAYER_ID()) == 250)
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_497;
	}
	return -1;
}

int func_1126(int iParam0)//Position - 0x337C1
{
	if (func_528(iParam0) == 236)
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_496;
	}
	return -1;
}

int func_1127(bool bParam0)//Position - 0x337E6
{
	if (func_1130(1))
	{
		return 1;
	}
	if (Global_2531497.f_4898.f_39)
	{
		Global_2531497.f_4898.f_39 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_248() == func_398() || !func_1276(func_248(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_1041(PLAYER::PLAYER_ID()))
	{
		if (func_1129(PLAYER::PLAYER_ID()) && func_1128())
		{
			return 1;
		}
	}
	return 0;
}

int func_1128()//Position - 0x3385F
{
	switch (func_1040(func_1035(PLAYER::PLAYER_ID())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_1129(int iParam0)//Position - 0x33889
{
	if (iParam0 != func_398() && func_1276(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309, 4);
	}
	return 0;
}

int func_1130(bool bParam0)//Position - 0x338BD
{
	bool bVar0;
	
	if (!func_179(1))
	{
		bVar0 = false;
		if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57 != func_398())
		{
			if (func_1276(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57, 0, 1))
			{
				if ((Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_24 == 4 || Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_24 == 8) || Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_865(func_145(PLAYER::PLAYER_ID())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_241(31);
				if (func_152(func_145(PLAYER::PLAYER_ID())))
				{
					func_241(81);
				}
				if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57 != func_398() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57))
				{
					Global_1627443 = func_86(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_163(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57))
					{
						func_241(88);
					}
				}
				else
				{
					Global_1627443 = 1;
				}
				Global_1627427 = { Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_104 };
			}
			return 1;
		}
	}
	return 0;
}

void func_1131()//Position - 0x33A0F
{
	if (MISC::IS_BIT_SET(Global_1574647.f_1, 6))
	{
		func_869();
		MISC::CLEAR_BIT(&(Global_1574647.f_1), 6);
	}
	if (!MISC::IS_BIT_SET(Global_1574647.f_1, 7))
	{
		if (MISC::IS_BIT_SET(Global_1574647.f_1, 4) || MISC::IS_BIT_SET(Global_1574647.f_1, 16))
		{
			if (((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_568()) && func_1276(PLAYER::PLAYER_ID(), 1, 1))
			{
				MISC::SET_BIT(&(Global_1574647.f_1), 7);
				func_630("FME_PASINT", 30000);
				func_629(1);
			}
		}
		else if (MISC::IS_BIT_SET(Global_1574647.f_1, 17))
		{
			if (func_44() && !func_373())
			{
				MISC::CLEAR_BIT(&(Global_1574647.f_1), 17);
				MISC::SET_BIT(&(Global_1574647.f_1), 16);
			}
		}
	}
	if (!MISC::IS_BIT_SET(Global_1574647.f_1, 23))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !MISC::IS_BIT_SET(Global_2531497.f_795, 2)) && func_1276(PLAYER::PLAYER_ID(), 1, 1)) && !Global_73784) && !Global_58652) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (func_1148())
			{
				func_630("AMEV_GA_RP", -1);
				if (func_145(PLAYER::PLAYER_ID()) != 200)
				{
					func_629(1);
				}
				MISC::SET_BIT(&(Global_1574647.f_1), 23);
			}
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_42(PLAYER::PLAYER_ID()))
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
	if (MISC::IS_BIT_SET(Global_1574647.f_1, 9))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_568()) && func_1276(PLAYER::PLAYER_ID(), 1, 1)) && !func_372(PLAYER::PLAYER_ID(), 21)) && !func_372(PLAYER::PLAYER_ID(), 25))
		{
			MISC::CLEAR_BIT(&(Global_1574647.f_1), 9);
			func_1147(0);
			func_630("FME_TBL00", -1);
			func_629(1);
		}
	}
	if (func_47(PLAYER::PLAYER_ID()))
	{
		if (!MISC::IS_BIT_SET(Global_1574647.f_1, 18))
		{
			if ((func_372(PLAYER::PLAYER_ID(), 21) && MISC::IS_BIT_SET(Global_1574647.f_1, 20)) && !MISC::IS_BIT_SET(Global_1574647.f_1, 19))
			{
				MISC::SET_BIT(&(Global_1574647.f_1), 18);
			}
		}
		else if (MISC::IS_BIT_SET(Global_1574647.f_1, 18))
		{
			if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_568()) && func_1276(PLAYER::PLAYER_ID(), 1, 1)) && CAM::IS_SCREEN_FADED_IN()) && !Global_2531497.f_4831)
			{
				MISC::CLEAR_BIT(&(Global_1574647.f_1), 18);
				MISC::SET_BIT(&(Global_1574647.f_1), 19);
				func_630("AMTT_RPAS", -1);
				func_629(1);
			}
		}
	}
	if (((((func_47(PLAYER::PLAYER_ID()) && !func_46(PLAYER::PLAYER_ID())) && func_528(PLAYER::PLAYER_ID()) != 146) && !func_375(PLAYER::PLAYER_ID())) && !func_1146(PLAYER::PLAYER_ID())) && !func_1142())
	{
		if (func_854(func_528(PLAYER::PLAYER_ID())))
		{
			PLAYER::_0xFAC75988A7D078D3(PLAYER::PLAYER_ID());
		}
		if (!MISC::IS_BIT_SET(Global_1574647.f_1, 22))
		{
			MISC::SET_BIT(&(Global_1574647.f_1), 22);
		}
		if (func_43(PLAYER::PLAYER_ID()) || func_852())
		{
			if (!MISC::IS_BIT_SET(Global_1574647.f_1, 10))
			{
				if (func_1140(func_528(PLAYER::PLAYER_ID())))
				{
					if (func_49(0) && !Global_2391045)
					{
						MISC::SET_BIT(&(Global_1574647.f_1), 9);
					}
					if (!Global_2391045)
					{
						func_721(1);
						MISC::SET_BIT(&(Global_1574647.f_1), 14);
					}
				}
				MISC::SET_BIT(&(Global_1574647.f_1), 10);
			}
		}
		if (func_42(PLAYER::PLAYER_ID()))
		{
			if (!MISC::IS_BIT_SET(Global_1574647.f_1, 11))
			{
				if (!Global_98721.f_8)
				{
					MISC::SET_BIT(&(Global_1574647.f_1), 12);
					func_766(1);
				}
				if (!func_1139())
				{
					MISC::SET_BIT(&(Global_1574647.f_1), 13);
					func_853();
				}
				if (!Global_2391045)
				{
					MISC::SET_BIT(&(Global_1574647.f_1), 14);
					if (func_49(0) && !Global_2391045)
					{
						MISC::SET_BIT(&(Global_1574647.f_1), 9);
					}
					func_721(1);
				}
				MISC::SET_BIT(&(Global_1574647.f_1), 11);
			}
		}
		else
		{
			func_1137(0);
		}
	}
	else
	{
		func_1137(1);
	}
	func_1132();
	if (func_851(func_528(PLAYER::PLAYER_ID())) && !MISC::IS_BIT_SET(Global_1574647.f_1, 21))
	{
		MISC::SET_BIT(&(Global_1574647.f_1), 21);
	}
	if (((func_44() && !func_373()) || func_372(PLAYER::PLAYER_ID(), 21)) || func_372(PLAYER::PLAYER_ID(), 25))
	{
		if (!MISC::IS_BIT_SET(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1, 10))
		{
			MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 10);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1, 10))
	{
		MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 10);
	}
}

void func_1132()//Position - 0x33F4F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_568())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_793(iVar2))
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
				if (MISC::IS_BIT_SET(Global_1574647.f_1, 26))
				{
					MISC::CLEAR_BIT(&(Global_1574647.f_1), 26);
				}
				func_1133(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!MISC::IS_BIT_SET(Global_1574647.f_1, 26))
	{
		func_22(&(Global_1574647.f_22));
		MISC::SET_BIT(&(Global_1574647.f_1), 26);
	}
}

void func_1133(int iParam0, int iParam1)//Position - 0x33FF2
{
	if (!func_24(&(Global_1574647.f_22)))
	{
		func_397(&(Global_1574647.f_22), 0, 0);
	}
	else if (func_23(&(Global_1574647.f_22), iParam1, 0))
	{
		if (func_617() > 0)
		{
			func_1136(iParam0);
			if (func_501("AMEV_LBD_HELP"))
			{
				HUD::CLEAR_HELP(1);
			}
			func_22(&(Global_1574647.f_22));
		}
	}
	else
	{
		func_1135(0);
		func_1134();
	}
}

void func_1134()//Position - 0x3405E
{
	Global_2531497.f_4532 = 0;
}

void func_1135(int iParam0)//Position - 0x3406E
{
	Global_1373500.f_68 = iParam0;
}

void func_1136(int iParam0)//Position - 0x3407E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2437549.f_2708[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			func_113(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_1137(int iParam0)//Position - 0x340CA
{
	if ((MISC::IS_BIT_SET(Global_1574647.f_1, 11) || (MISC::IS_BIT_SET(Global_1574647.f_1, 10) && iParam0)) || (MISC::IS_BIT_SET(Global_1574647.f_1, 22) && iParam0))
	{
		if (MISC::IS_BIT_SET(Global_1574647.f_1, 12))
		{
			MISC::CLEAR_BIT(&(Global_1574647.f_1), 12);
			func_766(0);
		}
		if (MISC::IS_BIT_SET(Global_1574647.f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1574647.f_1), 13);
			func_1138();
		}
		if (MISC::IS_BIT_SET(Global_1574647.f_1, 14) && !func_144(PLAYER::PLAYER_ID(), 0))
		{
			MISC::CLEAR_BIT(&(Global_1574647.f_1), 14);
			func_721(0);
		}
		MISC::CLEAR_BIT(&(Global_1574647.f_1), 11);
		MISC::CLEAR_BIT(&(Global_1574647.f_1), 10);
		MISC::CLEAR_BIT(&(Global_1574647.f_1), 22);
	}
}

void func_1138()//Position - 0x341A5
{
	MISC::CLEAR_BIT(&(Global_2531497.f_4736), 0);
}

bool func_1139()//Position - 0x341B9
{
	return MISC::IS_BIT_SET(Global_2531497.f_4736, 0);
}

int func_1140(int iParam0)//Position - 0x341CD
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
			return func_42(PLAYER::PLAYER_ID());
		
		case 133:
			return (func_852() || func_1141(func_587()));
		
		default:
	}
	return 0;
}

int func_1141(int iParam0)//Position - 0x3423D
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

int func_1142()//Position - 0x34275
{
	if (((((((((func_688() || func_488()) || func_687()) || func_455()) || (func_684() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_1145() && !func_1144())) || Global_2394733) || Global_2394733.f_1 != 0) || Global_2394807 != 0) || (func_1143() == 2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
	{
		return 1;
	}
	return 0;
}

int func_1143()//Position - 0x34309
{
	return Global_968397;
}

bool func_1144()//Position - 0x34315
{
	return MISC::IS_BIT_SET(Global_2448961.f_2, 27);
}

int func_1145()//Position - 0x34329
{
	if (func_680() || func_679())
	{
		return Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_98 == 8;
	}
	return 0;
}

bool func_1146(int iParam0)//Position - 0x34356
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (((func_44() && !func_373()) || func_372(PLAYER::PLAYER_ID(), 21)) || func_372(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		if (func_24(&(Global_1574647.f_13)))
		{
			if (!func_23(&(Global_1574647.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_22(&(Global_1574647.f_13));
		}
	}
	else if (MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 10))
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 9);
}

void func_1147(int iParam0)//Position - 0x343F8
{
	int iVar0;
	
	iVar0 = func_50(2534, -1, 0);
	if (iParam0 == 0)
	{
		if (!MISC::IS_BIT_SET(iVar0, 0))
		{
			MISC::SET_BIT(&iVar0, 0);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 1))
		{
			MISC::SET_BIT(&iVar0, 1);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 2))
		{
			MISC::SET_BIT(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!MISC::IS_BIT_SET(iVar0, 3))
		{
			MISC::SET_BIT(&iVar0, 3);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 4))
		{
			MISC::SET_BIT(&iVar0, 4);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 5))
		{
			MISC::SET_BIT(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!MISC::IS_BIT_SET(iVar0, 6))
		{
			MISC::SET_BIT(&iVar0, 6);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 7))
		{
			MISC::SET_BIT(&iVar0, 7);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 8))
		{
			MISC::SET_BIT(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!MISC::IS_BIT_SET(iVar0, 9))
		{
			MISC::SET_BIT(&iVar0, 9);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 10))
		{
			MISC::SET_BIT(&iVar0, 10);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 11))
		{
			MISC::SET_BIT(&iVar0, 11);
		}
	}
	func_159(2534, iVar0, -1, 1, 0);
}

int func_1148()//Position - 0x34530
{
	int iVar0;
	
	if (!func_24(&(Global_1574647.f_15)))
	{
		func_397(&(Global_1574647.f_15), 0, 0);
		Global_1574647.f_17 = 0;
	}
	else if (func_23(&(Global_1574647.f_15), 1000, 0))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1574647.f_17)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1574647.f_17));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if (func_1276(iVar0, 1, 1) && func_1149(iVar0, 6))
				{
					if (SYSTEM::VDIST(func_219(PLAYER::PLAYER_ID()), func_219(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1574647.f_17++;
		if (Global_1574647.f_17 >= 32)
		{
			Global_1574647.f_17 = 0;
			func_22(&(Global_1574647.f_15));
		}
	}
	return 0;
}

int func_1149(int iParam0, int iParam1)//Position - 0x345F8
{
	int iVar0;
	
	if (Global_1312448 != 0)
	{
		return 0;
	}
	if (!func_210(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1590446[iVar0 /*871*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_1150()//Position - 0x34631
{
	return Global_1574647.f_24;
}

bool func_1151(int iParam0)//Position - 0x3463F
{
	return !func_1152(iParam0);
}

int func_1152(int iParam0)//Position - 0x3464E
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_6660)
			{
				return 0;
			}
			if (func_372(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 0) || MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6661)
			{
				return 0;
			}
			if (func_372(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 0) || MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6662)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6663)
			{
				return 0;
			}
			if (func_372(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 0) || MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_1153(4))
			{
				return 0;
			}
			if (func_372(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 0) || MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_1153(4))
			{
				return 0;
			}
			if (func_372(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 0) || MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_1153(4))
			{
				return 0;
			}
			if (func_372(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 0) || MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_1153(4))
			{
				return 0;
			}
			if (func_372(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 0) || MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_1153(4))
			{
				return 0;
			}
			if (func_372(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_1153(4))
			{
				return 0;
			}
			if (func_372(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_1153(int iParam0)//Position - 0x349AC
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1276(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (MISC::IS_BIT_SET(Global_2424073[iVar0 /*421*/].f_208, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1154()//Position - 0x349F2
{
	var uVar0;
	
	func_1158(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_1157())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_1156())
	{
		return 1;
	}
	if (func_1155(159))
	{
		if (!func_688())
		{
			return 1;
		}
	}
	if (func_1155(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_725() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_725()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1155(int iParam0)//Position - 0x34A7C
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_1156()//Position - 0x34A93
{
	return Global_2458999;
}

bool func_1157()//Position - 0x34A9F
{
	return Global_2448961.f_593;
}

void func_1158(var uParam0)//Position - 0x34AAE
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 174)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1773456834:
					func_1159(iVar0);
					break;
				
				case -498955166:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &vVar4, 4);
					if (vVar4.z == 1934809180)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_1159(int iParam0)//Position - 0x34B21
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_1276(vVar0.y, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_1160(iVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar4, vVar0.z);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_1160(int iParam0, var uParam1)//Position - 0x34BA2
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1161()//Position - 0x34C01
{
	SYSTEM::WAIT(0);
}

void func_1162()//Position - 0x34C0E
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(iLocal_570, 0))
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::CLEAR_BIT(&iLocal_570, 0);
	}
	if (MISC::IS_BIT_SET(Local_112.f_1, 5) || MISC::IS_BIT_SET(Local_112.f_1, 12))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_184.f_3))
		{
			if (!PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_112.f_184.f_3)))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(NETWORK::NET_TO_PED(Local_112.f_184.f_3)))
				{
					if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_112.f_184.f_2), 0))
					{
						TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_112.f_184.f_3));
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(Local_112.f_184.f_7)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(Local_112.f_184.f_7), 0))
						{
							TASK::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_112.f_184.f_3), NETWORK::NET_TO_VEH(Local_112.f_184.f_2), 0, PLAYER::GET_PLAYER_PED(Local_112.f_184.f_7), 0f, 0f, 0f, 8, 20f, 1000f, -1f, 60, 50, -1f, 0);
						}
						else
						{
							PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_112.f_184.f_3), 2048, 1);
							TASK::TASK_SMART_FLEE_COORD(NETWORK::NET_TO_PED(Local_112.f_184.f_3), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_112.f_184.f_3), 1), 10000f, 999999, 0, 0);
						}
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_112.f_184.f_3), 1);
					}
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0) || MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
		{
			if (func_743())
			{
				func_741();
			}
		}
	}
	if (MISC::IS_BIT_SET(iLocal_570, 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2035))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2035, 0))
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_2035, 0, 0, 0, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&iLocal_570, 3);
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_493())
		{
			func_667(PLAYER::PLAYER_ID(), 1, 0, 0);
			func_494();
		}
	}
	func_776(24, 0);
	func_1222(0);
	if (!MISC::IS_BIT_SET(iLocal_569, 24))
	{
		if (Local_112.f_197 == 2)
		{
			func_1171(1, 0);
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_757(136, 0, MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 2));
		}
		else
		{
			func_757(136, 0, 0);
		}
	}
	else if (Local_112.f_197 == 2)
	{
		func_1171(1, 0);
	}
	if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_585)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_587);
	}
	if (Local_112.f_197 == 2)
	{
		if (MISC::IS_BIT_SET(Global_1574647.f_1, 8))
		{
			func_869();
		}
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (Global_1590446[PLAYER::PLAYER_ID() /*871*/] == 136)
		{
			Global_1590446[PLAYER::PLAYER_ID() /*871*/] = -1;
		}
	}
	if (MISC::IS_BIT_SET(iLocal_568, 6))
	{
		GRAPHICS::ANIMPOSTFX_STOP("pennedIn");
		GRAPHICS::ANIMPOSTFX_PLAY("PennedInOut", 0, 0);
		MISC::CLEAR_BIT(&iLocal_568, 6);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_Player_Inside_Bubble_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("MP_Player_Inside_Bubble_Scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_Player_Outside_Bubble_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("MP_Player_Outside_Bubble_Scene");
	}
	func_818(&uLocal_2735);
	func_1170();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_814();
	}
	func_825(0);
	func_623(0, 136);
	PAD::_0xCB0360EFEFB2580D(0);
	if (MISC::IS_BIT_SET(iLocal_569, 11))
	{
		if (!MISC::IS_BIT_SET(iLocal_569, 12))
		{
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
			AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_STOP");
		}
	}
	if (Local_112.f_197 != 2)
	{
		if (func_1154())
		{
			Local_2741.f_5 = 5;
		}
		else if (func_815(2, 0, 1, 0, 0))
		{
			Local_2741.f_5 = 6;
		}
		else if (func_133() == PLAYER::PLAYER_ID())
		{
			Local_2741.f_5 = 1;
		}
		else
		{
			Local_2741.f_5 = 2;
		}
		Local_2741 = Local_112.f_179;
		Local_2741.f_1 = Local_112.f_180;
		Local_2741.f_4 = Local_112.f_181;
		Local_2741.f_3 = Local_112.f_183;
		Local_2741.f_10 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Local_2741.f_9);
		func_1168(Local_2741, -1, -1, -1, -1, -1, -1);
	}
	else
	{
		Global_1674879.f_25 = Local_112.f_181;
		Global_1674861.f_2 = Local_112.f_179;
		Global_1674861.f_3 = Local_112.f_180;
		func_1166(Global_1674861, -1, -1, -1, -1);
		if (!MISC::IS_BIT_SET(iLocal_569, 31))
		{
			if (NETWORK::PARTICIPANT_ID_TO_INT() > -1)
			{
				func_1072(0, 4, 0, !MISC::IS_BIT_SET(Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0), -1, -1, -1, -1, -1, 0);
			}
		}
	}
	if (!func_334())
	{
		if (Local_2741.f_6 > 0)
		{
			if (Local_2741.f_5 == 1)
			{
				if (Local_112.f_197 != 2)
				{
					func_1165();
				}
			}
		}
	}
	func_870();
	func_791(0);
	func_438(0);
	if (func_436(PLAYER::PLAYER_ID()))
	{
		func_879(0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::CAN_KNOCK_PED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
	}
	func_1164(0);
	MISC::CLEAR_BIT(&iLocal_568, 18);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (MISC::IS_BIT_SET(iLocal_575, iVar0))
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
			{
				NETWORK::_0xA7C511FA1C5BDA38(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0);
			}
		}
		iVar0++;
	}
	func_872(1);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 422, false);
	if (MISC::IS_BIT_SET(iLocal_570, 2))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&iLocal_570, 2);
		}
	}
	func_1163();
}

void func_1163()//Position - 0x3512E
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1164(bool bParam0)//Position - 0x3513A
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 6);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 6);
	}
}

void func_1165()//Position - 0x3516E
{
	MISC::SET_BIT(&(Global_2531497.f_1734), 18);
}

void func_1166(struct<14> Param0, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x35183
{
	char* sVar0;
	struct<15> Var1;
	struct<19> Var16;
	struct<19> Var35;
	struct<16> Var54;
	struct<17> Var70;
	struct<15> Var87;
	struct<17> Var102;
	struct<17> Var119;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CARJACKING"))
		{
			Var1 = { Param0 };
			Var1.f_14 = iParam14;
			STATS::_0x7B18DA61F6BAE9D5(&Var1);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ROB_SHOP"))
		{
			Var16 = { Param0 };
			Var16.f_14 = Global_1674861.f_14;
			Var16.f_15 = iParam14;
			Var16.f_16 = iParam15;
			Var16.f_17 = iParam16;
			Var16.f_18 = iParam17;
			STATS::_0x06EAF70AE066441E(&Var16);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_COLLECT_MONEY"))
		{
			Var35 = { Param0 };
			Var35.f_14 = Global_1674861.f_14;
			Var35.f_15 = iParam14;
			Var35.f_16 = iParam15;
			Var35.f_17 = iParam16;
			Var35.f_18 = iParam17;
			STATS::_0x14EDA9EE27BD1626(&Var35);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FIVESTAR"))
		{
			Var54 = { Param0 };
			Var54.f_14 = Global_1674861.f_14;
			Var54.f_15 = iParam14;
			STATS::_0x930F504203F561C9(&Var54);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FINDERSKEEPERS"))
		{
			Var70 = { Param0 };
			Var70.f_14 = Global_1674861.f_14;
			Var70.f_15 = iParam14;
			Var70.f_16 = iParam15;
			STATS::_0xE3261D791EB44ACB(&Var70);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_POINT_TO_POINT"))
		{
			Var87 = { Param0 };
			Var87.f_14 = Global_1674861.f_14;
			STATS::_0x73001E34F85137F8(&Var87);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CASHING_OUT"))
		{
			Var102 = { Param0 };
			Var102.f_14 = iParam14;
			Var102.f_15 = (SYSTEM::TO_FLOAT(iParam14) / SYSTEM::TO_FLOAT(iParam15));
			Var102.f_16 = iParam16;
			STATS::_0x53CAE13E9B426993(&Var102);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SALVAGE"))
		{
			Var119 = { Param0 };
			Var119.f_14 = iParam14;
			Var119.f_15 = iParam15;
			Var119.f_16 = Global_1674861.f_14;
			STATS::_0x7D36291161859389(&Var119);
		}
	}
	func_1167();
}

void func_1167()//Position - 0x35346
{
	struct<18> Var0;
	
	Global_1674861 = { Var0 };
}

void func_1168(struct<12> Param0, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x3535A
{
	char* sVar0;
	struct<13> Var1;
	struct<14> Var14;
	struct<18> Var28;
	struct<14> Var52;
	struct<13> Var66;
	struct<14> Var79;
	struct<14> Var93;
	struct<16> Var107;
	struct<13> Var123;
	struct<14> Var136;
	struct<14> Var150;
	struct<13> Var164;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_76577)
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = iParam12;
			STATS::_0xBFAFDB5FAAA5C5AB(&Var1);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, func_1169()))
		{
			Var14 = { Param0 };
			Var14.f_12 = iParam12;
			Var14.f_13 = iParam13;
			STATS::_0xBAA2F0490E146BE8(&Var14);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = iParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = iParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			STATS::_0x3DE3AA516FB126A4(&Var28);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = iParam12;
			Var52.f_13 = SYSTEM::TO_FLOAT(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			STATS::_0x6A60E43998228229(&Var52);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
		{
			STATS::_0x1A7CE7CD3E653485(&Param0);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = iParam12;
			STATS::_0x419615486BBF1956(&Var66);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = iParam12;
			Var79.f_13 = iParam13;
			STATS::_0x84DFC579C2FC214C(&Var79);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = iParam12;
			Var93.f_13 = iParam13;
			STATS::_0x0A9C7F36E5D7B683(&Var93);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = iParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = iParam15;
			STATS::_0x164C5FF663790845(&Var107);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = iParam12;
			STATS::_0xEDBF6C9B0D2C65C8(&Var123);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = iParam12;
				Var136.f_13 = iParam13;
				STATS::_0x8C9D11605E59D955(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = iParam12;
				Var150.f_13 = iParam13;
				STATS::_0x6551B1F7F6CD46EA(&Var150);
			}
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = iParam12;
			STATS::_0x2CD90358F67D0AA8(&Var164);
		}
	}
}

char* func_1169()//Position - 0x355CF
{
	switch (Global_2461343)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_1170()//Position - 0x355F1
{
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_586);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_585);
}

void func_1171(bool bParam0, int iParam1)//Position - 0x35607
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1363235.f_1.f_108 != 0)
	{
		Global_1363235.f_1.f_108 = 0;
	}
	Global_1363235.f_1.f_109 = -1;
	Global_1363235.f_1.f_110 = -1;
	if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 == 167 || Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 == 168)
	{
		func_1220();
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 4);
	}
	if ((func_162() && iParam1 != 0) && Global_262145.f_16969)
	{
		if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 == 190 || Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 == 192)
		{
			func_1202(PLAYER::PLAYER_ID(), iParam1, 1, 0);
		}
	}
	if (((Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 == 164 || Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 == 208) || Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 == 250) || Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 == 237)
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, 1);
		MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	}
	if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 != -1)
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 = -1;
		if (!MISC::IS_BIT_SET(Global_1574647.f_1, 14) && !func_47(PLAYER::PLAYER_ID()))
		{
			func_721(0);
		}
	}
	else if (func_412(PLAYER::PLAYER_ID()) != -1)
	{
		func_900(-1);
	}
	func_1201(func_398());
	if (func_235(16))
	{
		func_697(16);
	}
	func_1198(0);
	func_895(-1);
	func_1197();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_1196(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_1194(iVar1);
		iVar1++;
	}
	if (MISC::IS_BIT_SET(Global_1674852.f_3, 0))
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 0);
	}
	if (MISC::IS_BIT_SET(Global_1674852.f_3, 5))
	{
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 5);
	}
	iVar2 = func_1193();
	if ((func_560(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_1192(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_161(iVar2))
	{
		func_1189(-1, 1);
	}
	else if (((((func_1188(iVar2) || func_1187(iVar2)) || func_1186(iVar2)) || func_150(iVar2)) || func_149(iVar2)) || func_148(iVar2))
	{
	}
	else
	{
		func_1189(-1, 1);
	}
	func_371(19);
	func_371(20);
	func_371(21);
	func_371(22);
	func_371(27);
	func_697(3);
	func_697(4);
	func_697(7);
	func_1185();
	if (func_41(PLAYER::PLAYER_ID()))
	{
		func_859(0);
	}
	func_371(29);
	Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57 = func_398();
	if (Global_2531497.f_4898.f_39 != 0)
	{
		Global_2531497.f_4898.f_39 = 0;
	}
	if (bParam0)
	{
		func_698();
	}
	if (!func_47(PLAYER::PLAYER_ID()))
	{
		func_719();
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 1);
	}
	if (MISC::IS_BIT_SET(Global_1674852.f_3, 6))
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, 1);
		MISC::ENABLE_DISPATCH_SERVICE(5, 1);
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 6);
	}
	if (MISC::IS_BIT_SET(Global_1674852.f_3, 7))
	{
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 7);
	}
	if (MISC::IS_BIT_SET(Global_1674852.f_3, 8))
	{
		func_1184("IMPEXP_SELFDES", 0);
		func_1174("IMPEXP_SELFDES");
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 8);
	}
	func_1172(iVar2, 0);
}

void func_1172(int iParam0, bool bParam1)//Position - 0x359D0
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_1674852.f_3, 9))
		{
			AUDIO::START_AUDIO_SCENE(func_1173(iParam0));
			MISC::SET_BIT(&(Global_1674852.f_3), 9);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1674852.f_3, 9))
	{
		AUDIO::STOP_AUDIO_SCENE(func_1173(iParam0));
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 9);
	}
}

char* func_1173(int iParam0)//Position - 0x35A2C
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_1174(char* sParam0)//Position - 0x35AA6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_111560.f_14136[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_111560.f_14136[iVar0 /*104*/]), sParam0))
			{
				if (Global_111560.f_14136[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_1176();
					Global_111560.f_14136[iVar0 /*104*/].f_99[Global_19486] = 0;
					if (func_1175(iVar0))
					{
					}
					else
					{
						Global_111560.f_14136[iVar0 /*104*/].f_24 = 0;
						Global_111560.f_14136[iVar0 /*104*/].f_28 = 0;
						Global_111560.f_14136[iVar0 /*104*/].f_29 = 0;
					}
					HUD::THEFEED_REMOVE_ITEM(Global_111560.f_14136[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_1175(int iParam0)//Position - 0x35B5A
{
	if ((Global_111560.f_14136[iParam0 /*104*/].f_99[0] == 1 || Global_111560.f_14136[iParam0 /*104*/].f_99[1] == 1) || Global_111560.f_14136[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_1176()//Position - 0x35BAF
{
	if (func_1183(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111560.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111560.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111560.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_1177();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76577)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

var func_1177()//Position - 0x35C51
{
	func_1178();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_1178()//Position - 0x35C6A
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_1181(Global_111560.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_1180(PLAYER::PLAYER_PED_ID());
			if (func_1179(iVar0) && (!func_1183(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_1179(Global_111560.f_2358.f_539.f_4321))
				{
					Global_111560.f_2358.f_539.f_4322 = Global_111560.f_2358.f_539.f_4321;
				}
				Global_111560.f_2358.f_539.f_4323 = iVar0;
				Global_111560.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111560.f_2358.f_539.f_4321 != 145)
			{
				Global_111560.f_2358.f_539.f_4323 = Global_111560.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111560.f_2358.f_539.f_4321 = 145;
}

bool func_1179(int iParam0)//Position - 0x35D67
{
	return iParam0 < 3;
}

int func_1180(int iParam0)//Position - 0x35D73
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_1181(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_1181(int iParam0)//Position - 0x35DB0
{
	if (func_1179(iParam0))
	{
		return func_1182(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_1182(int iParam0)//Position - 0x35DD5
{
	return Global_1798[iParam0 /*29*/];
}

bool func_1183(int iParam0)//Position - 0x35DE4
{
	return Global_41396 == iParam0;
}

void func_1184(char* sParam0, int iParam1)//Position - 0x35DF2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_111560.f_14136[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_111560.f_14136[iVar0 /*104*/]), sParam0))
			{
				if (Global_111560.f_14136[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_111560.f_14136[iVar0 /*104*/].f_24 = 1;
				if (Global_111560.f_14136[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_111560.f_14136[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_111560.f_14046[0 /*20*/].f_17 = 0;
					}
					if (Global_111560.f_14136[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_111560.f_14046[1 /*20*/].f_17 = 0;
					}
					if (Global_111560.f_14136[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_111560.f_14046[2 /*20*/].f_17 = 0;
					}
					if (Global_111560.f_14136[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_111560.f_14046[3 /*20*/].f_17 = 0;
					}
					Global_111560.f_14136[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_111560.f_14136[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1185()//Position - 0x35F0A
{
	if (func_737(PLAYER::PLAYER_ID()))
	{
		func_371(25);
	}
}

int func_1186(int iParam0)//Position - 0x35F23
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_1187(int iParam0)//Position - 0x35F43
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

int func_1188(int iParam0)//Position - 0x35F6E
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

void func_1189(int iParam0, bool bParam1)//Position - 0x35F94
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_1193();
	}
	if (iParam0 > 0)
	{
		if (func_181() != func_398())
		{
			if (func_1029(PLAYER::PLAYER_ID()) == PLAYER::PLAYER_ID())
			{
				Global_2509053.f_93[func_1191(iParam0)] = 1;
			}
		}
		iVar0 = func_1191(159);
		if (func_1190(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(157);
		if (func_1190(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(148);
		if (func_1190(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(164);
		if (func_1190(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(142);
		if (func_1190(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(152);
		if (func_1190(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(166);
		if (func_1190(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(170);
		if (func_1190(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(173);
		if (func_1190(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(179);
		if (func_1190(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(200);
		if (func_1190(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(201);
		if (func_1190(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(182);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(183);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(185);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(186);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(180);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(195);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(197);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(198);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(207);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(208);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(209);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(214);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(215);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(216);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(217);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(218);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(219);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(220);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(221);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_1190(int iParam0, int iParam1, bool bParam2)//Position - 0x36610
{
	if (bParam2)
	{
		if ((!func_40(PLAYER::PLAYER_ID(), 19) && !func_40(PLAYER::PLAYER_ID(), 20)) && !func_40(PLAYER::PLAYER_ID(), 9))
		{
			return 0;
		}
	}
	if (Global_2509053.f_93[iParam0] == 1 && func_24(&(Global_2509053[iParam0 /*2*/])))
	{
		if (func_357(&(Global_2509053[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2509053.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_1191(int iParam0)//Position - 0x36696
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

void func_1192(int iParam0)//Position - 0x36898
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_1193();
	}
	if (iParam0 > 0)
	{
		if (func_181() != func_398())
		{
			Global_2509053.f_93[func_1191(iParam0)] = 1;
		}
		iVar0 = func_1191(155);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(163);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(160);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(153);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(162);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(154);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(171);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(172);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(199);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(194);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(193);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(210);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(205);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(189);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(211);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_1193()//Position - 0x36BC9
{
	char* sVar0;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_SELL"))
	{
		return 237;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_DEFEND"))
	{
		return 238;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_SECURITY_VAN"))
	{
		return 239;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_TARGET_PURSUIT"))
	{
		return 240;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_JEWEL_STORE_GRAB"))
	{
		return 241;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_BANK_JOB"))
	{
		return 242;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_DATA_HACK"))
	{
		return 244;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_INFILTRATION"))
	{
		return 248;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_PHONECALL"))
	{
		return 249;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_CLUB_MANAGEMENT"))
	{
		return 250;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_GB_CASINO"))
	{
		return 243;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_GB_CASINO_HEIST"))
	{
		return 158;
	}
	return 0;
}

void func_1194(int iParam0)//Position - 0x3717C
{
	if (!func_31(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_337[iParam0 /*3*/], func_1195(), 0))
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_337[iParam0 /*3*/] = { func_1195() };
	}
	if (!func_31(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_324[iParam0 /*3*/], func_1195(), 0))
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_324[iParam0 /*3*/] = { func_1195() };
	}
}

Vector3 func_1195()//Position - 0x371FE
{
	vector3 vVar0;
	
	return vVar0;
}

void func_1196(int iParam0)//Position - 0x3720A
{
	if (!func_31(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_150[iParam0 /*3*/], func_1195(), 0))
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_150[iParam0 /*3*/] = { func_1195() };
	}
	if (!func_31(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_125[iParam0 /*3*/], func_1195(), 0))
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_125[iParam0 /*3*/] = { func_1195() };
	}
}

void func_1197()//Position - 0x37288
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573899 = { Var0 };
	Global_1573899.f_13 = func_398();
	if (MISC::IS_BIT_SET(Global_1573343, 3))
	{
		MISC::CLEAR_BIT(&Global_1573343, 3);
	}
}

void func_1198(bool bParam0)//Position - 0x372E2
{
	if (bParam0)
	{
		if (!func_1031(PLAYER::PLAYER_ID(), 14))
		{
			func_1200(14);
		}
	}
	else if (func_1031(PLAYER::PLAYER_ID(), 14))
	{
		func_1199(14);
	}
}

void func_1199(int iParam0)//Position - 0x37319
{
	MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_5), iParam0);
}

void func_1200(int iParam0)//Position - 0x37336
{
	MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_5), iParam0);
}

void func_1201(int iParam0)//Position - 0x37353
{
	if (func_132(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != iParam0)
		{
			if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_484 != iParam0)
			{
				Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_484 = iParam0;
				if (iParam0 != func_398())
				{
				}
			}
		}
	}
}

void func_1202(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x373A2
{
	int iVar0;
	
	if (func_301(iParam0, iParam1) && func_1219(iParam0, iParam1))
	{
		iVar0 = func_300(iParam0, iParam1);
		func_1206(iVar0, bParam2, bParam3);
		func_1203(iVar0, 1);
	}
}

void func_1203(int iParam0, int iParam1)//Position - 0x373DD
{
	if (!func_1205(iParam0))
	{
		return;
	}
	func_287(func_1204(iParam0), iParam1, -1, 1);
	Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_179[iParam0 /*12*/].f_6 = iParam1;
}

int func_1204(int iParam0)//Position - 0x37419
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_1205(int iParam0)//Position - 0x37473
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_1206(int iParam0, bool bParam1, bool bParam2)//Position - 0x37488
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_914(PLAYER::PLAYER_ID(), iParam0);
	if (!bParam1)
	{
		func_1218(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2507929[iParam0];
		iVar0 = func_1217(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1676736 = -1;
		}
		func_1216(iParam0, 0, bParam2);
	}
	else if (func_1214(iParam0, bParam2))
	{
		iVar0 = func_1213(iVar2, 0);
		iVar3 = func_989(PLAYER::PLAYER_ID(), iVar2);
		iVar4 = func_1212(iVar2, bParam2);
		iVar5 = func_1213(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_1211(iVar2) && func_1210(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_1218(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_1209(PLAYER::PLAYER_ID(), iVar2) > 0)
		{
			func_1208(iParam0, (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_179[iParam0 /*12*/].f_2 - (func_1212(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_1213(iVar2, bParam2) / func_1209(PLAYER::PLAYER_ID(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_1211(iVar2) && func_1210(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_1207(PLAYER::PLAYER_ID(), iVar2, iVar0, bParam2);
}

void func_1207(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x375F9
{
	int iVar0;
	
	if (iParam0 == func_398())
	{
		return;
	}
	if (func_294(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1590446[iParam0 /*871*/].f_273.f_253 = iParam2;
				}
				else
				{
					Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_1208(int iParam0, int iParam1)//Position - 0x3766D
{
	if (iParam0 != -1 && iParam1 != Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_179[iParam0 /*12*/].f_2)
	{
		Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_179[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_1209(int iParam0, int iParam1)//Position - 0x376B2
{
	int iVar0;
	
	if (iParam0 == func_398())
	{
		return 0;
	}
	if (func_294(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1210(int iParam0, int iParam1)//Position - 0x37711
{
	int iVar0;
	
	if (iParam0 == func_398())
	{
		return 0;
	}
	if (func_294(iParam1) && func_1211(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_1211(int iParam0)//Position - 0x3777B
{
	return func_176(iParam0) == 5;
}

int func_1212(int iParam0, bool bParam1)//Position - 0x3778B
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_176(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16938;
			if (func_299(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16943;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16937;
			if (func_299(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16942;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16936;
			if (func_299(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16941;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16934;
			if (func_299(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16939;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16935;
			if (func_299(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16940;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_21062;
				if (func_299(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21063;
				}
			}
			else
			{
				uVar0 = Global_262145.f_21046;
				if (func_299(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21047;
				}
			}
			break;
	}
	return uVar0;
}

int func_1213(int iParam0, bool bParam1)//Position - 0x378C2
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_176(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16919;
			if (func_299(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16928);
			}
			if (func_299(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16933);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16920;
			if (func_299(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16927);
			}
			if (func_299(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16932);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16921;
			if (func_299(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16926);
			}
			if (func_299(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16931);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16922;
			if (func_299(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16924);
			}
			if (func_299(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16929);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16923;
			if (func_299(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16925);
			}
			if (func_299(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16930);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_21059;
			}
			else
			{
				iVar0 = Global_262145.f_21043;
			}
			if (func_299(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21060);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21044);
				}
			}
			if (func_299(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21061);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21045);
				}
			}
			if (func_1210(PLAYER::PLAYER_ID(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_1214(int iParam0, bool bParam1)//Position - 0x37ACC
{
	if (bParam1)
	{
		return func_288(15384, -1, -1);
	}
	return func_288(func_1215(iParam0), -1, -1);
}

int func_1215(int iParam0)//Position - 0x37AF1
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_1216(int iParam0, int iParam1, bool bParam2)//Position - 0x37B4B
{
	if (bParam2)
	{
		func_287(15384, iParam1, -1, 1);
		return;
	}
	func_287(func_1215(iParam0), iParam1, -1, 1);
}

int func_1217(int iParam0, bool bParam1)//Position - 0x37B76
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2507929[iParam0];
	iVar1 = func_914(PLAYER::PLAYER_ID(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2507936;
	}
	if (func_1211(iVar1))
	{
		if (func_1210(PLAYER::PLAYER_ID(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_1218(int iParam0, int iParam1, bool bParam2)//Position - 0x37BBE
{
	if (bParam2)
	{
		Global_2507936 = iParam1;
		return;
	}
	Global_2507929[iParam0] = iParam1;
}

int func_1219(int iParam0, int iParam1)//Position - 0x37BDE
{
	int iVar0;
	
	if (func_301(iParam0, iParam1))
	{
		iVar0 = func_300(iParam0, iParam1);
		if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_4 > 0 && Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_1220()//Position - 0x37C32
{
	MISC::CLEAR_BIT(&(Global_2531497.f_1737), 28);
	MISC::CLEAR_BIT(&(Global_2531497.f_1737), 29);
	func_1221(24);
}

void func_1221(int iParam0)//Position - 0x37C5A
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_7[iVar0]), iVar1);
}

void func_1222(bool bParam0)//Position - 0x37C83
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_2531497.f_1734, 9))
		{
			MISC::SET_BIT(&(Global_2531497.f_1734), 9);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2531497.f_1734, 9))
	{
		MISC::CLEAR_BIT(&(Global_2531497.f_1734), 9);
	}
}

void func_1223(struct<21> Param0)//Position - 0x37CCE
{
	int iVar0;
	
	func_1275();
	func_1273(func_1274(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	func_1272(0, -1, 0);
	if (func_411())
	{
		func_1230(0, 0, 0);
	}
	else
	{
		func_1228(136);
	}
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_112, 199);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_311, 257);
	if (!func_1227())
	{
		func_1162();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_112.f_3[iVar0] = func_398();
				iVar0++;
			}
			STATS::_0x6DEE77AFF8C21BD1(&(Local_112.f_179), &(Local_112.f_180));
		}
		Local_2741.f_2 = NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS();
		Local_2741.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_776(24, 1);
		func_1224();
		if (func_1010(1))
		{
		}
		Local_311[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/] = 0;
	}
	else
	{
		func_1162();
	}
}

void func_1224()//Position - 0x37D9F
{
	int iVar0;
	
	PED::ADD_RELATIONSHIP_GROUP("relPennedInPlayer", &iLocal_585);
	PED::ADD_RELATIONSHIP_GROUP("relUWAi", &iLocal_586);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574964[iVar0], iLocal_585);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_585, Global_1574964[iVar0]);
		iVar0++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_585, iLocal_586);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_586, iLocal_585);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, iLocal_586);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, iLocal_585);
	func_1226(1, &iLocal_586);
	func_1225(&iLocal_586);
	func_1225(&iLocal_585);
}

void func_1225(int iParam0)//Position - 0x37E38
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1865950624, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1865950624);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 296331235, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 296331235);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1166638144, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1166638144);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2037579709, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2037579709);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2017343592);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1821475077, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1821475077);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1782292358, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1782292358);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1033021910, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1033021910);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1285976420, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1285976420);
}

void func_1226(int iParam0, int iParam1)//Position - 0x37F2A
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -1533126372, *iParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, -1533126372);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -472287501, *iParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, -472287501);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -183807561, *iParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, -183807561);
}

int func_1227()//Position - 0x37F86
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
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_1157())
		{
			return 0;
		}
		if (func_1155(157))
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

void func_1228(int iParam0)//Position - 0x37FDF
{
	func_770();
	func_1229();
	func_772();
	Global_1574647.f_4 = iParam0;
	Global_1574647.f_5 = iParam0;
	func_858(iParam0, -1);
	func_165(&(Global_1574647.f_18), 0, 0);
	Global_2531497.f_4588 = 0;
	Global_2460066[0] = func_398();
	Global_2460066[1] = func_398();
	Global_2460066[2] = func_398();
	Global_2460066[3] = func_398();
	Global_2460066[4] = func_398();
	func_768();
	if (!func_1027(func_1028()))
	{
		func_567();
	}
	if (func_44() && !func_373())
	{
		MISC::SET_BIT(&(Global_1574647.f_1), 16);
	}
	else
	{
		MISC::SET_BIT(&(Global_1574647.f_1), 17);
	}
}

void func_1229()//Position - 0x38097
{
	var uVar0;
	
	Global_1574672 = uVar0;
}

void func_1230(int iParam0, int iParam1, bool bParam2)//Position - 0x380A5
{
	func_1271();
	if (func_1041(PLAYER::PLAYER_ID()))
	{
		func_1233(1);
	}
	if ((iParam0 != 0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && func_1232(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				MISC::SET_BIT(&Global_1674847, 0);
				break;
			}
	}
	if (!func_175() && !func_131(PLAYER::PLAYER_ID(), 1))
	{
		if (func_374())
		{
			func_720(3);
		}
	}
	func_720(4);
	if (func_179(0))
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57 = func_181();
	}
	if (func_152(iParam0))
	{
		func_1114();
		Global_1674879.f_18 = func_985(func_248());
	}
	else if (func_151(func_412(PLAYER::PLAYER_ID())))
	{
		func_1112();
		Global_1674933.f_18 = func_985(func_248());
	}
	if (bParam2)
	{
		if (!func_368())
		{
			func_721(1);
		}
	}
	func_1231();
}

void func_1231()//Position - 0x38193
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1363235.f_534[iVar0 /*42*/].f_1 = func_398();
		Global_1363235.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

int func_1232(int iParam0, bool bParam1)//Position - 0x381CD
{
	return func_246(PLAYER::PLAYER_ID(), iParam0, bParam1);
}

void func_1233(bool bParam0)//Position - 0x381E1
{
	int iVar0;
	
	func_1221(33);
	func_1221(34);
	func_1221(35);
	func_1221(36);
	func_1221(37);
	func_1221(38);
	func_1221(39);
	func_1221(40);
	func_1221(43);
	func_1221(41);
	func_1221(54);
	func_1221(42);
	func_1221(47);
	func_1270(23);
	func_1270(24);
	func_1221(92);
	MISC::CLEAR_BIT(&(Global_2531497.f_1737), 2);
	func_1269();
	func_1264();
	func_1259();
	func_1254();
	func_1243();
	func_1239();
	func_1235();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2531497.f_4898.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_1234(3))
	{
		func_1270(3);
	}
	else if (func_1234(4))
	{
		func_1270(4);
	}
	else if (func_1234(5))
	{
		func_1270(5);
	}
	else if (func_1234(6))
	{
		func_1270(6);
	}
	else if (func_1234(7))
	{
		func_1270(7);
	}
	else if (((((((((((((((((func_1234(0) || func_1234(1)) || func_1234(2)) || func_1234(8)) || func_1234(9)) || func_1234(10)) || func_1234(11)) || func_1234(12)) || func_1234(13)) || func_1234(14)) || func_1234(15)) || func_1234(16)) || func_1234(17)) || func_1234(18)) || func_1234(19)) || func_1234(20)) || func_1234(21)) || func_1234(22))
	{
		func_1270(8);
		func_1270(0);
		func_1270(1);
		func_1270(2);
		func_1270(9);
		func_1270(10);
		func_1270(11);
		func_1270(12);
		func_1270(13);
		func_1270(14);
		func_1270(15);
		func_1270(16);
		func_1270(17);
		func_1270(18);
		func_1270(19);
		func_1270(20);
		func_1270(21);
		func_1270(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2531497.f_4898.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_1234(int iParam0)//Position - 0x38447
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_14[iVar0], iVar1);
}

void func_1235()//Position - 0x38470
{
	if (func_1237())
	{
		func_1236(0);
		func_1236(1);
		func_1236(2);
		func_1236(3);
	}
}

void func_1236(int iParam0)//Position - 0x38493
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_33[iVar0]), iVar1);
}

int func_1237()//Position - 0x384BC
{
	if (((func_1238(0) || func_1238(1)) || func_1238(2)) || func_1238(3))
	{
		return 1;
	}
	return 0;
}

bool func_1238(int iParam0)//Position - 0x384F2
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_33[iVar0], iVar1);
}

void func_1239()//Position - 0x3851B
{
	if (func_1241())
	{
		func_1240(4);
		func_1240(5);
		func_1240(6);
		func_1240(7);
	}
}

void func_1240(int iParam0)//Position - 0x3853E
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_31[iVar0]), iVar1);
}

int func_1241()//Position - 0x38567
{
	if (((func_1242(4) || func_1242(5)) || func_1242(6)) || func_1242(7))
	{
		return 1;
	}
	return 0;
}

bool func_1242(int iParam0)//Position - 0x3859D
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_31[iVar0], iVar1);
}

void func_1243()//Position - 0x385C6
{
	int iVar0;
	
	if (func_1253())
	{
		func_1252(8);
		func_1252(9);
		func_1252(10);
		func_1252(12);
		func_1252(13);
		func_1252(14);
		func_1252(19);
		func_1252(20);
		func_1252(21);
		func_1252(22);
		func_1252(23);
		func_1252(24);
		func_1252(25);
		func_1252(26);
		func_1252(15);
		func_1252(16);
		func_1252(17);
		func_1252(18);
		func_1252(35);
		func_1252(45);
		func_1252(46);
		if (func_1251(11))
		{
			func_1252(11);
			iVar0 = func_50(7226, -1, 0);
			MISC::SET_BIT(&iVar0, 2);
			func_159(7226, iVar0, -1, 1, 0);
		}
	}
	if (func_1251(48))
	{
		if (func_1249(151, 3))
		{
			func_1247(151, 3);
		}
		func_1252(48);
	}
	if (func_1251(49))
	{
		if (func_1249(152, 3))
		{
			func_1247(152, 3);
		}
		func_1252(49);
	}
	if (func_1251(50))
	{
		if (func_1249(153, 3))
		{
			func_1247(153, 3);
		}
		func_1252(50);
	}
	if (func_1251(51))
	{
		if (func_1249(func_1244(), 3))
		{
			func_1247(func_1244(), 3);
		}
		func_1252(51);
	}
}

int func_1244()//Position - 0x38710
{
	if (func_1246())
	{
		func_1245(154, Global_19486, 1);
	}
	return 154;
}

void func_1245(int iParam0, int iParam1, int iParam2)//Position - 0x3872B
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111560.f_28045[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

int func_1246()//Position - 0x38770
{
	int iVar0;
	
	iVar0 = func_119(PLAYER::PLAYER_ID());
	if (((iVar0 != PLAYER::PLAYER_ID() && iVar0 != func_398()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_1247(int iParam0, int iParam1)//Position - 0x387B1
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_1248(iParam0, iVar0, 0);
			func_1245(iParam0, iVar0, 0);
		}
	}
}

void func_1248(int iParam0, int iParam1, int iParam2)//Position - 0x387E6
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111560.f_28045[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_1249(int iParam0, int iParam1)//Position - 0x3882B
{
	if (func_1250(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_1250(int iParam0, int iParam1)//Position - 0x38847
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_12[iParam1];
}

bool func_1251(int iParam0)//Position - 0x38871
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_26[iVar0], iVar1);
}

void func_1252(int iParam0)//Position - 0x3889A
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_26[iVar0]), iVar1);
}

int func_1253()//Position - 0x388C3
{
	if (((((((((((((((((((((func_1251(8) || func_1251(9)) || func_1251(10)) || func_1251(12)) || func_1251(11)) || func_1251(13)) || func_1251(14)) || func_1251(19)) || func_1251(20)) || func_1251(21)) || func_1251(22)) || func_1251(23)) || func_1251(24)) || func_1251(25)) || func_1251(26)) || func_1251(15)) || func_1251(16)) || func_1251(17)) || func_1251(18)) || func_1251(35)) || func_1251(45)) || func_1251(46))
	{
		return 1;
	}
	return 0;
}

void func_1254()//Position - 0x389D5
{
	if (func_1258())
	{
		func_1257(0);
		func_1257(1);
		func_1257(2);
		func_1257(3);
		func_1257(4);
		func_1257(5);
		if (func_1256(32))
		{
			if (func_1249(func_1255(), 3))
			{
				func_1247(func_1255(), 3);
			}
			func_1257(32);
		}
	}
}

int func_1255()//Position - 0x38A29
{
	if (func_1246())
	{
		func_1245(12, Global_19486, 1);
	}
	return 12;
}

bool func_1256(int iParam0)//Position - 0x38A44
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_23[iVar0], iVar1);
}

void func_1257(int iParam0)//Position - 0x38A6D
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_23[iVar0]), iVar1);
}

int func_1258()//Position - 0x38A96
{
	if ((((func_1256(1) || func_1256(0)) || func_1256(2)) || func_1256(4)) || func_1256(5))
	{
		return 1;
	}
	return 0;
}

void func_1259()//Position - 0x38AD7
{
	if (func_1263())
	{
		func_1262(0);
		func_1262(1);
		func_1262(2);
		func_1262(3);
		func_1262(4);
		func_1262(5);
		func_1262(6);
		func_1262(7);
		if (func_1261(8))
		{
			func_1262(8);
		}
		if (func_1261(15))
		{
			if (func_1249(func_1260(), 3))
			{
				func_1247(func_1260(), 3);
			}
			func_1262(15);
		}
	}
}

int func_1260()//Position - 0x38B44
{
	if (func_1246())
	{
		func_1245(20, Global_19486, 1);
	}
	return 20;
}

bool func_1261(int iParam0)//Position - 0x38B5F
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_21[iVar0], iVar1);
}

void func_1262(int iParam0)//Position - 0x38B88
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_21[iVar0]), iVar1);
}

int func_1263()//Position - 0x38BB1
{
	if ((((((((func_1261(0) || func_1261(1)) || func_1261(2)) || func_1261(3)) || func_1261(4)) || func_1261(5)) || func_1261(6)) || func_1261(7)) || func_1261(8))
	{
		return 1;
	}
	return 0;
}

void func_1264()//Position - 0x38C1F
{
	if (func_1268())
	{
		func_1267(0);
		func_1267(1);
		func_1267(2);
		func_1267(3);
		func_1267(4);
		func_1267(5);
		func_1267(6);
		func_1267(7);
		func_1267(8);
		func_1267(9);
		func_1267(10);
		func_1267(11);
		func_1267(12);
		if (func_1266(13))
		{
			if (func_1249(func_1265(), 3))
			{
				func_1247(func_1265(), 3);
			}
			func_1267(13);
		}
	}
}

int func_1265()//Position - 0x38C9B
{
	if (func_1246())
	{
		func_1245(76, Global_19486, 1);
	}
	return 76;
}

bool func_1266(int iParam0)//Position - 0x38CB6
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_19[iVar0], iVar1);
}

void func_1267(int iParam0)//Position - 0x38CDF
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_19[iVar0]), iVar1);
}

int func_1268()//Position - 0x38D08
{
	if ((((((((((((func_1266(0) || func_1266(1)) || func_1266(2)) || func_1266(3)) || func_1266(4)) || func_1266(5)) || func_1266(6)) || func_1266(7)) || func_1266(8)) || func_1266(9)) || func_1266(10)) || func_1266(11)) || func_1266(12))
	{
		return 1;
	}
	return 0;
}

void func_1269()//Position - 0x38DA6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2531497.f_4898.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_1270(int iParam0)//Position - 0x38DCE
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_14[iVar0]), iVar1);
}

void func_1271()//Position - 0x38DF7
{
	struct<14> Var0;
	
	Global_1674861 = { Var0 };
	Global_1674861.f_14 = 0;
	Global_1674861.f_15 = 0;
}

int func_1272(int iParam0, int iParam1, bool bParam2)//Position - 0x38E19
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_1163();
			}
			else
			{
				return 0;
			}
		}
		if (!func_753())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_1163();
					}
					else
					{
						return 0;
					}
				}
				if (func_1157())
				{
					if (!bParam2)
					{
						func_1163();
					}
					else
					{
						return 0;
					}
				}
				if (func_1155(157))
				{
					if (!bParam2)
					{
						func_1163();
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
					func_1163();
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
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_1163();
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
			func_1163();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_1273(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x38F2E
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_1163();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

int func_1274(int iParam0)//Position - 0x38F4D
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
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
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
			return 32;
		
		case 114:
			return 8;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 8;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
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
		
		case 126:
			return 32;
		
		case 127:
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
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 133:
			return 32;
		
		case 131:
			return 32;
		
		case 132:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 144:
			return 2;
		
		case 149:
			return 1;
		
		case 145:
			return 2;
		
		case 146:
			return 4;
		
		case 147:
			return 2;
		
		case 148:
			return 2;
		
		case 130:
			return 1;
		
		case 150:
			return 2;
		
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
			return 0;
		
		case 170:
			return 1;
		
		case 157:
			return 4;
		
		case 160:
			return 4;
		
		case 161:
			return 1;
		
		case 162:
			return 1;
		
		case 168:
			return 1;
		
		case 164:
			return 2;
		
		case 169:
			return 1;
		
		case 165:
			return 1;
		
		case 163:
			return 2;
		
		case 166:
			return 8;
		
		case 167:
			return 8;
		
		case 158:
			return 16;
		
		case 159:
			return 32;
		
		default:
	}
	return 0;
}

void func_1275()//Position - 0x3965F
{
	struct<42> Var0;
	int iVar42;
	
	Var0 = -1;
	Var0.f_22 = -1082130432;
	Var0.f_23 = 3;
	Var0.f_39 = -1;
	Var0.f_41 = -1;
	iVar42 = 0;
	while (iVar42 < 32)
	{
		Global_1365114[iVar42 /*42*/] = { Var0 };
		iVar42++;
	}
}

int func_1276(int iParam0, bool bParam1, bool bParam2)//Position - 0x396AD
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437549.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

