/**
 *\file     main.c
 *\note     GB2312
 *\author   xt
 *\version  1.0.0
 *\date     2022.03.16
 *\brief    ����ƴ������
 */

#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>
#include <Windows.h>

char* get_pinyin_gbk2(unsigned int code)
{
    switch(code)
	{
        case 1601:
        case 1602:
        case 6325:
        case 6436:
        case 7571:
        case 7925: return "a";
        case 1603:
        case 1604:
        case 1605:
        case 1606:
        case 1607:
        case 1608:
        case 1609:
        case 1610:
        case 1611:
        case 1612:
        case 1613:
        case 1614:
        case 1615:
        case 6263:
        case 6440:
        case 7040:
        case 7208:
        case 7451:
        case 7733:
        case 7945:
        case 8616: return "ai";
        case 1616:
        case 1617:
        case 1618:
        case 1619:
        case 1620:
        case 1621:
        case 1622:
        case 1623:
        case 1624:
        case 5847:
        case 5991:
        case 6278:
        case 6577:
        case 6654:
        case 7281:
        case 7907:
        case 8038:
        case 8786: return "an";
        case 1625:
        case 1626:
        case 1627: return "ang";
        case 1628:
        case 1629:
        case 1630:
        case 1631:
        case 1632:
        case 1633:
        case 1634:
        case 1635:
        case 1636:
        case 5974:
        case 6019:
        case 6254:
        case 6427:
        case 6514:
        case 6658:
        case 6959:
        case 7033:
        case 7081:
        case 7365:
        case 8190:
        case 8292:
        case 8643:
        case 8701:
        case 8773: return "ao";
        case 1637:
        case 1638:
        case 1639:
        case 1640:
        case 1641:
        case 1642:
        case 1643:
        case 1644:
        case 1645:
        case 1646:
        case 1647:
        case 1648:
        case 1649:
        case 1650:
        case 1651:
        case 1652:
        case 1653:
        case 1654:
        case 6056:
        case 6135:
        case 6517:
        case 6917:
        case 7857:
        case 8446:
        case 8649:
        case 8741: return "ba";
        case 1655:
        case 1656:
        case 1657:
        case 1658:
        case 1659:
        case 1660:
        case 1661:
        case 1662:
        case 6267:
        case 6334:
        case 7494: return "bai";
        case 1663:
        case 1664:
        case 1665:
        case 1666:
        case 1667:
        case 1668:
        case 1669:
        case 1670:
        case 1671:
        case 1672:
        case 1673:
        case 1674:
        case 1675:
        case 1676:
        case 1677:
        case 5870:
        case 5964:
        case 7851:
        case 8103:
        case 8113:
        case 8418: return "ban";
        case 1678:
        case 1679:
        case 1680:
        case 1681:
        case 1682:
        case 1683:
        case 1684:
        case 1685:
        case 1686:
        case 1687:
        case 1688:
        case 1689:
        case 6182:
        case 6826: return "bang";
        case 1690:
        case 1691:
        case 1692:
        case 1693:
        case 1694:
        case 1695:
        case 1696:
        case 1697:
        case 1698:
        case 1699:
        case 1700:
        case 1701:
        case 1702:
        case 1703:
        case 1704:
        case 1705:
        case 1706:
        case 1707:
        case 1708:
        case 1709:
        case 1710:
        case 1711:
        case 1712:
        case 5772:
        case 6165:
        case 7063:
        case 7650:
        case 8017:
        case 8157:
        case 8532:
        case 8621:
        case 6918: return "bao";
        case 1713:
        case 1714:
        case 1715:
        case 1716:
        case 1717:
        case 1718:
        case 1719:
        case 1720:
        case 1721:
        case 1722:
        case 1723:
        case 1724:
        case 1725:
        case 1726:
        case 1727:
        case 5635:
        case 5873:
        case 5893:
        case 5993:
        case 6141:
        case 6177:
        case 6703:
        case 7753:
        case 8039:
        case 8156:
        case 8645:
        case 8725: return "bei";
        case 1728:
        case 1729:
        case 1730:
        case 1731:
        case 5946:
        case 5948:
        case 7458:
        case 7928: return "ben";
        case 1732:
        case 1733:
        case 1734:
        case 1735:
        case 1736:
        case 1737:
        case 6452:
        case 7420: return "beng";
        case 1738:
        case 1739:
        case 1740:
        case 1741:
        case 1742:
        case 1743:
        case 1744:
        case 1745:
        case 1746:
        case 1747:
        case 1748:
        case 1749:
        case 1750:
        case 1751:
        case 1752:
        case 1753:
        case 1754:
        case 1755:
        case 1756:
        case 1757:
        case 1758:
        case 1759:
        case 1760:
        case 1761:
        case 5616:
        case 5734:
        case 6074:
        case 6109:
        case 6221:
        case 6333:
        case 6357:
        case 6589:
        case 6656:
        case 6725:
        case 6868:
        case 6908:
        case 6986:
        case 6994:
        case 7030:
        case 7052:
        case 7221:
        case 7815:
        case 7873:
        case 7985:
        case 8152:
        case 8357:
        case 8375:
        case 8387:
        case 8416:
        case 8437:
        case 8547:
        case 8734: return "bi";
        case 1762:
        case 1763:
        case 1764:
        case 1765:
        case 1766:
        case 1767:
        case 1768:
        case 1769:
        case 1770:
        case 1771:
        case 1772:
        case 1773:
        case 5650:
        case 5945:
        case 6048:
        case 6677:
        case 6774:
        case 7134:
        case 7614:
        case 7652:
        case 7730:
        case 7760:
        case 8125:
        case 8159:
        case 8289:
        case 8354:
        case 8693: return "bian";
        case 1774:
        case 1775:
        case 1776:
        case 1777:
        case 7027:
        case 7084:
        case 7609:
        case 7613:
        case 7958:
        case 7980:
        case 8106:
        case 8149:
        case 8707:
        case 8752: return "biao";
        case 1778:
        case 1779:
        case 1780:
        case 1781:
        case 8531: return "bie";
        case 1782:
        case 1783:
        case 1784:
        case 1785:
        case 1786:
        case 1787:
        case 5747:
        case 6557:
        case 7145:
        case 7167:
        case 7336:
        case 7375:
        case 7587:
        case 7957:
        case 8738:
        case 8762: return "bin";
        case 1788:
        case 1789:
        case 1790:
        case 1791:
        case 1792:
        case 1793:
        case 1794:
        case 1801:
        case 1802:
        case 5787:
        case 5791:
        case 8058:
        case 5891:
        case 6280: return "bing";
        case 1803:
        case 1804:
        case 1805:
        case 1806:
        case 1807:
        case 1808:
        case 1809:
        case 1810:
        case 1811:
        case 1812:
        case 1813:
        case 1814:
        case 1815:
        case 1816:
        case 1817:
        case 1818:
        case 1819:
        case 1820:
        case 1821:
        case 5781:
        case 6403:
        case 6636:
        case 7362:
        case 7502:
        case 7771:
        case 7864:
        case 8030:
        case 8404:
        case 8543:
        case 8559: return "bo";
        case 1822:
        case 1823:
        case 1824:
        case 1825:
        case 1826:
        case 1827:
        case 1828:
        case 1829:
        case 1830:
        case 1831:
        case 1832:
        case 6318:
        case 6945:
        case 7419:
        case 7446:
        case 7848:
        case 7863:
        case 8519: return "bu";
        case 1833:
        case 6474:
        case 7769: return "ca";
        case 1834:
        case 1835:
        case 1836:
        case 1837:
        case 1838:
        case 1839:
        case 1840:
        case 1841:
        case 1842:
        case 1843:
        case 1844: return "cai";
        case 1845:
        case 1846:
        case 1847:
        case 1848:
        case 1849:
        case 1850:
        case 1851:
        case 6978:
        case 7078:
        case 7218:
        case 8451:
        case 8785: return "can";
        case 1852:
        case 1853:
        case 1854:
        case 1855:
        case 1856:
        case 5687: return "cang";
        case 1857:
        case 1858:
        case 1859:
        case 1860:
        case 1861:
        case 6448:
        case 6878:
        case 8309:
        case 8429: return "cao";
        case 1862:
        case 1863:
        case 1864:
        case 1865:
        case 1866:
        case 6692: return "ce";
        case 6515:
        case 6825: return "cen";
        case 1867:
        case 1868:
        case 6465: return "ceng";
        case 1869:
        case 1870:
        case 1871:
        case 1872:
        case 1873:
        case 1874:
        case 1875:
        case 1876:
        case 1877:
        case 1878:
        case 1879:
        case 6639:
        case 6766:
        case 7017:
        case 7230:
        case 7311:
        case 7322:
        case 7363:
        case 7942:
        case 7979:
        case 8135: return "cha";
        case 1880:
        case 1881:
        case 1882:
        case 5713:
        case 7846:
        case 8091:
        case 8218: return "chai";
        case 1883:
        case 1884:
        case 1885:
        case 1886:
        case 1887:
        case 1888:
        case 1889:
        case 1890:
        case 1891:
        case 1892:
        case 5770:
        case 5838:
        case 6159:
        case 6667:
        case 6893:
        case 6904:
        case 6981:
        case 7031:
        case 7086:
        case 7472:
        case 7688:
        case 7966:
        case 8324:
        case 8580: return "chan";
        case 1893:
        case 1894:
        case 1895:
        case 1896:
        case 1897:
        case 1898:
        case 1899:
        case 1900:
        case 1901:
        case 1902:
        case 1903:
        case 1904:
        case 1905:
        case 1906:
        case 1907:
        case 1908:
        case 1909:
        case 1910:
        case 1911:
        case 5686:
        case 5943:
        case 6041:
        case 6137:
        case 6660:
        case 6568:
        case 6674:
        case 6714:
        case 6749:
        case 7029:
        case 7047:
        case 7438:
        case 7509:
        case 8680: return "chang";
        case 1912:
        case 1913:
        case 1914:
        case 1915:
        case 1916:
        case 1917:
        case 1918:
        case 1919:
        case 1920:
        case 6687:
        case 7443:
        case 8173: return "chao";
        case 1921:
        case 1922:
        case 1923:
        case 1924:
        case 1925:
        case 1926:
        case 5969:
        case 7726: return "che";
        case 1927:
        case 1928:
        case 1929:
        case 1930:
        case 1931:
        case 1932:
        case 1933:
        case 1934:
        case 1935:
        case 1936:
        case 5840:
        case 5863:
        case 6251:
        case 6433:
        case 6923:
        case 7201:
        case 7320:
        case 7755:
        case 8619: return "chen";
        case 1937:
        case 1938:
        case 1939:
        case 1940:
        case 1941:
        case 1942:
        case 1943:
        case 1944:
        case 1945:
        case 1946:
        case 1947:
        case 1948:
        case 1949:
        case 1950:
        case 1951:
        case 5609:
        case 5984:
        case 7239:
        case 7263:
        case 7583:
        case 7810:
        case 7881:
        case 7905:
        case 8146:
        case 8241:
        case 8508: return "cheng";
        case 1952:
        case 1953:
        case 1954:
        case 1955:
        case 1956:
        case 1957:
        case 1958:
        case 1959:
        case 1960:
        case 1961:
        case 1962:
        case 1963:
        case 1964:
        case 1965:
        case 1966:
        case 1967:
        case 5749:
        case 6015:
        case 6061:
        case 6319:
        case 6374:
        case 6420:
        case 6445:
        case 6560:
        case 6633:
        case 7042:
        case 7523:
        case 7787:
        case 8023:
        case 8101:
        case 8161:
        case 8231:
        case 8304:
        case 8355:
        case 8388:
        case 8489:
        case 8556:
        case 8746: return "chi";
        case 1968:
        case 1969:
        case 1970:
        case 1971:
        case 1972:
        case 6091:
        case 6671:
        case 6731:
        case 8409:
        case 8430: return "chong";
        case 1973:
        case 1974:
        case 1975:
        case 1976:
        case 1977:
        case 1978:
        case 1979:
        case 1980:
        case 1981:
        case 1982:
        case 1983:
        case 1984:
        case 5717:
        case 6492:
        case 6716:
        case 8112:
        case 8637: return "chou";
        case 1985:
        case 1986:
        case 1987:
        case 1988:
        case 1989:
        case 1990:
        case 1991:
        case 1992:
        case 1993:
        case 1994:
        case 1995:
        case 1996:
        case 1997:
        case 1998:
        case 1999:
        case 2000:
        case 2001:
        case 2002:
        case 2003:
        case 2004:
        case 2005:
        case 2006:
        case 5601:
        case 5927:
        case 6680:
        case 6732:
        case 6988:
        case 7109:
        case 7238:
        case 7290:
        case 7343:
        case 8150:
        case 8260:
        case 8573:
        case 8777: return "chu";
        case 2007:
        case 6285:
        case 6408:
        case 7590:
        case 8563: return "chuai";
        case 2008:
        case 2009:
        case 2010:
        case 2011:
        case 2012:
        case 2013:
        case 2014:
        case 6622:
        case 6955:
        case 7161:
        case 7516:
        case 7843:
        case 8413: return "chuan";
        case 2015:
        case 2016:
        case 2017:
        case 2018:
        case 2019:
        case 2020:
        case 6675: return "chuang";
        case 2021:
        case 2022:
        case 2023:
        case 2024:
        case 2025:
        case 5879:
        case 7302:
        case 7319: return "chui";
        case 2026:
        case 2027:
        case 2028:
        case 2029:
        case 2030:
        case 2031:
        case 2032:
        case 6127:
        case 8040:
        case 8277: return "chun";
        case 2033:
        case 2034:
        case 7401:
        case 8554:
        case 8626: return "chuo";
        case 2035:
        case 2036:
        case 2037:
        case 2038:
        case 2039:
        case 2040:
        case 2041:
        case 2042:
        case 2043:
        case 2044:
        case 2045:
        case 2046:
        case 6358:
        case 8043:
        case 7684:
        case 8457: return "ci";
        case 2047:
        case 2048:
        case 2049:
        case 2050:
        case 2051:
        case 2052:
        case 6042:
        case 6840:
        case 7085:
        case 7193:
        case 7214:
        case 7240: return "cong";
        case 2053:
        case 7308:
        case 7403:
        case 7577: return "cou";
        case 2054:
        case 2055:
        case 2056:
        case 2057:
        case 6180:
        case 6562:
        case 6607:
        case 7367:
        case 8501:
        case 8530:
        case 8577: return "cu";
        case 2058:
        case 2059:
        case 2060:
        case 5764:
        case 6305:
        case 7664:
        case 7973: return "cuan";
        case 2061:
        case 2062:
        case 2063:
        case 2064:
        case 2065:
        case 2066:
        case 2067:
        case 2068:
        case 6718:
        case 6145:
        case 6393:
        case 7213:
        case 7333:
        case 7505:
        case 8631: return "cui";
        case 2069:
        case 2070:
        case 2071:
        case 6666:
        case 8169: return "cun";
        case 2072:
        case 2073:
        case 2074:
        case 2075:
        case 2076:
        case 2077:
        case 5640:
        case 6547:
        case 7566:
        case 7917:
        case 7983:
        case 8078:
        case 8526:
        case 8567: return "cuo";
        case 2078:
        case 2079:
        case 2080:
        case 2081:
        case 2082:
        case 2083:
        case 6239:
        case 6353:
        case 6410:
        case 6682:
        case 7007:
        case 8155:
        case 8346:
        case 8716:
        case 8718: return "da";
        case 2084:
        case 2085:
        case 2086:
        case 2087:
        case 2088:
        case 2089:
        case 2090:
        case 2091:
        case 2092:
        case 2093:
        case 2094:
        case 2101:
        case 6004:
        case 6316:
        case 6523:
        case 6942:
        case 7110:
        case 7173:
        case 8776: return "dai";
        case 2102:
        case 2103:
        case 2104:
        case 2105:
        case 2106:
        case 2107:
        case 2108:
        case 2109:
        case 2110:
        case 2111:
        case 2112:
        case 2113:
        case 2114:
        case 2115:
        case 2116:
        case 5757:
        case 6144:
        case 6402:
        case 7373:
        case 7470:
        case 7781:
        case 8067:
        case 8087:
        case 8185:
        case 8376: return "dan";
        case 2117:
        case 2118:
        case 2119:
        case 2120:
        case 2121:
        case 5852:
        case 5942:
        case 6148:
        case 6920:
        case 7724:
        case 7885:
        case 8141: return "dang";
        case 2122:
        case 2123:
        case 2124:
        case 2125:
        case 2126:
        case 2127:
        case 2128:
        case 2129:
        case 2130:
        case 2131:
        case 2132:
        case 2133:
        case 5654:
        case 6322:
        case 6665:
        case 7514:
        case 8478: return "dao";
        case 2134:
        case 2135:
        case 2136:
        case 7929: return "de";
        case 2137:
        case 2138:
        case 2139:
        case 2140:
        case 2141:
        case 2142:
        case 2143:
        case 6466:
        case 6556:
        case 7413:
        case 7767:
        case 7975:
        case 8403: return "deng";
        case 2144:
        case 2145:
        case 2146:
        case 2147:
        case 2148:
        case 2149:
        case 2150:
        case 2151:
        case 2152:
        case 2153:
        case 2154:
        case 2155:
        case 2156:
        case 2157:
        case 2158:
        case 2159:
        case 2160:
        case 2161:
        case 2162:
        case 5621:
        case 5765:
        case 5814:
        case 5848:
        case 5901:
        case 5970:
        case 6122:
        case 6454:
        case 7023:
        case 7116:
        case 7260:
        case 7306:
        case 7475:
        case 7738:
        case 7758:
        case 7791:
        case 7965:
        case 8438:
        case 8730: return "di";
        case 6439: return "dia";
        case 2163:
        case 2164:
        case 2165:
        case 2166:
        case 2167:
        case 2168:
        case 2169:
        case 2170:
        case 2171:
        case 2172:
        case 2173:
        case 2174:
        case 2175:
        case 2176:
        case 2177:
        case 2178:
        case 5871:
        case 5967:
        case 6559:
        case 7172:
        case 7868:
        case 8116:
        case 8118:
        case 8401:
        case 8558: return "dian";
        case 2179:
        case 2180:
        case 2181:
        case 2182:
        case 2183:
        case 2184:
        case 2185:
        case 2186:
        case 2187:
        case 7886:
        case 8585:
        case 8684: return "diao";
        case 2188:
        case 2189:
        case 2190:
        case 2191:
        case 2192:
        case 2193:
        case 2194:
        case 5976:
        case 6006:
        case 6273:
        case 6409:
        case 7526:
        case 8012:
        case 8183:
        case 8562:
        case 8688: return "die";
        case 2201:
        case 2202:
        case 2203:
        case 2204:
        case 2205:
        case 2206:
        case 2207:
        case 2208:
        case 2209:
        case 5674:
        case 6404:
        case 7164:
        case 7575:
        case 7754:
        case 7814:
        case 8059:
        case 8184:
        case 8490: return "ding";
        case 2210:
        case 7891: return "diu";
        case 2211:
        case 2212:
        case 2213:
        case 2214:
        case 2215:
        case 2216:
        case 2217:
        case 2218:
        case 2219:
        case 2220:
        case 5977:
        case 6343:
        case 6520:
        case 6528:
        case 7517:
        case 7543:
        case 7556:
        case 7747:
        case 8020: return "dong";
        case 2221:
        case 2222:
        case 2223:
        case 2224:
        case 2225:
        case 2226:
        case 2227:
        case 6190:
        case 8128:
        case 8229:
        case 8391: return "dou";
        case 2228:
        case 2229:
        case 2230:
        case 2231:
        case 2232:
        case 2233:
        case 2234:
        case 2235:
        case 2236:
        case 2237:
        case 2238:
        case 2239:
        case 2240:
        case 2241:
        case 2242:
        case 6022:
        case 6429:
        case 6834:
        case 7292:
        case 7525:
        case 8328:
        case 8338:
        case 8739:
        case 8782: return "du";
        case 2243:
        case 2244:
        case 2245:
        case 2246:
        case 2247:
        case 2248:
        case 7318:
        case 7649:
        case 8393: return "duan";
        case 2249:
        case 2250:
        case 2251:
        case 2252:
        case 7701:
        case 7713:
        case 7752: return "dui";
        case 2253:
        case 2254:
        case 2255:
        case 2256:
        case 2257:
        case 2258:
        case 2259:
        case 2260:
        case 2261:
        case 6771:
        case 7632:
        case 7727:
        case 7766:
        case 7779:
        case 7970:
        case 8527: return "dun";
        case 2262:
        case 2263:
        case 2264:
        case 2265:
        case 2266:
        case 2267:
        case 2268:
        case 2269:
        case 2270:
        case 2271:
        case 2272:
        case 2273:
        case 6345:
        case 6365:
        case 6785:
        case 7122:
        case 7876:
        case 8154:
        case 8566: return "duo";
        case 2274:
        case 2275:
        case 2276:
        case 2277:
        case 2278:
        case 2279:
        case 2280:
        case 2281:
        case 2282:
        case 2283:
        case 2284:
        case 2285:
        case 2286:
        case 5612:
        case 5832:
        case 5844:
        case 5949:
        case 6035:
        case 6113:
        case 6164:
        case 6332:
        case 6721:
        case 6977:
        case 7025:
        case 7378:
        case 7581:
        case 7916:
        case 7941:
        case 8042:
        case 8206:
        case 8689: return "e";
        case 2287:
        case 6176:
        case 6284:
        case 6437: return "en";
        case 2288:
        case 2289:
        case 2290:
        case 2291:
        case 2292:
        case 2293:
        case 2294:
        case 2295:
        case 2296:
        case 2297:
        case 2298:
        case 2299:
        case 2300:
        case 2301:
        case 5706:
        case 6939:
        case 7177:
        case 7879:
        case 8025:
        case 8660: return "er";
        case 2302:
        case 2303:
        case 2304:
        case 2305:
        case 2306:
        case 2307:
        case 2308:
        case 2309:
        case 5950:
        case 7732: return "fa";
        case 2310:
        case 2311:
        case 2312:
        case 2313:
        case 2314:
        case 2315:
        case 2316:
        case 2317:
        case 2318:
        case 2319:
        case 2320:
        case 2321:
        case 2322:
        case 2323:
        case 2324:
        case 2325:
        case 2326:
        case 6212:
        case 6232:
        case 6506:
        case 7283:
        case 7522:
        case 7660:
        case 7818:
        case 8576: return "fan";
        case 2327:
        case 2328:
        case 2329:
        case 2330:
        case 2331:
        case 2332:
        case 2333:
        case 2334:
        case 2335:
        case 2336:
        case 2337:
        case 5646:
        case 5890:
        case 7242:
        case 7853:
        case 8419:
        case 8648: return "fang";
        case 2338:
        case 2339:
        case 2340:
        case 2341:
        case 2342:
        case 2343:
        case 2344:
        case 2345:
        case 2346:
        case 2347:
        case 2348:
        case 2349:
        case 6032:
        case 6584:
        case 6713:
        case 6839:
        case 6990:
        case 7119:
        case 7328:
        case 7572:
        case 7619:
        case 7673:
        case 7948:
        case 8082:
        case 8267:
        case 8385:
        case 8468:
        case 8613:
        case 8678: return "fei";
        case 2350:
        case 2351:
        case 2352:
        case 2353:
        case 2354:
        case 2355:
        case 2356:
        case 2357:
        case 2358:
        case 2359:
        case 2360:
        case 2361:
        case 2362:
        case 2363:
        case 2364:
        case 5739:
        case 6915:
        case 7291:
        case 8687:
        case 8787: return "fen";
        case 2365:
        case 2366:
        case 2367:
        case 2368:
        case 2369:
        case 2370:
        case 2371:
        case 2372:
        case 2373:
        case 2374:
        case 2375:
        case 2376:
        case 2377:
        case 2378:
        case 2379:
        case 5726:
        case 5926:
        case 6155:
        case 6384:
        case 6767:
        case 7731: return "feng";
        case 2380: return "fo";
        case 2381:
        case 8330: return "fou";
        case 2382:
        case 2383:
        case 2384:
        case 2385:
        case 2386:
        case 2387:
        case 2388:
        case 2389:
        case 2390:
        case 2391:
        case 2392:
        case 2393:
        case 2394:
        case 2395:
        case 2396:
        case 2397:
        case 2398:
        case 2399:
        case 2400:
        case 2401:
        case 2402:
        case 2403:
        case 2404:
        case 2405:
        case 2406:
        case 2407:
        case 2408:
        case 2409:
        case 2410:
        case 2411:
        case 2412:
        case 2413:
        case 2414:
        case 2415:
        case 2416:
        case 2417:
        case 2418:
        case 2419:
        case 2420:
        case 2421:
        case 2422:
        case 2423:
        case 2424:
        case 2425:
        case 2426:
        case 2427:
        case 2428:
        case 2429:
        case 2430:
        case 2431:
        case 2432:
        case 5775:
        case 5776:
        case 5866:
        case 5914:
        case 6029:
        case 6062:
        case 6082:
        case 6119:
        case 6142:
        case 6252:
        case 6327:
        case 6505:
        case 6686:
        case 6870:
        case 6985:
        case 7058:
        case 7066:
        case 7106:
        case 7108:
        case 7285:
        case 7471:
        case 7680:
        case 7741:
        case 7774:
        case 7775:
        case 7823:
        case 7991:
        case 8005:
        case 8222:
        case 8261:
        case 8280:
        case 8283:
        case 8479:
        case 8535:
        case 8538:
        case 8654:
        case 8691: return "fu";
        case 2433:
        case 2434:
        case 6246:
        case 7056:
        case 7057:
        case 7424:
        case 7837: return "ga";
        case 2435:
        case 2436:
        case 2437:
        case 2438:
        case 2439:
        case 2440:
        case 5604:
        case 5875:
        case 5982:
        case 7414:
        case 7464: return "gai";
        case 2441:
        case 2442:
        case 2443:
        case 2444:
        case 2445:
        case 2446:
        case 2447:
        case 2448:
        case 2449:
        case 2450:
        case 2451:
        case 5965:
        case 6053:
        case 6247:
        case 6306:
        case 6779:
        case 6838:
        case 6887:
        case 7104:
        case 7347:
        case 7426:
        case 7723:
        case 8065:
        case 8491: return "gan";
        case 2452:
        case 2453:
        case 2454:
        case 2455:
        case 2456:
        case 2457:
        case 2458:
        case 2459:
        case 2460:
        case 7716:
        case 7824:
        case 8364: return "gang";
        case 2461:
        case 2462:
        case 2463:
        case 2464:
        case 2465:
        case 2466:
        case 2467:
        case 2468:
        case 2469:
        case 2470:
        case 5626:
        case 5830:
        case 5912:
        case 6227:
        case 7141:
        case 7332:
        case 7334:
        case 7429:
        case 7915: return "gao";
        case 2471:
        case 2472:
        case 2473:
        case 2474:
        case 2475:
        case 2476:
        case 2477:
        case 2478:
        case 2479:
        case 2480:
        case 2481:
        case 2482:
        case 2483:
        case 2484:
        case 2485:
        case 2486:
        case 2487:
        case 5610:
        case 5678:
        case 5933:
        case 5957:
        case 6010:
        case 6435:
        case 7092:
        case 7501:
        case 7585:
        case 7749:
        case 7951:
        case 8143:
        case 8220:
        case 8420:
        case 8732: return "ge";
        case 2488: return "gei";
        case 2489:
        case 2490:
        case 5608:
        case 6102:
        case 6371:
        case 8462: return "gen";
        case 2491:
        case 2492:
        case 2493:
        case 2494:
        case 2495:
        case 2496:
        case 2497:
        case 2498:
        case 2499:
        case 2500:
        case 2501:
        case 2502:
        case 2503:
        case 6376:
        case 6657:
        case 7114:
        case 8665: return "geng";
        case 2504:
        case 2505:
        case 2506:
        case 2507:
        case 2508:
        case 2509:
        case 2510:
        case 2511:
        case 2512:
        case 2513:
        case 2514:
        case 2515:
        case 2516:
        case 2517:
        case 2518:
        case 6235:
        case 7178:
        case 7537:
        case 8228:
        case 8601: return "gong";
        case 2519:
        case 2520:
        case 2521:
        case 2522:
        case 2523:
        case 2524:
        case 2525:
        case 2526:
        case 2527:
        case 5694:
        case 5824:
        case 6524:
        case 6960:
        case 7037:
        case 7135:
        case 7259:
        case 7477:
        case 7616:
        case 8349:
        case 8384:
        case 8724: return "gou";
        case 2528:
        case 2529:
        case 2530:
        case 2531:
        case 2532:
        case 2533:
        case 2534:
        case 2535:
        case 2536:
        case 2537:
        case 2538:
        case 2539:
        case 2540:
        case 2541:
        case 2542:
        case 2543:
        case 2544:
        case 2545:
        case 5637:
        case 5812:
        case 6152:
        case 6536:
        case 6773:
        case 7284:
        case 7379:
        case 7484:
        case 7486:
        case 7591:
        case 7617:
        case 7813:
        case 7825:
        case 7860:
        case 7932:
        case 8019:
        case 8083:
        case 8233:
        case 8494:
        case 8593:
        case 8681:
        case 8729: return "gu";
        case 2546:
        case 2547:
        case 2548:
        case 2549:
        case 2550:
        case 2551:
        case 5652:
        case 5820:
        case 6341:
        case 7273:
        case 7550:
        case 8027: return "gua";
        case 2552:
        case 2553:
        case 2554: return "guai";
        case 2555:
        case 2556:
        case 2557:
        case 2558:
        case 2559:
        case 2560:
        case 2561:
        case 2562:
        case 2563:
        case 2564:
        case 2565:
        case 5736:
        case 6124:
        case 6272:
        case 6842:
        case 7834:
        case 8057:
        case 8170:
        case 8704: return "guan";
        case 2566:
        case 2567:
        case 2568:
        case 6359:
        case 6578:
        case 7270:
        case 7555: return "guang";
        case 2569:
        case 2570:
        case 2571:
        case 2572:
        case 2573:
        case 2574:
        case 2575:
        case 2576:
        case 2577:
        case 2578:
        case 2579:
        case 2580:
        case 2581:
        case 2582:
        case 2583:
        case 2584:
        case 5648:
        case 5659:
        case 6649:
        case 6919:
        case 7003:
        case 7277:
        case 7433:
        case 7448:
        case 8007:
        case 8394:
        case 8657:
        case 8712: return "gui";
        case 2585:
        case 2586:
        case 2587:
        case 5613:
        case 5782:
        case 7121:
        case 7762:
        case 8671: return "gun";
        case 2588:
        case 2589:
        case 2590:
        case 2591:
        case 2592:
        case 2593:
        case 5769:
        case 5986:
        case 6266:
        case 6335:
        case 6494:
        case 6538:
        case 6603:
        case 7304:
        case 7529:
        case 8188:
        case 8268:
        case 8269: return "guo";
        case 2594:
        case 7894: return "ha";
        case 2601:
        case 2602:
        case 2603:
        case 2604:
        case 2605:
        case 2606:
        case 2607:
        case 6443:
        case 7560:
        case 8516: return "hai";
        case 2608:
        case 2609:
        case 2610:
        case 2611:
        case 2612:
        case 2613:
        case 2614:
        case 2615:
        case 2616:
        case 2617:
        case 2618:
        case 2619:
        case 2620:
        case 2621:
        case 2622:
        case 2623:
        case 2624:
        case 2625:
        case 2626:
        case 5885:
        case 6153:
        case 6294:
        case 6759:
        case 6911:
        case 7447:
        case 7642:
        case 8192:
        case 8205:
        case 8232:
        case 8793: return "han";
        case 2627:
        case 2628:
        case 2629:
        case 6776:
        case 7112:
        case 8194: return "hang";
        case 2630:
        case 2631:
        case 2632:
        case 2633:
        case 2634:
        case 2635:
        case 2636:
        case 2637:
        case 2638:
        case 6179:
        case 6222:
        case 6438:
        case 6467:
        case 6909:
        case 6916:
        case 7427:
        case 8009:
        case 8211:
        case 8226: return "hao";
        case 2639:
        case 2640:
        case 2641:
        case 2642:
        case 2643:
        case 2644:
        case 2645:
        case 2646:
        case 2647:
        case 2648:
        case 2649:
        case 2650:
        case 2651:
        case 2652:
        case 2653:
        case 2654:
        case 2655:
        case 2656:
        case 5813:
        case 5932:
        case 5954:
        case 6432:
        case 6756:
        case 7434:
        case 7833:
        case 8202:
        case 8234:
        case 8471: return "he";
        case 2657:
        case 2658: return "hei";
        case 2659:
        case 2660:
        case 2661:
        case 2662: return "hen";
        case 2663:
        case 2664:
        case 2665:
        case 2666:
        case 2667:
        case 6231:
        case 7181:
        case 7276: return "heng";
        case 2668:
        case 2669:
        case 2670:
        case 2671:
        case 2672:
        case 2673:
        case 2674:
        case 2675:
        case 2676:
        case 5768:
        case 5774:
        case 5807:
        case 6106:
        case 6214:
        case 6216:
        case 6740:
        case 6792: return "hong";
        case 2677:
        case 2678:
        case 2679:
        case 2680:
        case 2681:
        case 2682:
        case 2683:
        case 6009:
        case 6565:
        case 6943:
        case 8090:
        case 8383:
        case 8455:
        case 8655:
        case 8731: return "hou";
        case 2684:
        case 2685:
        case 2686:
        case 2687:
        case 2688:
        case 2689:
        case 2690:
        case 2691:
        case 2692:
        case 2693:
        case 2694:
        case 2695:
        case 2696:
        case 2697:
        case 2698:
        case 2699:
        case 2700:
        case 2701:
        case 2702:
        case 2703:
        case 2704:
        case 2705:
        case 2706:
        case 2707:
        case 5792:
        case 6392:
        case 6481:
        case 6518:
        case 6609:
        case 6679:
        case 6717:
        case 6816:
        case 6879:
        case 7190:
        case 7346:
        case 7385:
        case 7618:
        case 7635:
        case 7646:
        case 7670:
        case 7672:
        case 7679:
        case 8013:
        case 8032:
        case 8041:
        case 8055:
        case 8214:
        case 8343:
        case 8513:
        case 8590: return "hu";
        case 2708:
        case 2709:
        case 2710:
        case 2711:
        case 2712:
        case 2713:
        case 2714:
        case 2715:
        case 2716:
        case 7072:
        case 7275:
        case 7725:
        case 7892: return "hua";
        case 2717:
        case 2718:
        case 2719:
        case 2720:
        case 2721:
        case 8555: return "huai";
        case 2722:
        case 2723:
        case 2724:
        case 2725:
        case 2726:
        case 2727:
        case 2728:
        case 2729:
        case 2730:
        case 2731:
        case 2732:
        case 2733:
        case 2734:
        case 2735:
        case 5928:
        case 6140:
        case 6307:
        case 6487:
        case 6621:
        case 6801:
        case 6829:
        case 6881:
        case 6930:
        case 6953:
        case 7157:
        case 7944:
        case 8673:
        case 8763: return "huan";
        case 2736:
        case 2737:
        case 2738:
        case 2739:
        case 2740:
        case 2741:
        case 2742:
        case 2743:
        case 2744:
        case 2745:
        case 2746:
        case 2747:
        case 2748:
        case 2749:
        case 5882:
        case 6569:
        case 6850:
        case 6874:
        case 6956:
        case 7211:
        case 7533:
        case 8105:
        case 8308:
        case 8382:
        case 8692: return "huang";
        case 2750:
        case 2751:
        case 2752:
        case 2753:
        case 2754:
        case 2755:
        case 2756:
        case 2757:
        case 2758:
        case 2759:
        case 2760:
        case 2761:
        case 2762:
        case 2763:
        case 2764:
        case 2765:
        case 2766:
        case 2767:
        case 2768:
        case 2769:
        case 2770:
        case 5822:
        case 6078:
        case 6086:
        case 6205:
        case 6352:
        case 6360:
        case 6425:
        case 6736:
        case 6807:
        case 6811:
        case 6971:
        case 7132:
        case 7185:
        case 7445:
        case 7703:
        case 8219:
        case 8319:
        case 8766: return "hui";
        case 2771:
        case 2772:
        case 2773:
        case 2774:
        case 2775:
        case 2776:
        case 5827:
        case 6638:
        case 6752:
        case 6867: return "hun";
        case 2777:
        case 2778:
        case 2779:
        case 2780:
        case 2781:
        case 2782:
        case 2783:
        case 2784:
        case 2785:
        case 2786:
        case 5669:
        case 6229:
        case 6311:
        case 6475:
        case 6623:
        case 7856:
        case 7933:
        case 7976:
        case 8175:
        case 8322: return "huo";
        case 2787:
        case 2788:
        case 2789:
        case 2790:
        case 2791:
        case 2792:
        case 2793:
        case 2794:
        case 2795:
        case 2796:
        case 2797:
        case 2798:
        case 2799:
        case 2800:
        case 2801:
        case 2802:
        case 2803:
        case 2804:
        case 2805:
        case 2806:
        case 2807:
        case 2808:
        case 2809:
        case 2810:
        case 2811:
        case 2812:
        case 2813:
        case 2814:
        case 2815:
        case 2816:
        case 2817:
        case 2818:
        case 2819:
        case 2820:
        case 2821:
        case 2822:
        case 2823:
        case 2824:
        case 2825:
        case 2826:
        case 2827:
        case 2828:
        case 2829:
        case 2830:
        case 2831:
        case 2832:
        case 2833:
        case 2834:
        case 2835:
        case 2836:
        case 2837:
        case 2838:
        case 2839:
        case 2840:
        case 2841:
        case 2842:
        case 2843:
        case 2844:
        case 2845:
        case 5602:
        case 5629:
        case 5632:
        case 5662:
        case 5705:
        case 5742:
        case 5952:
        case 6024:
        case 6033:
        case 6193:
        case 6210:
        case 6265:
        case 6320:
        case 6350:
        case 6383:
        case 6507:
        case 6553:
        case 6809:
        case 6976:
        case 7087:
        case 7160:
        case 7165:
        case 7314:
        case 7374:
        case 7410:
        case 7411:
        case 7469:
        case 7473:
        case 7487:
        case 7620:
        case 7722:
        case 7831:
        case 7990:
        case 8002:
        case 8104:
        case 8217:
        case 8337:
        case 8339:
        case 8463:
        case 8550:
        case 8553:
        case 8611:
        case 8661:
        case 8674:
        case 8757:
        case 8768: return "ji";
        case 2846:
        case 2847:
        case 2848:
        case 2849:
        case 2850:
        case 2851:
        case 2852:
        case 2853:
        case 2854:
        case 2855:
        case 2856:
        case 2857:
        case 2858:
        case 2859:
        case 2860:
        case 2861:
        case 2862:
        case 5704:
        case 5903:
        case 6171:
        case 6521:
        case 6804:
        case 6940:
        case 7176:
        case 7409:
        case 7546:
        case 7702:
        case 7882:
        case 7956:
        case 8072:
        case 8142:
        case 8244:
        case 8353:
        case 8434:
        case 8542: return "jia";
        case 2863:
        case 2864:
        case 2865:
        case 2866:
        case 2867:
        case 2868:
        case 2869:
        case 2870:
        case 2871:
        case 2872:
        case 2873:
        case 2874:
        case 2875:
        case 2876:
        case 2877:
        case 2878:
        case 2879:
        case 2880:
        case 2881:
        case 2882:
        case 2883:
        case 2884:
        case 2885:
        case 2886:
        case 2887:
        case 2888:
        case 2889:
        case 2890:
        case 2891:
        case 2892:
        case 2893:
        case 2894:
        case 2895:
        case 2896:
        case 2897:
        case 2898:
        case 2899:
        case 2900:
        case 2901:
        case 2902:
        case 2903:
        case 2904:
        case 2905:
        case 2906:
        case 2907:
        case 2908:
        case 5752:
        case 5841:
        case 5857:
        case 6149:
        case 6183:
        case 6286:
        case 6853:
        case 6931:
        case 6932:
        case 7144:
        case 7237:
        case 7305:
        case 7407:
        case 7415:
        case 7480:
        case 7489:
        case 7506:
        case 7576:
        case 7790:
        case 7921:
        case 8047:
        case 8148:
        case 8340:
        case 8469:
        case 8534:
        case 8561:
        case 8668:
        case 8721: return "jian";
        case 2909:
        case 2910:
        case 2911:
        case 2912:
        case 2913:
        case 2914:
        case 2915:
        case 2916:
        case 2917:
        case 2918:
        case 2919:
        case 2920:
        case 2921:
        case 6092:
        case 6814:
        case 7113:
        case 7154:
        case 7481:
        case 7768:
        case 8180:
        case 8461:
        case 8488: return "jiang";
        case 2922:
        case 2923:
        case 2924:
        case 2925:
        case 2926:
        case 2927:
        case 2928:
        case 2929:
        case 2930:
        case 2931:
        case 2932:
        case 2933:
        case 2934:
        case 2935:
        case 2936:
        case 2937:
        case 2938:
        case 2939:
        case 2940:
        case 2941:
        case 2942:
        case 2943:
        case 2944:
        case 2945:
        case 2946:
        case 2947:
        case 2948:
        case 2949:
        case 5714:
        case 5753:
        case 6020:
        case 6090:
        case 6256:
        case 6461:
        case 6572:
        case 7015:
        case 7089:
        case 7524:
        case 8008:
        case 8052:
        case 8252:
        case 8473:
        case 8520:
        case 8551:
        case 8662: return "jiao";
        case 2950:
        case 2951:
        case 2952:
        case 2953:
        case 2954:
        case 2955:
        case 2956:
        case 2957:
        case 2958:
        case 2959:
        case 2960:
        case 2961:
        case 2962:
        case 2963:
        case 2964:
        case 2965:
        case 2966:
        case 2967:
        case 2968:
        case 2969:
        case 2970:
        case 2971:
        case 2972:
        case 2973:
        case 2974:
        case 2975:
        case 2976:
        case 5806:
        case 5864:
        case 5821:
        case 6255:
        case 6414:
        case 7028:
        case 7061:
        case 7278:
        case 7757:
        case 8060:
        case 8201:
        case 8227:
        case 8441:
        case 8658:
        case 8726: return "jie";
        case 2977:
        case 2978:
        case 2979:
        case 2980:
        case 2981:
        case 2982:
        case 2983:
        case 2984:
        case 2985:
        case 2986:
        case 2987:
        case 2988:
        case 2989:
        case 2990:
        case 2991:
        case 2992:
        case 2993:
        case 2994:
        case 2995:
        case 2996:
        case 2997:
        case 2998:
        case 2999:
        case 3000:
        case 3001:
        case 3002:
        case 5865:
        case 6103:
        case 6132:
        case 6468:
        case 6643:
        case 6659:
        case 7001:
        case 7138:
        case 7210:
        case 7340:
        case 7465:
        case 7478:
        case 7836:
        case 8138: return "jin";
        case 3003:
        case 3004:
        case 3005:
        case 3006:
        case 3007:
        case 3008:
        case 3009:
        case 3010:
        case 3011:
        case 3012:
        case 3013:
        case 3014:
        case 3015:
        case 3016:
        case 3017:
        case 3018:
        case 3019:
        case 3020:
        case 3021:
        case 3022:
        case 3023:
        case 3024:
        case 3025:
        case 3026:
        case 3027: return "jing";
        case 5751:
        case 5869:
        case 6128:
        case 6616:
        case 6729:
        case 6794:
        case 6941:
        case 6982:
        case 7026:
        case 7534:
        case 7554:
        case 7570:
        case 7626: return "jiang";
        case 3028:
        case 3029:
        case 6936:
        case 7671: return "jiong";
        case 3030:
        case 3031:
        case 3032:
        case 3033:
        case 3034:
        case 3035:
        case 3036:
        case 3037:
        case 3038:
        case 3039:
        case 3040:
        case 3041:
        case 3042:
        case 3043:
        case 3044:
        case 3045:
        case 5754:
        case 6417:
        case 6746:
        case 7249:
        case 7274:
        case 8015:
        case 8053:
        case 8481:
        case 8761: return "jiu";
        case 3046:
        case 3047:
        case 3048:
        case 3049:
        case 3050:
        case 3051:
        case 3052:
        case 3053:
        case 3054:
        case 3055:
        case 3056:
        case 3057:
        case 3058:
        case 3059:
        case 3060:
        case 3061:
        case 3062:
        case 3063:
        case 3064:
        case 3065:
        case 3066:
        case 3067:
        case 3068:
        case 3069:
        case 3070:
        case 3071:
        case 5738:
        case 5810:
        case 6036:
        case 6058:
        case 6076:
        case 6268:
        case 6965:
        case 6980:
        case 7202:
        case 7307:
        case 7316:
        case 7323:
        case 7357:
        case 7381:
        case 7488:
        case 7611:
        case 7850:
        case 7924:
        case 8022:
        case 8132:
        case 8153:
        case 8482:
        case 8522:
        case 8565:
        case 8620:
        case 8634:
        case 8722: return "ju";
        case 3072:
        case 3073:
        case 3074:
        case 3075:
        case 3076:
        case 3077:
        case 3078:
        case 5918:
        case 6590:
        case 6824:
        case 7280:
        case 7835:
        case 7935:
        case 7952:
        case 8633: return "juan";
        case 3079:
        case 3080:
        case 3081:
        case 3082:
        case 3083:
        case 3084:
        case 3085:
        case 3086:
        case 3087:
        case 3088:
        case 5642:
        case 5667:
        case 5860:
        case 5939:
        case 6207:
        case 6421:
        case 6457:
        case 6469:
        case 6540:
        case 6617:
        case 7062:
        case 7169:
        case 7286:
        case 7351:
        case 7663:
        case 7967:
        case 8574:
        case 8591: return "jue";
        case 3089:
        case 3090:
        case 3091:
        case 3092:
        case 3093:
        case 3094:
        case 3095:
        case 3096:
        case 3097:
        case 3098:
        case 3099:
        case 3100:
        case 3101:
        case 3102:
        case 3103:
        case 3104:
        case 3105:
        case 6260:
        case 8168:
        case 8362:
        case 8769: return "jun";
        case 3106:
        case 3107:
        case 3108:
        case 3109:
        case 5671:
        case 5691:
        case 6339:
        case 7544: return "ka";
        case 3110:
        case 3111:
        case 3112:
        case 3113:
        case 3114:
        case 5660:
        case 5978:
        case 6160:
        case 6673:
        case 6693:
        case 7888:
        case 7920:
        case 7939: return "kai";
        case 3115:
        case 3116:
        case 3117:
        case 3118:
        case 3119:
        case 3120:
        case 5709:
        case 5941:
        case 6108:
        case 7412:
        case 7772:
        case 7811: return "kan";
        case 3121:
        case 3122:
        case 3123:
        case 3124:
        case 3125:
        case 3126:
        case 3127:
        case 5688:
        case 6742:
        case 7854: return "kang";
        case 3128:
        case 3129:
        case 3130:
        case 3131:
        case 6974:
        case 7264:
        case 7491:
        case 7877: return "kao";
        case 3132:
        case 3133:
        case 3134:
        case 3135:
        case 3136:
        case 3137:
        case 3138:
        case 3139:
        case 3140:
        case 3141:
        case 3142:
        case 3143:
        case 3144:
        case 3145:
        case 3146:
        case 6430:
        case 6519:
        case 6701:
        case 6859:
        case 7076:
        case 7128:
        case 7170:
        case 7380:
        case 7520:
        case 7807:
        case 7861:
        case 7930:
        case 7993:
        case 8066:
        case 8129:
        case 8204:
        case 8282:
        case 8733: return "ke";
        case 3147:
        case 3148:
        case 3149:
        case 3150:
        case 8144: return "ken";
        case 3151:
        case 3152:
        case 7912: return "keng";
        case 3153:
        case 3154:
        case 3155:
        case 3156:
        case 5737:
        case 6539:
        case 8377: return "kong";
        case 3157:
        case 3158:
        case 3159:
        case 3160:
        case 6050:
        case 6202:
        case 6321:
        case 7778:
        case 8356: return "kou";
        case 3161:
        case 3162:
        case 3163:
        case 3164:
        case 3165:
        case 3166:
        case 3167:
        case 5658:
        case 6005:
        case 6423:
        case 7111:
        case 8728: return "ku";
        case 3168:
        case 3169:
        case 3170:
        case 3171:
        case 3172:
        case 5708: return "kua";
        case 3173:
        case 3174:
        case 3175:
        case 3176:
        case 5665:
        case 5906:
        case 6364:
        case 6586:
        case 7558: return "kuai";
        case 3177:
        case 3178:
        case 8737: return "kuan";
        case 3179:
        case 3180:
        case 3181:
        case 3182:
        case 3183:
        case 3184:
        case 3185:
        case 3186:
        case 5818:
        case 5831:
        case 5887:
        case 5959:
        case 6237:
        case 6349:
        case 7094:
        case 7460: return "kuang";
        case 3187:
        case 3188:
        case 3189:
        case 3190:
        case 3191:
        case 3192:
        case 3193:
        case 3194:
        case 3195:
        case 3196:
        case 3197:
        case 3198:
        case 3199:
        case 3200:
        case 3201:
        case 3202:
        case 3203:
        case 5624:
        case 5649:
        case 5771:
        case 6162:
        case 6281:
        case 6413:
        case 6416:
        case 6720:
        case 6951:
        case 7450:
        case 7805:
        case 8189:
        case 8281:
        case 8381:
        case 8545:
        case 8606:
        case 8743: return "kui";
        case 3204:
        case 3205:
        case 3206:
        case 3207:
        case 6707:
        case 6745:
        case 7191:
        case 7931:
        case 8511:
        case 8679:
        case 8753: return "kun";
        case 3208:
        case 3209:
        case 3210:
        case 3211:
        case 8250: return "kuo";
        case 3212:
        case 3213:
        case 3214:
        case 3215:
        case 3216:
        case 3217:
        case 3218:
        case 5661:
        case 6969:
        case 7425:
        case 7739:
        case 8088: return "la";
        case 3219:
        case 3220:
        case 3221:
        case 6533:
        case 6566:
        case 6821:
        case 6894:
        case 7467:
        case 7789:
        case 7910:
        case 8114:
        case 8405:return "lai";
        case 3222:
        case 3223:
        case 3224:
        case 3225:
        case 3226:
        case 3227:
        case 3228:
        case 3229:
        case 3230:
        case 3231:
        case 3232:
        case 3233:
        case 3234:
        case 3235:
        case 3236:
        case 6516:
        case 6877:
        case 7313:
        case 7621:
        case 7829:
        case 7971:
        case 8160: return "lan";
        case 3237:
        case 3238:
        case 3239:
        case 3240:
        case 3241:
        case 3242:
        case 3243:
        case 6125:
        case 6185:
        case 6405:
        case 6747:
        case 7922:
        case 7992:
        case 8275: return "lang";
        case 3244:
        case 3245:
        case 3246:
        case 3247:
        case 3248:
        case 3249:
        case 3250:
        case 3251:
        case 3252:
        case 6375:
        case 6532:
        case 7265:
        case 7878:
        case 7909:
        case 8076:
        case 8176:
        case 8518: return "lao";
        case 3253:
        case 3254:
        case 5676:
        case 6323:
        case 6447:
        case 6778:
        case 8706: return "le";
        case 3255:
        case 3256:
        case 3257:
        case 3258:
        case 3259:
        case 3260:
        case 3261:
        case 3262:
        case 3263:
        case 3264:
        case 3265:
        case 5790:
        case 5819:
        case 7048:
        case 7148:
        case 7359:
        case 8171:
        case 8510: return "lei";
        case 3266:
        case 3267:
        case 3268:
        case 6008:
        case 6722: return "leng";
        case 3269:
        case 3270:
        case 3271:
        case 3272:
        case 3273:
        case 3274:
        case 3275:
        case 3276:
        case 3277:
        case 3278:
        case 3279:
        case 3280:
        case 3281:
        case 3282:
        case 3283:
        case 3284:
        case 3285:
        case 3286:
        case 3287:
        case 3288:
        case 3289:
        case 3290:
        case 3291:
        case 3292:
        case 3293:
        case 3294:
        case 3295:
        case 3296:
        case 3297:
        case 3298:
        case 3299:
        case 3300:
        case 3301:
        case 3302:
        case 3303:
        case 3304:
        case 3305:
        case 3306:
        case 3307:
        case 3308:
        case 5719:
        case 5721:
        case 5910:
        case 5962:
        case 6034:
        case 6116:
        case 6181:
        case 6228:
        case 6331:
        case 6406:
        case 6412:
        case 6591:
        case 6706:
        case 6864:
        case 6902:
        case 6946:
        case 7018:
        case 7043:
        case 7074:
        case 7142:
        case 7232:
        case 7261:
        case 7386:
        case 7669:
        case 7734:
        case 7826:
        case 7830:
        case 7914:
        case 8031:
        case 8061:
        case 8063:
        case 8235:
        case 8259:
        case 8327:
        case 8350:
        case 8386:
        case 8447:
        case 8523:
        case 8608:
        case 8666:
        case 8715:
        case 8783: return "li";
        case 3309: return "lia";
        case 3310:
        case 3311:
        case 3312:
        case 3313:
        case 3314:
        case 3315:
        case 3316:
        case 3317:
        case 3318:
        case 3319:
        case 3320:
        case 3321:
        case 3322:
        case 3323:
        case 6192:
        case 6238:
        case 6882:
        case 6905:
        case 7186:
        case 7312:
        case 7371:
        case 7601:
        case 8145:
        case 8147:
        case 8325:
        case 8667: return "lian";
        case 3324:
        case 3325:
        case 3326:
        case 3327:
        case 3328:
        case 3329:
        case 3330:
        case 3331:
        case 3332:
        case 3333:
        case 3334:
        case 6014:
        case 7303:
        case 8552: return "liang";
        case 3335:
        case 3336:
        case 3337:
        case 3338:
        case 3339:
        case 3340:
        case 3341:
        case 3342:
        case 3343:
        case 3344:
        case 3345:
        case 3346:
        case 3347:
        case 6204:
        case 6245:
        case 6458:
        case 6618:
        case 6928:
        case 7152:
        case 7841:
        case 8051: return "liao";
        case 3348:
        case 3349:
        case 3350:
        case 3351:
        case 3352:
        case 5793:
        case 5988:
        case 6270:
        case 6354:
        case 6803:
        case 8483:
        case 8581:
        case 8764: return "lie";
        case 3353:
        case 3354:
        case 3355:
        case 3356:
        case 3357:
        case 3358:
        case 3359:
        case 3360:
        case 3361:
        case 3362:
        case 3363:
        case 6194:
        case 6388:
        case 6555:
        case 6662:
        case 6733:
        case 6964:
        case 7361:
        case 7405:
        case 7602:
        case 7812:
        case 8452:
        case 8579:
        case 8775: return "lin";
        case 3364:
        case 3365:
        case 3366:
        case 3367:
        case 3368:
        case 3369:
        case 3370:
        case 3371:
        case 3372:
        case 3373:
        case 3374:
        case 3375:
        case 3376:
        case 3377:
        case 3378:
        case 5925:
        case 6063:
        case 6342:
        case 6482:
        case 6786:
        case 7117:
        case 7258:
        case 7289:
        case 7418:
        case 8186:
        case 8240:
        case 8465:
        case 8676: return "ling";
        case 3379:
        case 3380:
        case 3381:
        case 3382:
        case 3383:
        case 3384:
        case 3385:
        case 3386:
        case 3387:
        case 3388:
        case 3389:
        case 6815:
        case 6962:
        case 7082:
        case 7124:
        case 7628:
        case 7654:
        case 7919:
        case 7954:
        case 8050:
        case 8644: return "liu";
        case 3390:
        case 3391:
        case 3392:
        case 3393:
        case 3394:
        case 3395:
        case 3396:
        case 3397:
        case 3398:
        case 3399:
        case 3400:
        case 3401:
        case 3402:
        case 3403:
        case 3404:
        case 5966:
        case 6055:
        case 6781:
        case 7171:
        case 7248:
        case 7542:
        case 7735:
        case 8110: return "long";
        case 3405:
        case 3406:
        case 3407:
        case 3408:
        case 3409:
        case 3410:
        case 5745:
        case 6168:
        case 6422:
        case 6548:
        case 7946:
        case 8092:
        case 8179:
        case 8287:
        case 8735: return "lou";
        case 3411:
        case 3412:
        case 3413:
        case 3414:
        case 3415:
        case 3416:
        case 3417:
        case 3418:
        case 3419:
        case 3420:
        case 3421:
        case 3422:
        case 3423:
        case 3424:
        case 3425:
        case 3426:
        case 3427:
        case 3428:
        case 3429:
        case 3430:
        case 3431:
        case 3432:
        case 3433:
        case 3434:
        case 3435:
        case 3436:
        case 3437:
        case 3438:
        case 3439:
        case 3440:
        case 3441:
        case 3442:
        case 3443:
        case 3444:
        case 6744:
        case 7321:
        case 7586:
        case 7918:
        case 7989:
        case 8158: return "lu";
        case 5968:
        case 6303:
        case 6464:
        case 6782:
        case 6843:
        case 6885:
        case 6954:
        case 7220:
        case 7251:
        case 7354:
        case 7391:
        case 7404:
        case 7510:
        case 7545:
        case 7969:
        case 8021:
        case 8056:
        case 8392:
        case 8421:
        case 8652: return "lu";
        case 3445:
        case 3446:
        case 3447:
        case 3448:
        case 3449:
        case 3450:
        case 5785:
        case 7014:
        case 7279:
        case 8029:
        case 8639: return "luan";
        case 3451:
        case 3452: return "lue";
        case 3453:
        case 3454:
        case 3455:
        case 3456:
        case 3457:
        case 3458:
        case 3459:
        case 6480: return "lun";
        case 3460:
        case 3461:
        case 3462:
        case 3463:
        case 3464:
        case 3465:
        case 3466:
        case 3467:
        case 3468:
        case 3469:
        case 3470:
        case 3471:
        case 5732:
        case 5789:
        case 6093:
        case 6259:
        case 6291:
        case 6604:
        case 6788:
        case 6880:
        case 7183:
        case 7301:
        case 7565:
        case 7961:
        case 8107:
        case 8540:
        case 8635: return "luo";
        case 3472:
        case 3473:
        case 3474:
        case 3475:
        case 3476:
        case 3477:
        case 3478:
        case 3479:
        case 3480:
        case 6373:
        case 6579:
        case 7054:
        case 7231:
        case 8301: return "ma";
        case 3481:
        case 3482:
        case 3483:
        case 3484:
        case 3485:
        case 3486:
        case 5929:
        case 6104:
        case 8618: return "mai";
        case 3487:
        case 3488:
        case 3489:
        case 3490:
        case 3491:
        case 3492:
        case 3493:
        case 3494:
        case 3495:
        case 3496:
        case 3497:
        case 3498:
        case 3499:
        case 3500:
        case 3501:
        case 6012:
        case 6503:
        case 7147:
        case 7655:
        case 7960:
        case 8209:
        case 8293:
        case 8709:
        case 8720: return "man";
        case 3502:
        case 3503:
        case 3504:
        case 3505:
        case 3506:
        case 3507:
        case 5888:
        case 6861:
        case 7743:
        case 8294: return "mang";
        case 3508:
        case 3509:
        case 3510:
        case 3511:
        case 3512:
        case 3513:
        case 3514:
        case 3515:
        case 3516:
        case 3517:
        case 3518:
        case 3519:
        case 5783:
        case 6066:
        case 6525:
        case 6787:
        case 7203:
        case 7436:
        case 7483:
        case 7503:
        case 7624:
        case 7714:
        case 7806:
        case 8317:
        case 8754: return "mao";
        case 3520: return "me";
        case 3521:
        case 3522:
        case 3523:
        case 3524:
        case 3525:
        case 3526:
        case 3527:
        case 3528:
        case 3529:
        case 3530:
        case 3531:
        case 3532:
        case 3533:
        case 3534:
        case 3535:
        case 3536:
        case 6114:
        case 6550:
        case 6613:
        case 6828:
        case 6856:
        case 7325:
        case 7949:
        case 8044:
        case 8139:
        case 8740: return "mei";
        case 3537:
        case 3538:
        case 3539:
        case 6249:
        case 7643:
        case 7715:
        case 7845: return "men";
        case 3540:
        case 3541:
        case 3542:
        case 3543:
        case 3544:
        case 3545:
        case 3546:
        case 3547:
        case 5934:
        case 6189:
        case 6211:
        case 6734:
        case 7592:
        case 7770:
        case 8221:
        case 8276:
        case 8323:
        case 8427:
        case 8431: return "meng";
        case 3548:
        case 3549:
        case 3550:
        case 3551:
        case 3552:
        case 3553:
        case 3554:
        case 3555:
        case 3556:
        case 3557:
        case 3558:
        case 3559:
        case 3560:
        case 3561:
        case 5634:
        case 5802:
        case 5855:
        case 6234:
        case 6368:
        case 6455:
        case 6608:
        case 6772:
        case 6921:
        case 6984:
        case 7563:
        case 7682:
        case 8445:
        case 8767:
        case 8771: return "mi";
        case 3562:
        case 3563:
        case 3564:
        case 3565:
        case 3566:
        case 3567:
        case 3568:
        case 3569:
        case 3570:
        case 6770:
        case 6837:
        case 6847:
        case 7579:
        case 7777: return "mian";
        case 3571:
        case 3572:
        case 3573:
        case 3574:
        case 3575:
        case 3576:
        case 3577:
        case 3578:
        case 6387:
        case 6967:
        case 7131:
        case 7149:
        case 7234:
        case 7721:
        case 7780:
        case 8037: return "miao";
        case 3579:
        case 3580:
        case 5631:
        case 6367:
        case 8326:
        case 8390: return "mie";
        case 3581:
        case 3582:
        case 3583:
        case 3584:
        case 3585:
        case 3586:
        case 6069:
        case 6526:
        case 6741:
        case 6793:
        case 7137:
        case 7168:
        case 7175:
        case 7710:
        case 8710:
        case 8628: return "min";
        case 3587:
        case 3588:
        case 3589:
        case 3590:
        case 3591:
        case 3592:
        case 5804:
        case 6088:
        case 6873:
        case 7452:
        case 7808:
        case 8504: return "ming";
        case 3593: return "miu";
        case 3594:
        case 3595:
        case 3596:
        case 3597:
        case 3598:
        case 3599:
        case 3600:
        case 3601:
        case 3602:
        case 3603:
        case 3604:
        case 3605:
        case 3606:
        case 3607:
        case 3608:
        case 3609:
        case 3610:
        case 3611:
        case 3612:
        case 3613:
        case 3614:
        case 3615:
        case 3616:
        case 5851:
        case 6052:
        case 6175:
        case 6641:
        case 7038:
        case 7366:
        case 7950:
        case 7987:
        case 8102:
        case 8182:
        case 8586:
        case 8588:
        case 8765: return "mo";
        case 3617:
        case 3618:
        case 3619:
        case 5716:
        case 6372:
        case 7788:
        case 8254:
        case 8290:
        case 8642: return "mou";
        case 3620:
        case 3621:
        case 3622:
        case 3623:
        case 3624:
        case 3625:
        case 3626:
        case 3627:
        case 3628:
        case 3629:
        case 3630:
        case 3631:
        case 3632:
        case 3633:
        case 3634:
        case 5679:
        case 5973:
        case 6057:
        case 6769:
        case 7504:
        case 6328:
        case 7866: return "mu";
        case 3635:
        case 3636:
        case 3637:
        case 3638:
        case 3639:
        case 3640:
        case 3641:
        case 6264:
        case 7539:
        case 7953:
        case 8136: return "na";
        case 3642:
        case 3643:
        case 3644:
        case 3645:
        case 3646:
        case 5630:
        case 6021:
        case 6133:
        case 7245: return "nai";
        case 3647:
        case 3648:
        case 3649:
        case 6411:
        case 6478:
        case 6479:
        case 7310:
        case 7578:
        case 8279:
        case 8486: return "nan";
        case 3650:
        case 6313:
        case 6476:
        case 6646:
        case 7457: return "nang";
        case 3651:
        case 3652:
        case 3653:
        case 3654:
        case 3655:
        case 5611:
        case 5981:
        case 6346:
        case 6614:
        case 7207:
        case 7748:
        case 7883:
        case 8245: return "nao";
        case 3656:
        case 5811: return "ne";
        case 3657:
        case 3658: return "nei";
        case 3659:
        case 7705: return "nen";
        case 3660: return "neng";
        case 3661:
        case 3662:
        case 3663:
        case 3664:
        case 3665:
        case 3666:
        case 3667:
        case 3668:
        case 3669:
        case 3670:
        case 3671:
        case 5703:
        case 5972:
        case 6605:
        case 6685:
        case 7439:
        case 7627:
        case 7711:
        case 7794:
        case 7874:
        case 8682: return "ni";
        case 3672:
        case 3673:
        case 3674:
        case 3675:
        case 3676:
        case 3677:
        case 3678:
        case 5605:
        case 5994:
        case 7393:
        case 8004:
        case 8651:
        case 8683: return "nian";
        case 3679:
        case 3680: return "niang";
        case 3681:
        case 3682:
        case 6064:
        case 7053:
        case 7569:
        case 8433: return "niao";
        case 3683:
        case 3684:
        case 3685:
        case 3686:
        case 3687:
        case 3688:
        case 3689:
        case 5877:
        case 6233:
        case 6431:
        case 8208:
        case 8411:
        case 8570: return "nie";
        case 3690: return "nin";
        case 3691:
        case 3692:
        case 3693:
        case 3694:
        case 3695:
        case 3696:
        case 3697:
        case 3698:
        case 3699:
        case 3700:
        case 3701:
        case 3702:
        case 5690:
        case 6344:
        case 6924:
        case 8187: return "ning";
        case 3703:
        case 3704:
        case 3705:
        case 3706:
        case 6580:
        case 6678:
        case 7004: return "niu";
        case 3707:
        case 3708:
        case 3709:
        case 3710:
        case 5715:
        case 6370: return "nong";
        case 3711:
        case 3712:
        case 3713:
        case 3714:
        case 8181: return "nou";
        case 6983:
        case 7032:
        case 7059:
        case 7069: return "nu";
        case 7704:
        case 7847:
        case 8412: return "nu";
        case 3715: return "nuan";
        case 3716:
        case 3717: return "nue";
        case 3718:
        case 3719:
        case 3720:
        case 3721:
        case 5748:
        case 6289:
        case 6386:
        case 7927: return "nuo";
        case 3722:
        case 6424:
        case 6462: return "o";
        case 3723:
        case 3724:
        case 3725:
        case 3726:
        case 3727:
        case 3728:
        case 3729:
        case 5809:
        case 6670:
        case 7417:
        case 8178: return "ou";
        case 3730:
        case 3731:
        case 3732:
        case 3733:
        case 3734:
        case 3735:
        case 6166:
        case 7243:
        case 8365: return "pa";
        case 3736:
        case 3737:
        case 3738:
        case 3739:
        case 3740:
        case 3741:
        case 5729:
        case 6169:
        case 6363: return "pai";
        case 3742:
        case 3743:
        case 3744:
        case 3745:
        case 3746:
        case 3747:
        case 3748:
        case 3749:
        case 6761:
        case 6790:
        case 8140:
        case 8165:
        case 8320:
        case 8571: return "pan";
        case 3750:
        case 3751:
        case 3752:
        case 3753:
        case 3754:
        case 6561:
        case 6872:
        case 6944:
        case 8306: return "pang";
        case 3755:
        case 3756:
        case 3757:
        case 3758:
        case 3759:
        case 3760:
        case 3761:
        case 6243:
        case 6583:
        case 6650:
        case 7567:
        case 8069: return "pao";
        case 3762:
        case 3763:
        case 3764:
        case 3765:
        case 3766:
        case 3767:
        case 3768:
        case 3769:
        case 3770:
        case 6446:
        case 6490:
        case 7623:
        case 7934:
        case 8512:
        case 8612: return "pei";
        case 3771:
        case 3772:
        case 6852: return "pen";
        case 3773:
        case 3774:
        case 3775:
        case 3776:
        case 3777:
        case 3778:
        case 3779:
        case 3780:
        case 3781:
        case 3782:
        case 3783:
        case 3784:
        case 3785:
        case 3786:
        case 6001:
        case 6456:
        case 6681:
        case 8318: return "peng";
        case 3787:
        case 3788:
        case 3789:
        case 3790:
        case 3791:
        case 3792:
        case 3793:
        case 3794:
        case 3795:
        case 3796:
        case 3797:
        case 3798:
        case 3799:
        case 3800:
        case 3801:
        case 3802:
        case 3803:
        case 3804:
        case 3805:
        case 3806:
        case 3807:
        case 3808:
        case 3809:
        case 5607:
        case 5682:
        case 5880:
        case 5892:
        case 5915:
        case 5960:
        case 6017:
        case 6037:
        case 6308:
        case 6472:
        case 6647:
        case 6836:
        case 7039:
        case 7102:
        case 7233:
        case 7422:
        case 7802:
        case 7828:
        case 7875:
        case 8117:
        case 8166:
        case 8223:
        case 8271:
        case 8589: return "pi";
        case 3810:
        case 3811:
        case 3812:
        case 3813:
        case 5850:
        case 7073:
        case 7490:
        case 7561:
        case 8470:
        case 8568: return "pian";
        case 3814:
        case 3815:
        case 3816:
        case 3817:
        case 5666:
        case 6449:
        case 7046:
        case 7146:
        case 7372:
        case 7809:
        case 8310: return "piao";
        case 3818:
        case 3819:
        case 6054:
        case 7513: return "pie";
        case 3820:
        case 3821:
        case 3822:
        case 3823:
        case 3824:
        case 7041:
        case 6253:
        case 7016:
        case 7315:
        case 7482:
        case 8213: return "pin";
        case 3825:
        case 3826:
        case 3827:
        case 3828:
        case 3829:
        case 3830:
        case 3831:
        case 3832:
        case 3833:
        case 5723:
        case 7019:
        case 7250:
        case 8650: return "ping";
        case 3834:
        case 3835:
        case 3836:
        case 3837:
        case 3838:
        case 3839:
        case 3840:
        case 3841:
        case 5647:
        case 5922:
        case 7174:
        case 7423:
        case 7839:
        case 7862:
        case 8011:
        case 8345: return "po";
        case 3842:
        case 5786:
        case 6269: return "pou";
        case 3843:
        case 3844:
        case 3845:
        case 3846:
        case 3847:
        case 3848:
        case 3849:
        case 3850:
        case 3851:
        case 3852:
        case 3853:
        case 3854:
        case 3855:
        case 3856:
        case 3857:
        case 5773:
        case 6459:
        case 6863:
        case 6907:
        case 7217:
        case 7511:
        case 7968:
        case 7972:
        case 8575: return "pu";
        case 3858:
        case 3859:
        case 3860:
        case 3861:
        case 3862:
        case 3863:
        case 3864:
        case 3865:
        case 3866:
        case 3867:
        case 3868:
        case 3869:
        case 3870:
        case 3871:
        case 3872:
        case 3873:
        case 3874:
        case 3875:
        case 3876:
        case 3877:
        case 3878:
        case 3879:
        case 3880:
        case 3881:
        case 3882:
        case 3883:
        case 3884:
        case 3885:
        case 3886:
        case 3887:
        case 3888:
        case 3889:
        case 3890:
        case 3891:
        case 3892:
        case 3893:
        case 5633:
        case 5725:
        case 5963:
        case 6027:
        case 6046:
        case 6089:
        case 6129:
        case 6134:
        case 6161:
        case 6213:
        case 6366:
        case 6450:
        case 6508:
        case 6510:
        case 6764:
        case 6831:
        case 7075:
        case 7118:
        case 7187:
        case 7189:
        case 7229:
        case 7271:
        case 7342:
        case 7440:
        case 7605:
        case 7687:
        case 7712:
        case 7751:
        case 8193:
        case 8251:
        case 8264:
        case 8475:
        case 8476:
        case 8572:
        case 8702:
        case 8772: return "qi";
        case 3894:
        case 3901:
        case 3902:
        case 6154:
        case 8736: return "qia";
        case 3903:
        case 3904:
        case 3905:
        case 3906:
        case 3907:
        case 3908:
        case 3909:
        case 3910:
        case 3911:
        case 3912:
        case 3913:
        case 3914:
        case 3915:
        case 3916:
        case 3917:
        case 3918:
        case 3919:
        case 3920:
        case 3921:
        case 3922:
        case 3923:
        case 3924:
        case 5727:
        case 5761:
        case 5868:
        case 6023:
        case 6045:
        case 6071:
        case 6271:
        case 6509:
        case 6705:
        case 6727:
        case 6925:
        case 6926:
        case 6929:
        case 7155:
        case 7293:
        case 7541:
        case 7709:
        case 7852:
        case 8215:
        case 8373: return "qian";
        case 3925:
        case 3926:
        case 3927:
        case 3928:
        case 3929:
        case 3930:
        case 3931:
        case 3932:
        case 6762:
        case 7045:
        case 7341:
        case 7408:
        case 7633:
        case 7926:
        case 7947:
        case 7974:
        case 8163:
        case 8262:
        case 8439:
        case 8536: return "qiang";
        case 3933:
        case 3934:
        case 3935:
        case 3936:
        case 3937:
        case 3938:
        case 3939:
        case 3940:
        case 3941:
        case 3942:
        case 3943:
        case 3944:
        case 3945:
        case 3946:
        case 3947:
        case 5668:
        case 5829:
        case 5859:
        case 6081:
        case 6529:
        case 6724:
        case 6730:
        case 7352:
        case 7745:
        case 8546:
        case 8719: return "qiao";
        case 3948:
        case 3949:
        case 3950:
        case 3951:
        case 3952:
        case 5907:
        case 6711:
        case 7010:
        case 7492:
        case 7938:
        case 8370: return "qie";
        case 3953:
        case 3954:
        case 3955:
        case 3956:
        case 3957:
        case 3958:
        case 3959:
        case 3960:
        case 3961:
        case 3962:
        case 3963:
        case 6043:
        case 6276:
        case 6336:
        case 6426:
        case 6463:
        case 6858:
        case 7353:
        case 7923:
        case 8291:
        case 8432: return "qin";
        case 3964:
        case 3965:
        case 3966:
        case 3967:
        case 3968:
        case 3969:
        case 3970:
        case 3971:
        case 3972:
        case 3973:
        case 3974:
        case 3975:
        case 3976:
        case 6060:
        case 6485:
        case 7349:
        case 7764:
        case 8263:
        case 8332:
        case 8368:
        case 8605:
        case 8675:
        case 8784: return "qing";
        case 3977:
        case 3978:
        case 5886:
        case 6068:
        case 8123:
        case 8243:
        case 8344:
        case 8528:
        case 8638: return "qiong";
        case 3979:
        case 3980:
        case 3981:
        case 3982:
        case 3983:
        case 3984:
        case 3985:
        case 3986:
        case 5720:
        case 5947:
        case 6576:
        case 6848:
        case 6947:
        case 6957:
        case 7317:
        case 7468:
        case 8216:
        case 8239:
        case 8288:
        case 8435:
        case 8460:
        case 8690:
        case 8792: return "qiu";
        case 3987:
        case 3988:
        case 3989:
        case 3990:
        case 3991:
        case 3992:
        case 3993:
        case 3994:
        case 3995:
        case 3996:
        case 3997:
        case 3998:
        case 3999:
        case 4000:
        case 4001:
        case 4002:
        case 4003:
        case 4004:
        case 4005:
        case 5816:
        case 5930:
        case 6201:
        case 6230:
        case 6511:
        case 6573:
        case 6754:
        case 7219:
        case 7479:
        case 7512:
        case 7552:
        case 7678:
        case 7765:
        case 8119:
        case 8248:
        case 8329:
        case 8480:
        case 8636:
        case 8781: return "qu";
        case 4006:
        case 4007:
        case 4008:
        case 4009:
        case 4010:
        case 4011:
        case 4012:
        case 4013:
        case 4014:
        case 4015:
        case 4016:
        case 5825:
        case 6085:
        case 6575:
        case 6710:
        case 7125:
        case 7390:
        case 7816:
        case 7893:
        case 8273:
        case 8360:
        case 8760: return "quan";
        case 4017:
        case 4018:
        case 4019:
        case 4020:
        case 4021:
        case 4022:
        case 4023:
        case 4024:
        case 6755:
        case 6758:
        case 7708: return "que";
        case 4025:
        case 4026:
        case 6950: return "qun";
        case 4027:
        case 4028:
        case 4029:
        case 4030:
        case 6059:
        case 8237:
        case 8755: return "ran";
        case 4031:
        case 4032:
        case 4033:
        case 4034:
        case 4035:
        case 7692:
        case 8006: return "rang";
        case 4036:
        case 4037:
        case 4038:
        case 6073:
        case 7012:
        case 7267: return "rao";
        case 4039:
        case 4040: return "re";
        case 4041:
        case 4042:
        case 4043:
        case 4044:
        case 4045:
        case 4046:
        case 4047:
        case 4048:
        case 4049:
        case 4050:
        case 5673:
        case 5680:
        case 6083:
        case 6156:
        case 6631:
        case 7377:
        case 7994:
        case 8137: return "ren";
        case 4051:
        case 4052: return "reng";
        case 4053: return "ri";
        case 4054:
        case 4055:
        case 4056:
        case 4057:
        case 4058:
        case 4059:
        case 4060:
        case 4061:
        case 4062:
        case 4063:
        case 6541:
        case 6585:
        case 7337:
        case 7532:
        case 8278: return "rong";
        case 4064:
        case 4065:
        case 4066:
        case 8459:
        case 8569:
        case 8723: return "rou";
        case 4067:
        case 4068:
        case 4069:
        case 4070:
        case 4071:
        case 4072:
        case 4073:
        case 4074:
        case 4075:
        case 4076:
        case 6174:
        case 6224:
        case 6473:
        case 6818:
        case 6865:
        case 6906:
        case 7140:
        case 7908:
        case 8164:
        case 8212: return "ru";
        case 4077:
        case 4078:
        case 7535: return "ruan";
        case 4079:
        case 4080:
        case 4081:
        case 6039:
        case 6208:
        case 7236:
        case 7803:
        case 8224: return "rui";
        case 4082:
        case 4083: return "run";
        case 4084:
        case 4085:
        case 5728:
        case 8372: return "ruo";
        case 4086:
        case 4087:
        case 4088:
        case 5606:
        case 5677:
        case 7493:
        case 7559:
        case 7610: return "sa";
        case 4089:
        case 4090:
        case 4091:
        case 4092:
        case 6471: return "sai";
        case 4093:
        case 4094:
        case 4101:
        case 4102:
        case 6644:
        case 6763:
        case 7507:
        case 8454: return "san";
        case 4103:
        case 4104:
        case 4105:
        case 6290:
        case 7763:
        case 8210: return "sang";
        case 4106:
        case 4107:
        case 4108:
        case 4109:
        case 6003:
        case 7150:
        case 7156:
        case 7593:
        case 8094:
        case 8694: return "sao";
        case 4110:
        case 4111:
        case 4112:
        case 5636:
        case 7904:
        case 8003: return "se";
        case 4113: return "sen";
        case 4114: return "seng";
        case 4115:
        case 4116:
        case 4117:
        case 4118:
        case 4119:
        case 4120:
        case 4121:
        case 4122:
        case 4123:
        case 6394:
        case 7606:
        case 7901:
        case 8080:
        case 8436:
        case 8614:
        case 8672: return "sha";
        case 4124:
        case 4125:
        case 8507: return "shai";
        case 4126:
        case 4127:
        case 4128:
        case 4129:
        case 4130:
        case 4131:
        case 4132:
        case 4133:
        case 4134:
        case 4135:
        case 4136:
        case 4137:
        case 4138:
        case 4139:
        case 4140:
        case 4141:
        case 5663:
        case 5808:
        case 5923:
        case 5979:
        case 6047:
        case 6574:
        case 6890:
        case 7009:
        case 7051:
        case 7083:
        case 7594:
        case 7844:
        case 8062:
        case 8321:
        case 8414:
        case 8539:
        case 8713: return "shan";
        case 4142:
        case 4143:
        case 4144:
        case 4145:
        case 4146:
        case 4147:
        case 4148:
        case 4149:
        case 5980:
        case 7120:
        case 7368:
        case 7656:
        case 8592: return "shang";
        case 4150:
        case 4151:
        case 4152:
        case 4153:
        case 4154:
        case 4155:
        case 4156:
        case 4157:
        case 4158:
        case 4159:
        case 4160:
        case 5931:
        case 6070:
        case 6891:
        case 7228:
        case 8366:
        case 8425: return "shao";
        case 4161:
        case 4162:
        case 4163:
        case 4164:
        case 4165:
        case 4166:
        case 4167:
        case 4168:
        case 4169:
        case 4170:
        case 4171:
        case 4172:
        case 5639:
        case 5760:
        case 6606:
        case 6860:
        case 7608:
        case 7820:
        case 8774: return "she";
        case 4173:
        case 4174:
        case 4175:
        case 4176:
        case 4177:
        case 4178:
        case 4179:
        case 4180:
        case 4181:
        case 4182:
        case 4183:
        case 4184:
        case 4185:
        case 4186:
        case 4187:
        case 4188:
        case 5837:
        case 6123:
        case 6351:
        case 6841:
        case 7309:
        case 7547:
        case 7982:
        case 8255: return "shen";
        case 4189:
        case 4190:
        case 4191:
        case 4192:
        case 4193:
        case 4194:
        case 4195:
        case 4196:
        case 4197:
        case 4198:
        case 4199:
        case 4200:
        case 4201:
        case 4202:
        case 4203:
        case 4204:
        case 4205:
        case 6551:
        case 7441:
        case 7782:
        case 8347: return "sheng";
        case 4206:
        case 4207:
        case 4208:
        case 4209:
        case 4210:
        case 4211:
        case 4212:
        case 4213:
        case 4214:
        case 4215:
        case 4216:
        case 4217:
        case 4218:
        case 4219:
        case 4220:
        case 4221:
        case 4222:
        case 4223:
        case 4224:
        case 4225:
        case 4226:
        case 4227:
        case 4228:
        case 4229:
        case 4230:
        case 4231:
        case 4232:
        case 4233:
        case 4234:
        case 4235:
        case 4236:
        case 4237:
        case 4238:
        case 4239:
        case 4240:
        case 4241:
        case 4242:
        case 4243:
        case 4244:
        case 4245:
        case 4246:
        case 4247:
        case 4248:
        case 4249:
        case 4250:
        case 4251:
        case 4252:
        case 5854:
        case 5985:
        case 6110:
        case 6173:
        case 6317:
        case 6627:
        case 7388:
        case 7459:
        case 7634:
        case 7674:
        case 7870:
        case 8307:
        case 8334:
        case 8363:
        case 8525:
        case 8669:
        case 8685: return "shi";
        case 4253:
        case 4254:
        case 4255:
        case 4256:
        case 4257:
        case 4258:
        case 4259:
        case 4260:
        case 4261:
        case 4262:
        case 6248:
        case 6587:
        case 7123:
        case 8428: return "shou";
        case 4263:
        case 4264:
        case 4265:
        case 4266:
        case 4267:
        case 4268:
        case 4269:
        case 4270:
        case 4271:
        case 4272:
        case 4273:
        case 4274:
        case 4275:
        case 4276:
        case 4277:
        case 4278:
        case 4279:
        case 4280:
        case 4281:
        case 4282:
        case 4283:
        case 4284:
        case 4285:
        case 4286:
        case 4287:
        case 4288:
        case 4289:
        case 4290:
        case 4291:
        case 4292:
        case 4293:
        case 4294:
        case 4295:
        case 4296:
        case 4297:
        case 4298:
        case 4299:
        case 4300:
        case 4301:
        case 5731:
        case 5951:
        case 6136:
        case 6283:
        case 6780:
        case 6888:
        case 7013:
        case 7103:
        case 7508:
        case 7582:
        case 7615:
        case 7988: return "shu";
        case 4302:
        case 4303:
        case 6407: return "shua";
        case 4304:
        case 4305:
        case 4306:
        case 4307:
        case 8316: return "shuai";
        case 4308:
        case 4309:
        case 6737:
        case 6844: return "shuan";
        case 4310:
        case 4311:
        case 4312:
        case 7055: return "shuang";
        case 4313:
        case 4314:
        case 4315:
        case 4316: return "shui";
        case 4317:
        case 4318:
        case 4319:
        case 4320: return "shun";
        case 4321:
        case 4322:
        case 4323:
        case 4324:
        case 6184:
        case 6287:
        case 6989:
        case 7335:
        case 7869: return "shuo";
        case 4325:
        case 4326:
        case 4327:
        case 4328:
        case 4329:
        case 4330:
        case 4331:
        case 4332:
        case 4333:
        case 4334:
        case 4335:
        case 4336:
        case 4337:
        case 4338:
        case 4339:
        case 4340:
        case 5643:
        case 5778:
        case 5944:
        case 6348:
        case 6765:
        case 6784:
        case 6889:
        case 7006:
        case 7065:
        case 7133:
        case 7665:
        case 7675:
        case 7940:
        case 8024:
        case 8174:
        case 8247:
        case 8351: return "si";
        case 4341:
        case 4342:
        case 4343:
        case 4344:
        case 4345:
        case 4346:
        case 4347:
        case 4348:
        case 5801:
        case 6131:
        case 6534:
        case 6552:
        case 6676:
        case 6704:
        case 6833:
        case 8121: return "song";
        case 4349:
        case 4350:
        case 4351:
        case 4352:
        case 5937:
        case 6220:
        case 6418:
        case 6453:
        case 6640:
        case 6849:
        case 7612:
        case 7804:
        case 7943:
        case 8284: return "sou";
        case 4353:
        case 4354:
        case 4355:
        case 4356:
        case 4357:
        case 4358:
        case 4359:
        case 4360:
        case 4361:
        case 4362:
        case 4363:
        case 4364:
        case 5777:
        case 5853:
        case 6188:
        case 6428:
        case 6726:
        case 6819:
        case 8389:
        case 8602:
        case 8653: return "su";
        case 4365:
        case 4366:
        case 4367:
        case 6601: return "suan";
        case 4368:
        case 4369:
        case 4370:
        case 4371:
        case 4372:
        case 4373:
        case 4374:
        case 4375:
        case 4376:
        case 4377:
        case 4378:
        case 5839:
        case 6120:
        case 6901:
        case 6968:
        case 7661:
        case 7785:
        case 7801: return "sui";
        case 4379:
        case 4380:
        case 4381:
        case 6105:
        case 6588:
        case 6624:
        case 7330:
        case 8632: return "sun";
        case 4382:
        case 4383:
        case 4384:
        case 4385:
        case 4386:
        case 4387:
        case 4388:
        case 4389:
        case 6379:
        case 6434:
        case 6442:
        case 7022:
        case 7288:
        case 7792:
        case 8440: return "suo";
        case 4390:
        case 4391:
        case 4392:
        case 4393:
        case 4394:
        case 4395:
        case 4396:
        case 4397:
        case 4398:
        case 4399:
        case 4400:
        case 4401:
        case 4402:
        case 4403:
        case 4404:
        case 6743:
        case 6866:
        case 6961:
        case 7329:
        case 7719:
        case 7872:
        case 8533:
        case 8703: return "ta";
        case 4405:
        case 4406:
        case 4407:
        case 4408:
        case 4409:
        case 4410:
        case 4411:
        case 4412:
        case 4413:
        case 5902:
        case 6223:
        case 6330:
        case 7070:
        case 7536:
        case 7638:
        case 7849:
        case 8544:
        case 8656: return "tai";
        case 4414:
        case 4415:
        case 4416:
        case 4417:
        case 4418:
        case 4419:
        case 4420:
        case 4421:
        case 4422:
        case 4423:
        case 4424:
        case 4425:
        case 4426:
        case 4427:
        case 4428:
        case 4429:
        case 4430:
        case 4431:
        case 5916:
        case 6903:
        case 7428:
        case 7694:
        case 7867:
        case 7936:
        case 8191: return "tan";
        case 4432:
        case 4433:
        case 4434:
        case 4435:
        case 4436:
        case 4437:
        case 4438:
        case 4439:
        case 4440:
        case 4441:
        case 4442:
        case 4443:
        case 4444:
        case 5746:
        case 6491:
        case 6628:
        case 6871:
        case 7209:
        case 7344:
        case 7906:
        case 7959:
        case 8177:
        case 8305:
        case 8311:
        case 8442:
        case 8517: return "tang";
        case 4445:
        case 4446:
        case 4447:
        case 4448:
        case 4449:
        case 4450:
        case 4451:
        case 4452:
        case 4453:
        case 4454:
        case 4455:
        case 5627:
        case 6391:
        case 6812:
        case 7226:
        case 7666:
        case 8750: return "tao";
        case 4456:
        case 6315:
        case 7693:
        case 7911: return "te";
        case 4457:
        case 4458:
        case 4459:
        case 4460:
        case 7588: return "teng";
        case 4461:
        case 4462:
        case 4463:
        case 4464:
        case 4465:
        case 4466:
        case 4467:
        case 4468:
        case 4469:
        case 4470:
        case 4471:
        case 4472:
        case 4473:
        case 4474:
        case 4475:
        case 5735:
        case 6709:
        case 6949:
        case 7130:
        case 8035:
        case 8151:
        case 8514: return "ti";
        case 4476:
        case 4477:
        case 4478:
        case 4479:
        case 4480:
        case 4481:
        case 4482:
        case 4483:
        case 6261:
        case 6735:
        case 6757:
        case 7369:
        case 7817: return "tian";
        case 4484:
        case 4485:
        case 4486:
        case 4487:
        case 4488:
        case 5712:
        case 7686:
        case 8127:
        case 8272:
        case 8352:
        case 8448:
        case 8622:
        case 8670:
        case 8756: return "tiao";
        case 4489:
        case 4490:
        case 4491:
        case 6138:
        case 8749: return "tie";
        case 4492:
        case 4493:
        case 4494:
        case 4495:
        case 4496:
        case 4497:
        case 4498:
        case 4499:
        case 4500:
        case 4501:
        case 4502:
        case 4503:
        case 4504:
        case 4505:
        case 4506:
        case 4507:
        case 6080:
        case 6167:
        case 7035:
        case 7272:
        case 7890:
        case 8249:
        case 8610: return "ting";
        case 4508:
        case 4509:
        case 4510:
        case 4511:
        case 4512:
        case 4513:
        case 4514:
        case 4515:
        case 4516:
        case 4517:
        case 4518:
        case 4519:
        case 4520:
        case 5701:
        case 5758:
        case 6077:
        case 6444:
        case 6690:
        case 6892:
        case 7737: return "tong";
        case 4521:
        case 4522:
        case 4523:
        case 4524:
        case 5779:
        case 7855:
        case 7822:
        case 8727: return "tou";
        case 4525:
        case 4526:
        case 4527:
        case 4528:
        case 4529:
        case 4530:
        case 4531:
        case 4532:
        case 4533:
        case 4534:
        case 4535:
        case 6002:
        case 6117:
        case 6143:
        case 7842:
        case 8509: return "tu";
        case 4536:
        case 4537:
        case 6250:
        case 6972: return "tuan";
        case 4538:
        case 4539:
        case 4540:
        case 4541:
        case 4542:
        case 4543:
        case 7653: return "tui";
        case 4544:
        case 4545:
        case 4546:
        case 5759:
        case 6629:
        case 7453:
        case 7564: return "tun";
        case 4547:
        case 4548:
        case 4549:
        case 4550:
        case 4551:
        case 4552:
        case 4553:
        case 4554:
        case 4555:
        case 4556:
        case 4557:
        case 5617:
        case 5702:
        case 5971:
        case 6653:
        case 6791:
        case 7256:
        case 7262:
        case 7350:
        case 7740:
        case 8374:
        case 8502:
        case 8541:
        case 8630: return "tuo";
        case 4558:
        case 4559:
        case 4560:
        case 4561:
        case 4562:
        case 4563:
        case 4564:
        case 5684:
        case 7020:
        case 7580: return "wa";
        case 4565:
        case 4566: return "wai";
        case 4567:
        case 4568:
        case 4569:
        case 4570:
        case 4571:
        case 4572:
        case 4573:
        case 4574:
        case 4575:
        case 4576:
        case 4577:
        case 4578:
        case 4579:
        case 4580:
        case 4581:
        case 4582:
        case 4583:
        case 5664:
        case 6025:
        case 6150:
        case 7093:
        case 7126:
        case 7194:
        case 7568:
        case 7821:
        case 8274: return "wan";
        case 4584:
        case 4585:
        case 4586:
        case 4587:
        case 4588:
        case 4589:
        case 4590:
        case 4591:
        case 4592:
        case 4593:
        case 5672:
        case 6244:
        case 6715:
        case 7394:
        case 8745: return "wang";
        case 4594:
        case 4595:
        case 4596:
        case 4597:
        case 4598:
        case 4599:
        case 4600:
        case 4601:
        case 4602:
        case 4603:
        case 4604:
        case 4605:
        case 4606:
        case 4607:
        case 4608:
        case 4609:
        case 4610:
        case 4611:
        case 4612:
        case 4613:
        case 4614:
        case 4615:
        case 4616:
        case 4617:
        case 4618:
        case 4619:
        case 4620:
        case 4621:
        case 4622:
        case 4623:
        case 4624:
        case 4625:
        case 4626:
        case 4627:
        case 4628:
        case 4629:
        case 4630:
        case 4631:
        case 4632:
        case 5743:
        case 5835:
        case 5881:
        case 5883:
        case 6158:
        case 6217:
        case 6477:
        case 6488:
        case 6501:
        case 6543:
        case 6545:
        case 6611:
        case 6612:
        case 6739:
        case 6777:
        case 6802:
        case 6822:
        case 6952:
        case 7024:
        case 7166:
        case 7224:
        case 7406:
        case 7631:
        case 7648:
        case 8084:
        case 8426:
        case 8659: return "wei";
        case 4633:
        case 4634:
        case 4635:
        case 4636:
        case 4637:
        case 4638:
        case 4639:
        case 4640:
        case 4641:
        case 4642:
        case 5656:
        case 6751:
        case 6775:
        case 7223:
        case 8609: return "wen";
        case 4643:
        case 4644:
        case 4645:
        case 6178:
        case 6219: return "weng";
        case 4646:
        case 4647:
        case 4648:
        case 4649:
        case 4650:
        case 4651:
        case 4652:
        case 4653:
        case 4654:
        case 5733:
        case 6111:
        case 6502:
        case 6855:
        case 7531:
        case 7750:
        case 8627: return "wo";
        case 4655:
        case 4656:
        case 4657:
        case 4658:
        case 4659:
        case 4660:
        case 4661:
        case 4662:
        case 4663:
        case 4664:
        case 4665:
        case 4666:
        case 4667:
        case 4668:
        case 4669:
        case 4670:
        case 4671:
        case 4672:
        case 4673:
        case 4674:
        case 4675:
        case 4676:
        case 4677:
        case 4678:
        case 4679:
        case 4680:
        case 4681:
        case 4682:
        case 4683:
        case 5603:
        case 5685:
        case 5867:
        case 5889:
        case 5956:
        case 6044:
        case 6377:
        case 6648:
        case 6668:
        case 6672:
        case 6820:
        case 6927:
        case 6935:
        case 6992:
        case 7036:
        case 7080:
        case 7227:
        case 7485:
        case 7641:
        case 8036:
        case 8045:
        case 8077:
        case 8258:
        case 8640:
        case 8789: return "wu";
        case 4684:
        case 4685:
        case 4686:
        case 4687:
        case 4688:
        case 4689:
        case 4690:
        case 4691:
        case 4692:
        case 4693:
        case 4694:
        case 4695:
        case 4696:
        case 4697:
        case 4698:
        case 4699:
        case 4700:
        case 4701:
        case 4702:
        case 4703:
        case 4704:
        case 4705:
        case 4706:
        case 4707:
        case 4708:
        case 4709:
        case 4710:
        case 4711:
        case 4712:
        case 4713:
        case 4714:
        case 4715:
        case 4716:
        case 4717:
        case 4718:
        case 4719:
        case 4720:
        case 4721:
        case 4722:
        case 4723:
        case 4724:
        case 5750:
        case 5766:
        case 5884:
        case 5913:
        case 6130:
        case 6163:
        case 6191:
        case 6241:
        case 6381:
        case 6567:
        case 6630:
        case 6750:
        case 6827:
        case 6832:
        case 6979:
        case 7050:
        case 7184:
        case 7356:
        case 7456:
        case 7474:
        case 7604:
        case 7668:
        case 7689:
        case 7691:
        case 8010:
        case 8122:
        case 8265:
        case 8303:
        case 8312:
        case 8410:
        case 8424:
        case 8443:
        case 8449:
        case 8466:
        case 8521:
        case 8791: return "xi";
        case 4725:
        case 4726:
        case 4727:
        case 4728:
        case 4729:
        case 4730:
        case 4731:
        case 4732:
        case 4733:
        case 4734:
        case 4735:
        case 4736:
        case 4737:
        case 6340:
        case 6582:
        case 6958:
        case 7206:
        case 7252:
        case 7744:
        case 8093:
        case 8333:
        case 8779: return "xia";
        case 4738:
        case 4739:
        case 4740:
        case 4741:
        case 4742:
        case 4743:
        case 4744:
        case 4745:
        case 4746:
        case 4747:
        case 4748:
        case 4749:
        case 4750:
        case 4751:
        case 4752:
        case 4753:
        case 4754:
        case 4755:
        case 4756:
        case 4757:
        case 4758:
        case 4759:
        case 4760:
        case 4761:
        case 4762:
        case 4763:
        case 5794:
        case 5823:
        case 6040:
        case 6118:
        case 6226:
        case 6513:
        case 6593:
        case 6963:
        case 7021:
        case 7515:
        case 7662:
        case 7676:
        case 8034:
        case 8079:
        case 8225:
        case 8358:
        case 8444:
        case 8503:
        case 8548:
        case 8549:
        case 8617: return "xian";
        case 4764:
        case 4765:
        case 4766:
        case 4767:
        case 4768:
        case 4769:
        case 4770:
        case 4771:
        case 4772:
        case 4773:
        case 4774:
        case 4775:
        case 4776:
        case 4777:
        case 4778:
        case 4779:
        case 4780:
        case 4781:
        case 4782:
        case 4783:
        case 6028:
        case 6157:
        case 6635:
        case 6652:
        case 7088:
        case 7129:
        case 8313:
        case 8663:
        case 8747: return "xiang";
        case 4784:
        case 4785:
        case 4786:
        case 4787:
        case 4788:
        case 4789:
        case 4790:
        case 4791:
        case 4792:
        case 4793:
        case 4794:
        case 4795:
        case 4796:
        case 4797:
        case 4798:
        case 4799:
        case 4800:
        case 4801:
        case 4802:
        case 4803:
        case 4804:
        case 4805:
        case 4806:
        case 4807:
        case 6356:
        case 6537:
        case 6876:
        case 6948:
        case 7071:
        case 7115:
        case 7241:
        case 7253:
        case 8257:
        case 8367:
        case 8379:
        case 8744: return "xiao";
        case 4808:
        case 4809:
        case 4810:
        case 4811:
        case 4812:
        case 4813:
        case 4814:
        case 4815:
        case 4816:
        case 4817:
        case 4818:
        case 4819:
        case 4820:
        case 4821:
        case 4822:
        case 4823:
        case 4824:
        case 4825:
        case 4826:
        case 4827:
        case 4828:
        case 5615:
        case 5741:
        case 5784:
        case 5936:
        case 5938:
        case 6215:
        case 6302:
        case 6619:
        case 6661:
        case 6845:
        case 6912:
        case 6966:
        case 7105:
        case 7151:
        case 7331:
        case 7339:
        case 8583: return "xie";
        case 4829:
        case 4830:
        case 4831:
        case 4832:
        case 4833:
        case 4834:
        case 4835:
        case 4836:
        case 4837:
        case 4838:
        case 5622:
        case 6016:
        case 6664:
        case 7431:
        case 7607:
        case 8646: return "xin";
        case 4839:
        case 4840:
        case 4841:
        case 4842:
        case 4843:
        case 4844:
        case 4845:
        case 4846:
        case 4847:
        case 4848:
        case 4849:
        case 4850:
        case 4851:
        case 4852:
        case 4853:
        case 5874:
        case 6084:
        case 6309:
        case 6712:
        case 7742: return "xing";
        case 4854:
        case 4855:
        case 4856:
        case 4857:
        case 4858:
        case 4859:
        case 4860:
        case 6026: return "xiong";
        case 4861:
        case 4862:
        case 4863:
        case 4864:
        case 4865:
        case 4866:
        case 4867:
        case 4868:
        case 4869:
        case 6361:
        case 6522:
        case 6642:
        case 6651:
        case 6869:
        case 8028:
        case 8587:
        case 8759: return "xiu";
        case 4870:
        case 4871:
        case 4872:
        case 4873:
        case 4874:
        case 4875:
        case 4876:
        case 4877:
        case 4878:
        case 4879:
        case 4880:
        case 4881:
        case 4882:
        case 4883:
        case 4884:
        case 4885:
        case 4886:
        case 4887:
        case 4888:
        case 5828:
        case 5935:
        case 5955:
        case 6203:
        case 6810:
        case 6851:
        case 7179:
        case 7282:
        case 7667:
        case 7776:
        case 8167:
        case 8458:
        case 8515: return "xu";
        case 4889:
        case 4890:
        case 4891:
        case 4892:
        case 4893:
        case 4894:
        case 4895:
        case 4896:
        case 4897:
        case 4898:
        case 4899:
        case 4900:
        case 4901:
        case 4902:
        case 4903:
        case 4904:
        case 5756:
        case 5846:
        case 6170:
        case 6279:
        case 6789:
        case 6854:
        case 6886:
        case 7215:
        case 7324:
        case 7449:
        case 7637:
        case 7651:
        case 7759:
        case 7871:
        case 7964:
        case 8071: return "xuan";
        case 4905:
        case 4906:
        case 4907:
        case 4908:
        case 4909:
        case 4910:
        case 5842:
        case 7720:
        case 8529:
        case 8708: return "xue";
        case 4911:
        case 4912:
        case 4913:
        case 4914:
        case 4915:
        case 4916:
        case 4917:
        case 4918:
        case 4919:
        case 4920:
        case 4921:
        case 4922:
        case 4923:
        case 4924:
        case 5767:
        case 5908:
        case 5987:
        case 6087:
        case 6101:
        case 6206:
        case 6225:
        case 6530:
        case 6563:
        case 6620:
        case 6694:
        case 6813:
        case 6817:
        case 6970:
        case 7454:
        case 8131:
        case 8524:
        case 8664: return "xun";
        case 4925:
        case 4926:
        case 4927:
        case 4928:
        case 4929:
        case 4930:
        case 4931:
        case 4932:
        case 4933:
        case 4934:
        case 4935:
        case 4936:
        case 4937:
        case 4938:
        case 4939:
        case 4940:
        case 5683:
        case 5975:
        case 6275:
        case 6512:
        case 6934:
        case 7011:
        case 7180:
        case 7266:
        case 7518:
        case 7728:
        case 7793:
        case 8073: return "ya";
        case 4941:
        case 4942:
        case 4943:
        case 4944:
        case 4945:
        case 4946:
        case 4947:
        case 4948:
        case 4949:
        case 4950:
        case 4951:
        case 4952:
        case 4953:
        case 4954:
        case 4955:
        case 4956:
        case 4957:
        case 4958:
        case 4959:
        case 4960:
        case 4961:
        case 4962:
        case 4963:
        case 4964:
        case 4965:
        case 4966:
        case 4967:
        case 4968:
        case 4969:
        case 4970:
        case 4971:
        case 4972:
        case 4973:
        case 5641:
        case 5645:
        case 5718:
        case 5740:
        case 5780:
        case 5805:
        case 5861:
        case 5917:
        case 5919:
        case 6030:
        case 6146:
        case 6535:
        case 6691:
        case 6738:
        case 6753:
        case 6846:
        case 6857:
        case 6991:
        case 7044:
        case 7192:
        case 7360:
        case 7444:
        case 7557:
        case 7645:
        case 7827:
        case 8359:
        case 8506:
        case 8742:
        case 8748:
        case 8790: return "yan";
        case 4974:
        case 4975:
        case 4976:
        case 4977:
        case 4978:
        case 4979:
        case 4980:
        case 4981:
        case 4982:
        case 4983:
        case 4984:
        case 4985:
        case 4986:
        case 4987:
        case 4988:
        case 4989:
        case 4990:
        case 6564:
        case 6683:
        case 6783:
        case 7630:
        case 7640:
        case 7706:
        case 8253:
        case 8717: return "yang";
        case 4991:
        case 4992:
        case 4993:
        case 4994:
        case 4995:
        case 4996:
        case 4997:
        case 4998:
        case 4999:
        case 5000:
        case 5001:
        case 5002:
        case 5003:
        case 5004:
        case 5005:
        case 5006:
        case 5007:
        case 5008:
        case 5009:
        case 5010:
        case 5011:
        case 5618:
        case 5619:
        case 6326:
        case 6542:
        case 6570:
        case 7159:
        case 7182:
        case 7235:
        case 7387:
        case 7455:
        case 7540:
        case 7902:
        case 8046:
        case 8126:
        case 8477:
        case 8705: return "yao";
        case 5012:
        case 5013:
        case 5014:
        case 5015:
        case 5016:
        case 5017:
        case 5018:
        case 5019:
        case 5020:
        case 5021:
        case 5022:
        case 5023:
        case 5024:
        case 5025:
        case 5026:
        case 5644:
        case 5843:
        case 5894:
        case 6262:
        case 7442:
        case 7639:
        case 7884: return "ye";
        case 5027:
        case 5028:
        case 5029:
        case 5030:
        case 5031:
        case 5032:
        case 5033:
        case 5034:
        case 5035:
        case 5036:
        case 5037:
        case 5038:
        case 5039:
        case 5040:
        case 5041:
        case 5042:
        case 5043:
        case 5044:
        case 5045:
        case 5046:
        case 5047:
        case 5048:
        case 5049:
        case 5050:
        case 5051:
        case 5052:
        case 5053:
        case 5054:
        case 5055:
        case 5056:
        case 5057:
        case 5058:
        case 5059:
        case 5060:
        case 5061:
        case 5062:
        case 5063:
        case 5064:
        case 5065:
        case 5066:
        case 5067:
        case 5068:
        case 5069:
        case 5070:
        case 5071:
        case 5072:
        case 5073:
        case 5074:
        case 5075:
        case 5076:
        case 5077:
        case 5078:
        case 5079:
        case 5655:
        case 5657:
        case 5670:
        case 5693:
        case 5711:
        case 5817:
        case 5961:
        case 5992:
        case 6018:
        case 6051:
        case 6072:
        case 6218:
        case 6236:
        case 6240:
        case 6258:
        case 6314:
        case 6329:
        case 6355:
        case 6362:
        case 6441:
        case 6470:
        case 6527:
        case 6558:
        case 6602:
        case 6634:
        case 6688:
        case 6689:
        case 6708:
        case 6884:
        case 6938:
        case 7068:
        case 7143:
        case 7376:
        case 7383:
        case 7461:
        case 7629:
        case 7658:
        case 7784:
        case 7838:
        case 7955:
        case 7978:
        case 8074:
        case 8089:
        case 8115:
        case 8120:
        case 8134:
        case 8270:
        case 8415:
        case 8464:
        case 8472:
        case 8493:
        case 8780: return "yi";
        case 5080:
        case 5081:
        case 5082:
        case 5083:
        case 5084:
        case 5085:
        case 5086:
        case 5087:
        case 5088:
        case 5089:
        case 5090:
        case 5091:
        case 5092:
        case 5093:
        case 5094:
        case 5095:
        case 5096:
        case 5097:
        case 5098:
        case 5099:
        case 5100:
        case 5101:
        case 5623:
        case 5920:
        case 5940:
        case 5983:
        case 6007:
        case 6065:
        case 6337:
        case 6419:
        case 6594:
        case 6625:
        case 6806:
        case 7519:
        case 7887:
        case 8111:
        case 8230:
        case 8615:
        case 8624: return "yin";
        case 5102:
        case 5103:
        case 5104:
        case 5105:
        case 5106:
        case 5107:
        case 5108:
        case 5109:
        case 5110:
        case 5111:
        case 5112:
        case 5113:
        case 5114:
        case 5115:
        case 5116:
        case 5117:
        case 5118:
        case 5119:
        case 5788:
        case 5911:
        case 6067:
        case 6094:
        case 6126:
        case 6151:
        case 6186:
        case 6292:
        case 6451:
        case 6663:
        case 6862:
        case 6875:
        case 6913:
        case 7188:
        case 7212:
        case 7326:
        case 7584:
        case 8048:
        case 8108:
        case 8203:
        case 8331: return "ying";
        case 5120:
        case 6401: return "yo";
        case 5121:
        case 5122:
        case 5123:
        case 5124:
        case 5125:
        case 5126:
        case 5127:
        case 5128:
        case 5129:
        case 5130:
        case 5131:
        case 5132:
        case 5133:
        case 5134:
        case 5135:
        case 5724:
        case 5953:
        case 6013:
        case 6415:
        case 6728:
        case 7163:
        case 7962:
        case 8014:
        case 8711:
        case 8751: return "yong";
        case 5136:
        case 5137:
        case 5138:
        case 5139:
        case 5140:
        case 5141:
        case 5142:
        case 5143:
        case 5144:
        case 5145:
        case 5146:
        case 5147:
        case 5148:
        case 5149:
        case 5150:
        case 5151:
        case 5152:
        case 5153:
        case 5154:
        case 5155:
        case 5653:
        case 5692:
        case 5707:
        case 6112:
        case 6115:
        case 6121:
        case 6347:
        case 6483:
        case 6922:
        case 7254:
        case 7364:
        case 7527:
        case 7880:
        case 8064:
        case 8236:
        case 8242:
        case 8286:
        case 8647:
        case 8778:
        case 8788: return "you";
        case 5156:
        case 5157:
        case 5158:
        case 5159:
        case 5160:
        case 5161:
        case 5162:
        case 5163:
        case 5164:
        case 5165:
        case 5166:
        case 5167:
        case 5168:
        case 5169:
        case 5170:
        case 5171:
        case 5172:
        case 5173:
        case 5174:
        case 5175:
        case 5176:
        case 5177:
        case 5178:
        case 5179:
        case 5180:
        case 5181:
        case 5182:
        case 5183:
        case 5184:
        case 5185:
        case 5186:
        case 5187:
        case 5188:
        case 5189:
        case 5190:
        case 5191:
        case 5192:
        case 5193:
        case 5194:
        case 5195:
        case 5196:
        case 5197:
        case 5198:
        case 5199:
        case 5200:
        case 5201:
        case 5202:
        case 5203:
        case 5204:
        case 5205:
        case 5206:
        case 5614:
        case 5625:
        case 5681:
        case 5722:
        case 5836:
        case 5845:
        case 6139:
        case 6187:
        case 6277:
        case 6484:
        case 6486:
        case 6546:
        case 6592:
        case 6632:
        case 6637:
        case 6655:
        case 6748:
        case 6987:
        case 6993:
        case 7005:
        case 7090:
        case 7204:
        case 7437:
        case 7476:
        case 7573:
        case 7603:
        case 7622:
        case 7647:
        case 7659:
        case 7717:
        case 7718:
        case 7858:
        case 8033:
        case 8054:
        case 8085:
        case 8086:
        case 8130:
        case 8133:
        case 8266:
        case 8285:
        case 8336:
        case 8407:
        case 8408:
        case 8607:
        case 8625: return "yu";
        case 5207:
        case 5208:
        case 5209:
        case 5210:
        case 5211:
        case 5212:
        case 5213:
        case 5214:
        case 5215:
        case 5216:
        case 5217:
        case 5218:
        case 5219:
        case 5220:
        case 5221:
        case 5222:
        case 5223:
        case 5224:
        case 5225:
        case 5226:
        case 5989:
        case 6011:
        case 6282:
        case 6768:
        case 7034:
        case 7205:
        case 7358:
        case 7528:
        case 7783:
        case 8016:
        case 8302:
        case 8378:
        case 8629: return "yuan";
        case 5227:
        case 5228:
        case 5229:
        case 5230:
        case 5231:
        case 5232:
        case 5233:
        case 5234:
        case 5235:
        case 5236:
        case 5763:
        case 6914:
        case 7348:
        case 7530:
        case 7865: return "yue";
        case 5237:
        case 5238:
        case 5239:
        case 5240:
        case 5241:
        case 5242:
        case 5243:
        case 5244:
        case 5245:
        case 5246:
        case 5247:
        case 5248:
        case 5909:
        case 6031:
        case 6581:
        case 6702:
        case 6719:
        case 7101:
        case 7225:
        case 7370:
        case 7432:
        case 7521:
        case 7657: return "yun";
        case 5249:
        case 5250:
        case 5251:
        case 6257:
        case 6338: return "za";
        case 5252:
        case 5253:
        case 5254:
        case 5255:
        case 5256:
        case 5257:
        case 5258:
        case 6544:
        case 7162: return "zai";
        case 5259:
        case 5260:
        case 5261:
        case 5262:
        case 7222:
        case 7435:
        case 8402:
        case 8456:
        case 8485:
        case 8641: return "zan";
        case 5263:
        case 5264:
        case 5265:
        case 6242:
        case 7064:
        case 7416: return "zang";
        case 5266:
        case 5267:
        case 5268:
        case 5269:
        case 5270:
        case 5271:
        case 5272:
        case 5273:
        case 5274:
        case 5275:
        case 5276:
        case 5277:
        case 5278:
        case 5279:
        case 6380: return "zao";
        case 5280:
        case 5281:
        case 5282:
        case 5283:
        case 5638:
        case 8369:
        case 5651:
        case 6385:
        case 6493:
        case 6937:
        case 7430:
        case 8348:
        case 8423: return "ze";
        case 5284: return "zei";
        case 5285:
        case 5858: return "zen";
        case 5286:
        case 5287:
        case 5288:
        case 5289:
        case 7153:
        case 7421:
        case 7832:
        case 7913: return "zeng";
        case 5290:
        case 5291:
        case 5292:
        case 5293:
        case 5294:
        case 5295:
        case 5296:
        case 5297:
        case 5298:
        case 5299:
        case 5300:
        case 5301:
        case 5302:
        case 5303:
        case 5304:
        case 5305:
        case 5306:
        case 5307:
        case 5308:
        case 5309:
        case 6610:
        case 6274:
        case 6324:
        case 6369:
        case 6378:
        case 7736:
        case 8068:
        case 8238:
        case 8794: return "zha";
        case 5310:
        case 5311:
        case 5312:
        case 5313:
        case 5314:
        case 5315:
        case 7746:
        case 8109: return "zhai";
        case 5316:
        case 5317:
        case 5318:
        case 5319:
        case 5320:
        case 5321:
        case 5322:
        case 5323:
        case 5324:
        case 5325:
        case 5326:
        case 5327:
        case 5328:
        case 5329:
        case 5330:
        case 5331:
        case 5332:
        case 5862:
        case 6288:
        case 7625: return "zhan";
        case 5333:
        case 5334:
        case 5335:
        case 5336:
        case 5337:
        case 5338:
        case 5339:
        case 5340:
        case 5341:
        case 5342:
        case 5343:
        case 5344:
        case 5345:
        case 5346:
        case 5347:
        case 5675:
        case 5921:
        case 6504:
        case 6554:
        case 6615:
        case 7049:
        case 7216:
        case 8315: return "zhang";
        case 5348:
        case 5349:
        case 5350:
        case 5351:
        case 5352:
        case 5353:
        case 5354:
        case 5355:
        case 5356:
        case 5357:
        case 5815:
        case 7294:
        case 7840:
        case 8341: return "zhao";
        case 5358:
        case 5359:
        case 5360:
        case 5361:
        case 5362:
        case 5363:
        case 5364:
        case 5365:
        case 5366:
        case 5367:
        case 5856:
        case 6301:
        case 7247:
        case 7392:
        case 7761:
        case 8049:
        case 8162:
        case 8256:
        case 8487: return "zhe";
        case 5368:
        case 5369:
        case 5370:
        case 5371:
        case 5372:
        case 5373:
        case 5374:
        case 5375:
        case 5376:
        case 5377:
        case 5378:
        case 5379:
        case 5380:
        case 5381:
        case 5382:
        case 5383:
        case 5958:
        case 6172:
        case 6805:
        case 7139:
        case 7269:
        case 7327:
        case 7384:
        case 7466:
        case 7551:
        case 7562:
        case 7685:
        case 7819:
        case 8001:
        case 8018:
        case 8380: return "zhen";
        case 5384:
        case 5385:
        case 5386:
        case 5387:
        case 5388:
        case 5389:
        case 5390:
        case 5391:
        case 5392:
        case 5393:
        case 5394:
        case 5395:
        case 5396:
        case 5397:
        case 5398:
        case 5399:
        case 5400:
        case 5401:
        case 5402:
        case 5403:
        case 5404:
        case 5826:
        case 6531:
        case 6571:
        case 7859:
        case 7903:
        case 8361: return "zheng";
        case 5405:
        case 5406:
        case 5407:
        case 5408:
        case 5409:
        case 5410:
        case 5411:
        case 5412:
        case 5413:
        case 5414:
        case 5415:
        case 5416:
        case 5417:
        case 5418:
        case 5419:
        case 5420:
        case 5421:
        case 5422:
        case 5423:
        case 5424:
        case 5425:
        case 5426:
        case 5427:
        case 5428:
        case 5429:
        case 5430:
        case 5431:
        case 5432:
        case 5433:
        case 5434:
        case 5435:
        case 5436:
        case 5437:
        case 5438:
        case 5439:
        case 5440:
        case 5441:
        case 5442:
        case 5443:
        case 5444:
        case 5445:
        case 5446:
        case 5447:
        case 5620:
        case 5876:
        case 5904:
        case 5990:
        case 6038:
        case 6293:
        case 6489:
        case 6669:
        case 6973:
        case 6975:
        case 7079:
        case 7246:
        case 7255:
        case 7257:
        case 7268:
        case 7382:
        case 7389:
        case 7462:
        case 7553:
        case 7589:
        case 7677:
        case 7683:
        case 7773:
        case 7984:
        case 8026:
        case 8075:
        case 8246:
        case 8474:
        case 8505:
        case 8537:
        case 8557:
        case 8560:
        case 8584:
        case 8603: return "zhi";
        case 5448:
        case 5449:
        case 5450:
        case 5451:
        case 5452:
        case 5453:
        case 5454:
        case 5455:
        case 5456:
        case 5457:
        case 5458:
        case 5803:
        case 6626:
        case 7981:
        case 8314:
        case 8417:
        case 8564: return "zhong";
        case 5459:
        case 5460:
        case 5461:
        case 5462:
        case 5463:
        case 5464:
        case 5465:
        case 5466:
        case 5467:
        case 5468:
        case 5469:
        case 5470:
        case 5471:
        case 5472:
        case 6107:
        case 6390:
        case 7008:
        case 7091:
        case 7107:
        case 7548:
        case 7756:
        case 8406:
        case 8492: return "zhou";
        case 5473:
        case 5474:
        case 5475:
        case 5476:
        case 5477:
        case 5478:
        case 5479:
        case 5480:
        case 5481:
        case 5482:
        case 5483:
        case 5484:
        case 5485:
        case 5486:
        case 5487:
        case 5488:
        case 5489:
        case 5490:
        case 5491:
        case 5492:
        case 5493:
        case 5494:
        case 5495:
        case 5496:
        case 5497:
        case 5498:
        case 5499:
        case 5500:
        case 5501:
        case 5502:
        case 5503:
        case 5504:
        case 5628:
        case 5689:
        case 5710:
        case 5905:
        case 6049:
        case 6079:
        case 6808:
        case 6830:
        case 6883:
        case 7244:
        case 7338:
        case 7345:
        case 7636:
        case 7889:
        case 8070:
        case 8081:
        case 8335:
        case 8371:
        case 8422:
        case 8467:
        case 8578:
        case 8770: return "zhu";
        case 5505:
        case 5506: return "zhua";
        case 5507: return "zhuai";
        case 5508:
        case 5509:
        case 5510:
        case 5511:
        case 5512:
        case 5513:
        case 6389:
        case 6645:
        case 8207: return "zhuan";
        case 5514:
        case 5515:
        case 5516:
        case 5517:
        case 5518:
        case 5519:
        case 5520:
        case 5755:
        case 6760: return "zhuang";
        case 5521:
        case 5522:
        case 5523:
        case 5524:
        case 5525:
        case 5526:
        case 6723:
        case 7077:
        case 7136: return "zhui";
        case 5527:
        case 5528:
        case 7538:
        case 8124: return "zhun";
        case 5529:
        case 5530:
        case 5531:
        case 5532:
        case 5533:
        case 5534:
        case 5535:
        case 5536:
        case 5537:
        case 5538:
        case 5539:
        case 5730:
        case 5834:
        case 6310:
        case 6823:
        case 6835:
        case 6910:
        case 7644:
        case 7690:
        case 7729:
        case 7977: return "zhuo";
        case 5540:
        case 5541:
        case 5542:
        case 5543:
        case 5544:
        case 5545:
        case 5546:
        case 5547:
        case 5548:
        case 5549:
        case 5550:
        case 5551:
        case 5552:
        case 5553:
        case 5554:
        case 5849:
        case 6075:
        case 6549:
        case 7002:
        case 7060:
        case 7127:
        case 7287:
        case 7402:
        case 7463:
        case 7707:
        case 7786:
        case 7937:
        case 7986:
        case 8172:
        case 8342:
        case 8450:
        case 8484:
        case 8594:
        case 8604:
        case 8623:
        case 8686:
        case 8758: return "zi";
        case 5555:
        case 5556:
        case 5557:
        case 5558:
        case 5559:
        case 5560:
        case 5561:
        case 5744:
        case 7574:
        case 8453: return "zong";
        case 5562:
        case 5563:
        case 5564:
        case 5565:
        case 5833:
        case 5878:
        case 5924:
        case 6933:
        case 7067:
        case 8677: return "zou";
        case 5566:
        case 5567:
        case 5568:
        case 5569:
        case 5570:
        case 5571:
        case 5572:
        case 5573:
        case 5762:
        case 6147:
        case 7963: return "zu";
        case 5574:
        case 5575:
        case 6312:
        case 7158:
        case 8582: return "zuan";
        case 5576:
        case 5577:
        case 5578:
        case 5579:
        case 6209: return "zui";
        case 5580:
        case 5581:
        case 6304:
        case 7355:
        case 8714: return "zun";
        case 5582:
        case 5583:
        case 5584:
        case 5585:
        case 5586:
        case 5587:
        case 5588:
        case 5589:
        case 5872:
        case 6382:
        case 6460:
        case 6684:
        case 7549:
        case 7681: return "zuo";
        default:
		{
			printf("%d\n", code);
			break;
		}
	}

	return NULL;
}

char* get_pinyin_gbk3(unsigned int code)
{
    switch(code)
	{
        case 0: return "yu";        // �@
        case 2: return "shang";     // �A
        case 4: return "xia";       // �B
        case 6: return "han";       // �C
        case 8: return "mian";      // �D
        case 10: return "chou";     // �E
        case 12: return "shi";      // �F
        case 14: return "diu";      // �G
        case 16: return "qiu";      // �H
        case 18: return "liang";    // �I
        case 20: return "you";      // �J
        case 22: return "bing";     // �K
        case 24: return "jiu";      // �L
        case 26: return "ji";       // �M
        case 28: return "jie";      // �N
        case 30: return "guan";     // �O
        case 32: return "chan";     // �P
        case 34: return "zhuo";     // �Q
        case 36: return "ba";       // �R
        case 38: return "dan";      // �S
        case 40: return "fu";       // �T
        case 42: return "yi";       // �U
        case 44: return "ai";       // �V
        case 46: return "wu";       // �W
        case 48: return "jiu";      // �X
        case 50: return "yi";       // �Y
        case 52: return "yin";      // �Z
        case 54: return "hu";       // �[
        case 56: return "cheng";    // �\
        case 58: return "yin";      // �]
        case 60: return "wan";      // �^
        case 62: return "gai";      // �_
        case 64: return "jiu";      // �`
        case 66: return "hal";      // �a
        case 68: return "hol";      // �b
        case 70: return "dou";      // �c
        case 72: return "shi";      // �d
        case 74: return "nang";     // �e
        case 76: return "kal";      // �f
        case 78: return "keol";     // �g
        case 80: return "tol"; // �h
        case 82: return "mol"; // �i
        case 84: return "ol"; // �j
        case 86: return "cal"; // �k
        case 88: return "xue"; // �l
        case 90: return "yan"; // �m
        case 92: return "fu"; // �n
        case 94: return "sha"; // �o
        case 96: return "na"; // �p
        case 98: return "gan"; // �q
        case 100: return "sol"; // �r
        case 102: return "eol"; // �s
        case 104: return "cui"; // �t
        case 106: return "zhe"; // �u
        case 108: return "luan"; // �v
        case 110: return "gui"; // �w
        case 112: return "gan"; // �x
        case 114: return "luan"; // �y
        case 116: return "lin"; // �z
        case 118: return "yi"; // �{
        case 120: return "jue"; // �|
        case 122: return "ma"; // �}
        case 124: return "zhi"; // �~
        case 126: return ""; // ��
        case 128: return "yu"; // ��
        case 130: return "si"; // ��
        case 132: return "sui"; // ��
        case 134: return "gen"; // ��
        case 136: return "ya"; // ��
        case 138: return "qi"; // ��
        case 140: return "ya"; // ��
        case 142: return "da"; // ��
        case 144: return "ye"; // ��
        case 146: return "xiang"; // ��
        case 148: return "jing"; // ��
        case 150: return "ye"; // ��
        case 152: return "you"; // ��
        case 154: return "dan"; // ��
        case 156: return "lian"; // ��
        case 158: return "duo"; // ��
        case 160: return "wei"; // ��
        case 162: return "ji"; // ��
        case 164: return "ra"; // ��
        case 166: return "wu"; // ��
        case 168: return "ba"; // ��
        case 170: return "bing"; // ��
        case 172: return "fo"; // ��
        case 174: return "tao"; // ��
        case 176: return "eo"; // ��
        case 178: return "xian"; // ��
        case 180: return "duo"; // ��
        case 182: return "hong"; // ��
        case 184: return "gan"; // ��
        case 186: return "bo"; // ��
        case 188: return "chao"; // ��
        case 190: return "zhang"; // ��
        case 192: return "shang"; // ��
        case 194: return "ren"; // ��
        case 196: return "fan"; // ��
        case 198: return "miao"; // ��
        case 200: return "jing"; // ��
        case 202: return "wo"; // ��
        case 204: return "yao"; // ��
        case 206: return "feng"; // ��
        case 208: return "chuan"; // ��
        case 210: return "wang"; // ��
        case 212: return "di"; // ��
        case 214: return "zhong"; // ��
        case 216: return "pei"; // ��
        case 218: return "yu"; // ��
        case 220: return "diao"; // ��
        case 222: return "dun"; // ��
        case 224: return "wu"; // ��
        case 226: return "yi"; // ��
        case 228: return "lin"; // ��
        case 230: return "fan"; // ��
        case 232: return "ai"; // ��
        case 234: return "yin"; // ��
        case 236: return "pi"; // ��
        case 238: return "dan"; // ��
        case 240: return "fu"; // ��
        case 242: return "tang"; // ��
        case 244: return "zu"; // ��
        case 246: return "yun"; // ��
        case 248: return "ju"; // ��
        case 250: return "qian"; // ��
        case 252: return "xun"; // ��
        case 254: return "xin"; // ��
        case 256: return "ze"; // ��
        case 258: return "xian"; // ��
        case 260: return "nu"; // ��
        case 262: return "ni"; // ��
        case 264: return "xie"; // ��
        case 266: return "xu"; // ��
        case 268: return "zhou"; // ��
        case 270: return "qu"; // ��
        case 272: return "beng"; // ��
        case 274: return "pi"; // ��
        case 276: return "yi"; // ��
        case 278: return "shi"; // ��
        case 280: return "yi"; // ��
        case 282: return "zheng"; // ��
        case 284: return "gan"; // ��
        case 286: return "mai"; // ��
        case 288: return "zhu"; // ��
        case 290: return "bu"; // ��
        case 292: return "qu"; // ��
        case 294: return "bi"; // ��
        case 296: return "zhao"; // ��
        case 298: return "ci"; // ��
        case 300: return "yang"; // ��
        case 302: return "zhan"; // ��
        case 304: return "bi"; // ��
        case 306: return "xian"; // ��
        case 308: return "qu"; // ��
        case 310: return "shi"; // ��
        case 312: return "bao"; // ��
        case 314: return "huai"; // ��
        case 316: return "ge"; // ��
        case 318: return "xiang"; // ��
        case 320: return "e"; // ��
        case 322: return "fa"; // ��
        case 324: return "ming"; // ��
        case 326: return "bing"; // ��
        case 328: return "hen"; // ��
        case 330: return "huo"; // ��
        case 332: return "gui"; // ��
        case 334: return "quan"; // ��
        case 336: return "ci"; // ��
        case 338: return "xing"; // ��
        case 340: return "shen"; // ��
        case 342: return "tuo"; // ��
        case 344: return "gai"; // ��
        case 346: return "lai"; // ��
        case 348: return "yi"; // ��
        case 350: return "guang"; // ��
        case 352: return "yin"; // ��
        case 354: return "mi"; // ��
        case 356: return "xu"; // ��
        case 358: return "an"; // ��
        case 360: return "lu"; // ��
        case 362: return "er"; // ��
        case 364: return "lun"; // ��
        case 366: return "cha"; // ��
        case 368: return "chi"; // ��
        case 370: return "xun"; // ��
        case 372: return "zhou"; // ��
        case 374: return "ru"; // ��
        case 376: return "jian"; // ��
        case 378: return "si"; // ��
        case 380: return "dai"; // ��
        case 382: return "ta"; // �@
        case 384: return "ning"; // �A
        case 386: return "jin"; // �B
        case 388: return "jiong"; // �C
        case 390: return "ting"; // �D
        case 392: return "zhen"; // �E
        case 394: return "zuo"; // �F
        case 396: return "chou"; // �G
        case 398: return "lu"; // �H
        case 400: return "ju"; // �I
        case 402: return "dou"; // �J
        case 404: return "ting"; // �K
        case 406: return "shen"; // �L
        case 408: return "tuo"; // �M
        case 410: return "bo"; // �N
        case 412: return "nan"; // �O
        case 414: return "xiao"; // �P
        case 416: return "tui"; // �Q
        case 418: return "yu"; // �R
        case 420: return "xi"; // �S
        case 422: return "xu"; // �T
        case 424: return "guang"; // �U
        case 426: return "ku"; // �V
        case 428: return "wu"; // �W
        case 430: return "yi"; // �X
        case 432: return "fu"; // �Y
        case 434: return "lang"; // �Z
        case 436: return "hun"; // �[
        case 438: return "ying"; // �\
        case 440: return "qian"; // �]
        case 442: return "san"; // �^
        case 444: return "pei"; // �_
        case 446: return "xi"; // �`
        case 448: return "mian"; // �a
        case 450: return "xia"; // �b
        case 452: return "xiu"; // �c
        case 454: return "di"; // �d
        case 456: return "ju"; // �e
        case 458: return "zhi"; // �f
        case 460: return "lai"; // �g
        case 462: return "si"; // �h
        case 464: return "huo"; // �i
        case 466: return "xiao"; // �j
        case 468: return "jian"; // �k
        case 470: return "biao"; // �l
        case 472: return "chu"; // �m
        case 474: return "fei"; // �n
        case 476: return "ya"; // �o
        case 478: return "bei"; // �p
        case 480: return "yu"; // �q
        case 482: return "xin"; // �r
        case 484: return "hu"; // �s
        case 486: return "chang"; // �t
        case 488: return "zhi"; // �u
        case 490: return "bing"; // �v
        case 492: return "jiu"; // �w
        case 494: return "yao"; // �x
        case 496: return "zu"; // �y
        case 498: return "liang"; // �z
        case 500: return "wan"; // �{
        case 502: return "lai"; // �|
        case 504: return "cang"; // �}
        case 506: return "zong"; // �~
        case 508: return ""; // ��
        case 510: return "ge"; // ��
        case 512: return "tian"; // ��
        case 514: return "shu"; // ��
        case 516: return "men"; // ��
        case 518: return "dan"; // ��
        case 520: return "zhui"; // ��
        case 522: return "xing"; // ��
        case 524: return "peng"; // ��
        case 526: return "qi"; // ��
        case 528: return "gan"; // ��
        case 530: return "liang"; // ��
        case 532: return "sui"; // ��
        case 534: return "jie"; // ��
        case 536: return "fang"; // ��
        case 538: return "zhi"; // ��
        case 540: return "zong"; // ��
        case 542: return "lun"; // ��
        case 544: return "song"; // ��
        case 546: return "leng"; // ��
        case 548: return "hun"; // ��
        case 550: return "dong"; // ��
        case 552: return "zi"; // ��
        case 554: return "ben"; // ��
        case 556: return "wu"; // ��
        case 558: return "ju"; // ��
        case 560: return "nai"; // ��
        case 562: return "cai"; // ��
        case 564: return "jian"; // ��
        case 566: return "ye"; // ��
        case 568: return "sha"; // ��
        case 570: return "qie"; // ��
        case 572: return "ying"; // ��
        case 574: return "cheng"; // ��
        case 576: return "jian"; // ��
        case 578: return "ru"; // ��
        case 580: return "zhong"; // ��
        case 582: return "chun"; // ��
        case 584: return "wei"; // ��
        case 586: return "yu"; // ��
        case 588: return "bing"; // ��
        case 590: return "ti"; // ��
        case 592: return "yan"; // ��
        case 594: return "feng"; // ��
        case 596: return "dang"; // ��
        case 598: return "wo"; // ��
        case 600: return "e"; // ��
        case 602: return "che"; // ��
        case 604: return "sheng"; // ��
        case 606: return "kan"; // ��
        case 608: return "di"; // ��
        case 610: return "cha"; // ��
        case 612: return "bei"; // ��
        case 614: return "ye"; // ��
        case 616: return "huang"; // ��
        case 618: return "yao"; // ��
        case 620: return "zhan"; // ��
        case 622: return "qiao"; // ��
        case 624: return "yan"; // ��
        case 626: return "you"; // ��
        case 628: return "xu"; // ��
        case 630: return "zha"; // ��
        case 632: return "ci"; // ��
        case 634: return "fu"; // ��
        case 636: return "bi"; // ��
        case 638: return "zhi"; // ��
        case 640: return "mian"; // ��
        case 642: return "ji"; // ��
        case 644: return "yi"; // ��
        case 646: return "xie"; // ��
        case 648: return "xun"; // ��
        case 650: return "cai"; // ��
        case 652: return "duan"; // ��
        case 654: return "ce"; // ��
        case 656: return "zhen"; // ��
        case 658: return "tou"; // ��
        case 660: return "bei"; // ��
        case 662: return "zan"; // ��
        case 664: return "jie"; // ��
        case 666: return "wei"; // ��
        case 668: return "sou"; // ��
        case 670: return "zhi"; // ��
        case 672: return "su"; // ��
        case 674: return "xia"; // ��
        case 676: return "yuan"; // ��
        case 678: return "rong"; // ��
        case 680: return "nu"; // ��
        case 682: return "yun"; // ��
        case 684: return "gou"; // ��
        case 686: return "ma"; // ��
        case 688: return "dian"; // ��
        case 690: return "tang"; // ��
        case 692: return "hao"; // ��
        case 694: return "jie"; // ��
        case 696: return "xi"; // ��
        case 698: return "shan"; // ��
        case 700: return "jian"; // ��
        case 702: return "jue"; // ��
        case 704: return "chen"; // ��
        case 706: return "chu"; // ��
        case 708: return "san"; // ��
        case 710: return "bei"; // ��
        case 712: return "xiao"; // ��
        case 714: return "yong"; // ��
        case 716: return "yao"; // ��
        case 718: return "ta"; // ��
        case 720: return "suo"; // ��
        case 722: return "yang"; // ��
        case 724: return "fa"; // ��
        case 726: return "bing"; // ��
        case 728: return "xiang"; // ��
        case 730: return "zai"; // ��
        case 732: return "gu"; // ��
        case 734: return "can"; // ��
        case 736: return "lei"; // ��
        case 738: return "chong"; // ��
        case 740: return "zao"; // ��
        case 742: return "zong"; // ��
        case 744: return "beng"; // ��
        case 746: return "shuan"; // ��
        case 748: return "chuan"; // ��
        case 750: return "yu"; // ��
        case 752: return "zhai"; // ��
        case 754: return "qi"; // ��
        case 756: return "shang"; // ��
        case 758: return "chuan"; // ��
        case 760: return "jing"; // ��
        case 762: return "han"; // ��
        case 764: return "zhang"; // �@
        case 766: return "qing"; // �A
        case 768: return "yan"; // �B
        case 770: return "di"; // �C
        case 772: return "xie"; // �D
        case 774: return "lu"; // �E
        case 776: return "bei"; // �F
        case 778: return "biao"; // �G
        case 780: return "jin"; // �H
        case 782: return "lian"; // �I
        case 784: return "liao"; // �J
        case 786: return "man"; // �K
        case 788: return "qian"; // �L
        case 790: return "xian"; // �M
        case 792: return "tan"; // �N
        case 794: return "ying"; // �O
        case 796: return "dong"; // �P
        case 798: return "zhuan"; // �Q
        case 800: return "shan"; // �R
        case 802: return "qiao"; // �S
        case 804: return "jiong"; // �T
        case 806: return "tui"; // �U
        case 808: return "zun"; // �V
        case 810: return "pu"; // �W
        case 812: return "lao"; // �X
        case 814: return "chang"; // �Y
        case 816: return "guang"; // �Z
        case 818: return "qi"; // �[
        case 820: return "deng"; // �\
        case 822: return "zhuan"; // �]
        case 824: return "wei"; // �^
        case 826: return "ji"; // �_
        case 828: return "bo"; // �`
        case 830: return "hui"; // �a
        case 832: return "chuan"; // �b
        case 834: return "tie"; // �c
        case 836: return "dan"; // �d
        case 838: return "yao"; // �e
        case 840: return "fen"; // �f
        case 842: return "xian"; // �g
        case 844: return "yu"; // �h
        case 846: return "e"; // �i
        case 848: return "lin"; // �j
        case 850: return "bo"; // �k
        case 852: return "gu"; // �l
        case 854: return "xian"; // �m
        case 856: return "xian"; // �n
        case 858: return "min"; // �o
        case 860: return "ye"; // �p
        case 862: return "jin"; // �q
        case 864: return "jia"; // �r
        case 866: return "qiao"; // �s
        case 868: return "feng"; // �t
        case 870: return "zhou"; // �u
        case 872: return "ai"; // �v
        case 874: return "sai"; // �w
        case 876: return "yi"; // �x
        case 878: return "jun"; // �y
        case 880: return "nong"; // �z
        case 882: return "chan"; // �{
        case 884: return "yi"; // �|
        case 886: return "dang"; // �}
        case 888: return "kuai"; // �~
        case 890: return ""; // ��
        case 892: return "jian"; // ��
        case 894: return "chu"; // ��
        case 896: return "jiao"; // ��
        case 898: return "sha"; // ��
        case 900: return "zai"; // ��
        case 902: return "can"; // ��
        case 904: return "bin"; // ��
        case 906: return "an"; // ��
        case 908: return "tai"; // ��
        case 910: return "chou"; // ��
        case 912: return "chai"; // ��
        case 914: return "lan"; // ��
        case 916: return "yi"; // ��
        case 918: return "jin"; // ��
        case 920: return "qian"; // ��
        case 922: return "meng"; // ��
        case 924: return "wu"; // ��
        case 926: return "ning"; // ��
        case 928: return "qiong"; // ��
        case 930: return "ni"; // ��
        case 932: return "chang"; // ��
        case 934: return "la"; // ��
        case 936: return "lu"; // ��
        case 938: return "kuang"; // ��
        case 940: return "bao"; // ��
        case 942: return "yu"; // ��
        case 944: return "biao"; // ��
        case 946: return "zan"; // ��
        case 948: return "zhi"; // ��
        case 950: return "si"; // ��
        case 952: return "you"; // ��
        case 954: return "hao"; // ��
        case 956: return "jing"; // ��
        case 958: return "qin"; // ��
        case 960: return "li"; // ��
        case 962: return "teng"; // ��
        case 964: return "wei"; // ��
        case 966: return "long"; // ��
        case 968: return "chu"; // ��
        case 970: return "chan"; // ��
        case 972: return "xiang"; // ��
        case 974: return "tiao"; // ��
        case 976: return "hui"; // ��
        case 978: return "li"; // ��
        case 980: return "luo"; // ��
        case 982: return "zan"; // ��
        case 984: return "nuo"; // ��
        case 986: return "tang"; // ��
        case 988: return "yan"; // ��
        case 990: return "lei"; // ��
        case 992: return "nang"; // ��
        case 994: return "zan"; // ��
        case 996: return "xiong"; // ��
        case 998: return "dui"; // ��
        case 1000: return "dui"; // ��
        case 1002: return "tu"; // ��
        case 1004: return "chang"; // ��
        case 1006: return "er"; // ��
        case 1008: return "er"; // ��
        case 1010: return "jin"; // ��
        case 1012: return "yan"; // ��
        case 1014: return "shi"; // ��
        case 1016: return "shi"; // ��
        case 1018: return "qian"; // ��
        case 1020: return "gong"; // ��
        case 1022: return "hao"; // ��
        case 1024: return "shen"; // ��
        case 1026: return "dou"; // ��
        case 1028: return "bai"; // ��
        case 1030: return "gong"; // ��
        case 1032: return "huang"; // ��
        case 1034: return "wu"; // ��
        case 1036: return "na"; // ��
        case 1038: return "liang"; // ��
        case 1040: return "yu"; // ��
        case 1042: return "han"; // ��
        case 1044: return "tian"; // ��
        case 1046: return "bun"; // ��
        case 1048: return "ji"; // ��
        case 1050: return "yi"; // ��
        case 1052: return "mao"; // ��
        case 1054: return "ran"; // ��
        case 1056: return "yan"; // ��
        case 1058: return "mao"; // ��
        case 1060: return "ce"; // ��
        case 1062: return "jiong"; // ��
        case 1064: return "gua"; // ��
        case 1066: return "jiong"; // ��
        case 1068: return "mao"; // ��
        case 1070: return "zhou"; // ��
        case 1072: return "gou"; // ��
        case 1074: return "xu"; // ��
        case 1076: return "you"; // ��
        case 1078: return "kan"; // ��
        case 1080: return "yi"; // ��
        case 1082: return "mi"; // ��
        case 1084: return "shi"; // ��
        case 1086: return "meng"; // ��
        case 1088: return "ju"; // ��
        case 1090: return "kou"; // ��
        case 1092: return "min"; // ��
        case 1094: return "fu"; // ��
        case 1096: return "xie"; // ��
        case 1098: return "mi"; // ��
        case 1100: return "tai"; // ��
        case 1102: return "gang"; // ��
        case 1104: return "hu"; // ��
        case 1106: return "pan"; // ��
        case 1108: return "fu"; // ��
        case 1110: return "min"; // ��
        case 1112: return "qia"; // ��
        case 1114: return "jian"; // ��
        case 1116: return "sou"; // ��
        case 1118: return "mei"; // ��
        case 1120: return "tu"; // ��
        case 1122: return "gu"; // ��
        case 1124: return "jing"; // ��
        case 1126: return "qing"; // ��
        case 1128: return "dong"; // ��
        case 1130: return "gan"; // ��
        case 1132: return "yin"; // ��
        case 1134: return "ai"; // ��
        case 1136: return "li"; // ��
        case 1138: return "cang"; // ��
        case 1140: return "ming"; // ��
        case 1142: return "zhun"; // ��
        case 1144: return "cui"; // ��
        case 1146: return "si"; // �@
        case 1148: return "duo"; // �A
        case 1150: return "jin"; // �B
        case 1152: return "lin"; // �C
        case 1154: return "xi"; // �D
        case 1156: return "dou"; // �E
        case 1158: return "fan"; // �F
        case 1160: return "fan"; // �G
        case 1162: return "ju"; // �H
        case 1164: return "chu"; // �I
        case 1166: return "zheng"; // �J
        case 1168: return "feng"; // �K
        case 1170: return "mu"; // �L
        case 1172: return "zhi"; // �M
        case 1174: return "feng"; // �N
        case 1176: return "feng"; // �O
        case 1178: return "kai"; // �P
        case 1180: return "gan"; // �Q
        case 1182: return "ping"; // �R
        case 1184: return "kuai"; // �S
        case 1186: return "han"; // �T
        case 1188: return "ren"; // �U
        case 1190: return "chuang"; // �V
        case 1192: return "ji"; // �W
        case 1194: return "qian"; // �X
        case 1196: return "cun"; // �Y
        case 1198: return "ji"; // �Z
        case 1200: return "dan"; // �[
        case 1202: return "wan"; // �\
        case 1204: return "jue"; // �]
        case 1206: return "li"; // �^
        case 1208: return "fu"; // �_
        case 1210: return "qu"; // �`
        case 1212: return "diao"; // �a
        case 1214: return "min"; // �b
        case 1216: return "ling"; // �c
        case 1218: return "zhong"; // �d
        case 1220: return "bie"; // �e
        case 1222: return "jie"; // �f
        case 1224: return "jie"; // �g
        case 1226: return "shan"; // �h
        case 1228: return "chan"; // �i
        case 1230: return "geng"; // �j
        case 1232: return "chuang"; // �k
        case 1234: return "kui"; // �l
        case 1236: return "duo"; // �m
        case 1238: return "er"; // �n
        case 1240: return "jie"; // �o
        case 1242: return "ci"; // �p
        case 1244: return "jing"; // �q
        case 1246: return "dou"; // �r
        case 1248: return "luo"; // �s
        case 1250: return "ze"; // �t
        case 1252: return "yuan"; // �u
        case 1254: return "cuo"; // �v
        case 1256: return "ke"; // �w
        case 1258: return "cha"; // �x
        case 1260: return "chuang"; // �y
        case 1262: return "cuo"; // �z
        case 1264: return "li"; // �{
        case 1266: return "fei"; // �|
        case 1268: return "chan"; // �}
        case 1270: return "qi"; // �~
        case 1272: return ""; // ��
        case 1274: return "chuang"; // ��
        case 1276: return "zi"; // ��
        case 1278: return "gang"; // ��
        case 1280: return "bao"; // ��
        case 1282: return "duo"; // ��
        case 1284: return "lue"; // ��
        case 1286: return "du"; // ��
        case 1288: return "jian"; // ��
        case 1290: return "ji"; // ��
        case 1292: return "yan"; // ��
        case 1294: return "huo"; // ��
        case 1296: return "du"; // ��
        case 1298: return "duan"; // ��
        case 1300: return "wu"; // ��
        case 1302: return "gua"; // ��
        case 1304: return "sheng"; // ��
        case 1306: return "jian"; // ��
        case 1308: return "da"; // ��
        case 1310: return "ai"; // ��
        case 1312: return "chuang"; // ��
        case 1314: return "chuan"; // ��
        case 1316: return "chan"; // ��
        case 1318: return "tuan"; // ��
        case 1320: return "lu"; // ��
        case 1322: return "li"; // ��
        case 1324: return "peng"; // ��
        case 1326: return "shan"; // ��
        case 1328: return "kou"; // ��
        case 1330: return "gua"; // ��
        case 1332: return "hua"; // ��
        case 1334: return "zha"; // ��
        case 1336: return "zhu"; // ��
        case 1338: return "lian"; // ��
        case 1340: return "ju"; // ��
        case 1342: return "liu"; // ��
        case 1344: return "gui"; // ��
        case 1346: return "jiao"; // ��
        case 1348: return "gui"; // ��
        case 1350: return "jian"; // ��
        case 1352: return "jian"; // ��
        case 1354: return "tang"; // ��
        case 1356: return "ji"; // ��
        case 1358: return "jian"; // ��
        case 1360: return "jian"; // ��
        case 1362: return "zhi"; // ��
        case 1364: return "chan"; // ��
        case 1366: return "zuan"; // ��
        case 1368: return "mo"; // ��
        case 1370: return "li"; // ��
        case 1372: return "zhu"; // ��
        case 1374: return "ya"; // ��
        case 1376: return "jin"; // ��
        case 1378: return "keng"; // ��
        case 1380: return "lie"; // ��
        case 1382: return "zhi"; // ��
        case 1384: return "yi"; // ��
        case 1386: return "zhu"; // ��
        case 1388: return "mo"; // ��
        case 1390: return "lao"; // ��
        case 1392: return "juan"; // ��
        case 1394: return "kou"; // ��
        case 1396: return "yang"; // ��
        case 1398: return "wa"; // ��
        case 1400: return "xiao"; // ��
        case 1402: return "mou"; // ��
        case 1404: return "kuang"; // ��
        case 1406: return "jie"; // ��
        case 1408: return "lie"; // ��
        case 1410: return "ke"; // ��
        case 1412: return "jin"; // ��
        case 1414: return "gao"; // ��
        case 1416: return "min"; // ��
        case 1418: return "chi"; // ��
        case 1420: return "lang"; // ��
        case 1422: return "yong"; // ��
        case 1424: return "ke"; // ��
        case 1426: return "juan"; // ��
        case 1428: return "qing"; // ��
        case 1430: return "lu"; // ��
        case 1432: return "bu"; // ��
        case 1434: return "lai"; // ��
        case 1436: return "kai"; // ��
        case 1438: return "mian"; // ��
        case 1440: return "dong"; // ��
        case 1442: return "xu"; // ��
        case 1444: return "wu"; // ��
        case 1446: return "yi"; // ��
        case 1448: return "xun"; // ��
        case 1450: return "yang"; // ��
        case 1452: return "sheng"; // ��
        case 1454: return "lao"; // ��
        case 1456: return "lu"; // ��
        case 1458: return "piao"; // ��
        case 1460: return "shi"; // ��
        case 1462: return "ji"; // ��
        case 1464: return "jiang"; // ��
        case 1466: return "jiao"; // ��
        case 1468: return "quan"; // ��
        case 1470: return "xiang"; // ��
        case 1472: return "yi"; // ��
        case 1474: return "jue"; // ��
        case 1476: return "fan"; // ��
        case 1478: return "juan"; // ��
        case 1480: return "dong"; // ��
        case 1482: return "ju"; // ��
        case 1484: return "dan"; // ��
        case 1486: return "mai"; // ��
        case 1488: return "xun"; // ��
        case 1490: return "xun"; // ��
        case 1492: return "lu"; // ��
        case 1494: return "li"; // ��
        case 1496: return "che"; // ��
        case 1498: return "xiang"; // ��
        case 1500: return "quan"; // ��
        case 1502: return "yun"; // ��
        case 1504: return "jiu"; // ��
        case 1506: return "bao"; // ��
        case 1508: return "mangmi"; // ��
        case 1510: return "bi"; // ��
        case 1512: return "gai"; // ��
        case 1514: return "gai"; // ��
        case 1516: return "yi"; // ��
        case 1518: return "peng"; // ��
        case 1520: return "ju"; // ��
        case 1522: return "yao"; // ��
        case 1524: return "ge"; // ��
        case 1526: return "e"; // ��
        case 1528: return "gong"; // �@
        case 1530: return "da"; // �A
        case 1532: return "jiu"; // �B
        case 1534: return "gong"; // �C
        case 1536: return "nao"; // �D
        case 1538: return "jiu"; // �E
        case 1540: return "yi"; // �F
        case 1542: return "jiang"; // �G
        case 1544: return "kang"; // �H
        case 1546: return "hu"; // �I
        case 1548: return "qu"; // �J
        case 1550: return "fan"; // �K
        case 1552: return "qie"; // �L
        case 1554: return "zang"; // �M
        case 1556: return "kuang"; // �N
        case 1558: return "hu"; // �O
        case 1560: return "yu"; // �P
        case 1562: return "gui"; // �Q
        case 1564: return "hui"; // �R
        case 1566: return "dan"; // �S
        case 1568: return "kui"; // �T
        case 1570: return "lian"; // �U
        case 1572: return "lian"; // �V
        case 1574: return "suan"; // �W
        case 1576: return "du"; // �X
        case 1578: return "jiu"; // �Y
        case 1580: return "jue"; // �Z
        case 1582: return "xi"; // �[
        case 1584: return "e"; // �\
        case 1586: return "yan"; // �]
        case 1588: return "qu"; // �^
        case 1590: return "xun"; // �_
        case 1592: return "nian"; // �`
        case 1594: return "zu"; // �a
        case 1596: return "shi"; // �b
        case 1598: return "xi"; // �c
        case 1600: return "wan"; // �d
        case 1602: return "wan"; // �e
        case 1604: return "xie"; // �f
        case 1606: return "dan"; // �g
        case 1608: return "ji"; // �h
        case 1610: return "lu"; // �i
        case 1612: return "guan"; // �j
        case 1614: return "xi"; // �k
        case 1616: return "xie"; // �l
        case 1618: return "jie"; // �m
        case 1620: return "ang"; // �n
        case 1622: return "qiong"; // �o
        case 1624: return "shao"; // �p
        case 1626: return "chi"; // �q
        case 1628: return "su"; // �r
        case 1630: return "que"; // �s
        case 1632: return "kui"; // �t
        case 1634: return "ji"; // �u
        case 1636: return "e"; // �v
        case 1638: return "xi"; // �w
        case 1640: return "san"; // �x
        case 1642: return "yan"; // �y
        case 1644: return "zhe"; // �z
        case 1646: return "han"; // �{
        case 1648: return "ya"; // �|
        case 1650: return "di"; // �}
        case 1652: return "zha"; // �~
        case 1654: return ""; // ��
        case 1656: return "pang"; // ��
        case 1658: return "ae"; // ��
        case 1660: return "qie"; // ��
        case 1662: return "ya"; // ��
        case 1664: return "zhi"; // ��
        case 1666: return "mang"; // ��
        case 1668: return "ti"; // ��
        case 1670: return "she"; // ��
        case 1672: return "ting"; // ��
        case 1674: return "zui"; // ��
        case 1676: return "fei"; // ��
        case 1678: return "ce"; // ��
        case 1680: return "yuan"; // ��
        case 1682: return "li"; // ��
        case 1684: return "dian"; // ��
        case 1686: return "jin"; // ��
        case 1688: return "ao"; // ��
        case 1690: return "gui"; // ��
        case 1692: return "yan"; // ��
        case 1694: return "li"; // ��
        case 1696: return "an"; // ��
        case 1698: return "lan"; // ��
        case 1700: return "li"; // ��
        case 1702: return "yan"; // ��
        case 1704: return "yan"; // ��
        case 1706: return "yuan"; // ��
        case 1708: return "gong"; // ��
        case 1710: return "mian"; // ��
        case 1712: return "qiu"; // ��
        case 1714: return "qu"; // ��
        case 1716: return "keum"; // ��
        case 1718: return "lei"; // ��
        case 1720: return "du"; // ��
        case 1722: return "hui"; // ��
        case 1724: return "can"; // ��
        case 1726: return "shen"; // ��
        case 1728: return "shen"; // ��
        case 1730: return "ai"; // ��
        case 1732: return "dai"; // ��
        case 1734: return "shou"; // ��
        case 1736: return "guai"; // ��
        case 1738: return "ba"; // ��
        case 1740: return "ruo"; // ��
        case 1742: return "li"; // ��
        case 1744: return "yi"; // ��
        case 1746: return "jia"; // ��
        case 1748: return "sou"; // ��
        case 1750: return "ji"; // ��
        case 1752: return "wei"; // ��
        case 1754: return "rui"; // ��
        case 1756: return "cong"; // ��
        case 1758: return "gua"; // ��
        case 1760: return "qiu"; // ��
        case 1762: return "chi"; // ��
        case 1764: return "dug"; // ��
        case 1766: return "hong"; // ��
        case 1768: return "mie"; // ��
        case 1770: return "mang"; // ��
        case 1772: return "xuan"; // ��
        case 1774: return "ji"; // ��
        case 1776: return "duo"; // ��
        case 1778: return "ye"; // ��
        case 1780: return "ou"; // ��
        case 1782: return "huo"; // ��
        case 1784: return "yi"; // ��
        case 1786: return "chou"; // ��
        case 1788: return "qin"; // ��
        case 1790: return "ge"; // ��
        case 1792: return "bu"; // ��
        case 1794: return "e"; // ��
        case 1796: return "hong"; // ��
        case 1798: return "wu"; // ��
        case 1800: return "na"; // ��
        case 1802: return "jue"; // ��
        case 1804: return "dou"; // ��
        case 1806: return "ou"; // ��
        case 1808: return "gao"; // ��
        case 1810: return "jun"; // ��
        case 1812: return "lu"; // ��
        case 1814: return "ge"; // ��
        case 1816: return "wen"; // ��
        case 1818: return "qi"; // ��
        case 1820: return "wu"; // ��
        case 1822: return "jiao"; // ��
        case 1824: return "yun"; // ��
        case 1826: return "chi"; // ��
        case 1828: return "sheng"; // ��
        case 1830: return "tian"; // ��
        case 1832: return "wen"; // ��
        case 1834: return "e"; // ��
        case 1836: return "shi"; // ��
        case 1838: return "juan"; // ��
        case 1840: return "pen"; // ��
        case 1842: return "wen"; // ��
        case 1844: return "mou"; // ��
        case 1846: return "ran"; // ��
        case 1848: return "di"; // ��
        case 1850: return "shi"; // ��
        case 1852: return "zhou"; // ��
        case 1854: return "tie"; // ��
        case 1856: return "xi"; // ��
        case 1858: return "yi"; // ��
        case 1860: return "qi"; // ��
        case 1862: return "ping"; // ��
        case 1864: return "zi"; // ��
        case 1866: return "hou"; // ��
        case 1868: return "yi"; // ��
        case 1870: return "hao"; // ��
        case 1872: return "ya"; // ��
        case 1874: return "ka"; // ��
        case 1876: return "han"; // ��
        case 1878: return "tuo"; // ��
        case 1880: return "pou"; // ��
        case 1882: return "bi"; // ��
        case 1884: return "fu"; // ��
        case 1886: return "yang"; // ��
        case 1888: return "he"; // ��
        case 1890: return "tai"; // ��
        case 1892: return "da"; // ��
        case 1894: return "wa"; // ��
        case 1896: return "zuo"; // ��
        case 1898: return "bu"; // ��
        case 1900: return "ta"; // ��
        case 1902: return "xian"; // ��
        case 1904: return "huo"; // ��
        case 1906: return "qi"; // ��
        case 1908: return "er"; // ��
        case 1910: return "e"; // �@
        case 1912: return "xi"; // �A
        case 1914: return "zhou"; // �B
        case 1916: return "xun"; // �C
        case 1918: return "xiao"; // �D
        case 1920: return "kua"; // �E
        case 1922: return "huai"; // �F
        case 1924: return "tao"; // �G
        case 1926: return "e"; // �H
        case 1928: return "xuan"; // �I
        case 1930: return "wai"; // �J
        case 1932: return "lao"; // �K
        case 1934: return "tong"; // �L
        case 1936: return "xiong"; // �M
        case 1938: return "you"; // �N
        case 1940: return "mi"; // �O
        case 1942: return "nian"; // �P
        case 1944: return "xing"; // �Q
        case 1946: return "pun"; // �R
        case 1948: return "hao"; // �S
        case 1950: return "yuan"; // �T
        case 1952: return "ka"; // �U
        case 1954: return "pou"; // �V
        case 1956: return "mang"; // �W
        case 1958: return "zu"; // �X
        case 1960: return "he"; // �Y
        case 1962: return "xian"; // �Z
        case 1964: return "lao"; // �[
        case 1966: return "bei"; // �\
        case 1968: return "lang"; // �]
        case 1970: return "ba"; // �^
        case 1972: return "mie"; // �_
        case 1974: return "lie"; // �`
        case 1976: return "sui"; // �a
        case 1978: return "fu"; // �b
        case 1980: return "han"; // �c
        case 1982: return "yue"; // �d
        case 1984: return "you"; // �e
        case 1986: return "gu"; // �f
        case 1988: return "gu"; // �g
        case 1990: return "bei"; // �h
        case 1992: return "han"; // �i
        case 1994: return "yi"; // �j
        case 1996: return "jia"; // �k
        case 1998: return "tu"; // �l
        case 2000: return "yan"; // �m
        case 2002: return "wan"; // �n
        case 2004: return "li"; // �o
        case 2006: return "qiu"; // �p
        case 2008: return "che"; // �q
        case 2010: return "zao"; // �r
        case 2012: return "ya"; // �s
        case 2014: return "dou"; // �t
        case 2016: return "qi"; // �u
        case 2018: return "di"; // �v
        case 2020: return "qin"; // �w
        case 2022: return "mas"; // �x
        case 2024: return "gong"; // �y
        case 2026: return "teo"; // �z
        case 2028: return "keos"; // �{
        case 2030: return "liang"; // �|
        case 2032: return "lang"; // �}
        case 2034: return "sha"; // �~
        case 2036: return ""; // ��
        case 2038: return "zo"; // ��
        case 2040: return "wo"; // ��
        case 2042: return "yin"; // ��
        case 2044: return "qi"; // ��
        case 2046: return "er"; // ��
        case 2048: return "qiang"; // ��
        case 2050: return "an"; // ��
        case 2052: return "jie"; // ��
        case 2054: return "dian"; // ��
        case 2056: return "yu"; // ��
        case 2058: return "tian"; // ��
        case 2060: return "lai"; // ��
        case 2062: return "xi"; // ��
        case 2064: return "ai"; // ��
        case 2066: return "nou"; // ��
        case 2068: return "zhao"; // ��
        case 2070: return "di"; // ��
        case 2072: return "e"; // ��
        case 2074: return "xiao"; // ��
        case 2076: return "qiang"; // ��
        case 2078: return "tun"; // ��
        case 2080: return "wu"; // ��
        case 2082: return "wen"; // ��
        case 2084: return "die"; // ��
        case 2086: return "gu"; // ��
        case 2088: return "qi"; // ��
        case 2090: return "qi"; // ��
        case 2092: return "dan"; // ��
        case 2094: return "ye"; // ��
        case 2096: return "zi"; // ��
        case 2098: return "bi"; // ��
        case 2100: return "cui"; // ��
        case 2102: return "he"; // ��
        case 2104: return "ya"; // ��
        case 2106: return "qi"; // ��
        case 2108: return "zhe"; // ��
        case 2110: return "liang"; // ��
        case 2112: return "xian"; // ��
        case 2114: return "ying"; // ��
        case 2116: return "gua"; // ��
        case 2118: return "ze"; // ��
        case 2120: return "guo"; // ��
        case 2122: return "luo"; // ��
        case 2124: return "yan"; // ��
        case 2126: return "di"; // ��
        case 2128: return "jue"; // ��
        case 2130: return "tan"; // ��
        case 2132: return "geu"; // ��
        case 2134: return "tang"; // ��
        case 2136: return "an"; // ��
        case 2138: return "dan"; // ��
        case 2140: return "yu"; // ��
        case 2142: return "zhe"; // ��
        case 2144: return "zhou"; // ��
        case 2146: return "chai"; // ��
        case 2148: return "wai"; // ��
        case 2150: return "yu"; // ��
        case 2152: return "zan"; // ��
        case 2154: return "yao"; // ��
        case 2156: return "mian"; // ��
        case 2158: return "hu"; // ��
        case 2160: return "yun"; // ��
        case 2162: return "huan"; // ��
        case 2164: return "yuan"; // ��
        case 2166: return "ji"; // ��
        case 2168: return "zhong"; // ��
        case 2170: return "wei"; // ��
        case 2172: return "che"; // ��
        case 2174: return "xu"; // ��
        case 2176: return "huang"; // ��
        case 2178: return "duo"; // ��
        case 2180: return "nie"; // ��
        case 2182: return "liang"; // ��
        case 2184: return "yu"; // ��
        case 2186: return "sang"; // ��
        case 2188: return "kai"; // ��
        case 2190: return "qiao"; // ��
        case 2192: return "yan"; // ��
        case 2194: return "dan"; // ��
        case 2196: return "ben"; // ��
        case 2198: return "can"; // ��
        case 2200: return "yo"; // ��
        case 2202: return "wei"; // ��
        case 2204: return "ying"; // ��
        case 2206: return "po"; // ��
        case 2208: return "bei"; // ��
        case 2210: return "gib"; // ��
        case 2212: return "qiao"; // ��
        case 2214: return "gu"; // ��
        case 2216: return "ti"; // ��
        case 2218: return "yao"; // ��
        case 2220: return "he"; // ��
        case 2222: return "qiang"; // ��
        case 2224: return "se"; // ��
        case 2226: return "yong"; // ��
        case 2228: return "gong"; // ��
        case 2230: return "xie"; // ��
        case 2232: return "ma"; // ��
        case 2234: return "cha"; // ��
        case 2236: return "hai"; // ��
        case 2238: return "ru"; // ��
        case 2240: return "wa"; // ��
        case 2242: return "ji"; // ��
        case 2244: return "beng"; // ��
        case 2246: return "wu"; // ��
        case 2248: return "qian"; // ��
        case 2250: return "zi"; // ��
        case 2252: return "lao"; // ��
        case 2254: return "wa"; // ��
        case 2256: return "jia"; // ��
        case 2258: return "suo"; // ��
        case 2260: return "cis"; // ��
        case 2262: return "sai"; // ��
        case 2264: return "go"; // ��
        case 2266: return "na"; // ��
        case 2268: return "qiang"; // ��
        case 2270: return "bi"; // ��
        case 2272: return "ao"; // ��
        case 2274: return "lian"; // ��
        case 2276: return "zui"; // ��
        case 2278: return "zhe"; // ��
        case 2280: return "mo"; // ��
        case 2282: return "tan"; // ��
        case 2284: return "jiao"; // ��
        case 2286: return "chong"; // ��
        case 2288: return "jiao"; // ��
        case 2290: return "ge"; // ��
        case 2292: return "tan"; // �@
        case 2294: return "shan"; // �A
        case 2296: return "ai"; // �B
        case 2298: return "xiao"; // �C
        case 2300: return "lou"; // �D
        case 2302: return "jiao"; // �E
        case 2304: return "hu"; // �F
        case 2306: return "hui"; // �G
        case 2308: return "guo"; // �H
        case 2310: return "ou"; // �I
        case 2312: return "xian"; // �J
        case 2314: return "ze"; // �K
        case 2316: return "chang"; // �L
        case 2318: return "po"; // �M
        case 2320: return "de"; // �N
        case 2322: return "ma"; // �O
        case 2324: return "hu"; // �P
        case 2326: return "ga"; // �Q
        case 2328: return "tang"; // �R
        case 2330: return "ye"; // �S
        case 2332: return "sai"; // �T
        case 2334: return "jiao"; // �U
        case 2336: return "xiao"; // �V
        case 2338: return "hua"; // �W
        case 2340: return "mai"; // �X
        case 2342: return "ran"; // �Y
        case 2344: return "lao"; // �Z
        case 2346: return "xiao"; // �[
        case 2348: return "ji"; // �\
        case 2350: return "kui"; // �]
        case 2352: return "xiao"; // �^
        case 2354: return "hao"; // �_
        case 2356: return "mu"; // �`
        case 2358: return "qiao"; // �a
        case 2360: return "xu"; // �b
        case 2362: return "tan"; // �c
        case 2364: return "dan"; // �d
        case 2366: return "xun"; // �e
        case 2368: return "wu"; // �f
        case 2370: return "zun"; // �g
        case 2372: return "bo"; // �h
        case 2374: return "kai"; // �i
        case 2376: return "hui"; // �j
        case 2378: return "can"; // �k
        case 2380: return "chuang"; // �l
        case 2382: return "za"; // �m
        case 2384: return "dan"; // �n
        case 2386: return "yu"; // �o
        case 2388: return "tun"; // �p
        case 2390: return "xi"; // �q
        case 2392: return "qi"; // �r
        case 2394: return "hao"; // �s
        case 2396: return "lian"; // �t
        case 2398: return "xu"; // �u
        case 2400: return "hui"; // �v
        case 2402: return "yin"; // �w
        case 2404: return "xun"; // �x
        case 2406: return "yao"; // �y
        case 2408: return "si"; // �z
        case 2410: return "yan"; // �{
        case 2412: return "ying"; // �|
        case 2414: return "da"; // �}
        case 2416: return "dan"; // �~
        case 2418: return ""; // ��
        case 2420: return "zhou"; // ��
        case 2422: return "nong"; // ��
        case 2424: return "yue"; // ��
        case 2426: return "xie"; // ��
        case 2428: return "jiao"; // ��
        case 2430: return "yuan"; // ��
        case 2432: return "ai"; // ��
        case 2434: return "yong"; // ��
        case 2436: return "kuai"; // ��
        case 2438: return "yu"; // ��
        case 2440: return "pen"; // ��
        case 2442: return "dao"; // ��
        case 2444: return "hen"; // ��
        case 2446: return "dun"; // ��
        case 2448: return "dang"; // ��
        case 2450: return "xin"; // ��
        case 2452: return "pi"; // ��
        case 2454: return "yin"; // ��
        case 2456: return "zui"; // ��
        case 2458: return "ning"; // ��
        case 2460: return "di"; // ��
        case 2462: return "lan"; // ��
        case 2464: return "ta"; // ��
        case 2466: return "wo"; // ��
        case 2468: return "xia"; // ��
        case 2470: return "ye"; // ��
        case 2472: return "duo"; // ��
        case 2474: return "pi"; // ��
        case 2476: return "zhou"; // ��
        case 2478: return "ji"; // ��
        case 2480: return "jin"; // ��
        case 2482: return "chang"; // ��
        case 2484: return "xun"; // ��
        case 2486: return "me"; // ��
        case 2488: return "ti"; // ��
        case 2490: return "lu"; // ��
        case 2492: return "hui"; // ��
        case 2494: return "bo"; // ��
        case 2496: return "you"; // ��
        case 2498: return "nie"; // ��
        case 2500: return "yin"; // ��
        case 2502: return "yo"; // ��
        case 2504: return "me"; // ��
        case 2506: return "hong"; // ��
        case 2508: return "zhe"; // ��
        case 2510: return "li"; // ��
        case 2512: return "liu"; // ��
        case 2514: return "hai"; // ��
        case 2516: return "nang"; // ��
        case 2518: return "mo"; // ��
        case 2520: return "yan"; // ��
        case 2522: return "li"; // ��
        case 2524: return "lu"; // ��
        case 2526: return "long"; // ��
        case 2528: return "mo"; // ��
        case 2530: return "dan"; // ��
        case 2532: return "chen"; // ��
        case 2534: return "pin"; // ��
        case 2536: return "pi"; // ��
        case 2538: return "xiang"; // ��
        case 2540: return "me"; // ��
        case 2542: return "xi"; // ��
        case 2544: return "duo"; // ��
        case 2546: return "ku"; // ��
        case 2548: return "yan"; // ��
        case 2550: return "chan"; // ��
        case 2552: return "ying"; // ��
        case 2554: return "dim"; // ��
        case 2556: return "la"; // ��
        case 2558: return "ta"; // ��
        case 2560: return "ao"; // ��
        case 2562: return "chuo"; // ��
        case 2564: return "huan"; // ��
        case 2566: return "huo"; // ��
        case 2568: return "zhuan"; // ��
        case 2570: return "nie"; // ��
        case 2572: return "xiao"; // ��
        case 2574: return "zha"; // ��
        case 2576: return "li"; // ��
        case 2578: return "chan"; // ��
        case 2580: return "chai"; // ��
        case 2582: return "li"; // ��
        case 2584: return "yi"; // ��
        case 2586: return "luo"; // ��
        case 2588: return "za"; // ��
        case 2590: return "su"; // ��
        case 2592: return "xi"; // ��
        case 2594: return "zen"; // ��
        case 2596: return "jian"; // ��
        case 2598: return "nie"; // ��
        case 2600: return "zhu"; // ��
        case 2602: return "lan"; // ��
        case 2604: return "nie"; // ��
        case 2606: return "ram"; // ��
        case 2608: return "lo"; // ��
        case 2610: return "hui"; // ��
        case 2612: return "yin"; // ��
        case 2614: return "nin"; // ��
        case 2616: return "tuan"; // ��
        case 2618: return "kang"; // ��
        case 2620: return "yuan"; // ��
        case 2622: return "jiong"; // ��
        case 2624: return "pian"; // ��
        case 2626: return "yun"; // ��
        case 2628: return "cong"; // ��
        case 2630: return "hui"; // ��
        case 2632: return "e"; // ��
        case 2634: return "guo"; // ��
        case 2636: return "tong"; // ��
        case 2638: return "tu"; // ��
        case 2640: return "guo"; // ��
        case 2642: return "qun"; // ��
        case 2644: return "ri"; // ��
        case 2646: return "guo"; // ��
        case 2648: return "tai"; // ��
        case 2650: return "guo"; // ��
        case 2652: return "yin"; // ��
        case 2654: return "huan"; // ��
        case 2656: return "han"; // ��
        case 2658: return "lun"; // ��
        case 2660: return "guo"; // ��
        case 2662: return "chui"; // ��
        case 2664: return "wei"; // ��
        case 2666: return "yuan"; // ��
        case 2668: return "juan"; // ��
        case 2670: return "ku"; // ��
        case 2672: return "pu"; // ��
        case 2674: return "yuan"; // �@
        case 2676: return "yuan"; // �A
        case 2678: return "ya"; // �B
        case 2680: return "tuan"; // �C
        case 2682: return "tu"; // �D
        case 2684: return "tu"; // �E
        case 2686: return "tuan"; // �F
        case 2688: return "lue"; // �G
        case 2690: return "hui"; // �H
        case 2692: return "yi"; // �I
        case 2694: return "luan"; // �J
        case 2696: return "luan"; // �K
        case 2698: return "ya"; // �L
        case 2700: return "tu"; // �M
        case 2702: return "ting"; // �N
        case 2704: return "pu"; // �O
        case 2706: return "lu"; // �P
        case 2708: return "kuai"; // �Q
        case 2710: return "ya"; // �R
        case 2712: return "yu"; // �S
        case 2714: return "qian"; // �T
        case 2716: return "qian"; // �U
        case 2718: return "zhuo"; // �V
        case 2720: return "dang"; // �W
        case 2722: return "qia"; // �X
        case 2724: return "xia"; // �Y
        case 2726: return "shan"; // �Z
        case 2728: return "nie"; // �[
        case 2730: return "mo"; // �\
        case 2732: return "jia"; // �]
        case 2734: return "zhi"; // �^
        case 2736: return "xun"; // �_
        case 2738: return "yi"; // �`
        case 2740: return "qin"; // �a
        case 2742: return "mei"; // �b
        case 2744: return "keng"; // �c
        case 2746: return "tun"; // �d
        case 2748: return "fen"; // �e
        case 2750: return "bi"; // �f
        case 2752: return "jing"; // �g
        case 2754: return "di"; // �h
        case 2756: return "jing"; // �i
        case 2758: return "ji"; // �j
        case 2760: return "di"; // �k
        case 2762: return "jing"; // �l
        case 2764: return "pan"; // �m
        case 2766: return "tang"; // �n
        case 2768: return "ju"; // �o
        case 2770: return "zhi"; // �p
        case 2772: return "gua"; // �q
        case 2774: return "tai"; // �r
        case 2776: return "shang"; // �s
        case 2778: return "yang"; // �t
        case 2780: return "fo"; // �u
        case 2782: return "lu"; // �v
        case 2784: return "qiu"; // �w
        case 2786: return "gou"; // �x
        case 2788: return "xue"; // �y
        case 2790: return "ba"; // �z
        case 2792: return "ling"; // �{
        case 2794: return "zhu"; // �|
        case 2796: return "fu"; // �}
        case 2798: return "hu"; // �~
        case 2800: return ""; // ��
        case 2802: return "zhi"; // ��
        case 2804: return "ao"; // ��
        case 2806: return "dai"; // ��
        case 2808: return "pao"; // ��
        case 2810: return "min"; // ��
        case 2812: return "ji"; // ��
        case 2814: return "he"; // ��
        case 2816: return "lu"; // ��
        case 2818: return "ci"; // ��
        case 2820: return "chi"; // ��
        case 2822: return "yin"; // ��
        case 2824: return "hou"; // ��
        case 2826: return "dui"; // ��
        case 2828: return "zhao"; // ��
        case 2830: return "fu"; // ��
        case 2832: return "guang"; // ��
        case 2834: return "yao"; // ��
        case 2836: return "duo"; // ��
        case 2838: return "gui"; // ��
        case 2840: return "cha"; // ��
        case 2842: return "yang"; // ��
        case 2844: return "xie"; // ��
        case 2846: return "shou"; // ��
        case 2848: return "bing"; // ��
        case 2850: return "hong"; // ��
        case 2852: return "da"; // ��
        case 2854: return "ka"; // ��
        case 2856: return "dang"; // ��
        case 2858: return "hang"; // ��
        case 2860: return "an"; // ��
        case 2862: return "xing"; // ��
        case 2864: return "xian"; // ��
        case 2866: return "bang"; // ��
        case 2868: return "fou"; // ��
        case 2870: return "bei"; // ��
        case 2872: return "yi"; // ��
        case 2874: return "yin"; // ��
        case 2876: return "an"; // ��
        case 2878: return "xu"; // ��
        case 2880: return "zhui"; // ��
        case 2882: return "qin"; // ��
        case 2884: return "beng"; // ��
        case 2886: return "fang"; // ��
        case 2888: return "que"; // ��
        case 2890: return "yong"; // ��
        case 2892: return "jun4      "; // ��
        case 2894: return "jia"; // ��
        case 2896: return "di"; // ��
        case 2898: return "lang"; // ��
        case 2900: return "juan"; // ��
        case 2902: return "jin"; // ��
        case 2904: return "zhe"; // ��
        case 2906: return "lie"; // ��
        case 2908: return "hua"; // ��
        case 2910: return "bu"; // ��
        case 2912: return "jiong"; // ��
        case 2914: return "ye"; // ��
        case 2916: return "di"; // ��
        case 2918: return "ya"; // ��
        case 2920: return "juan"; // ��
        case 2922: return "su"; // ��
        case 2924: return "qing"; // ��
        case 2926: return "wan"; // ��
        case 2928: return "ju"; // ��
        case 2930: return "lun"; // ��
        case 2932: return "zheng"; // ��
        case 2934: return "kong"; // ��
        case 2936: return "chong"; // ��
        case 2938: return "dong"; // ��
        case 2940: return "tan"; // ��
        case 2942: return "cai"; // ��
        case 2944: return "tou"; // ��
        case 2946: return "bang"; // ��
        case 2948: return "kan"; // ��
        case 2950: return "duo"; // ��
        case 2952: return "zhi"; // ��
        case 2954: return "zhi"; // ��
        case 2956: return "dui"; // ��
        case 2958: return "qi"; // ��
        case 2960: return "ju"; // ��
        case 2962: return "ni"; // ��
        case 2964: return "ke"; // ��
        case 2966: return "kun"; // ��
        case 2968: return "ni"; // ��
        case 2970: return "jian"; // ��
        case 2972: return "gang"; // ��
        case 2974: return "yu"; // ��
        case 2976: return "e"; // ��
        case 2978: return "gu"; // ��
        case 2980: return "leng"; // ��
        case 2982: return "fang"; // ��
        case 2984: return "ya"; // ��
        case 2986: return "kun"; // ��
        case 2988: return "an"; // ��
        case 2990: return "shen"; // ��
        case 2992: return "nao"; // ��
        case 2994: return "tu"; // ��
        case 2996: return "cheng"; // ��
        case 2998: return "huan"; // ��
        case 3000: return "bi"; // ��
        case 3002: return "lian"; // ��
        case 3004: return "wo"; // ��
        case 3006: return "zhuan"; // ��
        case 3008: return "bao"; // ��
        case 3010: return "yu"; // ��
        case 3012: return "mao"; // ��
        case 3014: return "jie"; // ��
        case 3016: return "nuo"; // ��
        case 3018: return "ai"; // ��
        case 3020: return "geng"; // ��
        case 3022: return "zong"; // ��
        case 3024: return "yu"; // ��
        case 3026: return "huang"; // ��
        case 3028: return "e"; // ��
        case 3030: return "yao"; // ��
        case 3032: return "bao"; // ��
        case 3034: return "ji"; // ��
        case 3036: return "mei"; // ��
        case 3038: return "chang"; // ��
        case 3040: return "tuo"; // ��
        case 3042: return "yin"; // ��
        case 3044: return "feng"; // ��
        case 3046: return "zhong"; // ��
        case 3048: return "jie"; // ��
        case 3050: return "jin"; // ��
        case 3052: return "heng"; // ��
        case 3054: return "gang"; // ��
        case 3056: return "chuan"; // �@
        case 3058: return "jian"; // �A
        case 3060: return "ping"; // �B
        case 3062: return "lei"; // �C
        case 3064: return "jiang"; // �D
        case 3066: return "huang"; // �E
        case 3068: return "duan"; // �F
        case 3070: return "wan"; // �G
        case 3072: return "xuan"; // �H
        case 3074: return "xi"; // �I
        case 3076: return "ji"; // �J
        case 3078: return "kuai"; // �K
        case 3080: return "ying"; // �L
        case 3082: return "yong"; // �M
        case 3084: return "kai"; // �N
        case 3086: return "su"; // �O
        case 3088: return "shi"; // �P
        case 3090: return "mi"; // �Q
        case 3092: return "weng"; // �R
        case 3094: return "cheng"; // �S
        case 3096: return "tu"; // �T
        case 3098: return "qiao"; // �U
        case 3100: return "zhong"; // �V
        case 3102: return "li"; // �W
        case 3104: return "peng"; // �X
        case 3106: return "bang"; // �Y
        case 3108: return "zang"; // �Z
        case 3110: return "dui"; // �[
        case 3112: return "tian"; // �\
        case 3114: return "wu"; // �]
        case 3116: return "zheng"; // �^
        case 3118: return "xun"; // �_
        case 3120: return "zhen"; // �`
        case 3122: return "ai"; // �a
        case 3124: return "gong"; // �b
        case 3126: return "yan"; // �c
        case 3128: return "kan"; // �d
        case 3130: return "wen"; // �e
        case 3132: return "xie"; // �f
        case 3134: return "liu"; // �g
        case 3136: return "hai"; // �h
        case 3138: return "lang"; // �i
        case 3140: return "shang"; // �j
        case 3142: return "peng"; // �k
        case 3144: return "beng"; // �l
        case 3146: return "chen"; // �m
        case 3148: return "lu"; // �n
        case 3150: return "lu"; // �o
        case 3152: return "ou"; // �p
        case 3154: return "qian"; // �q
        case 3156: return "mei"; // �r
        case 3158: return "mo"; // �s
        case 3160: return "tuan"; // �t
        case 3162: return "shuan"; // �u
        case 3164: return "lou"; // �v
        case 3166: return "biao"; // �w
        case 3168: return "ce"; // �x
        case 3170: return "di"; // �y
        case 3172: return "zhang"; // �z
        case 3174: return "kan"; // �{
        case 3176: return "dian"; // �|
        case 3178: return "chen"; // �}
        case 3180: return "zhi"; // �~
        case 3182: return ""; // ��
        case 3184: return "ji"; // ��
        case 3186: return "guo"; // ��
        case 3188: return "qiang"; // ��
        case 3190: return "jin"; // ��
        case 3192: return "di"; // ��
        case 3194: return "cui"; // ��
        case 3196: return "yan"; // ��
        case 3198: return "ta"; // ��
        case 3200: return "zeng"; // ��
        case 3202: return "qian"; // ��
        case 3204: return "wei"; // ��
        case 3206: return "zhui"; // ��
        case 3208: return "qiao"; // ��
        case 3210: return "chan"; // ��
        case 3212: return "shan"; // ��
        case 3214: return "ba"; // ��
        case 3216: return "pu"; // ��
        case 3218: return "tui"; // ��
        case 3220: return "dong"; // ��
        case 3222: return "fan"; // ��
        case 3224: return "qiao"; // ��
        case 3226: return "dun"; // ��
        case 3228: return "zun"; // ��
        case 3230: return "di"; // ��
        case 3232: return "sheng"; // ��
        case 3234: return "duo"; // ��
        case 3236: return "duo"; // ��
        case 3238: return "tan"; // ��
        case 3240: return "deng"; // ��
        case 3242: return "wu"; // ��
        case 3244: return "fen"; // ��
        case 3246: return "huang"; // ��
        case 3248: return "tan"; // ��
        case 3250: return "da"; // ��
        case 3252: return "ye"; // ��
        case 3254: return "zhu"; // ��
        case 3256: return "jian"; // ��
        case 3258: return "ao"; // ��
        case 3260: return "qiang"; // ��
        case 3262: return "qiao"; // ��
        case 3264: return "ken"; // ��
        case 3266: return "yi"; // ��
        case 3268: return "pi"; // ��
        case 3270: return "dian"; // ��
        case 3272: return "jiang"; // ��
        case 3274: return "ye"; // ��
        case 3276: return "bo"; // ��
        case 3278: return "tan"; // ��
        case 3280: return "lan"; // ��
        case 3282: return "ju"; // ��
        case 3284: return "huai"; // ��
        case 3286: return "dang"; // ��
        case 3288: return "rang"; // ��
        case 3290: return "qian"; // ��
        case 3292: return "xun"; // ��
        case 3294: return "lan"; // ��
        case 3296: return "xi"; // ��
        case 3298: return "ai"; // ��
        case 3300: return "ya"; // ��
        case 3302: return "dao"; // ��
        case 3304: return "ruan"; // ��
        case 3306: return "jin"; // ��
        case 3308: return "lei"; // ��
        case 3310: return "kuang"; // ��
        case 3312: return "lu"; // ��
        case 3314: return "yan"; // ��
        case 3316: return "tan"; // ��
        case 3318: return "wei"; // ��
        case 3320: return "huai"; // ��
        case 3322: return "long"; // ��
        case 3324: return "long"; // ��
        case 3326: return "rui"; // ��
        case 3328: return "li"; // ��
        case 3330: return "lin"; // ��
        case 3332: return "chan"; // ��
        case 3334: return "xun"; // ��
        case 3336: return "yan"; // ��
        case 3338: return "lei"; // ��
        case 3340: return "ba"; // ��
        case 3342: return "wan"; // ��
        case 3344: return "san"; // ��
        case 3346: return "zhuan"; // ��
        case 3348: return "yi"; // ��
        case 3350: return "mai"; // ��
        case 3352: return "zhu"; // ��
        case 3354: return "zhuan"; // ��
        case 3356: return "hu"; // ��
        case 3358: return "kun"; // ��
        case 3360: return "hu"; // ��
        case 3362: return "xu"; // ��
        case 3364: return "kun"; // ��
        case 3366: return "shou"; // ��
        case 3368: return "mang"; // ��
        case 3370: return "dun"; // ��
        case 3372: return "shou"; // ��
        case 3374: return "yi"; // ��
        case 3376: return "ying"; // ��
        case 3378: return "jiang"; // ��
        case 3380: return "pang"; // ��
        case 3382: return "zhai"; // ��
        case 3384: return "bian"; // ��
        case 3386: return "sui"; // ��
        case 3388: return "qun"; // ��
        case 3390: return "ling"; // ��
        case 3392: return "cuo"; // ��
        case 3394: return "xuan"; // ��
        case 3396: return "xie"; // ��
        case 3398: return "nao"; // ��
        case 3400: return "jia"; // ��
        case 3402: return "wan"; // ��
        case 3404: return "wan"; // ��
        case 3406: return "duo"; // ��
        case 3408: return "qing"; // ��
        case 3410: return "oes"; // ��
        case 3412: return "gou"; // ��
        case 3414: return "qi"; // ��
        case 3416: return "meng"; // ��
        case 3418: return "meng"; // ��
        case 3420: return "chen"; // ��
        case 3422: return "ze"; // ��
        case 3424: return "guai"; // ��
        case 3426: return "gao"; // ��
        case 3428: return "ben"; // ��
        case 3430: return "tai"; // ��
        case 3432: return "yan"; // ��
        case 3434: return "bi"; // ��
        case 3436: return "hua"; // ��
        case 3438: return "yun"; // �@
        case 3440: return "ga"; // �A
        case 3442: return "ba"; // �B
        case 3444: return "en"; // �C
        case 3446: return "di"; // �D
        case 3448: return "pao"; // �E
        case 3450: return "juan"; // �F
        case 3452: return "lie"; // �G
        case 3454: return "dian"; // �H
        case 3456: return "yang"; // �I
        case 3458: return "huan"; // �J
        case 3460: return "kai"; // �K
        case 3462: return "zha"; // �L
        case 3464: return "ben"; // �M
        case 3466: return "huang"; // �N
        case 3468: return "fei"; // �O
        case 3470: return "diao"; // �P
        case 3472: return "xun"; // �Q
        case 3474: return "beng"; // �R
        case 3476: return "ao"; // �S
        case 3478: return "weng"; // �T
        case 3480: return "po"; // �U
        case 3482: return "wu"; // �V
        case 3484: return "ao"; // �W
        case 3486: return "jiang"; // �X
        case 3488: return "lian"; // �Y
        case 3490: return "duo"; // �Z
        case 3492: return "yun"; // �[
        case 3494: return "jiang"; // �\
        case 3496: return "shi"; // �]
        case 3498: return "fen"; // �^
        case 3500: return "huo"; // �_
        case 3502: return "bi"; // �`
        case 3504: return "luan"; // �a
        case 3506: return "duo"; // �b
        case 3508: return "ding"; // �c
        case 3510: return "qian"; // �d
        case 3512: return "jiu"; // �e
        case 3514: return "nuan"; // �f
        case 3516: return "cha"; // �g
        case 3518: return "xian"; // �h
        case 3520: return "fan"; // �i
        case 3522: return "ji"; // �j
        case 3524: return "hong"; // �k
        case 3526: return "dan"; // �l
        case 3528: return "you"; // �m
        case 3530: return "jing"; // �n
        case 3532: return "ha"; // �o
        case 3534: return "wen"; // �p
        case 3536: return "zhong"; // �q
        case 3538: return "pa"; // �r
        case 3540: return "keng"; // �s
        case 3542: return "zhong"; // �t
        case 3544: return "yun"; // �u
        case 3546: return "pei"; // �v
        case 3548: return "chi"; // �w
        case 3550: return "yue"; // �x
        case 3552: return "zhuan"; // �y
        case 3554: return "yan"; // �z
        case 3556: return "na"; // �{
        case 3558: return "xin"; // �|
        case 3560: return "fen"; // �}
        case 3562: return "feng"; // �~
        case 3564: return ""; // ��
        case 3566: return "wan"; // ��
        case 3568: return "du"; // ��
        case 3570: return "ba"; // ��
        case 3572: return "zhuo"; // ��
        case 3574: return "zhao"; // ��
        case 3576: return "nai"; // ��
        case 3578: return "yuan"; // ��
        case 3580: return "tou"; // ��
        case 3582: return "xian"; // ��
        case 3584: return "yi"; // ��
        case 3586: return "e"; // ��
        case 3588: return "mo"; // ��
        case 3590: return "bi"; // ��
        case 3592: return "shen"; // ��
        case 3594: return "e"; // ��
        case 3596: return "he"; // ��
        case 3598: return "xu"; // ��
        case 3600: return "fa"; // ��
        case 3602: return "zheng"; // ��
        case 3604: return "min"; // ��
        case 3606: return "ban"; // ��
        case 3608: return "fu"; // ��
        case 3610: return "ling"; // ��
        case 3612: return "zi"; // ��
        case 3614: return "ran"; // ��
        case 3616: return "shan"; // ��
        case 3618: return "yang"; // ��
        case 3620: return "man"; // ��
        case 3622: return "zi"; // ��
        case 3624: return "ju"; // ��
        case 3626: return "ren"; // ��
        case 3628: return "dong"; // ��
        case 3630: return "ji"; // ��
        case 3632: return "gai"; // ��
        case 3634: return "xiang"; // ��
        case 3636: return "hua"; // ��
        case 3638: return "juan"; // ��
        case 3640: return "gou"; // ��
        case 3642: return "jian"; // ��
        case 3644: return "jian"; // ��
        case 3646: return "nian"; // ��
        case 3648: return "zhi"; // ��
        case 3650: return "zhen"; // ��
        case 3652: return "xian"; // ��
        case 3654: return "heng"; // ��
        case 3656: return "guang"; // ��
        case 3658: return "jun1      "; // ��
        case 3660: return "kua"; // ��
        case 3662: return "yan"; // ��
        case 3664: return "ming"; // ��
        case 3666: return "lie"; // ��
        case 3668: return "pei"; // ��
        case 3670: return "e"; // ��
        case 3672: return "you"; // ��
        case 3674: return "yan"; // ��
        case 3676: return "xian"; // ��
        case 3678: return "ti"; // ��
        case 3680: return "wa"; // ��
        case 3682: return "quan"; // ��
        case 3684: return "song"; // ��
        case 3686: return "hong"; // ��
        case 3688: return "dan"; // ��
        case 3690: return "shao"; // ��
        case 3692: return "cheng"; // ��
        case 3694: return "xie"; // ��
        case 3696: return "mang"; // ��
        case 3698: return "fu"; // ��
        case 3700: return "wu"; // ��
        case 3702: return "ke"; // ��
        case 3704: return "chuo"; // ��
        case 3706: return "chuo"; // ��
        case 3708: return "tian"; // ��
        case 3710: return "xing"; // ��
        case 3712: return "nan"; // ��
        case 3714: return "yu"; // ��
        case 3716: return "bi"; // ��
        case 3718: return "nei"; // ��
        case 3720: return "zhi"; // ��
        case 3722: return "han"; // ��
        case 3724: return "zhuan"; // ��
        case 3726: return "ping"; // ��
        case 3728: return "tui"; // ��
        case 3730: return "xian"; // ��
        case 3732: return "wu"; // ��
        case 3734: return "yan"; // ��
        case 3736: return "wu"; // ��
        case 3738: return "xi"; // ��
        case 3740: return "yan"; // ��
        case 3742: return "yu"; // ��
        case 3744: return "si"; // ��
        case 3746: return "li"; // ��
        case 3748: return "ju"; // ��
        case 3750: return "zhui"; // ��
        case 3752: return "qi"; // ��
        case 3754: return "xian"; // ��
        case 3756: return "zhuo"; // ��
        case 3758: return "dong"; // ��
        case 3760: return "lu"; // ��
        case 3762: return "ai"; // ��
        case 3764: return "e"; // ��
        case 3766: return "lou"; // ��
        case 3768: return "mian"; // ��
        case 3770: return "cong"; // ��
        case 3772: return "pei"; // ��
        case 3774: return "ju"; // ��
        case 3776: return "cai"; // ��
        case 3778: return "ling"; // ��
        case 3780: return "xiao"; // ��
        case 3782: return "shu"; // ��
        case 3784: return "qi"; // ��
        case 3786: return "hui"; // ��
        case 3788: return "fan"; // ��
        case 3790: return "wo"; // ��
        case 3792: return "wo"; // ��
        case 3794: return "tan"; // ��
        case 3796: return "fei"; // ��
        case 3798: return "fei"; // ��
        case 3800: return "tian"; // ��
        case 3802: return "ni"; // ��
        case 3804: return "quan"; // ��
        case 3806: return "jing"; // ��
        case 3808: return "jing"; // ��
        case 3810: return "jin"; // ��
        case 3812: return "dian"; // ��
        case 3814: return "xing"; // ��
        case 3816: return "hu"; // ��
        case 3818: return "wan"; // ��
        case 3820: return "lai"; // �@
        case 3822: return "yin"; // �A
        case 3824: return "zhou"; // �B
        case 3826: return "nao"; // �C
        case 3828: return "fu"; // �D
        case 3830: return "lun"; // �E
        case 3832: return "an"; // �F
        case 3834: return "kun"; // �G
        case 3836: return "yin"; // �H
        case 3838: return "ya"; // �I
        case 3840: return "ju"; // �J
        case 3842: return "li"; // �K
        case 3844: return "dian"; // �L
        case 3846: return "xian"; // �M
        case 3848: return "hua"; // �N
        case 3850: return "hua"; // �O
        case 3852: return "yang"; // �P
        case 3854: return "yao"; // �Q
        case 3856: return "nan"; // �R
        case 3858: return "chuo"; // �S
        case 3860: return "jia"; // �T
        case 3862: return "yu"; // �U
        case 3864: return "yu"; // �V
        case 3866: return "wei"; // �W
        case 3868: return "di"; // �X
        case 3870: return "rou"; // �Y
        case 3872: return "mei"; // �Z
        case 3874: return "dan"; // �[
        case 3876: return "nen"; // �\
        case 3878: return "qin"; // �]
        case 3880: return "hui"; // �^
        case 3882: return "wo"; // �_
        case 3884: return "qian"; // �`
        case 3886: return "chun"; // �a
        case 3888: return "miao"; // �b
        case 3890: return "fu"; // �c
        case 3892: return "jie"; // �d
        case 3894: return "duan"; // �e
        case 3896: return "yi"; // �f
        case 3898: return "zhong"; // �g
        case 3900: return "huang"; // �h
        case 3902: return "mian"; // �i
        case 3904: return "an"; // �j
        case 3906: return "ying"; // �k
        case 3908: return "xuan"; // �l
        case 3910: return "jie"; // �m
        case 3912: return "wei"; // �n
        case 3914: return "zheng"; // �o
        case 3916: return "qiu"; // �p
        case 3918: return "ti"; // �q
        case 3920: return "xie"; // �r
        case 3922: return "duo"; // �s
        case 3924: return "lian"; // �t
        case 3926: return "mao"; // �u
        case 3928: return "ran"; // �v
        case 3930: return "si"; // �w
        case 3932: return "pian"; // �x
        case 3934: return "wei"; // �y
        case 3936: return "wa"; // �z
        case 3938: return "cu"; // �{
        case 3940: return "hu"; // �|
        case 3942: return "jie"; // �}
        case 3944: return "bao"; // �~
        case 3946: return ""; // ��
        case 3948: return "xu"; // ��
        case 3950: return "yu"; // ��
        case 3952: return "gui"; // ��
        case 3954: return "chu"; // ��
        case 3956: return "yao"; // ��
        case 3958: return "yuan"; // ��
        case 3960: return "rong"; // ��
        case 3962: return "ru"; // ��
        case 3964: return "liu"; // ��
        case 3966: return "mei"; // ��
        case 3968: return "pan"; // ��
        case 3970: return "ao"; // ��
        case 3972: return "ma"; // ��
        case 3974: return "kui"; // ��
        case 3976: return "qin"; // ��
        case 3978: return "zhen"; // ��
        case 3980: return "yuan"; // ��
        case 3982: return "jie"; // ��
        case 3984: return "rong"; // ��
        case 3986: return "ming"; // ��
        case 3988: return "ying"; // ��
        case 3990: return "su"; // ��
        case 3992: return "niao"; // ��
        case 3994: return "tao"; // ��
        case 3996: return "bang"; // ��
        case 3998: return "lang"; // ��
        case 4000: return "nao"; // ��
        case 4002: return "bao"; // ��
        case 4004: return "pi"; // ��
        case 4006: return "yi"; // ��
        case 4008: return "yu"; // ��
        case 4010: return "xuan"; // ��
        case 4012: return "yuan"; // ��
        case 4014: return "yi"; // ��
        case 4016: return "kang"; // ��
        case 4018: return "yong"; // ��
        case 4020: return "ni"; // ��
        case 4022: return "gui"; // ��
        case 4024: return "jin"; // ��
        case 4026: return "tuan"; // ��
        case 4028: return "ze"; // ��
        case 4030: return "nan"; // ��
        case 4032: return "lao"; // ��
        case 4034: return "zhe"; // ��
        case 4036: return "hu"; // ��
        case 4038: return "hu"; // ��
        case 4040: return "ao"; // ��
        case 4042: return "nen"; // ��
        case 4044: return "ma"; // ��
        case 4046: return "pie"; // ��
        case 4048: return "gu"; // ��
        case 4050: return "wu"; // ��
        case 4052: return "jiao"; // ��
        case 4054: return "duo"; // ��
        case 4056: return "zhan"; // ��
        case 4058: return "miao"; // ��
        case 4060: return "xian"; // ��
        case 4062: return "xian"; // ��
        case 4064: return "mo"; // ��
        case 4066: return "liao"; // ��
        case 4068: return "lian"; // ��
        case 4070: return "hua"; // ��
        case 4072: return "gui"; // ��
        case 4074: return "deng"; // ��
        case 4076: return "zhi"; // ��
        case 4078: return "xu"; // ��
        case 4080: return "yi"; // ��
        case 4082: return "hua"; // ��
        case 4084: return "xi"; // ��
        case 4086: return "kui"; // ��
        case 4088: return "rao"; // ��
        case 4090: return "yan"; // ��
        case 4092: return "chan"; // ��
        case 4094: return "jiao"; // ��
        case 4096: return "mei"; // ��
        case 4098: return "fan"; // ��
        case 4100: return "fan"; // ��
        case 4102: return "yan"; // ��
        case 4104: return "yi"; // ��
        case 4106: return "hei"; // ��
        case 4108: return "jiao"; // ��
        case 4110: return "fan"; // ��
        case 4112: return "shi"; // ��
        case 4114: return "sui"; // ��
        case 4116: return "qiang"; // ��
        case 4118: return "lian"; // ��
        case 4120: return "qiong"; // ��
        case 4122: return "xin"; // ��
        case 4124: return "niao"; // ��
        case 4126: return "dong"; // ��
        case 4128: return "yi"; // ��
        case 4130: return "can"; // ��
        case 4132: return "ai"; // ��
        case 4134: return "niang"; // ��
        case 4136: return "ning"; // ��
        case 4138: return "mo"; // ��
        case 4140: return "diao"; // ��
        case 4142: return "chou"; // ��
        case 4144: return "jin"; // ��
        case 4146: return "ci"; // ��
        case 4148: return "yu"; // ��
        case 4150: return "pin"; // ��
        case 4152: return "rong"; // ��
        case 4154: return "nou"; // ��
        case 4156: return "er"; // ��
        case 4158: return "yan"; // ��
        case 4160: return "tai"; // ��
        case 4162: return "ying"; // ��
        case 4164: return "qian"; // ��
        case 4166: return "yue"; // ��
        case 4168: return "mian"; // ��
        case 4170: return "bi"; // ��
        case 4172: return "shen"; // ��
        case 4174: return "xing"; // ��
        case 4176: return "ni"; // ��
        case 4178: return "du"; // ��
        case 4180: return "liu"; // ��
        case 4182: return "yuan"; // ��
        case 4184: return "lan"; // ��
        case 4186: return "yan"; // ��
        case 4188: return "ling"; // ��
        case 4190: return "jiao"; // ��
        case 4192: return "rang"; // ��
        case 4194: return "lan"; // ��
        case 4196: return "qian"; // ��
        case 4198: return "ying"; // ��
        case 4200: return "shuan"; // ��
        case 4202: return "hui"; // �@
        case 4204: return "quan"; // �A
        case 4206: return "mi"; // �B
        case 4208: return "li"; // �C
        case 4210: return "lian"; // �D
        case 4212: return "yan"; // �E
        case 4214: return "zhu"; // �F
        case 4216: return "lan"; // �G
        case 4218: return "jue"; // �H
        case 4220: return "ma"; // �I
        case 4222: return "xin"; // �J
        case 4224: return "si"; // �K
        case 4226: return "tai"; // �L
        case 4228: return "you"; // �M
        case 4230: return "ni"; // �N
        case 4232: return "sun"; // �O
        case 4234: return "me"; // �P
        case 4236: return "cong"; // �Q
        case 4238: return "wan"; // �R
        case 4240: return "ya"; // �S
        case 4242: return "ni"; // �T
        case 4244: return "zi"; // �U
        case 4246: return "li"; // �V
        case 4248: return "xue"; // �W
        case 4250: return "bo"; // �X
        case 4252: return "nai"; // �Y
        case 4254: return "nie"; // �Z
        case 4256: return "ying"; // �[
        case 4258: return "luan"; // �\
        case 4260: return "rong"; // �]
        case 4262: return "kong"; // �^
        case 4264: return "tu"; // �_
        case 4266: return "rou"; // �`
        case 4268: return "yao"; // �a
        case 4270: return "yi"; // �b
        case 4272: return "jing"; // �c
        case 4274: return "zhun"; // �d
        case 4276: return "zhu"; // �e
        case 4278: return "hong"; // �f
        case 4280: return "shi"; // �g
        case 4282: return "yi"; // �h
        case 4284: return "tiao"; // �i
        case 4286: return "xi"; // �j
        case 4288: return "cheng"; // �k
        case 4290: return "jiong"; // �l
        case 4292: return "gong"; // �m
        case 4294: return "xiao"; // �n
        case 4296: return "zha"; // �o
        case 4298: return "dao"; // �p
        case 4300: return "pan"; // �q
        case 4302: return "huang"; // �r
        case 4304: return "mi"; // �s
        case 4306: return "kou"; // �t
        case 4308: return "cai"; // �u
        case 4310: return "zan"; // �v
        case 4312: return "yuan"; // �w
        case 4314: return "qiu"; // �x
        case 4316: return "he"; // �y
        case 4318: return "zhen"; // �z
        case 4320: return "jian"; // �{
        case 4322: return "ning"; // �|
        case 4324: return "bing"; // �}
        case 4326: return "huan"; // �~
        case 4328: return ""; // ��
        case 4330: return "qin"; // ��
        case 4332: return "shi"; // ��
        case 4334: return "ning"; // ��
        case 4336: return "jin"; // ��
        case 4338: return "ning"; // ��
        case 4340: return "tian"; // ��
        case 4342: return "yu"; // ��
        case 4344: return "bao"; // ��
        case 4346: return "kuan"; // ��
        case 4348: return "ning"; // ��
        case 4350: return "lu"; // ��
        case 4352: return "qin"; // ��
        case 4354: return "hu"; // ��
        case 4356: return "shi"; // ��
        case 4358: return "ning"; // ��
        case 4360: return "shen"; // ��
        case 4362: return "wei"; // ��
        case 4364: return "xie"; // ��
        case 4366: return "kuan"; // ��
        case 4368: return "hui"; // ��
        case 4370: return "jun4      "; // ��
        case 4372: return "yi"; // ��
        case 4374: return "yi"; // ��
        case 4376: return "bao"; // ��
        case 4378: return "qin"; // ��
        case 4380: return "chong"; // ��
        case 4382: return "bao"; // ��
        case 4384: return "feng"; // ��
        case 4386: return "lu"; // ��
        case 4388: return "dui"; // ��
        case 4390: return "po"; // ��
        case 4392: return "zhuan"; // ��
        case 4394: return "bu"; // ��
        case 4396: return "ke"; // ��
        case 4398: return "jiang"; // ��
        case 4400: return "zhuan"; // ��
        case 4402: return "xun"; // ��
        case 4404: return "zhu"; // ��
        case 4406: return "dui"; // ��
        case 4408: return "dao"; // ��
        case 4410: return "ji"; // ��
        case 4412: return "er"; // ��
        case 4414: return "er"; // ��
        case 4416: return "shu"; // ��
        case 4418: return "chang"; // ��
        case 4420: return "ma"; // ��
        case 4422: return "liao"; // ��
        case 4424: return "xian"; // ��
        case 4426: return "xian"; // ��
        case 4428: return "kun"; // ��
        case 4430: return "you"; // ��
        case 4432: return "niao"; // ��
        case 4434: return "mang"; // ��
        case 4436: return "wang"; // ��
        case 4438: return "wang"; // ��
        case 4440: return "wang"; // ��
        case 4442: return "yao"; // ��
        case 4444: return "duo"; // ��
        case 4446: return "kui"; // ��
        case 4448: return "zhong"; // ��
        case 4450: return "gan"; // ��
        case 4452: return "gu"; // ��
        case 4454: return "tui"; // ��
        case 4456: return "gan"; // ��
        case 4458: return "gan"; // ��
        case 4460: return "xi"; // ��
        case 4462: return "bi"; // ��
        case 4464: return "jie"; // ��
        case 4466: return "tian"; // ��
        case 4468: return "diao"; // ��
        case 4470: return "shi"; // ��
        case 4472: return "zhen"; // ��
        case 4474: return "xie"; // ��
        case 4476: return "ni"; // ��
        case 4478: return "xi"; // ��
        case 4480: return "wei"; // ��
        case 4482: return "man"; // ��
        case 4484: return "lou"; // ��
        case 4486: return "ping"; // ��
        case 4488: return "ti"; // ��
        case 4490: return "fei"; // ��
        case 4492: return "xie"; // ��
        case 4494: return "lu"; // ��
        case 4496: return "ceng"; // ��
        case 4498: return "xie"; // ��
        case 4500: return "ju"; // ��
        case 4502: return "jue"; // ��
        case 4504: return "liao"; // ��
        case 4506: return "jue"; // ��
        case 4508: return "shu"; // ��
        case 4510: return "xie"; // ��
        case 4512: return "po"; // ��
        case 4514: return "wa"; // ��
        case 4516: return "xian"; // ��
        case 4518: return "li"; // ��
        case 4520: return "e"; // ��
        case 4522: return "dao"; // ��
        case 4524: return "hui"; // ��
        case 4526: return "long"; // ��
        case 4528: return "ren"; // ��
        case 4530: return "wu"; // ��
        case 4532: return "an"; // ��
        case 4534: return "shen"; // ��
        case 4536: return "chu"; // ��
        case 4538: return "yen"; // ��
        case 4540: return "yue"; // ��
        case 4542: return "ban"; // ��
        case 4544: return "yao"; // ��
        case 4546: return "ang"; // ��
        case 4548: return "wu"; // ��
        case 4550: return "jie"; // ��
        case 4552: return "e"; // ��
        case 4554: return "fen"; // ��
        case 4556: return "wan"; // ��
        case 4558: return "qian"; // ��
        case 4560: return "qi"; // ��
        case 4562: return "jie"; // ��
        case 4564: return "zuo"; // ��
        case 4566: return "zuo"; // ��
        case 4568: return "yang"; // ��
        case 4570: return "ju"; // ��
        case 4572: return "gang"; // ��
        case 4574: return "xue"; // ��
        case 4576: return "po"; // ��
        case 4578: return "li"; // ��
        case 4580: return "tiao"; // ��
        case 4582: return "qu"; // ��
        case 4584: return "fu"; // �@
        case 4586: return "tuo"; // �A
        case 4588: return "pi"; // �B
        case 4590: return "ao"; // �C
        case 4592: return "kuang"; // �D
        case 4594: return "qu"; // �E
        case 4596: return "po"; // �F
        case 4598: return "tiao"; // �G
        case 4600: return "ling"; // �H
        case 4602: return "chi"; // �I
        case 4604: return "ping"; // �J
        case 4606: return "ceom"; // �K
        case 4608: return "bang"; // �L
        case 4610: return "tong"; // �M
        case 4612: return "xue"; // �N
        case 4614: return "bian"; // �O
        case 4616: return "he"; // �P
        case 4618: return "ba"; // �Q
        case 4620: return "luo"; // �R
        case 4622: return "e"; // �S
        case 4624: return "fu"; // �T
        case 4626: return "die"; // �U
        case 4628: return "lu"; // �V
        case 4630: return "en"; // �W
        case 4632: return "er"; // �X
        case 4634: return "gai"; // �Y
        case 4636: return "quan"; // �Z
        case 4638: return "yi"; // �[
        case 4640: return "mu"; // �\
        case 4642: return "shi"; // �]
        case 4644: return "an"; // �^
        case 4646: return "wei"; // �_
        case 4648: return "huan"; // �`
        case 4650: return "mi"; // �a
        case 4652: return "li"; // �b
        case 4654: return "ji"; // �c
        case 4656: return "dong"; // �d
        case 4658: return "wei"; // �e
        case 4660: return "you"; // �f
        case 4662: return "gu"; // �g
        case 4664: return "lie"; // �h
        case 4666: return "yao"; // �i
        case 4668: return "jiao"; // �j
        case 4670: return "e"; // �k
        case 4672: return "ye"; // �l
        case 4674: return "bu"; // �m
        case 4676: return "qun"; // �n
        case 4678: return "feng"; // �o
        case 4680: return "nao"; // �p
        case 4682: return "li"; // �q
        case 4684: return "you"; // �r
        case 4686: return "xian"; // �s
        case 4688: return "rong"; // �t
        case 4690: return "dao"; // �u
        case 4692: return "shen"; // �v
        case 4694: return "cheng"; // �w
        case 4696: return "tu"; // �x
        case 4698: return "geng"; // �y
        case 4700: return "gao"; // �z
        case 4702: return "xia"; // �{
        case 4704: return "yin"; // �|
        case 4706: return "yu"; // �}
        case 4708: return "nang"; // �~
        case 4710: return ""; // ��
        case 4712: return "kan"; // ��
        case 4714: return "yan"; // ��
        case 4716: return "que"; // ��
        case 4718: return "chong"; // ��
        case 4720: return "ta"; // ��
        case 4722: return "lin"; // ��
        case 4724: return "hua"; // ��
        case 4726: return "ju"; // ��
        case 4728: return "lai"; // ��
        case 4730: return "min"; // ��
        case 4732: return "kun"; // ��
        case 4734: return "kun"; // ��
        case 4736: return "zu"; // ��
        case 4738: return "gu"; // ��
        case 4740: return "ya"; // ��
        case 4742: return "gang"; // ��
        case 4744: return "lun"; // ��
        case 4746: return "lun"; // ��
        case 4748: return "ling"; // ��
        case 4750: return "duo"; // ��
        case 4752: return "zheng"; // ��
        case 4754: return "yin"; // ��
        case 4756: return "dong"; // ��
        case 4758: return "han"; // ��
        case 4760: return "zheng"; // ��
        case 4762: return "wei"; // ��
        case 4764: return "bi"; // ��
        case 4766: return "jie"; // ��
        case 4768: return "zu"; // ��
        case 4770: return "ku"; // ��
        case 4772: return "dong"; // ��
        case 4774: return "yin"; // ��
        case 4776: return "zi"; // ��
        case 4778: return "ze"; // ��
        case 4780: return "huang"; // ��
        case 4782: return "yu"; // ��
        case 4784: return "yang"; // ��
        case 4786: return "feng"; // ��
        case 4788: return "qiu"; // ��
        case 4790: return "yang"; // ��
        case 4792: return "ti"; // ��
        case 4794: return "yi"; // ��
        case 4796: return "zhi"; // ��
        case 4798: return "die"; // ��
        case 4800: return "e"; // ��
        case 4802: return "zhu"; // ��
        case 4804: return "kan"; // ��
        case 4806: return "lu"; // ��
        case 4808: return "yan"; // ��
        case 4810: return "mei"; // ��
        case 4812: return "han"; // ��
        case 4814: return "ji"; // ��
        case 4816: return "huan"; // ��
        case 4818: return "ting"; // ��
        case 4820: return "wu"; // ��
        case 4822: return "yu"; // ��
        case 4824: return "zong"; // ��
        case 4826: return "lan"; // ��
        case 4828: return "ke"; // ��
        case 4830: return "yan"; // ��
        case 4832: return "yan"; // ��
        case 4834: return "wei"; // ��
        case 4836: return "zong"; // ��
        case 4838: return "cha"; // ��
        case 4840: return "suo"; // ��
        case 4842: return "ke"; // ��
        case 4844: return "qin"; // ��
        case 4846: return "qi"; // ��
        case 4848: return "tu"; // ��
        case 4850: return "dui"; // ��
        case 4852: return "xi"; // ��
        case 4854: return "weng"; // ��
        case 4856: return "cang"; // ��
        case 4858: return "dang"; // ��
        case 4860: return "ying"; // ��
        case 4862: return "jie"; // ��
        case 4864: return "ai"; // ��
        case 4866: return "liu"; // ��
        case 4868: return "wu"; // ��
        case 4870: return "kao"; // ��
        case 4872: return "beng"; // ��
        case 4874: return "dian"; // ��
        case 4876: return "qian"; // ��
        case 4878: return "yong"; // ��
        case 4880: return "nie"; // ��
        case 4882: return "cuo"; // ��
        case 4884: return "shi"; // ��
        case 4886: return "ruo"; // ��
        case 4888: return "song"; // ��
        case 4890: return "zong"; // ��
        case 4892: return "jiang"; // ��
        case 4894: return "liao"; // ��
        case 4896: return "kang"; // ��
        case 4898: return "chan"; // ��
        case 4900: return "di"; // ��
        case 4902: return "can"; // ��
        case 4904: return "ding"; // ��
        case 4906: return "tu"; // ��
        case 4908: return "lou"; // ��
        case 4910: return "zhan"; // ��
        case 4912: return "zhan"; // ��
        case 4914: return "ao"; // ��
        case 4916: return "cao"; // ��
        case 4918: return "qu"; // ��
        case 4920: return "qiang"; // ��
        case 4922: return "zui"; // ��
        case 4924: return "zui"; // ��
        case 4926: return "dao"; // ��
        case 4928: return "dao"; // ��
        case 4930: return "xi"; // ��
        case 4932: return "yu"; // ��
        case 4934: return "pei"; // ��
        case 4936: return "long"; // ��
        case 4938: return "xiang"; // ��
        case 4940: return "zheng"; // ��
        case 4942: return "bo"; // ��
        case 4944: return "qin"; // ��
        case 4946: return "jiao"; // ��
        case 4948: return "yan"; // ��
        case 4950: return "lao"; // ��
        case 4952: return "zhan"; // ��
        case 4954: return "liao"; // ��
        case 4956: return "liao"; // ��
        case 4958: return "jin"; // ��
        case 4960: return "duo"; // ��
        case 4962: return "zun"; // ��
        case 4964: return "qiao"; // ��
        case 4966: return "gui"; // �@
        case 4968: return "yao"; // �A
        case 4970: return "jiao"; // �B
        case 4972: return "yao"; // �C
        case 4974: return "jue"; // �D
        case 4976: return "zhan"; // �E
        case 4978: return "yi"; // �F
        case 4980: return "xue"; // �G
        case 4982: return "nao"; // �H
        case 4984: return "ye"; // �I
        case 4986: return "ye"; // �J
        case 4988: return "yi"; // �K
        case 4990: return "nie"; // �L
        case 4992: return "yan"; // �M
        case 4994: return "ji"; // �N
        case 4996: return "jie"; // �O
        case 4998: return "ke"; // �P
        case 5000: return "gui"; // �Q
        case 5002: return "di"; // �R
        case 5004: return "ao"; // �S
        case 5006: return "zui"; // �T
        case 5008: return "wei"; // �U
        case 5010: return "rong"; // �V
        case 5012: return "dao"; // �W
        case 5014: return "ling"; // �X
        case 5016: return "jie"; // �Y
        case 5018: return "yu"; // �Z
        case 5020: return "yue"; // �[
        case 5022: return "yin"; // �\
        case 5024: return "ru"; // �]
        case 5026: return "jie"; // �^
        case 5028: return "li"; // �_
        case 5030: return "gui"; // �`
        case 5032: return "long"; // �a
        case 5034: return "long"; // �b
        case 5036: return "ying"; // �c
        case 5038: return "xi"; // �d
        case 5040: return "ju"; // �e
        case 5042: return "chan"; // �f
        case 5044: return "ying"; // �g
        case 5046: return "kui"; // �h
        case 5048: return "yan"; // �i
        case 5050: return "nao"; // �j
        case 5052: return "quan"; // �k
        case 5054: return "chao"; // �l
        case 5056: return "cuan"; // �m
        case 5058: return "luan"; // �n
        case 5060: return "dian"; // �o
        case 5062: return "dian"; // �p
        case 5064: return "nie"; // �q
        case 5066: return "yan"; // �r
        case 5068: return "yan"; // �s
        case 5070: return "yan"; // �t
        case 5072: return "nao"; // �u
        case 5074: return "yan"; // �v
        case 5076: return "kuai"; // �w
        case 5078: return "huang"; // �x
        case 5080: return "jing"; // �y
        case 5082: return "chao"; // �z
        case 5084: return "lie"; // �{
        case 5086: return "keo"; // �|
        case 5088: return "pu"; // �}
        case 5090: return "pu"; // �~
        case 5092: return ""; // ��
        case 5094: return "qiu"; // ��
        case 5096: return "zhi"; // ��
        case 5098: return "zhao"; // ��
        case 5100: return "yi"; // ��
        case 5102: return "jin"; // ��
        case 5104: return "sun"; // ��
        case 5106: return "quan"; // ��
        case 5108: return "pa"; // ��
        case 5110: return "po"; // ��
        case 5112: return "za"; // ��
        case 5114: return "ding"; // ��
        case 5116: return "nie"; // ��
        case 5118: return "fen"; // ��
        case 5120: return "pa"; // ��
        case 5122: return "zhi"; // ��
        case 5124: return "hu"; // ��
        case 5126: return "dan"; // ��
        case 5128: return "dai"; // ��
        case 5130: return "wa"; // ��
        case 5132: return "bo"; // ��
        case 5134: return "mo"; // ��
        case 5136: return "yi"; // ��
        case 5138: return "yi"; // ��
        case 5140: return "ping"; // ��
        case 5142: return "qia"; // ��
        case 5144: return "juan"; // ��
        case 5146: return "ru"; // ��
        case 5148: return "shuai"; // ��
        case 5150: return "shui"; // ��
        case 5152: return "qiao"; // ��
        case 5154: return "zhen"; // ��
        case 5156: return "shi"; // ��
        case 5158: return "qun"; // ��
        case 5160: return "dai"; // ��
        case 5162: return "gui"; // ��
        case 5164: return "ping"; // ��
        case 5166: return "zhang"; // ��
        case 5168: return "jian"; // ��
        case 5170: return "wan"; // ��
        case 5172: return "dai"; // ��
        case 5174: return "qie"; // ��
        case 5176: return "ji"; // ��
        case 5178: return "du"; // ��
        case 5180: return "hou"; // ��
        case 5182: return "zhen"; // ��
        case 5184: return "xu"; // ��
        case 5186: return "wei"; // ��
        case 5188: return "yi"; // ��
        case 5190: return "bang"; // ��
        case 5192: return "ping"; // ��
        case 5194: return "die"; // ��
        case 5196: return "gong"; // ��
        case 5198: return "pan"; // ��
        case 5200: return "tao"; // ��
        case 5202: return "mi"; // ��
        case 5204: return "jia"; // ��
        case 5206: return "teng"; // ��
        case 5208: return "hui"; // ��
        case 5210: return "zhong"; // ��
        case 5212: return "shan"; // ��
        case 5214: return "biao"; // ��
        case 5216: return "guo"; // ��
        case 5218: return "ze"; // ��
        case 5220: return "mu"; // ��
        case 5222: return "bang"; // ��
        case 5224: return "jing"; // ��
        case 5226: return "chan"; // ��
        case 5228: return "zhi"; // ��
        case 5230: return "wu"; // ��
        case 5232: return "bi"; // ��
        case 5234: return "bi"; // ��
        case 5236: return "zhang"; // ��
        case 5238: return "mi"; // ��
        case 5240: return "qiao"; // ��
        case 5242: return "chan"; // ��
        case 5244: return "fen"; // ��
        case 5246: return "meng"; // ��
        case 5248: return "bang"; // ��
        case 5250: return "dao"; // ��
        case 5252: return "mie"; // ��
        case 5254: return "chu"; // ��
        case 5256: return "jie"; // ��
        case 5258: return "xian"; // ��
        case 5260: return "lan"; // ��
        case 5262: return "jian"; // ��
        case 5264: return "bing"; // ��
        case 5266: return "gan"; // ��
        case 5268: return "ji"; // ��
        case 5270: return "ting"; // ��
        case 5272: return "ze"; // ��
        case 5274: return "guang"; // ��
        case 5276: return "me"; // ��
        case 5278: return "qin"; // ��
        case 5280: return "dun"; // ��
        case 5282: return "ya"; // ��
        case 5284: return "bai"; // ��
        case 5286: return "jie"; // ��
        case 5288: return "zhuan"; // ��
        case 5290: return "ya"; // ��
        case 5292: return "ci"; // ��
        case 5294: return "tong"; // ��
        case 5296: return "yi"; // ��
        case 5298: return "zhi"; // ��
        case 5300: return "tiao"; // ��
        case 5302: return "zhi"; // ��
        case 5304: return "xiao"; // ��
        case 5306: return "tu"; // ��
        case 5308: return "gui"; // ��
        case 5310: return "ku"; // ��
        case 5312: return "mang"; // ��
        case 5314: return "you"; // ��
        case 5316: return "bu"; // ��
        case 5318: return "bing"; // ��
        case 5320: return "cheng"; // ��
        case 5322: return "lai"; // ��
        case 5324: return "ji"; // ��
        case 5326: return "song"; // ��
        case 5328: return "shu"; // ��
        case 5330: return "qing"; // ��
        case 5332: return "yu"; // ��
        case 5334: return "miao"; // ��
        case 5336: return "sou"; // ��
        case 5338: return "ce"; // ��
        case 5340: return "xiang"; // ��
        case 5342: return "fei"; // ��
        case 5344: return "jiu"; // ��
        case 5346: return "e"; // ��
        case 5348: return "wei"; // �@
        case 5350: return "liu"; // �A
        case 5352: return "sha"; // �B
        case 5354: return "sou"; // �C
        case 5356: return "zhi"; // �D
        case 5358: return "bu"; // �E
        case 5360: return "qing"; // �F
        case 5362: return "jiu"; // �G
        case 5364: return "jiu"; // �H
        case 5366: return "lou"; // �I
        case 5368: return "yin"; // �J
        case 5370: return "dai"; // �K
        case 5372: return "lu"; // �L
        case 5374: return "yi"; // �M
        case 5376: return "chu"; // �N
        case 5378: return "tu"; // �O
        case 5380: return "si"; // �P
        case 5382: return "qian"; // �Q
        case 5384: return "miao"; // �R
        case 5386: return "chang"; // �S
        case 5388: return "wu"; // �T
        case 5390: return "fei"; // �U
        case 5392: return "guang"; // �V
        case 5394: return "kos"; // �W
        case 5396: return "kuai"; // �X
        case 5398: return "bi"; // �Y
        case 5400: return "qiang"; // �Z
        case 5402: return "lin"; // �[
        case 5404: return "liao"; // �\
        case 5406: return "lu"; // �]
        case 5408: return "ji"; // �^
        case 5410: return "ying"; // �_
        case 5412: return "xian"; // �`
        case 5414: return "ting"; // �a
        case 5416: return "yong"; // �b
        case 5418: return "li"; // �c
        case 5420: return "ting"; // �d
        case 5422: return "yan"; // �e
        case 5424: return "di"; // �f
        case 5426: return "po"; // �g
        case 5428: return "hui"; // �h
        case 5430: return "nai"; // �i
        case 5432: return "hui"; // �j
        case 5434: return "fen"; // �k
        case 5436: return "ju"; // �l
        case 5438: return "yan"; // �m
        case 5440: return "zang"; // �n
        case 5442: return "yi"; // �o
        case 5444: return "er"; // �p
        case 5446: return "san"; // �q
        case 5448: return "er"; // �r
        case 5450: return "shi"; // �s
        case 5452: return "di"; // �t
        case 5454: return "hu"; // �u
        case 5456: return "wu"; // �v
        case 5458: return "di"; // �w
        case 5460: return "jiang"; // �x
        case 5462: return "ba"; // �y
        case 5464: return "shen"; // �z
        case 5466: return "jue"; // �{
        case 5468: return "tao"; // �|
        case 5470: return "fu"; // �}
        case 5472: return "di"; // �~
        case 5474: return ""; // ��
        case 5476: return "chao"; // ��
        case 5478: return "zhen"; // ��
        case 5480: return "yi"; // ��
        case 5482: return "juan"; // ��
        case 5484: return "shao"; // ��
        case 5486: return "yuan"; // ��
        case 5488: return "jing"; // ��
        case 5490: return "diao"; // ��
        case 5492: return "zhang"; // ��
        case 5494: return "jiang"; // ��
        case 5496: return "qiang"; // ��
        case 5498: return "peng"; // ��
        case 5500: return "bi"; // ��
        case 5502: return "she"; // ��
        case 5504: return "dan"; // ��
        case 5506: return "jian"; // ��
        case 5508: return "ge"; // ��
        case 5510: return "fa"; // ��
        case 5512: return "bi"; // ��
        case 5514: return "kou"; // ��
        case 5516: return "jian"; // ��
        case 5518: return "bie"; // ��
        case 5520: return "xiao"; // ��
        case 5522: return "dan"; // ��
        case 5524: return "guo"; // ��
        case 5526: return "jiang"; // ��
        case 5528: return "hong"; // ��
        case 5530: return "mi"; // ��
        case 5532: return "guo"; // ��
        case 5534: return "wan"; // ��
        case 5536: return "jue"; // ��
        case 5538: return "ji"; // ��
        case 5540: return "lu"; // ��
        case 5542: return "hui"; // ��
        case 5544: return "hui"; // ��
        case 5546: return "yi"; // ��
        case 5548: return "yi"; // ��
        case 5550: return "yi"; // ��
        case 5552: return "yue"; // ��
        case 5554: return "yue"; // ��
        case 5556: return "wen"; // ��
        case 5558: return "yan"; // ��
        case 5560: return "yu"; // ��
        case 5562: return "chi"; // ��
        case 5564: return "diao"; // ��
        case 5566: return "yong"; // ��
        case 5568: return "piao"; // ��
        case 5570: return "chi"; // ��
        case 5572: return "bo"; // ��
        case 5574: return "yi"; // ��
        case 5576: return "ji"; // ��
        case 5578: return "zhong"; // ��
        case 5580: return "wang"; // ��
        case 5582: return "di"; // ��
        case 5584: return "ling"; // ��
        case 5586: return "fu"; // ��
        case 5588: return "wang"; // ��
        case 5590: return "xi"; // ��
        case 5592: return "wa"; // ��
        case 5594: return "zheng"; // ��
        case 5596: return "zhi"; // ��
        case 5598: return "jing"; // ��
        case 5600: return "cong"; // ��
        case 5602: return "zhi"; // ��
        case 5604: return "cong"; // ��
        case 5606: return "dong"; // ��
        case 5608: return "ji"; // ��
        case 5610: return "zhi"; // ��
        case 5612: return "cong"; // ��
        case 5614: return "zhou"; // ��
        case 5616: return "lai"; // ��
        case 5618: return "xie"; // ��
        case 5620: return "jie"; // ��
        case 5622: return "jian"; // ��
        case 5624: return "ti"; // ��
        case 5626: return "jia"; // ��
        case 5628: return "pian"; // ��
        case 5630: return "fu"; // ��
        case 5632: return "wei"; // ��
        case 5634: return "bang"; // ��
        case 5636: return "xi"; // ��
        case 5638: return "zheng"; // ��
        case 5640: return "biao"; // ��
        case 5642: return "ti"; // ��
        case 5644: return "de"; // ��
        case 5646: return "zhi"; // ��
        case 5648: return "bie"; // ��
        case 5650: return "zhong"; // ��
        case 5652: return "che"; // ��
        case 5654: return "yao"; // ��
        case 5656: return "hui"; // ��
        case 5658: return "mei"; // ��
        case 5660: return "long"; // ��
        case 5662: return "xiang"; // ��
        case 5664: return "bao"; // ��
        case 5666: return "ju"; // ��
        case 5668: return "le"; // ��
        case 5670: return "ren"; // ��
        case 5672: return "ding"; // ��
        case 5674: return "gai"; // ��
        case 5676: return "ren"; // ��
        case 5678: return "gan"; // ��
        case 5680: return "yi"; // ��
        case 5682: return "tai"; // ��
        case 5684: return "lie"; // ��
        case 5686: return "fan"; // ��
        case 5688: return "ying"; // ��
        case 5690: return "wen"; // ��
        case 5692: return "wen"; // ��
        case 5694: return "wu"; // ��
        case 5696: return "ji"; // ��
        case 5698: return "xi"; // ��
        case 5700: return "jia"; // ��
        case 5702: return "wan"; // ��
        case 5704: return "cong"; // ��
        case 5706: return "yu"; // ��
        case 5708: return "qi"; // ��
        case 5710: return "cui"; // ��
        case 5712: return "tai"; // ��
        case 5714: return "tun"; // ��
        case 5716: return "qian"; // ��
        case 5718: return "hun"; // ��
        case 5720: return "xiong"; // ��
        case 5722: return "wang"; // ��
        case 5724: return "xian"; // ��
        case 5726: return "kang"; // ��
        case 5728: return "ju"; // ��
        case 5730: return "yi"; // �@
        case 5732: return "bao"; // �A
        case 5734: return "men"; // �B
        case 5736: return "pei"; // �C
        case 5738: return "kou"; // �D
        case 5740: return "ban"; // �E
        case 5742: return "nao"; // �F
        case 5744: return "tie"; // �G
        case 5746: return "gu"; // �H
        case 5748: return "ju"; // �I
        case 5750: return "you"; // �J
        case 5752: return "di"; // �K
        case 5754: return "die"; // �L
        case 5756: return "you"; // �M
        case 5758: return "fu"; // �N
        case 5760: return "xi"; // �O
        case 5762: return "bi"; // �P
        case 5764: return "yao"; // �Q
        case 5766: return "xuan"; // �R
        case 5768: return "cong"; // �S
        case 5770: return "bing"; // �T
        case 5772: return "huang"; // �U
        case 5774: return "xu"; // �V
        case 5776: return "bi"; // �W
        case 5778: return "shu"; // �X
        case 5780: return "xi"; // �Y
        case 5782: return "tan"; // �Z
        case 5784: return "yong"; // �[
        case 5786: return "mo"; // �\
        case 5788: return "ki"; // �]
        case 5790: return "shi"; // �^
        case 5792: return "xi"; // �_
        case 5794: return "lao"; // �`
        case 5796: return "heng"; // �a
        case 5798: return "kuang"; // �b
        case 5800: return "mou"; // �c
        case 5802: return "zhi"; // �d
        case 5804: return "xie"; // �e
        case 5806: return "yao"; // �f
        case 5808: return "die"; // �g
        case 5810: return "hao"; // �h
        case 5812: return "wei"; // �i
        case 5814: return "qi"; // �j
        case 5816: return "jiao"; // �k
        case 5818: return "si"; // �l
        case 5820: return "kua"; // �m
        case 5822: return "qiu"; // �n
        case 5824: return "hui"; // �o
        case 5826: return "chi"; // �p
        case 5828: return "yi"; // �q
        case 5830: return "xiong"; // �r
        case 5832: return "guai"; // �s
        case 5834: return "lin"; // �t
        case 5836: return "chi"; // �u
        case 5838: return "shang"; // �v
        case 5840: return "quan"; // �w
        case 5842: return "yue"; // �x
        case 5844: return "peng"; // �y
        case 5846: return "de"; // �z
        case 5848: return "hui"; // �{
        case 5850: return "xiao"; // �|
        case 5852: return "mang"; // �}
        case 5854: return "yong"; // �~
        case 5856: return ""; // ��
        case 5858: return "yuan"; // ��
        case 5860: return "bi"; // ��
        case 5862: return "yue"; // ��
        case 5864: return "yu"; // ��
        case 5866: return "yu"; // ��
        case 5868: return "ke"; // ��
        case 5870: return "zhe"; // ��
        case 5872: return "lin"; // ��
        case 5874: return "hao"; // ��
        case 5876: return "qie"; // ��
        case 5878: return "ti"; // ��
        case 5880: return "bu"; // ��
        case 5882: return "qian"; // ��
        case 5884: return "xi"; // ��
        case 5886: return "man"; // ��
        case 5888: return "yi"; // ��
        case 5890: return "heng"; // ��
        case 5892: return "cheng"; // ��
        case 5894: return "wu"; // ��
        case 5896: return "li"; // ��
        case 5898: return "lang"; // ��
        case 5900: return "cong"; // ��
        case 5902: return "yi"; // ��
        case 5904: return "li"; // ��
        case 5906: return "nao"; // ��
        case 5908: return "e"; // ��
        case 5910: return "wu"; // ��
        case 5912: return "cong"; // ��
        case 5914: return "de"; // ��
        case 5916: return "chang"; // ��
        case 5918: return "men"; // ��
        case 5920: return "li"; // ��
        case 5922: return "guan"; // ��
        case 5924: return "guan"; // ��
        case 5926: return "qi"; // ��
        case 5928: return "kong"; // ��
        case 5930: return "tian"; // ��
        case 5932: return "lun"; // ��
        case 5934: return "xi"; // ��
        case 5936: return "kan"; // ��
        case 5938: return "gun"; // ��
        case 5940: return "ni"; // ��
        case 5942: return "dun"; // ��
        case 5944: return "guo"; // ��
        case 5946: return "zhan"; // ��
        case 5948: return "wan"; // ��
        case 5950: return "jin"; // ��
        case 5952: return "ji"; // ��
        case 5954: return "lan"; // ��
        case 5956: return "yu"; // ��
        case 5958: return "he"; // ��
        case 5960: return "juan"; // ��
        case 5962: return "dan"; // ��
        case 5964: return "ti"; // ��
        case 5966: return "nie"; // ��
        case 5968: return "chuo"; // ��
        case 5970: return "hun"; // ��
        case 5972: return "xin"; // ��
        case 5974: return "e"; // ��
        case 5976: return "rui"; // ��
        case 5978: return "zong"; // ��
        case 5980: return "jian"; // ��
        case 5982: return "yong"; // ��
        case 5984: return "de"; // ��
        case 5986: return "nao"; // ��
        case 5988: return "yun"; // ��
        case 5990: return "die"; // ��
        case 5992: return "chun"; // ��
        case 5994: return "qiong"; // ��
        case 5996: return "ce"; // ��
        case 5998: return "bian"; // ��
        case 6000: return "hun"; // ��
        case 6002: return "zong"; // ��
        case 6004: return "ti"; // ��
        case 6006: return "bei"; // ��
        case 6008: return "xuan"; // ��
        case 6010: return "wei"; // ��
        case 6012: return "ge"; // ��
        case 6014: return "wei"; // ��
        case 6016: return "bi"; // ��
        case 6018: return "xuan"; // ��
        case 6020: return "huan"; // ��
        case 6022: return "mian"; // ��
        case 6024: return "yong"; // ��
        case 6026: return "kai"; // ��
        case 6028: return "dang"; // ��
        case 6030: return "yin"; // ��
        case 6032: return "dan"; // ��
        case 6034: return "mao"; // ��
        case 6036: return "qia"; // ��
        case 6038: return "ke"; // ��
        case 6040: return "ai"; // ��
        case 6042: return "qie"; // ��
        case 6044: return "yan"; // ��
        case 6046: return "nuo"; // ��
        case 6048: return "zong"; // ��
        case 6050: return "si"; // ��
        case 6052: return "ying"; // ��
        case 6054: return "que"; // ��
        case 6056: return "gong"; // ��
        case 6058: return "yun"; // ��
        case 6060: return "se"; // ��
        case 6062: return "qi"; // ��
        case 6064: return "yao"; // ��
        case 6066: return "song"; // ��
        case 6068: return "huang"; // ��
        case 6070: return "ji"; // ��
        case 6072: return "gu"; // ��
        case 6074: return "ju"; // ��
        case 6076: return "chuan"; // ��
        case 6078: return "ni"; // ��
        case 6080: return "xie"; // ��
        case 6082: return "kai"; // ��
        case 6084: return "zheng"; // ��
        case 6086: return "yong"; // ��
        case 6088: return "cao"; // ��
        case 6090: return "xun"; // ��
        case 6092: return "shen"; // ��
        case 6094: return "bo"; // ��
        case 6096: return "kai"; // ��
        case 6098: return "xi"; // ��
        case 6100: return "hun"; // ��
        case 6102: return "yong"; // ��
        case 6104: return "yang"; // ��
        case 6106: return "li"; // ��
        case 6108: return "cao"; // ��
        case 6110: return "tao"; // ��
        case 6112: return "yan"; // �@
        case 6114: return "xu"; // �A
        case 6116: return "tai"; // �B
        case 6118: return "yun"; // �C
        case 6120: return "ming"; // �D
        case 6122: return "gong"; // �E
        case 6124: return "cao"; // �F
        case 6126: return "piao"; // �G
        case 6128: return "mu"; // �H
        case 6130: return "guo"; // �I
        case 6132: return "chi"; // �J
        case 6134: return "can"; // �K
        case 6136: return "can"; // �L
        case 6138: return "can"; // �M
        case 6140: return "cui"; // �N
        case 6142: return "min"; // �O
        case 6144: return "zhang"; // �P
        case 6146: return "tong"; // �Q
        case 6148: return "ao"; // �R
        case 6150: return "shuan"; // �S
        case 6152: return "guan"; // �T
        case 6154: return "que"; // �U
        case 6156: return "zao"; // �V
        case 6158: return "jiu"; // �W
        case 6160: return "lian"; // �X
        case 6162: return "ou"; // �Y
        case 6164: return "song"; // �Z
        case 6166: return "jin"; // �[
        case 6168: return "yin"; // �\
        case 6170: return "lu"; // �]
        case 6172: return "shang"; // �^
        case 6174: return "tuan"; // �_
        case 6176: return "man"; // �`
        case 6178: return "qian"; // �a
        case 6180: return "she"; // �b
        case 6182: return "qing"; // �c
        case 6184: return "di"; // �d
        case 6186: return "zhi"; // �e
        case 6188: return "lou"; // �f
        case 6190: return "juan"; // �g
        case 6192: return "qi"; // �h
        case 6194: return "qi"; // �i
        case 6196: return "yu"; // �j
        case 6198: return "ping"; // �k
        case 6200: return "liao"; // �l
        case 6202: return "cong"; // �m
        case 6204: return "you"; // �n
        case 6206: return "chong"; // �o
        case 6208: return "zhi"; // �p
        case 6210: return "tong"; // �q
        case 6212: return "cheng"; // �r
        case 6214: return "qi"; // �s
        case 6216: return "qu"; // �t
        case 6218: return "peng"; // �u
        case 6220: return "bei"; // �v
        case 6222: return "qiong"; // �w
        case 6224: return "jiao"; // �x
        case 6226: return "chi"; // �y
        case 6228: return "lian"; // �z
        case 6230: return "ping"; // �{
        case 6232: return "kui"; // �|
        case 6234: return "hui"; // �}
        case 6236: return "zheng"; // �~
        case 6238: return ""; // ��
        case 6240: return "yin"; // ��
        case 6242: return "yin"; // ��
        case 6244: return "xi"; // ��
        case 6246: return "xi"; // ��
        case 6248: return "dan"; // ��
        case 6250: return "tan"; // ��
        case 6252: return "duo"; // ��
        case 6254: return "dui"; // ��
        case 6256: return "su"; // ��
        case 6258: return "jue"; // ��
        case 6260: return "ce"; // ��
        case 6262: return "jiao"; // ��
        case 6264: return "fan"; // ��
        case 6266: return "fen"; // ��
        case 6268: return "lao"; // ��
        case 6270: return "lao"; // ��
        case 6272: return "xian"; // ��
        case 6274: return "min"; // ��
        case 6276: return "liao"; // ��
        case 6278: return "wu"; // ��
        case 6280: return "can"; // ��
        case 6282: return "jue"; // ��
        case 6284: return "cu"; // ��
        case 6286: return "xian"; // ��
        case 6288: return "tan"; // ��
        case 6290: return "sheng"; // ��
        case 6292: return "pi"; // ��
        case 6294: return "yi"; // ��
        case 6296: return "xian"; // ��
        case 6298: return "nao"; // ��
        case 6300: return "dan"; // ��
        case 6302: return "tan"; // ��
        case 6304: return "jing"; // ��
        case 6306: return "song"; // ��
        case 6308: return "ji"; // ��
        case 6310: return "wei"; // ��
        case 6312: return "huan"; // ��
        case 6314: return "qin"; // ��
        case 6316: return "qin"; // ��
        case 6318: return "ju"; // ��
        case 6320: return "cao"; // ��
        case 6322: return "ken"; // ��
        case 6324: return "ying"; // ��
        case 6326: return "yi"; // ��
        case 6328: return "lin"; // ��
        case 6330: return "se"; // ��
        case 6332: return "jun4      "; // ��
        case 6334: return "huai"; // ��
        case 6336: return "ai"; // ��
        case 6338: return "yan"; // ��
        case 6340: return "kuo"; // ��
        case 6342: return "xia"; // ��
        case 6344: return "chi"; // ��
        case 6346: return "yu"; // ��
        case 6348: return "yin"; // ��
        case 6350: return "dai"; // ��
        case 6352: return "meng"; // ��
        case 6354: return "ai"; // ��
        case 6356: return "meng"; // ��
        case 6358: return "dui"; // ��
        case 6360: return "ji"; // ��
        case 6362: return "mo"; // ��
        case 6364: return "lan"; // ��
        case 6366: return "men"; // ��
        case 6368: return "chou"; // ��
        case 6370: return "zhi"; // ��
        case 6372: return "nuo"; // ��
        case 6374: return "chu"; // ��
        case 6376: return "yang"; // ��
        case 6378: return "bo"; // ��
        case 6380: return "zhi"; // ��
        case 6382: return "kuang"; // ��
        case 6384: return "kuang"; // ��
        case 6386: return "you"; // ��
        case 6388: return "fu"; // ��
        case 6390: return "liu"; // ��
        case 6392: return "mie"; // ��
        case 6394: return "cheng"; // ��
        case 6396: return "hui"; // ��
        case 6398: return "chan"; // ��
        case 6400: return "lan"; // ��
        case 6402: return "huai"; // ��
        case 6404: return "xuan"; // ��
        case 6406: return "rang"; // ��
        case 6408: return "chan"; // ��
        case 6410: return "ji"; // ��
        case 6412: return "ju"; // ��
        case 6414: return "guan"; // ��
        case 6416: return "she"; // ��
        case 6418: return "lian"; // ��
        case 6420: return "nan"; // ��
        case 6422: return "mo"; // ��
        case 6424: return "tang"; // ��
        case 6426: return "jue"; // ��
        case 6428: return "gang"; // ��
        case 6430: return "gang"; // ��
        case 6432: return "yue"; // ��
        case 6434: return "ge"; // ��
        case 6436: return "jian"; // ��
        case 6438: return "dong"; // ��
        case 6440: return "die"; // ��
        case 6442: return "cai"; // ��
        case 6444: return "jia"; // ��
        case 6446: return "zhi"; // ��
        case 6448: return "kui"; // ��
        case 6450: return "zhan"; // ��
        case 6452: return "qiang"; // ��
        case 6454: return "ge"; // ��
        case 6456: return "jian"; // ��
        case 6458: return "yu"; // ��
        case 6460: return "you"; // ��
        case 6462: return "hu"; // ��
        case 6464: return "zhan"; // ��
        case 6466: return "hu"; // ��
        case 6468: return "xi"; // ��
        case 6470: return "qu"; // ��
        case 6472: return "hu"; // ��
        case 6474: return "hu"; // ��
        case 6476: return "e"; // ��
        case 6478: return "yi"; // ��
        case 6480: return "ti"; // ��
        case 6482: return "mao"; // ��
        case 6484: return "dian"; // ��
        case 6486: return "jiong"; // ��
        case 6488: return "yi"; // ��
        case 6490: return "yi"; // ��
        case 6492: return "yan"; // ��
        case 6494: return "qiu"; // �@
        case 6496: return "le"; // �A
        case 6498: return "fan"; // �B
        case 6500: return "ru"; // �C
        case 6502: return "zai"; // �D
        case 6504: return "zhang"; // �E
        case 6506: return "diao"; // �F
        case 6508: return "gan"; // �G
        case 6510: return "wu"; // �H
        case 6512: return "gan"; // �I
        case 6514: return "shen"; // �J
        case 6516: return "cha"; // �K
        case 6518: return "qian"; // �L
        case 6520: return "gu"; // �M
        case 6522: return "wu"; // �N
        case 6524: return "den"; // �O
        case 6526: return "ren"; // �P
        case 6528: return "xi"; // �Q
        case 6530: return "qian"; // �R
        case 6532: return "jia"; // �S
        case 6534: return "yu"; // �T
        case 6536: return "ao"; // �U
        case 6538: return "xi"; // �V
        case 6540: return "qi"; // �W
        case 6542: return "zhi"; // �X
        case 6544: return "den"; // �Y
        case 6546: return "yan"; // �Z
        case 6548: return "wang"; // �[
        case 6550: return "bian"; // �\
        case 6552: return "gou"; // �]
        case 6554: return "wen"; // �^
        case 6556: return "gu"; // �_
        case 6558: return "yue"; // �`
        case 6560: return "qin"; // �a
        case 6562: return "dan"; // �b
        case 6564: return "zheng"; // �c
        case 6566: return "yun"; // �d
        case 6568: return "wan"; // �e
        case 6570: return "ne"; // �f
        case 6572: return "pou"; // �g
        case 6574: return "pou"; // �h
        case 6576: return "ba"; // �i
        case 6578: return "ao"; // �j
        case 6580: return "ze"; // �k
        case 6582: return "yun"; // �l
        case 6584: return "bing"; // �m
        case 6586: return "zhi"; // �n
        case 6588: return "nan"; // �o
        case 6590: return "bu"; // �p
        case 6592: return "yao"; // �q
        case 6594: return "zhen"; // �r
        case 6596: return "zha"; // �s
        case 6598: return "yang"; // �t
        case 6600: return "he"; // �u
        case 6602: return "ni"; // �v
        case 6604: return "ye"; // �w
        case 6606: return "chi"; // �x
        case 6608: return "pei"; // �y
        case 6610: return "jia"; // �z
        case 6612: return "mei"; // �{
        case 6614: return "qu"; // �|
        case 6616: return "chu"; // �}
        case 6618: return "ya"; // �~
        case 6620: return ""; // ��
        case 6622: return "zha"; // ��
        case 6624: return "pao"; // ��
        case 6626: return "na"; // ��
        case 6628: return "qian"; // ��
        case 6630: return "tuo"; // ��
        case 6632: return "bai"; // ��
        case 6634: return "di"; // ��
        case 6636: return "ju"; // ��
        case 6638: return "kuo"; // ��
        case 6640: return "qia"; // ��
        case 6642: return "qian"; // ��
        case 6644: return "hen"; // ��
        case 6646: return "nin"; // ��
        case 6648: return "gong"; // ��
        case 6650: return "zun"; // ��
        case 6652: return "yi"; // ��
        case 6654: return "xie"; // ��
        case 6656: return "ce"; // ��
        case 6658: return "hui"; // ��
        case 6660: return "bai"; // ��
        case 6662: return "die"; // ��
        case 6664: return "guang"; // ��
        case 6666: return "duo"; // ��
        case 6668: return "duo"; // ��
        case 6670: return "nong"; // ��
        case 6672: return "zhen"; // ��
        case 6674: return "ge"; // ��
        case 6676: return "jiao"; // ��
        case 6678: return "dong"; // ��
        case 6680: return "na"; // ��
        case 6682: return "lie"; // ��
        case 6684: return "zha"; // ��
        case 6686: return "lu"; // ��
        case 6688: return "she"; // ��
        case 6690: return "jue"; // ��
        case 6692: return "lie"; // ��
        case 6694: return "ju"; // ��
        case 6696: return "ya"; // ��
        case 6698: return "xian"; // ��
        case 6700: return "yu"; // ��
        case 6702: return "tuo"; // ��
        case 6704: return "bo"; // ��
        case 6706: return "geng"; // ��
        case 6708: return "ti"; // ��
        case 6710: return "cheng"; // ��
        case 6712: return "sha"; // ��
        case 6714: return "keng"; // ��
        case 6716: return "mei"; // ��
        case 6718: return "nong"; // ��
        case 6720: return "ju"; // ��
        case 6722: return "beng"; // ��
        case 6724: return "jian"; // ��
        case 6726: return "yan"; // ��
        case 6728: return "luo"; // ��
        case 6730: return "jia"; // ��
        case 6732: return "zha"; // ��
        case 6734: return "feng"; // ��
        case 6736: return "ku"; // ��
        case 6738: return "ju"; // ��
        case 6740: return "huo"; // ��
        case 6742: return "tu"; // ��
        case 6744: return "pou"; // ��
        case 6746: return "ze"; // ��
        case 6748: return "shu"; // ��
        case 6750: return "ye"; // ��
        case 6752: return "jue"; // ��
        case 6754: return "wan"; // ��
        case 6756: return "bu"; // ��
        case 6758: return "zun"; // ��
        case 6760: return "ye"; // ��
        case 6762: return "zhai"; // ��
        case 6764: return "lu"; // ��
        case 6766: return "sou"; // ��
        case 6768: return "tuo"; // ��
        case 6770: return "bang"; // ��
        case 6772: return "wei"; // ��
        case 6774: return "wan"; // ��
        case 6776: return "qin"; // ��
        case 6778: return "she"; // ��
        case 6780: return "min"; // ��
        case 6782: return "men"; // ��
        case 6784: return "fu"; // ��
        case 6786: return "dao"; // ��
        case 6788: return "wo"; // ��
        case 6790: return "juan"; // ��
        case 6792: return "yue"; // ��
        case 6794: return "zong"; // ��
        case 6796: return "tian"; // ��
        case 6798: return "tu"; // ��
        case 6800: return "ben"; // ��
        case 6802: return "wo"; // ��
        case 6804: return "zuo"; // ��
        case 6806: return "wo"; // ��
        case 6808: return "qi"; // ��
        case 6810: return "cheng"; // ��
        case 6812: return "sao"; // ��
        case 6814: return "lun"; // ��
        case 6816: return "qing"; // ��
        case 6818: return "gang"; // ��
        case 6820: return "di"; // ��
        case 6822: return "hun"; // ��
        case 6824: return "qi"; // ��
        case 6826: return "shu"; // ��
        case 6828: return "wan"; // ��
        case 6830: return "ling"; // ��
        case 6832: return "ya"; // ��
        case 6834: return "zheng"; // ��
        case 6836: return "liang"; // ��
        case 6838: return "gua"; // ��
        case 6840: return "yi"; // ��
        case 6842: return "huo"; // ��
        case 6844: return "yan"; // ��
        case 6846: return "ding"; // ��
        case 6848: return "cai"; // ��
        case 6850: return "bing"; // ��
        case 6852: return "ti"; // ��
        case 6854: return "chou"; // ��
        case 6856: return "ken"; // ��
        case 6858: return "pa"; // ��
        case 6860: return "jie"; // ��
        case 6862: return "ming"; // ��
        case 6864: return "geng"; // ��
        case 6866: return "meng"; // ��
        case 6868: return "sao"; // ��
        case 6870: return "peng"; // ��
        case 6872: return "nuo"; // ��
        case 6874: return "jian"; // ��
        case 6876: return "keng"; // �@
        case 6878: return "you"; // �A
        case 6880: return "jian"; // �B
        case 6882: return "yan"; // �C
        case 6884: return "nan"; // �D
        case 6886: return "hong"; // �E
        case 6888: return "pi"; // �F
        case 6890: return "wei"; // �G
        case 6892: return "cai"; // �H
        case 6894: return "nie"; // �I
        case 6896: return "shi"; // �J
        case 6898: return "zong"; // �K
        case 6900: return "zhen"; // �L
        case 6902: return "xun"; // �M
        case 6904: return "yong"; // �N
        case 6906: return "bian"; // �O
        case 6908: return "yang"; // �P
        case 6910: return "huan"; // �Q
        case 6912: return "yan"; // �R
        case 6914: return "zan"; // �S
        case 6916: return "ju"; // �T
        case 6918: return "ke"; // �U
        case 6920: return "ji"; // �V
        case 6922: return "di"; // �W
        case 6924: return "la"; // �X
        case 6926: return "la"; // �Y
        case 6928: return "chen"; // �Z
        case 6930: return "jiu"; // �[
        case 6932: return "tu"; // �\
        case 6934: return "hui"; // �]
        case 6936: return "gen"; // �^
        case 6938: return "dong"; // �_
        case 6940: return "xiao"; // �`
        case 6942: return "xie"; // �a
        case 6944: return "jian"; // �b
        case 6946: return "zha"; // �c
        case 6948: return "bei"; // �d
        case 6950: return "yao"; // �e
        case 6952: return "wei"; // �f
        case 6954: return "dem"; // �g
        case 6956: return "wu"; // �h
        case 6958: return "zong"; // �i
        case 6960: return "gen"; // �j
        case 6962: return "gou"; // �k
        case 6964: return "qin"; // �l
        case 6966: return "rong"; // �m
        case 6968: return "huo"; // �n
        case 6970: return "zou"; // �o
        case 6972: return "sun"; // �p
        case 6974: return "sun"; // �q
        case 6976: return "nang"; // �r
        case 6978: return "beng"; // �s
        case 6980: return "e"; // �t
        case 6982: return "yao"; // �u
        case 6984: return "dao"; // �v
        case 6986: return "zhi"; // �w
        case 6988: return "nu"; // �x
        case 6990: return "la"; // �y
        case 6992: return "qiu"; // �z
        case 6994: return "xian"; // �{
        case 6996: return "jin"; // �|
        case 6998: return "mie"; // �}
        case 7000: return "e"; // �~
        case 7002: return ""; // ��
        case 7004: return "dui"; // ��
        case 7006: return "shan"; // ��
        case 7008: return "da"; // ��
        case 7010: return "jie"; // ��
        case 7012: return "ban"; // ��
        case 7014: return "li"; // ��
        case 7016: return "tao"; // ��
        case 7018: return "ku"; // ��
        case 7020: return "nai"; // ��
        case 7022: return "wa"; // ��
        case 7024: return "qia"; // ��
        case 7026: return "wen"; // ��
        case 7028: return "qiang"; // ��
        case 7030: return "tian"; // ��
        case 7032: return "zhen"; // ��
        case 7034: return "e"; // ��
        case 7036: return "nuo"; // ��
        case 7038: return "quan"; // ��
        case 7040: return "zha"; // ��
        case 7042: return "wu"; // ��
        case 7044: return "zhe"; // ��
        case 7046: return "kang"; // ��
        case 7048: return "rong"; // ��
        case 7050: return "shai"; // ��
        case 7052: return "chan"; // ��
        case 7054: return "suo"; // ��
        case 7056: return "jiu"; // ��
        case 7058: return "chong"; // ��
        case 7060: return "chuang"; // ��
        case 7062: return "guo"; // ��
        case 7064: return "peng"; // ��
        case 7066: return "di"; // ��
        case 7068: return "qi"; // ��
        case 7070: return "sou"; // ��
        case 7072: return "lian"; // ��
        case 7074: return "cheng"; // ��
        case 7076: return "chi"; // ��
        case 7078: return "guan"; // ��
        case 7080: return "lu"; // ��
        case 7082: return "lou"; // ��
        case 7084: return "zong"; // ��
        case 7086: return "gai"; // ��
        case 7088: return "hu"; // ��
        case 7090: return "zha"; // ��
        case 7092: return "qiang"; // ��
        case 7094: return "tang"; // ��
        case 7096: return "hua"; // ��
        case 7098: return "nai"; // ��
        case 7100: return "jiang"; // ��
        case 7102: return "gui"; // ��
        case 7104: return "ying"; // ��
        case 7106: return "ao"; // ��
        case 7108: return "zhi"; // ��
        case 7110: return "nie"; // ��
        case 7112: return "man"; // ��
        case 7114: return "chan"; // ��
        case 7116: return "kou"; // ��
        case 7118: return "chi"; // ��
        case 7120: return "she"; // ��
        case 7122: return "tuan"; // ��
        case 7124: return "jiao"; // ��
        case 7126: return "chan"; // ��
        case 7128: return "keng"; // ��
        case 7130: return "biao"; // ��
        case 7132: return "jiang"; // ��
        case 7134: return "yao"; // ��
        case 7136: return "gou"; // ��
        case 7138: return "qian"; // ��
        case 7140: return "ji"; // ��
        case 7142: return "pie"; // ��
        case 7144: return "lao"; // ��
        case 7146: return "dun"; // ��
        case 7148: return "xian"; // ��
        case 7150: return "rui"; // ��
        case 7152: return "gui"; // ��
        case 7154: return "zan"; // ��
        case 7156: return "yi"; // ��
        case 7158: return "xun"; // ��
        case 7160: return "cheng"; // ��
        case 7162: return "nao"; // ��
        case 7164: return "hong"; // ��
        case 7166: return "guang"; // ��
        case 7168: return "da"; // ��
        case 7170: return "nian"; // ��
        case 7172: return "lin"; // ��
        case 7174: return "zheng"; // ��
        case 7176: return "wei"; // ��
        case 7178: return "jiao"; // ��
        case 7180: return "ji"; // ��
        case 7182: return "cao"; // ��
        case 7184: return "dan"; // ��
        case 7186: return "dan"; // ��
        case 7188: return "bo"; // ��
        case 7190: return "che"; // ��
        case 7192: return "jue"; // ��
        case 7194: return "xiao"; // ��
        case 7196: return "ben"; // ��
        case 7198: return "fu"; // ��
        case 7200: return "zhuo"; // ��
        case 7202: return "wei"; // ��
        case 7204: return "pu"; // ��
        case 7206: return "qin"; // ��
        case 7208: return "dun"; // ��
        case 7210: return "hua"; // ��
        case 7212: return "jiao"; // ��
        case 7214: return "ta"; // ��
        case 7216: return "yao"; // ��
        case 7218: return "wo"; // ��
        case 7220: return "jian"; // ��
        case 7222: return "yong"; // ��
        case 7224: return "nang"; // ��
        case 7226: return "lu"; // ��
        case 7228: return "zhuo"; // ��
        case 7230: return "ze"; // ��
        case 7232: return "bu"; // ��
        case 7234: return "chuo"; // ��
        case 7236: return "ji"; // ��
        case 7238: return "dang"; // ��
        case 7240: return "se"; // ��
        case 7242: return "jing"; // ��
        case 7244: return "jie"; // ��
        case 7246: return "kuai"; // ��
        case 7248: return "dan"; // ��
        case 7250: return "xie"; // ��
        case 7252: return "ye"; // ��
        case 7254: return "ao"; // ��
        case 7256: return "ju"; // ��
        case 7258: return "ye"; // �@
        case 7260: return "e"; // �A
        case 7262: return "meng"; // �B
        case 7264: return "mi"; // �C
        case 7266: return "ji"; // �D
        case 7268: return "tai"; // �E
        case 7270: return "chou"; // �F
        case 7272: return "lan"; // �G
        case 7274: return "ju"; // �H
        case 7276: return "ye"; // �I
        case 7278: return "ru"; // �J
        case 7280: return "ye"; // �K
        case 7282: return "ye"; // �L
        case 7284: return "ni"; // �M
        case 7286: return "huo"; // �N
        case 7288: return "jie"; // �O
        case 7290: return "bin"; // �P
        case 7292: return "ning"; // �Q
        case 7294: return "ge"; // �R
        case 7296: return "zhi"; // �S
        case 7298: return "jie"; // �T
        case 7300: return "kuo"; // �U
        case 7302: return "mo"; // �V
        case 7304: return "jian"; // �W
        case 7306: return "xie"; // �X
        case 7308: return "la"; // �Y
        case 7310: return "tan"; // �Z
        case 7312: return "bai"; // �[
        case 7314: return "sou"; // �\
        case 7316: return "lu"; // �]
        case 7318: return "lue"; // �^
        case 7320: return "rao"; // �_
        case 7322: return "ti"; // �`
        case 7324: return "yang"; // �a
        case 7326: return "lei"; // �b
        case 7328: return "ca"; // �c
        case 7330: return "lu"; // �d
        case 7332: return "cuan"; // �e
        case 7334: return "nian"; // �f
        case 7336: return "xian"; // �g
        case 7338: return "pei"; // �h
        case 7340: return "li"; // �i
        case 7342: return "la"; // �j
        case 7344: return "huan"; // �k
        case 7346: return "ying"; // �l
        case 7348: return "lu"; // �m
        case 7350: return "long"; // �n
        case 7352: return "qian"; // �o
        case 7354: return "qian"; // �p
        case 7356: return "qian"; // �q
        case 7358: return "lan"; // �r
        case 7360: return "jian"; // �s
        case 7362: return "ying"; // �t
        case 7364: return "mei"; // �u
        case 7366: return "chan"; // �v
        case 7368: return "ying"; // �w
        case 7370: return "cuan"; // �x
        case 7372: return "xie"; // �y
        case 7374: return "she"; // �z
        case 7376: return "luo"; // �{
        case 7378: return "mei"; // �|
        case 7380: return "mo"; // �}
        case 7382: return "chi"; // �~
        case 7384: return ""; // ��
        case 7386: return "cuan"; // ��
        case 7388: return "lian"; // ��
        case 7390: return "tan"; // ��
        case 7392: return "li"; // ��
        case 7394: return "dian"; // ��
        case 7396: return "wa"; // ��
        case 7398: return "tang"; // ��
        case 7400: return "jiao"; // ��
        case 7402: return "lan"; // ��
        case 7404: return "li"; // ��
        case 7406: return "gui"; // ��
        case 7408: return "gui"; // ��
        case 7410: return "ji"; // ��
        case 7412: return "xun"; // ��
        case 7414: return "kao"; // ��
        case 7416: return "yi"; // ��
        case 7418: return "gan"; // ��
        case 7420: return "ban"; // ��
        case 7422: return "po"; // ��
        case 7424: return "dian"; // ��
        case 7426: return "kou"; // ��
        case 7428: return "min"; // ��
        case 7430: return "wu"; // ��
        case 7432: return "he"; // ��
        case 7434: return "ce"; // ��
        case 7436: return "chu"; // ��
        case 7438: return "ge"; // ��
        case 7440: return "xu"; // ��
        case 7442: return "jiao"; // ��
        case 7444: return "chen"; // ��
        case 7446: return "zhen"; // ��
        case 7448: return "duo"; // ��
        case 7450: return "yu"; // ��
        case 7452: return "bai"; // ��
        case 7454: return "xu"; // ��
        case 7456: return "duo"; // ��
        case 7458: return "nie"; // ��
        case 7460: return "dian"; // ��
        case 7462: return "duo"; // ��
        case 7464: return "yi"; // ��
        case 7466: return "ke"; // ��
        case 7468: return "yan"; // ��
        case 7470: return "ji"; // ��
        case 7472: return "tou"; // ��
        case 7474: return "xiao"; // ��
        case 7476: return "duo"; // ��
        case 7478: return "yang"; // ��
        case 7480: return "xia"; // ��
        case 7482: return "min"; // ��
        case 7484: return "ai"; // ��
        case 7486: return "ai"; // ��
        case 7488: return "di"; // ��
        case 7490: return "zhen"; // ��
        case 7492: return "shu"; // ��
        case 7494: return "liao"; // ��
        case 7496: return "ou"; // ��
        case 7498: return "xiong"; // ��
        case 7500: return "yi"; // ��
        case 7502: return "jiao"; // ��
        case 7504: return "shan"; // ��
        case 7506: return "jiao"; // ��
        case 7508: return "zhu"; // ��
        case 7510: return "yi"; // ��
        case 7512: return "lian"; // ��
        case 7514: return "bi"; // ��
        case 7516: return "tai"; // ��
        case 7518: return "xiao"; // ��
        case 7520: return "xiao"; // ��
        case 7522: return "xue"; // ��
        case 7524: return "qi"; // ��
        case 7526: return "qi"; // ��
        case 7528: return "jue"; // ��
        case 7530: return "zhai"; // ��
        case 7532: return "lang"; // ��
        case 7534: return "ban"; // ��
        case 7536: return "yu"; // ��
        case 7538: return "lan"; // ��
        case 7540: return "wei"; // ��
        case 7542: return "sheng"; // ��
        case 7544: return "jia"; // ��
        case 7546: return "jia"; // ��
        case 7548: return "yu"; // ��
        case 7550: return "jiao"; // ��
        case 7552: return "tou"; // ��
        case 7554: return "dou"; // ��
        case 7556: return "yin"; // ��
        case 7558: return "qiang"; // ��
        case 7560: return "qu"; // ��
        case 7562: return "zhan"; // ��
        case 7564: return "zhuo"; // ��
        case 7566: return "zhuo"; // ��
        case 7568: return "zhuo"; // ��
        case 7570: return "jin"; // ��
        case 7572: return "lin"; // ��
        case 7574: return "zhuo"; // ��
        case 7576: return "chu"; // ��
        case 7578: return "duan"; // ��
        case 7580: return "zhu"; // ��
        case 7582: return "jie"; // ��
        case 7584: return "hang"; // ��
        case 7586: return "pei"; // ��
        case 7588: return "you"; // ��
        case 7590: return "mie"; // ��
        case 7592: return "qi"; // ��
        case 7594: return "bi"; // ��
        case 7596: return "liu"; // ��
        case 7598: return "fu"; // ��
        case 7600: return "fang"; // ��
        case 7602: return "jing"; // ��
        case 7604: return "zhao"; // ��
        case 7606: return "yi"; // ��
        case 7608: return "shao"; // ��
        case 7610: return "jian"; // ��
        case 7612: return "eos"; // ��
        case 7614: return "zhi"; // ��
        case 7616: return "fan"; // ��
        case 7618: return "piao"; // ��
        case 7620: return "fan"; // ��
        case 7622: return "zhan"; // ��
        case 7624: return "kuai"; // ��
        case 7626: return "sui"; // ��
        case 7628: return "yu"; // ��
        case 7630: return "ji"; // ��
        case 7632: return "ji"; // ��
        case 7634: return "huo"; // ��
        case 7636: return "xie"; // ��
        case 7638: return "tiao"; // ��
        case 7640: return "ying"; // �@
        case 7642: return "di"; // �A
        case 7644: return "xu"; // �B
        case 7646: return "chan"; // �C
        case 7648: return "yang"; // �D
        case 7650: return "shi"; // �E
        case 7652: return "min"; // �F
        case 7654: return "min"; // �G
        case 7656: return "tun"; // �H
        case 7658: return "chun"; // �I
        case 7660: return "wu"; // �J
        case 7662: return "bei"; // �K
        case 7664: return "ban"; // �L
        case 7666: return "jie"; // �M
        case 7668: return "sheng"; // �N
        case 7670: return "hu"; // �O
        case 7672: return "fang"; // �P
        case 7674: return "gui"; // �Q
        case 7676: return "xuan"; // �R
        case 7678: return "fen"; // �S
        case 7680: return "qin"; // �T
        case 7682: return "hu"; // �U
        case 7684: return "yan"; // �V
        case 7686: return "ze"; // �W
        case 7688: return "fang"; // �X
        case 7690: return "shen"; // �Y
        case 7692: return "ju"; // �Z
        case 7694: return "yang"; // �[
        case 7696: return "bing"; // �\
        case 7698: return "xuan"; // �]
        case 7700: return "po"; // �^
        case 7702: return "zhen"; // �_
        case 7704: return "ling"; // �`
        case 7706: return "hao"; // �a
        case 7708: return "mo"; // �b
        case 7710: return "bian"; // �c
        case 7712: return "xu"; // �d
        case 7714: return "hun"; // �e
        case 7716: return "zong"; // �f
        case 7718: return "xia"; // �g
        case 7720: return "fei"; // �h
        case 7722: return "yi"; // �i
        case 7724: return "wen"; // �j
        case 7726: return "dong"; // �k
        case 7728: return "ai"; // �l
        case 7730: return "bing"; // �m
        case 7732: return "ang"; // �n
        case 7734: return "long"; // �o
        case 7736: return "kuang"; // �p
        case 7738: return "tiao"; // �q
        case 7740: return "shi"; // �r
        case 7742: return "huang"; // �s
        case 7744: return "xuan"; // �t
        case 7746: return "kui"; // �u
        case 7748: return "kua"; // �v
        case 7750: return "jiao"; // �w
        case 7752: return "jin"; // �x
        case 7754: return "zhi"; // �y
        case 7756: return "tong"; // �z
        case 7758: return "hong"; // �{
        case 7760: return "gai"; // �|
        case 7762: return "xiang"; // �}
        case 7764: return "han"; // �~
        case 7766: return ""; // ��
        case 7768: return "jun4      "; // ��
        case 7770: return "xian"; // ��
        case 7772: return "kun"; // ��
        case 7774: return "zhou"; // ��
        case 7776: return "xi"; // ��
        case 7778: return "sheng"; // ��
        case 7780: return "zhe"; // ��
        case 7782: return "zhe"; // ��
        case 7784: return "han"; // ��
        case 7786: return "hao"; // ��
        case 7788: return "wan"; // ��
        case 7790: return "tian"; // ��
        case 7792: return "zhuo"; // ��
        case 7794: return "zui"; // ��
        case 7796: return "zhou"; // ��
        case 7798: return "shan"; // ��
        case 7800: return "ni"; // ��
        case 7802: return "xi"; // ��
        case 7804: return "du"; // ��
        case 7806: return "zheng"; // ��
        case 7808: return "yi"; // ��
        case 7810: return "an"; // ��
        case 7812: return "wan"; // ��
        case 7814: return "lin"; // ��
        case 7816: return "chang"; // ��
        case 7818: return "wang"; // ��
        case 7820: return "xiao"; // ��
        case 7822: return "fei"; // ��
        case 7824: return "geng"; // ��
        case 7826: return "yi"; // ��
        case 7828: return "yun"; // ��
        case 7830: return "hui"; // ��
        case 7832: return "xu"; // ��
        case 7834: return "min"; // ��
        case 7836: return "ye"; // ��
        case 7838: return "ying"; // ��
        case 7840: return "du"; // ��
        case 7842: return "wei"; // ��
        case 7844: return "qing"; // ��
        case 7846: return "mao"; // ��
        case 7848: return "nan"; // ��
        case 7850: return "lan"; // ��
        case 7852: return "yang"; // ��
        case 7854: return "chun"; // ��
        case 7856: return "yao"; // ��
        case 7858: return "suo"; // ��
        case 7860: return "pu"; // ��
        case 7862: return "jiao"; // ��
        case 7864: return "kai"; // ��
        case 7866: return "gao"; // ��
        case 7868: return "weng"; // ��
        case 7870: return "chang"; // ��
        case 7872: return "qi"; // ��
        case 7874: return "hao"; // ��
        case 7876: return "yan"; // ��
        case 7878: return "li"; // ��
        case 7880: return "ji"; // ��
        case 7882: return "men"; // ��
        case 7884: return "zan"; // ��
        case 7886: return "xie"; // ��
        case 7888: return "hao"; // ��
        case 7890: return "mo"; // ��
        case 7892: return "cong"; // ��
        case 7894: return "ni"; // ��
        case 7896: return "zhang"; // ��
        case 7898: return "hui"; // ��
        case 7900: return "han"; // ��
        case 7902: return "xuan"; // ��
        case 7904: return "chuan"; // ��
        case 7906: return "liao"; // ��
        case 7908: return "tan"; // ��
        case 7910: return "jing"; // ��
        case 7912: return "pie"; // ��
        case 7914: return "lin"; // ��
        case 7916: return "xi"; // ��
        case 7918: return "yi"; // ��
        case 7920: return "ji"; // ��
        case 7922: return "huang"; // ��
        case 7924: return "dai"; // ��
        case 7926: return "ye"; // ��
        case 7928: return "ye"; // ��
        case 7930: return "li"; // ��
        case 7932: return "tan"; // ��
        case 7934: return "tong"; // ��
        case 7936: return "xiao"; // ��
        case 7938: return "fei"; // ��
        case 7940: return "shen"; // ��
        case 7942: return "zhao"; // ��
        case 7944: return "hao"; // ��
        case 7946: return "yi"; // ��
        case 7948: return "shan"; // ��
        case 7950: return "xing"; // ��
        case 7952: return "shan"; // ��
        case 7954: return "jiao"; // ��
        case 7956: return "bao"; // ��
        case 7958: return "jing"; // ��
        case 7960: return "yan"; // ��
        case 7962: return "ai"; // ��
        case 7964: return "ye"; // ��
        case 7966: return "ru"; // ��
        case 7968: return "meng"; // ��
        case 7970: return "li"; // ��
        case 7972: return "chen"; // ��
        case 7974: return "kuang"; // ��
        case 7976: return "die"; // ��
        case 7978: return "liao"; // ��
        case 7980: return "yao"; // ��
        case 7982: return "huo"; // ��
        case 7984: return "lu"; // ��
        case 7986: return "rong"; // ��
        case 7988: return "long"; // ��
        case 7990: return "luo"; // ��
        case 7992: return "luan"; // ��
        case 7994: return "shai"; // ��
        case 7996: return "tang"; // ��
        case 7998: return "yan"; // ��
        case 8000: return "zhu"; // ��
        case 8002: return "yue"; // ��
        case 8004: return "yi"; // ��
        case 8006: return "hu"; // ��
        case 8008: return "shu"; // ��
        case 8010: return "cao"; // ��
        case 8012: return "sheng"; // ��
        case 8014: return "zeng"; // ��
        case 8016: return "qian"; // ��
        case 8018: return "xu"; // ��
        case 8020: return "hui"; // ��
        case 8022: return "yin"; // �@
        case 8024: return "qie"; // �A
        case 8026: return "fen"; // �B
        case 8028: return "pi"; // �C
        case 8030: return "ban"; // �D
        case 8032: return "ling"; // �E
        case 8034: return "fei"; // �F
        case 8036: return "ti"; // �G
        case 8038: return "nu"; // �H
        case 8040: return "tiao"; // �I
        case 8042: return "lang"; // �J
        case 8044: return "juan"; // �K
        case 8046: return "ming"; // �L
        case 8048: return "mang"; // �M
        case 8050: return "tun"; // �N
        case 8052: return "qi"; // �O
        case 8054: return "ying"; // �P
        case 8056: return "zong"; // �Q
        case 8058: return "wang"; // �R
        case 8060: return "tong"; // �S
        case 8062: return "lang"; // �T
        case 8064: return "lao"; // �U
        case 8066: return "long"; // �V
        case 8068: return "pin"; // �W
        case 8070: return "zhu"; // �X
        case 8072: return "teul"; // �Y
        case 8074: return "ren"; // �Z
        case 8076: return "ba"; // �[
        case 8078: return "duo"; // �\
        case 8080: return "mu"; // �]
        case 8082: return "li"; // �^
        case 8084: return "gui"; // �_
        case 8086: return "jiu"; // �`
        case 8088: return "bi"; // �a
        case 8090: return "zhen"; // �b
        case 8092: return "ci"; // �c
        case 8094: return "ru"; // �d
        case 8096: return "qian"; // �e
        case 8098: return "wu"; // �f
        case 8100: return "wu"; // �g
        case 8102: return "xun"; // �h
        case 8104: return "fan"; // �i
        case 8106: return "zi"; // �j
        case 8108: return "er"; // �k
        case 8110: return "tuo"; // �l
        case 8112: return "di"; // �m
        case 8114: return "mang"; // �n
        case 8116: return "chi"; // �o
        case 8118: return "yi"; // �p
        case 8120: return "ge"; // �q
        case 8122: return "gong"; // �r
        case 8124: return "yi"; // �s
        case 8126: return "jiang"; // �t
        case 8128: return "shan"; // �u
        case 8130: return "wan"; // �v
        case 8132: return "jiu"; // �w
        case 8134: return "mang"; // �x
        case 8136: return "xi"; // �y
        case 8138: return "yuan"; // �z
        case 8140: return "bei"; // �{
        case 8142: return "dong"; // �|
        case 8144: return "qian"; // �}
        case 8146: return "chun"; // �~
        case 8148: return ""; // ��
        case 8150: return "dui"; // ��
        case 8152: return "hua"; // ��
        case 8154: return "xin"; // ��
        case 8156: return "niu"; // ��
        case 8158: return "chou"; // ��
        case 8160: return "song"; // ��
        case 8162: return "wo"; // ��
        case 8164: return "jin"; // ��
        case 8166: return "ji"; // ��
        case 8168: return "mao"; // ��
        case 8170: return "bi"; // ��
        case 8172: return "ang"; // ��
        case 8174: return "fen"; // ��
        case 8176: return "yi"; // ��
        case 8178: return "fu"; // ��
        case 8180: return "nan"; // ��
        case 8182: return "hu"; // ��
        case 8184: return "ya"; // ��
        case 8186: return "dou"; // ��
        case 8188: return "xin"; // ��
        case 8190: return "yao"; // ��
        case 8192: return "e"; // ��
        case 8194: return "zhao"; // ��
        case 8196: return "yun"; // ��
        case 8198: return "zui"; // ��
        case 8200: return "sheng"; // ��
        case 8202: return "di"; // ��
        case 8204: return "lu"; // ��
        case 8206: return "song"; // ��
        case 8208: return "nan"; // ��
        case 8210: return "xian"; // ��
        case 8212: return "ci"; // ��
        case 8214: return "xi"; // ��
        case 8216: return "guai"; // ��
        case 8218: return "bao"; // ��
        case 8220: return "mo"; // ��
        case 8222: return "yi"; // ��
        case 8224: return "ye"; // ��
        case 8226: return "ye"; // ��
        case 8228: return "shi"; // ��
        case 8230: return "nie"; // ��
        case 8232: return "bi"; // ��
        case 8234: return "yi"; // ��
        case 8236: return "ni"; // ��
        case 8238: return "la"; // ��
        case 8240: return "he"; // ��
        case 8242: return "pan"; // ��
        case 8244: return "fan"; // ��
        case 8246: return "zhong"; // ��
        case 8248: return "dai"; // ��
        case 8250: return "ci"; // ��
        case 8252: return "yang"; // ��
        case 8254: return "fu"; // ��
        case 8256: return "shu"; // ��
        case 8258: return "shao"; // ��
        case 8260: return "song"; // ��
        case 8262: return "shen"; // ��
        case 8264: return "nan"; // ��
        case 8266: return "yong"; // ��
        case 8268: return "die"; // ��
        case 8270: return "zha"; // ��
        case 8272: return "dan"; // ��
        case 8274: return "gu"; // ��
        case 8276: return "bu"; // ��
        case 8278: return "ao"; // ��
        case 8280: return "fu"; // ��
        case 8282: return "ba"; // ��
        case 8284: return "duo"; // ��
        case 8286: return "bi"; // ��
        case 8288: return "shan"; // ��
        case 8290: return "si"; // ��
        case 8292: return "zhu"; // ��
        case 8294: return "bei"; // ��
        case 8296: return "fei"; // ��
        case 8298: return "guai"; // ��
        case 8300: return "cha"; // ��
        case 8302: return "yao"; // ��
        case 8304: return "jiu"; // ��
        case 8306: return "liu"; // ��
        case 8308: return "mei"; // ��
        case 8310: return "li"; // ��
        case 8312: return "rong"; // ��
        case 8314: return "zao"; // ��
        case 8316: return "saeng"; // ��
        case 8318: return "yong"; // ��
        case 8320: return "xun"; // ��
        case 8322: return "qi"; // ��
        case 8324: return "zhen"; // ��
        case 8326: return "yi"; // ��
        case 8328: return "xiang"; // ��
        case 8330: return "zhen"; // ��
        case 8332: return "li"; // ��
        case 8334: return "se"; // ��
        case 8336: return "kan"; // ��
        case 8338: return "bing"; // ��
        case 8340: return "ren"; // ��
        case 8342: return "bai"; // ��
        case 8344: return "ren"; // ��
        case 8346: return "bing"; // ��
        case 8348: return "zi"; // ��
        case 8350: return "chou"; // ��
        case 8352: return "yi"; // ��
        case 8354: return "ci"; // ��
        case 8356: return "jian"; // ��
        case 8358: return "zui"; // ��
        case 8360: return "er"; // ��
        case 8362: return "er"; // ��
        case 8364: return "you"; // ��
        case 8366: return "fa"; // ��
        case 8368: return "gong"; // ��
        case 8370: return "zhan"; // ��
        case 8372: return "li"; // ��
        case 8374: return "yin"; // ��
        case 8376: return "yi"; // ��
        case 8378: return "shi"; // ��
        case 8380: return "fu"; // ��
        case 8382: return "ru"; // ��
        case 8384: return "yi"; // ��
        case 8386: return "ku"; // ��
        case 8388: return "qiong"; // ��
        case 8390: return "sang"; // ��
        case 8392: return "xue"; // ��
        case 8394: return "duo"; // ��
        case 8396: return "chui"; // ��
        case 8398: return "yu"; // ��
        case 8400: return "za"; // ��
        case 8402: return "ka"; // ��
        case 8404: return "ying"; // �@
        case 8406: return "jie"; // �A
        case 8408: return "liu"; // �B
        case 8410: return "zhan"; // �C
        case 8412: return "xun"; // �D
        case 8414: return "sa"; // �E
        case 8416: return "zhen"; // �F
        case 8418: return "bei"; // �G
        case 8420: return "ying"; // �H
        case 8422: return "kuo"; // �I
        case 8424: return "jing"; // �J
        case 8426: return "bo"; // �K
        case 8428: return "ben"; // �L
        case 8430: return "rui"; // �M
        case 8432: return "xi"; // �N
        case 8434: return "lang"; // �O
        case 8436: return "liu"; // �P
        case 8438: return "feng"; // �Q
        case 8440: return "qi"; // �R
        case 8442: return "wen"; // �S
        case 8444: return "jun"; // �T
        case 8446: return "gan"; // �U
        case 8448: return "yin"; // �V
        case 8450: return "qiu"; // �W
        case 8452: return "you"; // �X
        case 8454: return "long"; // �Y
        case 8456: return "peng"; // �Z
        case 8458: return "zhuang"; // �[
        case 8460: return "di"; // �\
        case 8462: return "juan"; // �]
        case 8464: return "tu"; // �^
        case 8466: return "zao"; // �_
        case 8468: return "ao"; // �`
        case 8470: return "bi"; // �a
        case 8472: return "di"; // �b
        case 8474: return "han"; // �c
        case 8476: return "zhi"; // �d
        case 8478: return "ren"; // �e
        case 8480: return "bei"; // �f
        case 8482: return "jian"; // �g
        case 8484: return "huan"; // �h
        case 8486: return "wan"; // �i
        case 8488: return "nuo"; // �j
        case 8490: return "jia"; // �k
        case 8492: return "tiao"; // �l
        case 8494: return "ji"; // �m
        case 8496: return "xiao"; // �n
        case 8498: return "lu"; // �o
        case 8500: return "kuan"; // �p
        case 8502: return "cen"; // �q
        case 8504: return "fen"; // �r
        case 8506: return "song"; // �s
        case 8508: return "qi"; // �t
        case 8510: return "dou"; // �u
        case 8512: return "qin"; // �v
        case 8514: return "ying"; // �w
        case 8516: return "ju"; // �x
        case 8518: return "hun"; // �y
        case 8520: return "zhuo"; // �z
        case 8522: return "chan"; // �{
        case 8524: return "wei"; // �|
        case 8526: return "jing"; // �}
        case 8528: return "li"; // �~
        case 8530: return ""; // ��
        case 8532: return "bing"; // ��
        case 8534: return "xia"; // ��
        case 8536: return "fo"; // ��
        case 8538: return "tao"; // ��
        case 8540: return "zhi"; // ��
        case 8542: return "lai"; // ��
        case 8544: return "lian"; // ��
        case 8546: return "tuo"; // ��
        case 8548: return "li"; // ��
        case 8550: return "qi"; // ��
        case 8552: return "bing"; // ��
        case 8554: return "lun"; // ��
        case 8556: return "cong"; // ��
        case 8558: return "qian"; // ��
        case 8560: return "qi"; // ��
        case 8562: return "cai"; // ��
        case 8564: return "chan"; // ��
        case 8566: return "de"; // ��
        case 8568: return "fei"; // ��
        case 8570: return "bei"; // ��
        case 8572: return "bang"; // ��
        case 8574: return "hun"; // ��
        case 8576: return "chang"; // ��
        case 8578: return "zao"; // ��
        case 8580: return "li"; // ��
        case 8582: return "yu"; // ��
        case 8584: return "yu"; // ��
        case 8586: return "gu"; // ��
        case 8588: return "gun"; // ��
        case 8590: return "dong"; // ��
        case 8592: return "gang"; // ��
        case 8594: return "wang"; // ��
        case 8596: return "cuo"; // ��
        case 8598: return "fan"; // ��
        case 8600: return "cheng"; // ��
        case 8602: return "zhan"; // ��
        case 8604: return "qi"; // ��
        case 8606: return "yuan"; // ��
        case 8608: return "yan"; // ��
        case 8610: return "yu"; // ��
        case 8612: return "juan"; // ��
        case 8614: return "yi"; // ��
        case 8616: return "shen"; // ��
        case 8618: return "qi"; // ��
        case 8620: return "zhuo"; // ��
        case 8622: return "fu"; // ��
        case 8624: return "lai"; // ��
        case 8626: return "zou"; // ��
        case 8628: return "zou"; // ��
        case 8630: return "fen"; // ��
        case 8632: return "chen"; // ��
        case 8634: return "qing"; // ��
        case 8636: return "ni"; // ��
        case 8638: return "wan"; // ��
        case 8640: return "lu"; // ��
        case 8642: return "hao"; // ��
        case 8644: return "jie"; // ��
        case 8646: return "zhou"; // ��
        case 8648: return "ju"; // ��
        case 8650: return "ju"; // ��
        case 8652: return "cheng"; // ��
        case 8654: return "zuo"; // ��
        case 8656: return "kong"; // ��
        case 8658: return "ya"; // ��
        case 8660: return "bei"; // ��
        case 8662: return "zhuo"; // ��
        case 8664: return "zi"; // ��
        case 8666: return "bin"; // ��
        case 8668: return "peng"; // ��
        case 8670: return "ding"; // ��
        case 8672: return "chu"; // ��
        case 8674: return "chang"; // ��
        case 8676: return "men"; // ��
        case 8678: return "hua"; // ��
        case 8680: return "jian"; // ��
        case 8682: return "gui"; // ��
        case 8684: return "xi"; // ��
        case 8686: return "dao"; // ��
        case 8688: return "gui"; // ��
        case 8690: return "dian"; // ��
        case 8692: return "zhi"; // ��
        case 8694: return "quan"; // ��
        case 8696: return "mieng"; // ��
        case 8698: return "fu"; // ��
        case 8700: return "geng"; // ��
        case 8702: return "peng"; // ��
        case 8704: return "shan"; // ��
        case 8706: return "yi"; // ��
        case 8708: return "shen"; // ��
        case 8710: return "duo"; // ��
        case 8712: return "fu"; // ��
        case 8714: return "wei"; // ��
        case 8716: return "wei"; // ��
        case 8718: return "jia"; // ��
        case 8720: return "zong"; // ��
        case 8722: return "han"; // ��
        case 8724: return "yi"; // ��
        case 8726: return "xi"; // ��
        case 8728: return "ya"; // ��
        case 8730: return "yan"; // ��
        case 8732: return "jian"; // ��
        case 8734: return "yu"; // ��
        case 8736: return "he"; // ��
        case 8738: return "wo"; // ��
        case 8740: return "pian"; // ��
        case 8742: return "bi"; // ��
        case 8744: return "yao"; // ��
        case 8746: return "guo"; // ��
        case 8748: return "xu"; // ��
        case 8750: return "ruo"; // ��
        case 8752: return "yang"; // ��
        case 8754: return "la"; // ��
        case 8756: return "yan"; // ��
        case 8758: return "ben"; // ��
        case 8760: return "hui"; // ��
        case 8762: return "kui"; // ��
        case 8764: return "jie"; // ��
        case 8766: return "kui"; // ��
        case 8768: return "si"; // ��
        case 8770: return "feng"; // ��
        case 8772: return "tuo"; // ��
        case 8774: return "ji"; // ��
        case 8776: return "mu"; // ��
        case 8778: return "mao"; // ��
        case 8780: return "ku"; // ��
        case 8782: return "hu"; // ��
        case 8784: return "ting"; // ��
        case 8786: return "yu"; // �@
        case 8788: return "you"; // �A
        case 8790: return "cong"; // �B
        case 8792: return "yuan"; // �C
        case 8794: return "yang"; // �D
        case 8796: return "zhen"; // �E
        case 8798: return "pian"; // �F
        case 8800: return "ye"; // �G
        case 8802: return "jie"; // �H
        case 8804: return "ye"; // �I
        case 8806: return "dun"; // �J
        case 8808: return "yu"; // �K
        case 8810: return "wei"; // �L
        case 8812: return "mei"; // �M
        case 8814: return "ti"; // �N
        case 8816: return "ji"; // �O
        case 8818: return "jie"; // �P
        case 8820: return "rou"; // �Q
        case 8822: return "huang"; // �R
        case 8824: return "le"; // �S
        case 8826: return "quan"; // �T
        case 8828: return "xiang"; // �U
        case 8830: return "shi"; // �V
        case 8832: return "tan"; // �W
        case 8834: return "wen"; // �X
        case 8836: return "shen"; // �Y
        case 8838: return "chu"; // �Z
        case 8840: return "pi"; // �[
        case 8842: return "jia"; // �\
        case 8844: return "yi"; // �]
        case 8846: return "zhan"; // �^
        case 8848: return "fu"; // �_
        case 8850: return "nuo"; // �`
        case 8852: return "mi"; // �a
        case 8854: return "gu"; // �b
        case 8856: return "jian"; // �c
        case 8858: return "ta"; // �d
        case 8860: return "yao"; // �e
        case 8862: return "xie"; // �f
        case 8864: return "yuan"; // �g
        case 8866: return "zi"; // �h
        case 8868: return "ming"; // �i
        case 8870: return "su"; // �j
        case 8872: return "jia"; // �k
        case 8874: return "yao"; // �l
        case 8876: return "jie"; // �m
        case 8878: return "huang"; // �n
        case 8880: return "han"; // �o
        case 8882: return "qian"; // �p
        case 8884: return "ma"; // �q
        case 8886: return "yuan"; // �r
        case 8888: return "rong"; // �s
        case 8890: return "shi"; // �t
        case 8892: return "zhi"; // �u
        case 8894: return "wen"; // �v
        case 8896: return "ting"; // �w
        case 8898: return "rong"; // �x
        case 8900: return "tang"; // �y
        case 8902: return "zhai"; // �z
        case 8904: return "si"; // �{
        case 8906: return "sheng"; // �|
        case 8908: return "ke"; // �}
        case 8910: return "xi"; // �~
        case 8912: return ""; // ��
        case 8914: return "gu"; // ��
        case 8916: return "qi"; // ��
        case 8918: return "gao"; // ��
        case 8920: return "sun"; // ��
        case 8922: return "pan"; // ��
        case 8924: return "tao"; // ��
        case 8926: return "ge"; // ��
        case 8928: return "chun"; // ��
        case 8930: return "dian"; // ��
        case 8932: return "nou"; // ��
        case 8934: return "ji"; // ��
        case 8936: return "gou"; // ��
        case 8938: return "qiang"; // ��
        case 8940: return "qian"; // ��
        case 8942: return "mei"; // ��
        case 8944: return "xu"; // ��
        case 8946: return "gang"; // ��
        case 8948: return "zhuo"; // ��
        case 8950: return "tuo"; // ��
        case 8952: return "qiao"; // ��
        case 8954: return "yang"; // ��
        case 8956: return "dian"; // ��
        case 8958: return "jia"; // ��
        case 8960: return "zhi"; // ��
        case 8962: return "dao"; // ��
        case 8964: return "long"; // ��
        case 8966: return "sang"; // ��
        case 8968: return "die"; // ��
        case 8970: return "gui"; // ��
        case 8972: return "lian"; // ��
        case 8974: return "hui"; // ��
        case 8976: return "yong"; // ��
        case 8978: return "qian"; // ��
        case 8980: return "guo"; // ��
        case 8982: return "gai"; // ��
        case 8984: return "gai"; // ��
        case 8986: return "tuan"; // ��
        case 8988: return "hua"; // ��
        case 8990: return "shen"; // ��
        case 8992: return "zui"; // ��
        case 8994: return "peng"; // ��
        case 8996: return "you"; // ��
        case 8998: return "jiang"; // ��
        case 9000: return "hu"; // ��
        case 9002: return "huan"; // ��
        case 9004: return "gui"; // ��
        case 9006: return "nie"; // ��
        case 9008: return "yi"; // ��
        case 9010: return "gao"; // ��
        case 9012: return "kang"; // ��
        case 9014: return "gui"; // ��
        case 9016: return "gui"; // ��
        case 9018: return "man"; // ��
        case 9020: return "di"; // ��
        case 9022: return "zhuang"; // ��
        case 9024: return "le"; // ��
        case 9026: return "lang"; // ��
        case 9028: return "chen"; // ��
        case 9030: return "cong"; // ��
        case 9032: return "li"; // ��
        case 9034: return "xiu"; // ��
        case 9036: return "qing"; // ��
        case 9038: return "shuang"; // ��
        case 9040: return "tong"; // ��
        case 9042: return "guan"; // ��
        case 9044: return "ze"; // ��
        case 9046: return "su"; // ��
        case 9048: return "lei"; // ��
        case 9050: return "lu"; // ��
        case 9052: return "liang"; // ��
        case 9054: return "mi"; // ��
        case 9056: return "lou"; // ��
        case 9058: return "chao"; // ��
        case 9060: return "su"; // ��
        case 9062: return "ke"; // ��
        case 9064: return "biao"; // ��
        case 9066: return "du"; // ��
        case 9068: return "liao"; // ��
        case 9070: return "zhe"; // ��
        case 9072: return "zha"; // ��
        case 9074: return "shu"; // ��
        case 9076: return "man"; // ��
        case 9078: return "mu"; // ��
        case 9080: return "yang"; // ��
        case 9082: return "tiao"; // ��
        case 9084: return "peng"; // ��
        case 9086: return "zhu"; // ��
        case 9088: return "sha"; // ��
        case 9090: return "quan"; // ��
        case 9092: return "jian"; // ��
        case 9094: return "cong"; // ��
        case 9096: return "ji"; // ��
        case 9098: return "yan"; // ��
        case 9100: return "xue"; // ��
        case 9102: return "er"; // ��
        case 9104: return "xun"; // ��
        case 9106: return "yi"; // ��
        case 9108: return "zui"; // ��
        case 9110: return "cong"; // ��
        case 9112: return "pu"; // ��
        case 9114: return "shu"; // ��
        case 9116: return "hua"; // ��
        case 9118: return "kui"; // ��
        case 9120: return "zhen"; // ��
        case 9122: return "shan"; // ��
        case 9124: return "xi"; // ��
        case 9126: return "chun"; // ��
        case 9128: return "dian"; // ��
        case 9130: return "fa"; // ��
        case 9132: return "mo"; // ��
        case 9134: return "wu"; // ��
        case 9136: return "rao"; // ��
        case 9138: return "lin"; // ��
        case 9140: return "liu"; // ��
        case 9142: return "qiao"; // ��
        case 9144: return "jian"; // ��
        case 9146: return "run"; // ��
        case 9148: return "fan"; // ��
        case 9150: return "jian"; // ��
        case 9152: return "lao"; // ��
        case 9154: return "yun"; // ��
        case 9156: return "shun"; // ��
        case 9158: return "dun"; // ��
        case 9160: return "cheng"; // ��
        case 9162: return "tang"; // ��
        case 9164: return "meng"; // ��
        case 9166: return "xiao"; // ��
        case 9168: return "jue"; // �@
        case 9170: return "dian"; // �A
        case 9172: return "hui"; // �B
        case 9174: return "ji"; // �C
        case 9176: return "nuo"; // �D
        case 9178: return "duo"; // �E
        case 9180: return "ning"; // �F
        case 9182: return "rui"; // �G
        case 9184: return "tong"; // �H
        case 9186: return "zeng"; // �I
        case 9188: return "fen"; // �J
        case 9190: return "qiong"; // �K
        case 9192: return "yan"; // �L
        case 9194: return "heng"; // �M
        case 9196: return "qian"; // �N
        case 9198: return "gu"; // �O
        case 9200: return "liu"; // �P
        case 9202: return "lao"; // �Q
        case 9204: return "gao"; // �R
        case 9206: return "xi"; // �S
        case 9208: return "sheng"; // �T
        case 9210: return "zi"; // �U
        case 9212: return "san"; // �V
        case 9214: return "ji"; // �W
        case 9216: return "dou"; // �X
        case 9218: return "jing"; // �Y
        case 9220: return "jian"; // �Z
        case 9222: return "chu"; // �[
        case 9224: return "da"; // �\
        case 9226: return "qiao"; // �]
        case 9228: return "jiang"; // �^
        case 9230: return "lin"; // �_
        case 9232: return "nao"; // �`
        case 9234: return "yin"; // �a
        case 9236: return "hui"; // �b
        case 9238: return "shan"; // �c
        case 9240: return "zui"; // �d
        case 9242: return "xuan"; // �e
        case 9244: return "cheng"; // �f
        case 9246: return "gan"; // �g
        case 9248: return "ju"; // �h
        case 9250: return "zui"; // �i
        case 9252: return "yi"; // �j
        case 9254: return "pu"; // �k
        case 9256: return "feng"; // �l
        case 9258: return "hui"; // �m
        case 9260: return "dang"; // �n
        case 9262: return "ji"; // �o
        case 9264: return "sui"; // �p
        case 9266: return "bo"; // �q
        case 9268: return "cheng"; // �r
        case 9270: return "chu"; // �s
        case 9272: return "zhua"; // �t
        case 9274: return "gui"; // �u
        case 9276: return "ji"; // �v
        case 9278: return "jie"; // �w
        case 9280: return "jia"; // �x
        case 9282: return "zhai"; // �y
        case 9284: return "jian"; // �z
        case 9286: return "qiang"; // �{
        case 9288: return "dao"; // �|
        case 9290: return "yi"; // �}
        case 9292: return "biao"; // �~
        case 9294: return ""; // ��
        case 9296: return "song"; // ��
        case 9298: return "she"; // ��
        case 9300: return "li"; // ��
        case 9302: return "yin"; // ��
        case 9304: return "tao"; // ��
        case 9306: return "tai"; // ��
        case 9308: return "mian"; // ��
        case 9310: return "qi"; // ��
        case 9312: return "tuan"; // ��
        case 9314: return "bin"; // ��
        case 9316: return "hua"; // ��
        case 9318: return "ji"; // ��
        case 9320: return "qian"; // ��
        case 9322: return "mi"; // ��
        case 9324: return "ning"; // ��
        case 9326: return "yi"; // ��
        case 9328: return "gao"; // ��
        case 9330: return "kan"; // ��
        case 9332: return "yin"; // ��
        case 9334: return "nou"; // ��
        case 9336: return "qing"; // ��
        case 9338: return "yan"; // ��
        case 9340: return "qi"; // ��
        case 9342: return "mi"; // ��
        case 9344: return "zhao"; // ��
        case 9346: return "gui"; // ��
        case 9348: return "chun"; // ��
        case 9350: return "ji"; // ��
        case 9352: return "kui"; // ��
        case 9354: return "po"; // ��
        case 9356: return "deng"; // ��
        case 9358: return "chu"; // ��
        case 9360: return "ge"; // ��
        case 9362: return "mian"; // ��
        case 9364: return "you"; // ��
        case 9366: return "zhi"; // ��
        case 9368: return "guang"; // ��
        case 9370: return "qian"; // ��
        case 9372: return "lei"; // ��
        case 9374: return "lei"; // ��
        case 9376: return "sa"; // ��
        case 9378: return "lu"; // ��
        case 9380: return "li"; // ��
        case 9382: return "cuan"; // ��
        case 9384: return "lu"; // ��
        case 9386: return "mei"; // ��
        case 9388: return "hui"; // ��
        case 9390: return "ou"; // ��
        case 9392: return "lu"; // ��
        case 9394: return "zhi"; // ��
        case 9396: return "gao"; // ��
        case 9398: return "du"; // ��
        case 9400: return "yuan"; // ��
        case 9402: return "li"; // ��
        case 9404: return "fei"; // ��
        case 9406: return "zhu"; // ��
        case 9408: return "sou"; // ��
        case 9410: return "lian"; // ��
        case 9412: return "jiang"; // ��
        case 9414: return "chu"; // ��
        case 9416: return "qing"; // ��
        case 9418: return "zhu"; // ��
        case 9420: return "lu"; // ��
        case 9422: return "yan"; // ��
        case 9424: return "li"; // ��
        case 9426: return "zhu"; // ��
        case 9428: return "qin"; // ��
        case 9430: return "ji"; // ��
        case 9432: return "e"; // ��
        case 9434: return "su"; // ��
        case 9436: return "gui"; // ��
        case 9438: return "nie"; // ��
        case 9440: return "yu"; // ��
        case 9442: return "long"; // ��
        case 9444: return "la"; // ��
        case 9446: return "jiao"; // ��
        case 9448: return "xian"; // ��
        case 9450: return "gui"; // ��
        case 9452: return "ju"; // ��
        case 9454: return "qiu"; // ��
        case 9456: return "ling"; // ��
        case 9458: return "ying"; // ��
        case 9460: return "jian"; // ��
        case 9462: return "yin"; // ��
        case 9464: return "you"; // ��
        case 9466: return "ying"; // ��
        case 9468: return "xiang"; // ��
        case 9470: return "nong"; // ��
        case 9472: return "bo"; // ��
        case 9474: return "zhan"; // ��
        case 9476: return "lan"; // ��
        case 9478: return "ju"; // ��
        case 9480: return "shuang"; // ��
        case 9482: return "she"; // ��
        case 9484: return "wei"; // ��
        case 9486: return "cong"; // ��
        case 9488: return "quan"; // ��
        case 9490: return "qu"; // ��
        case 9492: return "cang"; // ��
        case 9494: return "jou"; // ��
        case 9496: return "yu"; // ��
        case 9498: return "luo"; // ��
        case 9500: return "li"; // ��
        case 9502: return "zuan"; // ��
        case 9504: return "luan"; // ��
        case 9506: return "dang"; // ��
        case 9508: return "jue"; // ��
        case 9510: return "yan"; // ��
        case 9512: return "lan"; // ��
        case 9514: return "lan"; // ��
        case 9516: return "zhu"; // ��
        case 9518: return "lei"; // ��
        case 9520: return "li"; // ��
        case 9522: return "ba"; // ��
        case 9524: return "nang"; // ��
        case 9526: return "yu"; // ��
        case 9528: return "ling"; // ��
        case 9530: return "guang"; // ��
        case 9532: return "yi"; // ��
        case 9534: return "han"; // ��
        case 9536: return "xu"; // ��
        case 9538: return "chao"; // ��
        case 9540: return "xi"; // ��
        case 9542: return "qi"; // ��
        case 9544: return "ai"; // ��
        case 9546: return "yi"; // ��
        case 9548: return "jue"; // ��
        case 9550: return "kai"; // �@
        case 9552: return "xu"; // �A
        case 9554: return "he"; // �B
        case 9556: return "kui"; // �C
        case 9558: return "lang"; // �D
        case 9560: return "kuan"; // �E
        case 9562: return "shuo"; // �F
        case 9564: return "e"; // �G
        case 9566: return "xu"; // �H
        case 9568: return "chi"; // �I
        case 9570: return "qin"; // �J
        case 9572: return "kan"; // �K
        case 9574: return "kuan"; // �L
        case 9576: return "ke"; // �M
        case 9578: return "chuan"; // �N
        case 9580: return "gua"; // �O
        case 9582: return "yin"; // �P
        case 9584: return "yu"; // �Q
        case 9586: return "xiao"; // �R
        case 9588: return "ye"; // �S
        case 9590: return "yang"; // �T
        case 9592: return "tan"; // �U
        case 9594: return "jin"; // �V
        case 9596: return "ou"; // �W
        case 9598: return "hu"; // �X
        case 9600: return "ti"; // �Y
        case 9602: return "huan"; // �Z
        case 9604: return "xu"; // �[
        case 9606: return "pen"; // �\
        case 9608: return "yi"; // �]
        case 9610: return "chi"; // �^
        case 9612: return "xu"; // �_
        case 9614: return "shan"; // �`
        case 9616: return "lian"; // �a
        case 9618: return "chu"; // �b
        case 9620: return "yi"; // �c
        case 9622: return "e"; // �d
        case 9624: return "yu"; // �e
        case 9626: return "chuo"; // �f
        case 9628: return "huan"; // �g
        case 9630: return "bu"; // �h
        case 9632: return "bu"; // �i
        case 9634: return "ju"; // �j
        case 9636: return "qian"; // �k
        case 9638: return "zhi"; // �l
        case 9640: return "se"; // �m
        case 9642: return "chi"; // �n
        case 9644: return "se"; // �o
        case 9646: return "zhong"; // �p
        case 9648: return "sui"; // �q
        case 9650: return "sui"; // �r
        case 9652: return "li"; // �s
        case 9654: return "ze"; // �t
        case 9656: return "yu"; // �u
        case 9658: return "li"; // �v
        case 9660: return "gui"; // �w
        case 9662: return "e"; // �x
        case 9664: return "zhe"; // �y
        case 9666: return "wen"; // �z
        case 9668: return "mo"; // �{
        case 9670: return "yao"; // �|
        case 9672: return "sheng"; // �}
        case 9674: return "xu"; // �~
        case 9676: return ""; // ��
        case 9678: return "jue"; // ��
        case 9680: return "qia"; // ��
        case 9682: return "qiu"; // ��
        case 9684: return "su"; // ��
        case 9686: return "qing"; // ��
        case 9688: return "yi"; // ��
        case 9690: return "ye"; // ��
        case 9692: return "ye"; // ��
        case 9694: return "can"; // ��
        case 9696: return "men"; // ��
        case 9698: return "die"; // ��
        case 9700: return "zhen"; // ��
        case 9702: return "yun"; // ��
        case 9704: return "wen"; // ��
        case 9706: return "chou"; // ��
        case 9708: return "ti"; // ��
        case 9710: return "jin"; // ��
        case 9712: return "shang"; // ��
        case 9714: return "yin"; // ��
        case 9716: return "diao"; // ��
        case 9718: return "jiu"; // ��
        case 9720: return "kui"; // ��
        case 9722: return "cuan"; // ��
        case 9724: return "dan"; // ��
        case 9726: return "du"; // ��
        case 9728: return "jiang"; // ��
        case 9730: return "lian"; // ��
        case 9732: return "bin"; // ��
        case 9734: return "du"; // ��
        case 9736: return "jian"; // ��
        case 9738: return "jian"; // ��
        case 9740: return "zhu"; // ��
        case 9742: return "keng"; // ��
        case 9744: return "yi"; // ��
        case 9746: return "sha"; // ��
        case 9748: return "que"; // ��
        case 9750: return "ke"; // ��
        case 9752: return "yao"; // ��
        case 9754: return "xun"; // ��
        case 9756: return "hui"; // ��
        case 9758: return "qiao"; // ��
        case 9760: return "ji"; // ��
        case 9762: return "ou"; // ��
        case 9764: return "hui"; // ��
        case 9766: return "duan"; // ��
        case 9768: return "yi"; // ��
        case 9770: return "xiao"; // ��
        case 9772: return "guan"; // ��
        case 9774: return "mei"; // ��
        case 9776: return "ai"; // ��
        case 9778: return "jie"; // ��
        case 9780: return "pi"; // ��
        case 9782: return "chan"; // ��
        case 9784: return "hao"; // ��
        case 9786: return "cai"; // ��
        case 9788: return "pi"; // ��
        case 9790: return "lie"; // ��
        case 9792: return "jia"; // ��
        case 9794: return "sai"; // ��
        case 9796: return "mao"; // ��
        case 9798: return "tuo"; // ��
        case 9800: return "xun"; // ��
        case 9802: return "er"; // ��
        case 9804: return "rong"; // ��
        case 9806: return "xian"; // ��
        case 9808: return "ju"; // ��
        case 9810: return "qiu"; // ��
        case 9812: return "dou"; // ��
        case 9814: return "sha"; // ��
        case 9816: return "pei"; // ��
        case 9818: return "ju"; // ��
        case 9820: return "duo"; // ��
        case 9822: return "bi"; // ��
        case 9824: return "san"; // ��
        case 9826: return "mao"; // ��
        case 9828: return "sai"; // ��
        case 9830: return "shu"; // ��
        case 9832: return "tuo"; // ��
        case 9834: return "ke"; // ��
        case 9836: return "ta"; // ��
        case 9838: return "san"; // ��
        case 9840: return "lu"; // ��
        case 9842: return "mu"; // ��
        case 9844: return "li"; // ��
        case 9846: return "tong"; // ��
        case 9848: return "rong"; // ��
        case 9850: return "zhan"; // ��
        case 9852: return "sao"; // ��
        case 9854: return "zhan"; // ��
        case 9856: return "meng"; // ��
        case 9858: return "lu"; // ��
        case 9860: return "die"; // ��
        case 9862: return "jue"; // ��
        case 9864: return "qi"; // ��
        case 9866: return "yang"; // ��
        case 9868: return "nei"; // ��
        case 9870: return "bin"; // ��
        case 9872: return "shen"; // ��
        case 9874: return "qi"; // ��
        case 9876: return "xi"; // ��
        case 9878: return "qing"; // ��
        case 9880: return "ya"; // ��
        case 9882: return "dong"; // ��
        case 9884: return "yang"; // ��
        case 9886: return "yun"; // ��
        case 9888: return "zheng"; // ��
        case 9890: return "bing"; // ��
        case 9892: return "dang"; // ��
        case 9894: return "shui"; // ��
        case 9896: return "le"; // ��
        case 9898: return "mei"; // ��
        case 9900: return "fan"; // ��
        case 9902: return "gui"; // ��
        case 9904: return "bin"; // ��
        case 9906: return "ze"; // ��
        case 9908: return "mian"; // ��
        case 9910: return "diao"; // ��
        case 9912: return "yue"; // ��
        case 9914: return "chuan"; // ��
        case 9916: return "wan"; // ��
        case 9918: return "fa"; // ��
        case 9920: return "da"; // ��
        case 9922: return "tuo"; // ��
        case 9924: return "mang"; // ��
        case 9926: return "you"; // ��
        case 9928: return "pin"; // ��
        case 9930: return "qian"; // ��
        case 9932: return "yu"; // �@
        case 9934: return "yu"; // �A
        case 9936: return "tu"; // �B
        case 9938: return "jiu"; // �C
        case 9940: return "ji"; // �D
        case 9942: return "zhi"; // �E
        case 9944: return "qian"; // �F
        case 9946: return "jing"; // �G
        case 9948: return "jing"; // �H
        case 9950: return "tun"; // �I
        case 9952: return "jun1      "; // �J
        case 9954: return "hong"; // �K
        case 9956: return "fu"; // �L
        case 9958: return "bian"; // �M
        case 9960: return "gan"; // �N
        case 9962: return "zhong"; // �O
        case 9964: return "pang"; // �P
        case 9966: return "jue"; // �Q
        case 9968: return "hu"; // �R
        case 9970: return "you"; // �S
        case 9972: return "xu"; // �T
        case 9974: return "xu"; // �U
        case 9976: return "yun"; // �V
        case 9978: return "yan"; // �W
        case 9980: return "dan"; // �X
        case 9982: return "you"; // �Y
        case 9984: return "hu"; // �Z
        case 9986: return "huo"; // �[
        case 9988: return "niu"; // �\
        case 9990: return "mei"; // �]
        case 9992: return "mi"; // �^
        case 9994: return "chong"; // �_
        case 9996: return "pang"; // �`
        case 9998: return "bi"; // �a
        case 10000: return "zhi"; // �b
        case 10002: return "pan"; // �c
        case 10004: return "zhui"; // �d
        case 10006: return "za"; // �e
        case 10008: return "liu"; // �f
        case 10010: return "ze"; // �g
        case 10012: return "feng"; // �h
        case 10014: return "mei"; // �i
        case 10016: return "za"; // �j
        case 10018: return "duo"; // �k
        case 10020: return "li"; // �l
        case 10022: return "mi"; // �m
        case 10024: return "yi"; // �n
        case 10026: return "fa"; // �o
        case 10028: return "tian"; // �p
        case 10030: return "si"; // �q
        case 10032: return "kuang"; // �r
        case 10034: return "ying"; // �s
        case 10036: return "gou"; // �t
        case 10038: return "yi"; // �u
        case 10040: return "jia"; // �v
        case 10042: return "you"; // �w
        case 10044: return "hui"; // �x
        case 10046: return "ben"; // �y
        case 10048: return "ze"; // �z
        case 10050: return "ku"; // �{
        case 10052: return "ao"; // �|
        case 10054: return "gu"; // �}
        case 10056: return "hu"; // �~
        case 10058: return "zhang"; // ��
        case 10060: return "peng"; // ��
        case 10062: return "zi"; // ��
        case 10064: return "di"; // ��
        case 10066: return "su"; // ��
        case 10068: return "cheng"; // ��
        case 10070: return "si"; // ��
        case 10072: return "ju"; // ��
        case 10074: return "xue"; // ��
        case 10076: return "sheng"; // ��
        case 10078: return "jue"; // ��
        case 10080: return "fu"; // ��
        case 10082: return "ji"; // ��
        case 10084: return "guan"; // ��
        case 10086: return "dan"; // ��
        case 10088: return "yin"; // ��
        case 10090: return "pan"; // ��
        case 10092: return "ye"; // ��
        case 10094: return "hui"; // ��
        case 10096: return "zai"; // ��
        case 10098: return "cheng"; // ��
        case 10100: return "wei"; // ��
        case 10102: return "hou"; // ��
        case 10104: return "jian"; // ��
        case 10106: return "si"; // ��
        case 10108: return "er"; // ��
        case 10110: return "xing"; // ��
        case 10112: return "fu"; // ��
        case 10114: return "qi"; // ��
        case 10116: return "zhi"; // ��
        case 10118: return "yin"; // ��
        case 10120: return "wu"; // ��
        case 10122: return "kao"; // ��
        case 10124: return "luo"; // ��
        case 10126: return "an"; // ��
        case 10128: return "ti"; // ��
        case 10130: return "mou"; // ��
        case 10132: return "lei"; // ��
        case 10134: return "yi"; // ��
        case 10136: return "mi"; // ��
        case 10138: return "quan"; // ��
        case 10140: return "po"; // ��
        case 10142: return "xiao"; // ��
        case 10144: return "xie"; // ��
        case 10146: return "shuo"; // ��
        case 10148: return "kuang"; // ��
        case 10150: return "jie"; // ��
        case 10152: return "ju"; // ��
        case 10154: return "ping"; // ��
        case 10156: return "xiong"; // ��
        case 10158: return "zhi"; // ��
        case 10160: return "guang"; // ��
        case 10162: return "ming"; // ��
        case 10164: return "wu"; // ��
        case 10166: return "qu"; // ��
        case 10168: return "yi"; // ��
        case 10170: return "jing"; // ��
        case 10172: return "shi"; // ��
        case 10174: return "peol"; // ��
        case 10176: return "chan"; // ��
        case 10178: return "jin"; // ��
        case 10180: return "lie"; // ��
        case 10182: return "qiu"; // ��
        case 10184: return "wei"; // ��
        case 10186: return "han"; // ��
        case 10188: return "mang"; // ��
        case 10190: return "you"; // ��
        case 10192: return "bo"; // ��
        case 10194: return "dou"; // ��
        case 10196: return "hong"; // ��
        case 10198: return "yi"; // ��
        case 10200: return "ying"; // ��
        case 10202: return "lan"; // ��
        case 10204: return "han"; // ��
        case 10206: return "li"; // ��
        case 10208: return "geng"; // ��
        case 10210: return "lian"; // ��
        case 10212: return "chun"; // ��
        case 10214: return "feng"; // ��
        case 10216: return "yi"; // ��
        case 10218: return "tong"; // ��
        case 10220: return "lao"; // ��
        case 10222: return "jia"; // ��
        case 10224: return "chong"; // ��
        case 10226: return "jiong"; // ��
        case 10228: return "nei"; // ��
        case 10230: return "cheng"; // ��
        case 10232: return "pei"; // ��
        case 10234: return "jian"; // ��
        case 10236: return "lin"; // ��
        case 10238: return "kun"; // ��
        case 10240: return "ping"; // ��
        case 10242: return "han"; // ��
        case 10244: return "jing"; // ��
        case 10246: return "nian"; // ��
        case 10248: return "tu"; // ��
        case 10250: return "xiao"; // ��
        case 10252: return "ting"; // ��
        case 10254: return "e"; // ��
        case 10256: return "yun"; // ��
        case 10258: return "li"; // ��
        case 10260: return "shui"; // ��
        case 10262: return "si"; // ��
        case 10264: return "lei"; // ��
        case 10266: return "shui"; // ��
        case 10268: return "du"; // ��
        case 10270: return "yun"; // ��
        case 10272: return "heng"; // ��
        case 10274: return "xing"; // ��
        case 10276: return "tao"; // ��
        case 10278: return "chuo"; // ��
        case 10280: return "zhang"; // ��
        case 10282: return "nang"; // ��
        case 10284: return "wo"; // ��
        case 10286: return "tuo"; // ��
        case 10288: return "dong"; // ��
        case 10290: return "wo"; // ��
        case 10292: return "ju"; // ��
        case 10294: return "she"; // ��
        case 10296: return "liang"; // ��
        case 10298: return "hun"; // ��
        case 10300: return "ta"; // ��
        case 10302: return "ji"; // ��
        case 10304: return "de"; // ��
        case 10306: return "juan"; // ��
        case 10308: return "gu"; // ��
        case 10310: return "guo"; // ��
        case 10312: return "yan"; // ��
        case 10314: return "diao"; // �@
        case 10316: return "peng"; // �A
        case 10318: return "hao"; // �B
        case 10320: return "chang"; // �C
        case 10322: return "qi"; // �D
        case 10324: return "fang"; // �E
        case 10326: return "chi"; // �F
        case 10328: return "lu"; // �G
        case 10330: return "ju"; // �H
        case 10332: return "lei"; // �I
        case 10334: return "zhe"; // �J
        case 10336: return "peng"; // �K
        case 10338: return "tian"; // �L
        case 10340: return "yu"; // �M
        case 10342: return "ni"; // �N
        case 10344: return "lu"; // �O
        case 10346: return "mi"; // �P
        case 10348: return "jing"; // �Q
        case 10350: return "ling"; // �R
        case 10352: return "lun"; // �S
        case 10354: return "qu"; // �T
        case 10356: return "yu"; // �U
        case 10358: return "nian"; // �V
        case 10360: return "biao"; // �W
        case 10362: return "hu"; // �X
        case 10364: return "yuan"; // �Y
        case 10366: return "lai"; // �Z
        case 10368: return "qing"; // �[
        case 10370: return "qian"; // �\
        case 10372: return "zhi"; // �]
        case 10374: return "yin"; // �^
        case 10376: return "bo"; // �_
        case 10378: return "ben"; // �`
        case 10380: return "yuan"; // �a
        case 10382: return "wen"; // �b
        case 10384: return "re"; // �c
        case 10386: return "fei"; // �d
        case 10388: return "yuan"; // �e
        case 10390: return "ke"; // �f
        case 10392: return "ji"; // �g
        case 10394: return "die"; // �h
        case 10396: return "se"; // �i
        case 10398: return "qi"; // �j
        case 10400: return "pi"; // �k
        case 10402: return "xi"; // �l
        case 10404: return "yuan"; // �m
        case 10406: return "rou"; // �n
        case 10408: return "huan"; // �o
        case 10410: return "jian"; // �p
        case 10412: return "nuan"; // �q
        case 10414: return "wu"; // �r
        case 10416: return "ting"; // �s
        case 10418: return "fan"; // �t
        case 10420: return "wo"; // �u
        case 10422: return "di"; // �v
        case 10424: return "wei"; // �w
        case 10426: return "ru"; // �x
        case 10428: return "ce"; // �y
        case 10430: return "he"; // �z
        case 10432: return "yan"; // �{
        case 10434: return "gong"; // �|
        case 10436: return "mi"; // �}
        case 10438: return "mao"; // �~
        case 10440: return "zhang"; // ��
        case 10442: return "ying"; // ��
        case 10444: return "yan"; // ��
        case 10446: return "hong"; // ��
        case 10448: return "sheng"; // ��
        case 10450: return "mei"; // ��
        case 10452: return "zai"; // ��
        case 10454: return "hun"; // ��
        case 10456: return "nai"; // ��
        case 10458: return "gui"; // ��
        case 10460: return "chi"; // ��
        case 10462: return "e"; // ��
        case 10464: return "lan"; // ��
        case 10466: return "qi"; // ��
        case 10468: return "qi"; // ��
        case 10470: return "mei"; // ��
        case 10472: return "tian"; // ��
        case 10474: return "cou"; // ��
        case 10476: return "wei"; // ��
        case 10478: return "can"; // ��
        case 10480: return "min"; // ��
        case 10482: return "bo"; // ��
        case 10484: return "xu"; // ��
        case 10486: return "ji"; // ��
        case 10488: return "jian"; // ��
        case 10490: return "feng"; // ��
        case 10492: return "yi"; // ��
        case 10494: return "yin"; // ��
        case 10496: return "shi"; // ��
        case 10498: return "jie"; // ��
        case 10500: return "zhen"; // ��
        case 10502: return "tan"; // ��
        case 10504: return "yu"; // ��
        case 10506: return "bi"; // ��
        case 10508: return "min"; // ��
        case 10510: return "shi"; // ��
        case 10512: return "tu"; // ��
        case 10514: return "sheng"; // ��
        case 10516: return "yong"; // ��
        case 10518: return "ju"; // ��
        case 10520: return "dong"; // ��
        case 10522: return "tuan"; // ��
        case 10524: return "jiao"; // ��
        case 10526: return "qiu"; // ��
        case 10528: return "tang"; // ��
        case 10530: return "long"; // ��
        case 10532: return "huo"; // ��
        case 10534: return "yuan"; // ��
        case 10536: return "nan"; // ��
        case 10538: return "ban"; // ��
        case 10540: return "you"; // ��
        case 10542: return "quan"; // ��
        case 10544: return "hun"; // ��
        case 10546: return "liang"; // ��
        case 10548: return "chan"; // ��
        case 10550: return "yan"; // ��
        case 10552: return "zhun"; // ��
        case 10554: return "he"; // ��
        case 10556: return "zi"; // ��
        case 10558: return "man"; // ��
        case 10560: return "ying"; // ��
        case 10562: return "la"; // ��
        case 10564: return "feng"; // ��
        case 10566: return "lou"; // ��
        case 10568: return "wei"; // ��
        case 10570: return "xia"; // ��
        case 10572: return "ying"; // ��
        case 10574: return "po"; // ��
        case 10576: return "jin"; // ��
        case 10578: return "yan"; // ��
        case 10580: return "suo"; // ��
        case 10582: return "yuan"; // ��
        case 10584: return "lian"; // ��
        case 10586: return "yao"; // ��
        case 10588: return "meng"; // ��
        case 10590: return "zhun"; // ��
        case 10592: return "cheng"; // ��
        case 10594: return "tai"; // ��
        case 10596: return "da"; // ��
        case 10598: return "wa"; // ��
        case 10600: return "gou"; // ��
        case 10602: return "sao"; // ��
        case 10604: return "zha"; // ��
        case 10606: return "shi"; // ��
        case 10608: return "lun"; // ��
        case 10610: return "ma"; // ��
        case 10612: return "wei"; // ��
        case 10614: return "zai"; // ��
        case 10616: return "wu"; // ��
        case 10618: return "wen"; // ��
        case 10620: return "qiang"; // ��
        case 10622: return "ze"; // ��
        case 10624: return "shi"; // ��
        case 10626: return "ai"; // ��
        case 10628: return "yun"; // ��
        case 10630: return "yin"; // ��
        case 10632: return "su"; // ��
        case 10634: return "se"; // ��
        case 10636: return "shi"; // ��
        case 10638: return "ai"; // ��
        case 10640: return "pan"; // ��
        case 10642: return "xu"; // ��
        case 10644: return "weng"; // ��
        case 10646: return "cang"; // ��
        case 10648: return "mie"; // ��
        case 10650: return "ge"; // ��
        case 10652: return "hao"; // ��
        case 10654: return "huang"; // ��
        case 10656: return "xi"; // ��
        case 10658: return "di"; // ��
        case 10660: return "zhi"; // ��
        case 10662: return "ying"; // ��
        case 10664: return "jie"; // ��
        case 10666: return "ge"; // ��
        case 10668: return "sui"; // ��
        case 10670: return "jiao"; // ��
        case 10672: return "hui"; // ��
        case 10674: return "yin"; // ��
        case 10676: return "gao"; // ��
        case 10678: return "long"; // ��
        case 10680: return "chun"; // ��
        case 10682: return "xiao"; // ��
        case 10684: return "yu"; // ��
        case 10686: return "xiu"; // ��
        case 10688: return "hu"; // ��
        case 10690: return "bi"; // ��
        case 10692: return "biao"; // ��
        case 10694: return "zhi"; // ��
        case 10696: return "jiang"; // �@
        case 10698: return "kou"; // �A
        case 10700: return "shen"; // �B
        case 10702: return "shang"; // �C
        case 10704: return "mi"; // �D
        case 10706: return "ao"; // �E
        case 10708: return "lu"; // �F
        case 10710: return "hu"; // �G
        case 10712: return "you"; // �H
        case 10714: return "chan"; // �I
        case 10716: return "fan"; // �J
        case 10718: return "yong"; // �K
        case 10720: return "gun"; // �L
        case 10722: return "man"; // �M
        case 10724: return "qing"; // �N
        case 10726: return "yu"; // �O
        case 10728: return "ji"; // �P
        case 10730: return "ya"; // �Q
        case 10732: return "chao"; // �R
        case 10734: return "xi"; // �S
        case 10736: return "ji"; // �T
        case 10738: return "lou"; // �U
        case 10740: return "long"; // �V
        case 10742: return "jin"; // �W
        case 10744: return "guo"; // �X
        case 10746: return "cong"; // �Y
        case 10748: return "zhi"; // �Z
        case 10750: return "gai"; // �[
        case 10752: return "qiang"; // �\
        case 10754: return "jiao"; // �]
        case 10756: return "cong"; // �^
        case 10758: return "chun"; // �_
        case 10760: return "tuan"; // �`
        case 10762: return "ou"; // �a
        case 10764: return "teng"; // �b
        case 10766: return "ye"; // �c
        case 10768: return "xi"; // �d
        case 10770: return "mi"; // �e
        case 10772: return "tang"; // �f
        case 10774: return "tang"; // �g
        case 10776: return "han"; // �h
        case 10778: return "lian"; // �i
        case 10780: return "wa"; // �j
        case 10782: return "tai"; // �k
        case 10784: return "gan"; // �l
        case 10786: return "peng"; // �m
        case 10788: return "zi"; // �n
        case 10790: return "kang"; // �o
        case 10792: return "peng"; // �p
        case 10794: return "zhang"; // �q
        case 10796: return "zhuan"; // �r
        case 10798: return "xu"; // �s
        case 10800: return "kuo"; // �t
        case 10802: return "jian"; // �u
        case 10804: return "yan"; // �v
        case 10806: return "chuan"; // �w
        case 10808: return "liao"; // �x
        case 10810: return "cui"; // �y
        case 10812: return "ti"; // �z
        case 10814: return "jiang"; // �{
        case 10816: return "zong"; // �|
        case 10818: return "ying"; // �}
        case 10820: return "hong"; // �~
        case 10822: return "zhang"; // ��
        case 10824: return "xin"; // ��
        case 10826: return "shu"; // ��
        case 10828: return "guan"; // ��
        case 10830: return "zong"; // ��
        case 10832: return "kun"; // ��
        case 10834: return "xu"; // ��
        case 10836: return "zhi"; // ��
        case 10838: return "pi"; // ��
        case 10840: return "jue"; // ��
        case 10842: return "jiao"; // ��
        case 10844: return "po"; // ��
        case 10846: return "dang"; // ��
        case 10848: return "hui"; // ��
        case 10850: return "jie"; // ��
        case 10852: return "wu"; // ��
        case 10854: return "pa"; // ��
        case 10856: return "ji"; // ��
        case 10858: return "gui"; // ��
        case 10860: return "xiao"; // ��
        case 10862: return "qian"; // ��
        case 10864: return "ya"; // ��
        case 10866: return "xi"; // ��
        case 10868: return "sun"; // ��
        case 10870: return "dun"; // ��
        case 10872: return "min"; // ��
        case 10874: return "run"; // ��
        case 10876: return "su"; // ��
        case 10878: return "zhen"; // ��
        case 10880: return "zong"; // ��
        case 10882: return "yi"; // ��
        case 10884: return "zhi"; // ��
        case 10886: return "wan"; // ��
        case 10888: return "tan"; // ��
        case 10890: return "xun"; // ��
        case 10892: return "kui"; // ��
        case 10894: return "ye"; // ��
        case 10896: return "tu"; // ��
        case 10898: return "san"; // ��
        case 10900: return "hei"; // ��
        case 10902: return "bi"; // ��
        case 10904: return "chan"; // ��
        case 10906: return "shu"; // ��
        case 10908: return "pu"; // ��
        case 10910: return "lin"; // ��
        case 10912: return "wei"; // ��
        case 10914: return "se"; // ��
        case 10916: return "se"; // ��
        case 10918: return "deng"; // ��
        case 10920: return "jiong"; // ��
        case 10922: return "hua"; // ��
        case 10924: return "jiao"; // ��
        case 10926: return "lao"; // ��
        case 10928: return "cun"; // ��
        case 10930: return "hong"; // ��
        case 10932: return "han"; // ��
        case 10934: return "yun"; // ��
        case 10936: return "liu"; // ��
        case 10938: return "hong"; // ��
        case 10940: return "fu"; // ��
        case 10942: return "gao"; // ��
        case 10944: return "he"; // ��
        case 10946: return "xian"; // ��
        case 10948: return "jian"; // ��
        case 10950: return "shan"; // ��
        case 10952: return "xi"; // ��
        case 10954: return "ao"; // ��
        case 10956: return "lu"; // ��
        case 10958: return "ning"; // ��
        case 10960: return "yu"; // ��
        case 10962: return "lin"; // ��
        case 10964: return "mian"; // ��
        case 10966: return "dang"; // ��
        case 10968: return "han"; // ��
        case 10970: return "ze"; // ��
        case 10972: return "xie"; // ��
        case 10974: return "yu"; // ��
        case 10976: return "shi"; // ��
        case 10978: return "xiao"; // ��
        case 10980: return "ling"; // ��
        case 10982: return "ou"; // ��
        case 10984: return "zi"; // ��
        case 10986: return "yong"; // ��
        case 10988: return "hui"; // ��
        case 10990: return "can"; // ��
        case 10992: return "lian"; // ��
        case 10994: return "dian"; // ��
        case 10996: return "ye"; // ��
        case 10998: return "huan"; // ��
        case 11000: return "zhen"; // ��
        case 11002: return "man"; // ��
        case 11004: return "dan"; // ��
        case 11006: return "yi"; // ��
        case 11008: return "sui"; // ��
        case 11010: return "pi"; // ��
        case 11012: return "ju"; // ��
        case 11014: return "ta"; // ��
        case 11016: return "qin"; // ��
        case 11018: return "zhuo"; // ��
        case 11020: return "nong"; // ��
        case 11022: return "wo"; // ��
        case 11024: return "jin"; // ��
        case 11026: return "pen"; // ��
        case 11028: return "se"; // ��
        case 11030: return "ji"; // ��
        case 11032: return "wei"; // ��
        case 11034: return "chu"; // ��
        case 11036: return "ta"; // ��
        case 11038: return "song"; // ��
        case 11040: return "ding"; // ��
        case 11042: return "se"; // ��
        case 11044: return "zhu"; // ��
        case 11046: return "lian"; // ��
        case 11048: return "ni"; // ��
        case 11050: return "shi"; // ��
        case 11052: return "shu"; // ��
        case 11054: return "mi"; // ��
        case 11056: return "ning"; // ��
        case 11058: return "ying"; // ��
        case 11060: return "ying"; // ��
        case 11062: return "meng"; // ��
        case 11064: return "jin"; // ��
        case 11066: return "qi"; // ��
        case 11068: return "ji"; // ��
        case 11070: return "zui"; // ��
        case 11072: return "wo"; // ��
        case 11074: return "tao"; // ��
        case 11076: return "yin"; // ��
        case 11078: return "yin"; // �@
        case 11080: return "dui"; // �A
        case 11082: return "ci"; // �B
        case 11084: return "hu"; // �C
        case 11086: return "qing"; // �D
        case 11088: return "lan"; // �E
        case 11090: return "xun"; // �F
        case 11092: return "ai"; // �G
        case 11094: return "wei"; // �H
        case 11096: return "bin"; // �I
        case 11098: return "gu"; // �J
        case 11100: return "qian"; // �K
        case 11102: return "ying"; // �L
        case 11104: return "bin"; // �M
        case 11106: return "kuo"; // �N
        case 11108: return "fei"; // �O
        case 11110: return "cang"; // �P
        case 11112: return "me"; // �Q
        case 11114: return "jian"; // �R
        case 11116: return "wei"; // �S
        case 11118: return "luo"; // �T
        case 11120: return "zan"; // �U
        case 11122: return "lu"; // �V
        case 11124: return "li"; // �W
        case 11126: return "you"; // �X
        case 11128: return "yang"; // �Y
        case 11130: return "lu"; // �Z
        case 11132: return "si"; // �[
        case 11134: return "zhi"; // �\
        case 11136: return "ying"; // �]
        case 11138: return "du"; // �^
        case 11140: return "wang"; // �_
        case 11142: return "hui"; // �`
        case 11144: return "xie"; // �a
        case 11146: return "pan"; // �b
        case 11148: return "chen"; // �c
        case 11150: return "biao"; // �d
        case 11152: return "chan"; // �e
        case 11154: return "mo"; // �f
        case 11156: return "liu"; // �g
        case 11158: return "jian"; // �h
        case 11160: return "se"; // �i
        case 11162: return "cheng"; // �j
        case 11164: return "gu"; // �k
        case 11166: return "bin"; // �l
        case 11168: return "huo"; // �m
        case 11170: return "xian"; // �n
        case 11172: return "lu"; // �o
        case 11174: return "qin"; // �p
        case 11176: return "rong"; // �q
        case 11178: return "li"; // �r
        case 11180: return "jing"; // �s
        case 11182: return "xiao"; // �t
        case 11184: return "ying"; // �u
        case 11186: return "sui"; // �v
        case 11188: return "wei"; // �w
        case 11190: return "wai"; // �x
        case 11192: return "xue"; // �y
        case 11194: return "zhu"; // �z
        case 11196: return "long"; // �{
        case 11198: return "lai"; // �|
        case 11200: return "dui"; // �}
        case 11202: return "fan"; // �~
        case 11204: return "zhang"; // ��
        case 11206: return "hu"; // ��
        case 11208: return "lai"; // ��
        case 11210: return "shu"; // ��
        case 11212: return "ling"; // ��
        case 11214: return "ying"; // ��
        case 11216: return "mi"; // ��
        case 11218: return "ji"; // ��
        case 11220: return "lian"; // ��
        case 11222: return "jian"; // ��
        case 11224: return "ying"; // ��
        case 11226: return "lin"; // ��
        case 11228: return "yi"; // ��
        case 11230: return "jian"; // ��
        case 11232: return "chan"; // ��
        case 11234: return "dai"; // ��
        case 11236: return "nang"; // ��
        case 11238: return "jian"; // ��
        case 11240: return "lan"; // ��
        case 11242: return "fan"; // ��
        case 11244: return "shuan"; // ��
        case 11246: return "yuan"; // ��
        case 11248: return "zhuo"; // ��
        case 11250: return "feng"; // ��
        case 11252: return "ni"; // ��
        case 11254: return "lei"; // ��
        case 11256: return "lan"; // ��
        case 11258: return "cong"; // ��
        case 11260: return "qu"; // ��
        case 11262: return "yong"; // ��
        case 11264: return "qian"; // ��
        case 11266: return "fa"; // ��
        case 11268: return "jue"; // ��
        case 11270: return "yan"; // ��
        case 11272: return "ying"; // ��
        case 11274: return "sa"; // ��
        case 11276: return "zan"; // ��
        case 11278: return "luan"; // ��
        case 11280: return "yan"; // ��
        case 11282: return "li"; // ��
        case 11284: return "mi"; // ��
        case 11286: return "shan"; // ��
        case 11288: return "tan"; // ��
        case 11290: return "dang"; // ��
        case 11292: return "jiao"; // ��
        case 11294: return "chan"; // ��
        case 11296: return "ying"; // ��
        case 11298: return "hao"; // ��
        case 11300: return "zhu"; // ��
        case 11302: return "lan"; // ��
        case 11304: return "lan"; // ��
        case 11306: return "nang"; // ��
        case 11308: return "wan"; // ��
        case 11310: return "luan"; // ��
        case 11312: return "quan"; // ��
        case 11314: return "xian"; // ��
        case 11316: return "yan"; // ��
        case 11318: return "gan"; // ��
        case 11320: return "yan"; // ��
        case 11322: return "yu"; // ��
        case 11324: return "guang"; // ��
        case 11326: return "xiao"; // ��
        case 11328: return "xiao"; // ��
        case 11330: return "hui"; // ��
        case 11332: return "hong"; // ��
        case 11334: return "zhuan"; // ��
        case 11336: return "yu"; // ��
        case 11338: return "xie"; // ��
        case 11340: return "chi"; // ��
        case 11342: return "zai"; // ��
        case 11344: return "qi"; // ��
        case 11346: return "zhong"; // ��
        case 11348: return "ben"; // ��
        case 11350: return "niu"; // ��
        case 11352: return "wen"; // ��
        case 11354: return "pu"; // ��
        case 11356: return "yi"; // ��
        case 11358: return "pi"; // ��
        case 11360: return "kai"; // ��
        case 11362: return "pan"; // ��
        case 11364: return "yan"; // ��
        case 11366: return "pang"; // ��
        case 11368: return "mu"; // ��
        case 11370: return "liao"; // ��
        case 11372: return "guang"; // ��
        case 11374: return "xin"; // ��
        case 11376: return "guang"; // ��
        case 11378: return "guang"; // ��
        case 11380: return "bian"; // ��
        case 11382: return "da"; // ��
        case 11384: return "xia"; // ��
        case 11386: return "zheng"; // ��
        case 11388: return "zhu"; // ��
        case 11390: return "ke"; // ��
        case 11392: return "zhao"; // ��
        case 11394: return "fu"; // ��
        case 11396: return "ba"; // ��
        case 11398: return "xie"; // ��
        case 11400: return "xie"; // ��
        case 11402: return "ling"; // ��
        case 11404: return "zhuo"; // ��
        case 11406: return "pao"; // ��
        case 11408: return "tai"; // ��
        case 11410: return "yang"; // ��
        case 11412: return "tong"; // ��
        case 11414: return "shan"; // ��
        case 11416: return "wei"; // ��
        case 11418: return "huang"; // ��
        case 11420: return "zhou"; // ��
        case 11422: return "yao"; // ��
        case 11424: return "xu"; // ��
        case 11426: return "heng"; // ��
        case 11428: return "quan"; // ��
        case 11430: return "huan"; // ��
        case 11432: return "xiao"; // ��
        case 11434: return "xiu"; // ��
        case 11436: return "xian"; // ��
        case 11438: return "yin"; // ��
        case 11440: return "wu"; // ��
        case 11442: return "zhou"; // ��
        case 11444: return "yao"; // ��
        case 11446: return "shi"; // ��
        case 11448: return "wei"; // ��
        case 11450: return "dong"; // ��
        case 11452: return "xue"; // ��
        case 11454: return "zai"; // ��
        case 11456: return "kai"; // ��
        case 11458: return "xia"; // ��
        case 11460: return "hui"; // �@
        case 11462: return "zheng"; // �A
        case 11464: return "po"; // �B
        case 11466: return "hui"; // �C
        case 11468: return "guang"; // �D
        case 11470: return "che"; // �E
        case 11472: return "hui"; // �F
        case 11474: return "chen"; // �G
        case 11476: return "zhen"; // �H
        case 11478: return "lie"; // �I
        case 11480: return "fu"; // �J
        case 11482: return "jiong"; // �K
        case 11484: return "xie"; // �L
        case 11486: return "pu"; // �M
        case 11488: return "ting"; // �N
        case 11490: return "zhuo"; // �O
        case 11492: return "ting"; // �P
        case 11494: return "hai"; // �Q
        case 11496: return "lang"; // �R
        case 11498: return "yan"; // �S
        case 11500: return "xu"; // �T
        case 11502: return "chi"; // �U
        case 11504: return "rong"; // �V
        case 11506: return "hu"; // �W
        case 11508: return "xi"; // �X
        case 11510: return "shu"; // �Y
        case 11512: return "he"; // �Z
        case 11514: return "hun"; // �[
        case 11516: return "kao"; // �\
        case 11518: return "jue"; // �]
        case 11520: return "xiao"; // �^
        case 11522: return "xi"; // �_
        case 11524: return "zhuan"; // �`
        case 11526: return "jun"; // �a
        case 11528: return "di"; // �b
        case 11530: return "xie"; // �c
        case 11532: return "ji"; // �d
        case 11534: return "yan"; // �e
        case 11536: return "lu"; // �f
        case 11538: return "yan"; // �g
        case 11540: return "ju"; // �h
        case 11542: return "lin"; // �i
        case 11544: return "kun"; // �j
        case 11546: return "hun"; // �k
        case 11548: return "tui"; // �l
        case 11550: return "xi"; // �m
        case 11552: return "cui"; // �n
        case 11554: return "wu"; // �o
        case 11556: return "hong"; // �p
        case 11558: return "ju"; // �q
        case 11560: return "fu"; // �r
        case 11562: return "ai"; // �s
        case 11564: return "cong"; // �t
        case 11566: return "feng"; // �u
        case 11568: return "ping"; // �v
        case 11570: return "qiong"; // �w
        case 11572: return "ruo"; // �x
        case 11574: return "yi"; // �y
        case 11576: return "qiong"; // �z
        case 11578: return "xin"; // �{
        case 11580: return "yi"; // �|
        case 11582: return "jiao"; // �}
        case 11584: return "yu"; // �~
        case 11586: return "zhang"; // ��
        case 11588: return "gang"; // ��
        case 11590: return "pi"; // ��
        case 11592: return "gu"; // ��
        case 11594: return "wang"; // ��
        case 11596: return "sheng"; // ��
        case 11598: return "gua"; // ��
        case 11600: return "shao"; // ��
        case 11602: return "ying"; // ��
        case 11604: return "nem"; // ��
        case 11606: return "geng"; // ��
        case 11608: return "wei"; // ��
        case 11610: return "chen"; // ��
        case 11612: return "he"; // ��
        case 11614: return "kui"; // ��
        case 11616: return "zhong"; // ��
        case 11618: return "duan"; // ��
        case 11620: return "hui"; // ��
        case 11622: return "feng"; // ��
        case 11624: return "lan"; // ��
        case 11626: return "xing"; // ��
        case 11628: return "jiao"; // ��
        case 11630: return "bi"; // ��
        case 11632: return "ying"; // ��
        case 11634: return "zhu"; // ��
        case 11636: return "wei"; // ��
        case 11638: return "tuan"; // ��
        case 11640: return "qian"; // ��
        case 11642: return "xi"; // ��
        case 11644: return "xuan"; // ��
        case 11646: return "nuan"; // ��
        case 11648: return "chan"; // ��
        case 11650: return "yan"; // ��
        case 11652: return "jiong"; // ��
        case 11654: return "jiong"; // ��
        case 11656: return "mei"; // ��
        case 11658: return "wei"; // ��
        case 11660: return "ye"; // ��
        case 11662: return "jin"; // ��
        case 11664: return "qiong"; // ��
        case 11666: return "rou"; // ��
        case 11668: return "huan"; // ��
        case 11670: return "fan"; // ��
        case 11672: return "qiu"; // ��
        case 11674: return "sui"; // ��
        case 11676: return "yang"; // ��
        case 11678: return "lie"; // ��
        case 11680: return "jie"; // ��
        case 11682: return "zao"; // ��
        case 11684: return "gua"; // ��
        case 11686: return "yun"; // ��
        case 11688: return "nan"; // ��
        case 11690: return "shi"; // ��
        case 11692: return "liang"; // ��
        case 11694: return "gou"; // ��
        case 11696: return "tang"; // ��
        case 11698: return "chao"; // ��
        case 11700: return "en"; // ��
        case 11702: return "bo"; // ��
        case 11704: return "ye"; // ��
        case 11706: return "xie"; // ��
        case 11708: return "xi"; // ��
        case 11710: return "wu"; // ��
        case 11712: return "yun"; // ��
        case 11714: return "he"; // ��
        case 11716: return "he"; // ��
        case 11718: return "yi"; // ��
        case 11720: return "yun"; // ��
        case 11722: return "nai"; // ��
        case 11724: return "shan"; // ��
        case 11726: return "qiong"; // ��
        case 11728: return "yao"; // ��
        case 11730: return "mi"; // ��
        case 11732: return "lian"; // ��
        case 11734: return "ying"; // ��
        case 11736: return "wu"; // ��
        case 11738: return "gong"; // ��
        case 11740: return "yan"; // ��
        case 11742: return "qiang"; // ��
        case 11744: return "bi"; // ��
        case 11746: return "biao"; // ��
        case 11748: return "zong"; // ��
        case 11750: return "ao"; // ��
        case 11752: return "jian"; // ��
        case 11754: return "lou"; // ��
        case 11756: return "peng"; // ��
        case 11758: return "cui"; // ��
        case 11760: return "yi"; // ��
        case 11762: return "tong"; // ��
        case 11764: return "jue"; // ��
        case 11766: return "zong"; // ��
        case 11768: return "hu"; // ��
        case 11770: return "yi"; // ��
        case 11772: return "zhi"; // ��
        case 11774: return "wei"; // ��
        case 11776: return "liu"; // ��
        case 11778: return "han"; // ��
        case 11780: return "ou"; // ��
        case 11782: return "re"; // ��
        case 11784: return "jiong"; // ��
        case 11786: return "kun"; // ��
        case 11788: return "cuan"; // ��
        case 11790: return "zeng"; // ��
        case 11792: return "jian"; // ��
        case 11794: return "xi"; // ��
        case 11796: return "xi"; // ��
        case 11798: return "yi"; // ��
        case 11800: return "xiao"; // ��
        case 11802: return "chi"; // ��
        case 11804: return "huang"; // ��
        case 11806: return "chan"; // ��
        case 11808: return "ye"; // ��
        case 11810: return "qian"; // ��
        case 11812: return "yan"; // ��
        case 11814: return "xun"; // ��
        case 11816: return "qiao"; // ��
        case 11818: return "jun"; // ��
        case 11820: return "deng"; // ��
        case 11822: return "dun"; // ��
        case 11824: return "shen"; // ��
        case 11826: return "jiao"; // ��
        case 11828: return "ben"; // ��
        case 11830: return "xi"; // ��
        case 11832: return "yu"; // ��
        case 11834: return "lin"; // ��
        case 11836: return "tong"; // ��
        case 11838: return "shao"; // ��
        case 11840: return "fen"; // ��
        case 11842: return "xun"; // �@
        case 11844: return "lan"; // �A
        case 11846: return "mei"; // �B
        case 11848: return "tang"; // �C
        case 11850: return "yi"; // �D
        case 11852: return "jiong"; // �E
        case 11854: return "men"; // �F
        case 11856: return "jing"; // �G
        case 11858: return "jiao"; // �H
        case 11860: return "ying"; // �I
        case 11862: return "yi"; // �J
        case 11864: return "xue"; // �K
        case 11866: return "lan"; // �L
        case 11868: return "tai"; // �M
        case 11870: return "can"; // �N
        case 11872: return "xi"; // �O
        case 11874: return "que"; // �P
        case 11876: return "zong"; // �Q
        case 11878: return "lian"; // �R
        case 11880: return "hui"; // �S
        case 11882: return "zhu"; // �T
        case 11884: return "ling"; // �U
        case 11886: return "wei"; // �V
        case 11888: return "yi"; // �W
        case 11890: return "xie"; // �X
        case 11892: return "zhao"; // �Y
        case 11894: return "hui"; // �Z
        case 11896: return "da"; // �[
        case 11898: return "nung"; // �\
        case 11900: return "bing"; // �]
        case 11902: return "ru"; // �^
        case 11904: return "he"; // �_
        case 11906: return "xun"; // �`
        case 11908: return "jin"; // �a
        case 11910: return "chou"; // �b
        case 11912: return "tao"; // �c
        case 11914: return "shuo"; // �d
        case 11916: return "he"; // �e
        case 11918: return "lan"; // �f
        case 11920: return "biao"; // �g
        case 11922: return "rong"; // �h
        case 11924: return "li"; // �i
        case 11926: return "mo"; // �j
        case 11928: return "ruo"; // �k
        case 11930: return "lu"; // �l
        case 11932: return "la"; // �m
        case 11934: return "ao"; // �n
        case 11936: return "xun"; // �o
        case 11938: return "kuang"; // �p
        case 11940: return "shuo"; // �q
        case 11942: return "liao"; // �r
        case 11944: return "li"; // �s
        case 11946: return "lu"; // �t
        case 11948: return "jue"; // �u
        case 11950: return "liao"; // �v
        case 11952: return "yan"; // �w
        case 11954: return "xi"; // �x
        case 11956: return "xie"; // �y
        case 11958: return "long"; // �z
        case 11960: return "ye"; // �{
        case 11962: return "can"; // �|
        case 11964: return "rang"; // �}
        case 11966: return "yue"; // �~
        case 11968: return "zhang"; // ��
        case 11970: return "lan"; // ��
        case 11972: return "cong"; // ��
        case 11974: return "tong"; // ��
        case 11976: return "guan"; // ��
        case 11978: return "ju"; // ��
        case 11980: return "che"; // ��
        case 11982: return "mi"; // ��
        case 11984: return "tang"; // ��
        case 11986: return "lan"; // ��
        case 11988: return "zhu"; // ��
        case 11990: return "lan"; // ��
        case 11992: return "ling"; // ��
        case 11994: return "yu"; // ��
        case 11996: return "zhao"; // ��
        case 11998: return "zheng"; // ��
        case 12000: return "pao"; // ��
        case 12002: return "cheng"; // ��
        case 12004: return "wei"; // ��
        case 12006: return "han"; // ��
        case 12008: return "jue"; // ��
        case 12010: return "ye"; // ��
        case 12012: return "zu"; // ��
        case 12014: return "er"; // ��
        case 12016: return "chuan"; // ��
        case 12018: return "ke"; // ��
        case 12020: return "zang"; // ��
        case 12022: return "die"; // ��
        case 12024: return "qiang"; // ��
        case 12026: return "yong"; // ��
        case 12028: return "qiang"; // ��
        case 12030: return "pan"; // ��
        case 12032: return "chao"; // ��
        case 12034: return "jian"; // ��
        case 12036: return "chuan"; // ��
        case 12038: return "yu"; // ��
        case 12040: return "zha"; // ��
        case 12042: return "bian"; // ��
        case 12044: return "bang"; // ��
        case 12046: return "bo"; // ��
        case 12048: return "chuan"; // ��
        case 12050: return "you"; // ��
        case 12052: return "du"; // ��
        case 12054: return "cheng"; // ��
        case 12056: return "niu"; // ��
        case 12058: return "le"; // ��
        case 12060: return "tuo"; // ��
        case 12062: return "ren"; // ��
        case 12064: return "mang"; // ��
        case 12066: return "fang"; // ��
        case 12068: return "gang"; // ��
        case 12070: return "yan"; // ��
        case 12072: return "ge"; // ��
        case 12074: return "bei"; // ��
        case 12076: return "si"; // ��
        case 12078: return "you"; // ��
        case 12080: return "ge"; // ��
        case 12082: return "mu"; // ��
        case 12084: return "di"; // ��
        case 12086: return "quan"; // ��
        case 12088: return "quan"; // ��
        case 12090: return "zi"; // ��
        case 12092: return "mang"; // ��
        case 12094: return "keng"; // ��
        case 12096: return "qian"; // ��
        case 12098: return "li"; // ��
        case 12100: return "pou"; // ��
        case 12102: return "gang"; // ��
        case 12104: return "te"; // ��
        case 12106: return "ben"; // ��
        case 12108: return "quan"; // ��
        case 12110: return "chun"; // ��
        case 12112: return "jia"; // ��
        case 12114: return "feng"; // ��
        case 12116: return "ke"; // ��
        case 12118: return "ju"; // ��
        case 12120: return "chu"; // ��
        case 12122: return "xi"; // ��
        case 12124: return "bei"; // ��
        case 12126: return "luo"; // ��
        case 12128: return "jie"; // ��
        case 12130: return "ma"; // ��
        case 12132: return "san"; // ��
        case 12134: return "wei"; // ��
        case 12136: return "li"; // ��
        case 12138: return "dun"; // ��
        case 12140: return "tong"; // ��
        case 12142: return "qiao"; // ��
        case 12144: return "xi"; // ��
        case 12146: return "li"; // ��
        case 12148: return "du"; // ��
        case 12150: return "lie"; // ��
        case 12152: return "pai"; // ��
        case 12154: return "pao"; // ��
        case 12156: return "bo"; // ��
        case 12158: return "xi"; // ��
        case 12160: return "chou"; // ��
        case 12162: return "wei"; // ��
        case 12164: return "rao"; // ��
        case 12166: return "chou"; // ��
        case 12168: return "ba"; // ��
        case 12170: return "ji"; // ��
        case 12172: return "chai"; // ��
        case 12174: return "zhuo"; // ��
        case 12176: return "ge"; // ��
        case 12178: return "gang"; // ��
        case 12180: return "bo"; // ��
        case 12182: return "hou"; // ��
        case 12184: return "ya"; // ��
        case 12186: return "yin"; // ��
        case 12188: return "fan"; // ��
        case 12190: return "zhuan"; // ��
        case 12192: return "kuang"; // ��
        case 12194: return "zhong"; // ��
        case 12196: return "mu"; // ��
        case 12198: return "pi"; // ��
        case 12200: return "ju"; // ��
        case 12202: return "yi"; // ��
        case 12204: return "xing"; // ��
        case 12206: return "yi"; // ��
        case 12208: return "ling"; // ��
        case 12210: return "pi"; // ��
        case 12212: return "ni"; // ��
        case 12214: return "yao"; // ��
        case 12216: return "you"; // ��
        case 12218: return "xue"; // ��
        case 12220: return "dan"; // ��
        case 12222: return "bo"; // ��
    }

    return NULL;
}

char* get_pinyin_gbk4(unsigned int code)
{
    switch (code)
    {
        case 0: return "ku";    // �@
        case 2: return "xian";    // �A
        case 4: return "huan";    // �B
        case 6: return "mo";    // �C
        case 8: return "zhao";    // �D
        case 10: return "ji";    // �E
        case 12: return "xun";    // �F
        case 14: return "shan";    // �G
        case 16: return "ta";    // �H
        case 18: return "tong";    // �I
        case 20: return "dong";    // �J
        case 22: return "mang";    // �K
        case 24: return "xi";    // �L
        case 26: return "xia";    // �M
        case 28: return "bei";    // �N
        case 30: return "zhi";    // �O
        case 32: return "yan";    // �P
        case 34: return "sha";    // �Q
        case 36: return "han";    // �R
        case 38: return "jing";    // �S
        case 40: return "pai";    // �T
        case 42: return "fei";    // �U
        case 44: return "xiao";    // �V
        case 46: return "pi";    // �W
        case 48: return "qi";    // �X
        case 50: return "biao";    // �Y
        case 52: return "yin";    // �Z
        case 54: return "lai";    // �[
        case 56: return "jian";    // �\
        case 58: return "qiang";    // �]
        case 60: return "kun";    // �^
        case 62: return "yan";    // �_
        case 64: return "zong";    // �`
        case 66: return "zhi";    // �a
        case 68: return "zheng";    // �b
        case 70: return "ya";    // �c
        case 72: return "lie";    // �d
        case 74: return "ceon";    // �e
        case 76: return "zong";    // �f
        case 78: return "gui";    // �g
        case 80: return "feng";    // �h
        case 82: return "wo";    // �i
        case 84: return "yuan";    // �j
        case 86: return "chuan";    // �k
        case 88: return "tuan";    // �l
        case 90: return "ya";    // �m
        case 92: return "ge";    // �n
        case 94: return "jia";    // �o
        case 96: return "bian";    // �p
        case 98: return "you";    // �q
        case 100: return "yao";    // �r
        case 102: return "sun";    // �s
        case 104: return "bo";    // �t
        case 106: return "ming";    // �u
        case 108: return "sou";    // �v
        case 110: return "ma";    // �w
        case 112: return "yuan";    // �x
        case 114: return "dai";    // �y
        case 116: return "yu";    // �z
        case 118: return "shi";    // �{
        case 120: return "hao";    // �|
        case 122: return "qiang";    // �}
        case 124: return "yi";    // �~
        case 126: return "";    // ?
        case 128: return "zhen";    // ��
        case 130: return "cang";    // ��
        case 132: return "gao";    // ��
        case 134: return "man";    // ��
        case 136: return "jiang";    // ��
        case 138: return "mao";    // ��
        case 140: return "chan";    // ��
        case 142: return "ao";    // ��
        case 144: return "gao";    // ��
        case 146: return "cui";    // ��
        case 148: return "ben";    // ��
        case 150: return "bi";    // ��
        case 152: return "bi";    // ��
        case 154: return "huang";    // ��
        case 156: return "bu";    // ��
        case 158: return "lin";    // ��
        case 160: return "yu";    // ��
        case 162: return "tong";    // ��
        case 164: return "yao";    // ��
        case 166: return "xi";    // ��
        case 168: return "xiao";    // ��
        case 170: return "shou";    // ��
        case 172: return "dun";    // ��
        case 174: return "jiao";    // ��
        case 176: return "ge";    // ��
        case 178: return "juan";    // ��
        case 180: return "du";    // ��
        case 182: return "hui";    // ��
        case 184: return "kuai";    // ��
        case 186: return "xian";    // ��
        case 188: return "xian";    // ��
        case 190: return "ning";    // ��
        case 192: return "bian";    // ��
        case 194: return "huo";    // �@
        case 196: return "nou";    // �A
        case 198: return "meng";    // �B
        case 200: return "lie";    // �C
        case 202: return "nao";    // �D
        case 204: return "guang";    // �E
        case 206: return "shou";    // �F
        case 208: return "lu";    // �G
        case 210: return "ta";    // �H
        case 212: return "xian";    // �I
        case 214: return "mi";    // �J
        case 216: return "rang";    // �K
        case 218: return "nao";    // �L
        case 220: return "e";    // �M
        case 222: return "xian";    // �N
        case 224: return "qi";    // �O
        case 226: return "jue";    // �P
        case 228: return "yao";    // �Q
        case 230: return "xuan";    // �R
        case 232: return "lu";    // �S
        case 234: return "su";    // �T
        case 236: return "qiu";    // �U
        case 238: return "ga";    // �V
        case 240: return "le";    // �W
        case 242: return "ba";    // �X
        case 244: return "hong";    // �Y
        case 246: return "di";    // �Z
        case 248: return "chuan";    // �[
        case 250: return "gan";    // �\
        case 252: return "yu";    // �]
        case 254: return "qi";    // �^
        case 256: return "yu";    // �_
        case 258: return "chang";    // �`
        case 260: return "hong";    // �a
        case 262: return "wu";    // �b
        case 264: return "fu";    // �c
        case 266: return "jie";    // �d
        case 268: return "ya";    // �e
        case 270: return "men";    // �f
        case 272: return "bang";    // �g
        case 274: return "yue";    // �h
        case 276: return "jue";    // �i
        case 278: return "yun";    // �j
        case 280: return "jue";    // �k
        case 282: return "yin";    // �l
        case 284: return "dan";    // �m
        case 286: return "pin";    // �n
        case 288: return "qiang";    // �o
        case 290: return "yi";    // �p
        case 292: return "an";    // �q
        case 294: return "ping";    // �r
        case 296: return "fu";    // �s
        case 298: return "xuan";    // �t
        case 300: return "ci";    // �u
        case 302: return "gou";    // �v
        case 304: return "jia";    // �w
        case 306: return "shao";    // �x
        case 308: return "ci";    // �y
        case 310: return "ran";    // �z
        case 312: return "sheng";    // �{
        case 314: return "shen";    // �|
        case 316: return "yi";    // �}
        case 318: return "ju";    // �~
        case 320: return "";    // ?
        case 322: return "liu";    // ��
        case 324: return "bi";    // ��
        case 326: return "zhen";    // ��
        case 328: return "jin";    // ��
        case 330: return "jiao";    // ��
        case 332: return "jian";    // ��
        case 334: return "li";    // ��
        case 336: return "guang";    // ��
        case 338: return "xian";    // ��
        case 340: return "zhou";    // ��
        case 342: return "yan";    // ��
        case 344: return "xiu";    // ��
        case 346: return "yang";    // ��
        case 348: return "xu";    // ��
        case 350: return "su";    // ��
        case 352: return "qin";    // ��
        case 354: return "yin";    // ��
        case 356: return "xun";    // ��
        case 358: return "bao";    // ��
        case 360: return "xiang";    // ��
        case 362: return "xia";    // ��
        case 364: return "gui";    // ��
        case 366: return "chong";    // ��
        case 368: return "xu";    // ��
        case 370: return "pei";    // ��
        case 372: return "lao";    // ��
        case 374: return "dang";    // ��
        case 376: return "ying";    // ��
        case 378: return "wen";    // ��
        case 380: return "e";    // ��
        case 382: return "ting";    // ��
        case 384: return "di";    // ��
        case 386: return "wu";    // ��
        case 388: return "wu";    // �@
        case 390: return "cheng";    // �A
        case 392: return "jun";    // �B
        case 394: return "mei";    // �C
        case 396: return "bei";    // �D
        case 398: return "ting";    // �E
        case 400: return "xian";    // �F
        case 402: return "chu";    // �G
        case 404: return "han";    // �H
        case 406: return "qiong";    // �I
        case 408: return "yan";    // �J
        case 410: return "xuan";    // �K
        case 412: return "xiu";    // �L
        case 414: return "fu";    // �M
        case 416: return "xi";    // �N
        case 418: return "ling";    // �O
        case 420: return "li";    // �P
        case 422: return "jin";    // �Q
        case 424: return "suo";    // �R
        case 426: return "feng";    // �S
        case 428: return "wan";    // �T
        case 430: return "dian";    // �U
        case 432: return "bing";    // �V
        case 434: return "zhan";    // �W
        case 436: return "cui";    // �X
        case 438: return "min";    // �Y
        case 440: return "yu";    // �Z
        case 442: return "lai";    // �[
        case 444: return "min";    // �\
        case 446: return "wang";    // �]
        case 448: return "wei";    // �^
        case 450: return "tian";    // �_
        case 452: return "chu";    // �`
        case 454: return "beng";    // �a
        case 456: return "cheng";    // �b
        case 458: return "e";    // �c
        case 460: return "chang";    // �d
        case 462: return "beng";    // �e
        case 464: return "lu";    // �f
        case 466: return "gun";    // �g
        case 468: return "diao";    // �h
        case 470: return "bei";    // �i
        case 472: return "qiang";    // �j
        case 474: return "zhuo";    // �k
        case 476: return "qin";    // �l
        case 478: return "fa";    // �m
        case 480: return "jin";    // �n
        case 482: return "du";    // �o
        case 484: return "jie";    // �p
        case 486: return "hui";    // �q
        case 488: return "yu";    // �r
        case 490: return "mei";    // �s
        case 492: return "chun";    // �t
        case 494: return "xuan";    // �u
        case 496: return "ti";    // �v
        case 498: return "xing";    // �w
        case 500: return "dai";    // �x
        case 502: return "rou";    // �y
        case 504: return "min";    // �z
        case 506: return "jian";    // �{
        case 508: return "wei";    // �|
        case 510: return "ruan";    // �}
        case 512: return "huan";    // �~
        case 514: return "";    // ?
        case 516: return "xie";    // ��
        case 518: return "chuan";    // ��
        case 520: return "jian";    // ��
        case 522: return "zhuan";    // ��
        case 524: return "yang";    // ��
        case 526: return "lian";    // ��
        case 528: return "quan";    // ��
        case 530: return "duan";    // ��
        case 532: return "ya";    // ��
        case 534: return "huang";    // ��
        case 536: return "liu";    // ��
        case 538: return "shi";    // ��
        case 540: return "rong";    // ��
        case 542: return "suo";    // ��
        case 544: return "yao";    // ��
        case 546: return "wen";    // ��
        case 548: return "wu";    // ��
        case 550: return "zhen";    // ��
        case 552: return "jin";    // ��
        case 554: return "ying";    // ��
        case 556: return "ma";    // ��
        case 558: return "tao";    // ��
        case 560: return "liu";    // ��
        case 562: return "li";    // ��
        case 564: return "lang";    // ��
        case 566: return "tian";    // ��
        case 568: return "qiang";    // ��
        case 570: return "cuo";    // ��
        case 572: return "jue";    // ��
        case 574: return "zhao";    // ��
        case 576: return "bin";    // ��
        case 578: return "tu";    // ��
        case 580: return "chang";    // ��
        case 582: return "kun";    // �@
        case 584: return "zhuan";    // �A
        case 586: return "cong";    // �B
        case 588: return "yi";    // �C
        case 590: return "ji";    // �D
        case 592: return "jing";    // �E
        case 594: return "zao";    // �F
        case 596: return "qiu";    // �G
        case 598: return "ao";    // �H
        case 600: return "lian";    // �I
        case 602: return "men";    // �J
        case 604: return "yin";    // �K
        case 606: return "hua";    // �L
        case 608: return "wei";    // �M
        case 610: return "wu";    // �N
        case 612: return "deng";    // �O
        case 614: return "xiu";    // �P
        case 616: return "zeng";    // �Q
        case 618: return "xun";    // �R
        case 620: return "qu";    // �S
        case 622: return "dang";    // �T
        case 624: return "lin";    // �U
        case 626: return "liao";    // �V
        case 628: return "jue";    // �W
        case 630: return "su";    // �X
        case 632: return "gui";    // �Y
        case 634: return "jing";    // �Z
        case 636: return "fan";    // �[
        case 638: return "jin";    // �\
        case 640: return "liu";    // �]
        case 642: return "ji";    // �^
        case 644: return "hui";    // �_
        case 646: return "jing";    // �`
        case 648: return "ai";    // �a
        case 650: return "zao";    // �b
        case 652: return "dang";    // �c
        case 654: return "jiao";    // �d
        case 656: return "gun";    // �e
        case 658: return "tan";    // �f
        case 660: return "kuai";    // �g
        case 662: return "huan";    // �h
        case 664: return "se";    // �i
        case 666: return "sui";    // �j
        case 668: return "tian";    // �k
        case 670: return "chu";    // �l
        case 672: return "yu";    // �m
        case 674: return "jin";    // �n
        case 676: return "fu";    // �o
        case 678: return "bin";    // �p
        case 680: return "shu";    // �q
        case 682: return "zui";    // �r
        case 684: return "lan";    // �s
        case 686: return "xi";    // �t
        case 688: return "ji";    // �u
        case 690: return "xuan";    // �v
        case 692: return "ruan";    // �w
        case 694: return "wo";    // �x
        case 696: return "gai";    // �y
        case 698: return "lei";    // �z
        case 700: return "du";    // �{
        case 702: return "li";    // �|
        case 704: return "zhi";    // �}
        case 706: return "rou";    // �~
        case 708: return "";    // ?
        case 710: return "li";    // ��
        case 712: return "zan";    // ��
        case 714: return "qiong";    // ��
        case 716: return "ti";    // ��
        case 718: return "gui";    // ��
        case 720: return "sui";    // ��
        case 722: return "la";    // ��
        case 724: return "long";    // ��
        case 726: return "lu";    // ��
        case 728: return "li";    // ��
        case 730: return "lan";    // ��
        case 732: return "ying";    // ��
        case 734: return "mi";    // ��
        case 736: return "xiang";    // ��
        case 738: return "wei";    // ��
        case 740: return "guan";    // ��
        case 742: return "dao";    // ��
        case 744: return "zan";    // ��
        case 746: return "ye";    // ��
        case 748: return "bo";    // ��
        case 750: return "bo";    // ��
        case 752: return "hu";    // ��
        case 754: return "li";    // ��
        case 756: return "shi";    // ��
        case 758: return "hong";    // ��
        case 760: return "qian";    // ��
        case 762: return "ban";    // ��
        case 764: return "pen";    // ��
        case 766: return "fang";    // ��
        case 768: return "dan";    // ��
        case 770: return "fen";    // ��
        case 772: return "mao";    // ��
        case 774: return "wa";    // ��
        case 776: return "hu";    // �@
        case 778: return "yi";    // �A
        case 780: return "bai";    // �B
        case 782: return "juan";    // �C
        case 784: return "chang";    // �D
        case 786: return "chi";    // �E
        case 788: return "li";    // �F
        case 790: return "dang";    // �G
        case 792: return "meng";    // �H
        case 794: return "zhui";    // �I
        case 796: return "ping";    // �J
        case 798: return "bian";    // �K
        case 800: return "zhou";    // �L
        case 802: return "li";    // �M
        case 804: return "ci";    // �N
        case 806: return "ying";    // �O
        case 808: return "qi";    // �P
        case 810: return "xian";    // �Q
        case 812: return "lou";    // �R
        case 814: return "di";    // �S
        case 816: return "ou";    // �T
        case 818: return "chuan";    // �U
        case 820: return "lin";    // �V
        case 822: return "wu";    // �W
        case 824: return "dan";    // �X
        case 826: return "weng";    // �Y
        case 828: return "ying";    // �Z
        case 830: return "yan";    // �[
        case 832: return "tian";    // �\
        case 834: return "han";    // �]
        case 836: return "chang";    // �^
        case 838: return "qing";    // �_
        case 840: return "shen";    // �`
        case 842: return "chan";    // �a
        case 844: return "chan";    // �b
        case 846: return "rui";    // �c
        case 848: return "su";    // �d
        case 850: return "shen";    // �e
        case 852: return "lu";    // �f
        case 854: return "feng";    // �g
        case 856: return "you";    // �h
        case 858: return "fu";    // �i
        case 860: return "ping";    // �j
        case 862: return "ding";    // �k
        case 864: return "quan";    // �l
        case 866: return "mang";    // �m
        case 868: return "bi";    // �n
        case 870: return "liu";    // �o
        case 872: return "sun";    // �p
        case 874: return "liu";    // �q
        case 876: return "mu";    // �r
        case 878: return "yun";    // �s
        case 880: return "fu";    // �t
        case 882: return "geng";    // �u
        case 884: return "jie";    // �v
        case 886: return "bi";    // �w
        case 888: return "tian";    // �x
        case 890: return "mu";    // �y
        case 892: return "tap";    // �z
        case 894: return "jiang";    // �{
        case 896: return "wa";    // �|
        case 898: return "fu";    // �}
        case 900: return "nan";    // �~
        case 902: return "";    // ?
        case 904: return "mu";    // ��
        case 906: return "mu";    // ��
        case 908: return "ji";    // ��
        case 910: return "tian";    // ��
        case 912: return "gai";    // ��
        case 914: return "bi";    // ��
        case 916: return "da";    // ��
        case 918: return "zhi";    // ��
        case 920: return "lue";    // ��
        case 922: return "pan";    // ��
        case 924: return "yi";    // ��
        case 926: return "hua";    // ��
        case 928: return "yu";    // ��
        case 930: return "yu";    // ��
        case 932: return "mu";    // ��
        case 934: return "jun";    // ��
        case 936: return "yi";    // ��
        case 938: return "liu";    // ��
        case 940: return "die";    // ��
        case 942: return "hua";    // ��
        case 944: return "dang";    // ��
        case 946: return "zhui";    // ��
        case 948: return "jiang";    // ��
        case 950: return "cheng";    // ��
        case 952: return "chang";    // ��
        case 954: return "tuan";    // ��
        case 956: return "lei";    // ��
        case 958: return "cha";    // ��
        case 960: return "liu";    // ��
        case 962: return "die";    // ��
        case 964: return "lin";    // ��
        case 966: return "jiang";    // ��
        case 968: return "chou";    // ��
        case 970: return "pi";    // �@
        case 972: return "die";    // �A
        case 974: return "die";    // �B
        case 976: return "jie";    // �C
        case 978: return "dan";    // �D
        case 980: return "shu";    // �E
        case 982: return "di";    // �F
        case 984: return "nai";    // �G
        case 986: return "bi";    // �H
        case 988: return "gang";    // �I
        case 990: return "zhou";    // �J
        case 992: return "xia";    // �K
        case 994: return "xu";    // �L
        case 996: return "chen";    // �M
        case 998: return "jue";    // �N
        case 1000: return "qi";    // �O
        case 1002: return "ya";    // �P
        case 1004: return "cui";    // �Q
        case 1006: return "bi";    // �R
        case 1008: return "zong";    // �S
        case 1010: return "xue";    // �T
        case 1012: return "zhi";    // �U
        case 1014: return "bian";    // �V
        case 1016: return "zhi";    // �W
        case 1018: return "fei";    // �X
        case 1020: return "ju";    // �Y
        case 1022: return "shan";    // �Z
        case 1024: return "ni";    // �[
        case 1026: return "teng";    // �\
        case 1028: return "tong";    // �]
        case 1030: return "jie";    // �^
        case 1032: return "you";    // �_
        case 1034: return "hui";    // �`
        case 1036: return "tan";    // �a
        case 1038: return "chi";    // �b
        case 1040: return "mei";    // �c
        case 1042: return "jing";    // �d
        case 1044: return "xiao";    // �e
        case 1046: return "tu";    // �f
        case 1048: return "mang";    // �g
        case 1050: return "xiao";    // �h
        case 1052: return "suan";    // �i
        case 1054: return "pu";    // �j
        case 1056: return "duo";    // �k
        case 1058: return "shou";    // �l
        case 1060: return "yi";    // �m
        case 1062: return "beng";    // �n
        case 1064: return "zhang";    // �o
        case 1066: return "guan";    // �p
        case 1068: return "ma";    // �q
        case 1070: return "lin";    // �r
        case 1072: return "ji";    // �s
        case 1074: return "dian";    // �t
        case 1076: return "an";    // �u
        case 1078: return "chi";    // �v
        case 1080: return "bi";    // �w
        case 1082: return "min";    // �x
        case 1084: return "dui";    // �y
        case 1086: return "ke";    // �z
        case 1088: return "ya";    // �{
        case 1090: return "cu";    // �|
        case 1092: return "shen";    // �}
        case 1094: return "zhong";    // �~
        case 1096: return "";    // ?
        case 1098: return "zhi";    // ��
        case 1100: return "yu";    // ��
        case 1102: return "feng";    // ��
        case 1104: return "yang";    // ��
        case 1106: return "chen";    // ��
        case 1108: return "tu";    // ��
        case 1110: return "guo";    // ��
        case 1112: return "wen";    // ��
        case 1114: return "huan";    // ��
        case 1116: return "ku";    // ��
        case 1118: return "yin";    // ��
        case 1120: return "jue";    // ��
        case 1122: return "xi";    // ��
        case 1124: return "guan";    // ��
        case 1126: return "yi";    // ��
        case 1128: return "chuan";    // ��
        case 1130: return "lei";    // ��
        case 1132: return "nue";    // ��
        case 1134: return "dian";    // ��
        case 1136: return "zhang";    // ��
        case 1138: return "shen";    // ��
        case 1140: return "cu";    // ��
        case 1142: return "yi";    // ��
        case 1144: return "zong";    // ��
        case 1146: return "sou";    // ��
        case 1148: return "se";    // ��
        case 1150: return "diao";    // ��
        case 1152: return "lou";    // ��
        case 1154: return "lu";    // ��
        case 1156: return "qin";    // ��
        case 1158: return "fu";    // ��
        case 1160: return "liao";    // ��
        case 1162: return "qiao";    // ��
        case 1164: return "liu";    // �@
        case 1166: return "lao";    // �A
        case 1168: return "xian";    // �B
        case 1170: return "fei";    // �C
        case 1172: return "dan";    // �D
        case 1174: return "yin";    // �E
        case 1176: return "he";    // �F
        case 1178: return "xian";    // �G
        case 1180: return "guan";    // �H
        case 1182: return "wei";    // �I
        case 1184: return "nong";    // �J
        case 1186: return "yu";    // �K
        case 1188: return "wei";    // �L
        case 1190: return "yong";    // �M
        case 1192: return "lei";    // �N
        case 1194: return "li";    // �O
        case 1196: return "shu";    // �P
        case 1198: return "dan";    // �Q
        case 1200: return "bing";    // �R
        case 1202: return "bing";    // �S
        case 1204: return "bie";    // �T
        case 1206: return "ji";    // �U
        case 1208: return "chi";    // �V
        case 1210: return "yang";    // �W
        case 1212: return "jie";    // �X
        case 1214: return "zheng";    // �Y
        case 1216: return "yi";    // �Z
        case 1218: return "li";    // �[
        case 1220: return "huo";    // �\
        case 1222: return "lai";    // �]
        case 1224: return "ji";    // �^
        case 1226: return "xuan";    // �_
        case 1228: return "ying";    // �`
        case 1230: return "yin";    // �a
        case 1232: return "yong";    // �b
        case 1234: return "tan";    // �c
        case 1236: return "dian";    // �d
        case 1238: return "luo";    // �e
        case 1240: return "luan";    // �f
        case 1242: return "luan";    // �g
        case 1244: return "bo";    // �h
        case 1246: return "bo";    // �i
        case 1248: return "ba";    // �j
        case 1250: return "fa";    // �k
        case 1252: return "fa";    // �l
        case 1254: return "qie";    // �m
        case 1256: return "bi";    // �n
        case 1258: return "zao";    // �o
        case 1260: return "mao";    // �p
        case 1262: return "ba";    // �q
        case 1264: return "ci";    // �r
        case 1266: return "ling";    // �s
        case 1268: return "mo";    // �t
        case 1270: return "ji";    // �u
        case 1272: return "peng";    // �v
        case 1274: return "gao";    // �w
        case 1276: return "e";    // �x
        case 1278: return "han";    // �y
        case 1280: return "bi";    // �z
        case 1282: return "chou";    // �{
        case 1284: return "qian";    // �|
        case 1286: return "ai";    // �}
        case 1288: return "po";    // �~
        case 1290: return "";    // ?
        case 1292: return "hao";    // ��
        case 1294: return "huang";    // ��
        case 1296: return "hao";    // ��
        case 1298: return "ze";    // ��
        case 1300: return "cui";    // ��
        case 1302: return "hao";    // ��
        case 1304: return "xiao";    // ��
        case 1306: return "ye";    // ��
        case 1308: return "hao";    // ��
        case 1310: return "jiao";    // ��
        case 1312: return "ai";    // ��
        case 1314: return "xing";    // ��
        case 1316: return "huang";    // ��
        case 1318: return "li";    // ��
        case 1320: return "piao";    // ��
        case 1322: return "he";    // ��
        case 1324: return "jiao";    // ��
        case 1326: return "gan";    // ��
        case 1328: return "pao";    // ��
        case 1330: return "qiu";    // ��
        case 1332: return "que";    // ��
        case 1334: return "zha";    // ��
        case 1336: return "gu";    // ��
        case 1338: return "jun";    // ��
        case 1340: return "jun";    // ��
        case 1342: return "zhou";    // ��
        case 1344: return "zha";    // ��
        case 1346: return "gu";    // ��
        case 1348: return "zhao";    // ��
        case 1350: return "du";    // ��
        case 1352: return "qi";    // ��
        case 1354: return "ying";    // ��
        case 1356: return "bei";    // ��
        case 1358: return "zhao";    // �@
        case 1360: return "he";    // �A
        case 1362: return "he";    // �B
        case 1364: return "bo";    // �C
        case 1366: return "wan";    // �D
        case 1368: return "yu";    // �E
        case 1370: return "fan";    // �F
        case 1372: return "fu";    // �G
        case 1374: return "qiu";    // �H
        case 1376: return "dao";    // �I
        case 1378: return "lu";    // �J
        case 1380: return "zhan";    // �K
        case 1382: return "li";    // �L
        case 1384: return "jin";    // �M
        case 1386: return "xu";    // �N
        case 1388: return "jian";    // �O
        case 1390: return "pan";    // �P
        case 1392: return "an";    // �Q
        case 1394: return "lu";    // �R
        case 1396: return "xu";    // �S
        case 1398: return "zhou";    // �T
        case 1400: return "dang";    // �U
        case 1402: return "an";    // �V
        case 1404: return "gu";    // �W
        case 1406: return "li";    // �X
        case 1408: return "gan";    // �Y
        case 1410: return "wang";    // �Z
        case 1412: return "qi";    // �[
        case 1414: return "yuan";    // �\
        case 1416: return "tian";    // �]
        case 1418: return "xin";    // �^
        case 1420: return "pan";    // �_
        case 1422: return "feng";    // �`
        case 1424: return "min";    // �a
        case 1426: return "ming";    // �b
        case 1428: return "shi";    // �c
        case 1430: return "yun";    // �d
        case 1432: return "pan";    // �e
        case 1434: return "fang";    // �f
        case 1436: return "mei";    // �g
        case 1438: return "xian";    // �h
        case 1440: return "shi";    // �i
        case 1442: return "yang";    // �j
        case 1444: return "zheng";    // �k
        case 1446: return "ao";    // �l
        case 1448: return "shen";    // �m
        case 1450: return "huo";    // �n
        case 1452: return "da";    // �o
        case 1454: return "zhen";    // �p
        case 1456: return "kuang";    // �q
        case 1458: return "ju";    // �r
        case 1460: return "shen";    // �s
        case 1462: return "mei";    // �t
        case 1464: return "mo";    // �u
        case 1466: return "zhu";    // �v
        case 1468: return "zhen";    // �w
        case 1470: return "shi";    // �x
        case 1472: return "die";    // �y
        case 1474: return "ni";    // �z
        case 1476: return "zi";    // �{
        case 1478: return "chao";    // �|
        case 1480: return "bing";    // �}
        case 1482: return "pan";    // �~
        case 1484: return "";    // ?
        case 1486: return "long";    // ��
        case 1488: return "tong";    // ��
        case 1490: return "die";    // ��
        case 1492: return "di";    // ��
        case 1494: return "ne";    // ��
        case 1496: return "ming";    // ��
        case 1498: return "xuan";    // ��
        case 1500: return "zhen";    // ��
        case 1502: return "yang";    // ��
        case 1504: return "mo";    // ��
        case 1506: return "zhong";    // ��
        case 1508: return "mo";    // ��
        case 1510: return "mei";    // ��
        case 1512: return "qiao";    // ��
        case 1514: return "han";    // ��
        case 1516: return "huan";    // ��
        case 1518: return "cheng";    // ��
        case 1520: return "zhuai";    // ��
        case 1522: return "juan";    // ��
        case 1524: return "e";    // ��
        case 1526: return "man";    // ��
        case 1528: return "xian";    // ��
        case 1530: return "xi";    // ��
        case 1532: return "kun";    // ��
        case 1534: return "shan";    // ��
        case 1536: return "tian";    // ��
        case 1538: return "gun";    // ��
        case 1540: return "wan";    // ��
        case 1542: return "leng";    // ��
        case 1544: return "shi";    // ��
        case 1546: return "qiong";    // ��
        case 1548: return "lie";    // ��
        case 1550: return "zheng";    // ��
        case 1552: return "li";    // �@
        case 1554: return "lai";    // �A
        case 1556: return "zui";    // �B
        case 1558: return "juan";    // �C
        case 1560: return "pi";    // �D
        case 1562: return "hun";    // �E
        case 1564: return "lu";    // �F
        case 1566: return "yi";    // �G
        case 1568: return "zhou";    // �H
        case 1570: return "yu";    // �I
        case 1572: return "hun";    // �J
        case 1574: return "ma";    // �K
        case 1576: return "xia";    // �L
        case 1578: return "xing";    // �M
        case 1580: return "hui";    // �N
        case 1582: return "gun";    // �O
        case 1584: return "zai";    // �P
        case 1586: return "chun";    // �Q
        case 1588: return "jian";    // �R
        case 1590: return "mei";    // �S
        case 1592: return "hou";    // �T
        case 1594: return "xuan";    // �U
        case 1596: return "tian";    // �V
        case 1598: return "xu";    // �W
        case 1600: return "fa";    // �X
        case 1602: return "wo";    // �Y
        case 1604: return "gui";    // �Z
        case 1606: return "mi";    // �[
        case 1608: return "weng";    // �\
        case 1610: return "kou";    // �]
        case 1612: return "dang";    // �^
        case 1614: return "tian";    // �_
        case 1616: return "huan";    // �`
        case 1618: return "mo";    // �a
        case 1620: return "fen";    // �b
        case 1622: return "ze";    // �c
        case 1624: return "zhang";    // �d
        case 1626: return "yi";    // �e
        case 1628: return "dou";    // �f
        case 1630: return "kou";    // �g
        case 1632: return "mo";    // �h
        case 1634: return "shun";    // �i
        case 1636: return "cong";    // �j
        case 1638: return "lu";    // �k
        case 1640: return "chi";    // �l
        case 1642: return "man";    // �m
        case 1644: return "gui";    // �n
        case 1646: return "huan";    // �o
        case 1648: return "shun";    // �p
        case 1650: return "xi";    // �q
        case 1652: return "pu";    // �r
        case 1654: return "shen";    // �s
        case 1656: return "liao";    // �t
        case 1658: return "che";    // �u
        case 1660: return "jian";    // �v
        case 1662: return "ye";    // �w
        case 1664: return "xu";    // �x
        case 1666: return "wu";    // �y
        case 1668: return "gui";    // �z
        case 1670: return "jian";    // �{
        case 1672: return "ye";    // �|
        case 1674: return "ai";    // �}
        case 1676: return "hui";    // �~
        case 1678: return "";    // ?
        case 1680: return "jian";    // ��
        case 1682: return "zhao";    // ��
        case 1684: return "mei";    // ��
        case 1686: return "chou";    // ��
        case 1688: return "sao";    // ��
        case 1690: return "ning";    // ��
        case 1692: return "xun";    // ��
        case 1694: return "yao";    // ��
        case 1696: return "yue";    // ��
        case 1698: return "meng";    // ��
        case 1700: return "mian";    // ��
        case 1702: return "pin";    // ��
        case 1704: return "mian";    // ��
        case 1706: return "lei";    // ��
        case 1708: return "guo";    // ��
        case 1710: return "xuan";    // ��
        case 1712: return "mian";    // ��
        case 1714: return "huo";    // ��
        case 1716: return "lu";    // ��
        case 1718: return "meng";    // ��
        case 1720: return "long";    // ��
        case 1722: return "guan";    // ��
        case 1724: return "man";    // ��
        case 1726: return "li";    // ��
        case 1728: return "tang";    // ��
        case 1730: return "kan";    // ��
        case 1732: return "zhu";    // ��
        case 1734: return "qin";    // ��
        case 1736: return "yu";    // ��
        case 1738: return "shuo";    // ��
        case 1740: return "zhuo";    // ��
        case 1742: return "jue";    // ��
        case 1744: return "shen";    // ��
        case 1746: return "hou";    // �@
        case 1748: return "ying";    // �A
        case 1750: return "zhou";    // �B
        case 1752: return "jiao";    // �C
        case 1754: return "zeng";    // �D
        case 1756: return "yue";    // �E
        case 1758: return "ba";    // �F
        case 1760: return "ding";    // �G
        case 1762: return "diao";    // �H
        case 1764: return "zi";    // �I
        case 1766: return "wu";    // �J
        case 1768: return "da";    // �K
        case 1770: return "ku";    // �L
        case 1772: return "gang";    // �M
        case 1774: return "dan";    // �N
        case 1776: return "jue";    // �O
        case 1778: return "li";    // �P
        case 1780: return "fu";    // �Q
        case 1782: return "wen";    // �R
        case 1784: return "e";    // �S
        case 1786: return "kang";    // �T
        case 1788: return "zhi";    // �U
        case 1790: return "jie";    // �V
        case 1792: return "bin";    // �W
        case 1794: return "e";    // �X
        case 1796: return "zhe";    // �Y
        case 1798: return "sui";    // �Z
        case 1800: return "wa";    // �[
        case 1802: return "jin";    // �\
        case 1804: return "mo";    // �]
        case 1806: return "ju";    // �^
        case 1808: return "yu";    // �_
        case 1810: return "luo";    // �`
        case 1812: return "tuo";    // �a
        case 1814: return "e";    // �b
        case 1816: return "mu";    // �c
        case 1818: return "zhu";    // �d
        case 1820: return "nu";    // �e
        case 1822: return "ping";    // �f
        case 1824: return "ling";    // �g
        case 1826: return "pao";    // �h
        case 1828: return "le";    // �i
        case 1830: return "e";    // �j
        case 1832: return "po";    // �k
        case 1834: return "yong";    // �l
        case 1836: return "kuang";    // �m
        case 1838: return "keng";    // �n
        case 1840: return "quan";    // �o
        case 1842: return "zhu";    // �p
        case 1844: return "guang";    // �q
        case 1846: return "e";    // �r
        case 1848: return "qia";    // �s
        case 1850: return "lu";    // �t
        case 1852: return "wei";    // �u
        case 1854: return "ai";    // �v
        case 1856: return "ken";    // �w
        case 1858: return "yan";    // �x
        case 1860: return "peng";    // �y
        case 1862: return "lao";    // �z
        case 1864: return "hong";    // �{
        case 1866: return "qing";    // �|
        case 1868: return "wei";    // �}
        case 1870: return "qiao";    // �~
        case 1872: return "";    // ?
        case 1874: return "ceok";    // ��
        case 1876: return "keng";    // ��
        case 1878: return "ke";    // ��
        case 1880: return "chan";    // ��
        case 1882: return "lang";    // ��
        case 1884: return "hong";    // ��
        case 1886: return "yu";    // ��
        case 1888: return "xiao";    // ��
        case 1890: return "xia";    // ��
        case 1892: return "bang";    // ��
        case 1894: return "luo";    // ��
        case 1896: return "yong";    // ��
        case 1898: return "che";    // ��
        case 1900: return "che";    // ��
        case 1902: return "yan";    // ��
        case 1904: return "sha";    // ��
        case 1906: return "kun";    // ��
        case 1908: return "gu";    // ��
        case 1910: return "ceok";    // ��
        case 1912: return "hua";    // ��
        case 1914: return "lu";    // ��
        case 1916: return "cen";    // ��
        case 1918: return "nue";    // ��
        case 1920: return "song";    // ��
        case 1922: return "zhuo";    // ��
        case 1924: return "keng";    // ��
        case 1926: return "yan";    // ��
        case 1928: return "duo";    // ��
        case 1930: return "kong";    // ��
        case 1932: return "cheng";    // ��
        case 1934: return "qi";    // ��
        case 1936: return "zong";    // ��
        case 1938: return "qing";    // ��
        case 1940: return "lin";    // �@
        case 1942: return "jun";    // �A
        case 1944: return "bo";    // �B
        case 1946: return "min";    // �C
        case 1948: return "jian";    // �D
        case 1950: return "he";    // �E
        case 1952: return "que";    // �F
        case 1954: return "leng";    // �G
        case 1956: return "yin";    // �H
        case 1958: return "wu";    // �I
        case 1960: return "qi";    // �J
        case 1962: return "lun";    // �K
        case 1964: return "nao";    // �L
        case 1966: return "ruan";    // �M
        case 1968: return "yan";    // �N
        case 1970: return "ding";    // �O
        case 1972: return "tuo";    // �P
        case 1974: return "ying";    // �Q
        case 1976: return "ke";    // �R
        case 1978: return "wei";    // �S
        case 1980: return "shuo";    // �T
        case 1982: return "an";    // �U
        case 1984: return "duan";    // �V
        case 1986: return "xia";    // �W
        case 1988: return "dang";    // �X
        case 1990: return "di";    // �Y
        case 1992: return "nao";    // �Z
        case 1994: return "tian";    // �[
        case 1996: return "qi";    // �\
        case 1998: return "dun";    // �]
        case 2000: return "feng";    // �^
        case 2002: return "que";    // �_
        case 2004: return "qiao";    // �`
        case 2006: return "ma";    // �a
        case 2008: return "gong";    // �b
        case 2010: return "xie";    // �c
        case 2012: return "e";    // �d
        case 2014: return "liu";    // �e
        case 2016: return "ti";    // �f
        case 2018: return "tang";    // �g
        case 2020: return "ke";    // �h
        case 2022: return "pi";    // �i
        case 2024: return "wei";    // �j
        case 2026: return "tian";    // �k
        case 2028: return "qia";    // �l
        case 2030: return "qi";    // �m
        case 2032: return "lian";    // �n
        case 2034: return "wei";    // �o
        case 2036: return "yun";    // �p
        case 2038: return "dui";    // �q
        case 2040: return "la";    // �r
        case 2042: return "pak";    // �s
        case 2044: return "yao";    // �t
        case 2046: return "zhuan";    // �u
        case 2048: return "chan";    // �v
        case 2050: return "qi";    // �w
        case 2052: return "ao";    // �x
        case 2054: return "peng";    // �y
        case 2056: return "liu";    // �z
        case 2058: return "lu";    // �{
        case 2060: return "kan";    // �|
        case 2062: return "chuan";    // �}
        case 2064: return "chen";    // �~
        case 2066: return "";    // ?
        case 2068: return "yin";    // ��
        case 2070: return "lei";    // ��
        case 2072: return "piao";    // ��
        case 2074: return "qi";    // ��
        case 2076: return "qi";    // ��
        case 2078: return "cui";    // ��
        case 2080: return "zong";    // ��
        case 2082: return "chuo";    // ��
        case 2084: return "lun";    // ��
        case 2086: return "ji";    // ��
        case 2088: return "shan";    // ��
        case 2090: return "lao";    // ��
        case 2092: return "zeng";    // ��
        case 2094: return "jian";    // ��
        case 2096: return "xi";    // ��
        case 2098: return "ding";    // ��
        case 2100: return "dian";    // ��
        case 2102: return "bo";    // ��
        case 2104: return "she";    // ��
        case 2106: return "qiao";    // ��
        case 2108: return "di";    // ��
        case 2110: return "li";    // ��
        case 2112: return "jian";    // ��
        case 2114: return "xi";    // ��
        case 2116: return "zhang";    // ��
        case 2118: return "qiao";    // ��
        case 2120: return "jian";    // ��
        case 2122: return "yu";    // ��
        case 2124: return "zhui";    // ��
        case 2126: return "he";    // ��
        case 2128: return "ke";    // ��
        case 2130: return "ze";    // ��
        case 2132: return "lei";    // ��
        case 2134: return "jie";    // �@
        case 2136: return "chu";    // �A
        case 2138: return "ye";    // �B
        case 2140: return "hu";    // �C
        case 2142: return "dang";    // �D
        case 2144: return "yi";    // �E
        case 2146: return "pi";    // �F
        case 2148: return "pi";    // �G
        case 2150: return "yu";    // �H
        case 2152: return "pin";    // �I
        case 2154: return "e";    // �J
        case 2156: return "ai";    // �K
        case 2158: return "ke";    // �L
        case 2160: return "jian";    // �M
        case 2162: return "yu";    // �N
        case 2164: return "ruan";    // �O
        case 2166: return "pao";    // �P
        case 2168: return "ci";    // �Q
        case 2170: return "bo";    // �R
        case 2172: return "yang";    // �S
        case 2174: return "ma";    // �T
        case 2176: return "xian";    // �U
        case 2178: return "kuang";    // �V
        case 2180: return "lei";    // �W
        case 2182: return "lei";    // �X
        case 2184: return "zhi";    // �Y
        case 2186: return "li";    // �Z
        case 2188: return "li";    // �[
        case 2190: return "fan";    // �\
        case 2192: return "que";    // �]
        case 2194: return "pao";    // �^
        case 2196: return "ying";    // �_
        case 2198: return "li";    // �`
        case 2200: return "long";    // �a
        case 2202: return "long";    // �b
        case 2204: return "mo";    // �c
        case 2206: return "shuan";    // �d
        case 2208: return "guan";    // �e
        case 2210: return "lan";    // �f
        case 2212: return "ca";    // �g
        case 2214: return "yan";    // �h
        case 2216: return "reng";    // �i
        case 2218: return "yue";    // �j
        case 2220: return "ta";    // �k
        case 2222: return "ma";    // �l
        case 2224: return "xie";    // �m
        case 2226: return "yao";    // �n
        case 2228: return "qi";    // �o
        case 2230: return "beng";    // �p
        case 2232: return "dui";    // �q
        case 2234: return "zhong";    // �r
        case 2236: return "ren";    // �s
        case 2238: return "yi";    // �t
        case 2240: return "shi";    // �u
        case 2242: return "you";    // �v
        case 2244: return "zhi";    // �w
        case 2246: return "tiao";    // �x
        case 2248: return "fu";    // �y
        case 2250: return "bi";    // �z
        case 2252: return "suan";    // �{
        case 2254: return "mei";    // �|
        case 2256: return "chai";    // �}
        case 2258: return "lu";    // �~
        case 2260: return "";    // ?
        case 2262: return "yu";    // ��
        case 2264: return "wu";    // ��
        case 2266: return "zhu";    // ��
        case 2268: return "gui";    // ��
        case 2270: return "xia";    // ��
        case 2272: return "zhi";    // ��
        case 2274: return "gao";    // ��
        case 2276: return "gao";    // ��
        case 2278: return "lei";    // ��
        case 2280: return "jin";    // ��
        case 2282: return "shen";    // ��
        case 2284: return "gai";    // ��
        case 2286: return "kun";    // ��
        case 2288: return "di";    // ��
        case 2290: return "tao";    // ��
        case 2292: return "gu";    // ��
        case 2294: return "guan";    // ��
        case 2296: return "zui";    // ��
        case 2298: return "ling";    // ��
        case 2300: return "lu";    // ��
        case 2302: return "dao";    // ��
        case 2304: return "zhi";    // ��
        case 2306: return "bi";    // ��
        case 2308: return "chu";    // ��
        case 2310: return "hui";    // ��
        case 2312: return "you";    // ��
        case 2314: return "yin";    // ��
        case 2316: return "zi";    // ��
        case 2318: return "huo";    // ��
        case 2320: return "zhen";    // ��
        case 2322: return "yuan";    // ��
        case 2324: return "wu";    // ��
        case 2326: return "xian";    // ��
        case 2328: return "yang";    // �@
        case 2330: return "zhi";    // �A
        case 2332: return "yi";    // �B
        case 2334: return "mei";    // �C
        case 2336: return "si";    // �D
        case 2338: return "di";    // �E
        case 2340: return "bei";    // �F
        case 2342: return "zhen";    // �G
        case 2344: return "yong";    // �H
        case 2346: return "ji";    // �I
        case 2348: return "gao";    // �J
        case 2350: return "tang";    // �K
        case 2352: return "si";    // �L
        case 2354: return "ma";    // �M
        case 2356: return "ta";    // �N
        case 2358: return "fu";    // �O
        case 2360: return "xuan";    // �P
        case 2362: return "qi";    // �Q
        case 2364: return "yu";    // �R
        case 2366: return "ji";    // �S
        case 2368: return "si";    // �T
        case 2370: return "chan";    // �U
        case 2372: return "dan";    // �V
        case 2374: return "gui";    // �W
        case 2376: return "sui";    // �X
        case 2378: return "li";    // �Y
        case 2380: return "nong";    // �Z
        case 2382: return "mi";    // �[
        case 2384: return "dao";    // �\
        case 2386: return "li";    // �]
        case 2388: return "yue";    // �^
        case 2390: return "zhi";    // �_
        case 2392: return "zan";    // �`
        case 2394: return "lei";    // �a
        case 2396: return "rou";    // �b
        case 2398: return "xie";    // �c
        case 2400: return "tu";    // �d
        case 2402: return "ren";    // �e
        case 2404: return "zi";    // �f
        case 2406: return "na";    // �g
        case 2408: return "zhi";    // �h
        case 2410: return "xian";    // �i
        case 2412: return "nian";    // �j
        case 2414: return "qiu";    // �k
        case 2416: return "fen";    // �l
        case 2418: return "mao";    // �m
        case 2420: return "yun";    // �n
        case 2422: return "zhi";    // �o
        case 2424: return "jing";    // �p
        case 2426: return "zhi";    // �q
        case 2428: return "yu";    // �r
        case 2430: return "ku";    // �s
        case 2432: return "ban";    // �t
        case 2434: return "pi";    // �u
        case 2436: return "ni";    // �v
        case 2438: return "li";    // �w
        case 2440: return "you";    // �x
        case 2442: return "pi";    // �y
        case 2444: return "bo";    // �z
        case 2446: return "ling";    // �{
        case 2448: return "nian";    // �|
        case 2450: return "zuo";    // �}
        case 2452: return "zhi";    // �~
        case 2454: return "";    // ?
        case 2456: return "ju";    // ��
        case 2458: return "huo";    // ��
        case 2460: return "tong";    // ��
        case 2462: return "zhi";    // ��
        case 2464: return "kuo";    // ��
        case 2466: return "ge";    // ��
        case 2468: return "yin";    // ��
        case 2470: return "zi";    // ��
        case 2472: return "zhi";    // ��
        case 2474: return "ren";    // ��
        case 2476: return "du";    // ��
        case 2478: return "zhu";    // ��
        case 2480: return "nong";    // ��
        case 2482: return "bu";    // ��
        case 2484: return "gao";    // ��
        case 2486: return "xun";    // ��
        case 2488: return "shui";    // ��
        case 2490: return "kun";    // ��
        case 2492: return "gan";    // ��
        case 2494: return "jing";    // ��
        case 2496: return "ti";    // ��
        case 2498: return "tu";    // ��
        case 2500: return "ya";    // ��
        case 2502: return "lun";    // ��
        case 2504: return "lu";    // ��
        case 2506: return "gu";    // ��
        case 2508: return "zuo";    // ��
        case 2510: return "zhun";    // ��
        case 2512: return "bang";    // ��
        case 2514: return "ji";    // ��
        case 2516: return "zhi";    // ��
        case 2518: return "kun";    // ��
        case 2520: return "leng";    // ��
        case 2522: return "peng";    // �@
        case 2524: return "bing";    // �A
        case 2526: return "zu";    // �B
        case 2528: return "yu";    // �C
        case 2530: return "lue";    // �D
        case 2532: return "xiang";    // �E
        case 2534: return "yi";    // �F
        case 2536: return "qie";    // �G
        case 2538: return "bian";    // �H
        case 2540: return "ji";    // �I
        case 2542: return "fu";    // �J
        case 2544: return "bi";    // �K
        case 2546: return "nuo";    // �L
        case 2548: return "jie";    // �M
        case 2550: return "zhong";    // �N
        case 2552: return "zong";    // �O
        case 2554: return "xu";    // �P
        case 2556: return "cheng";    // �Q
        case 2558: return "dao";    // �R
        case 2560: return "lian";    // �S
        case 2562: return "jiu";    // �T
        case 2564: return "yu";    // �U
        case 2566: return "xu";    // �V
        case 2568: return "zhi";    // �W
        case 2570: return "gao";    // �X
        case 2572: return "yu";    // �Y
        case 2574: return "rong";    // �Z
        case 2576: return "sui";    // �[
        case 2578: return "rong";    // �\
        case 2580: return "ji";    // �]
        case 2582: return "kang";    // �^
        case 2584: return "shan";    // �_
        case 2586: return "men";    // �`
        case 2588: return "ti";    // �a
        case 2590: return "ji";    // �b
        case 2592: return "lu";    // �c
        case 2594: return "su";    // �d
        case 2596: return "ji";    // �e
        case 2598: return "ying";    // �f
        case 2600: return "wen";    // �g
        case 2602: return "qiu";    // �h
        case 2604: return "kuei";    // �i
        case 2606: return "yi";    // �j
        case 2608: return "huang";    // �k
        case 2610: return "qie";    // �l
        case 2612: return "ji";    // �m
        case 2614: return "xiao";    // �n
        case 2616: return "pu";    // �o
        case 2618: return "jiao";    // �p
        case 2620: return "bo";    // �q
        case 2622: return "tong";    // �r
        case 2624: return "zui";    // �s
        case 2626: return "lu";    // �t
        case 2628: return "sui";    // �u
        case 2630: return "nong";    // �v
        case 2632: return "se";    // �w
        case 2634: return "hui";    // �x
        case 2636: return "rang";    // �y
        case 2638: return "nuo";    // �z
        case 2640: return "yu";    // �{
        case 2642: return "pin";    // �|
        case 2644: return "ji";    // �}
        case 2646: return "tui";    // �~
        case 2648: return "";    // ?
        case 2650: return "wen";    // ��
        case 2652: return "bie";    // ��
        case 2654: return "hu";    // ��
        case 2656: return "kuang";    // ��
        case 2658: return "lu";    // ��
        case 2660: return "biao";    // ��
        case 2662: return "se";    // ��
        case 2664: return "jue";    // ��
        case 2666: return "li";    // ��
        case 2668: return "zan";    // ��
        case 2670: return "ya";    // ��
        case 2672: return "yu";    // ��
        case 2674: return "shen";    // ��
        case 2676: return "jing";    // ��
        case 2678: return "yao";    // ��
        case 2680: return "lao";    // ��
        case 2682: return "yao";    // ��
        case 2684: return "bao";    // ��
        case 2686: return "bing";    // ��
        case 2688: return "wa";    // ��
        case 2690: return "ku";    // ��
        case 2692: return "pao";    // ��
        case 2694: return "diao";    // ��
        case 2696: return "wu";    // ��
        case 2698: return "wa";    // ��
        case 2700: return "chuan";    // ��
        case 2702: return "yao";    // ��
        case 2704: return "xiao";    // ��
        case 2706: return "cheng";    // ��
        case 2708: return "kou";    // ��
        case 2710: return "dan";    // ��
        case 2712: return "zhuo";    // ��
        case 2714: return "xu";    // ��
        case 2716: return "su";    // �@
        case 2718: return "guan";    // �A
        case 2720: return "zhuo";    // �B
        case 2722: return "wo";    // �C
        case 2724: return "wa";    // �D
        case 2726: return "ya";    // �E
        case 2728: return "qiong";    // �F
        case 2730: return "yao";    // �G
        case 2732: return "yao";    // �H
        case 2734: return "tiao";    // �I
        case 2736: return "chao";    // �J
        case 2738: return "tian";    // �K
        case 2740: return "diao";    // �L
        case 2742: return "lou";    // �M
        case 2744: return "liao";    // �N
        case 2746: return "xi";    // �O
        case 2748: return "wu";    // �P
        case 2750: return "kui";    // �Q
        case 2752: return "chuan";    // �R
        case 2754: return "ke";    // �S
        case 2756: return "kuan";    // �T
        case 2758: return "kuan";    // �U
        case 2760: return "cheng";    // �V
        case 2762: return "cui";    // �W
        case 2764: return "liao";    // �X
        case 2766: return "zao";    // �Y
        case 2768: return "cuan";    // �Z
        case 2770: return "qiao";    // �[
        case 2772: return "qiong";    // �\
        case 2774: return "dou";    // �]
        case 2776: return "zao";    // �^
        case 2778: return "long";    // �_
        case 2780: return "qie";    // �`
        case 2782: return "chu";    // �a
        case 2784: return "shi";    // �b
        case 2786: return "fu";    // �c
        case 2788: return "qian";    // �d
        case 2790: return "chu";    // �e
        case 2792: return "hong";    // �f
        case 2794: return "qi";    // �g
        case 2796: return "hao";    // �h
        case 2798: return "sheng";    // �i
        case 2800: return "fen";    // �j
        case 2802: return "miao";    // �k
        case 2804: return "kou";    // �l
        case 2806: return "zhu";    // �m
        case 2808: return "ling";    // �n
        case 2810: return "neng";    // �o
        case 2812: return "bing";    // �p
        case 2814: return "bai";    // �q
        case 2816: return "si";    // �r
        case 2818: return "hong";    // �s
        case 2820: return "jing";    // �t
        case 2822: return "diao";    // �u
        case 2824: return "yi";    // �v
        case 2826: return "shu";    // �w
        case 2828: return "jing";    // �x
        case 2830: return "qu";    // �y
        case 2832: return "ping";    // �z
        case 2834: return "li";    // �{
        case 2836: return "zhuan";    // �|
        case 2838: return "ceng";    // �}
        case 2840: return "deng";    // �~
        case 2842: return "";    // ?
        case 2844: return "cun";    // ��
        case 2846: return "wai";    // ��
        case 2848: return "jing";    // ��
        case 2850: return "kan";    // ��
        case 2852: return "jing";    // ��
        case 2854: return "le";    // ��
        case 2856: return "peng";    // ��
        case 2858: return "chi";    // ��
        case 2860: return "mang";    // ��
        case 2862: return "du";    // ��
        case 2864: return "wan";    // ��
        case 2866: return "jiao";    // ��
        case 2868: return "suan";    // ��
        case 2870: return "qin";    // ��
        case 2872: return "ya";    // ��
        case 2874: return "zhui";    // ��
        case 2876: return "yuan";    // ��
        case 2878: return "hang";    // ��
        case 2880: return "jin";    // ��
        case 2882: return "bi";    // ��
        case 2884: return "yi";    // ��
        case 2886: return "dong";    // ��
        case 2888: return "shan";    // ��
        case 2890: return "da";    // ��
        case 2892: return "zhu";    // ��
        case 2894: return "na";    // ��
        case 2896: return "gu";    // ��
        case 2898: return "qie";    // ��
        case 2900: return "min";    // ��
        case 2902: return "bao";    // ��
        case 2904: return "shan";    // ��
        case 2906: return "pei";    // ��
        case 2908: return "ling";    // ��
        case 2910: return "nu";    // �@
        case 2912: return "fei";    // �A
        case 2914: return "fan";    // �B
        case 2916: return "gan";    // �C
        case 2918: return "fan";    // �D
        case 2920: return "shi";    // �E
        case 2922: return "mao";    // �F
        case 2924: return "xiao";    // �G
        case 2926: return "qiong";    // �H
        case 2928: return "min";    // �I
        case 2930: return "luo";    // �J
        case 2932: return "gui";    // �K
        case 2934: return "qu";    // �L
        case 2936: return "chi";    // �M
        case 2938: return "yin";    // �N
        case 2940: return "yao";    // �O
        case 2942: return "bi";    // �P
        case 2944: return "kuo";    // �Q
        case 2946: return "jiao";    // �R
        case 2948: return "sun";    // �S
        case 2950: return "ru";    // �T
        case 2952: return "ji";    // �U
        case 2954: return "hang";    // �V
        case 2956: return "zhong";    // �W
        case 2958: return "lai";    // �X
        case 2960: return "dang";    // �Y
        case 2962: return "ce";    // �Z
        case 2964: return "fu";    // �[
        case 2966: return "tu";    // �\
        case 2968: return "li";    // �]
        case 2970: return "lang";    // �^
        case 2972: return "ju";    // �_
        case 2974: return "guan";    // �`
        case 2976: return "jian";    // �a
        case 2978: return "han";    // �b
        case 2980: return "yong";    // �c
        case 2982: return "xia";    // �d
        case 2984: return "zhi";    // �e
        case 2986: return "cheng";    // �f
        case 2988: return "suan";    // �g
        case 2990: return "zhu";    // �h
        case 2992: return "zuo";    // �i
        case 2994: return "ting";    // �j
        case 2996: return "jia";    // �k
        case 2998: return "gao";    // �l
        case 3000: return "gan";    // �m
        case 3002: return "kuang";    // �n
        case 3004: return "yun";    // �o
        case 3006: return "o";    // �p
        case 3008: return "xiao";    // �q
        case 3010: return "bu";    // �r
        case 3012: return "lai";    // �s
        case 3014: return "bi";    // �t
        case 3016: return "bi";    // �u
        case 3018: return "bi";    // �v
        case 3020: return "ge";    // �w
        case 3022: return "tai";    // �x
        case 3024: return "dai";    // �y
        case 3026: return "yu";    // �z
        case 3028: return "jian";    // �{
        case 3030: return "dao";    // �|
        case 3032: return "hu";    // �}
        case 3034: return "zheng";    // �~
        case 3036: return "";    // ?
        case 3038: return "zha";    // ��
        case 3040: return "zhou";    // ��
        case 3042: return "lu";    // ��
        case 3044: return "lin";    // ��
        case 3046: return "jun";    // ��
        case 3048: return "fu";    // ��
        case 3050: return "zha";    // ��
        case 3052: return "gu";    // ��
        case 3054: return "qian";    // ��
        case 3056: return "jun";    // ��
        case 3058: return "chui";    // ��
        case 3060: return "ce";    // ��
        case 3062: return "zu";    // ��
        case 3064: return "bo";    // ��
        case 3066: return "xuan";    // ��
        case 3068: return "bian";    // ��
        case 3070: return "sun";    // ��
        case 3072: return "xian";    // ��
        case 3074: return "ping";    // ��
        case 3076: return "xing";    // ��
        case 3078: return "hu";    // ��
        case 3080: return "yi";    // ��
        case 3082: return "yao";    // ��
        case 3084: return "chun";    // ��
        case 3086: return "lu";    // ��
        case 3088: return "wu";    // ��
        case 3090: return "dong";    // ��
        case 3092: return "xiao";    // ��
        case 3094: return "ji";    // ��
        case 3096: return "jie";    // ��
        case 3098: return "xing";    // ��
        case 3100: return "mei";    // ��
        case 3102: return "fan";    // ��
        case 3104: return "duan";    // �@
        case 3106: return "feng";    // �A
        case 3108: return "zhu";    // �B
        case 3110: return "hong";    // �C
        case 3112: return "qie";    // �D
        case 3114: return "qiu";    // �E
        case 3116: return "miao";    // �F
        case 3118: return "qian";    // �G
        case 3120: return "gu";    // �H
        case 3122: return "shi";    // �I
        case 3124: return "yun";    // �J
        case 3126: return "he";    // �K
        case 3128: return "tang";    // �L
        case 3130: return "yue";    // �M
        case 3132: return "chou";    // �N
        case 3134: return "na";    // �O
        case 3136: return "zheng";    // �P
        case 3138: return "nie";    // �Q
        case 3140: return "qian";    // �R
        case 3142: return "xiao";    // �S
        case 3144: return "gan";    // �T
        case 3146: return "pang";    // �U
        case 3148: return "du";    // �V
        case 3150: return "huo";    // �W
        case 3152: return "chu";    // �X
        case 3154: return "shai";    // �Y
        case 3156: return "zhu";    // �Z
        case 3158: return "qiang";    // �[
        case 3160: return "long";    // �\
        case 3162: return "jian";    // �]
        case 3164: return "bu";    // �^
        case 3166: return "hui";    // �_
        case 3168: return "bi";    // �`
        case 3170: return "di";    // �a
        case 3172: return "cong";    // �b
        case 3174: return "yan";    // �c
        case 3176: return "zan";    // �d
        case 3178: return "cuan";    // �e
        case 3180: return "pi";    // �f
        case 3182: return "biao";    // �g
        case 3184: return "yu";    // �h
        case 3186: return "tuan";    // �i
        case 3188: return "zhai";    // �j
        case 3190: return "shai";    // �k
        case 3192: return "guo";    // �l
        case 3194: return "yi";    // �m
        case 3196: return "hu";    // �n
        case 3198: return "chan";    // �o
        case 3200: return "kou";    // �p
        case 3202: return "ping";    // �q
        case 3204: return "zao";    // �r
        case 3206: return "ji";    // �s
        case 3208: return "lou";    // �t
        case 3210: return "ji";    // �u
        case 3212: return "nian";    // �v
        case 3214: return "sui";    // �w
        case 3216: return "cuan";    // �x
        case 3218: return "diao";    // �y
        case 3220: return "suo";    // �z
        case 3222: return "le";    // �{
        case 3224: return "liang";    // �|
        case 3226: return "xiao";    // �}
        case 3228: return "bo";    // �~
        case 3230: return "";    // ?
        case 3232: return "mi";    // ��
        case 3234: return "shai";    // ��
        case 3236: return "dang";    // ��
        case 3238: return "liao";    // ��
        case 3240: return "dan";    // ��
        case 3242: return "fu";    // ��
        case 3244: return "jian";    // ��
        case 3246: return "min";    // ��
        case 3248: return "kui";    // ��
        case 3250: return "dai";    // ��
        case 3252: return "jiao";    // ��
        case 3254: return "zhuan";    // ��
        case 3256: return "lao";    // ��
        case 3258: return "xiao";    // ��
        case 3260: return "lu";    // ��
        case 3262: return "shi";    // ��
        case 3264: return "zan";    // ��
        case 3266: return "qi";    // ��
        case 3268: return "pai";    // ��
        case 3270: return "qi";    // ��
        case 3272: return "pi";    // ��
        case 3274: return "gan";    // ��
        case 3276: return "ju";    // ��
        case 3278: return "lu";    // ��
        case 3280: return "lu";    // ��
        case 3282: return "yan";    // ��
        case 3284: return "dang";    // ��
        case 3286: return "sai";    // ��
        case 3288: return "ke";    // ��
        case 3290: return "gou";    // ��
        case 3292: return "qian";    // ��
        case 3294: return "lian";    // ��
        case 3296: return "shi";    // ��
        case 3298: return "lan";    // �@
        case 3300: return "kui";    // �A
        case 3302: return "yu";    // �B
        case 3304: return "yue";    // �C
        case 3306: return "hao";    // �D
        case 3308: return "jian";    // �E
        case 3310: return "tai";    // �F
        case 3312: return "ti";    // �G
        case 3314: return "mi";    // �H
        case 3316: return "chou";    // �I
        case 3318: return "yi";    // �J
        case 3320: return "qi";    // �K
        case 3322: return "teng";    // �L
        case 3324: return "zhuan";    // �M
        case 3326: return "zhou";    // �N
        case 3328: return "ban";    // �O
        case 3330: return "shu";    // �P
        case 3332: return "zhou";    // �Q
        case 3334: return "qian";    // �R
        case 3336: return "zhuo";    // �S
        case 3338: return "teng";    // �T
        case 3340: return "lu";    // �U
        case 3342: return "lu";    // �V
        case 3344: return "jian";    // �W
        case 3346: return "tuo";    // �X
        case 3348: return "ying";    // �Y
        case 3350: return "yu";    // �Z
        case 3352: return "lai";    // �[
        case 3354: return "long";    // �\
        case 3356: return "qie";    // �]
        case 3358: return "lian";    // �^
        case 3360: return "lan";    // �_
        case 3362: return "qian";    // �`
        case 3364: return "yao";    // �a
        case 3366: return "zhong";    // �b
        case 3368: return "ju";    // �c
        case 3370: return "lian";    // �d
        case 3372: return "bian";    // �e
        case 3374: return "duan";    // �f
        case 3376: return "zuan";    // �g
        case 3378: return "li";    // �h
        case 3380: return "shi";    // �i
        case 3382: return "luo";    // �j
        case 3384: return "ying";    // �k
        case 3386: return "yue";    // �l
        case 3388: return "zhuo";    // �m
        case 3390: return "yu";    // �n
        case 3392: return "fan";    // �o
        case 3394: return "shen";    // �p
        case 3396: return "zhe";    // �q
        case 3398: return "shen";    // �r
        case 3400: return "nu";    // �s
        case 3402: return "he";    // �t
        case 3404: return "ni";    // �u
        case 3406: return "cun";    // �v
        case 3408: return "zhang";    // �w
        case 3410: return "qian";    // �x
        case 3412: return "zhai";    // �y
        case 3414: return "bi";    // �z
        case 3416: return "ban";    // �{
        case 3418: return "wu";    // �|
        case 3420: return "chao";    // �}
        case 3422: return "kang";    // �~
        case 3424: return "";    // ?
        case 3426: return "rou";    // ��
        case 3428: return "bi";    // ��
        case 3430: return "cui";    // ��
        case 3432: return "yin";    // ��
        case 3434: return "zhe";    // ��
        case 3436: return "mi";    // ��
        case 3438: return "tai";    // ��
        case 3440: return "hu";    // ��
        case 3442: return "gan";    // ��
        case 3444: return "ju";    // ��
        case 3446: return "mo";    // ��
        case 3448: return "zhou";    // ��
        case 3450: return "li";    // ��
        case 3452: return "su";    // ��
        case 3454: return "hong";    // ��
        case 3456: return "tong";    // ��
        case 3458: return "ce";    // ��
        case 3460: return "lin";    // ��
        case 3462: return "zhuan";    // ��
        case 3464: return "bai";    // ��
        case 3466: return "lao";    // ��
        case 3468: return "er";    // ��
        case 3470: return "qu";    // ��
        case 3472: return "he";    // ��
        case 3474: return "xian";    // ��
        case 3476: return "fu";    // ��
        case 3478: return "li";    // ��
        case 3480: return "yue";    // ��
        case 3482: return "lu";    // ��
        case 3484: return "ju";    // ��
        case 3486: return "qi";    // ��
        case 3488: return "bai";    // ��
        case 3490: return "zhang";    // ��
        case 3492: return "guo";    // �@
        case 3494: return "hua";    // �A
        case 3496: return "san";    // �B
        case 3498: return "tang";    // �C
        case 3500: return "bian";    // �D
        case 3502: return "mian";    // �E
        case 3504: return "zong";    // �F
        case 3506: return "jian";    // �G
        case 3508: return "li";    // �H
        case 3510: return "xie";    // �I
        case 3512: return "fu";    // �J
        case 3514: return "nuo";    // �K
        case 3516: return "bei";    // �L
        case 3518: return "gu";    // �M
        case 3520: return "xiu";    // �N
        case 3522: return "jia";    // �O
        case 3524: return "zhuan";    // �P
        case 3526: return "tang";    // �Q
        case 3528: return "san";    // �R
        case 3530: return "fen";    // �S
        case 3532: return "jiang";    // �T
        case 3534: return "mo";    // �U
        case 3536: return "san";    // �V
        case 3538: return "san";    // �W
        case 3540: return "nuo";    // �X
        case 3542: return "xi";    // �Y
        case 3544: return "liang";    // �Z
        case 3546: return "kuai";    // �[
        case 3548: return "bo";    // �\
        case 3550: return "huan";    // �]
        case 3552: return "shu";    // �^
        case 3554: return "ji";    // �_
        case 3556: return "han";    // �`
        case 3558: return "tuan";    // �a
        case 3560: return "nie";    // �b
        case 3562: return "li";    // �c
        case 3564: return "zuo";    // �d
        case 3566: return "di";    // �e
        case 3568: return "nie";    // �f
        case 3570: return "tiao";    // �g
        case 3572: return "lan";    // �h
        case 3574: return "si";    // �i
        case 3576: return "jiu";    // �j
        case 3578: return "gong";    // �k
        case 3580: return "zheng";    // �l
        case 3582: return "jiu";    // �m
        case 3584: return "you";    // �n
        case 3586: return "ji";    // �o
        case 3588: return "cha";    // �p
        case 3590: return "zhou";    // �q
        case 3592: return "xun";    // �r
        case 3594: return "yue";    // �s
        case 3596: return "hong";    // �t
        case 3598: return "yu";    // �u
        case 3600: return "ge";    // �v
        case 3602: return "wan";    // �w
        case 3604: return "ren";    // �x
        case 3606: return "wen";    // �y
        case 3608: return "qiu";    // �z
        case 3610: return "na";    // �{
        case 3612: return "zi";    // �|
        case 3614: return "tou";    // �}
        case 3616: return "niu";    // �~
        case 3618: return "";    // ?
        case 3620: return "fou";    // ��
        case 3622: return "ji";    // ��
        case 3624: return "shu";    // ��
        case 3626: return "chun";    // ��
        case 3628: return "pi";    // ��
        case 3630: return "zhen";    // ��
        case 3632: return "sha";    // ��
        case 3634: return "hong";    // ��
        case 3636: return "zhi";    // ��
        case 3638: return "ji";    // ��
        case 3640: return "fen";    // ��
        case 3642: return "yun";    // ��
        case 3644: return "ren";    // ��
        case 3646: return "dan";    // ��
        case 3648: return "jin";    // ��
        case 3650: return "fang";    // ��
        case 3652: return "zu";    // ��
        case 3654: return "jiu";    // ��
        case 3656: return "zha";    // ��
        case 3658: return "ba";    // ��
        case 3660: return "fu";    // ��
        case 3662: return "zhi";    // ��
        case 3664: return "qi";    // ��
        case 3666: return "chou";    // ��
        case 3668: return "hong";    // ��
        case 3670: return "za";    // ��
        case 3672: return "xi";    // ��
        case 3674: return "fu";    // ��
        case 3676: return "yi";    // ��
        case 3678: return "shen";    // ��
        case 3680: return "bo";    // ��
        case 3682: return "zhu";    // ��
        case 3684: return "qu";    // ��
        case 3686: return "ling";    // �@
        case 3688: return "zhu";    // �A
        case 3690: return "shao";    // �B
        case 3692: return "gan";    // �C
        case 3694: return "yang";    // �D
        case 3696: return "fei";    // �E
        case 3698: return "tuo";    // �F
        case 3700: return "tian";    // �G
        case 3702: return "dai";    // �H
        case 3704: return "chu";    // �I
        case 3706: return "shi";    // �J
        case 3708: return "zhong";    // �K
        case 3710: return "xuan";    // �L
        case 3712: return "zu";    // �M
        case 3714: return "jiong";    // �N
        case 3716: return "ban";    // �O
        case 3718: return "qu";    // �P
        case 3720: return "mo";    // �Q
        case 3722: return "shu";    // �R
        case 3724: return "zui";    // �S
        case 3726: return "kuang";    // �T
        case 3728: return "jing";    // �U
        case 3730: return "ren";    // �V
        case 3732: return "hang";    // �W
        case 3734: return "yi";    // �X
        case 3736: return "jie";    // �Y
        case 3738: return "zhu";    // �Z
        case 3740: return "chou";    // �[
        case 3742: return "gua";    // �\
        case 3744: return "bai";    // �]
        case 3746: return "jue";    // �^
        case 3748: return "kuang";    // �_
        case 3750: return "hu";    // �`
        case 3752: return "ci";    // �a
        case 3754: return "geng";    // �b
        case 3756: return "geng";    // �c
        case 3758: return "tao";    // �d
        case 3760: return "jie";    // �e
        case 3762: return "ku";    // �f
        case 3764: return "jiao";    // �g
        case 3766: return "quan";    // �h
        case 3768: return "gai";    // �i
        case 3770: return "luo";    // �j
        case 3772: return "xuan";    // �k
        case 3774: return "beng";    // �l
        case 3776: return "xian";    // �m
        case 3778: return "fu";    // �n
        case 3780: return "gei";    // �o
        case 3782: return "dong";    // �p
        case 3784: return "rong";    // �q
        case 3786: return "diao";    // �r
        case 3788: return "yin";    // �s
        case 3790: return "lei";    // �t
        case 3792: return "xie";    // �u
        case 3794: return "juan";    // �v
        case 3796: return "gai";    // �w
        case 3798: return "die";    // �x
        case 3800: return "tong";    // �y
        case 3802: return "si";    // �z
        case 3804: return "jiang";    // �{
        case 3806: return "xiang";    // �|
        case 3808: return "gui";    // �}
        case 3810: return "jue";    // �~
        case 3812: return "";    // ?
        case 3814: return "jian";    // ��
        case 3816: return "juan";    // ��
        case 3818: return "zhi";    // ��
        case 3820: return "wen";    // ��
        case 3822: return "zhen";    // ��
        case 3824: return "lu";    // ��
        case 3826: return "cheng";    // ��
        case 3828: return "qiu";    // ��
        case 3830: return "shu";    // ��
        case 3832: return "bang";    // ��
        case 3834: return "tong";    // ��
        case 3836: return "xiao";    // ��
        case 3838: return "huan";    // ��
        case 3840: return "qin";    // ��
        case 3842: return "bing";    // ��
        case 3844: return "xiu";    // ��
        case 3846: return "ti";    // ��
        case 3848: return "tou";    // ��
        case 3850: return "xie";    // ��
        case 3852: return "hong";    // ��
        case 3854: return "xi";    // ��
        case 3856: return "fu";    // ��
        case 3858: return "ting";    // ��
        case 3860: return "sui";    // ��
        case 3862: return "dui";    // ��
        case 3864: return "kun";    // ��
        case 3866: return "fu";    // ��
        case 3868: return "jing";    // ��
        case 3870: return "hu";    // ��
        case 3872: return "zhi";    // ��
        case 3874: return "yan";    // ��
        case 3876: return "jiong";    // ��
        case 3878: return "feng";    // ��
        case 3880: return "ji";    // �@
        case 3882: return "xu";    // �A
        case 3884: return "ren";    // �B
        case 3886: return "zong";    // �C
        case 3888: return "chen";    // �D
        case 3890: return "duo";    // �E
        case 3892: return "li";    // �F
        case 3894: return "lu";    // �G
        case 3896: return "liang";    // �H
        case 3898: return "chou";    // �I
        case 3900: return "quan";    // �J
        case 3902: return "chao";    // �K
        case 3904: return "qi";    // �L
        case 3906: return "zhun";    // �M
        case 3908: return "qi";    // �N
        case 3910: return "wan";    // �O
        case 3912: return "qian";    // �P
        case 3914: return "xian";    // �Q
        case 3916: return "shou";    // �R
        case 3918: return "wei";    // �S
        case 3920: return "tao";    // �T
        case 3922: return "wan";    // �U
        case 3924: return "gang";    // �V
        case 3926: return "wang";    // �W
        case 3928: return "beng";    // �X
        case 3930: return "zhui";    // �Y
        case 3932: return "cai";    // �Z
        case 3934: return "guo";    // �[
        case 3936: return "zu";    // �\
        case 3938: return "lun";    // �]
        case 3940: return "liu";    // �^
        case 3942: return "qi";    // �_
        case 3944: return "zhan";    // �`
        case 3946: return "bi";    // �a
        case 3948: return "chao";    // �b
        case 3950: return "ling";    // �c
        case 3952: return "mian";    // �d
        case 3954: return "qi";    // �e
        case 3956: return "qie";    // �f
        case 3958: return "tan";    // �g
        case 3960: return "zong";    // �h
        case 3962: return "gun";    // �i
        case 3964: return "zou";    // �j
        case 3966: return "xi";    // �k
        case 3968: return "zi";    // �l
        case 3970: return "xing";    // �m
        case 3972: return "liang";    // �n
        case 3974: return "jin";    // �o
        case 3976: return "fei";    // �p
        case 3978: return "rui";    // �q
        case 3980: return "min";    // �r
        case 3982: return "yu";    // �s
        case 3984: return "zong";    // �t
        case 3986: return "fan";    // �u
        case 3988: return "lu";    // �v
        case 3990: return "xu";    // �w
        case 3992: return "ying";    // �x
        case 3994: return "shang";    // �y
        case 3996: return "qi";    // �z
        case 3998: return "xu";    // �{
        case 4000: return "xiang";    // �|
        case 4002: return "jian";    // �}
        case 4004: return "ke";    // �~
        case 4006: return "";    // ?
        case 4008: return "xian";    // ��
        case 4010: return "ruan";    // ��
        case 4012: return "mian";    // ��
        case 4014: return "ji";    // ��
        case 4016: return "duan";    // ��
        case 4018: return "zhong";    // ��
        case 4020: return "di";    // ��
        case 4022: return "min";    // ��
        case 4024: return "mao";    // ��
        case 4026: return "yuan";    // ��
        case 4028: return "ye";    // ��
        case 4030: return "bao";    // ��
        case 4032: return "si";    // ��
        case 4034: return "qiu";    // ��
        case 4036: return "bian";    // ��
        case 4038: return "huan";    // ��
        case 4040: return "geng";    // ��
        case 4042: return "zong";    // ��
        case 4044: return "mian";    // ��
        case 4046: return "wei";    // ��
        case 4048: return "fu";    // ��
        case 4050: return "wei";    // ��
        case 4052: return "tou";    // ��
        case 4054: return "gou";    // ��
        case 4056: return "miao";    // ��
        case 4058: return "xie";    // ��
        case 4060: return "lian";    // ��
        case 4062: return "zong";    // ��
        case 4064: return "bian";    // ��
        case 4066: return "yun";    // ��
        case 4068: return "yin";    // ��
        case 4070: return "ti";    // ��
        case 4072: return "gua";    // ��
        case 4074: return "zhi";    // �@
        case 4076: return "wen";    // �A
        case 4078: return "cheng";    // �B
        case 4080: return "chan";    // �C
        case 4082: return "dai";    // �D
        case 4084: return "xia";    // �E
        case 4086: return "yuan";    // �F
        case 4088: return "zong";    // �G
        case 4090: return "xu";    // �H
        case 4092: return "sheng";    // �I
        case 4094: return "wei";    // �J
        case 4096: return "geng";    // �K
        case 4098: return "seon";    // �L
        case 4100: return "ying";    // �M
        case 4102: return "jin";    // �N
        case 4104: return "yi";    // �O
        case 4106: return "zhui";    // �P
        case 4108: return "ni";    // �Q
        case 4110: return "bang";    // �R
        case 4112: return "gu";    // �S
        case 4114: return "pan";    // �T
        case 4116: return "zhou";    // �U
        case 4118: return "jian";    // �V
        case 4120: return "ci";    // �W
        case 4122: return "quan";    // �X
        case 4124: return "shuan";    // �Y
        case 4126: return "wen";    // �Z
        case 4128: return "xia";    // �[
        case 4130: return "shuai";    // �\
        case 4132: return "ji";    // �]
        case 4134: return "rong";    // �^
        case 4136: return "tao";    // �_
        case 4138: return "fu";    // �`
        case 4140: return "yun";    // �a
        case 4142: return "zhen";    // �b
        case 4144: return "gao";    // �c
        case 4146: return "ru";    // �d
        case 4148: return "hu";    // �e
        case 4150: return "zeng";    // �f
        case 4152: return "teng";    // �g
        case 4154: return "xian";    // �h
        case 4156: return "su";    // �i
        case 4158: return "zhen";    // �j
        case 4160: return "zong";    // �k
        case 4162: return "tao";    // �l
        case 4164: return "huang";    // �m
        case 4166: return "cai";    // �n
        case 4168: return "bi";    // �o
        case 4170: return "feng";    // �p
        case 4172: return "cu";    // �q
        case 4174: return "li";    // �r
        case 4176: return "suo";    // �s
        case 4178: return "yin";    // �t
        case 4180: return "xi";    // �u
        case 4182: return "zong";    // �v
        case 4184: return "lei";    // �w
        case 4186: return "juan";    // �x
        case 4188: return "qian";    // �y
        case 4190: return "man";    // �z
        case 4192: return "zhi";    // �{
        case 4194: return "lu";    // �|
        case 4196: return "mo";    // �}
        case 4198: return "piao";    // �~
        case 4200: return "";    // ?
        case 4202: return "lian";    // ��
        case 4204: return "xuan";    // ��
        case 4206: return "zong";    // ��
        case 4208: return "ji";    // ��
        case 4210: return "xian";    // ��
        case 4212: return "cui";    // ��
        case 4214: return "lu";    // ��
        case 4216: return "beng";    // ��
        case 4218: return "yi";    // ��
        case 4220: return "sao";    // ��
        case 4222: return "miu";    // ��
        case 4224: return "qiang";    // ��
        case 4226: return "hun";    // ��
        case 4228: return "xian";    // ��
        case 4230: return "ji";    // ��
        case 4232: return "sha";    // ��
        case 4234: return "xiu";    // ��
        case 4236: return "ran";    // ��
        case 4238: return "xuan";    // ��
        case 4240: return "sui";    // ��
        case 4242: return "jue";    // ��
        case 4244: return "zeng";    // ��
        case 4246: return "zuo";    // ��
        case 4248: return "zhi";    // ��
        case 4250: return "shan";    // ��
        case 4252: return "san";    // ��
        case 4254: return "lin";    // ��
        case 4256: return "yu";    // ��
        case 4258: return "fan";    // ��
        case 4260: return "liao";    // ��
        case 4262: return "chao";    // ��
        case 4264: return "zun";    // ��
        case 4266: return "jian";    // ��
        case 4268: return "rao";    // �@
        case 4270: return "chan";    // �A
        case 4272: return "rui";    // �B
        case 4274: return "xiu";    // �C
        case 4276: return "hui";    // �D
        case 4278: return "hua";    // �E
        case 4280: return "zuan";    // �F
        case 4282: return "xi";    // �G
        case 4284: return "qiang";    // �H
        case 4286: return "yun";    // �I
        case 4288: return "da";    // �J
        case 4290: return "sheng";    // �K
        case 4292: return "hui";    // �L
        case 4294: return "ji";    // �M
        case 4296: return "se";    // �N
        case 4298: return "jian";    // �O
        case 4300: return "jiang";    // �P
        case 4302: return "huan";    // �Q
        case 4304: return "qiao";    // �R
        case 4306: return "cong";    // �S
        case 4308: return "jie";    // �T
        case 4310: return "jiao";    // �U
        case 4312: return "bi";    // �V
        case 4314: return "dan";    // �W
        case 4316: return "yi";    // �X
        case 4318: return "nong";    // �Y
        case 4320: return "sui";    // �Z
        case 4322: return "yi";    // �[
        case 4324: return "sha";    // �\
        case 4326: return "xu";    // �]
        case 4328: return "ji";    // �^
        case 4330: return "bin";    // �_
        case 4332: return "qian";    // �`
        case 4334: return "lan";    // �a
        case 4336: return "pu";    // �b
        case 4338: return "xun";    // �c
        case 4340: return "qi";    // �d
        case 4342: return "peng";    // �e
        case 4344: return "yao";    // �f
        case 4346: return "mo";    // �g
        case 4348: return "lei";    // �h
        case 4350: return "xie";    // �i
        case 4352: return "zuan";    // �j
        case 4354: return "kuang";    // �k
        case 4356: return "you";    // �l
        case 4358: return "xu";    // �m
        case 4360: return "lei";    // �n
        case 4362: return "jian";    // �o
        case 4364: return "chan";    // �p
        case 4366: return "jiao";    // �q
        case 4368: return "lu";    // �r
        case 4370: return "chan";    // �s
        case 4372: return "ying";    // �t
        case 4374: return "shan";    // �u
        case 4376: return "xiang";    // �v
        case 4378: return "xian";    // �w
        case 4380: return "zui";    // �x
        case 4382: return "zuan";    // �y
        case 4384: return "luo";    // �z
        case 4386: return "li";    // �{
        case 4388: return "lan";    // �|
        case 4390: return "lei";    // �}
        case 4392: return "lian";    // �~
        case 4394: return "";    // ?
        case 4396: return "hong";    // ��
        case 4398: return "ren";    // ��
        case 4400: return "zhu";    // ��
        case 4402: return "zhen";    // ��
        case 4404: return "die";    // ��
        case 4406: return "xi";    // ��
        case 4408: return "ying";    // ��
        case 4410: return "tao";    // ��
        case 4412: return "wen";    // ��
        case 4414: return "xian";    // ��
        case 4416: return "shuai";    // ��
        case 4418: return "xie";    // ��
        case 4420: return "fou";    // ��
        case 4422: return "fou";    // ��
        case 4424: return "qi";    // ��
        case 4426: return "bo";    // ��
        case 4428: return "ping";    // ��
        case 4430: return "xiang";    // ��
        case 4432: return "zhao";    // ��
        case 4434: return "gang";    // ��
        case 4436: return "ying";    // ��
        case 4438: return "guan";    // ��
        case 4440: return "zun";    // ��
        case 4442: return "tan";    // ��
        case 4444: return "cang";    // ��
        case 4446: return "qi";    // ��
        case 4448: return "weng";    // ��
        case 4450: return "ying";    // ��
        case 4452: return "lei";    // ��
        case 4454: return "tan";    // ��
        case 4456: return "lu";    // ��
        case 4458: return "si";    // ��
        case 4460: return "gang";    // ��
        case 4462: return "ra";    // �@
        case 4464: return "mi";    // �A
        case 4466: return "gu";    // �B
        case 4468: return "zhu";    // �C
        case 4470: return "ju";    // �D
        case 4472: return "mao";    // �E
        case 4474: return "min";    // �F
        case 4476: return "gua";    // �G
        case 4478: return "ti";    // �H
        case 4480: return "juan";    // �I
        case 4482: return "fu";    // �J
        case 4484: return "shen";    // �K
        case 4486: return "gua";    // �L
        case 4488: return "zhuo";    // �M
        case 4490: return "yu";    // �N
        case 4492: return "an";    // �O
        case 4494: return "fa";    // �P
        case 4496: return "si";    // �Q
        case 4498: return "ma";    // �R
        case 4500: return "liu";    // �S
        case 4502: return "ba";    // �T
        case 4504: return "fa";    // �U
        case 4506: return "chao";    // �V
        case 4508: return "wei";    // �W
        case 4510: return "bi";    // �X
        case 4512: return "ji";    // �Y
        case 4514: return "chong";    // �Z
        case 4516: return "liu";    // �[
        case 4518: return "juan";    // �\
        case 4520: return "mi";    // �]
        case 4522: return "zhao";    // �^
        case 4524: return "luo";    // �_
        case 4526: return "pi";    // �`
        case 4528: return "ji";    // �a
        case 4530: return "ji";    // �b
        case 4532: return "luan";    // �c
        case 4534: return "mi";    // �d
        case 4536: return "da";    // �e
        case 4538: return "yang";    // �f
        case 4540: return "you";    // �g
        case 4542: return "you";    // �h
        case 4544: return "fen";    // �i
        case 4546: return "ba";    // �j
        case 4548: return "yang";    // �k
        case 4550: return "gu";    // �l
        case 4552: return "you";    // �m
        case 4554: return "zang";    // �n
        case 4556: return "mei";    // �o
        case 4558: return "yi";    // �p
        case 4560: return "zhu";    // �q
        case 4562: return "yi";    // �r
        case 4564: return "rong";    // �s
        case 4566: return "qun";    // �t
        case 4568: return "qiang";    // �u
        case 4570: return "huan";    // �v
        case 4572: return "xian";    // �w
        case 4574: return "yi";    // �x
        case 4576: return "yang";    // �y
        case 4578: return "kong";    // �z
        case 4580: return "qian";    // �{
        case 4582: return "yu";    // �|
        case 4584: return "lang";    // �}
        case 4586: return "yuan";    // �~
        case 4588: return "";    // ?
        case 4590: return "fan";    // ��
        case 4592: return "shan";    // ��
        case 4594: return "fen";    // ��
        case 4596: return "shan";    // ��
        case 4598: return "lian";    // ��
        case 4600: return "nou";    // ��
        case 4602: return "qiang";    // ��
        case 4604: return "gong";    // ��
        case 4606: return "chong";    // ��
        case 4608: return "fen";    // ��
        case 4610: return "hong";    // ��
        case 4612: return "chi";    // ��
        case 4614: return "cui";    // ��
        case 4616: return "fu";    // ��
        case 4618: return "xia";    // ��
        case 4620: return "ben";    // ��
        case 4622: return "la";    // ��
        case 4624: return "bi";    // ��
        case 4626: return "liu";    // ��
        case 4628: return "zhi";    // ��
        case 4630: return "yu";    // ��
        case 4632: return "xi";    // ��
        case 4634: return "xie";    // ��
        case 4636: return "xi";    // ��
        case 4638: return "ke";    // ��
        case 4640: return "hui";    // ��
        case 4642: return "hui";    // ��
        case 4644: return "xiao";    // ��
        case 4646: return "sha";    // ��
        case 4648: return "hong";    // ��
        case 4650: return "jiang";    // ��
        case 4652: return "dao";    // ��
        case 4654: return "sha";    // ��
        case 4656: return "chi";    // �@
        case 4658: return "xuan";    // �A
        case 4660: return "chi";    // �B
        case 4662: return "zong";    // �C
        case 4664: return "wan";    // �D
        case 4666: return "hui";    // �E
        case 4668: return "hou";    // �F
        case 4670: return "he";    // �G
        case 4672: return "piao";    // �H
        case 4674: return "lian";    // �I
        case 4676: return "hou";    // �J
        case 4678: return "ao";    // �K
        case 4680: return "lin";    // �L
        case 4682: return "pen";    // �M
        case 4684: return "qiao";    // �N
        case 4686: return "ao";    // �O
        case 4688: return "hui";    // �P
        case 4690: return "xuan";    // �Q
        case 4692: return "dao";    // �R
        case 4694: return "lao";    // �S
        case 4696: return "gou";    // �T
        case 4698: return "gou";    // �U
        case 4700: return "gou";    // �V
        case 4702: return "die";    // �W
        case 4704: return "nuo";    // �X
        case 4706: return "er";    // �Y
        case 4708: return "zhuan";    // �Z
        case 4710: return "ting";    // �[
        case 4712: return "pi";    // �\
        case 4714: return "yi";    // �]
        case 4716: return "qu";    // �^
        case 4718: return "jia";    // �_
        case 4720: return "ju";    // �`
        case 4722: return "chu";    // �a
        case 4724: return "lun";    // �b
        case 4726: return "ji";    // �c
        case 4728: return "zha";    // �d
        case 4730: return "lou";    // �e
        case 4732: return "ji";    // �f
        case 4734: return "lao";    // �g
        case 4736: return "huo";    // �h
        case 4738: return "you";    // �i
        case 4740: return "huai";    // �j
        case 4742: return "yi";    // �k
        case 4744: return "qin";    // �l
        case 4746: return "ying";    // �m
        case 4748: return "dan";    // �n
        case 4750: return "hong";    // �o
        case 4752: return "zhi";    // �p
        case 4754: return "pan";    // �q
        case 4756: return "zhen";    // �r
        case 4758: return "che";    // �s
        case 4760: return "zheng";    // �t
        case 4762: return "you";    // �u
        case 4764: return "wa";    // �v
        case 4766: return "tiao";    // �w
        case 4768: return "er";    // �x
        case 4770: return "ya";    // �y
        case 4772: return "tie";    // �z
        case 4774: return "sei";    // �{
        case 4776: return "hao";    // �|
        case 4778: return "sheng";    // �}
        case 4780: return "lie";    // �~
        case 4782: return "";    // ?
        case 4784: return "jing";    // 
        case 4786: return "bi";    // 
        case 4788: return "di";    // 
        case 4790: return "guo";    // 
        case 4792: return "wen";    // 
        case 4794: return "xu";    // 
        case 4796: return "ping";    // 
        case 4798: return "cong";    // 
        case 4800: return "ding";    // 
        case 4802: return "ni";    // 
        case 4804: return "ting";    // 
        case 4806: return "ju";    // 
        case 4808: return "cong";    // 
        case 4810: return "kui";    // 
        case 4812: return "lian";    // 
        case 4814: return "lian";    // 
        case 4816: return "weng";    // 
        case 4818: return "kui";    // 
        case 4820: return "lian";    // 
        case 4822: return "lian";    // 
        case 4824: return "cong";    // 
        case 4826: return "sheng";    // 
        case 4828: return "song";    // 
        case 4830: return "ting";    // 
        case 4832: return "kui";    // 
        case 4834: return "nie";    // 
        case 4836: return "zhi";    // 
        case 4838: return "dan";    // 
        case 4840: return "ning";    // 
        case 4842: return "qie";    // 
        case 4844: return "ni";    // 
        case 4846: return "ting";    // 
        case 4848: return "ting";    //  
        case 4850: return "long";    // �@
        case 4852: return "zhao";    // �A
        case 4854: return "si";    // �B
        case 4856: return "su";    // �C
        case 4858: return "zhao";    // �D
        case 4860: return "yi";    // �E
        case 4862: return "qiu";    // �F
        case 4864: return "ken";    // �G
        case 4866: return "cao";    // �H
        case 4868: return "ge";    // �I
        case 4870: return "bo";    // �J
        case 4872: return "huan";    // �K
        case 4874: return "chi";    // �L
        case 4876: return "ren";    // �M
        case 4878: return "ru";    // �N
        case 4880: return "yuan";    // �O
        case 4882: return "cha";    // �P
        case 4884: return "han";    // �Q
        case 4886: return "ban";    // �R
        case 4888: return "pei";    // �S
        case 4890: return "pang";    // �T
        case 4892: return "you";    // �U
        case 4894: return "ran";    // �V
        case 4896: return "wen";    // �W
        case 4898: return "qi";    // �X
        case 4900: return "bi";    // �Y
        case 4902: return "bi";    // �Z
        case 4904: return "xi";    // �[
        case 4906: return "ken";    // �\
        case 4908: return "die";    // �]
        case 4910: return "bi";    // �^
        case 4912: return "ba";    // �_
        case 4914: return "bo";    // �`
        case 4916: return "qu";    // �a
        case 4918: return "tian";    // �b
        case 4920: return "fei";    // �c
        case 4922: return "fei";    // �d
        case 4924: return "zhi";    // �e
        case 4926: return "ni";    // �f
        case 4928: return "peng";    // �g
        case 4930: return "zi";    // �h
        case 4932: return "fu";    // �i
        case 4934: return "xian";    // �j
        case 4936: return "mu";    // �k
        case 4938: return "qu";    // �l
        case 4940: return "ke";    // �m
        case 4942: return "chi";    // �n
        case 4944: return "yang";    // �o
        case 4946: return "pang";    // �p
        case 4948: return "zhi";    // �q
        case 4950: return "xiong";    // �r
        case 4952: return "er";    // �s
        case 4954: return "heng";    // �t
        case 4956: return "zi";    // �u
        case 4958: return "gui";    // �v
        case 4960: return "zheng";    // �w
        case 4962: return "tiao";    // �x
        case 4964: return "cui";    // �y
        case 4966: return "mei";    // �z
        case 4968: return "xie";    // �{
        case 4970: return "xian";    // �|
        case 4972: return "mai";    // �}
        case 4974: return "xie";    // �~
        case 4976: return "";    // ?
        case 4978: return "nin";    // À
        case 4980: return "wan";    // Á
        case 4982: return "wen";    // Â
        case 4984: return "xiu";    // Ã
        case 4986: return "jing";    // Ä
        case 4988: return "you";    // Å
        case 4990: return "heng";    // Æ
        case 4992: return "lie";    // Ç
        case 4994: return "chan";    // È
        case 4996: return "ting";    // É
        case 4998: return "mei";    // Ê
        case 5000: return "chun";    // Ë
        case 5002: return "shen";    // Ì
        case 5004: return "jia";    // Í
        case 5006: return "te";    // Î
        case 5008: return "juan";    // Ï
        case 5010: return "ji";    // Ð
        case 5012: return "you";    // Ñ
        case 5014: return "xin";    // Ò
        case 5016: return "tuo";    // Ó
        case 5018: return "cheng";    // Ô
        case 5020: return "tui";    // Õ
        case 5022: return "dou";    // Ö
        case 5024: return "nao";    // ×
        case 5026: return "pi";    // Ø
        case 5028: return "gu";    // Ù
        case 5030: return "li";    // Ú
        case 5032: return "zhang";    // Û
        case 5034: return "cui";    // Ü
        case 5036: return "jie";    // Ý
        case 5038: return "lang";    // Þ
        case 5040: return "shui";    // ß
        case 5042: return "biao";    // à
        case 5044: return "lun";    // �@
        case 5046: return "pian";    // �A
        case 5048: return "lei";    // �B
        case 5050: return "quan";    // �C
        case 5052: return "hou";    // �D
        case 5054: return "dan";    // �E
        case 5056: return "nei";    // �F
        case 5058: return "nai";    // �G
        case 5060: return "dian";    // �H
        case 5062: return "shen";    // �I
        case 5064: return "zhui";    // �J
        case 5066: return "ju";    // �K
        case 5068: return "dong";    // �L
        case 5070: return "pi";    // �M
        case 5072: return "guo";    // �N
        case 5074: return "wo";    // �O
        case 5076: return "mei";    // �P
        case 5078: return "ni";    // �Q
        case 5080: return "dun";    // �R
        case 5082: return "chi";    // �S
        case 5084: return "luo";    // �T
        case 5086: return "ou";    // �U
        case 5088: return "di";    // �V
        case 5090: return "an";    // �W
        case 5092: return "nao";    // �X
        case 5094: return "shuan";    // �Y
        case 5096: return "yun";    // �Z
        case 5098: return "zhong";    // �[
        case 5100: return "rou";    // �\
        case 5102: return "dun";    // �]
        case 5104: return "wei";    // �^
        case 5106: return "jiao";    // �_
        case 5108: return "jia";    // �`
        case 5110: return "duan";    // �a
        case 5112: return "bi";    // �b
        case 5114: return "chang";    // �c
        case 5116: return "qian";    // �d
        case 5118: return "wa";    // �e
        case 5120: return "shou";    // �f
        case 5122: return "tang";    // �g
        case 5124: return "su";    // �h
        case 5126: return "zhui";    // �i
        case 5128: return "yi";    // �j
        case 5130: return "liao";    // �k
        case 5132: return "ji";    // �l
        case 5134: return "pi";    // �m
        case 5136: return "xie";    // �n
        case 5138: return "lu";    // �o
        case 5140: return "ou";    // �p
        case 5142: return "chang";    // �q
        case 5144: return "biao";    // �r
        case 5146: return "guo";    // �s
        case 5148: return "pang";    // �t
        case 5150: return "chuai";    // �u
        case 5152: return "jiang";    // �v
        case 5154: return "fu";    // �w
        case 5156: return "zhuan";    // �x
        case 5158: return "lu";    // �y
        case 5160: return "jiao";    // �z
        case 5162: return "ying";    // �{
        case 5164: return "lou";    // �|
        case 5166: return "xue";    // �}
        case 5168: return "cen";    // �~
        case 5170: return "";    // ?
        case 5172: return "tong";    // Ā
        case 5174: return "ni";    // ā
        case 5176: return "liao";    // Ă
        case 5178: return "cui";    // ă
        case 5180: return "gui";    // Ą
        case 5182: return "xiao";    // ą
        case 5184: return "teng";    // Ć
        case 5186: return "pan";    // ć
        case 5188: return "zhi";    // Ĉ
        case 5190: return "jiao";    // ĉ
        case 5192: return "wu";    // Ċ
        case 5194: return "cui";    // ċ
        case 5196: return "yen";    // Č
        case 5198: return "xiang";    // č
        case 5200: return "wei";    // Ď
        case 5202: return "fen";    // ď
        case 5204: return "zhua";    // Đ
        case 5206: return "dan";    // đ
        case 5208: return "kuai";    // Ē
        case 5210: return "nong";    // ē
        case 5212: return "ju";    // Ĕ
        case 5214: return "chu";    // ĕ
        case 5216: return "juan";    // Ė
        case 5218: return "la";    // ė
        case 5220: return "lian";    // Ę
        case 5222: return "tun";    // ę
        case 5224: return "qi";    // Ě
        case 5226: return "cui";    // ě
        case 5228: return "bin";    // Ĝ
        case 5230: return "xun";    // ĝ
        case 5232: return "nao";    // Ğ
        case 5234: return "qu";    // ğ
        case 5236: return "zang";    // Ġ
        case 5238: return "xian";    // �@
        case 5240: return "biao";    // �A
        case 5242: return "xing";    // �B
        case 5244: return "kun";    // �C
        case 5246: return "la";    // �D
        case 5248: return "yan";    // �E
        case 5250: return "lu";    // �F
        case 5252: return "huo";    // �G
        case 5254: return "za";    // �H
        case 5256: return "luo";    // �I
        case 5258: return "qu";    // �J
        case 5260: return "zang";    // �K
        case 5262: return "luan";    // �L
        case 5264: return "ni";    // �M
        case 5266: return "za";    // �N
        case 5268: return "qian";    // �O
        case 5270: return "wo";    // �P
        case 5272: return "guang";    // �Q
        case 5274: return "lin";    // �R
        case 5276: return "guang";    // �S
        case 5278: return "jiao";    // �T
        case 5280: return "ji";    // �U
        case 5282: return "gao";    // �V
        case 5284: return "xiu";    // �W
        case 5286: return "bian";    // �X
        case 5288: return "nie";    // �Y
        case 5290: return "ge";    // �Z
        case 5292: return "jian";    // �[
        case 5294: return "die";    // �\
        case 5296: return "jin";    // �]
        case 5298: return "xiu";    // �^
        case 5300: return "tai";    // �_
        case 5302: return "xian";    // �`
        case 5304: return "cha";    // �a
        case 5306: return "tuo";    // �b
        case 5308: return "yu";    // �c
        case 5310: return "xing";    // �d
        case 5312: return "ju";    // �e
        case 5314: return "jiu";    // �f
        case 5316: return "xin";    // �g
        case 5318: return "she";    // �h
        case 5320: return "jiu";    // �i
        case 5322: return "tan";    // �j
        case 5324: return "shi";    // �k
        case 5326: return "tan";    // �l
        case 5328: return "pu";    // �m
        case 5330: return "pu";    // �n
        case 5332: return "guan";    // �o
        case 5334: return "hua";    // �p
        case 5336: return "tian";    // �q
        case 5338: return "xia";    // �r
        case 5340: return "dao";    // �s
        case 5342: return "fan";    // �t
        case 5344: return "pa";    // �u
        case 5346: return "tai";    // �v
        case 5348: return "fan";    // �w
        case 5350: return "fan";    // �x
        case 5352: return "lu";    // �y
        case 5354: return "ling";    // �z
        case 5356: return "xia";    // �{
        case 5358: return "hong";    // �|
        case 5360: return "pang";    // �}
        case 5362: return "kua";    // �~
        case 5364: return "";    // ?
        case 5366: return "fu";    // ŀ
        case 5368: return "zao";    // Ł
        case 5370: return "feng";    // ł
        case 5372: return "li";    // Ń
        case 5374: return "yu";    // ń
        case 5376: return "lang";    // Ņ
        case 5378: return "yu";    // ņ
        case 5380: return "bo";    // Ň
        case 5382: return "nian";    // ň
        case 5384: return "ju";    // ŉ
        case 5386: return "huang";    // Ŋ
        case 5388: return "ke";    // ŋ
        case 5390: return "bian";    // Ō
        case 5392: return "mo";    // ō
        case 5394: return "die";    // Ŏ
        case 5396: return "dou";    // ŏ
        case 5398: return "bang";    // Ő
        case 5400: return "cha";    // ő
        case 5402: return "yi";    // Œ
        case 5404: return "cang";    // œ
        case 5406: return "lou";    // Ŕ
        case 5408: return "dai";    // ŕ
        case 5410: return "xue";    // Ŗ
        case 5412: return "yao";    // ŗ
        case 5414: return "deng";    // Ř
        case 5416: return "dang";    // ř
        case 5418: return "qiang";    // Ś
        case 5420: return "lu";    // ś
        case 5422: return "yi";    // Ŝ
        case 5424: return "ji";    // ŝ
        case 5426: return "jian";    // Ş
        case 5428: return "wo";    // ş
        case 5430: return "qi";    // Š
        case 5432: return "lu";    // �@
        case 5434: return "lu";    // �A
        case 5436: return "chan";    // �B
        case 5438: return "shuan";    // �C
        case 5440: return "jian";    // �D
        case 5442: return "ping";    // �E
        case 5444: return "yan";    // �F
        case 5446: return "yan";    // �G
        case 5448: return "cao";    // �H
        case 5450: return "le";    // �I
        case 5452: return "ding";    // �J
        case 5454: return "tiao";    // �K
        case 5456: return "jiao";    // �L
        case 5458: return "peng";    // �M
        case 5460: return "yi";    // �N
        case 5462: return "cha";    // �O
        case 5464: return "mian";    // �P
        case 5466: return "gan";    // �Q
        case 5468: return "yu";    // �R
        case 5470: return "hu";    // �S
        case 5472: return "zi";    // �T
        case 5474: return "hu";    // �U
        case 5476: return "sui";    // �V
        case 5478: return "zhi";    // �W
        case 5480: return "tun";    // �X
        case 5482: return "wei";    // �Y
        case 5484: return "qi";    // �Z
        case 5486: return "wen";    // �[
        case 5488: return "ren";    // �\
        case 5490: return "fou";    // �]
        case 5492: return "xu";    // �^
        case 5494: return "hua";    // �_
        case 5496: return "jue";    // �`
        case 5498: return "ji";    // �a
        case 5500: return "ao";    // �b
        case 5502: return "zou";    // �c
        case 5504: return "mao";    // �d
        case 5506: return "reng";    // �e
        case 5508: return "hang";    // �f
        case 5510: return "yin";    // �g
        case 5512: return "you";    // �h
        case 5514: return "yi";    // �i
        case 5516: return "qie";    // �j
        case 5518: return "pi";    // �k
        case 5520: return "di";    // �l
        case 5522: return "di";    // �m
        case 5524: return "li";    // �n
        case 5526: return "yong";    // �o
        case 5528: return "bei";    // �p
        case 5530: return "yi";    // �q
        case 5532: return "zhu";    // �r
        case 5534: return "ni";    // �s
        case 5536: return "bo";    // �t
        case 5538: return "bing";    // �u
        case 5540: return "xiu";    // �v
        case 5542: return "yao";    // �w
        case 5544: return "xian";    // �x
        case 5546: return "hong";    // �y
        case 5548: return "zha";    // �z
        case 5550: return "dong";    // �{
        case 5552: return "die";    // �|
        case 5554: return "nie";    // �}
        case 5556: return "hu";    // �~
        case 5558: return "";    // ?
        case 5560: return "mei";    // ƀ
        case 5562: return "sheng";    // Ɓ
        case 5564: return "gu";    // Ƃ
        case 5566: return "bi";    // ƃ
        case 5568: return "wei";    // Ƅ
        case 5570: return "bo";    // ƅ
        case 5572: return "zi";    // Ɔ
        case 5574: return "zhi";    // Ƈ
        case 5576: return "ji";    // ƈ
        case 5578: return "cong";    // Ɖ
        case 5580: return "yuan";    // Ɗ
        case 5582: return "xue";    // Ƌ
        case 5584: return "luo";    // ƌ
        case 5586: return "li";    // ƍ
        case 5588: return "rong";    // Ǝ
        case 5590: return "zhi";    // Ə
        case 5592: return "chen";    // Ɛ
        case 5594: return "wei";    // Ƒ
        case 5596: return "hao";    // ƒ
        case 5598: return "zi";    // Ɠ
        case 5600: return "lie";    // Ɣ
        case 5602: return "wu";    // ƕ
        case 5604: return "duo";    // Ɩ
        case 5606: return "gui";    // Ɨ
        case 5608: return "ci";    // Ƙ
        case 5610: return "gou";    // ƙ
        case 5612: return "guang";    // ƚ
        case 5614: return "niao";    // ƛ
        case 5616: return "yu";    // Ɯ
        case 5618: return "zi";    // Ɲ
        case 5620: return "pei";    // ƞ
        case 5622: return "mang";    // Ɵ
        case 5624: return "zhong";    // Ơ
        case 5626: return "qian";    // �@
        case 5628: return "zhu";    // �A
        case 5630: return "huan";    // �B
        case 5632: return "fu";    // �C
        case 5634: return "gai";    // �D
        case 5636: return "da";    // �E
        case 5638: return "chuan";    // �F
        case 5640: return "jing";    // �G
        case 5642: return "er";    // �H
        case 5644: return "an";    // �I
        case 5646: return "qiao";    // �J
        case 5648: return "qi";    // �K
        case 5650: return "peng";    // �L
        case 5652: return "jin";    // �M
        case 5654: return "lao";    // �N
        case 5656: return "shu";    // �O
        case 5658: return "zhuan";    // �P
        case 5660: return "da";    // �Q
        case 5662: return "ce";    // �R
        case 5664: return "yu";    // �S
        case 5666: return "du";    // �T
        case 5668: return "wei";    // �U
        case 5670: return "li";    // �V
        case 5672: return "dou";    // �W
        case 5674: return "fu";    // �X
        case 5676: return "ren";    // �Y
        case 5678: return "yin";    // �Z
        case 5680: return "bu";    // �[
        case 5682: return "yun";    // �\
        case 5684: return "sui";    // �]
        case 5686: return "cheng";    // �^
        case 5688: return "nong";    // �_
        case 5690: return "wu";    // �`
        case 5692: return "bie";    // �a
        case 5694: return "xi";    // �b
        case 5696: return "geng";    // �c
        case 5698: return "zhu";    // �d
        case 5700: return "mo";    // �e
        case 5702: return "zhuan";    // �f
        case 5704: return "ji";    // �g
        case 5706: return "tuo";    // �h
        case 5708: return "qiu";    // �i
        case 5710: return "suo";    // �j
        case 5712: return "chen";    // �k
        case 5714: return "peng";    // �l
        case 5716: return "meng";    // �m
        case 5718: return "xing";    // �n
        case 5720: return "jing";    // �o
        case 5722: return "che";    // �p
        case 5724: return "jun";    // �q
        case 5726: return "yan";    // �r
        case 5728: return "cuo";    // �s
        case 5730: return "han";    // �t
        case 5732: return "cuo";    // �u
        case 5734: return "jia";    // �v
        case 5736: return "wang";    // �w
        case 5738: return "you";    // �x
        case 5740: return "niu";    // �y
        case 5742: return "xiao";    // �z
        case 5744: return "xian";    // �{
        case 5746: return "wan";    // �|
        case 5748: return "jie";    // �}
        case 5750: return "nan";    // �~
        case 5752: return "";    // ?
        case 5754: return "mu";    // ǀ
        case 5756: return "tu";    // ǁ
        case 5758: return "neus";    // ǂ
        case 5760: return "mang";    // ǃ
        case 5762: return "ci";    // Ǆ
        case 5764: return "di";    // ǅ
        case 5766: return "qu";    // ǆ
        case 5768: return "dong";    // Ǉ
        case 5770: return "zou";    // ǈ
        case 5772: return "la";    // ǉ
        case 5774: return "lu";    // Ǌ
        case 5776: return "wei";    // ǋ
        case 5778: return "nie";    // ǌ
        case 5780: return "kun";    // Ǎ
        case 5782: return "pu";    // ǎ
        case 5784: return "zi";    // Ǐ
        case 5786: return "gao";    // ǐ
        case 5788: return "guo";    // Ǒ
        case 5790: return "lun";    // ǒ
        case 5792: return "chou";    // Ǔ
        case 5794: return "chui";    // ǔ
        case 5796: return "zhan";    // Ǖ
        case 5798: return "men";    // ǖ
        case 5800: return "li";    // Ǘ
        case 5802: return "bao";    // ǘ
        case 5804: return "qin";    // Ǚ
        case 5806: return "juan";    // ǚ
        case 5808: return "qin";    // Ǜ
        case 5810: return "di";    // ǜ
        case 5812: return "jie";    // ǝ
        case 5814: return "jin";    // Ǟ
        case 5816: return "qiao";    // ǟ
        case 5818: return "tai";    // Ǡ
        case 5820: return "geng";    // �@
        case 5822: return "hua";    // �A
        case 5824: return "qin";    // �B
        case 5826: return "yan";    // �C
        case 5828: return "wang";    // �D
        case 5830: return "beng";    // �E
        case 5832: return "zhou";    // �F
        case 5834: return "jian";    // �G
        case 5836: return "lin";    // �H
        case 5838: return "tan";    // �I
        case 5840: return "tian";    // �J
        case 5842: return "dao";    // �K
        case 5844: return "hu";    // �L
        case 5846: return "he";    // �M
        case 5848: return "chun";    // �N
        case 5850: return "chang";    // �O
        case 5852: return "huan";    // �P
        case 5854: return "fei";    // �Q
        case 5856: return "lai";    // �R
        case 5858: return "sha";    // �S
        case 5860: return "yan";    // �T
        case 5862: return "yi";    // �U
        case 5864: return "tiao";    // �V
        case 5866: return "ji";    // �W
        case 5868: return "guan";    // �X
        case 5870: return "ce";    // �Y
        case 5872: return "zhen";    // �Z
        case 5874: return "tuo";    // �[
        case 5876: return "jiu";    // �\
        case 5878: return "bi";    // �]
        case 5880: return "yi";    // �^
        case 5882: return "meng";    // �_
        case 5884: return "be";    // �`
        case 5886: return "pao";    // �a
        case 5888: return "ding";    // �b
        case 5890: return "jiao";    // �c
        case 5892: return "ke";    // �d
        case 5894: return "xiang";    // �e
        case 5896: return "wan";    // �f
        case 5898: return "yu";    // �g
        case 5900: return "yu";    // �h
        case 5902: return "fu";    // �i
        case 5904: return "lian";    // �j
        case 5906: return "xuan";    // �k
        case 5908: return "nan";    // �l
        case 5910: return "ce";    // �m
        case 5912: return "wo";    // �n
        case 5914: return "chun";    // �o
        case 5916: return "xiao";    // �p
        case 5918: return "bian";    // �q
        case 5920: return "mao";    // �r
        case 5922: return "an";    // �s
        case 5924: return "ying";    // �t
        case 5926: return "kuo";    // �u
        case 5928: return "kuo";    // �v
        case 5930: return "jiang";    // �w
        case 5932: return "mian";    // �x
        case 5934: return "ze";    // �y
        case 5936: return "zuo";    // �z
        case 5938: return "ju";    // �{
        case 5940: return "rou";    // �|
        case 5942: return "xi";    // �}
        case 5944: return "ye";    // �~
        case 5946: return "";    // ?
        case 5948: return "an";    // Ȁ
        case 5950: return "qu";    // ȁ
        case 5952: return "jian";    // Ȃ
        case 5954: return "fu";    // ȃ
        case 5956: return "lu";    // Ȅ
        case 5958: return "jian";    // ȅ
        case 5960: return "pen";    // Ȇ
        case 5962: return "hong";    // ȇ
        case 5964: return "hong";    // Ȉ
        case 5966: return "hou";    // ȉ
        case 5968: return "yan";    // Ȋ
        case 5970: return "tu";    // ȋ
        case 5972: return "zi";    // Ȍ
        case 5974: return "jing";    // ȍ
        case 5976: return "mi";    // Ȏ
        case 5978: return "huang";    // ȏ
        case 5980: return "shen";    // Ȑ
        case 5982: return "gai";    // ȑ
        case 5984: return "zhou";    // Ȓ
        case 5986: return "jian";    // ȓ
        case 5988: return "wei";    // Ȕ
        case 5990: return "bo";    // ȕ
        case 5992: return "wei";    // Ȗ
        case 5994: return "ji";    // ȗ
        case 5996: return "duan";    // Ș
        case 5998: return "yao";    // ș
        case 6000: return "jun";    // Ț
        case 6002: return "quan";    // ț
        case 6004: return "qian";    // Ȝ
        case 6006: return "hun";    // ȝ
        case 6008: return "shi";    // Ȟ
        case 6010: return "lan";    // ȟ
        case 6012: return "zong";    // Ƞ
        case 6014: return "yao";    // �@
        case 6016: return "yuan";    // �A
        case 6018: return "mei";    // �B
        case 6020: return "yun";    // �C
        case 6022: return "shu";    // �D
        case 6024: return "zhuan";    // �E
        case 6026: return "guan";    // �F
        case 6028: return "ran";    // �G
        case 6030: return "xue";    // �H
        case 6032: return "hua";    // �I
        case 6034: return "wei";    // �J
        case 6036: return "you";    // �K
        case 6038: return "sou";    // �L
        case 6040: return "yin";    // �M
        case 6042: return "shi";    // �N
        case 6044: return "chun";    // �O
        case 6046: return "shi";    // �P
        case 6048: return "yun";    // �Q
        case 6050: return "zhen";    // �R
        case 6052: return "na";    // �S
        case 6054: return "li";    // �T
        case 6056: return "que";    // �U
        case 6058: return "yuan";    // �V
        case 6060: return "li";    // �W
        case 6062: return "ju";    // �X
        case 6064: return "xi";    // �Y
        case 6066: return "chu";    // �Z
        case 6068: return "xu";    // �[
        case 6070: return "tu";    // �\
        case 6072: return "liu";    // �]
        case 6074: return "wo";    // �^
        case 6076: return "dian";    // �_
        case 6078: return "qian";    // �`
        case 6080: return "ju";    // �a
        case 6082: return "po";    // �b
        case 6084: return "cuo";    // �c
        case 6086: return "yuan";    // �d
        case 6088: return "chu";    // �e
        case 6090: return "yu";    // �f
        case 6092: return "pan";    // �g
        case 6094: return "pu";    // �h
        case 6096: return "na";    // �i
        case 6098: return "xi";    // �j
        case 6100: return "fen";    // �k
        case 6102: return "yun";    // �l
        case 6104: return "ruo";    // �m
        case 6106: return "cang";    // �n
        case 6108: return "mi";    // �o
        case 6110: return "sun";    // �p
        case 6112: return "mi";    // �q
        case 6114: return "sou";    // �r
        case 6116: return "liu";    // �s
        case 6118: return "xi";    // �t
        case 6120: return "gu";    // �u
        case 6122: return "lang";    // �v
        case 6124: return "gai";    // �w
        case 6126: return "cuo";    // �x
        case 6128: return "tang";    // �y
        case 6130: return "luo";    // �z
        case 6132: return "xuan";    // �{
        case 6134: return "yao";    // �|
        case 6136: return "gui";    // �}
        case 6138: return "zong";    // �~
        case 6140: return "";    // ?
        case 6142: return "gun";    // ɀ
        case 6144: return "zuo";    // Ɂ
        case 6146: return "tiao";    // ɂ
        case 6148: return "ce";    // Ƀ
        case 6150: return "pei";    // Ʉ
        case 6152: return "dan";    // Ʌ
        case 6154: return "shen";    // Ɇ
        case 6156: return "lang";    // ɇ
        case 6158: return "ling";    // Ɉ
        case 6160: return "you";    // ɉ
        case 6162: return "tiao";    // Ɋ
        case 6164: return "mao";    // ɋ
        case 6166: return "tong";    // Ɍ
        case 6168: return "zhu";    // ɍ
        case 6170: return "an";    // Ɏ
        case 6172: return "lian";    // ɏ
        case 6174: return "zong";    // ɐ
        case 6176: return "ping";    // ɑ
        case 6178: return "ou";    // ɒ
        case 6180: return "jin";    // ɓ
        case 6182: return "tuan";    // ɔ
        case 6184: return "jie";    // ɕ
        case 6186: return "wei";    // ɖ
        case 6188: return "tui";    // ɗ
        case 6190: return "cao";    // ɘ
        case 6192: return "yu";    // ə
        case 6194: return "yi";    // ɚ
        case 6196: return "ju";    // ɛ
        case 6198: return "bi";    // ɜ
        case 6200: return "lu";    // ɝ
        case 6202: return "bu";    // ɞ
        case 6204: return "zhang";    // ɟ
        case 6206: return "lei";    // ɠ
        case 6208: return "jiang";    // �@
        case 6210: return "man";    // �A
        case 6212: return "yan";    // �B
        case 6214: return "ling";    // �C
        case 6216: return "ji";    // �D
        case 6218: return "biao";    // �E
        case 6220: return "gun";    // �F
        case 6222: return "han";    // �G
        case 6224: return "di";    // �H
        case 6226: return "lu";    // �I
        case 6228: return "she";    // �J
        case 6230: return "shang";    // �K
        case 6232: return "di";    // �L
        case 6234: return "hun";    // �M
        case 6236: return "bo";    // �N
        case 6238: return "di";    // �O
        case 6240: return "cu";    // �P
        case 6242: return "shen";    // �Q
        case 6244: return "xuan";    // �R
        case 6246: return "hu";    // �S
        case 6248: return "ao";    // �T
        case 6250: return "mi";    // �U
        case 6252: return "lou";    // �V
        case 6254: return "zhong";    // �W
        case 6256: return "bo";    // �X
        case 6258: return "jiang";    // �Y
        case 6260: return "mi";    // �Z
        case 6262: return "cong";    // �[
        case 6264: return "niao";    // �\
        case 6266: return "hui";    // �]
        case 6268: return "juan";    // �^
        case 6270: return "yin";    // �_
        case 6272: return "jian";    // �`
        case 6274: return "yin";    // �a
        case 6276: return "guo";    // �b
        case 6278: return "chen";    // �c
        case 6280: return "hu";    // �d
        case 6282: return "sha";    // �e
        case 6284: return "kou";    // �f
        case 6286: return "qian";    // �g
        case 6288: return "ma";    // �h
        case 6290: return "zang";    // �i
        case 6292: return "ze";    // �j
        case 6294: return "li";    // �k
        case 6296: return "wei";    // �l
        case 6298: return "ji";    // �m
        case 6300: return "tan";    // �n
        case 6302: return "sheng";    // �o
        case 6304: return "meng";    // �p
        case 6306: return "ou";    // �q
        case 6308: return "chan";    // �r
        case 6310: return "dian";    // �s
        case 6312: return "juan";    // �t
        case 6314: return "lei";    // �u
        case 6316: return "yu";    // �v
        case 6318: return "qiao";    // �w
        case 6320: return "zhu";    // �x
        case 6322: return "hua";    // �y
        case 6324: return "jian";    // �z
        case 6326: return "mai";    // �{
        case 6328: return "yun";    // �|
        case 6330: return "bao";    // �}
        case 6332: return "you";    // �~
        case 6334: return "";    // ?
        case 6336: return "lu";    // ʀ
        case 6338: return "yao";    // ʁ
        case 6340: return "e";    // ʂ
        case 6342: return "ti";    // ʃ
        case 6344: return "fei";    // ʄ
        case 6346: return "jue";    // ʅ
        case 6348: return "fa";    // ʆ
        case 6350: return "ru";    // ʇ
        case 6352: return "fei";    // ʈ
        case 6354: return "kuai";    // ʉ
        case 6356: return "shun";    // ʊ
        case 6358: return "ya";    // ʋ
        case 6360: return "xu";    // ʌ
        case 6362: return "fu";    // ʍ
        case 6364: return "dang";    // ʎ
        case 6366: return "wu";    // ʏ
        case 6368: return "dong";    // ʐ
        case 6370: return "si";    // ʑ
        case 6372: return "xiao";    // ʒ
        case 6374: return "xi";    // ʓ
        case 6376: return "long";    // ʔ
        case 6378: return "wen";    // ʕ
        case 6380: return "shao";    // ʖ
        case 6382: return "jian";    // ʗ
        case 6384: return "sun";    // ʘ
        case 6386: return "ling";    // ʙ
        case 6388: return "yu";    // ʚ
        case 6390: return "xia";    // ʛ
        case 6392: return "si";    // ʜ
        case 6394: return "nong";    // ʝ
        case 6396: return "xuan";    // ʞ
        case 6398: return "wen";    // ʟ
        case 6400: return "yu";    // ʠ
        case 6402: return "xi";    // �@
        case 6404: return "hao";    // �A
        case 6406: return "ai";    // �B
        case 6408: return "hui";    // �C
        case 6410: return "hui";    // �D
        case 6412: return "ji";    // �E
        case 6414: return "zi";    // �F
        case 6416: return "xiang";    // �G
        case 6418: return "wan";    // �H
        case 6420: return "mie";    // �I
        case 6422: return "leng";    // �J
        case 6424: return "jiang";    // �K
        case 6426: return "can";    // �L
        case 6428: return "shen";    // �M
        case 6430: return "qiang";    // �N
        case 6432: return "lian";    // �O
        case 6434: return "ke";    // �P
        case 6436: return "yuan";    // �Q
        case 6438: return "da";    // �R
        case 6440: return "ti";    // �S
        case 6442: return "tang";    // �T
        case 6444: return "zhan";    // �U
        case 6446: return "sun";    // �V
        case 6448: return "lian";    // �W
        case 6450: return "fan";    // �X
        case 6452: return "ding";    // �Y
        case 6454: return "xie";    // �Z
        case 6456: return "gu";    // �[
        case 6458: return "zhu";    // �\
        case 6460: return "jian";    // �]
        case 6462: return "kao";    // �^
        case 6464: return "sa";    // �_
        case 6466: return "xun";    // �`
        case 6468: return "yao";    // �a
        case 6470: return "bai";    // �b
        case 6472: return "dui";    // �c
        case 6474: return "pin";    // �d
        case 6476: return "wei";    // �e
        case 6478: return "ning";    // �f
        case 6480: return "zhou";    // �g
        case 6482: return "wo";    // �h
        case 6484: return "piao";    // �i
        case 6486: return "qi";    // �j
        case 6488: return "zao";    // �k
        case 6490: return "chen";    // �l
        case 6492: return "zhen";    // �m
        case 6494: return "er";    // �n
        case 6496: return "ni";    // �o
        case 6498: return "ying";    // �p
        case 6500: return "cong";    // �q
        case 6502: return "hao";    // �r
        case 6504: return "qi";    // �s
        case 6506: return "fa";    // �t
        case 6508: return "jian";    // �u
        case 6510: return "yu";    // �v
        case 6512: return "kui";    // �w
        case 6514: return "bian";    // �x
        case 6516: return "di";    // �y
        case 6518: return "mi";    // �z
        case 6520: return "lan";    // �{
        case 6522: return "jin";    // �|
        case 6524: return "qiong";    // �}
        case 6526: return "qie";    // �~
        case 6528: return "";    // ?
        case 6530: return "liao";    // ˀ
        case 6532: return "qian";    // ˁ
        case 6534: return "su";    // ˂
        case 6536: return "lu";    // ˃
        case 6538: return "yi";    // ˄
        case 6540: return "xu";    // ˅
        case 6542: return "xie";    // ˆ
        case 6544: return "yi";    // ˇ
        case 6546: return "la";    // ˈ
        case 6548: return "lei";    // ˉ
        case 6550: return "jiao";    // ˊ
        case 6552: return "di";    // ˋ
        case 6554: return "zhi";    // ˌ
        case 6556: return "bei";    // ˍ
        case 6558: return "yao";    // ˎ
        case 6560: return "mo";    // ˏ
        case 6562: return "huan";    // ː
        case 6564: return "biao";    // ˑ
        case 6566: return "sou";    // ˒
        case 6568: return "tan";    // ˓
        case 6570: return "tui";    // ˔
        case 6572: return "qiong";    // ˕
        case 6574: return "qiao";    // ˖
        case 6576: return "wei";    // ˗
        case 6578: return "liu";    // ˘
        case 6580: return "hui";    // ˙
        case 6582: return "ou";    // ˚
        case 6584: return "gao";    // ˛
        case 6586: return "wen";    // ˜
        case 6588: return "bao";    // ˝
        case 6590: return "li";    // ˞
        case 6592: return "zhu";    // ˟
        case 6594: return "zha";    // ˠ
        case 6596: return "ai";    // �@
        case 6598: return "lin";    // �A
        case 6600: return "xuan";    // �B
        case 6602: return "qin";    // �C
        case 6604: return "lai";    // �D
        case 6606: return "tuo";    // �E
        case 6608: return "e";    // �F
        case 6610: return "rui";    // �G
        case 6612: return "rui";    // �H
        case 6614: return "qi";    // �I
        case 6616: return "lu";    // �J
        case 6618: return "su";    // �K
        case 6620: return "tui";    // �L
        case 6622: return "mang";    // �M
        case 6624: return "yun";    // �N
        case 6626: return "pin";    // �O
        case 6628: return "yu";    // �P
        case 6630: return "xun";    // �Q
        case 6632: return "ji";    // �R
        case 6634: return "jiong";    // �S
        case 6636: return "xuan";    // �T
        case 6638: return "qiu";    // �U
        case 6640: return "su";    // �V
        case 6642: return "jiong";    // �W
        case 6644: return "feng";    // �X
        case 6646: return "bo";    // �Y
        case 6648: return "xiang";    // �Z
        case 6650: return "yi";    // �[
        case 6652: return "xian";    // �\
        case 6654: return "yu";    // �]
        case 6656: return "ju";    // �^
        case 6658: return "lian";    // �_
        case 6660: return "lian";    // �`
        case 6662: return "yin";    // �a
        case 6664: return "qiang";    // �b
        case 6666: return "ying";    // �c
        case 6668: return "long";    // �d
        case 6670: return "tou";    // �e
        case 6672: return "hua";    // �f
        case 6674: return "yue";    // �g
        case 6676: return "ling";    // �h
        case 6678: return "yao";    // �i
        case 6680: return "mei";    // �j
        case 6682: return "lan";    // �k
        case 6684: return "kui";    // �l
        case 6686: return "lan";    // �m
        case 6688: return "ji";    // �n
        case 6690: return "dang";    // �o
        case 6692: return "man";    // �p
        case 6694: return "lei";    // �q
        case 6696: return "lei";    // �r
        case 6698: return "hua";    // �s
        case 6700: return "feng";    // �t
        case 6702: return "zhi";    // �u
        case 6704: return "wei";    // �v
        case 6706: return "kui";    // �w
        case 6708: return "huai";    // �x
        case 6710: return "li";    // �y
        case 6712: return "ji";    // �z
        case 6714: return "lei";    // �{
        case 6716: return "huai";    // �|
        case 6718: return "luo";    // �}
        case 6720: return "ji";    // �~
        case 6722: return "";    // ?
        case 6724: return "kui";    // ̀
        case 6726: return "lu";    // ́
        case 6728: return "jian";    // ̂
        case 6730: return "sal";    // ̃
        case 6732: return "teng";    // ̄
        case 6734: return "lei";    // ̅
        case 6736: return "quan";    // ̆
        case 6738: return "xiao";    // ̇
        case 6740: return "yi";    // ̈
        case 6742: return "luan";    // ̉
        case 6744: return "men";    // ̊
        case 6746: return "bie";    // ̋
        case 6748: return "ti";    // ̌
        case 6750: return "xiao";    // ̍
        case 6752: return "chu";    // ̎
        case 6754: return "hu";    // ̏
        case 6756: return "xu";    // ̐
        case 6758: return "cuo";    // ̑
        case 6760: return "fu";    // ̒
        case 6762: return "xu";    // ̓
        case 6764: return "lu";    // ̔
        case 6766: return "hu";    // ̕
        case 6768: return "hao";    // ̖
        case 6770: return "hao";    // ̗
        case 6772: return "ju";    // ̘
        case 6774: return "bao";    // ̙
        case 6776: return "yan";    // ̚
        case 6778: return "zhan";    // ̛
        case 6780: return "zhan";    // ̜
        case 6782: return "kui";    // ̝
        case 6784: return "bin";    // ̞
        case 6786: return "xi";    // ̟
        case 6788: return "shu";    // ̠
        case 6790: return "dao";    // �@
        case 6792: return "qiu";    // �A
        case 6794: return "ding";    // �B
        case 6796: return "xia";    // �C
        case 6798: return "jue";    // �D
        case 6800: return "zhe";    // �E
        case 6802: return "ye";    // �F
        case 6804: return "yu";    // �G
        case 6806: return "gan";    // �H
        case 6808: return "zi";    // �I
        case 6810: return "xiang";    // �J
        case 6812: return "bang";    // �K
        case 6814: return "e";    // �L
        case 6816: return "ba";    // �M
        case 6818: return "chi";    // �N
        case 6820: return "qian";    // �O
        case 6822: return "wen";    // �P
        case 6824: return "yue";    // �Q
        case 6826: return "yue";    // �R
        case 6828: return "jun";    // �S
        case 6830: return "qi";    // �T
        case 6832: return "tong";    // �U
        case 6834: return "qi";    // �V
        case 6836: return "wan";    // �W
        case 6838: return "jue";    // �X
        case 6840: return "you";    // �Y
        case 6842: return "qian";    // �Z
        case 6844: return "qi";    // �[
        case 6846: return "zhong";    // �\
        case 6848: return "mu";    // �]
        case 6850: return "wang";    // �^
        case 6852: return "fen";    // �_
        case 6854: return "fen";    // �`
        case 6856: return "hang";    // �a
        case 6858: return "fu";    // �b
        case 6860: return "ran";    // �c
        case 6862: return "bao";    // �d
        case 6864: return "ni";    // �e
        case 6866: return "dai";    // �f
        case 6868: return "ping";    // �g
        case 6870: return "chi";    // �h
        case 6872: return "ju";    // �i
        case 6874: return "li";    // �j
        case 6876: return "fu";    // �k
        case 6878: return "zha";    // �l
        case 6880: return "gou";    // �m
        case 6882: return "pi";    // �n
        case 6884: return "bo";    // �o
        case 6886: return "xian";    // �p
        case 6888: return "diao";    // �q
        case 6890: return "bie";    // �r
        case 6892: return "bing";    // �s
        case 6894: return "zhan";    // �t
        case 6896: return "tie";    // �u
        case 6898: return "gu";    // �v
        case 6900: return "ying";    // �w
        case 6902: return "luo";    // �x
        case 6904: return "ci";    // �y
        case 6906: return "hui";    // �z
        case 6908: return "bang";    // �{
        case 6910: return "fu";    // �|
        case 6912: return "lie";    // �}
        case 6914: return "yi";    // �~
        case 6916: return "";    // ?
        case 6918: return "xian";    // ̀
        case 6920: return "li";    // ́
        case 6922: return "yi";    // ͂
        case 6924: return "ping";    // ̓
        case 6926: return "jie";    // ̈́
        case 6928: return "she";    // ͅ
        case 6930: return "yi";    // ͆
        case 6932: return "wang";    // ͇
        case 6934: return "mo";    // ͈
        case 6936: return "ni";    // ͉
        case 6938: return "gui";    // ͊
        case 6940: return "qiong";    // ͋
        case 6942: return "lao";    // ͌
        case 6944: return "xing";    // ͍
        case 6946: return "jie";    // ͎
        case 6948: return "qiu";    // ͏
        case 6950: return "jia";    // ͐
        case 6952: return "tui";    // ͑
        case 6954: return "che";    // ͒
        case 6956: return "bei";    // ͓
        case 6958: return "han";    // ͔
        case 6960: return "xuan";    // ͕
        case 6962: return "zhen";    // ͖
        case 6964: return "pu";    // ͗
        case 6966: return "xian";    // ͘
        case 6968: return "lang";    // ͙
        case 6970: return "bi";    // ͚
        case 6972: return "yuan";    // ͛
        case 6974: return "you";    // ͜
        case 6976: return "jie";    // ͝
        case 6978: return "dan";    // ͞
        case 6980: return "dian";    // ͟
        case 6982: return "hui";    // ͠
        case 6984: return "song";    // �@
        case 6986: return "ju";    // �A
        case 6988: return "qi";    // �B
        case 6990: return "yu";    // �C
        case 6992: return "jun";    // �D
        case 6994: return "xi";    // �E
        case 6996: return "lun";    // �F
        case 6998: return "li";    // �G
        case 7000: return "die";    // �H
        case 7002: return "tao";    // �I
        case 7004: return "kun";    // �J
        case 7006: return "han";    // �K
        case 7008: return "han";    // �L
        case 7010: return "bang";    // �M
        case 7012: return "fei";    // �N
        case 7014: return "wei";    // �O
        case 7016: return "dun";    // �P
        case 7018: return "yuan";    // �Q
        case 7020: return "suo";    // �R
        case 7022: return "qian";    // �S
        case 7024: return "wei";    // �T
        case 7026: return "ni";    // �U
        case 7028: return "wei";    // �V
        case 7030: return "liang";    // �W
        case 7032: return "dong";    // �X
        case 7034: return "e";    // �Y
        case 7036: return "ban";    // �Z
        case 7038: return "di";    // �[
        case 7040: return "wang";    // �\
        case 7042: return "can";    // �]
        case 7044: return "mi";    // �^
        case 7046: return "ding";    // �_
        case 7048: return "la";    // �`
        case 7050: return "ji";    // �a
        case 7052: return "ting";    // �b
        case 7054: return "mao";    // �c
        case 7056: return "xie";    // �d
        case 7058: return "mian";    // �e
        case 7060: return "jie";    // �f
        case 7062: return "shi";    // �g
        case 7064: return "xuan";    // �h
        case 7066: return "yan";    // �i
        case 7068: return "nao";    // �j
        case 7070: return "wei";    // �k
        case 7072: return "fu";    // �l
        case 7074: return "yuan";    // �m
        case 7076: return "mei";    // �n
        case 7078: return "wei";    // �o
        case 7080: return "ruan";    // �p
        case 7082: return "xie";    // �q
        case 7084: return "xia";    // �r
        case 7086: return "ying";    // �s
        case 7088: return "shi";    // �t
        case 7090: return "zhong";    // �u
        case 7092: return "tang";    // �v
        case 7094: return "zhu";    // �w
        case 7096: return "zong";    // �x
        case 7098: return "ti";    // �y
        case 7100: return "yuan";    // �z
        case 7102: return "meng";    // �{
        case 7104: return "la";    // �|
        case 7106: return "dai";    // �}
        case 7108: return "qiu";    // �~
        case 7110: return "";    // ?
        case 7112: return "li";    // ΀
        case 7114: return "wo";    // ΁
        case 7116: return "ao";    // ΂
        case 7118: return "yu";    // ΃
        case 7120: return "ying";    // ΄
        case 7122: return "jiang";    // ΅
        case 7124: return "ban";    // Ά
        case 7126: return "si";    // ·
        case 7128: return "ci";    // Έ
        case 7130: return "qi";    // Ή
        case 7132: return "weng";    // Ί
        case 7134: return "lian";    // ΋
        case 7136: return "ban";    // Ό
        case 7138: return "rong";    // ΍
        case 7140: return "ji";    // Ύ
        case 7142: return "wu";    // Ώ
        case 7144: return "xiu";    // ΐ
        case 7146: return "han";    // Α
        case 7148: return "yi";    // Β
        case 7150: return "bi";    // Γ
        case 7152: return "hua";    // Δ
        case 7154: return "yi";    // Ε
        case 7156: return "du";    // Ζ
        case 7158: return "nai";    // Η
        case 7160: return "he";    // Θ
        case 7162: return "hu";    // Ι
        case 7164: return "gui";    // Κ
        case 7166: return "ma";    // Λ
        case 7168: return "yi";    // Μ
        case 7170: return "wen";    // Ν
        case 7172: return "ying";    // Ξ
        case 7174: return "te";    // Ο
        case 7176: return "zhong";    // Π
        case 7178: return "cang";    // �@
        case 7180: return "so";    // �A
        case 7182: return "qi";    // �B
        case 7184: return "tiao";    // �C
        case 7186: return "shang";    // �D
        case 7188: return "dai";    // �E
        case 7190: return "lu";    // �F
        case 7192: return "wei";    // �G
        case 7194: return "die";    // �H
        case 7196: return "chen";    // �I
        case 7198: return "ju";    // �J
        case 7200: return "pi";    // �K
        case 7202: return "yu";    // �L
        case 7204: return "jian";    // �M
        case 7206: return "lou";    // �N
        case 7208: return "qin";    // �O
        case 7210: return "yin";    // �P
        case 7212: return "jiang";    // �Q
        case 7214: return "wen";    // �R
        case 7216: return "xiao";    // �S
        case 7218: return "man";    // �T
        case 7220: return "zhe";    // �U
        case 7222: return "zhe";    // �V
        case 7224: return "ma";    // �W
        case 7226: return "yu";    // �X
        case 7228: return "liao";    // �Y
        case 7230: return "cong";    // �Z
        case 7232: return "li";    // �[
        case 7234: return "man";    // �\
        case 7236: return "xiao";    // �]
        case 7238: return "chang";    // �^
        case 7240: return "mo";    // �_
        case 7242: return "zui";    // �`
        case 7244: return "si";    // �a
        case 7246: return "qiu";    // �b
        case 7248: return "te";    // �c
        case 7250: return "zhi";    // �d
        case 7252: return "peng";    // �e
        case 7254: return "jiao";    // �f
        case 7256: return "qu";    // �g
        case 7258: return "bie";    // �h
        case 7260: return "liao";    // �i
        case 7262: return "gui";    // �j
        case 7264: return "xi";    // �k
        case 7266: return "ji";    // �l
        case 7268: return "zhuan";    // �m
        case 7270: return "fei";    // �n
        case 7272: return "lao";    // �o
        case 7274: return "jue";    // �p
        case 7276: return "jue";    // �q
        case 7278: return "yin";    // �r
        case 7280: return "chan";    // �s
        case 7282: return "jiao";    // �t
        case 7284: return "nao";    // �u
        case 7286: return "xiao";    // �v
        case 7288: return "wu";    // �w
        case 7290: return "chong";    // �x
        case 7292: return "xun";    // �y
        case 7294: return "si";    // �z
        case 7296: return "chu";    // �{
        case 7298: return "cheng";    // �|
        case 7300: return "dang";    // �}
        case 7302: return "li";    // �~
        case 7304: return "";    // ?
        case 7306: return "dan";    // π
        case 7308: return "yi";    // ρ
        case 7310: return "jing";    // ς
        case 7312: return "da";    // σ
        case 7314: return "ji";    // τ
        case 7316: return "ji";    // υ
        case 7318: return "xiang";    // φ
        case 7320: return "she";    // χ
        case 7322: return "qin";    // ψ
        case 7324: return "ying";    // ω
        case 7326: return "chai";    // ϊ
        case 7328: return "li";    // ϋ
        case 7330: return "zei";    // ό
        case 7332: return "xuan";    // ύ
        case 7334: return "zhu";    // ώ
        case 7336: return "ze";    // Ϗ
        case 7338: return "xie";    // ϐ
        case 7340: return "mang";    // ϑ
        case 7342: return "xie";    // ϒ
        case 7344: return "qi";    // ϓ
        case 7346: return "rong";    // ϔ
        case 7348: return "jian";    // ϕ
        case 7350: return "hao";    // ϖ
        case 7352: return "zhuo";    // ϗ
        case 7354: return "jie";    // Ϙ
        case 7356: return "bin";    // ϙ
        case 7358: return "he";    // Ϛ
        case 7360: return "fan";    // ϛ
        case 7362: return "lei";    // Ϝ
        case 7364: return "jie";    // ϝ
        case 7366: return "la";    // Ϟ
        case 7368: return "mian";    // ϟ
        case 7370: return "li";    // Ϡ
        case 7372: return "qiu";    // �@
        case 7374: return "nie";    // �A
        case 7376: return "lu";    // �B
        case 7378: return "du";    // �C
        case 7380: return "xiao";    // �D
        case 7382: return "zhu";    // �E
        case 7384: return "long";    // �F
        case 7386: return "li";    // �G
        case 7388: return "long";    // �H
        case 7390: return "pang";    // �I
        case 7392: return "ye";    // �J
        case 7394: return "pi";    // �K
        case 7396: return "nang";    // �L
        case 7398: return "ye";    // �M
        case 7400: return "ying";    // �N
        case 7402: return "shu";    // �O
        case 7404: return "xi";    // �P
        case 7406: return "can";    // �Q
        case 7408: return "qu";    // �R
        case 7410: return "huan";    // �S
        case 7412: return "can";    // �T
        case 7414: return "man";    // �U
        case 7416: return "jie";    // �V
        case 7418: return "zhu";    // �W
        case 7420: return "zhuo";    // �X
        case 7422: return "huang";    // �Y
        case 7424: return "nu";    // �Z
        case 7426: return "pei";    // �[
        case 7428: return "zhong";    // �\
        case 7430: return "mai";    // �]
        case 7432: return "er";    // �^
        case 7434: return "ka";    // �_
        case 7436: return "mie";    // �`
        case 7438: return "xi";    // �a
        case 7440: return "kan";    // �b
        case 7442: return "yuan";    // �c
        case 7444: return "qu";    // �d
        case 7446: return "ling";    // �e
        case 7448: return "xuan";    // �f
        case 7450: return "shu";    // �g
        case 7452: return "dong";    // �h
        case 7454: return "long";    // �i
        case 7456: return "yu";    // �j
        case 7458: return "hu";    // �k
        case 7460: return "wei";    // �l
        case 7462: return "dao";    // �m
        case 7464: return "chong";    // �n
        case 7466: return "wei";    // �o
        case 7468: return "dao";    // �p
        case 7470: return "zhun";    // �q
        case 7472: return "gan";    // �r
        case 7474: return "yu";    // �s
        case 7476: return "yi";    // �t
        case 7478: return "fu";    // �u
        case 7480: return "pen";    // �v
        case 7482: return "jie";    // �w
        case 7484: return "zhong";    // �x
        case 7486: return "dan";    // �y
        case 7488: return "yi";    // �z
        case 7490: return "zhong";    // �{
        case 7492: return "jie";    // �|
        case 7494: return "ti";    // �}
        case 7496: return "xie";    // �~
        case 7498: return "";    // ?
        case 7500: return "ran";    // Ѐ
        case 7502: return "zhi";    // Ё
        case 7504: return "jun";    // Ђ
        case 7506: return "chai";    // Ѓ
        case 7508: return "yi";    // Є
        case 7510: return "ran";    // Ѕ
        case 7512: return "tuo";    // І
        case 7514: return "ling";    // Ї
        case 7516: return "bao";    // Ј
        case 7518: return "yao";    // Љ
        case 7520: return "zuo";    // Њ
        case 7522: return "bi";    // Ћ
        case 7524: return "shao";    // Ќ
        case 7526: return "jie";    // Ѝ
        case 7528: return "ke";    // Ў
        case 7530: return "xue";    // Џ
        case 7532: return "zhen";    // А
        case 7534: return "yi";    // Б
        case 7536: return "pa";    // В
        case 7538: return "bo";    // Г
        case 7540: return "di";    // Д
        case 7542: return "fu";    // Е
        case 7544: return "gun";    // Ж
        case 7546: return "zhi";    // З
        case 7548: return "zhi";    // И
        case 7550: return "ran";    // Й
        case 7552: return "yi";    // К
        case 7554: return "tuo";    // Л
        case 7556: return "na";    // М
        case 7558: return "gou";    // Н
        case 7560: return "xuan";    // О
        case 7562: return "zhe";    // П
        case 7564: return "qu";    // Р
        case 7566: return "yu";    // �@
        case 7568: return "mi";    // �A
        case 7570: return "bo";    // �B
        case 7572: return "bo";    // �C
        case 7574: return "nuo";    // �D
        case 7576: return "qi";    // �E
        case 7578: return "ku";    // �F
        case 7580: return "ren";    // �G
        case 7582: return "jiang";    // �H
        case 7584: return "jian";    // �I
        case 7586: return "bo";    // �J
        case 7588: return "jie";    // �K
        case 7590: return "er";    // �L
        case 7592: return "ru";    // �M
        case 7594: return "zhu";    // �N
        case 7596: return "gui";    // �O
        case 7598: return "yin";    // �P
        case 7600: return "ka";    // �Q
        case 7602: return "xing";    // �R
        case 7604: return "sed";    // �S
        case 7606: return "kun";    // �T
        case 7608: return "niao";    // �U
        case 7610: return "shu";    // �V
        case 7612: return "jia";    // �W
        case 7614: return "kun";    // �X
        case 7616: return "li";    // �Y
        case 7618: return "juan";    // �Z
        case 7620: return "shen";    // �[
        case 7622: return "ge";    // �\
        case 7624: return "zhen";    // �]
        case 7626: return "liu";    // �^
        case 7628: return "ji";    // �_
        case 7630: return "yi";    // �`
        case 7632: return "bu";    // �a
        case 7634: return "zhuan";    // �b
        case 7636: return "shui";    // �c
        case 7638: return "qun";    // �d
        case 7640: return "li";    // �e
        case 7642: return "bao";    // �f
        case 7644: return "chan";    // �g
        case 7646: return "kun";    // �h
        case 7648: return "tao";    // �i
        case 7650: return "yuan";    // �j
        case 7652: return "ling";    // �k
        case 7654: return "chi";    // �l
        case 7656: return "chang";    // �m
        case 7658: return "dao";    // �n
        case 7660: return "liang";    // �o
        case 7662: return "pei";    // �p
        case 7664: return "fei";    // �q
        case 7666: return "yuan";    // �r
        case 7668: return "yan";    // �s
        case 7670: return "du";    // �t
        case 7672: return "zhi";    // �u
        case 7674: return "yi";    // �v
        case 7676: return "ji";    // �w
        case 7678: return "guo";    // �x
        case 7680: return "ken";    // �y
        case 7682: return "qi";    // �z
        case 7684: return "ti";    // �{
        case 7686: return "ti";    // �|
        case 7688: return "fu";    // �}
        case 7690: return "chong";    // �~
        case 7692: return "";    // ?
        case 7694: return "xie";    // р
        case 7696: return "die";    // с
        case 7698: return "kun";    // т
        case 7700: return "duan";    // у
        case 7702: return "you";    // ф
        case 7704: return "you";    // х
        case 7706: return "yuan";    // ц
        case 7708: return "fu";    // ч
        case 7710: return "yu";    // ш
        case 7712: return "tuan";    // щ
        case 7714: return "yan";    // ъ
        case 7716: return "yi";    // ы
        case 7718: return "pao";    // ь
        case 7720: return "dan";    // э
        case 7722: return "wen";    // ю
        case 7724: return "ta";    // я
        case 7726: return "gou";    // ѐ
        case 7728: return "huai";    // ё
        case 7730: return "rong";    // ђ
        case 7732: return "yuan";    // ѓ
        case 7734: return "nai";    // є
        case 7736: return "jiong";    // ѕ
        case 7738: return "cha";    // і
        case 7740: return "ban";    // ї
        case 7742: return "sang";    // ј
        case 7744: return "niao";    // љ
        case 7746: return "ying";    // њ
        case 7748: return "jie";    // ћ
        case 7750: return "huai";    // ќ
        case 7752: return "ku";    // ѝ
        case 7754: return "lian";    // ў
        case 7756: return "li";    // џ
        case 7758: return "shi";    // Ѡ
        case 7760: return "lu";    // �@
        case 7762: return "yi";    // �A
        case 7764: return "die";    // �B
        case 7766: return "xie";    // �C
        case 7768: return "xian";    // �D
        case 7770: return "wei";    // �E
        case 7772: return "biao";    // �F
        case 7774: return "cao";    // �G
        case 7776: return "ji";    // �H
        case 7778: return "shan";    // �I
        case 7780: return "bao";    // �J
        case 7782: return "bi";    // �K
        case 7784: return "pu";    // �L
        case 7786: return "jian";    // �M
        case 7788: return "juan";    // �N
        case 7790: return "jian";    // �O
        case 7792: return "cuo";    // �P
        case 7794: return "ji";    // �Q
        case 7796: return "dan";    // �R
        case 7798: return "za";    // �S
        case 7800: return "bo";    // �T
        case 7802: return "fei";    // �U
        case 7804: return "xiang";    // �V
        case 7806: return "xin";    // �W
        case 7808: return "bie";    // �X
        case 7810: return "rao";    // �Y
        case 7812: return "man";    // �Z
        case 7814: return "lan";    // �[
        case 7816: return "ao";    // �\
        case 7818: return "yi";    // �]
        case 7820: return "gui";    // �^
        case 7822: return "cao";    // �_
        case 7824: return "sui";    // �`
        case 7826: return "nong";    // �a
        case 7828: return "chan";    // �b
        case 7830: return "lian";    // �c
        case 7832: return "dang";    // �d
        case 7834: return "du";    // �e
        case 7836: return "tan";    // �f
        case 7838: return "bi";    // �g
        case 7840: return "lan";    // �h
        case 7842: return "pu";    // �i
        case 7844: return "zhi";    // �j
        case 7846: return "tae";    // �k
        case 7848: return "du";    // �l
        case 7850: return "wa";    // �m
        case 7852: return "shi";    // �n
        case 7854: return "bai";    // �o
        case 7856: return "xie";    // �p
        case 7858: return "bo";    // �q
        case 7860: return "chen";    // �r
        case 7862: return "lai";    // �s
        case 7864: return "long";    // �t
        case 7866: return "xi";    // �u
        case 7868: return "xian";    // �v
        case 7870: return "lan";    // �w
        case 7872: return "zhe";    // �x
        case 7874: return "dai";    // �y
        case 7876: return "ju";    // �z
        case 7878: return "zan";    // �{
        case 7880: return "shi";    // �|
        case 7882: return "jian";    // �}
        case 7884: return "yi";    // �~
        case 7886: return "";    // ?
        case 7888: return "lan";    // Ҁ
        case 7890: return "ya";    // ҁ
        case 7892: return "xi";    // ҂
        case 7894: return "ban";    // ҃
        case 7896: return "fu";    // ҄
        case 7898: return "fiao";    // ҅
        case 7900: return "ba";    // ҆
        case 7902: return "he";    // ҇
        case 7904: return "ji";    // ҈
        case 7906: return "ji";    // ҉
        case 7908: return "jian";    // Ҋ
        case 7910: return "guan";    // ҋ
        case 7912: return "bian";    // Ҍ
        case 7914: return "yan";    // ҍ
        case 7916: return "gui";    // Ҏ
        case 7918: return "jiao";    // ҏ
        case 7920: return "pian";    // Ґ
        case 7922: return "mao";    // ґ
        case 7924: return "mi";    // Ғ
        case 7926: return "mi";    // ғ
        case 7928: return "pie";    // Ҕ
        case 7930: return "shi";    // ҕ
        case 7932: return "si";    // Җ
        case 7934: return "chan";    // җ
        case 7936: return "zhen";    // Ҙ
        case 7938: return "jiao";    // ҙ
        case 7940: return "mi";    // Қ
        case 7942: return "tiao";    // қ
        case 7944: return "lian";    // Ҝ
        case 7946: return "yao";    // ҝ
        case 7948: return "zhi";    // Ҟ
        case 7950: return "jun";    // ҟ
        case 7952: return "xi";    // Ҡ
        case 7954: return "shan";    // �@
        case 7956: return "wei";    // �A
        case 7958: return "xi";    // �B
        case 7960: return "tian";    // �C
        case 7962: return "yu";    // �D
        case 7964: return "lan";    // �E
        case 7966: return "e";    // �F
        case 7968: return "du";    // �G
        case 7970: return "qin";    // �H
        case 7972: return "pang";    // �I
        case 7974: return "ji";    // �J
        case 7976: return "ming";    // �K
        case 7978: return "ying";    // �L
        case 7980: return "gou";    // �M
        case 7982: return "qu";    // �N
        case 7984: return "zhan";    // �O
        case 7986: return "jin";    // �P
        case 7988: return "guan";    // �Q
        case 7990: return "deng";    // �R
        case 7992: return "bian";    // �S
        case 7994: return "luo";    // �T
        case 7996: return "qu";    // �U
        case 7998: return "jian";    // �V
        case 8000: return "wei";    // �W
        case 8002: return "jiao";    // �X
        case 8004: return "qu";    // �Y
        case 8006: return "luo";    // �Z
        case 8008: return "lan";    // �[
        case 8010: return "shen";    // �\
        case 8012: return "di";    // �]
        case 8014: return "guan";    // �^
        case 8016: return "yan";    // �_
        case 8018: return "tian";    // �`
        case 8020: return "qiu";    // �a
        case 8022: return "jin";    // �b
        case 8024: return "chu";    // �c
        case 8026: return "zhi";    // �d
        case 8028: return "chao";    // �e
        case 8030: return "ji";    // �f
        case 8032: return "dan";    // �g
        case 8034: return "zhi";    // �h
        case 8036: return "hua";    // �i
        case 8038: return "quan";    // �j
        case 8040: return "ge";    // �k
        case 8042: return "shi";    // �l
        case 8044: return "gui";    // �m
        case 8046: return "jie";    // �n
        case 8048: return "hun";    // �o
        case 8050: return "qiu";    // �p
        case 8052: return "xing";    // �q
        case 8054: return "ni";    // �r
        case 8056: return "ji";    // �s
        case 8058: return "lu";    // �t
        case 8060: return "da";    // �u
        case 8062: return "bi";    // �v
        case 8064: return "xing";    // �w
        case 8066: return "shang";    // �x
        case 8068: return "gong";    // �y
        case 8070: return "zhi";    // �z
        case 8072: return "hu";    // �{
        case 8074: return "chu";    // �|
        case 8076: return "wei";    // �}
        case 8078: return "yi";    // �~
        case 8080: return "";    // ?
        case 8082: return "li";    // Ӏ
        case 8084: return "jue";    // Ӂ
        case 8086: return "wei";    // ӂ
        case 8088: return "yan";    // Ӄ
        case 8090: return "wei";    // ӄ
        case 8092: return "yan";    // Ӆ
        case 8094: return "ding";    // ӆ
        case 8096: return "fu";    // Ӈ
        case 8098: return "kao";    // ӈ
        case 8100: return "qiu";    // Ӊ
        case 8102: return "jiao";    // ӊ
        case 8104: return "ji";    // Ӌ
        case 8106: return "fan";    // ӌ
        case 8108: return "xun";    // Ӎ
        case 8110: return "diao";    // ӎ
        case 8112: return "hong";    // ӏ
        case 8114: return "cha";    // Ӑ
        case 8116: return "tao";    // ӑ
        case 8118: return "xu";    // Ӓ
        case 8120: return "ji";    // ӓ
        case 8122: return "yi";    // Ӕ
        case 8124: return "ren";    // ӕ
        case 8126: return "xun";    // Ӗ
        case 8128: return "yin";    // ӗ
        case 8130: return "shan";    // Ә
        case 8132: return "qi";    // ә
        case 8134: return "tuo";    // Ӛ
        case 8136: return "ji";    // ӛ
        case 8138: return "xun";    // Ӝ
        case 8140: return "yin";    // ӝ
        case 8142: return "e";    // Ӟ
        case 8144: return "bin";    // ӟ
        case 8146: return "ya";    // Ӡ
        case 8148: return "yao";    // �@
        case 8150: return "song";    // �A
        case 8152: return "shen";    // �B
        case 8154: return "yin";    // �C
        case 8156: return "xi";    // �D
        case 8158: return "jue";    // �E
        case 8160: return "na";    // �F
        case 8162: return "ne";    // �G
        case 8164: return "chen";    // �H
        case 8166: return "you";    // �I
        case 8168: return "zhi";    // �J
        case 8170: return "xiong";    // �K
        case 8172: return "fang";    // �L
        case 8174: return "xin";    // �M
        case 8176: return "miao";    // �N
        case 8178: return "she";    // �O
        case 8180: return "yan";    // �P
        case 8182: return "sa";    // �Q
        case 8184: return "zhun";    // �R
        case 8186: return "xu";    // �S
        case 8188: return "yi";    // �T
        case 8190: return "yi";    // �U
        case 8192: return "su";    // �V
        case 8194: return "chi";    // �W
        case 8196: return "he";    // �X
        case 8198: return "shen";    // �Y
        case 8200: return "he";    // �Z
        case 8202: return "xu";    // �[
        case 8204: return "zhen";    // �\
        case 8206: return "zhu";    // �]
        case 8208: return "zheng";    // �^
        case 8210: return "gou";    // �_
        case 8212: return "zi";    // �`
        case 8214: return "zhan";    // �a
        case 8216: return "gu";    // �b
        case 8218: return "fu";    // �c
        case 8220: return "jian";    // �d
        case 8222: return "die";    // �e
        case 8224: return "ling";    // �f
        case 8226: return "di";    // �g
        case 8228: return "yang";    // �h
        case 8230: return "na";    // �i
        case 8232: return "pan";    // �j
        case 8234: return "zhou";    // �k
        case 8236: return "gan";    // �l
        case 8238: return "yi";    // �m
        case 8240: return "ju";    // �n
        case 8242: return "yao";    // �o
        case 8244: return "zha";    // �p
        case 8246: return "duo";    // �q
        case 8248: return "yi";    // �r
        case 8250: return "qu";    // �s
        case 8252: return "zhao";    // �t
        case 8254: return "ping";    // �u
        case 8256: return "bi";    // �v
        case 8258: return "xiong";    // �w
        case 8260: return "qu";    // �x
        case 8262: return "ba";    // �y
        case 8264: return "da";    // �z
        case 8266: return "zu";    // �{
        case 8268: return "tao";    // �|
        case 8270: return "zhu";    // �}
        case 8272: return "ci";    // �~
        case 8274: return "";    // ?
        case 8276: return "zhe";    // Ԁ
        case 8278: return "yong";    // ԁ
        case 8280: return "xu";    // Ԃ
        case 8282: return "xun";    // ԃ
        case 8284: return "yi";    // Ԅ
        case 8286: return "huang";    // ԅ
        case 8288: return "ge";    // Ԇ
        case 8290: return "shi";    // ԇ
        case 8292: return "qie";    // Ԉ
        case 8294: return "xiao";    // ԉ
        case 8296: return "shi";    // Ԋ
        case 8298: return "hen";    // ԋ
        case 8300: return "cha";    // Ԍ
        case 8302: return "gou";    // ԍ
        case 8304: return "gui";    // Ԏ
        case 8306: return "quan";    // ԏ
        case 8308: return "hui";    // Ԑ
        case 8310: return "jie";    // ԑ
        case 8312: return "hua";    // Ԓ
        case 8314: return "gai";    // ԓ
        case 8316: return "xiang";    // Ԕ
        case 8318: return "wei";    // ԕ
        case 8320: return "shen";    // Ԗ
        case 8322: return "zhou";    // ԗ
        case 8324: return "dong";    // Ԙ
        case 8326: return "mi";    // ԙ
        case 8328: return "ming";    // Ԛ
        case 8330: return "e";    // ԛ
        case 8332: return "hui";    // Ԝ
        case 8334: return "yan";    // ԝ
        case 8336: return "xiong";    // Ԟ
        case 8338: return "gua";    // ԟ
        case 8340: return "er";    // Ԡ
        case 8342: return "bing";    // �@
        case 8344: return "diao";    // �A
        case 8346: return "yi";    // �B
        case 8348: return "lei";    // �C
        case 8350: return "zhu";    // �D
        case 8352: return "kuang";    // �E
        case 8354: return "kua";    // �F
        case 8356: return "wu";    // �G
        case 8358: return "ji";    // �H
        case 8360: return "zhi";    // �I
        case 8362: return "ren";    // �J
        case 8364: return "cu";    // �K
        case 8366: return "lang";    // �L
        case 8368: return "e";    // �M
        case 8370: return "kuang";    // �N
        case 8372: return "ei";    // �O
        case 8374: return "ting";    // �P
        case 8376: return "dan";    // �Q
        case 8378: return "bei";    // �R
        case 8380: return "chan";    // �S
        case 8382: return "you";    // �T
        case 8384: return "keng";    // �U
        case 8386: return "qiao";    // �V
        case 8388: return "qin";    // �W
        case 8390: return "shua";    // �X
        case 8392: return "an";    // �Y
        case 8394: return "yu";    // �Z
        case 8396: return "xiao";    // �[
        case 8398: return "cheng";    // �\
        case 8400: return "jie";    // �]
        case 8402: return "xian";    // �^
        case 8404: return "wu";    // �_
        case 8406: return "wu";    // �`
        case 8408: return "gao";    // �a
        case 8410: return "song";    // �b
        case 8412: return "bu";    // �c
        case 8414: return "hui";    // �d
        case 8416: return "jing";    // �e
        case 8418: return "shuo";    // �f
        case 8420: return "zhen";    // �g
        case 8422: return "shui";    // �h
        case 8424: return "du";    // �i
        case 8426: return "hua";    // �j
        case 8428: return "chang";    // �k
        case 8430: return "shui";    // �l
        case 8432: return "jie";    // �m
        case 8434: return "ke";    // �n
        case 8436: return "jue";    // �o
        case 8438: return "cong";    // �p
        case 8440: return "xiao";    // �q
        case 8442: return "sui";    // �r
        case 8444: return "wang";    // �s
        case 8446: return "xian";    // �t
        case 8448: return "fei";    // �u
        case 8450: return "lai";    // �v
        case 8452: return "ta";    // �w
        case 8454: return "yi";    // �x
        case 8456: return "na";    // �y
        case 8458: return "yin";    // �z
        case 8460: return "diao";    // �{
        case 8462: return "bei";    // �|
        case 8464: return "zhuo";    // �}
        case 8466: return "chan";    // �~
        case 8468: return "";    // ?
        case 8470: return "chen";    // Հ
        case 8472: return "zhun";    // Ձ
        case 8474: return "ji";    // Ղ
        case 8476: return "qi";    // Ճ
        case 8478: return "tan";    // Մ
        case 8480: return "zhui";    // Յ
        case 8482: return "wei";    // Ն
        case 8484: return "ju";    // Շ
        case 8486: return "qing";    // Ո
        case 8488: return "dong";    // Չ
        case 8490: return "zheng";    // Պ
        case 8492: return "ze";    // Ջ
        case 8494: return "zhou";    // Ռ
        case 8496: return "qian";    // Ս
        case 8498: return "zhuo";    // Վ
        case 8500: return "liang";    // Տ
        case 8502: return "jian";    // Ր
        case 8504: return "ji";    // Ց
        case 8506: return "hao";    // Ւ
        case 8508: return "lun";    // Փ
        case 8510: return "nie";    // Ք
        case 8512: return "biao";    // Օ
        case 8514: return "hua";    // Ֆ
        case 8516: return "pian";    // ՗
        case 8518: return "yu";    // ՘
        case 8520: return "die";    // ՙ
        case 8522: return "xu";    // ՚
        case 8524: return "pian";    // ՛
        case 8526: return "di";    // ՜
        case 8528: return "xuan";    // ՝
        case 8530: return "shi";    // ՞
        case 8532: return "hun";    // ՟
        case 8534: return "gua";    // ՠ
        case 8536: return "e";    // �@
        case 8538: return "zhong";    // �A
        case 8540: return "di";    // �B
        case 8542: return "xie";    // �C
        case 8544: return "fu";    // �D
        case 8546: return "pu";    // �E
        case 8548: return "ting";    // �F
        case 8550: return "jian";    // �G
        case 8552: return "qi";    // �H
        case 8554: return "yu";    // �I
        case 8556: return "zi";    // �J
        case 8558: return "zhuan";    // �K
        case 8560: return "xi";    // �L
        case 8562: return "hui";    // �M
        case 8564: return "yin";    // �N
        case 8566: return "an";    // �O
        case 8568: return "gan";    // �P
        case 8570: return "nan";    // �Q
        case 8572: return "chen";    // �R
        case 8574: return "feng";    // �S
        case 8576: return "zhu";    // �T
        case 8578: return "yang";    // �U
        case 8580: return "yan";    // �V
        case 8582: return "huang";    // �W
        case 8584: return "xuan";    // �X
        case 8586: return "ge";    // �Y
        case 8588: return "nuo";    // �Z
        case 8590: return "qi";    // �[
        case 8592: return "mou";    // �\
        case 8594: return "ye";    // �]
        case 8596: return "wei";    // �^
        case 8598: return "xing";    // �_
        case 8600: return "teng";    // �`
        case 8602: return "zhou";    // �a
        case 8604: return "shan";    // �b
        case 8606: return "po";    // �c
        case 8608: return "dui";    // �d
        case 8610: return "huang";    // �e
        case 8612: return "huo";    // �f
        case 8614: return "ge";    // �g
        case 8616: return "ying";    // �h
        case 8618: return "mi";    // �i
        case 8620: return "xiao";    // �j
        case 8622: return "mi";    // �k
        case 8624: return "xi";    // �l
        case 8626: return "qiang";    // �m
        case 8628: return "zhen";    // �n
        case 8630: return "huo";    // �o
        case 8632: return "ti";    // �p
        case 8634: return "su";    // �q
        case 8636: return "bang";    // �r
        case 8638: return "chi";    // �s
        case 8640: return "qian";    // �t
        case 8642: return "yi";    // �u
        case 8644: return "jiang";    // �v
        case 8646: return "yuan";    // �w
        case 8648: return "xie";    // �x
        case 8650: return "he";    // �y
        case 8652: return "tao";    // �z
        case 8654: return "yao";    // �{
        case 8656: return "yao";    // �|
        case 8658: return "zhi";    // �}
        case 8660: return "yu";    // �~
        case 8662: return "";    // ?
        case 8664: return "biao";    // ր
        case 8666: return "cong";    // ց
        case 8668: return "li";    // ւ
        case 8670: return "mo";    // փ
        case 8672: return "mo";    // ք
        case 8674: return "shang";    // օ
        case 8676: return "zhe";    // ֆ
        case 8678: return "miu";    // և
        case 8680: return "jian";    // ֈ
        case 8682: return "ze";    // ։
        case 8684: return "jie";    // ֊
        case 8686: return "lian";    // ֋
        case 8688: return "lou";    // ֌
        case 8690: return "can";    // ֍
        case 8692: return "ou";    // ֎
        case 8694: return "gun";    // ֏
        case 8696: return "xi";    // ֐
        case 8698: return "zhuo";    // ֑
        case 8700: return "ao";    // ֒
        case 8702: return "ao";    // ֓
        case 8704: return "jin";    // ֔
        case 8706: return "zhe";    // ֕
        case 8708: return "yi";    // ֖
        case 8710: return "hu";    // ֗
        case 8712: return "jiang";    // ֘
        case 8714: return "man";    // ֙
        case 8716: return "zhao";    // ֚
        case 8718: return "han";    // ֛
        case 8720: return "wa";    // ֜
        case 8722: return "dan";    // ֝
        case 8724: return "xu";    // ֞
        case 8726: return "zeng";    // ֟
        case 8728: return "se";    // ֠
        case 8730: return "xi";    // �@
        case 8732: return "zha";    // �A
        case 8734: return "dui";    // �B
        case 8736: return "zheng";    // �C
        case 8738: return "nao";    // �D
        case 8740: return "lan";    // �E
        case 8742: return "e";    // �F
        case 8744: return "ying";    // �G
        case 8746: return "jue";    // �H
        case 8748: return "ji";    // �I
        case 8750: return "zun";    // �J
        case 8752: return "jiao";    // �K
        case 8754: return "bo";    // �L
        case 8756: return "hui";    // �M
        case 8758: return "quan";    // �N
        case 8760: return "wu";    // �O
        case 8762: return "jian";    // �P
        case 8764: return "zha";    // �Q
        case 8766: return "shi";    // �R
        case 8768: return "qiao";    // �S
        case 8770: return "tan";    // �T
        case 8772: return "zen";    // �U
        case 8774: return "pu";    // �V
        case 8776: return "sheng";    // �W
        case 8778: return "xuan";    // �X
        case 8780: return "zao";    // �Y
        case 8782: return "tan";    // �Z
        case 8784: return "dang";    // �[
        case 8786: return "sui";    // �\
        case 8788: return "xian";    // �]
        case 8790: return "ji";    // �^
        case 8792: return "jiao";    // �_
        case 8794: return "lian";    // �`
        case 8796: return "nou";    // �a
        case 8798: return "yi";    // �b
        case 8800: return "ai";    // �c
        case 8802: return "zhan";    // �d
        case 8804: return "hui";    // �e
        case 8806: return "hua";    // �f
        case 8808: return "yi";    // �g
        case 8810: return "yi";    // �h
        case 8812: return "shan";    // �i
        case 8814: return "rang";    // �j
        case 8816: return "nou";    // �k
        case 8818: return "qian";    // �l
        case 8820: return "dui";    // �m
        case 8822: return "ta";    // �n
        case 8824: return "hu";    // �o
        case 8826: return "zhou";    // �p
        case 8828: return "hao";    // �q
        case 8830: return "ai";    // �r
        case 8832: return "ying";    // �s
        case 8834: return "jian";    // �t
        case 8836: return "yu";    // �u
        case 8838: return "jian";    // �v
        case 8840: return "hui";    // �w
        case 8842: return "du";    // �x
        case 8844: return "ze";    // �y
        case 8846: return "juan";    // �z
        case 8848: return "zan";    // �{
        case 8850: return "lei";    // �|
        case 8852: return "shen";    // �}
        case 8854: return "wei";    // �~
        case 8856: return "";    // ?
        case 8858: return "chan";    // ׀
        case 8860: return "li";    // ׁ
        case 8862: return "yi";    // ׂ
        case 8864: return "bian";    // ׃
        case 8866: return "zhe";    // ׄ
        case 8868: return "yan";    // ׅ
        case 8870: return "e";    // ׆
        case 8872: return "chou";    // ׇ
        case 8874: return "wei";    // ׈
        case 8876: return "chou";    // ׉
        case 8878: return "yao";    // ׊
        case 8880: return "chan";    // ׋
        case 8882: return "rang";    // ׌
        case 8884: return "yin";    // ׍
        case 8886: return "lan";    // ׎
        case 8888: return "chen";    // ׏
        case 8890: return "xie";    // א
        case 8892: return "nie";    // ב
        case 8894: return "huan";    // ג
        case 8896: return "zan";    // ד
        case 8898: return "yi";    // ה
        case 8900: return "dang";    // ו
        case 8902: return "zhan";    // ז
        case 8904: return "yan";    // ח
        case 8906: return "du";    // ט
        case 8908: return "tuo";    // י
        case 8910: return "ren";    // ך
        case 8912: return "xiong";    // כ
        case 8914: return "xiong";    // ל
        case 8916: return "bi";    // ם
        case 8918: return "zhou";    // מ
        case 8920: return "shen";    // ן
        case 8922: return "xu";    // נ
        case 8924: return "qian";    // �@
        case 8926: return "hong";    // �A
        case 8928: return "xia";    // �B
        case 8930: return "ji";    // �C
        case 8932: return "hong";    // �D
        case 8934: return "han";    // �E
        case 8936: return "long";    // �F
        case 8938: return "ji";    // �G
        case 8940: return "xi";    // �H
        case 8942: return "liao";    // �I
        case 8944: return "gan";    // �J
        case 8946: return "du";    // �K
        case 8948: return "long";    // �L
        case 8950: return "qi";    // �M
        case 8952: return "feng";    // �N
        case 8954: return "deng";    // �O
        case 8956: return "bi";    // �P
        case 8958: return "shu";    // �Q
        case 8960: return "xian";    // �R
        case 8962: return "feng";    // �S
        case 8964: return "zhi";    // �T
        case 8966: return "zhi";    // �U
        case 8968: return "yan";    // �V
        case 8970: return "yan";    // �W
        case 8972: return "chu";    // �X
        case 8974: return "hui";    // �Y
        case 8976: return "tun";    // �Z
        case 8978: return "yi";    // �[
        case 8980: return "yi";    // �\
        case 8982: return "yan";    // �]
        case 8984: return "ba";    // �^
        case 8986: return "hou";    // �_
        case 8988: return "e";    // �`
        case 8990: return "chu";    // �a
        case 8992: return "yan";    // �b
        case 8994: return "ken";    // �c
        case 8996: return "gai";    // �d
        case 8998: return "ju";    // �e
        case 9000: return "fu";    // �f
        case 9002: return "xi";    // �g
        case 9004: return "bin";    // �h
        case 9006: return "zhu";    // �i
        case 9008: return "jia";    // �j
        case 9010: return "fen";    // �k
        case 9012: return "xi";    // �l
        case 9014: return "bo";    // �m
        case 9016: return "wen";    // �n
        case 9018: return "huan";    // �o
        case 9020: return "di";    // �p
        case 9022: return "zong";    // �q
        case 9024: return "fen";    // �r
        case 9026: return "yi";    // �s
        case 9028: return "an";    // �t
        case 9030: return "pi";    // �u
        case 9032: return "na";    // �v
        case 9034: return "pi";    // �w
        case 9036: return "gou";    // �x
        case 9038: return "duo";    // �y
        case 9040: return "you";    // �z
        case 9042: return "mo";    // �{
        case 9044: return "si";    // �|
        case 9046: return "huan";    // �}
        case 9048: return "ken";    // �~
        case 9050: return "";    // ?
        case 9052: return "mo";    // ؀
        case 9054: return "an";    // ؁
        case 9056: return "mai";    // ؂
        case 9058: return "ni";    // ؃
        case 9060: return "bi";    // ؄
        case 9062: return "yu";    // ؅
        case 9064: return "jia";    // ؆
        case 9066: return "tuan";    // ؇
        case 9068: return "mao";    // ؈
        case 9070: return "xi";    // ؉
        case 9072: return "yi";    // ؊
        case 9074: return "yu";    // ؋
        case 9076: return "chu";    // ،
        case 9078: return "tan";    // ؍
        case 9080: return "huan";    // ؎
        case 9082: return "jue";    // ؏
        case 9084: return "bei";    // ؐ
        case 9086: return "zhen";    // ؑ
        case 9088: return "yuan";    // ؒ
        case 9090: return "fu";    // ؓ
        case 9092: return "cai";    // ؔ
        case 9094: return "gong";    // ؕ
        case 9096: return "te";    // ؖ
        case 9098: return "yi";    // ؗ
        case 9100: return "hang";    // ؘ
        case 9102: return "wan";    // ؙ
        case 9104: return "pin";    // ؚ
        case 9106: return "huo";    // ؛
        case 9108: return "fan";    // ؜
        case 9110: return "tan";    // ؝
        case 9112: return "guan";    // ؞
        case 9114: return "ze";    // ؟
        case 9116: return "zhi";    // ؠ
        case 9118: return "er";    // �@
        case 9120: return "zhu";    // �A
        case 9122: return "shi";    // �B
        case 9124: return "bi";    // �C
        case 9126: return "zi";    // �D
        case 9128: return "er";    // �E
        case 9130: return "gui";    // �F
        case 9132: return "pian";    // �G
        case 9134: return "bian";    // �H
        case 9136: return "mai";    // �I
        case 9138: return "dai";    // �J
        case 9140: return "sheng";    // �K
        case 9142: return "kuang";    // �L
        case 9144: return "fei";    // �M
        case 9146: return "tie";    // �N
        case 9148: return "yi";    // �O
        case 9150: return "chi";    // �P
        case 9152: return "mao";    // �Q
        case 9154: return "he";    // �R
        case 9156: return "ben";    // �S
        case 9158: return "lu";    // �T
        case 9160: return "lin";    // �U
        case 9162: return "hui";    // �V
        case 9164: return "gai";    // �W
        case 9166: return "pian";    // �X
        case 9168: return "zi";    // �Y
        case 9170: return "jia";    // �Z
        case 9172: return "xu";    // �[
        case 9174: return "zei";    // �\
        case 9176: return "jiao";    // �]
        case 9178: return "gai";    // �^
        case 9180: return "zang";    // �_
        case 9182: return "jian";    // �`
        case 9184: return "ying";    // �a
        case 9186: return "xun";    // �b
        case 9188: return "zhen";    // �c
        case 9190: return "she";    // �d
        case 9192: return "bin";    // �e
        case 9194: return "bin";    // �f
        case 9196: return "qiu";    // �g
        case 9198: return "sha";    // �h
        case 9200: return "chuan";    // �i
        case 9202: return "zang";    // �j
        case 9204: return "zhou";    // �k
        case 9206: return "lai";    // �l
        case 9208: return "zan";    // �m
        case 9210: return "ci";    // �n
        case 9212: return "chen";    // �o
        case 9214: return "shang";    // �p
        case 9216: return "tian";    // �q
        case 9218: return "pei";    // �r
        case 9220: return "geng";    // �s
        case 9222: return "xian";    // �t
        case 9224: return "mai";    // �u
        case 9226: return "jian";    // �v
        case 9228: return "sui";    // �w
        case 9230: return "fu";    // �x
        case 9232: return "dan";    // �y
        case 9234: return "cong";    // �z
        case 9236: return "cong";    // �{
        case 9238: return "zhi";    // �|
        case 9240: return "ji";    // �}
        case 9242: return "zhang";    // �~
        case 9244: return "";    // ?
        case 9246: return "du";    // ـ
        case 9248: return "jin";    // ف
        case 9250: return "min";    // ق
        case 9252: return "chun";    // ك
        case 9254: return "yun";    // ل
        case 9256: return "bao";    // م
        case 9258: return "zai";    // ن
        case 9260: return "lai";    // ه
        case 9262: return "feng";    // و
        case 9264: return "cang";    // ى
        case 9266: return "ji";    // ي
        case 9268: return "sheng";    // ً
        case 9270: return "ai";    // ٌ
        case 9272: return "zuan";    // ٍ
        case 9274: return "fu";    // َ
        case 9276: return "gou";    // ُ
        case 9278: return "sai";    // ِ
        case 9280: return "ze";    // ّ
        case 9282: return "liao";    // ْ
        case 9284: return "yi";    // ٓ
        case 9286: return "bai";    // ٔ
        case 9288: return "chen";    // ٕ
        case 9290: return "wan";    // ٖ
        case 9292: return "zhi";    // ٗ
        case 9294: return "zhui";    // ٘
        case 9296: return "biao";    // ٙ
        case 9298: return "yun";    // ٚ
        case 9300: return "zeng";    // ٛ
        case 9302: return "dan";    // ٜ
        case 9304: return "zan";    // ٝ
        case 9306: return "yan";    // ٞ
        case 9308: return "pu";    // ٟ
        case 9310: return "shan";    // ٠
        case 9312: return "wan";    // �@
        case 9314: return "ying";    // �A
        case 9316: return "jin";    // �B
        case 9318: return "gan";    // �C
        case 9320: return "xian";    // �D
        case 9322: return "zang";    // �E
        case 9324: return "bi";    // �F
        case 9326: return "du";    // �G
        case 9328: return "shu";    // �H
        case 9330: return "yan";    // �I
        case 9332: return "shang";    // �J
        case 9334: return "xuan";    // �K
        case 9336: return "long";    // �L
        case 9338: return "gan";    // �M
        case 9340: return "zang";    // �N
        case 9342: return "yuan";    // �O
        case 9344: return "bi";    // �P
        case 9346: return "zhou";    // �Q
        case 9348: return "feng";    // �R
        case 9350: return "yun";    // �S
        case 9352: return "xi";    // �T
        case 9354: return "tong";    // �U
        case 9356: return "xi";    // �V
        case 9358: return "cheng";    // �W
        case 9360: return "cheng";    // �X
        case 9362: return "xia";    // �Y
        case 9364: return "tang";    // �Z
        case 9366: return "zou";    // �[
        case 9368: return "li";    // �\
        case 9370: return "shan";    // �]
        case 9372: return "qiong";    // �^
        case 9374: return "yin";    // �_
        case 9376: return "xian";    // �`
        case 9378: return "zi";    // �a
        case 9380: return "gui";    // �b
        case 9382: return "qin";    // �c
        case 9384: return "di";    // �d
        case 9386: return "ci";    // �e
        case 9388: return "zhen";    // �f
        case 9390: return "die";    // �g
        case 9392: return "di";    // �h
        case 9394: return "xi";    // �i
        case 9396: return "zhan";    // �j
        case 9398: return "ju";    // �k
        case 9400: return "ji";    // �l
        case 9402: return "qu";    // �m
        case 9404: return "chu";    // �n
        case 9406: return "gua";    // �o
        case 9408: return "xue";    // �p
        case 9410: return "tiao";    // �q
        case 9412: return "duo";    // �r
        case 9414: return "gan";    // �s
        case 9416: return "suo";    // �t
        case 9418: return "cu";    // �u
        case 9420: return "xi";    // �v
        case 9422: return "zhao";    // �w
        case 9424: return "su";    // �x
        case 9426: return "yin";    // �y
        case 9428: return "ju";    // �z
        case 9430: return "jian";    // �{
        case 9432: return "qi";    // �|
        case 9434: return "chao";    // �}
        case 9436: return "wei";    // �~
        case 9438: return "";    // ?
        case 9440: return "lu";    // ڀ
        case 9442: return "dang";    // ځ
        case 9444: return "qiu";    // ڂ
        case 9446: return "zi";    // ڃ
        case 9448: return "ti";    // ڄ
        case 9450: return "qu";    // څ
        case 9452: return "chi";    // چ
        case 9454: return "guang";    // ڇ
        case 9456: return "jiao";    // ڈ
        case 9458: return "qiao";    // ډ
        case 9460: return "jiao";    // ڊ
        case 9462: return "zao";    // ڋ
        case 9464: return "yue";    // ڌ
        case 9466: return "er";    // ڍ
        case 9468: return "zan";    // ڎ
        case 9470: return "wu";    // ڏ
        case 9472: return "ke";    // ڐ
        case 9474: return "gui";    // ڑ
        case 9476: return "chen";    // ڒ
        case 9478: return "pang";    // ړ
        case 9480: return "yue";    // ڔ
        case 9482: return "pa";    // ڕ
        case 9484: return "qi";    // ږ
        case 9486: return "tuo";    // ڗ
        case 9488: return "yi";    // ژ
        case 9490: return "nian";    // ڙ
        case 9492: return "ling";    // ښ
        case 9494: return "mei";    // ڛ
        case 9496: return "ku";    // ڜ
        case 9498: return "ci";    // ڝ
        case 9500: return "qia";    // ڞ
        case 9502: return "zhu";    // ڟ
        case 9504: return "ju";    // ڠ
        case 9506: return "die";    // �@
        case 9508: return "ban";    // �A
        case 9510: return "ju";    // �B
        case 9512: return "ni";    // �C
        case 9514: return "yi";    // �D
        case 9516: return "ji";    // �E
        case 9518: return "dai";    // �F
        case 9520: return "duo";    // �G
        case 9522: return "zhu";    // �H
        case 9524: return "quan";    // �I
        case 9526: return "zhuai";    // �J
        case 9528: return "xiang";    // �K
        case 9530: return "die";    // �L
        case 9532: return "beng";    // �M
        case 9534: return "zhi";    // �N
        case 9536: return "jia";    // �O
        case 9538: return "cai";    // �P
        case 9540: return "da";    // �Q
        case 9542: return "qu";    // �R
        case 9544: return "chou";    // �S
        case 9546: return "duo";    // �T
        case 9548: return "chu";    // �U
        case 9550: return "keng";    // �V
        case 9552: return "nie";    // �W
        case 9554: return "qiao";    // �X
        case 9556: return "bu";    // �Y
        case 9558: return "qun";    // �Z
        case 9560: return "mu";    // �[
        case 9562: return "shu";    // �\
        case 9564: return "jiao";    // �]
        case 9566: return "qiao";    // �^
        case 9568: return "meo";    // �_
        case 9570: return "jian";    // �`
        case 9572: return "ji";    // �a
        case 9574: return "wo";    // �b
        case 9576: return "wei";    // �c
        case 9578: return "jie";    // �d
        case 9580: return "ji";    // �e
        case 9582: return "nie";    // �f
        case 9584: return "ju";    // �g
        case 9586: return "nie";    // �h
        case 9588: return "lun";    // �i
        case 9590: return "lu";    // �j
        case 9592: return "leng";    // �k
        case 9594: return "wo";    // �l
        case 9596: return "juan";    // �m
        case 9598: return "zu";    // �n
        case 9600: return "qie";    // �o
        case 9602: return "ji";    // �p
        case 9604: return "di";    // �q
        case 9606: return "zong";    // �r
        case 9608: return "pan";    // �s
        case 9610: return "zheng";    // �t
        case 9612: return "yao";    // �u
        case 9614: return "dun";    // �v
        case 9616: return "chuan";    // �w
        case 9618: return "yong";    // �x
        case 9620: return "di";    // �y
        case 9622: return "zha";    // �z
        case 9624: return "chen";    // �{
        case 9626: return "tuo";    // �|
        case 9628: return "tang";    // �}
        case 9630: return "bi";    // �~
        case 9632: return "";    // ?
        case 9634: return "zu";    // ۀ
        case 9636: return "nuo";    // ہ
        case 9638: return "zha";    // ۂ
        case 9640: return "tui";    // ۃ
        case 9642: return "qiang";    // ۄ
        case 9644: return "zhan";    // ۅ
        case 9646: return "dian";    // ۆ
        case 9648: return "di";    // ۇ
        case 9650: return "ji";    // ۈ
        case 9652: return "liu";    // ۉ
        case 9654: return "zan";    // ۊ
        case 9656: return "bi";    // ۋ
        case 9658: return "chong";    // ی
        case 9660: return "lu";    // ۍ
        case 9662: return "liao";    // ێ
        case 9664: return "tang";    // ۏ
        case 9666: return "dai";    // ې
        case 9668: return "su";    // ۑ
        case 9670: return "xi";    // ے
        case 9672: return "kui";    // ۓ
        case 9674: return "ji";    // ۔
        case 9676: return "zhi";    // ە
        case 9678: return "qiang";    // ۖ
        case 9680: return "di";    // ۗ
        case 9682: return "pan";    // ۘ
        case 9684: return "zong";    // ۙ
        case 9686: return "lian";    // ۚ
        case 9688: return "zao";    // ۛ
        case 9690: return "nian";    // ۜ
        case 9692: return "tui";    // ۝
        case 9694: return "ju";    // ۞
        case 9696: return "xian";    // ۟
        case 9698: return "zhong";    // ۠
        case 9700: return "bo";    // �@
        case 9702: return "cu";    // �A
        case 9704: return "jue";    // �B
        case 9706: return "lin";    // �C
        case 9708: return "ta";    // �D
        case 9710: return "qiao";    // �E
        case 9712: return "jiao";    // �F
        case 9714: return "liao";    // �G
        case 9716: return "dun";    // �H
        case 9718: return "guan";    // �I
        case 9720: return "da";    // �J
        case 9722: return "bi";    // �K
        case 9724: return "bi";    // �L
        case 9726: return "ju";    // �M
        case 9728: return "qiao";    // �N
        case 9730: return "dun";    // �O
        case 9732: return "chou";    // �P
        case 9734: return "ji";    // �Q
        case 9736: return "wu";    // �R
        case 9738: return "yue";    // �S
        case 9740: return "nian";    // �T
        case 9742: return "zhi";    // �U
        case 9744: return "yue";    // �V
        case 9746: return "zhi";    // �W
        case 9748: return "chu";    // �X
        case 9750: return "duan";    // �Y
        case 9752: return "wei";    // �Z
        case 9754: return "long";    // �[
        case 9756: return "lin";    // �\
        case 9758: return "xian";    // �]
        case 9760: return "wei";    // �^
        case 9762: return "lan";    // �_
        case 9764: return "rang";    // �`
        case 9766: return "xie";    // �a
        case 9768: return "nie";    // �b
        case 9770: return "ta";    // �c
        case 9772: return "qu";    // �d
        case 9774: return "ji";    // �e
        case 9776: return "cuan";    // �f
        case 9778: return "zuan";    // �g
        case 9780: return "xi";    // �h
        case 9782: return "kui";    // �i
        case 9784: return "jue";    // �j
        case 9786: return "lin";    // �k
        case 9788: return "dan";    // �l
        case 9790: return "fen";    // �m
        case 9792: return "ti";    // �n
        case 9794: return "duo";    // �o
        case 9796: return "gong";    // �p
        case 9798: return "lang";    // �q
        case 9800: return "ren";    // �r
        case 9802: return "luo";    // �s
        case 9804: return "ai";    // �t
        case 9806: return "ji";    // �u
        case 9808: return "ju";    // �v
        case 9810: return "kong";    // �w
        case 9812: return "lao";    // �x
        case 9814: return "yan";    // �y
        case 9816: return "mei";    // �z
        case 9818: return "kang";    // �{
        case 9820: return "qu";    // �|
        case 9822: return "lou";    // �}
        case 9824: return "lao";    // �~
        case 9826: return "";    // ?
        case 9828: return "tuo";    // ܀
        case 9830: return "zhi";    // ܁
        case 9832: return "yan";    // ܂
        case 9834: return "ti";    // ܃
        case 9836: return "dao";    // ܄
        case 9838: return "ying";    // ܅
        case 9840: return "yu";    // ܆
        case 9842: return "che";    // ܇
        case 9844: return "zha";    // ܈
        case 9846: return "gui";    // ܉
        case 9848: return "jun";    // ܊
        case 9850: return "yue";    // ܋
        case 9852: return "xian";    // ܌
        case 9854: return "dai";    // ܍
        case 9856: return "xuan";    // ܎
        case 9858: return "fan";    // ܏
        case 9860: return "ren";    // ܐ
        case 9862: return "shan";    // ܑ
        case 9864: return "kuang";    // ܒ
        case 9866: return "shu";    // ܓ
        case 9868: return "tun";    // ܔ
        case 9870: return "qi";    // ܕ
        case 9872: return "dai";    // ܖ
        case 9874: return "e";    // ܗ
        case 9876: return "na";    // ܘ
        case 9878: return "qi";    // ܙ
        case 9880: return "mao";    // ܚ
        case 9882: return "ruan";    // ܛ
        case 9884: return "kuang";    // ܜ
        case 9886: return "qian";    // ܝ
        case 9888: return "zhuan";    // ܞ
        case 9890: return "hong";    // ܟ
        case 9892: return "hu";    // ܠ
        case 9894: return "gou";    // �@
        case 9896: return "kuang";    // �A
        case 9898: return "di";    // �B
        case 9900: return "ling";    // �C
        case 9902: return "dai";    // �D
        case 9904: return "ao";    // �E
        case 9906: return "zhen";    // �F
        case 9908: return "fan";    // �G
        case 9910: return "kuang";    // �H
        case 9912: return "yang";    // �I
        case 9914: return "peng";    // �J
        case 9916: return "bei";    // �K
        case 9918: return "gu";    // �L
        case 9920: return "gu";    // �M
        case 9922: return "pao";    // �N
        case 9924: return "zhu";    // �O
        case 9926: return "fu";    // �P
        case 9928: return "e";    // �Q
        case 9930: return "ba";    // �R
        case 9932: return "zhou";    // �S
        case 9934: return "zhi";    // �T
        case 9936: return "yao";    // �U
        case 9938: return "ke";    // �V
        case 9940: return "yi";    // �W
        case 9942: return "qing";    // �X
        case 9944: return "shi";    // �Y
        case 9946: return "peng";    // �Z
        case 9948: return "er";    // �[
        case 9950: return "gong";    // �\
        case 9952: return "ju";    // �]
        case 9954: return "jiao";    // �^
        case 9956: return "guang";    // �_
        case 9958: return "lu";    // �`
        case 9960: return "kai";    // �a
        case 9962: return "quan";    // �b
        case 9964: return "zhou";    // �c
        case 9966: return "zai";    // �d
        case 9968: return "zhi";    // �e
        case 9970: return "she";    // �f
        case 9972: return "liang";    // �g
        case 9974: return "yu";    // �h
        case 9976: return "shao";    // �i
        case 9978: return "you";    // �j
        case 9980: return "wan";    // �k
        case 9982: return "yin";    // �l
        case 9984: return "zhe";    // �m
        case 9986: return "wan";    // �n
        case 9988: return "fu";    // �o
        case 9990: return "qing";    // �p
        case 9992: return "zhou";    // �q
        case 9994: return "yi";    // �r
        case 9996: return "leng";    // �s
        case 9998: return "zhe";    // �t
        case 10000: return "zhan";    // �u
        case 10002: return "liang";    // �v
        case 10004: return "zi";    // �w
        case 10006: return "hui";    // �x
        case 10008: return "wang";    // �y
        case 10010: return "chuo";    // �z
        case 10012: return "guo";    // �{
        case 10014: return "kan";    // �|
        case 10016: return "yi";    // �}
        case 10018: return "peng";    // �~
        case 10020: return "";    // ?
        case 10022: return "qian";    // ݀
        case 10024: return "gun";    // ݁
        case 10026: return "nian";    // ݂
        case 10028: return "peng";    // ݃
        case 10030: return "guan";    // ݄
        case 10032: return "bei";    // ݅
        case 10034: return "lun";    // ݆
        case 10036: return "pai";    // ݇
        case 10038: return "liang";    // ݈
        case 10040: return "er";    // ݉
        case 10042: return "rou";    // ݊
        case 10044: return "ji";    // ݋
        case 10046: return "yang";    // ݌
        case 10048: return "kan";    // ݍ
        case 10050: return "chuan";    // ݎ
        case 10052: return "cou";    // ݏ
        case 10054: return "chun";    // ݐ
        case 10056: return "ya";    // ݑ
        case 10058: return "you";    // ݒ
        case 10060: return "hong";    // ݓ
        case 10062: return "shu";    // ݔ
        case 10064: return "bu";    // ݕ
        case 10066: return "zi";    // ݖ
        case 10068: return "fu";    // ݗ
        case 10070: return "wen";    // ݘ
        case 10072: return "ben";    // ݙ
        case 10074: return "nian";    // ݚ
        case 10076: return "yu";    // ݛ
        case 10078: return "yun";    // ݜ
        case 10080: return "tao";    // ݝ
        case 10082: return "gu";    // ݞ
        case 10084: return "zhen";    // ݟ
        case 10086: return "xia";    // ݠ
        case 10088: return "yuan";    // �@
        case 10090: return "lu";    // �A
        case 10092: return "jiao";    // �B
        case 10094: return "chao";    // �C
        case 10096: return "zhuan";    // �D
        case 10098: return "wei";    // �E
        case 10100: return "hun";    // �F
        case 10102: return "xue";    // �G
        case 10104: return "zhe";    // �H
        case 10106: return "jiao";    // �I
        case 10108: return "zhan";    // �J
        case 10110: return "bu";    // �K
        case 10112: return "lao";    // �L
        case 10114: return "fen";    // �M
        case 10116: return "fan";    // �N
        case 10118: return "lin";    // �O
        case 10120: return "ge";    // �P
        case 10122: return "se";    // �Q
        case 10124: return "kan";    // �R
        case 10126: return "huan";    // �S
        case 10128: return "yi";    // �T
        case 10130: return "ji";    // �U
        case 10132: return "zhui";    // �V
        case 10134: return "er";    // �W
        case 10136: return "yu";    // �X
        case 10138: return "jian";    // �Y
        case 10140: return "hong";    // �Z
        case 10142: return "lei";    // �[
        case 10144: return "pei";    // �\
        case 10146: return "li";    // �]
        case 10148: return "li";    // �^
        case 10150: return "lu";    // �_
        case 10152: return "lin";    // �`
        case 10154: return "dai";    // �a
        case 10156: return "zhou";    // �b
        case 10158: return "liang";    // �c
        case 10160: return "wen";    // �d
        case 10162: return "ci";    // �e
        case 10164: return "zui";    // �f
        case 10166: return "bian";    // �g
        case 10168: return "la";    // �h
        case 10170: return "ci";    // �i
        case 10172: return "yi";    // �j
        case 10174: return "ban";    // �k
        case 10176: return "bian";    // �l
        case 10178: return "xue";    // �m
        case 10180: return "ban";    // �n
        case 10182: return "ci";    // �o
        case 10184: return "bian";    // �p
        case 10186: return "bian";    // �q
        case 10188: return "nong";    // �r
        case 10190: return "nong";    // �s
        case 10192: return "zhen";    // �t
        case 10194: return "chuo";    // �u
        case 10196: return "yi";    // �v
        case 10198: return "reng";    // �w
        case 10200: return "fan";    // �x
        case 10202: return "shi";    // �y
        case 10204: return "ru";    // �z
        case 10206: return "chan";    // �{
        case 10208: return "gan";    // �|
        case 10210: return "yu";    // �}
        case 10212: return "tuo";    // �~
        case 10214: return "";    // ?
        case 10216: return "qi";    // ހ
        case 10218: return "zha";    // ށ
        case 10220: return "wang";    // ނ
        case 10222: return "tu";    // ރ
        case 10224: return "zhun";    // ބ
        case 10226: return "da";    // ޅ
        case 10228: return "hang";    // ކ
        case 10230: return "da";    // އ
        case 10232: return "e";    // ވ
        case 10234: return "zhong";    // މ
        case 10236: return "che";    // ފ
        case 10238: return "ni";    // ދ
        case 10240: return "zhi";    // ތ
        case 10242: return "zhen";    // ލ
        case 10244: return "wang";    // ގ
        case 10246: return "tao";    // ޏ
        case 10248: return "yi";    // ސ
        case 10250: return "qu";    // ޑ
        case 10252: return "hui";    // ޒ
        case 10254: return "dong";    // ޓ
        case 10256: return "you";    // ޔ
        case 10258: return "nai";    // ޕ
        case 10260: return "yi";    // ޖ
        case 10262: return "jie";    // ޗ
        case 10264: return "lie";    // ޘ
        case 10266: return "xun";    // ޙ
        case 10268: return "dun";    // ޚ
        case 10270: return "jiong";    // ޛ
        case 10272: return "you";    // ޜ
        case 10274: return "qiu";    // ޝ
        case 10276: return "di";    // ޞ
        case 10278: return "jing";    // ޟ
        case 10280: return "yi";    // ޠ
        case 10282: return "zhe";    // �@
        case 10284: return "wu";    // �A
        case 10286: return "lian";    // �B
        case 10288: return "suo";    // �C
        case 10290: return "hui";    // �D
        case 10292: return "gu";    // �E
        case 10294: return "lai";    // �F
        case 10296: return "ben";    // �G
        case 10298: return "cuo";    // �H
        case 10300: return "jue";    // �I
        case 10302: return "beng";    // �J
        case 10304: return "you";    // �K
        case 10306: return "zhou";    // �L
        case 10308: return "jin";    // �M
        case 10310: return "yu";    // �N
        case 10312: return "chuo";    // �O
        case 10314: return "ti";    // �P
        case 10316: return "da";    // �Q
        case 10318: return "yuan";    // �R
        case 10320: return "nuo";    // �S
        case 10322: return "dang";    // �T
        case 10324: return "sui";    // �U
        case 10326: return "an";    // �V
        case 10328: return "chi";    // �W
        case 10330: return "ti";    // �X
        case 10332: return "shi";    // �Y
        case 10334: return "zhen";    // �Z
        case 10336: return "you";    // �[
        case 10338: return "yun";    // �\
        case 10340: return "e";    // �]
        case 10342: return "guo";    // �^
        case 10344: return "da";    // �_
        case 10346: return "wei";    // �`
        case 10348: return "nan";    // �a
        case 10350: return "yao";    // �b
        case 10352: return "chou";    // �c
        case 10354: return "xun";    // �d
        case 10356: return "ta";    // �e
        case 10358: return "di";    // �f
        case 10360: return "zhi";    // �g
        case 10362: return "yuan";    // �h
        case 10364: return "su";    // �i
        case 10366: return "ma";    // �j
        case 10368: return "guan";    // �k
        case 10370: return "zhang";    // �l
        case 10372: return "shi";    // �m
        case 10374: return "ca";    // �n
        case 10376: return "chi";    // �o
        case 10378: return "su";    // �p
        case 10380: return "dun";    // �q
        case 10382: return "di";    // �r
        case 10384: return "lou";    // �s
        case 10386: return "chi";    // �t
        case 10388: return "cuo";    // �u
        case 10390: return "rao";    // �v
        case 10392: return "qian";    // �w
        case 10394: return "xuan";    // �x
        case 10396: return "yu";    // �y
        case 10398: return "yi";    // �z
        case 10400: return "e";    // �{
        case 10402: return "liao";    // �|
        case 10404: return "shi";    // �}
        case 10406: return "mai";    // �~
        case 10408: return "";    // ?
        case 10410: return "hai";    // ߀
        case 10412: return "zhan";    // ߁
        case 10414: return "teng";    // ߂
        case 10416: return "er";    // ߃
        case 10418: return "bian";    // ߄
        case 10420: return "bian";    // ߅
        case 10422: return "li";    // ߆
        case 10424: return "yuan";    // ߇
        case 10426: return "you";    // ߈
        case 10428: return "luo";    // ߉
        case 10430: return "li";    // ߊ
        case 10432: return "ting";    // ߋ
        case 10434: return "qi";    // ߌ
        case 10436: return "shan";    // ߍ
        case 10438: return "yu";    // ߎ
        case 10440: return "fu";    // ߏ
        case 10442: return "wan";    // ߐ
        case 10444: return "fu";    // ߑ
        case 10446: return "kang";    // ߒ
        case 10448: return "bin";    // ߓ
        case 10450: return "xin";    // ߔ
        case 10452: return "shen";    // ߕ
        case 10454: return "yuan";    // ߖ
        case 10456: return "cun";    // ߗ
        case 10458: return "huo";    // ߘ
        case 10460: return "bang";    // ߙ
        case 10462: return "ju";    // ߚ
        case 10464: return "bi";    // ߛ
        case 10466: return "wa";    // ߜ
        case 10468: return "kuang";    // ߝ
        case 10470: return "gui";    // ߞ
        case 10472: return "shi";    // ߟ
        case 10474: return "ku";    // ߠ
        case 10476: return "gai";    // �@
        case 10478: return "xia";    // �A
        case 10480: return "ji";    // �B
        case 10482: return "hou";    // �C
        case 10484: return "geng";    // �D
        case 10486: return "xi";    // �E
        case 10488: return "gui";    // �F
        case 10490: return "na";    // �G
        case 10492: return "lang";    // �H
        case 10494: return "yan";    // �I
        case 10496: return "cheng";    // �J
        case 10498: return "dou";    // �K
        case 10500: return "lu";    // �L
        case 10502: return "fu";    // �M
        case 10504: return "wu";    // �N
        case 10506: return "lang";    // �O
        case 10508: return "jia";    // �P
        case 10510: return "geng";    // �Q
        case 10512: return "bo";    // �R
        case 10514: return "qie";    // �S
        case 10516: return "ju";    // �T
        case 10518: return "ao";    // �U
        case 10520: return "qi";    // �V
        case 10522: return "qing";    // �W
        case 10524: return "zhou";    // �X
        case 10526: return "ju";    // �Y
        case 10528: return "ping";    // �Z
        case 10530: return "lai";    // �[
        case 10532: return "ni";    // �\
        case 10534: return "you";    // �]
        case 10536: return "bu";    // �^
        case 10538: return "xiang";    // �_
        case 10540: return "ju";    // �`
        case 10542: return "yong";    // �a
        case 10544: return "qiao";    // �b
        case 10546: return "yi";    // �c
        case 10548: return "mei";    // �d
        case 10550: return "ruo";    // �e
        case 10552: return "bei";    // �f
        case 10554: return "shu";    // �g
        case 10556: return "yu";    // �h
        case 10558: return "yun";    // �i
        case 10560: return "hou";    // �j
        case 10562: return "kui";    // �k
        case 10564: return "xiang";    // �l
        case 10566: return "xiang";    // �m
        case 10568: return "sou";    // �n
        case 10570: return "tang";    // �o
        case 10572: return "ming";    // �p
        case 10574: return "xi";    // �q
        case 10576: return "ru";    // �r
        case 10578: return "chu";    // �s
        case 10580: return "zi";    // �t
        case 10582: return "zou";    // �u
        case 10584: return "ye";    // �v
        case 10586: return "wu";    // �w
        case 10588: return "xiang";    // �x
        case 10590: return "yun";    // �y
        case 10592: return "hao";    // �z
        case 10594: return "yong";    // �{
        case 10596: return "mao";    // �|
        case 10598: return "chao";    // �}
        case 10600: return "fu";    // �~
        case 10602: return "";    // ?
        case 10604: return "liao";    // ��
        case 10606: return "zhuan";    // ��
        case 10608: return "hu";    // ��
        case 10610: return "qiao";    // ��
        case 10612: return "wan";    // ��
        case 10614: return "qiao";    // ��
        case 10616: return "xu";    // ��
        case 10618: return "deng";    // ��
        case 10620: return "bi";    // ��
        case 10622: return "xun";    // ��
        case 10624: return "bi";    // ��
        case 10626: return "zeng";    // ��
        case 10628: return "wei";    // ��
        case 10630: return "zheng";    // ��
        case 10632: return "mao";    // ��
        case 10634: return "lin";    // ��
        case 10636: return "dan";    // ��
        case 10638: return "meng";    // ��
        case 10640: return "ye";    // ��
        case 10642: return "cao";    // ��
        case 10644: return "kuai";    // ��
        case 10646: return "feng";    // ��
        case 10648: return "meng";    // ��
        case 10650: return "kuang";    // ��
        case 10652: return "lian";    // ��
        case 10654: return "zan";    // ��
        case 10656: return "chan";    // ��
        case 10658: return "you";    // ��
        case 10660: return "ji";    // ��
        case 10662: return "yan";    // ��
        case 10664: return "chan";    // ��
        case 10666: return "zan";    // ��
        case 10668: return "huan";    // �
        case 10670: return "xi";    // �@
        case 10672: return "zan";    // �A
        case 10674: return "li";    // �B
        case 10676: return "yu";    // �C
        case 10678: return "yan";    // �D
        case 10680: return "zui";    // �E
        case 10682: return "mao";    // �F
        case 10684: return "dan";    // �G
        case 10686: return "dou";    // �H
        case 10688: return "zhen";    // �I
        case 10690: return "yuan";    // �J
        case 10692: return "fu";    // �K
        case 10694: return "tian";    // �L
        case 10696: return "qia";    // �M
        case 10698: return "po";    // �N
        case 10700: return "chou";    // �O
        case 10702: return "zai";    // �P
        case 10704: return "chuo";    // �Q
        case 10706: return "you";    // �R
        case 10708: return "yin";    // �S
        case 10710: return "pu";    // �T
        case 10712: return "fu";    // �U
        case 10714: return "hai";    // �V
        case 10716: return "wei";    // �W
        case 10718: return "lu";    // �X
        case 10720: return "lan";    // �Y
        case 10722: return "yan";    // �Z
        case 10724: return "tao";    // �[
        case 10726: return "zhan";    // �\
        case 10728: return "dan";    // �]
        case 10730: return "zhui";    // �^
        case 10732: return "jian";    // �_
        case 10734: return "du";    // �`
        case 10736: return "tan";    // �a
        case 10738: return "qiu";    // �b
        case 10740: return "chun";    // �c
        case 10742: return "yun";    // �d
        case 10744: return "fa";    // �e
        case 10746: return "ke";    // �f
        case 10748: return "sou";    // �g
        case 10750: return "chou";    // �h
        case 10752: return "cuo";    // �i
        case 10754: return "yun";    // �j
        case 10756: return "yong";    // �k
        case 10758: return "ang";    // �l
        case 10760: return "zha";    // �m
        case 10762: return "jiang";    // �n
        case 10764: return "piao";    // �o
        case 10766: return "chan";    // �p
        case 10768: return "ou";    // �q
        case 10770: return "li";    // �r
        case 10772: return "zao";    // �s
        case 10774: return "yi";    // �t
        case 10776: return "jiang";    // �u
        case 10778: return "tan";    // �v
        case 10780: return "po";    // �w
        case 10782: return "nong";    // �x
        case 10784: return "yi";    // �y
        case 10786: return "yan";    // �z
        case 10788: return "yi";    // �{
        case 10790: return "niang";    // �|
        case 10792: return "ru";    // �}
        case 10794: return "shou";    // �~
        case 10796: return "";    // ?
        case 10798: return "yan";    // �
        case 10800: return "ling";    // �
        case 10802: return "mi";    // �
        case 10804: return "mi";    // �
        case 10806: return "niang";    // �
        case 10808: return "xin";    // �
        case 10810: return "jiao";    // �
        case 10812: return "shai";    // �
        case 10814: return "mi";    // �
        case 10816: return "yan";    // �
        case 10818: return "bian";    // �
        case 10820: return "shi";    // �
        case 10822: return "shi";    // �
        case 10824: return "li";    // �
        case 10826: return "jin";    // �
        case 10828: return "ga";    // �
        case 10830: return "yi";    // �
        case 10832: return "liao";    // �
        case 10834: return "dao";    // �
        case 10836: return "zhao";    // �
        case 10838: return "ding";    // �
        case 10840: return "po";    // �
        case 10842: return "qiu";    // �
        case 10844: return "ba";    // �
        case 10846: return "zhen";    // �
        case 10848: return "zhi";    // �
        case 10850: return "ba";    // �
        case 10852: return "luan";    // �
        case 10854: return "fu";    // �
        case 10856: return "nai";    // �
        case 10858: return "diao";    // �
        case 10860: return "shan";    // �
        case 10862: return "jiao";    // �
        case 10864: return "kou";    // �@
        case 10866: return "chuan";    // �A
        case 10868: return "zi";    // �B
        case 10870: return "fan";    // �C
        case 10872: return "yu";    // �D
        case 10874: return "wu";    // �E
        case 10876: return "gan";    // �F
        case 10878: return "gang";    // �G
        case 10880: return "qi";    // �H
        case 10882: return "mang";    // �I
        case 10884: return "ri";    // �J
        case 10886: return "di";    // �K
        case 10888: return "si";    // �L
        case 10890: return "xi";    // �M
        case 10892: return "yi";    // �N
        case 10894: return "chai";    // �O
        case 10896: return "yi";    // �P
        case 10898: return "tu";    // �Q
        case 10900: return "xi";    // �R
        case 10902: return "nu";    // �S
        case 10904: return "qian";    // �T
        case 10906: return "qiu";    // �U
        case 10908: return "jian";    // �V
        case 10910: return "pi";    // �W
        case 10912: return "ya";    // �X
        case 10914: return "yin";    // �Y
        case 10916: return "ba";    // �Z
        case 10918: return "fang";    // �[
        case 10920: return "qin";    // �\
        case 10922: return "jian";    // �]
        case 10924: return "dou";    // �^
        case 10926: return "yue";    // �_
        case 10928: return "qian";    // �`
        case 10930: return "fu";    // �a
        case 10932: return "bu";    // �b
        case 10934: return "na";    // �c
        case 10936: return "qin";    // �d
        case 10938: return "e";    // �e
        case 10940: return "jue";    // �f
        case 10942: return "dun";    // �g
        case 10944: return "gou";    // �h
        case 10946: return "yin";    // �i
        case 10948: return "qian";    // �j
        case 10950: return "ban";    // �k
        case 10952: return "xi";    // �l
        case 10954: return "ren";    // �m
        case 10956: return "chao";    // �n
        case 10958: return "niu";    // �o
        case 10960: return "fen";    // �p
        case 10962: return "yun";    // �q
        case 10964: return "yi";    // �r
        case 10966: return "qin";    // �s
        case 10968: return "bi";    // �t
        case 10970: return "guo";    // �u
        case 10972: return "hong";    // �v
        case 10974: return "yin";    // �w
        case 10976: return "jun";    // �x
        case 10978: return "diao";    // �y
        case 10980: return "yi";    // �z
        case 10982: return "zhong";    // �{
        case 10984: return "xi";    // �|
        case 10986: return "gai";    // �}
        case 10988: return "ri";    // �~
        case 10990: return "";    // ?
        case 10992: return "huo";    // �
        case 10994: return "tai";    // �
        case 10996: return "kang";    // �
        case 10998: return "yuan";    // �
        case 11000: return "lu";    // �
        case 11002: return "e";    // �
        case 11004: return "wen";    // �
        case 11006: return "duo";    // �
        case 11008: return "zi";    // �
        case 11010: return "ni";    // �
        case 11012: return "tu";    // �
        case 11014: return "shi";    // �
        case 11016: return "min";    // �
        case 11018: return "pi";    // �
        case 11020: return "ke";    // �
        case 11022: return "ling";    // �
        case 11024: return "bing";    // �
        case 11026: return "ci";    // �
        case 11028: return "gu";    // �
        case 11030: return "bo";    // �
        case 11032: return "pi";    // �
        case 11034: return "yu";    // �
        case 11036: return "si";    // �
        case 11038: return "zuo";    // �
        case 11040: return "bu";    // �
        case 11042: return "you";    // �
        case 11044: return "dian";    // �
        case 11046: return "jia";    // �
        case 11048: return "zhen";    // �
        case 11050: return "shi";    // �
        case 11052: return "shi";    // �
        case 11054: return "zhi";    // �
        case 11056: return "ju";    // �
        case 11058: return "zuan";    // �@
        case 11060: return "yi";    // �A
        case 11062: return "ta";    // �B
        case 11064: return "xuan";    // �C
        case 11066: return "zhao";    // �D
        case 11068: return "bao";    // �E
        case 11070: return "he";    // �F
        case 11072: return "bi";    // �G
        case 11074: return "sheng";    // �H
        case 11076: return "chu";    // �I
        case 11078: return "shi";    // �J
        case 11080: return "bo";    // �K
        case 11082: return "zhu";    // �L
        case 11084: return "chi";    // �M
        case 11086: return "za";    // �N
        case 11088: return "po";    // �O
        case 11090: return "tong";    // �P
        case 11092: return "qian";    // �Q
        case 11094: return "fu";    // �R
        case 11096: return "zhai";    // �S
        case 11098: return "mao";    // �T
        case 11100: return "qian";    // �U
        case 11102: return "fu";    // �V
        case 11104: return "li";    // �W
        case 11106: return "yue";    // �X
        case 11108: return "pi";    // �Y
        case 11110: return "yang";    // �Z
        case 11112: return "ban";    // �[
        case 11114: return "bo";    // �\
        case 11116: return "jie";    // �]
        case 11118: return "gou";    // �^
        case 11120: return "xu";    // �_
        case 11122: return "zheng";    // �`
        case 11124: return "mu";    // �a
        case 11126: return "ni";    // �b
        case 11128: return "xi";    // �c
        case 11130: return "di";    // �d
        case 11132: return "jia";    // �e
        case 11134: return "mu";    // �f
        case 11136: return "tan";    // �g
        case 11138: return "huan";    // �h
        case 11140: return "yi";    // �i
        case 11142: return "si";    // �j
        case 11144: return "kuang";    // �k
        case 11146: return "ka";    // �l
        case 11148: return "bei";    // �m
        case 11150: return "tong";    // �n
        case 11152: return "xing";    // �o
        case 11154: return "hong";    // �p
        case 11156: return "jiao";    // �q
        case 11158: return "chi";    // �r
        case 11160: return "er";    // �s
        case 11162: return "ge";    // �t
        case 11164: return "bing";    // �u
        case 11166: return "shi";    // �v
        case 11168: return "mao";    // �w
        case 11170: return "ha";    // �x
        case 11172: return "yin";    // �y
        case 11174: return "jun";    // �z
        case 11176: return "zhou";    // �{
        case 11178: return "chong";    // �|
        case 11180: return "jiong";    // �}
        case 11182: return "tong";    // �~
        case 11184: return "";    // ?
        case 11186: return "mo";    // �
        case 11188: return "lei";    // �
        case 11190: return "ji";    // �
        case 11192: return "yu";    // �
        case 11194: return "hui";    // �
        case 11196: return "ren";    // �
        case 11198: return "zun";    // �
        case 11200: return "zhi";    // �
        case 11202: return "shan";    // �
        case 11204: return "li";    // �
        case 11206: return "xi";    // �
        case 11208: return "jian";    // �
        case 11210: return "quan";    // �
        case 11212: return "pi";    // �
        case 11214: return "yi";    // �
        case 11216: return "zhu";    // �
        case 11218: return "hou";    // �
        case 11220: return "ming";    // �
        case 11222: return "kua";    // �
        case 11224: return "tiao";    // �
        case 11226: return "tian";    // �
        case 11228: return "xian";    // �
        case 11230: return "xiu";    // �
        case 11232: return "jun";    // �
        case 11234: return "cha";    // �
        case 11236: return "lao";    // �
        case 11238: return "ji";    // �
        case 11240: return "pi";    // �
        case 11242: return "ru";    // �
        case 11244: return "mi";    // �
        case 11246: return "yi";    // �
        case 11248: return "yin";    // �
        case 11250: return "guang";    // �
        case 11252: return "an";    // �@
        case 11254: return "diu";    // �A
        case 11256: return "you";    // �B
        case 11258: return "se";    // �C
        case 11260: return "kao";    // �D
        case 11262: return "jian";    // �E
        case 11264: return "si";    // �F
        case 11266: return "ai";    // �G
        case 11268: return "diao";    // �H
        case 11270: return "han";    // �I
        case 11272: return "rui";    // �J
        case 11274: return "zhi";    // �K
        case 11276: return "keng";    // �L
        case 11278: return "qiu";    // �M
        case 11280: return "xiao";    // �N
        case 11282: return "nie";    // �O
        case 11284: return "you";    // �P
        case 11286: return "zang";    // �Q
        case 11288: return "ti";    // �R
        case 11290: return "cuo";    // �S
        case 11292: return "gua";    // �T
        case 11294: return "gong";    // �U
        case 11296: return "yong";    // �V
        case 11298: return "dou";    // �W
        case 11300: return "lu";    // �X
        case 11302: return "mei";    // �Y
        case 11304: return "lang";    // �Z
        case 11306: return "wan";    // �[
        case 11308: return "xin";    // �\
        case 11310: return "yun";    // �]
        case 11312: return "bei";    // �^
        case 11314: return "su";    // �_
        case 11316: return "yu";    // �`
        case 11318: return "chan";    // �a
        case 11320: return "ding";    // �b
        case 11322: return "bo";    // �c
        case 11324: return "han";    // �d
        case 11326: return "jia";    // �e
        case 11328: return "hong";    // �f
        case 11330: return "juan";    // �g
        case 11332: return "feng";    // �h
        case 11334: return "chan";    // �i
        case 11336: return "wan";    // �j
        case 11338: return "zhi";    // �k
        case 11340: return "tuo";    // �l
        case 11342: return "juan";    // �m
        case 11344: return "hu";    // �n
        case 11346: return "wu";    // �o
        case 11348: return "tiao";    // �p
        case 11350: return "kuang";    // �q
        case 11352: return "chuo";    // �r
        case 11354: return "lue";    // �s
        case 11356: return "xiang";    // �t
        case 11358: return "qian";    // �u
        case 11360: return "shen";    // �v
        case 11362: return "han";    // �w
        case 11364: return "lue";    // �x
        case 11366: return "ye";    // �y
        case 11368: return "chu";    // �z
        case 11370: return "zeng";    // �{
        case 11372: return "ju";    // �|
        case 11374: return "xian";    // �}
        case 11376: return "e";    // �~
        case 11378: return "";    // ?
        case 11380: return "mang";    // �
        case 11382: return "pu";    // �
        case 11384: return "li";    // �
        case 11386: return "pan";    // �
        case 11388: return "dui";    // �
        case 11390: return "cheng";    // �
        case 11392: return "gao";    // �
        case 11394: return "li";    // �
        case 11396: return "te";    // �
        case 11398: return "bing";    // �
        case 11400: return "zhu";    // �
        case 11402: return "zhen";    // �
        case 11404: return "tu";    // �
        case 11406: return "liu";    // �
        case 11408: return "nie";    // �
        case 11410: return "ju";    // �
        case 11412: return "chang";    // �
        case 11414: return "yuan";    // �
        case 11416: return "jian";    // �
        case 11418: return "gang";    // �
        case 11420: return "diao";    // �
        case 11422: return "tao";    // �
        case 11424: return "chang";    // �
        case 11426: return "fen";    // �
        case 11428: return "guo";    // �
        case 11430: return "ling";    // �
        case 11432: return "pi";    // �
        case 11434: return "lu";    // �
        case 11436: return "li";    // �
        case 11438: return "qiang";    // �
        case 11440: return "pei";    // �
        case 11442: return "juan";    // �
        case 11444: return "min";    // �
        case 11446: return "zu";    // �@
        case 11448: return "beng";    // �A
        case 11450: return "an";    // �B
        case 11452: return "bei";    // �C
        case 11454: return "gan";    // �D
        case 11456: return "ya";    // �E
        case 11458: return "zhui";    // �F
        case 11460: return "lei";    // �G
        case 11462: return "a";    // �H
        case 11464: return "kong";    // �I
        case 11466: return "ta";    // �J
        case 11468: return "kun";    // �K
        case 11470: return "du";    // �L
        case 11472: return "wei";    // �M
        case 11474: return "chui";    // �N
        case 11476: return "zi";    // �O
        case 11478: return "zheng";    // �P
        case 11480: return "ben";    // �Q
        case 11482: return "nie";    // �R
        case 11484: return "zong";    // �S
        case 11486: return "dui";    // �T
        case 11488: return "tan";    // �U
        case 11490: return "ding";    // �V
        case 11492: return "yi";    // �W
        case 11494: return "qian";    // �X
        case 11496: return "zhui";    // �Y
        case 11498: return "ji";    // �Z
        case 11500: return "yu";    // �[
        case 11502: return "jin";    // �\
        case 11504: return "guan";    // �]
        case 11506: return "mao";    // �^
        case 11508: return "chang";    // �_
        case 11510: return "tian";    // �`
        case 11512: return "xi";    // �a
        case 11514: return "lian";    // �b
        case 11516: return "diao";    // �c
        case 11518: return "gu";    // �d
        case 11520: return "cuo";    // �e
        case 11522: return "shu";    // �f
        case 11524: return "zhen";    // �g
        case 11526: return "lu";    // �h
        case 11528: return "meng";    // �i
        case 11530: return "lu";    // �j
        case 11532: return "hua";    // �k
        case 11534: return "biao";    // �l
        case 11536: return "ga";    // �m
        case 11538: return "lai";    // �n
        case 11540: return "ken";    // �o
        case 11542: return "fang";    // �p
        case 11544: return "wu";    // �q
        case 11546: return "nai";    // �r
        case 11548: return "wan";    // �s
        case 11550: return "hu";    // �t
        case 11552: return "de";    // �u
        case 11554: return "xian";    // �v
        case 11556: return "pian";    // �w
        case 11558: return "huo";    // �x
        case 11560: return "liang";    // �y
        case 11562: return "fa";    // �z
        case 11564: return "men";    // �{
        case 11566: return "kai";    // �|
        case 11568: return "yang";    // �}
        case 11570: return "di";    // �~
        case 11572: return "";    // ?
        case 11574: return "lian";    // �
        case 11576: return "guo";    // �
        case 11578: return "xian";    // �
        case 11580: return "du";    // �
        case 11582: return "tu";    // �
        case 11584: return "wei";    // �
        case 11586: return "wan";    // �
        case 11588: return "fu";    // �
        case 11590: return "rou";    // �
        case 11592: return "ji";    // �
        case 11594: return "e";    // �
        case 11596: return "jun";    // �
        case 11598: return "zhen";    // �
        case 11600: return "ti";    // �
        case 11602: return "zha";    // �
        case 11604: return "hu";    // �
        case 11606: return "yang";    // �
        case 11608: return "duan";    // �
        case 11610: return "xia";    // �
        case 11612: return "yu";    // �
        case 11614: return "keng";    // �
        case 11616: return "sheng";    // �
        case 11618: return "huang";    // �
        case 11620: return "wei";    // �
        case 11622: return "fu";    // �
        case 11624: return "zhao";    // �
        case 11626: return "cha";    // �
        case 11628: return "qie";    // �
        case 11630: return "shi";    // �
        case 11632: return "hong";    // �
        case 11634: return "kui";    // �
        case 11636: return "tian";    // �
        case 11638: return "qiao";    // �
        case 11640: return "qiao";    // �@
        case 11642: return "hou";    // �A
        case 11644: return "tou";    // �B
        case 11646: return "zong";    // �C
        case 11648: return "huan";    // �D
        case 11650: return "ye";    // �E
        case 11652: return "min";    // �F
        case 11654: return "jian";    // �G
        case 11656: return "duan";    // �H
        case 11658: return "jian";    // �I
        case 11660: return "si";    // �J
        case 11662: return "kui";    // �K
        case 11664: return "hu";    // �L
        case 11666: return "xuan";    // �M
        case 11668: return "zhe";    // �N
        case 11670: return "jie";    // �O
        case 11672: return "qian";    // �P
        case 11674: return "bian";    // �Q
        case 11676: return "zhong";    // �R
        case 11678: return "zi";    // �S
        case 11680: return "xiu";    // �T
        case 11682: return "ye";    // �U
        case 11684: return "mei";    // �V
        case 11686: return "pai";    // �W
        case 11688: return "ai";    // �X
        case 11690: return "gai";    // �Y
        case 11692: return "qian";    // �Z
        case 11694: return "mei";    // �[
        case 11696: return "cha";    // �\
        case 11698: return "da";    // �]
        case 11700: return "bang";    // �^
        case 11702: return "xia";    // �_
        case 11704: return "lian";    // �`
        case 11706: return "se";    // �a
        case 11708: return "kai";    // �b
        case 11710: return "yao";    // �c
        case 11712: return "ye";    // �d
        case 11714: return "nou";    // �e
        case 11716: return "weng";    // �f
        case 11718: return "rong";    // �g
        case 11720: return "tang";    // �h
        case 11722: return "suo";    // �i
        case 11724: return "qiang";    // �j
        case 11726: return "ge";    // �k
        case 11728: return "shuo";    // �l
        case 11730: return "dui";    // �m
        case 11732: return "bo";    // �n
        case 11734: return "pan";    // �o
        case 11736: return "da";    // �p
        case 11738: return "bi";    // �q
        case 11740: return "sang";    // �r
        case 11742: return "gang";    // �s
        case 11744: return "zi";    // �t
        case 11746: return "wu";    // �u
        case 11748: return "ying";    // �v
        case 11750: return "huang";    // �w
        case 11752: return "tiao";    // �x
        case 11754: return "liu";    // �y
        case 11756: return "kai";    // �z
        case 11758: return "sun";    // �{
        case 11760: return "shi";    // �|
        case 11762: return "sou";    // �}
        case 11764: return "wan";    // �~
        case 11766: return "";    // ?
        case 11768: return "gao";    // �
        case 11770: return "zhen";    // �
        case 11772: return "zhen";    // �
        case 11774: return "lang";    // �
        case 11776: return "yi";    // �
        case 11778: return "yuan";    // �
        case 11780: return "tang";    // �
        case 11782: return "nie";    // �
        case 11784: return "xi";    // �
        case 11786: return "jia";    // �
        case 11788: return "ge";    // �
        case 11790: return "ma";    // �
        case 11792: return "juan";    // �
        case 11794: return "song";    // �
        case 11796: return "zu";    // �
        case 11798: return "suo";    // �
        case 11800: return "xia";    // �
        case 11802: return "feng";    // �
        case 11804: return "wen";    // �
        case 11806: return "na";    // �
        case 11808: return "lu";    // �
        case 11810: return "suo";    // �
        case 11812: return "ou";    // �
        case 11814: return "zu";    // �
        case 11816: return "tuan";    // �
        case 11818: return "xiu";    // �
        case 11820: return "guan";    // �
        case 11822: return "xuan";    // �
        case 11824: return "lian";    // �
        case 11826: return "shou";    // �
        case 11828: return "man";    // �
        case 11830: return "mo";    // �
        case 11832: return "luo";    // �
        case 11834: return "bi";    // �@
        case 11836: return "wei";    // �A
        case 11838: return "liao";    // �B
        case 11840: return "di";    // �C
        case 11842: return "qiao";    // �D
        case 11844: return "zong";    // �E
        case 11846: return "yi";    // �F
        case 11848: return "ao";    // �G
        case 11850: return "keng";    // �H
        case 11852: return "qiang";    // �I
        case 11854: return "cui";    // �J
        case 11856: return "qi";    // �K
        case 11858: return "chang";    // �L
        case 11860: return "tang";    // �M
        case 11862: return "man";    // �N
        case 11864: return "yong";    // �O
        case 11866: return "chan";    // �P
        case 11868: return "feng";    // �Q
        case 11870: return "jing";    // �R
        case 11872: return "biao";    // �S
        case 11874: return "shu";    // �T
        case 11876: return "lou";    // �U
        case 11878: return "xiu";    // �V
        case 11880: return "cong";    // �W
        case 11882: return "long";    // �X
        case 11884: return "zan";    // �Y
        case 11886: return "jian";    // �Z
        case 11888: return "cao";    // �[
        case 11890: return "li";    // �\
        case 11892: return "xia";    // �]
        case 11894: return "xi";    // �^
        case 11896: return "kang";    // �_
        case 11898: return "shuang";    // �`
        case 11900: return "beng";    // �a
        case 11902: return "zhang";    // �b
        case 11904: return "qian";    // �c
        case 11906: return "cheng";    // �d
        case 11908: return "lu";    // �e
        case 11910: return "hua";    // �f
        case 11912: return "ji";    // �g
        case 11914: return "pu";    // �h
        case 11916: return "hui";    // �i
        case 11918: return "qiang";    // �j
        case 11920: return "po";    // �k
        case 11922: return "lin";    // �l
        case 11924: return "se";    // �m
        case 11926: return "xiu";    // �n
        case 11928: return "xian";    // �o
        case 11930: return "cheng";    // �p
        case 11932: return "kui";    // �q
        case 11934: return "si";    // �r
        case 11936: return "liu";    // �s
        case 11938: return "nao";    // �t
        case 11940: return "huang";    // �u
        case 11942: return "pie";    // �v
        case 11944: return "sui";    // �w
        case 11946: return "fan";    // �x
        case 11948: return "qiao";    // �y
        case 11950: return "quan";    // �z
        case 11952: return "yang";    // �{
        case 11954: return "tang";    // �|
        case 11956: return "xiang";    // �}
        case 11958: return "yu";    // �~
        case 11960: return "";    // ?
        case 11962: return "jiao";    // �
        case 11964: return "zun";    // �
        case 11966: return "liao";    // �
        case 11968: return "qie";    // �
        case 11970: return "lao";    // �
        case 11972: return "dun";    // �
        case 11974: return "tan";    // �
        case 11976: return "zan";    // �
        case 11978: return "ji";    // �
        case 11980: return "jian";    // �
        case 11982: return "zhong";    // �
        case 11984: return "deng";    // �
        case 11986: return "ya";    // �
        case 11988: return "ying";    // �
        case 11990: return "dui";    // �
        case 11992: return "jue";    // �
        case 11994: return "nou";    // �
        case 11996: return "ti";    // �
        case 11998: return "pu";    // �
        case 12000: return "die";    // �
        case 12002: return "fan";    // �
        case 12004: return "zhang";    // �
        case 12006: return "ding";    // �
        case 12008: return "shan";    // �
        case 12010: return "kai";    // �
        case 12012: return "jian";    // �
        case 12014: return "fei";    // �
        case 12016: return "sui";    // �
        case 12018: return "lu";    // �
        case 12020: return "juan";    // �
        case 12022: return "hui";    // �
        case 12024: return "yu";    // �
        case 12026: return "lian";    // �
        case 12028: return "zhuo";    // �@
        case 12030: return "qiao";    // �A
        case 12032: return "jian";    // �B
        case 12034: return "zhuo";    // �C
        case 12036: return "lei";    // �D
        case 12038: return "bei";    // �E
        case 12040: return "tie";    // �F
        case 12042: return "huan";    // �G
        case 12044: return "ye";    // �H
        case 12046: return "duo";    // �I
        case 12048: return "guo";    // �J
        case 12050: return "cheng";    // �K
        case 12052: return "ju";    // �L
        case 12054: return "fen";    // �M
        case 12056: return "da";    // �N
        case 12058: return "yi";    // �O
        case 12060: return "ai";    // �P
        case 12062: return "zong";    // �Q
        case 12064: return "xun";    // �R
        case 12066: return "diao";    // �S
        case 12068: return "zhu";    // �T
        case 12070: return "heng";    // �U
        case 12072: return "zhui";    // �V
        case 12074: return "ji";    // �W
        case 12076: return "ni";    // �X
        case 12078: return "he";    // �Y
        case 12080: return "huo";    // �Z
        case 12082: return "qing";    // �[
        case 12084: return "bin";    // �\
        case 12086: return "ying";    // �]
        case 12088: return "kui";    // �^
        case 12090: return "ning";    // �_
        case 12092: return "xu";    // �`
        case 12094: return "jian";    // �a
        case 12096: return "jian";    // �b
        case 12098: return "qian";    // �c
        case 12100: return "cha";    // �d
        case 12102: return "zhi";    // �e
        case 12104: return "mi";    // �f
        case 12106: return "li";    // �g
        case 12108: return "lei";    // �h
        case 12110: return "ji";    // �i
        case 12112: return "zuan";    // �j
        case 12114: return "kuang";    // �k
        case 12116: return "shang";    // �l
        case 12118: return "peng";    // �m
        case 12120: return "la";    // �n
        case 12122: return "du";    // �o
        case 12124: return "shuo";    // �p
        case 12126: return "chuo";    // �q
        case 12128: return "lu";    // �r
        case 12130: return "biao";    // �s
        case 12132: return "bao";    // �t
        case 12134: return "lu";    // �u
        case 12136: return "xian";    // �v
        case 12138: return "kuan";    // �w
        case 12140: return "long";    // �x
        case 12142: return "e";    // �y
        case 12144: return "lu";    // �z
        case 12146: return "jian";    // �{
        case 12148: return "lan";    // �|
        case 12150: return "bo";    // �}
        case 12152: return "jian";    // �~
        case 12154: return "";    // ?
        case 12156: return "yao";    // �
        case 12158: return "chan";    // �
        case 12160: return "xiang";    // �
        case 12162: return "jian";    // �
        case 12164: return "xi";    // �
        case 12166: return "guan";    // �
        case 12168: return "cang";    // �
        case 12170: return "nie";    // �
        case 12172: return "lei";    // �
        case 12174: return "cuan";    // �
        case 12176: return "qu";    // �
        case 12178: return "pan";    // �
        case 12180: return "luo";    // �
        case 12182: return "zuan";    // �
        case 12184: return "luan";    // �
        case 12186: return "zao";    // �
        case 12188: return "yi";    // �
        case 12190: return "jue";    // �
        case 12192: return "tang";    // �
        case 12194: return "zhu";    // �
        case 12196: return "lan";    // �
        case 12198: return "xi";    // �
        case 12200: return "yang";    // �
        case 12202: return "jian";    // �
        case 12204: return "bao";    // �
        case 12206: return "xing";    // �
        case 12208: return "mang";    // �
        case 12210: return "ya";    // �
        case 12212: return "zhi";    // �
        case 12214: return "tian";    // �
        case 12216: return "wu";    // �
        case 12218: return "yi";    // �
        case 12220: return "chang";    // �
        case 12222: return "zhi";    // �@
        case 12224: return "ying";    // �A
        case 12226: return "huang";    // �B
        case 12228: return "zi";    // �C
        case 12230: return "bo";    // �D
        case 12232: return "tang";    // �E
        case 12234: return "rong";    // �F
        case 12236: return "beng";    // �G
        case 12238: return "liao";    // �H
        case 12240: return "huan";    // �I
        case 12242: return "la";    // �J
        case 12244: return "chan";    // �K
        case 12246: return "zhang";    // �L
        case 12248: return "zhang";    // �M
        case 12250: return "jiu";    // �N
        case 12252: return "ao";    // �O
        case 12254: return "die";    // �P
        case 12256: return "jue";    // �Q
        case 12258: return "liao";    // �R
        case 12260: return "mi";    // �S
        case 12262: return "men";    // �T
        case 12264: return "ma";    // �U
        case 12266: return "shuan";    // �V
        case 12268: return "shan";    // �W
        case 12270: return "huo";    // �X
        case 12272: return "men";    // �Y
        case 12274: return "yan";    // �Z
        case 12276: return "bi";    // �[
        case 12278: return "bi";    // �\
        case 12280: return "bi";    // �]
        case 12282: return "shan";    // �^
        case 12284: return "kai";    // �_
        case 12286: return "kang";    // �`
        case 12288: return "beng";    // �a
        case 12290: return "hong";    // �b
        case 12292: return "run";    // �c
        case 12294: return "san";    // �d
        case 12296: return "xian";    // �e
        case 12298: return "jian";    // �f
        case 12300: return "jian";    // �g
        case 12302: return "min";    // �h
        case 12304: return "xia";    // �i
        case 12306: return "shui";    // �j
        case 12308: return "dou";    // �k
        case 12310: return "zha";    // �l
        case 12312: return "nao";    // �m
        case 12314: return "zhan";    // �n
        case 12316: return "peng";    // �o
        case 12318: return "e";    // �p
        case 12320: return "ling";    // �q
        case 12322: return "bian";    // �r
        case 12324: return "bi";    // �s
        case 12326: return "run";    // �t
        case 12328: return "ai";    // �u
        case 12330: return "wan";    // �v
        case 12332: return "ge";    // �w
        case 12334: return "ge";    // �x
        case 12336: return "fa";    // �y
        case 12338: return "chu";    // �z
        case 12340: return "hong";    // �{
        case 12342: return "gui";    // �|
        case 12344: return "min";    // �}
        case 12346: return "seo";    // �~
        case 12348: return "";    // ?
        case 12350: return "kun";    // �
        case 12352: return "lang";    // �
        case 12354: return "lu";    // �
        case 12356: return "ting";    // �
        case 12358: return "sha";    // �
        case 12360: return "ju";    // �
        case 12362: return "yue";    // �
        case 12364: return "yue";    // �
        case 12366: return "chan";    // �
        case 12368: return "qu";    // �
        case 12370: return "lin";    // �
        case 12372: return "chang";    // �
        case 12374: return "sha";    // �
        case 12376: return "kun";    // �
        case 12378: return "yan";    // �
        case 12380: return "wen";    // �
        case 12382: return "yan";    // �
        case 12384: return "yu";    // �
        case 12386: return "hun";    // �
        case 12388: return "yu";    // �
        case 12390: return "wen";    // �
        case 12392: return "hong";    // �
        case 12394: return "bao";    // �
        case 12396: return "hong";    // �
        case 12398: return "qu";    // �
        case 12400: return "yao";    // �
        case 12402: return "wen";    // �
        case 12404: return "pan";    // �
        case 12406: return "an";    // �
        case 12408: return "wei";    // �
        case 12410: return "yin";    // �
        case 12412: return "kuo";    // �
        case 12414: return "que";    // �
        case 12416: return "lan";    // �@
        case 12418: return "du";    // �A
        case 12420: return "quan";    // �B
        case 12422: return "pai";    // �C
        case 12424: return "tian";    // �D
        case 12426: return "nie";    // �E
        case 12428: return "ta";    // �F
        case 12430: return "kai";    // �G
        case 12432: return "he";    // �H
        case 12434: return "que";    // �I
        case 12436: return "chuang";    // �J
        case 12438: return "wan";    // �K
        case 12440: return "dou";    // �L
        case 12442: return "qi";    // �M
        case 12444: return "kui";    // �N
        case 12446: return "tang";    // �O
        case 12448: return "guan";    // �P
        case 12450: return "piao";    // �Q
        case 12452: return "kan";    // �R
        case 12454: return "xi";    // �S
        case 12456: return "hui";    // �T
        case 12458: return "chan";    // �U
        case 12460: return "pi";    // �V
        case 12462: return "dang";    // �W
        case 12464: return "huan";    // �X
        case 12466: return "ta";    // �Y
        case 12468: return "wen";    // �Z
        case 12470: return "meng";    // �[
        case 12472: return "bi";    // �\
        case 12474: return "kai";    // �]
        case 12476: return "du";    // �^
        case 12478: return "hui";    // �_
        case 12480: return "ta";    // �`
        case 12482: return "huan";    // �a
        case 12484: return "le";    // �b
        case 12486: return "xin";    // �c
        case 12488: return "yi";    // �d
        case 12490: return "yi";    // �e
        case 12492: return "yin";    // �f
        case 12494: return "yang";    // �g
        case 12496: return "dou";    // �h
        case 12498: return "e";    // �i
        case 12500: return "sheng";    // �j
        case 12502: return "pei";    // �k
        case 12504: return "gang";    // �l
        case 12506: return "yan";    // �m
        case 12508: return "zhi";    // �n
        case 12510: return "pi";    // �o
        case 12512: return "cheng";    // �p
        case 12514: return "e";    // �q
        case 12516: return "qu";    // �r
        case 12518: return "di";    // �s
        case 12520: return "ling";    // �t
        case 12522: return "tuo";    // �u
        case 12524: return "bing";    // �v
        case 12526: return "duo";    // �w
        case 12528: return "shu";    // �x
        case 12530: return "duo";    // �y
        case 12532: return "er";    // �z
        case 12534: return "gui";    // �{
        case 12536: return "yu";    // �|
        case 12538: return "jun";    // �}
        case 12540: return "qiao";    // �~
        case 12542: return "";    // ?
        case 12544: return "jing";    // �
        case 12546: return "chun";    // �
        case 12548: return "wu";    // �
        case 12550: return "xia";    // �
        case 12552: return "shan";    // �
        case 12554: return "sheng";    // �
        case 12556: return "bu";    // �
        case 12558: return "zhen";    // �
        case 12560: return "xian";    // �
        case 12562: return "dao";    // �
        case 12564: return "pei";    // �
        case 12566: return "yi";    // �
        case 12568: return "dui";    // �
        case 12570: return "lun";    // �
        case 12572: return "yin";    // �
        case 12574: return "ju";    // �
        case 12576: return "chen";    // �
        case 12578: return "lu";    // �
        case 12580: return "sheng";    // �
        case 12582: return "xian";    // �
        case 12584: return "yin";    // �
        case 12586: return "du";    // �
        case 12588: return "yang";    // �
        case 12590: return "er";    // �
        case 12592: return "xia";    // �
        case 12594: return "chong";    // �
        case 12596: return "yan";    // �
        case 12598: return "yin";    // �
        case 12600: return "yu";    // �
        case 12602: return "di";    // �
        case 12604: return "wei";    // �
        case 12606: return "nie";    // �
        case 12608: return "dui";    // �
        case 12610: return "an";    // �@
        case 12612: return "jie";    // �A
        case 12614: return "ai";    // �B
        case 12616: return "yan";    // �C
        case 12618: return "duo";    // �D
        case 12620: return "yun";    // �E
        case 12622: return "wu";    // �F
        case 12624: return "tang";    // �G
        case 12626: return "ji";    // �H
        case 12628: return "dao";    // �I
        case 12630: return "ao";    // �J
        case 12632: return "xi";    // �K
        case 12634: return "yin";    // �L
        case 12636: return "sa";    // �M
        case 12638: return "rao";    // �N
        case 12640: return "lin";    // �O
        case 12642: return "tui";    // �P
        case 12644: return "deng";    // �Q
        case 12646: return "pi";    // �R
        case 12648: return "sui";    // �S
        case 12650: return "yu";    // �T
        case 12652: return "xian";    // �U
        case 12654: return "fen";    // �V
        case 12656: return "ni";    // �W
        case 12658: return "er";    // �X
        case 12660: return "ji";    // �Y
        case 12662: return "dao";    // �Z
        case 12664: return "yin";    // �[
        case 12666: return "zhi";    // �\
        case 12668: return "long";    // �]
        case 12670: return "xi";    // �^
        case 12672: return "li";    // �_
        case 12674: return "li";    // �`
        case 12676: return "he";    // �a
        case 12678: return "zhi";    // �b
        case 12680: return "yi";    // �c
        case 12682: return "qin";    // �d
        case 12684: return "jie";    // �e
        case 12686: return "huan";    // �f
        case 12688: return "gou";    // �g
        case 12690: return "jun";    // �h
        case 12692: return "hu";    // �i
        case 12694: return "za";    // �j
        case 12696: return "yu";    // �k
        case 12698: return "chou";    // �l
        case 12700: return "sui";    // �m
        case 12702: return "han";    // �n
        case 12704: return "wo";    // �o
        case 12706: return "shuang";    // �p
        case 12708: return "guan";    // �q
        case 12710: return "chu";    // �r
        case 12712: return "za";    // �s
        case 12714: return "yong";    // �t
        case 12716: return "ji";    // �u
        case 12718: return "gui";    // �v
        case 12720: return "liu";    // �w
        case 12722: return "li";    // �x
        case 12724: return "nan";    // �y
        case 12726: return "xue";    // �z
        case 12728: return "za";    // �{
        case 12730: return "ji";    // �|
        case 12732: return "ji";    // �}
        case 12734: return "na";    // �~
        case 12736: return "";    // ?
        case 12738: return "fou";    // �
        case 12740: return "xi";    // �
        case 12742: return "mu";    // �
        case 12744: return "fen";    // �
        case 12746: return "pang";    // �
        case 12748: return "yun";    // �
        case 12750: return "chi";    // �
        case 12752: return "yang";    // �
        case 12754: return "an";    // �
        case 12756: return "wu";    // �
        case 12758: return "dian";    // �
        case 12760: return "dang";    // �
        case 12762: return "hu";    // �
        case 12764: return "diao";    // �
        case 12766: return "mu";    // �
        case 12768: return "chen";    // �
        case 12770: return "zha";    // �
        case 12772: return "ling";    // �
        case 12774: return "qi";    // �
        case 12776: return "zhou";    // �
        case 12778: return "hong";    // �
        case 12780: return "zhan";    // �
        case 12782: return "yin";    // �
        case 12784: return "zhu";    // �
        case 12786: return "tun";    // �
        case 12788: return "ling";    // �
        case 12790: return "dong";    // �
        case 12792: return "yang";    // �
        case 12794: return "wu";    // �
        case 12796: return "ling";    // �
        case 12798: return "ling";    // �
        case 12800: return "hong";    // �
        case 12802: return "yin";    // �
        case 12804: return "mai";    // �@
        case 12806: return "mai";    // �A
        case 12808: return "yun";    // �B
        case 12810: return "liu";    // �C
        case 12812: return "meng";    // �D
        case 12814: return "bin";    // �E
        case 12816: return "wu";    // �F
        case 12818: return "wei";    // �G
        case 12820: return "kuo";    // �H
        case 12822: return "xi";    // �I
        case 12824: return "yi";    // �J
        case 12826: return "dan";    // �K
        case 12828: return "teng";    // �L
        case 12830: return "yu";    // �M
        case 12832: return "long";    // �N
        case 12834: return "dai";    // �O
        case 12836: return "ji";    // �P
        case 12838: return "pang";    // �Q
        case 12840: return "yang";    // �R
        case 12842: return "wei";    // �S
        case 12844: return "feng";    // �T
        case 12846: return "xi";    // �U
        case 12848: return "ji";    // �V
        case 12850: return "mao";    // �W
        case 12852: return "meng";    // �X
        case 12854: return "lei";    // �Y
        case 12856: return "li";    // �Z
        case 12858: return "huo";    // �[
        case 12860: return "ai";    // �\
        case 12862: return "fei";    // �]
        case 12864: return "dai";    // �^
        case 12866: return "ling";    // �_
        case 12868: return "ling";    // �`
        case 12870: return "ai";    // �a
        case 12872: return "feng";    // �b
        case 12874: return "li";    // �c
        case 12876: return "bao";    // �d
        case 12878: return "he";    // �e
        case 12880: return "he";    // �f
        case 12882: return "he";    // �g
        case 12884: return "bing";    // �h
        case 12886: return "jing";    // �i
        case 12888: return "tian";    // �j
        case 12890: return "zhen";    // �k
        case 12892: return "cheng";    // �l
        case 12894: return "qing";    // �m
        case 12896: return "liang";    // �n
        case 12898: return "jing";    // �o
        case 12900: return "tian";    // �p
        case 12902: return "fei";    // �q
        case 12904: return "mian";    // �r
        case 12906: return "bao";    // �s
        case 12908: return "mian";    // �t
        case 12910: return "hui";    // �u
        case 12912: return "ye";    // �v
        case 12914: return "ding";    // �w
        case 12916: return "cha";    // �x
        case 12918: return "jian";    // �y
        case 12920: return "ren";    // �z
        case 12922: return "di";    // �{
        case 12924: return "du";    // �|
        case 12926: return "wu";    // �}
        case 12928: return "ren";    // �~
        case 12930: return "";    // ?
        case 12932: return "qin";    // �
        case 12934: return "niu";    // �
        case 12936: return "yin";    // �
        case 12938: return "sa";    // �
        case 12940: return "na";    // �
        case 12942: return "wa";    // �
        case 12944: return "zu";    // �
        case 12946: return "ban";    // �
        case 12948: return "yi";    // �
        case 12950: return "yao";    // �
        case 12952: return "tao";    // �
        case 12954: return "bai";    // �
        case 12956: return "jie";    // �
        case 12958: return "hong";    // �
        case 12960: return "pao";    // �
        case 12962: return "bing";    // �
        case 12964: return "yin";    // �
        case 12966: return "ge";    // �
        case 12968: return "tao";    // �
        case 12970: return "ji";    // �
        case 12972: return "an";    // �
        case 12974: return "hen";    // �
        case 12976: return "gong";    // �
        case 12978: return "qia";    // �
        case 12980: return "ting";    // �
        case 12982: return "ying";    // �
        case 12984: return "sui";    // �
        case 12986: return "tiao";    // �
        case 12988: return "juan";    // �
        case 12990: return "kong";    // �
        case 12992: return "beng";    // �
        case 12994: return "ta";    // �
        case 12996: return "zhang";    // �
        case 12998: return "bi";    // �@
        case 13000: return "kuo";    // �A
        case 13002: return "la";    // �B
        case 13004: return "xie";    // �C
        case 13006: return "bang";    // �D
        case 13008: return "eng";    // �E
        case 13010: return "qiu";    // �F
        case 13012: return "qiu";    // �G
        case 13014: return "he";    // �H
        case 13016: return "qiao";    // �I
        case 13018: return "mou";    // �J
        case 13020: return "jian";    // �K
        case 13022: return "di";    // �L
        case 13024: return "on";    // �M
        case 13026: return "tao";    // �N
        case 13028: return "ta";    // �O
        case 13030: return "xie";    // �P
        case 13032: return "pan";    // �Q
        case 13034: return "ge";    // �R
        case 13036: return "bi";    // �S
        case 13038: return "kuo";    // �T
        case 13040: return "tang";    // �U
        case 13042: return "lou";    // �V
        case 13044: return "gui";    // �W
        case 13046: return "qiao";    // �X
        case 13048: return "xue";    // �Y
        case 13050: return "ji";    // �Z
        case 13052: return "jian";    // �[
        case 13054: return "jiang";    // �\
        case 13056: return "chan";    // �]
        case 13058: return "da";    // �^
        case 13060: return "hu";    // �_
        case 13062: return "xian";    // �`
        case 13064: return "qian";    // �a
        case 13066: return "du";    // �b
        case 13068: return "wa";    // �c
        case 13070: return "jian";    // �d
        case 13072: return "lan";    // �e
        case 13074: return "wei";    // �f
        case 13076: return "ren";    // �g
        case 13078: return "fu";    // �h
        case 13080: return "wa";    // �i
        case 13082: return "juan";    // �j
        case 13084: return "ge";    // �k
        case 13086: return "wei";    // �l
        case 13088: return "qiao";    // �m
        case 13090: return "han";    // �n
        case 13092: return "chang";    // �o
        case 13094: return "kuo";    // �p
        case 13096: return "rou";    // �q
        case 13098: return "yun";    // �r
        case 13100: return "she";    // �s
        case 13102: return "wei";    // �t
        case 13104: return "ge";    // �u
        case 13106: return "bai";    // �v
        case 13108: return "tao";    // �w
        case 13110: return "bei";    // �x
        case 13112: return "yun";    // �y
        case 13114: return "gao";    // �z
        case 13116: return "bi";    // �{
        case 13118: return "wei";    // �|
        case 13120: return "hui";    // �}
        case 13122: return "du";    // �~
        case 13124: return "";    // ?
        case 13126: return "wa";    // �
        case 13128: return "du";    // �
        case 13130: return "fu";    // �
        case 13132: return "jiu";    // �
        case 13134: return "xian";    // �
        case 13136: return "xie";    // �
        case 13138: return "xian";    // �
        case 13140: return "ji";    // �
        case 13142: return "za";    // �
        case 13144: return "le";    // �
        case 13146: return "peng";    // �
        case 13148: return "ying";    // �
        case 13150: return "ying";    // �
        case 13152: return "yun";    // �
        case 13154: return "peng";    // �
        case 13156: return "an";    // �
        case 13158: return "yin";    // �
        case 13160: return "xiang";    // �
        case 13162: return "hu";    // �
        case 13164: return "ye";    // �
        case 13166: return "ding";    // �
        case 13168: return "qing";    // �
        case 13170: return "kui";    // �
        case 13172: return "xiang";    // �
        case 13174: return "shun";    // �
        case 13176: return "an";    // �
        case 13178: return "xu";    // �
        case 13180: return "yi";    // �
        case 13182: return "xu";    // �
        case 13184: return "gu";    // �
        case 13186: return "song";    // �
        case 13188: return "kui";    // �
        case 13190: return "ken";    // �
        case 13192: return "gang";    // �@
        case 13194: return "yu";    // �A
        case 13196: return "wan";    // �B
        case 13198: return "ban";    // �C
        case 13200: return "dun";    // �D
        case 13202: return "di";    // �E
        case 13204: return "dan";    // �F
        case 13206: return "pan";    // �G
        case 13208: return "po";    // �H
        case 13210: return "ling";    // �I
        case 13212: return "che";    // �J
        case 13214: return "jing";    // �K
        case 13216: return "lei";    // �L
        case 13218: return "he";    // �M
        case 13220: return "qiao";    // �N
        case 13222: return "e";    // �O
        case 13224: return "e";    // �P
        case 13226: return "wei";    // �Q
        case 13228: return "jie";    // �R
        case 13230: return "kuo";    // �S
        case 13232: return "shen";    // �T
        case 13234: return "yi";    // �U
        case 13236: return "yi";    // �V
        case 13238: return "ke";    // �W
        case 13240: return "dui";    // �X
        case 13242: return "yu";    // �Y
        case 13244: return "ping";    // �Z
        case 13246: return "lei";    // �[
        case 13248: return "tiao";    // �\
        case 13250: return "jia";    // �]
        case 13252: return "tou";    // �^
        case 13254: return "pou";    // �_
        case 13256: return "kui";    // �`
        case 13258: return "jia";    // �a
        case 13260: return "luo";    // �b
        case 13262: return "ting";    // �c
        case 13264: return "cheng";    // �d
        case 13266: return "ying";    // �e
        case 13268: return "yun";    // �f
        case 13270: return "hu";    // �g
        case 13272: return "han";    // �h
        case 13274: return "jing";    // �i
        case 13276: return "tui";    // �j
        case 13278: return "tui";    // �k
        case 13280: return "pin";    // �l
        case 13282: return "lai";    // �m
        case 13284: return "tui";    // �n
        case 13286: return "zi";    // �o
        case 13288: return "zi";    // �p
        case 13290: return "chui";    // �q
        case 13292: return "ding";    // �r
        case 13294: return "lai";    // �s
        case 13296: return "tan";    // �t
        case 13298: return "han";    // �u
        case 13300: return "qian";    // �v
        case 13302: return "ke";    // �w
        case 13304: return "zu";    // �x
        case 13306: return "jiong";    // �y
        case 13308: return "qin";    // �z
        case 13310: return "yi";    // �{
        case 13312: return "sai";    // �|
        case 13314: return "ti";    // �}
        case 13316: return "e";    // �~
        case 13318: return "";    // ?
        case 13320: return "e";    // �
        case 13322: return "yan";    // �
        case 13324: return "wen";    // �
        case 13326: return "yan";    // �
        case 13328: return "yu";    // �
        case 13330: return "zhuan";    // �
        case 13332: return "ya";    // �
        case 13334: return "xian";    // �
        case 13336: return "pi";    // �
        case 13338: return "yi";    // �
        case 13340: return "yuan";    // �
        case 13342: return "sang";    // �
        case 13344: return "dian";    // �
        case 13346: return "dian";    // �
        case 13348: return "jiang";    // �
        case 13350: return "kua";    // �
        case 13352: return "lei";    // �
        case 13354: return "lao";    // �
        case 13356: return "piao";    // �
        case 13358: return "wai";    // �
        case 13360: return "man";    // �
        case 13362: return "cu";    // �
        case 13364: return "yao";    // �
        case 13366: return "hao";    // �
        case 13368: return "qiao";    // �
        case 13370: return "gu";    // �
        case 13372: return "xun";    // �
        case 13374: return "yan";    // �
        case 13376: return "hui";    // �
        case 13378: return "chan";    // �
        case 13380: return "ru";    // �
        case 13382: return "meng";    // �
        case 13384: return "bin";    // �
        case 13386: return "xian";    // �@
        case 13388: return "pin";    // �A
        case 13390: return "lu";    // �B
        case 13392: return "lan";    // �C
        case 13394: return "nie";    // �D
        case 13396: return "quan";    // �E
        case 13398: return "ting";    // �F
        case 13400: return "jiong";    // �G
        case 13402: return "pou";    // �H
        case 13404: return "ying";    // �I
        case 13406: return "yu";    // �J
        case 13408: return "lei";    // �K
        case 13410: return "feng";    // �L
        case 13412: return "diao";    // �M
        case 13414: return "gua";    // �N
        case 13416: return "fu";    // �O
        case 13418: return "xia";    // �P
        case 13420: return "zhan";    // �Q
        case 13422: return "pao";    // �R
        case 13424: return "sa";    // �S
        case 13426: return "ba";    // �T
        case 13428: return "tai";    // �U
        case 13430: return "lie";    // �V
        case 13432: return "ji";    // �W
        case 13434: return "xuan";    // �X
        case 13436: return "xiao";    // �Y
        case 13438: return "ju";    // �Z
        case 13440: return "biao";    // �[
        case 13442: return "si";    // �\
        case 13444: return "wei";    // �]
        case 13446: return "yang";    // �^
        case 13448: return "yao";    // �_
        case 13450: return "sou";    // �`
        case 13452: return "kai";    // �a
        case 13454: return "sao";    // �b
        case 13456: return "fan";    // �c
        case 13458: return "liu";    // �d
        case 13460: return "xi";    // �e
        case 13462: return "liu";    // �f
        case 13464: return "piao";    // �g
        case 13466: return "piao";    // �h
        case 13468: return "liu";    // �i
        case 13470: return "biao";    // �j
        case 13472: return "biao";    // �k
        case 13474: return "biao";    // �l
        case 13476: return "liao";    // �m
        case 13478: return "biao";    // �n
        case 13480: return "se";    // �o
        case 13482: return "feng";    // �p
        case 13484: return "xiu";    // �q
        case 13486: return "yang";    // �r
        case 13488: return "zhan";    // �s
        case 13490: return "si";    // �t
        case 13492: return "yao";    // �u
        case 13494: return "liu";    // �v
        case 13496: return "fei";    // �w
        case 13498: return "fan";    // �x
        case 13500: return "fei";    // �y
        case 13502: return "shi";    // �z
        case 13504: return "can";    // �{
        case 13506: return "ji";    // �|
        case 13508: return "ding";    // �}
        case 13510: return "si";    // �~
        case 13512: return "";    // ?
        case 13514: return "tuo";    // �
        case 13516: return "gan";    // �
        case 13518: return "tun";    // �
        case 13520: return "ren";    // �
        case 13522: return "yu";    // �
        case 13524: return "yang";    // �
        case 13526: return "chi";    // �
        case 13528: return "yin";    // �
        case 13530: return "fan";    // �
        case 13532: return "fan";    // �
        case 13534: return "can";    // �
        case 13536: return "yin";    // �
        case 13538: return "zhu";    // �
        case 13540: return "yi";    // �
        case 13542: return "zuo";    // �
        case 13544: return "bi";    // �
        case 13546: return "jie";    // �
        case 13548: return "tao";    // �
        case 13550: return "bao";    // �
        case 13552: return "ci";    // �
        case 13554: return "tie";    // �
        case 13556: return "si";    // �
        case 13558: return "bao";    // �
        case 13560: return "shi";    // �
        case 13562: return "duo";    // �
        case 13564: return "hai";    // �
        case 13566: return "ren";    // �
        case 13568: return "tian";    // �
        case 13570: return "jiao";    // �
        case 13572: return "he";    // �
        case 13574: return "bing";    // �
        case 13576: return "yao";    // �
        case 13578: return "tong";    // �
        case 13580: return "ci";    // �@
        case 13582: return "xiang";    // �A
        case 13584: return "yang";    // �B
        case 13586: return "juan";    // �C
        case 13588: return "er";    // �D
        case 13590: return "le";    // �E
        case 13592: return "xi";    // �F
        case 13594: return "bo";    // �G
        case 13596: return "nei";    // �H
        case 13598: return "e";    // �I
        case 13600: return "bu";    // �J
        case 13602: return "jun";    // �K
        case 13604: return "dou";    // �L
        case 13606: return "su";    // �M
        case 13608: return "yu";    // �N
        case 13610: return "xi";    // �O
        case 13612: return "yao";    // �P
        case 13614: return "hun";    // �Q
        case 13616: return "guo";    // �R
        case 13618: return "chi";    // �S
        case 13620: return "jian";    // �T
        case 13622: return "zhui";    // �U
        case 13624: return "bing";    // �V
        case 13626: return "xian";    // �W
        case 13628: return "bu";    // �X
        case 13630: return "ye";    // �Y
        case 13632: return "dan";    // �Z
        case 13634: return "fei";    // �[
        case 13636: return "zhang";    // �\
        case 13638: return "wei";    // �]
        case 13640: return "guan";    // �^
        case 13642: return "e";    // �_
        case 13644: return "nuan";    // �`
        case 13646: return "yun";    // �a
        case 13648: return "hu";    // �b
        case 13650: return "huang";    // �c
        case 13652: return "hui";    // �d
        case 13654: return "jian";    // �e
        case 13656: return "hou";    // �f
        case 13658: return "ai";    // �g
        case 13660: return "tang";    // �h
        case 13662: return "fen";    // �i
        case 13664: return "wei";    // �j
        case 13666: return "gu";    // �k
        case 13668: return "zha";    // �l
        case 13670: return "song";    // �m
        case 13672: return "tang";    // �n
        case 13674: return "bo";    // �o
        case 13676: return "gao";    // �p
        case 13678: return "xi";    // �q
        case 13680: return "kui";    // �r
        case 13682: return "liu";    // �s
        case 13684: return "sou";    // �t
        case 13686: return "tao";    // �u
        case 13688: return "ye";    // �v
        case 13690: return "wen";    // �w
        case 13692: return "mo";    // �x
        case 13694: return "tang";    // �y
        case 13696: return "man";    // �z
        case 13698: return "bi";    // �{
        case 13700: return "yu";    // �|
        case 13702: return "xiu";    // �}
        case 13704: return "jin";    // �~
        case 13706: return "";    // ?
        case 13708: return "san";    // ��
        case 13710: return "kui";    // ��
        case 13712: return "zhuan";    // ��
        case 13714: return "shan";    // ��
        case 13716: return "chi";    // ��
        case 13718: return "dan";    // ��
        case 13720: return "yi";    // ��
        case 13722: return "qi";    // ��
        case 13724: return "rao";    // ��
        case 13726: return "cheng";    // ��
        case 13728: return "wei";    // ��
        case 13730: return "xiang";    // ��
        case 13732: return "zhan";    // ��
        case 13734: return "fen";    // ��
        case 13736: return "hai";    // ��
        case 13738: return "meng";    // ��
        case 13740: return "yan";    // �
        case 13742: return "mo";    // �
        case 13744: return "chan";    // �
        case 13746: return "xiang";    // �
        case 13748: return "luo";    // �
        case 13750: return "zan";    // �
        case 13752: return "nang";    // �
        case 13754: return "ding";    // �
        case 13756: return "tuo";    // �
        case 13758: return "duo";    // �
        case 13760: return "he";    // �
        case 13762: return "le";    // �
        case 13764: return "xi";    // �
        case 13766: return "dou";    // �
        case 13768: return "jun";    // �
        case 13770: return "guo";    // �
        case 13772: return "gu";    // �
        case 13774: return "ye";    // �@
        case 13776: return "bo";    // �A
        case 13778: return "fen";    // �B
        case 13780: return "bo";    // �C
        case 13782: return "ni";    // �D
        case 13784: return "bi";    // �E
        case 13786: return "bo";    // �F
        case 13788: return "tu";    // �G
        case 13790: return "han";    // �H
        case 13792: return "fei";    // �I
        case 13794: return "jian";    // �J
        case 13796: return "an";    // �K
        case 13798: return "ai";    // �L
        case 13800: return "xian";    // �M
        case 13802: return "wo";    // �N
        case 13804: return "fen";    // �O
        case 13806: return "pin";    // �P
        case 13808: return "xin";    // �Q
        case 13810: return "ma";    // �R
        case 13812: return "yu";    // �S
        case 13814: return "feng";    // �T
        case 13816: return "han";    // �U
        case 13818: return "di";    // �V
        case 13820: return "tuo";    // �W
        case 13822: return "tuo";    // �X
        case 13824: return "chi";    // �Y
        case 13826: return "xun";    // �Z
        case 13828: return "zhu";    // �[
        case 13830: return "zhi";    // �\
        case 13832: return "pei";    // �]
        case 13834: return "jin";    // �^
        case 13836: return "ri";    // �_
        case 13838: return "sa";    // �`
        case 13840: return "yun";    // �a
        case 13842: return "wen";    // �b
        case 13844: return "zhi";    // �c
        case 13846: return "dan";    // �d
        case 13848: return "lu";    // �e
        case 13850: return "you";    // �f
        case 13852: return "bo";    // �g
        case 13854: return "bao";    // �h
        case 13856: return "kuai";    // �i
        case 13858: return "duo";    // �j
        case 13860: return "yi";    // �k
        case 13862: return "qu";    // �l
        case 13864: return "pu";    // �m
        case 13866: return "qu";    // �n
        case 13868: return "jiong";    // �o
        case 13870: return "po";    // �p
        case 13872: return "zhao";    // �q
        case 13874: return "yuan";    // �r
        case 13876: return "pei";    // �s
        case 13878: return "zhou";    // �t
        case 13880: return "ju";    // �u
        case 13882: return "zhu";    // �v
        case 13884: return "nu";    // �w
        case 13886: return "ju";    // �x
        case 13888: return "pi";    // �y
        case 13890: return "zang";    // �z
        case 13892: return "jia";    // �{
        case 13894: return "ling";    // �|
        case 13896: return "zhen";    // �}
        case 13898: return "tai";    // �~
        case 13900: return "";    // ?
        case 13902: return "fu";    // �
        case 13904: return "yang";    // �
        case 13906: return "shi";    // �
        case 13908: return "bi";    // �
        case 13910: return "tuo";    // �
        case 13912: return "tuo";    // �
        case 13914: return "si";    // �
        case 13916: return "liu";    // �
        case 13918: return "ma";    // �
        case 13920: return "pian";    // �
        case 13922: return "tao";    // �
        case 13924: return "zhi";    // �
        case 13926: return "rong";    // �
        case 13928: return "teng";    // �
        case 13930: return "dong";    // �
        case 13932: return "xuan";    // �
        case 13934: return "quan";    // �
        case 13936: return "shen";    // �
        case 13938: return "jiong";    // �
        case 13940: return "er";    // �
        case 13942: return "hai";    // �
        case 13944: return "bo";    // �
        case 13946: return "zhu";    // �
        case 13948: return "yin";    // �
        case 13950: return "luo";    // �
        case 13952: return "zhou";    // �
        case 13954: return "dan";    // �
        case 13956: return "hai";    // �
        case 13958: return "liu";    // �
        case 13960: return "ju";    // �
        case 13962: return "song";    // �
        case 13964: return "qin";    // �
        case 13966: return "mang";    // �
        case 13968: return "liang";    // �@
        case 13970: return "han";    // �A
        case 13972: return "tu";    // �B
        case 13974: return "xuan";    // �C
        case 13976: return "tui";    // �D
        case 13978: return "jun";    // �E
        case 13980: return "e";    // �F
        case 13982: return "cheng";    // �G
        case 13984: return "xing";    // �H
        case 13986: return "ai";    // �I
        case 13988: return "lu";    // �J
        case 13990: return "zhui";    // �K
        case 13992: return "dong";    // �L
        case 13994: return "she";    // �M
        case 13996: return "pian";    // �N
        case 13998: return "kun";    // �O
        case 14000: return "tao";    // �P
        case 14002: return "lai";    // �Q
        case 14004: return "zong";    // �R
        case 14006: return "ke";    // �S
        case 14008: return "qi";    // �T
        case 14010: return "qi";    // �U
        case 14012: return "yan";    // �V
        case 14014: return "fei";    // �W
        case 14016: return "sao";    // �X
        case 14018: return "yan";    // �Y
        case 14020: return "ge";    // �Z
        case 14022: return "yao";    // �[
        case 14024: return "wu";    // �\
        case 14026: return "pian";    // �]
        case 14028: return "cong";    // �^
        case 14030: return "pian";    // �_
        case 14032: return "qian";    // �`
        case 14034: return "fei";    // �a
        case 14036: return "huang";    // �b
        case 14038: return "qian";    // �c
        case 14040: return "huo";    // �d
        case 14042: return "yu";    // �e
        case 14044: return "ti";    // �f
        case 14046: return "quan";    // �g
        case 14048: return "xia";    // �h
        case 14050: return "zong";    // �i
        case 14052: return "kui";    // �j
        case 14054: return "rou";    // �k
        case 14056: return "si";    // �l
        case 14058: return "gua";    // �m
        case 14060: return "tuo";    // �n
        case 14062: return "tui";    // �o
        case 14064: return "sou";    // �p
        case 14066: return "qian";    // �q
        case 14068: return "cheng";    // �r
        case 14070: return "zhi";    // �s
        case 14072: return "liu";    // �t
        case 14074: return "bang";    // �u
        case 14076: return "teng";    // �v
        case 14078: return "xi";    // �w
        case 14080: return "cao";    // �x
        case 14082: return "du";    // �y
        case 14084: return "yan";    // �z
        case 14086: return "yuan";    // �{
        case 14088: return "zhu";    // �|
        case 14090: return "sao";    // �}
        case 14092: return "shan";    // �~
        case 14094: return "";    // ?
        case 14096: return "qi";    // �
        case 14098: return "zhi";    // �
        case 14100: return "shuang";    // �
        case 14102: return "lu";    // �
        case 14104: return "xi";    // �
        case 14106: return "luo";    // �
        case 14108: return "zhang";    // �
        case 14110: return "mo";    // �
        case 14112: return "ao";    // �
        case 14114: return "can";    // �
        case 14116: return "biao";    // �
        case 14118: return "cong";    // �
        case 14120: return "qu";    // �
        case 14122: return "bi";    // �
        case 14124: return "zhi";    // �
        case 14126: return "yu";    // �
        case 14128: return "xu";    // �
        case 14130: return "hua";    // �
        case 14132: return "bo";    // �
        case 14134: return "su";    // �
        case 14136: return "xiao";    // �
        case 14138: return "lin";    // �
        case 14140: return "zhan";    // �
        case 14142: return "dun";    // �
        case 14144: return "liu";    // �
        case 14146: return "tuo";    // �
        case 14148: return "ceng";    // �
        case 14150: return "dian";    // �
        case 14152: return "jiao";    // �
        case 14154: return "tie";    // �
        case 14156: return "yan";    // �
        case 14158: return "luo";    // �
        case 14160: return "zhan";    // �
        case 14162: return "jing";    // �@
        case 14164: return "yi";    // �A
        case 14166: return "ye";    // �B
        case 14168: return "tuo";    // �C
        case 14170: return "pin";    // �D
        case 14172: return "zhou";    // �E
        case 14174: return "yan";    // �F
        case 14176: return "long";    // �G
        case 14178: return "lu";    // �H
        case 14180: return "teng";    // �I
        case 14182: return "xiang";    // �J
        case 14184: return "ji";    // �K
        case 14186: return "shuang";    // �L
        case 14188: return "ju";    // �M
        case 14190: return "xi";    // �N
        case 14192: return "huan";    // �O
        case 14194: return "li";    // �P
        case 14196: return "biao";    // �Q
        case 14198: return "ri";    // �R
        case 14200: return "yin";    // �S
        case 14202: return "biao";    // �T
        case 14204: return "xing";    // �U
        case 14206: return "qin";    // �V
        case 14208: return "zong";    // �W
        case 14210: return "su";    // �X
        case 14212: return "kui";    // �Y
        case 14214: return "shuang";    // �Z
        case 14216: return "wei";    // �[
        case 14218: return "wei";    // �\
        case 14220: return "wei";    // �]
        case 14222: return "yu";    // �^
        case 14224: return "gan";    // �_
        case 14226: return "yi";    // �`
        case 14228: return "ang";    // �a
        case 14230: return "bao";    // �b
        case 14232: return "bei";    // �c
        case 14234: return "zhai";    // �d
        case 14236: return "ti";    // �e
        case 14238: return "jiao";    // �f
        case 14240: return "kua";    // �g
        case 14242: return "tui";    // �h
        case 14244: return "geng";    // �i
        case 14246: return "pian";    // �j
        case 14248: return "yu";    // �k
        case 14250: return "sui";    // �l
        case 14252: return "bo";    // �m
        case 14254: return "xiao";    // �n
        case 14256: return "pang";    // �o
        case 14258: return "bo";    // �p
        case 14260: return "ci";    // �q
        case 14262: return "mo";    // �r
        case 14264: return "liao";    // �s
        case 14266: return "lou";    // �t
        case 14268: return "xiao";    // �u
        case 14270: return "zang";    // �v
        case 14272: return "ti";    // �w
        case 14274: return "bin";    // �x
        case 14276: return "kuan";    // �y
        case 14278: return "lu";    // �z
        case 14280: return "gao";    // �{
        case 14282: return "qiao";    // �|
        case 14284: return "kao";    // �}
        case 14286: return "qiao";    // �~
        case 14288: return "";    // ?
        case 14290: return "lao";    // �
        case 14292: return "sao";    // �
        case 14294: return "kun";    // �
        case 14296: return "di";    // �
        case 14298: return "fang";    // �
        case 14300: return "xiu";    // �
        case 14302: return "ran";    // �
        case 14304: return "dan";    // �
        case 14306: return "kun";    // �
        case 14308: return "bin";    // �
        case 14310: return "fa";    // �
        case 14312: return "pi";    // �
        case 14314: return "fa";    // �
        case 14316: return "ti";    // �
        case 14318: return "bao";    // �
        case 14320: return "bi";    // �
        case 14322: return "mao";    // �
        case 14324: return "fei";    // �
        case 14326: return "er";    // �
        case 14328: return "er";    // �
        case 14330: return "qu";    // �
        case 14332: return "gong";    // �
        case 14334: return "yue";    // �
        case 14336: return "peng";    // �
        case 14338: return "zhua";    // �
        case 14340: return "shao";    // �
        case 14342: return "suo";    // �
        case 14344: return "ti";    // �
        case 14346: return "li";    // �
        case 14348: return "bin";    // �
        case 14350: return "di";    // �
        case 14352: return "peng";    // �
        case 14354: return "song";    // �
        case 14356: return "zheng";    // �@
        case 14358: return "zong";    // �A
        case 14360: return "shun";    // �B
        case 14362: return "jian";    // �C
        case 14364: return "duo";    // �D
        case 14366: return "hu";    // �E
        case 14368: return "la";    // �F
        case 14370: return "qi";    // �G
        case 14372: return "lian";    // �H
        case 14374: return "zhen";    // �I
        case 14376: return "peng";    // �J
        case 14378: return "ma";    // �K
        case 14380: return "san";    // �L
        case 14382: return "man";    // �M
        case 14384: return "man";    // �N
        case 14386: return "seng";    // �O
        case 14388: return "xu";    // �P
        case 14390: return "lie";    // �Q
        case 14392: return "qian";    // �R
        case 14394: return "qian";    // �S
        case 14396: return "nang";    // �T
        case 14398: return "kuo";    // �U
        case 14400: return "ning";    // �V
        case 14402: return "bin";    // �W
        case 14404: return "ning";    // �X
        case 14406: return "dou";    // �Y
        case 14408: return "dou";    // �Z
        case 14410: return "nao";    // �[
        case 14412: return "xiang";    // �\
        case 14414: return "xi";    // �]
        case 14416: return "dou";    // �^
        case 14418: return "han";    // �_
        case 14420: return "dou";    // �`
        case 14422: return "dou";    // �a
        case 14424: return "jiu";    // �b
        case 14426: return "yu";    // �c
        case 14428: return "yu";    // �d
        case 14430: return "yan";    // �e
        case 14432: return "fu";    // �f
        case 14434: return "qin";    // �g
        case 14436: return "gui";    // �h
        case 14438: return "zeng";    // �i
        case 14440: return "liu";    // �j
        case 14442: return "gui";    // �k
        case 14444: return "shang";    // �l
        case 14446: return "mei";    // �m
        case 14448: return "ji";    // �n
        case 14450: return "qi";    // �o
        case 14452: return "ga";    // �p
        case 14454: return "xu";    // �q
        case 14456: return "yu";    // �r
        case 14458: return "tui";    // �s
        case 14460: return "qi";    // �t
        case 14462: return "liang";    // �u
        case 14464: return "gan";    // �v
        case 14466: return "piao";    // �w
        case 14468: return "bi";    // �x
        case 14470: return "qi";    // �y
        case 14472: return "xu";    // �z
        case 14474: return "chou";    // �{
        case 14476: return "yan";    // �|
        case 14478: return "zhan";    // �}
        case 14480: return "yu";    // �~
        case 14482: return "";    // ?
        case 14484: return "dao";    // �
        case 14486: return "ren";    // �
        case 14488: return "ji";    // �
        case 14490: return "ba";    // �
        case 14492: return "gong";    // �
        case 14494: return "tuo";    // �
        case 14496: return "di";    // �
        case 14498: return "ji";    // �
        case 14500: return "yu";    // �
        case 14502: return "e";    // �
        case 14504: return "e";    // �
        case 14506: return "sha";    // �
        case 14508: return "hang";    // �
        case 14510: return "tun";    // �
        case 14512: return "mo";    // �
        case 14514: return "jie";    // �
        case 14516: return "shen";    // ��
        case 14518: return "ban";    // ��
        case 14520: return "wan";    // ��
        case 14522: return "bi";    // ��
        case 14524: return "lu";    // ��
        case 14526: return "wen";    // ��
        case 14528: return "hu";    // ��
        case 14530: return "lu";    // ��
        case 14532: return "shi";    // ��
        case 14534: return "fang";    // ��
        case 14536: return "fen";    // ��
        case 14538: return "na";    // ��
        case 14540: return "you";    // ��
        case 14542: return "pian";    // ��
        case 14544: return "mo";    // ��
        case 14546: return "he";    // ��
        case 14548: return "xia";    // ��
        case 14550: return "xie";    // �@
        case 14552: return "han";    // �A
        case 14554: return "pi";    // �B
        case 14556: return "lin";    // �C
        case 14558: return "tuo";    // �D
        case 14560: return "ba";    // �E
        case 14562: return "qiu";    // �F
        case 14564: return "ping";    // �G
        case 14566: return "fu";    // �H
        case 14568: return "bi";    // �I
        case 14570: return "ji";    // �J
        case 14572: return "wei";    // �K
        case 14574: return "ju";    // �L
        case 14576: return "diao";    // �M
        case 14578: return "ba";    // �N
        case 14580: return "you";    // �O
        case 14582: return "gun";    // �P
        case 14584: return "pi";    // �Q
        case 14586: return "nian";    // �R
        case 14588: return "xing";    // �S
        case 14590: return "tai";    // �T
        case 14592: return "bao";    // �U
        case 14594: return "fu";    // �V
        case 14596: return "zha";    // �W
        case 14598: return "ju";    // �X
        case 14600: return "gu";    // �Y
        case 14602: return "shi";    // �Z
        case 14604: return "dong";    // �[
        case 14606: return "dai";    // �\
        case 14608: return "die";    // �]
        case 14610: return "jie";    // �^
        case 14612: return "shu";    // �_
        case 14614: return "hou";    // �`
        case 14616: return "xiang";    // �a
        case 14618: return "er";    // �b
        case 14620: return "an";    // �c
        case 14622: return "wei";    // �d
        case 14624: return "zhao";    // �e
        case 14626: return "zhu";    // �f
        case 14628: return "yin";    // �g
        case 14630: return "lie";    // �h
        case 14632: return "luo";    // �i
        case 14634: return "tong";    // �j
        case 14636: return "yi";    // �k
        case 14638: return "yi";    // �l
        case 14640: return "bi";    // �m
        case 14642: return "wei";    // �n
        case 14644: return "jiao";    // �o
        case 14646: return "ku";    // �p
        case 14648: return "gui";    // �q
        case 14650: return "xian";    // �r
        case 14652: return "ge";    // �s
        case 14654: return "hui";    // �t
        case 14656: return "lao";    // �u
        case 14658: return "fu";    // �v
        case 14660: return "kao";    // �w
        case 14662: return "xiu";    // �x
        case 14664: return "duo";    // �y
        case 14666: return "jun";    // �z
        case 14668: return "ti";    // �{
        case 14670: return "mian";    // �|
        case 14672: return "shao";    // �}
        case 14674: return "zha";    // �~
        case 14676: return "";    // ?
        case 14678: return "suo";    // ��
        case 14680: return "qin";    // ��
        case 14682: return "yu";    // ��
        case 14684: return "nei";    // ��
        case 14686: return "zhe";    // ��
        case 14688: return "gun";    // ��
        case 14690: return "geng";    // ��
        case 14692: return "su";    // ��
        case 14694: return "wu";    // ��
        case 14696: return "qiu";    // ��
        case 14698: return "shan";    // ��
        case 14700: return "bu";    // ��
        case 14702: return "huan";    // ��
        case 14704: return "tiao";    // ��
        case 14706: return "li";    // ��
        case 14708: return "sha";    // ��
        case 14710: return "sha";    // ��
        case 14712: return "kao";    // ��
        case 14714: return "meng";    // ��
        case 14716: return "cheng";    // ��
        case 14718: return "li";    // ��
        case 14720: return "zou";    // ��
        case 14722: return "xi";    // ��
        case 14724: return "yong";    // ��
        case 14726: return "shen";    // ��
        case 14728: return "zi";    // ��
        case 14730: return "qi";    // ��
        case 14732: return "qing";    // ��
        case 14734: return "xiang";    // ��
        case 14736: return "nei";    // ��
        case 14738: return "chun";    // ��
        case 14740: return "ji";    // ��
        case 14742: return "diao";    // ��
        case 14744: return "qie";    // �@
        case 14746: return "gu";    // �A
        case 14748: return "zhou";    // �B
        case 14750: return "dong";    // �C
        case 14752: return "lai";    // �D
        case 14754: return "fei";    // �E
        case 14756: return "ni";    // �F
        case 14758: return "yi";    // �G
        case 14760: return "kun";    // �H
        case 14762: return "lu";    // �I
        case 14764: return "ai";    // �J
        case 14766: return "chang";    // �K
        case 14768: return "jing";    // �L
        case 14770: return "lun";    // �M
        case 14772: return "ling";    // �N
        case 14774: return "zou";    // �O
        case 14776: return "li";    // �P
        case 14778: return "meng";    // �Q
        case 14780: return "zong";    // �R
        case 14782: return "ji";    // �S
        case 14784: return "nian";    // �T
        case 14786: return "hu";    // �U
        case 14788: return "yu";    // �V
        case 14790: return "di";    // �W
        case 14792: return "shi";    // �X
        case 14794: return "shen";    // �Y
        case 14796: return "huan";    // �Z
        case 14798: return "ti";    // �[
        case 14800: return "hou";    // �\
        case 14802: return "xing";    // �]
        case 14804: return "zhu";    // �^
        case 14806: return "la";    // �_
        case 14808: return "zong";    // �`
        case 14810: return "ji";    // �a
        case 14812: return "bian";    // �b
        case 14814: return "bian";    // �c
        case 14816: return "huan";    // �d
        case 14818: return "quan";    // �e
        case 14820: return "zei";    // �f
        case 14822: return "wei";    // �g
        case 14824: return "wei";    // �h
        case 14826: return "yu";    // �i
        case 14828: return "chun";    // �j
        case 14830: return "rou";    // �k
        case 14832: return "die";    // �l
        case 14834: return "huang";    // �m
        case 14836: return "lian";    // �n
        case 14838: return "yan";    // �o
        case 14840: return "qiu";    // �p
        case 14842: return "qiu";    // �q
        case 14844: return "jian";    // �r
        case 14846: return "bi";    // �s
        case 14848: return "e";    // �t
        case 14850: return "yang";    // �u
        case 14852: return "fu";    // �v
        case 14854: return "sai";    // �w
        case 14856: return "gan";    // �x
        case 14858: return "xia";    // �y
        case 14860: return "wei";    // �z
        case 14862: return "hu";    // �{
        case 14864: return "shi";    // �|
        case 14866: return "ruo";    // �}
        case 14868: return "xuan";    // �~
        case 14870: return "";    // ?
        case 14872: return "wen";    // ��
        case 14874: return "jian";    // ��
        case 14876: return "hao";    // ��
        case 14878: return "wu";    // ��
        case 14880: return "pang";    // ��
        case 14882: return "sao";    // ��
        case 14884: return "liu";    // ��
        case 14886: return "ma";    // ��
        case 14888: return "shi";    // ��
        case 14890: return "shi";    // ��
        case 14892: return "guan";    // ��
        case 14894: return "zi";    // ��
        case 14896: return "teng";    // ��
        case 14898: return "ta";    // ��
        case 14900: return "yao";    // ��
        case 14902: return "e";    // ��
        case 14904: return "yong";    // ��
        case 14906: return "qian";    // ��
        case 14908: return "qi";    // ��
        case 14910: return "wen";    // ��
        case 14912: return "ruo";    // ��
        case 14914: return "shen";    // ��
        case 14916: return "lian";    // ��
        case 14918: return "ao";    // ��
        case 14920: return "le";    // ��
        case 14922: return "hui";    // ��
        case 14924: return "min";    // ��
        case 14926: return "ji";    // ��
        case 14928: return "tiao";    // ��
        case 14930: return "qu";    // ��
        case 14932: return "jian";    // ��
        case 14934: return "shen";    // ��
        case 14936: return "man";    // ��
        case 14938: return "xi";    // �@
        case 14940: return "qiu";    // �A
        case 14942: return "biao";    // �B
        case 14944: return "ji";    // �C
        case 14946: return "ji";    // �D
        case 14948: return "zhu";    // �E
        case 14950: return "jiang";    // �F
        case 14952: return "qiu";    // �G
        case 14954: return "tuan";    // �H
        case 14956: return "yong";    // �I
        case 14958: return "zhang";    // �J
        case 14960: return "kang";    // �K
        case 14962: return "xue";    // �L
        case 14964: return "bie";    // �M
        case 14966: return "yu";    // �N
        case 14968: return "qu";    // �O
        case 14970: return "xiang";    // �P
        case 14972: return "bo";    // �Q
        case 14974: return "jiao";    // �R
        case 14976: return "xun";    // �S
        case 14978: return "su";    // �T
        case 14980: return "huang";    // �U
        case 14982: return "zun";    // �V
        case 14984: return "tuo";    // �W
        case 14986: return "shan";    // �X
        case 14988: return "fan";    // �Y
        case 14990: return "gui";    // �Z
        case 14992: return "lin";    // �[
        case 14994: return "xun";    // �\
        case 14996: return "miao";    // �]
        case 14998: return "xi";    // �^
        case 15000: return "zeng";    // �_
        case 15002: return "xiang";    // �`
        case 15004: return "fen";    // �a
        case 15006: return "guan";    // �b
        case 15008: return "hou";    // �c
        case 15010: return "kuai";    // �d
        case 15012: return "zei";    // �e
        case 15014: return "sao";    // �f
        case 15016: return "shan";    // �g
        case 15018: return "gan";    // �h
        case 15020: return "gui";    // �i
        case 15022: return "ying";    // �j
        case 15024: return "li";    // �k
        case 15026: return "chang";    // �l
        case 15028: return "lei";    // �m
        case 15030: return "shu";    // �n
        case 15032: return "ai";    // �o
        case 15034: return "ru";    // �p
        case 15036: return "ji";    // �q
        case 15038: return "yu";    // �r
        case 15040: return "hu";    // �s
        case 15042: return "shu";    // �t
        case 15044: return "li";    // �u
        case 15046: return "la";    // �v
        case 15048: return "li";    // �w
        case 15050: return "mie";    // �x
        case 15052: return "zhen";    // �y
        case 15054: return "xiang";    // �z
        case 15056: return "e";    // �{
        case 15058: return "lu";    // �|
        case 15060: return "guan";    // �}
        case 15062: return "li";    // �~
        case 15064: return "";    // ?
        case 15066: return "xian";    // ��
        case 15068: return "dao";    // ��
        case 15070: return "ji";    // ��
        case 15072: return "tun";    // ��
        case 15074: return "ba";    // ��
        case 15076: return "ge";    // ��
        case 15078: return "you";    // ��
        case 15080: return "zha";    // ��
        case 15082: return "ba";    // ��
        case 15084: return "pi";    // ��
        case 15086: return "kao";    // ��
        case 15088: return "tong";    // ��
        case 15090: return "zei";    // ��
        case 15092: return "hou";    // ��
        case 15094: return "kuai";    // ��
        case 15096: return "zha";    // ��
        case 15098: return "jun";    // ��
        case 15100: return "yong";    // ��
        case 15102: return "qi";    // ��
        case 15104: return "shen";    // ��
        case 15106: return "bi";    // ��
        case 15108: return "chang";    // ��
        case 15110: return "ti";    // ��
        case 15112: return "wen";    // ��
        case 15114: return "wei";    // ��
        case 15116: return "quan";    // ��
        case 15118: return "jiang";    // ��
        case 15120: return "pang";    // ��
        case 15122: return "jian";    // ��
        case 15124: return "wei";    // ��
        case 15126: return "xi";    // ��
        case 15128: return "hu";    // ��
        case 15130: return "gan";    // ��
        case 15132: return "zhan";    // �@
        case 15134: return "guan";    // �A
        case 15136: return "niao";    // �B
        case 15138: return "yi";    // �C
        case 15140: return "fu";    // �D
        case 15142: return "li";    // �E
        case 15144: return "jiu";    // �F
        case 15146: return "bu";    // �G
        case 15148: return "yan";    // �H
        case 15150: return "fu";    // �I
        case 15152: return "diao";    // �J
        case 15154: return "ji";    // �K
        case 15156: return "feng";    // �L
        case 15158: return "ru";    // �M
        case 15160: return "gan";    // �N
        case 15162: return "shi";    // �O
        case 15164: return "feng";    // �P
        case 15166: return "ming";    // �Q
        case 15168: return "bao";    // �R
        case 15170: return "yuan";    // �S
        case 15172: return "zhi";    // �T
        case 15174: return "hu";    // �U
        case 15176: return "qin";    // �V
        case 15178: return "fu";    // �W
        case 15180: return "ban";    // �X
        case 15182: return "wen";    // �Y
        case 15184: return "jian";    // �Z
        case 15186: return "shi";    // �[
        case 15188: return "yu";    // �\
        case 15190: return "fou";    // �]
        case 15192: return "ao";    // �^
        case 15194: return "gui";    // �_
        case 15196: return "gui";    // �`
        case 15198: return "pi";    // �a
        case 15200: return "huan";    // �b
        case 15202: return "zhen";    // �c
        case 15204: return "bao";    // �d
        case 15206: return "yan";    // �e
        case 15208: return "ya";    // �f
        case 15210: return "zheng";    // �g
        case 15212: return "fang";    // �h
        case 15214: return "feng";    // �i
        case 15216: return "wen";    // �j
        case 15218: return "ou";    // �k
        case 15220: return "dai";    // �l
        case 15222: return "ge";    // �m
        case 15224: return "ru";    // �n
        case 15226: return "ling";    // �o
        case 15228: return "bi";    // �p
        case 15230: return "fu";    // �q
        case 15232: return "tuo";    // �r
        case 15234: return "wen";    // �s
        case 15236: return "li";    // �t
        case 15238: return "bian";    // �u
        case 15240: return "zhi";    // �v
        case 15242: return "ge";    // �w
        case 15244: return "yuan";    // �x
        case 15246: return "ci";    // �y
        case 15248: return "gou";    // �z
        case 15250: return "xiao";    // �{
        case 15252: return "chi";    // �|
        case 15254: return "dan";    // �}
        case 15256: return "ju";    // �~
        case 15258: return "";    // ?
        case 15260: return "yao";    // ��
        case 15262: return "gu";    // ��
        case 15264: return "zhong";    // ��
        case 15266: return "yu";    // ��
        case 15268: return "yang";    // ��
        case 15270: return "yu";    // ��
        case 15272: return "ya";    // ��
        case 15274: return "tie";    // ��
        case 15276: return "yu";    // ��
        case 15278: return "tian";    // ��
        case 15280: return "ying";    // ��
        case 15282: return "dui";    // ��
        case 15284: return "wu";    // ��
        case 15286: return "er";    // ��
        case 15288: return "gua";    // ��
        case 15290: return "ai";    // ��
        case 15292: return "zhi";    // ��
        case 15294: return "an";    // ��
        case 15296: return "heng";    // ��
        case 15298: return "xiao";    // ��
        case 15300: return "jia";    // ��
        case 15302: return "lie";    // ��
        case 15304: return "zhu";    // ��
        case 15306: return "yang";    // ��
        case 15308: return "yi";    // ��
        case 15310: return "hong";    // ��
        case 15312: return "lu";    // ��
        case 15314: return "ru";    // ��
        case 15316: return "mou";    // ��
        case 15318: return "ge";    // ��
        case 15320: return "ren";    // ��
        case 15322: return "xiao";    // ��
        case 15324: return "xiu";    // ��
        case 15326: return "diao";    // �@
        case 15328: return "chi";    // �A
        case 15330: return "luo";    // �B
        case 15332: return "heng";    // �C
        case 15334: return "nian";    // �D
        case 15336: return "e";    // �E
        case 15338: return "luan";    // �F
        case 15340: return "jia";    // �G
        case 15342: return "ji";    // �H
        case 15344: return "tu";    // �I
        case 15346: return "huan";    // �J
        case 15348: return "tuo";    // �K
        case 15350: return "bu";    // �L
        case 15352: return "wu";    // �M
        case 15354: return "juan";    // �N
        case 15356: return "yu";    // �O
        case 15358: return "bo";    // �P
        case 15360: return "jun";    // �Q
        case 15362: return "jun";    // �R
        case 15364: return "bi";    // �S
        case 15366: return "xi";    // �T
        case 15368: return "jun";    // �U
        case 15370: return "ju";    // �V
        case 15372: return "tu";    // �W
        case 15374: return "jing";    // �X
        case 15376: return "ti";    // �Y
        case 15378: return "e";    // �Z
        case 15380: return "e";    // �[
        case 15382: return "kuang";    // �\
        case 15384: return "hu";    // �]
        case 15386: return "wu";    // �^
        case 15388: return "shen";    // �_
        case 15390: return "lai";    // �`
        case 15392: return "jiao";    // �a
        case 15394: return "pan";    // �b
        case 15396: return "lu";    // �c
        case 15398: return "pi";    // �d
        case 15400: return "shu";    // �e
        case 15402: return "fu";    // �f
        case 15404: return "an";    // �g
        case 15406: return "zhuo";    // �h
        case 15408: return "peng";    // �i
        case 15410: return "qiu";    // �j
        case 15412: return "qian";    // �k
        case 15414: return "bei";    // �l
        case 15416: return "diao";    // �m
        case 15418: return "lu";    // �n
        case 15420: return "que";    // �o
        case 15422: return "jian";    // �p
        case 15424: return "ju";    // �q
        case 15426: return "tu";    // �r
        case 15428: return "ya";    // �s
        case 15430: return "yuan";    // �t
        case 15432: return "qi";    // �u
        case 15434: return "li";    // �v
        case 15436: return "ye";    // �w
        case 15438: return "zhui";    // �x
        case 15440: return "kong";    // �y
        case 15442: return "duo";    // �z
        case 15444: return "kun";    // �{
        case 15446: return "sheng";    // �|
        case 15448: return "qi";    // �}
        case 15450: return "jing";    // �~
        case 15452: return "";    // ?
        case 15454: return "yi";    // ��
        case 15456: return "yi";    // ��
        case 15458: return "qing";    // ��
        case 15460: return "zi";    // ��
        case 15462: return "lai";    // ��
        case 15464: return "dong";    // ��
        case 15466: return "qi";    // ��
        case 15468: return "chun";    // ��
        case 15470: return "geng";    // ��
        case 15472: return "ju";    // ��
        case 15474: return "jue";    // ��
        case 15476: return "yi";    // ��
        case 15478: return "zun";    // ��
        case 15480: return "ji";    // ��
        case 15482: return "shu";    // ��
        case 15484: return "ying";    // ��
        case 15486: return "chi";    // ��
        case 15488: return "miao";    // ��
        case 15490: return "rou";    // ��
        case 15492: return "an";    // ��
        case 15494: return "qiu";    // ��
        case 15496: return "ti";    // ��
        case 15498: return "hu";    // ��
        case 15500: return "ti";    // ��
        case 15502: return "e";    // ��
        case 15504: return "jie";    // ��
        case 15506: return "mao";    // ��
        case 15508: return "bi";    // ��
        case 15510: return "chun";    // ��
        case 15512: return "tu";    // ��
        case 15514: return "yan";    // ��
        case 15516: return "he";    // ��
        case 15518: return "yuan";    // ��
        case 15520: return "bian";    // �@
        case 15522: return "kun";    // �A
        case 15524: return "mei";    // �B
        case 15526: return "hu";    // �C
        case 15528: return "ying";    // �D
        case 15530: return "zhi";    // �E
        case 15532: return "wu";    // �F
        case 15534: return "ju";    // �G
        case 15536: return "dong";    // �H
        case 15538: return "qiang";    // �I
        case 15540: return "fang";    // �J
        case 15542: return "he";    // �K
        case 15544: return "ying";    // �L
        case 15546: return "yuan";    // �M
        case 15548: return "xian";    // �N
        case 15550: return "weng";    // �O
        case 15552: return "shi";    // �P
        case 15554: return "he";    // �Q
        case 15556: return "chu";    // �R
        case 15558: return "tang";    // �S
        case 15560: return "xia";    // �T
        case 15562: return "ruo";    // �U
        case 15564: return "liu";    // �V
        case 15566: return "ji";    // �W
        case 15568: return "gu";    // �X
        case 15570: return "jian";    // �Y
        case 15572: return "xun";    // �Z
        case 15574: return "han";    // �[
        case 15576: return "ci";    // �\
        case 15578: return "ci";    // �]
        case 15580: return "yi";    // �^
        case 15582: return "yao";    // �_
        case 15584: return "yan";    // �`
        case 15586: return "ji";    // �a
        case 15588: return "li";    // �b
        case 15590: return "tian";    // �c
        case 15592: return "kou";    // �d
        case 15594: return "ti";    // �e
        case 15596: return "si";    // �f
        case 15598: return "yi";    // �g
        case 15600: return "tu";    // �h
        case 15602: return "ma";    // �i
        case 15604: return "xiao";    // �j
        case 15606: return "gao";    // �k
        case 15608: return "tian";    // �l
        case 15610: return "chen";    // �m
        case 15612: return "ji";    // �n
        case 15614: return "tuan";    // �o
        case 15616: return "zhe";    // �p
        case 15618: return "ao";    // �q
        case 15620: return "yao";    // �r
        case 15622: return "yi";    // �s
        case 15624: return "ou";    // �t
        case 15626: return "chi";    // �u
        case 15628: return "zhi";    // �v
        case 15630: return "liu";    // �w
        case 15632: return "yong";    // �x
        case 15634: return "lu";    // �y
        case 15636: return "bi";    // �z
        case 15638: return "shuang";    // �{
        case 15640: return "zhuo";    // �|
        case 15642: return "yu";    // �}
        case 15644: return "wu";    // �~
        case 15646: return "";    // ?
        case 15648: return "jue";    // ��
        case 15650: return "yin";    // ��
        case 15652: return "tan";    // ��
        case 15654: return "si";    // ��
        case 15656: return "jiao";    // ��
        case 15658: return "yi";    // ��
        case 15660: return "hua";    // ��
        case 15662: return "bi";    // ��
        case 15664: return "ying";    // ��
        case 15666: return "su";    // ��
        case 15668: return "huang";    // ��
        case 15670: return "fan";    // ��
        case 15672: return "jiao";    // ��
        case 15674: return "liao";    // ��
        case 15676: return "yan";    // ��
        case 15678: return "gao";    // ��
        case 15680: return "jiu";    // ��
        case 15682: return "xian";    // ��
        case 15684: return "xian";    // ��
        case 15686: return "tu";    // ��
        case 15688: return "mai";    // ��
        case 15690: return "zun";    // ��
        case 15692: return "yu";    // ��
        case 15694: return "ying";    // ��
        case 15696: return "lu";    // ��
        case 15698: return "tuan";    // ��
        case 15700: return "xian";    // ��
        case 15702: return "xue";    // ��
        case 15704: return "yi";    // ��
        case 15706: return "pi";    // ��
        case 15708: return "zhu";    // ��
        case 15710: return "luo";    // ��
        case 15712: return "xi";    // ��
        case 15714: return "yi";    // �@
        case 15716: return "ji";    // �A
        case 15718: return "ze";    // �B
        case 15720: return "yu";    // �C
        case 15722: return "zhan";    // �D
        case 15724: return "ye";    // �E
        case 15726: return "yang";    // �F
        case 15728: return "bi";    // �G
        case 15730: return "ning";    // �H
        case 15732: return "hu";    // �I
        case 15734: return "mi";    // �J
        case 15736: return "ying";    // �K
        case 15738: return "mang";    // �L
        case 15740: return "di";    // �M
        case 15742: return "yue";    // �N
        case 15744: return "yu";    // �O
        case 15746: return "lei";    // �P
        case 15748: return "bu";    // �Q
        case 15750: return "lu";    // �R
        case 15752: return "he";    // �S
        case 15754: return "long";    // �T
        case 15756: return "shuang";    // �U
        case 15758: return "yue";    // �V
        case 15760: return "ying";    // �W
        case 15762: return "guan";    // �X
        case 15764: return "gou";    // �Y
        case 15766: return "li";    // �Z
        case 15768: return "luan";    // �[
        case 15770: return "shi";    // �\
        case 15772: return "qiang";    // �]
        case 15774: return "xiao";    // �^
        case 15776: return "ling";    // �_
        case 15778: return "xue";    // �`
        case 15780: return "heng";    // �a
        case 15782: return "diao";    // �b
        case 15784: return "wu";    // �c
        case 15786: return "kun";    // �d
        case 15788: return "qian";    // �e
        case 15790: return "geng";    // �f
        case 15792: return "yuan";    // �g
        case 15794: return "su";    // �h
        case 15796: return "he";    // �i
        case 15798: return "qiu";    // �j
        case 15800: return "yi";    // �k
        case 15802: return "weng";    // �l
        case 15804: return "liu";    // �m
        case 15806: return "ji";    // �n
        case 15808: return "yi";    // �o
        case 15810: return "yi";    // �p
        case 15812: return "huan";    // �q
        case 15814: return "zhan";    // �r
        case 15816: return "mang";    // �s
        case 15818: return "shuang";    // �t
        case 15820: return "lu";    // �u
        case 15822: return "jin";    // �v
        case 15824: return "ling";    // �w
        case 15826: return "jian";    // �x
        case 15828: return "jian";    // �y
        case 15830: return "cuo";    // �z
        case 15832: return "jian";    // �{
        case 15834: return "jian";    // �|
        case 15836: return "yan";    // �}
        case 15838: return "you";    // �~
        case 15840: return "";    // ?
        case 15842: return "cu";    // ��
        case 15844: return "biao";    // ��
        case 15846: return "cu";    // ��
        case 15848: return "pao";    // ��
        case 15850: return "zhu";    // ��
        case 15852: return "jian";    // ��
        case 15854: return "mi";    // ��
        case 15856: return "yu";    // ��
        case 15858: return "liu";    // ��
        case 15860: return "chen";    // ��
        case 15862: return "jun";    // ��
        case 15864: return "lin";    // ��
        case 15866: return "ni";    // ��
        case 15868: return "jiu";    // ��
        case 15870: return "jun";    // ��
        case 15872: return "jing";    // ��
        case 15874: return "li";    // ��
        case 15876: return "xiang";    // ��
        case 15878: return "yan";    // ��
        case 15880: return "jia";    // ��
        case 15882: return "mi";    // ��
        case 15884: return "li";    // ��
        case 15886: return "zhang";    // ��
        case 15888: return "jing";    // ��
        case 15890: return "qi";    // ��
        case 15892: return "ling";    // ��
        case 15894: return "yan";    // ��
        case 15896: return "cu";    // ��
        case 15898: return "mai";    // ��
        case 15900: return "he";    // ��
        case 15902: return "chao";    // ��
        case 15904: return "fu";    // ��
        case 15906: return "mian";    // ��
        case 15908: return "mian";    // �@
        case 15910: return "fu";    // �A
        case 15912: return "pao";    // �B
        case 15914: return "qu";    // �C
        case 15916: return "qu";    // �D
        case 15918: return "mou";    // �E
        case 15920: return "fu";    // �F
        case 15922: return "yan";    // �G
        case 15924: return "lai";    // �H
        case 15926: return "mian";    // �I
        case 15928: return "chi";    // �J
        case 15930: return "feng";    // �K
        case 15932: return "qu";    // �L
        case 15934: return "mian";    // �M
        case 15936: return "me";    // �N
        case 15938: return "mo";    // �O
        case 15940: return "zou";    // �P
        case 15942: return "nun";    // �Q
        case 15944: return "fen";    // �R
        case 15946: return "huang";    // �S
        case 15948: return "jin";    // �T
        case 15950: return "guang";    // �U
        case 15952: return "tian";    // �V
        case 15954: return "tou";    // �W
        case 15956: return "hua";    // �X
        case 15958: return "kuang";    // �Y
        case 15960: return "hong";    // �Z
        case 15962: return "chi";    // �[
        case 15964: return "hei";    // �\
        case 15966: return "yi";    // �]
        case 15968: return "dan";    // �^
        case 15970: return "xi";    // �_
        case 15972: return "tun";    // �`
        case 15974: return "mo";    // �a
        case 15976: return "jian";    // �b
        case 15978: return "dian";    // �c
        case 15980: return "yan";    // �d
        case 15982: return "mei";    // �e
        case 15984: return "yan";    // �f
        case 15986: return "ye";    // �g
        case 15988: return "dang";    // �h
        case 15990: return "yan";    // �i
        case 15992: return "yan";    // �j
        case 15994: return "yan";    // �k
        case 15996: return "dan";    // �l
        case 15998: return "yan";    // �m
        case 16000: return "dai";    // �n
        case 16002: return "can";    // �o
        case 16004: return "yi";    // �p
        case 16006: return "mei";    // �q
        case 16008: return "dan";    // �r
        case 16010: return "yan";    // �s
        case 16012: return "du";    // �t
        case 16014: return "lu";    // �u
        case 16016: return "fen";    // �v
        case 16018: return "meng";    // �w
        case 16020: return "yuan";    // �x
        case 16022: return "cu";    // �y
        case 16024: return "qu";    // �z
        case 16026: return "zhao";    // �{
        case 16028: return "wa";    // �|
        case 16030: return "zhu";    // �}
        case 16032: return "zhi";    // �~
        case 16034: return "";    // ?
        case 16036: return "meng";    // ��
        case 16038: return "ao";    // ��
        case 16040: return "bie";    // ��
        case 16042: return "tuo";    // ��
        case 16044: return "bi";    // ��
        case 16046: return "zhao";    // ��
        case 16048: return "mi";    // ��
        case 16050: return "ding";    // ��
        case 16052: return "zi";    // ��
        case 16054: return "gu";    // ��
        case 16056: return "dong";    // ��
        case 16058: return "fen";    // ��
        case 16060: return "yuan";    // ��
        case 16062: return "chang";    // ��
        case 16064: return "gao";    // ��
        case 16066: return "qi";    // ��
        case 16068: return "yuan";    // ��
        case 16070: return "tang";    // ��
        case 16072: return "teng";    // ��
        case 16074: return "shu";    // ��
        case 16076: return "fei";    // ��
        case 16078: return "wen";    // ��
        case 16080: return "ba";    // ��
        case 16082: return "diao";    // ��
        case 16084: return "tuo";    // ��
        case 16086: return "zhong";    // ��
        case 16088: return "qu";    // ��
        case 16090: return "sheng";    // ��
        case 16092: return "shi";    // ��
        case 16094: return "shi";    // ��
        case 16096: return "ting";    // ��
        case 16098: return "ju";    // ��
        case 16100: return "jing";    // ��
        case 16102: return "hun";    // �@
        case 16104: return "ju";    // �A
        case 16106: return "yan";    // �B
        case 16108: return "tu";    // �C
        case 16110: return "si";    // �D
        case 16112: return "xian";    // �E
        case 16114: return "lei";    // �F
        case 16116: return "ya";    // �G
        case 16118: return "wu";    // �H
        case 16120: return "wu";    // �I
        case 16122: return "ku";    // �J
        case 16124: return "xie";    // �K
        case 16126: return "e";    // �L
        case 16128: return "xiu";    // �M
        case 16130: return "weng";    // �N
        case 16132: return "zha";    // �O
        case 16134: return "nong";    // �P
        case 16136: return "nang";    // �Q
        case 16138: return "qi";    // �R
        case 16140: return "zhai";    // �S
        case 16142: return "ji";    // �T
        case 16144: return "ji";    // �U
        case 16146: return "ji";    // �V
        case 16148: return "ji";    // �W
        case 16150: return "chi";    // �X
        case 16152: return "chen";    // �Y
        case 16154: return "chen";    // �Z
        case 16156: return "he";    // �[
        case 16158: return "ya";    // �\
        case 16160: return "yan";    // �]
        case 16162: return "xie";    // �^
        case 16164: return "bao";    // �_
        case 16166: return "ze";    // �`
        case 16168: return "xie";    // �a
        case 16170: return "zi";    // �b
        case 16172: return "chi";    // �c
        case 16174: return "yan";    // �d
        case 16176: return "ju";    // �e
        case 16178: return "tiao";    // �f
        case 16180: return "ling";    // �g
        case 16182: return "ling";    // �h
        case 16184: return "chu";    // �i
        case 16186: return "quan";    // �j
        case 16188: return "xie";    // �k
        case 16190: return "yin";    // �l
        case 16192: return "nie";    // �m
        case 16194: return "jiu";    // �n
        case 16196: return "yao";    // �o
        case 16198: return "chuo";    // �p
        case 16200: return "yun";    // �q
        case 16202: return "yu";    // �r
        case 16204: return "chu";    // �s
        case 16206: return "yi";    // �t
        case 16208: return "ni";    // �u
        case 16210: return "ze";    // �v
        case 16212: return "chuo";    // �w
        case 16214: return "qu";    // �x
        case 16216: return "yun";    // �y
        case 16218: return "yan";    // �z
        case 16220: return "ou";    // �{
        case 16222: return "e";    // �|
        case 16224: return "wo";    // �}
        case 16226: return "yi";    // �~
        case 16228: return "";    // ?
        case 16230: return "ci";    // ��
        case 16232: return "zou";    // ��
        case 16234: return "dian";    // ��
        case 16236: return "chu";    // ��
        case 16238: return "jin";    // ��
        case 16240: return "e";    // ��
        case 16242: return "he";    // ��
        case 16244: return "yan";    // ��
        case 16246: return "long";    // ��
        case 16248: return "pang";    // ��
        case 16250: return "wo";    // ��
        case 16252: return "pang";    // ��
        case 16254: return "yan";    // ��
        case 16256: return "mang";    // ��
        case 16258: return "long";    // ��
        case 16260: return "gong";    // ��
        case 16262: return "kan";    // ��
        case 16264: return "da";    // ��
        case 16266: return "ling";    // ��
        case 16268: return "da";    // ��
        case 16270: return "gui";    // ��
        case 16272: return "qiu";    // ��
        case 16274: return "bie";    // ��
        case 16276: return "chui";    // ��
        case 16278: return "he";    // ��
        case 16280: return "jue";    // ��
        case 16282: return "xie";    // ��
        case 16284: return "yue";    // ��
        case 16286: return "lang";    // ��
        case 16288: return "liang";    // ��
        case 16290: return "nian";    // ��
        case 16292: return "li";    // ��
        case 16294: return "lin";    // ��
        case 16296: return "wu";    // �@
        case 16298: return "hu";    // �A
        case 16300: return "shuang";    // �B
        case 16302: return "xu";    // �C
        case 16304: return "qi";    // �D
        case 16306: return "fu";    // �E
        case 16308: return "ju";    // �F
        case 16310: return "li";    // �G
        case 16312: return "ke";    // �H
        case 16314: return "qiu";    // �I
        case 16316: return "sheng";    // �J
        case 16318: return "suo";    // �K
        case 16320: return "ji";    // �L
        case 16322: return "xiao";    // �M
        case 16324: return "xing";    // �N
        case 16326: return "dao";    // �O
        case 16328: return "";    // �P
        case 16330: return "";    // �Q
        case 16332: return "";    // �R
        case 16334: return "";    // �S
        case 16336: return "";    // �T
        case 16338: return "";    // �U
        case 16340: return "";    // �V
        case 16342: return "";    // �W
        case 16344: return "";    // �X
        case 16346: return "";    // �Y
        case 16348: return "";    // �Z
        case 16350: return "";    // �[
        case 16352: return "";    // �\
        case 16354: return "";    // �]
        case 16356: return "";    // �^
        case 16358: return "";    // �_
        case 16360: return "";    // �`
        case 16362: return "";    // �a
        case 16364: return "";    // �b
        case 16366: return "";    // �c
        case 16368: return "";    // �d
        case 16370: return "";    // �e
        case 16372: return "";    // �f
        case 16374: return "";    // �g
        case 16376: return "";    // �h
        case 16378: return "";    // �i
        case 16380: return "";    // �j
        case 16382: return "";    // �k
        case 16384: return "";    // �l
        case 16386: return "";    // �m
        case 16388: return "";    // �n
        case 16390: return "";    // �o
        case 16392: return "";    // �p
        case 16394: return "";    // �q
        case 16396: return "";    // �r
        case 16398: return "";    // �s
        case 16400: return "";    // �t
        case 16402: return "";    // �u
        case 16404: return "";    // �v
        case 16406: return "";    // �w
        case 16408: return "";    // �x
        case 16410: return "";    // �y
        case 16412: return "";    // �z
        case 16414: return "";    // �{
        case 16416: return "";    // �|
        case 16418: return "";    // �}
        case 16420: return "";    // �~
        case 16422: return "";    // ?
        case 16424: return "";    // ��
        case 16426: return "";    // ��
        case 16428: return "";    // ��
        case 16430: return "";    // ��
        case 16432: return "";    // ��
        case 16434: return "";    // ��
        case 16436: return "";    // ��
        case 16438: return "";    // ��
        case 16440: return "";    // ��
        case 16442: return "";    // ��
        case 16444: return "";    // ��
        case 16446: return "";    // ��
        case 16448: return "";    // ��
        case 16450: return "";    // ��
        case 16452: return "";    // ��
        case 16454: return "";    // ��
        case 16456: return "";    // ��
        case 16458: return "";    // ��
        case 16460: return "";    // ��
        case 16462: return "";    // ��
        case 16464: return "";    // ��
        case 16466: return "";    // ��
        case 16468: return "";    // ��
        case 16470: return "";    // ��
        case 16472: return "";    // ��
        case 16474: return "";    // ��
        case 16476: return "";    // ��
        case 16478: return "";    // ��
        case 16480: return "";    // ��
        case 16482: return "";    // ��
        case 16484: return "";    // ��
        case 16486: return "";    // ��
        case 16488: return "";    // ��
    }

    return NULL;
}

typedef struct _peyin_unit
{
    char *m;
    int len;

} peyin_unit, *p_peyin_unit;

/// ��ĸ����
enum
{
    SM_CH = 1,
    SM_SH,
    SM_ZH,
    SM_B,
    SM_C,
    SM_D,
    SM_F,
    SM_G,
    SM_H,
    SM_J,
    SM_K,
    SM_L,
    SM_M,
    SM_N,
    SM_P,
    SM_Q,
    SM_R,
    SM_S,
    SM_T,
    SM_W,
    SM_X,
    SM_Y,
    SM_Z,
};

/// ��ĸ����
enum
{
    YM_IANG = 1,
    YM_IONG,
    YM_UANG,
    YM_UENG,
    YM_ANG,
    YM_ENG,
    YM_IAN,
    YM_IAO,
    YM_ING,
    YM_ONG,
    YM_UAI,
    YM_UAN,
    YM_UEI,
    YM_UEN,
    YM_AI,
    YM_AN,
    YM_AO,
    YM_EI,
    YM_EN,
    YM_IA,
    YM_IE,
    YM_IN,
    YM_IU,
    YM_OU,
    YM_UA,
    YM_UO,
    YM_UE,
    YM_UN,
    YM_A,
    YM_E,
    YM_I,
    YM_O,
    YM_U,
};

/// ��ĸ
peyin_unit g_pinyin_sm[] = {
    { "",   1},
    { "ch", 2},
    { "sh", 2},
    { "zh", 2},
    { "b",  1},
    { "c",  1},
    { "d",  1},
    { "f",  1},
    { "g",  1},
    { "h",  1},
    { "j",  1},
    { "k",  1},
    { "l",  1},
    { "m",  1},
    { "n",  1},
    { "p",  1},
    { "q",  1},
    { "r",  1},
    { "s",  1},
    { "t",  1},
    { "w",  1},
    { "x",  1},
    { "y",  1},
    { "z",  1}
};

/// ��ĸ
peyin_unit g_pinyin_ym[] = {
    { "",     1},
    { "iang", 4},
    { "iong", 4},
    { "uang", 4},
    { "ueng", 4},
    { "ang",  3},
    { "eng",  3},
    { "ian",  3},
    { "iao",  3},
    { "ing",  3},
    { "ong",  3},
    { "uai",  3},
    { "uan",  3},
    { "uei",  3},
    { "uen",  3},
    { "ai",   2},
    { "an",   2},
    { "ao",   2},
    { "ei",   2},
    { "en",   2},
    { "ia",   2},
    { "ie",   2},
    { "in",   2},
    { "iu",   2},
    { "ou",   2},
    { "ua",   2},
    { "uo",   2},
    { "ue",   2},   // ��e
    { "un",   2},   // ��n
    { "a",    1},
    { "e",    1},
    { "i",    1},
    { "o",    1},
    { "u",    1},
};

/**
 *\brief                    �õ�����ĸ
 *\param[in]    pinyin      ƴ��
 *\param[out]   sm          ��ĸ
 *\param[out]   ym          ��ĸ
 *\return       0           �ɹ�
 */
int get_sm_ym(const char *pinyin, unsigned char *sm, unsigned char *ym)
{
    if (NULL == pinyin || NULL == sm || NULL == ym)
    {
        return -1;
    }

    int i        = 0;
    int count_sm = sizeof(g_pinyin_sm) / sizeof(g_pinyin_sm[0]); // ��ĸ����
    int count_ym = sizeof(g_pinyin_ym) / sizeof(g_pinyin_ym[0]); // ��ĸ����

    for (; i < count_sm; i++)
    {
        if (0 == strncmp(pinyin, g_pinyin_sm[i].m, g_pinyin_sm[i].len))
        {
            break;
        }
    }

    int len;

    if (i == count_sm)  // û����ĸ,�������������
    {
        len = 0;
        *sm = 0;
    }
    else
    {
        len = g_pinyin_sm[i].len;
        *sm = i;
    }

    int j = 0;

    for (; j < count_ym; j++)
    {
        if (0 == strncmp(pinyin + len, g_pinyin_ym[j].m, g_pinyin_ym[j].len))
        {
            break;
        }
    }

    if (j == count_ym) // û����ĸ,����
    {
        *ym = 0;
        return -2;
    }
    else
    {
        *ym = j;
    }

    return 0;
}

int main(void)
{
    // GB2312����,A1A1-FEFE
    // 01-09����¼���������682���ַ���                 A1-A9
    // 10-15��Ϊ�հ�����û��ʹ�á�                      AA-AF
    // 16-55����¼3755��һ�����֣���ƴ������          B0-D7
    // 56-87����¼3008���������֣�������/�ʻ�����     D8-F7
    // 88-94��Ϊ�հ�����û��ʹ�á�                      F8-FE

    // GBK����,8140-FEFE
    //1. ������������
    //  a. GB2312��������         ��GBK/2: B0A1-F7FE����¼GB2312 ����6763������ԭ˳�����С�
    //  b. GB13000.1 ���人����������:
    //    (1)GBK/3: 8140-A0FE��   ��¼GB13000.1 �е�CJK����6080����
    //    (2)GBK/4: AA40-FEA0��   ��¼CJK���ֺ������ĺ���8160����
    //                            CJK������ǰ����UCS�����С���У�
    //                            �����ĺ���(�������׺͹���)�ں�,��<<�����ֵ�>>��ҳ��/��λ���С�
    //    (3)���֡�����������ͼ�η�����GBK/5��A996��
    //
    //2. ͼ�η�����������
    //  a. GB2312�Ǻ��ַ�������   ��GBK/1: A1A1-A9FE��
    //                            ���г� GB2312 �ķ����⣬
    //                            ����10��Сд�������ֺ�GB12345�����ķ��š��Ʒ���717����
    //  b. GB13000.1����Ǻ���������GBK/5: A840-A9A0��
    //                            BIG-5�Ǻ��ַ��š��ṹ���͡����������ڴ������Ʒ��� 166 ����
    //
    //3. �û��Զ���������Ϊ(1)(2)(3)����С����
    //  (1) AAA1-AFFE����λ 564 ����
    //  (2) F8A1-FEFE����λ 658 ����
    //  (3) A140-A7A0����λ 672 ����

    unsigned int   buff_pos;
    unsigned int   buff_size;
    unsigned char *buff;
    unsigned char *pinyin;
    unsigned int   code;
    unsigned char  sm;
    unsigned char  ym;

    buff_size = ((0xfe - 0x81 + 1) * (0xfe - 0x40 + 1)) * 2;

    buff = malloc(buff_size);

    memset(buff, 0, buff_size);

    printf("buff_size:%u\n", buff_size);

    // GBK/2
    for (unsigned char i = 0xb0; i <= 0xf7; i++)
    {
        for (unsigned char j = 0xa1; j <= 0xfe; j++)
        {
            code = (i - 0xa0) * 100 + (j - 0xa0);

            pinyin = get_pinyin_gbk2(code);

            if (NULL == pinyin)
            {
                // 0xD7FA~0xD7FEΪ��
                printf("GBK/2 code:%u 0x%02x%02x=%c%c pinyin=NULL\n", code, i, j, i, j);
                continue;
            }

            if (0 != get_sm_ym(pinyin, &sm, &ym))
            {
                printf("GBK/2 code:%u 0x%02x%02x=%c%c get_sm_ym error\n", code, i, j, i, j);
                continue;
            }

            buff_pos = ((i - 0x81) * (0xfe - 0x40 + 1) + (j - 0x40)) * 2;   // gbk 8140��FEFE
            buff[buff_pos]     = sm;
            buff[buff_pos + 1] = ym;
        }
    }

    // GBK/3
    for (unsigned char i = 0x81; i <= 0xa0; i++)
    {
        for (unsigned char j = 0x40; j <= 0xfe; j++)
        {
            code = ((i - 0x81) * (0xfe - 0x40 + 1) + (j - 0x40)) * 2;

            pinyin = get_pinyin_gbk3(code);

            if (NULL == pinyin)
            {
                printf("GBK/3 code:%u 0x:%02x%02x=%c%c pinyin=NULL\n", code, i, j, i, j);
                continue;
            }

            if (0 != get_sm_ym(pinyin, &sm, &ym))
            {
                printf("GBK/3 code:%u 0x:%02x%02x=%c%c get_sm_ym error\n", code, i, j, i, j);
                continue;
            }

            buff_pos = ((i - 0x81) * (0xfe - 0x40 + 1) + (j - 0x40)) * 2;
            buff[buff_pos]     = sm;
            buff[buff_pos + 1] = ym;
        }
    }

    // GBK/4
    for (unsigned char i = 0xaa; i <= 0xfe; i++)
    {
        for (unsigned char j = 0x40; j <= 0xa0; j++)
        {
            code = ((i - 0xaa) * (0xa0 - 0x40 + 1) + (j - 0x40)) * 2;

            pinyin = get_pinyin_gbk4(code);

            if (NULL == pinyin)
            {
                printf("GBK/4 code:%u 0x:%02x%02x=%c%c pinyin=NULL\n", code, i, j, i, j);
                continue;
            }

            if (0 != get_sm_ym(pinyin, &sm, &ym))
            {
                printf("GBK/4 code:%u 0x:%02x%02x=%c%c get_sm_ym error\n", code, i, j, i, j);
                continue;
            }

            buff_pos = ((i - 0x81) * (0xfe - 0x40 + 1) + (j - 0x40)) * 2;
            buff[buff_pos]     = sm;
            buff[buff_pos + 1] = ym;
        }
    }

    //--------------------------------------------------
    // ������д���ļ�

    char *filename = "pinyin.dat";

    FILE *fp;

    fopen_s(&fp, filename, "wb+");

    if (NULL == fp)
    {
        printf("create %s error\n", filename);
        return;
    }

    fwrite(buff, 1, buff_size, fp);

    fclose(fp);

    free(buff);

    printf("create %s ok, buff_size:%d\n", filename, buff_size);

    //--------------------------------------------------
    // ����

    fopen_s(&fp, filename, "rb");

    if (NULL == fp)
    {
        printf("create %s error\n", filename);
        return;
    }

    fseek(fp, SEEK_END, 0);

    buff_size = ftell(fp);

    fseek(fp, SEEK_SET, 0);

    if (fread(buff, 1, buff_size, fp) != buff_size)
    {
        printf("open %s error\n", filename);
    }

    fclose(fp);

    unsigned char *test = "��������g��_������������ƪ��������ɡ�"
    "���¼�ʱ�У��Ѿ������졣"
    "��֪���Ϲ��ڣ���Ϧ�Ǻ��ꡣ"
    "�����˷��ȥ���ֿ���¥����ߴ���ʤ����"
    "����Ū��Ӱ���������˼䡣"
    "ת��󣬵�粻��������ߡ�"
    "��Ӧ�кޣ����³����ʱԲ��"
    "���б�����ϣ���������Բȱ�����¹���ȫ��"
    "��Ը�˳��ã�ǧ�ﹲ濾ꡣ";

    printf("%s\n", test);

    int test_len = strlen(test);

    for (int i = 0; i < test_len; )
    {
        if ((test[i] >= 0xb0 && test[i] <= 0xfe &&
             test[i + 1] >= 0xa1 && test[i + 1] <= 0xfe) || // GBK/2

            (test[i] >= 0x81 && test[i] <= 0xa0 &&
             test[i + 1] >= 0x40 && test[i + 1] <= 0xfe) || // GBK/3

            (test[i] >= 0xaa && test[i] <= 0xfe &&
             test[i + 1] >= 0x40 && test[i + 1] <= 0xa0))   // GBK/4
        {
            buff_pos = ((test[i] - 0x81) * (0xfe - 0x40 + 1) + (test[i + 1] - 0x40)) * 2;

            sm = buff[buff_pos];
            ym = buff[buff_pos + 1];

            printf("%c%c=0x%02x%02x pos:%5d sm=%02d ym=%02d pinyin:%s%s\n",
                test[i], test[i + 1], test[i], test[i + 1], buff_pos,
                sm, ym, g_pinyin_sm[sm].m, g_pinyin_ym[ym].m);

            i += 2;
        }
        else if (test[i] >= 0x80)
        {
            printf("%c%c\n", test[i], test[i + 1]);
            i += 2;
        }
        else
        {
            printf("%c\n", test[i]);
            i++;
        }
    }

    return 0;
}