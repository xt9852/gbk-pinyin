/**
 *\file     main.c
 *\note     GB2312
 *\author   xt
 *\version  1.0.0
 *\date     2022.03.16
 *\brief    生成拼音数据
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
        case 0: return "yu";        // 丂
        case 2: return "shang";     // 丄
        case 4: return "xia";       // 丅
        case 6: return "han";       // 丆
        case 8: return "mian";      // 丏
        case 10: return "chou";     // 丒
        case 12: return "shi";      // 丗
        case 14: return "diu";      // 丟
        case 16: return "qiu";      // 丠
        case 18: return "liang";    // 両
        case 20: return "you";      // 丣
        case 22: return "bing";     // 並
        case 24: return "jiu";      // 丩
        case 26: return "ji";       // 丮
        case 28: return "jie";      // 丯
        case 30: return "guan";     // 丱
        case 32: return "chan";     // 丳
        case 34: return "zhuo";     // 丵
        case 36: return "ba";       // 丷
        case 38: return "dan";      // 丼
        case 40: return "fu";       // 乀
        case 42: return "yi";       // 乁
        case 44: return "ai";       // 乂
        case 46: return "wu";       // 乄
        case 48: return "jiu";      // 乆
        case 50: return "yi";       // 乊
        case 52: return "yin";      // 乑
        case 54: return "hu";       // 乕
        case 56: return "cheng";    // 乗
        case 58: return "yin";      // 乚
        case 60: return "wan";      // 乛
        case 62: return "gai";      // 乢
        case 64: return "jiu";      // 乣
        case 66: return "hal";      // 乤
        case 68: return "hol";      // 乥
        case 70: return "dou";      // 乧
        case 72: return "shi";      // 乨
        case 74: return "nang";     // 乪
        case 76: return "kal";      // 乫
        case 78: return "keol";     // 乬
        case 80: return "tol"; // 乭
        case 82: return "mol"; // 乮
        case 84: return "ol"; // 乯
        case 86: return "cal"; // 乲
        case 88: return "xue"; // 乴
        case 90: return "yan"; // 乵
        case 92: return "fu"; // 乶
        case 94: return "sha"; // 乷
        case 96: return "na"; // 乸
        case 98: return "gan"; // 乹
        case 100: return "sol"; // 乺
        case 102: return "eol"; // 乻
        case 104: return "cui"; // 乼
        case 106: return "zhe"; // 乽
        case 108: return "luan"; // 乿
        case 110: return "gui"; // 亀
        case 112: return "gan"; // 亁
        case 114: return "luan"; // 亂
        case 116: return "lin"; // 亃
        case 118: return "yi"; // 亄
        case 120: return "jue"; // 亅
        case 122: return "ma"; // 亇
        case 124: return "zhi"; // 亊
        case 126: return ""; // 张
        case 128: return "yu"; // 亐
        case 130: return "si"; // 亖
        case 132: return "sui"; // 亗
        case 134: return "gen"; // 亙
        case 136: return "ya"; // 亜
        case 138: return "qi"; // 亝
        case 140: return "ya"; // 亞
        case 142: return "da"; // 亣
        case 144: return "ye"; // 亪
        case 146: return "xiang"; // 亯
        case 148: return "jing"; // 亰
        case 150: return "ye"; // 亱
        case 152: return "you"; // 亴
        case 154: return "dan"; // 亶
        case 156: return "lian"; // 亷
        case 158: return "duo"; // 亸
        case 160: return "wei"; // 亹
        case 162: return "ji"; // 亼
        case 164: return "ra"; // 亽
        case 166: return "wu"; // 亾
        case 168: return "ba"; // 仈
        case 170: return "bing"; // 仌
        case 172: return "fo"; // 仏
        case 174: return "tao"; // 仐
        case 176: return "eo"; // 仒
        case 178: return "xian"; // 仚
        case 180: return "duo"; // 仛
        case 182: return "hong"; // 仜
        case 184: return "gan"; // 仠
        case 186: return "bo"; // 仢
        case 188: return "chao"; // 仦
        case 190: return "zhang"; // 仧
        case 192: return "shang"; // 仩
        case 194: return "ren"; // 仭
        case 196: return "fan"; // 仮
        case 198: return "miao"; // 仯
        case 200: return "jing"; // 仱
        case 202: return "wo"; // 仴
        case 204: return "yao"; // 仸
        case 206: return "feng"; // 仹
        case 208: return "chuan"; // 仺
        case 210: return "wang"; // 仼
        case 212: return "di"; // 仾
        case 214: return "zhong"; // 伀
        case 216: return "pei"; // 伂
        case 218: return "yu"; // 伃
        case 220: return "diao"; // 伄
        case 222: return "dun"; // 伅
        case 224: return "wu"; // 伆
        case 226: return "yi"; // 伇
        case 228: return "lin"; // 伈
        case 230: return "fan"; // 伋
        case 232: return "ai"; // 伌
        case 234: return "yin"; // 伒
        case 236: return "pi"; // 伓
        case 238: return "dan"; // 伔
        case 240: return "fu"; // 伕
        case 242: return "tang"; // 伖
        case 244: return "zu"; // 伜
        case 246: return "yun"; // 伝
        case 248: return "ju"; // 伡
        case 250: return "qian"; // 伣
        case 252: return "xun"; // 伨
        case 254: return "xin"; // 伩
        case 256: return "ze"; // 伬
        case 258: return "xian"; // 伭
        case 260: return "nu"; // 伮
        case 262: return "ni"; // 伱
        case 264: return "xie"; // 伳
        case 266: return "xu"; // 伵
        case 268: return "zhou"; // 伷
        case 270: return "qu"; // 伹
        case 272: return "beng"; // 伻
        case 274: return "pi"; // 伾
        case 276: return "yi"; // 伿
        case 278: return "shi"; // 佀
        case 280: return "yi"; // 佁
        case 282: return "zheng"; // 佂
        case 284: return "gan"; // 佄
        case 286: return "mai"; // 佅
        case 288: return "zhu"; // 佇
        case 290: return "bu"; // 佈
        case 292: return "qu"; // 佉
        case 294: return "bi"; // 佊
        case 296: return "zhao"; // 佋
        case 298: return "ci"; // 佌
        case 300: return "yang"; // 佒
        case 302: return "zhan"; // 佔
        case 304: return "bi"; // 佖
        case 306: return "xian"; // 佡
        case 308: return "qu"; // 佢
        case 310: return "shi"; // 佦
        case 312: return "bao"; // 佨
        case 314: return "huai"; // 佪
        case 316: return "ge"; // 佫
        case 318: return "xiang"; // 佭
        case 320: return "e"; // 佮
        case 322: return "fa"; // 佱
        case 324: return "ming"; // 佲
        case 326: return "bing"; // 併
        case 328: return "hen"; // 佷
        case 330: return "huo"; // 佸
        case 332: return "gui"; // 佹
        case 334: return "quan"; // 佺
        case 336: return "ci"; // 佽
        case 338: return "xing"; // 侀
        case 340: return "shen"; // 侁
        case 342: return "tuo"; // 侂
        case 344: return "gai"; // 侅
        case 346: return "lai"; // 來
        case 348: return "yi"; // 侇
        case 350: return "guang"; // 侊
        case 352: return "yin"; // 侌
        case 354: return "mi"; // 侎
        case 356: return "xu"; // 侐
        case 358: return "an"; // 侒
        case 360: return "lu"; // 侓
        case 362: return "er"; // 侕
        case 364: return "lun"; // 侖
        case 366: return "cha"; // 侘
        case 368: return "chi"; // 侙
        case 370: return "xun"; // 侚
        case 372: return "zhou"; // 侜
        case 374: return "ru"; // 侞
        case 376: return "jian"; // 侟
        case 378: return "si"; // 価
        case 380: return "dai"; // 侢
        case 382: return "ta"; // 侤
        case 384: return "ning"; // 侫
        case 386: return "jin"; // 侭
        case 388: return "jiong"; // 侰
        case 390: return "ting"; // 侱
        case 392: return "zhen"; // 侲
        case 394: return "zuo"; // 侳
        case 396: return "chou"; // 侴
        case 398: return "lu"; // 侶
        case 400: return "ju"; // 侷
        case 402: return "dou"; // 侸
        case 404: return "ting"; // 侹
        case 406: return "shen"; // 侺
        case 408: return "tuo"; // 侻
        case 410: return "bo"; // 侼
        case 412: return "nan"; // 侽
        case 414: return "xiao"; // 侾
        case 416: return "tui"; // 俀
        case 418: return "yu"; // 俁
        case 420: return "xi"; // 係
        case 422: return "xu"; // 俆
        case 424: return "guang"; // 俇
        case 426: return "ku"; // 俈
        case 428: return "wu"; // 俉
        case 430: return "yi"; // 俋
        case 432: return "fu"; // 俌
        case 434: return "lang"; // 俍
        case 436: return "hun"; // 俒
        case 438: return "ying"; // 俓
        case 440: return "qian"; // 俔
        case 442: return "san"; // 俕
        case 444: return "pei"; // 俖
        case 446: return "xi"; // 俙
        case 448: return "mian"; // 俛
        case 450: return "xia"; // 俠
        case 452: return "xiu"; // 俢
        case 454: return "di"; // 俤
        case 456: return "ju"; // 俥
        case 458: return "zhi"; // 俧
        case 460: return "lai"; // 俫
        case 462: return "si"; // 俬
        case 464: return "huo"; // 俰
        case 466: return "xiao"; // 俲
        case 468: return "jian"; // 俴
        case 470: return "biao"; // 俵
        case 472: return "chu"; // 俶
        case 474: return "fei"; // 俷
        case 476: return "ya"; // 俹
        case 478: return "bei"; // 俻
        case 480: return "yu"; // 俼
        case 482: return "xin"; // 俽
        case 484: return "hu"; // 俿
        case 486: return "chang"; // 倀
        case 488: return "zhi"; // 倁
        case 490: return "bing"; // 倂
        case 492: return "jiu"; // 倃
        case 494: return "yao"; // 倄
        case 496: return "zu"; // 倅
        case 498: return "liang"; // 倆
        case 500: return "wan"; // 倇
        case 502: return "lai"; // 倈
        case 504: return "cang"; // 倉
        case 506: return "zong"; // 倊
        case 508: return ""; // 张
        case 510: return "ge"; // 個
        case 512: return "tian"; // 倎
        case 514: return "shu"; // 倐
        case 516: return "men"; // 們
        case 518: return "dan"; // 倓
        case 520: return "zhui"; // 倕
        case 522: return "xing"; // 倖
        case 524: return "peng"; // 倗
        case 526: return "qi"; // 倛
        case 528: return "gan"; // 倝
        case 530: return "liang"; // 倞
        case 532: return "sui"; // 倠
        case 534: return "jie"; // 倢
        case 536: return "fang"; // 倣
        case 538: return "zhi"; // 値
        case 540: return "zong"; // 倧
        case 542: return "lun"; // 倫
        case 544: return "song"; // 倯
        case 546: return "leng"; // 倰
        case 548: return "hun"; // 倱
        case 550: return "dong"; // 倲
        case 552: return "zi"; // 倳
        case 554: return "ben"; // 倴
        case 556: return "wu"; // 倵
        case 558: return "ju"; // 倶
        case 560: return "nai"; // 倷
        case 562: return "cai"; // 倸
        case 564: return "jian"; // 倹
        case 566: return "ye"; // 倻
        case 568: return "sha"; // 倽
        case 570: return "qie"; // 倿
        case 572: return "ying"; // 偀
        case 574: return "cheng"; // 偁
        case 576: return "jian"; // 偂
        case 578: return "ru"; // 偄
        case 580: return "zhong"; // 偅
        case 582: return "chun"; // 偆
        case 584: return "wei"; // 偉
        case 586: return "yu"; // 偊
        case 588: return "bing"; // 偋
        case 590: return "ti"; // 偍
        case 592: return "yan"; // 偐
        case 594: return "feng"; // 偑
        case 596: return "dang"; // 偒
        case 598: return "wo"; // 偓
        case 600: return "e"; // 偔
        case 602: return "che"; // 偖
        case 604: return "sheng"; // 偗
        case 606: return "kan"; // 偘
        case 608: return "di"; // 偙
        case 610: return "cha"; // 偛
        case 612: return "bei"; // 偝
        case 614: return "ye"; // 偞
        case 616: return "huang"; // 偟
        case 618: return "yao"; // 偠
        case 620: return "zhan"; // 偡
        case 622: return "qiao"; // 偢
        case 624: return "yan"; // 偣
        case 626: return "you"; // 偤
        case 628: return "xu"; // 偦
        case 630: return "zha"; // 偧
        case 632: return "ci"; // 偨
        case 634: return "fu"; // 偩
        case 636: return "bi"; // 偪
        case 638: return "zhi"; // 偫
        case 640: return "mian"; // 偭
        case 642: return "ji"; // 偮
        case 644: return "yi"; // 偯
        case 646: return "xie"; // 偰
        case 648: return "xun"; // 偱
        case 650: return "cai"; // 偲
        case 652: return "duan"; // 偳
        case 654: return "ce"; // 側
        case 656: return "zhen"; // 偵
        case 658: return "tou"; // 偸
        case 660: return "bei"; // 偹
        case 662: return "zan"; // 偺
        case 664: return "jie"; // 偼
        case 666: return "wei"; // 偽
        case 668: return "sou"; // 傁
        case 670: return "zhi"; // 傂
        case 672: return "su"; // 傃
        case 674: return "xia"; // 傄
        case 676: return "yuan"; // 傆
        case 678: return "rong"; // 傇
        case 680: return "nu"; // 傉
        case 682: return "yun"; // 傊
        case 684: return "gou"; // 傋
        case 686: return "ma"; // 傌
        case 688: return "dian"; // 傎
        case 690: return "tang"; // 傏
        case 692: return "hao"; // 傐
        case 694: return "jie"; // 傑
        case 696: return "xi"; // 傒
        case 698: return "shan"; // 傓
        case 700: return "jian"; // 傔
        case 702: return "jue"; // 傕
        case 704: return "chen"; // 傖
        case 706: return "chu"; // 傗
        case 708: return "san"; // 傘
        case 710: return "bei"; // 備
        case 712: return "xiao"; // 傚
        case 714: return "yong"; // 傛
        case 716: return "yao"; // 傜
        case 718: return "ta"; // 傝
        case 720: return "suo"; // 傞
        case 722: return "yang"; // 傟
        case 724: return "fa"; // 傠
        case 726: return "bing"; // 傡
        case 728: return "xiang"; // 傢
        case 730: return "zai"; // 傤
        case 732: return "gu"; // 傦
        case 734: return "can"; // 傪
        case 736: return "lei"; // 傫
        case 738: return "chong"; // 傭
        case 740: return "zao"; // 傮
        case 742: return "zong"; // 傯
        case 744: return "beng"; // 傰
        case 746: return "shuan"; // 傱
        case 748: return "chuan"; // 傳
        case 750: return "yu"; // 傴
        case 752: return "zhai"; // 債
        case 754: return "qi"; // 傶
        case 756: return "shang"; // 傷
        case 758: return "chuan"; // 傸
        case 760: return "jing"; // 傹
        case 762: return "han"; // 傼
        case 764: return "zhang"; // 傽
        case 766: return "qing"; // 傾
        case 768: return "yan"; // 傿
        case 770: return "di"; // 僀
        case 772: return "xie"; // 僁
        case 774: return "lu"; // 僂
        case 776: return "bei"; // 僃
        case 778: return "biao"; // 僄
        case 780: return "jin"; // 僅
        case 782: return "lian"; // 僆
        case 784: return "liao"; // 僇
        case 786: return "man"; // 僈
        case 788: return "qian"; // 僉
        case 790: return "xian"; // 僊
        case 792: return "tan"; // 僋
        case 794: return "ying"; // 僌
        case 796: return "dong"; // 働
        case 798: return "zhuan"; // 僎
        case 800: return "shan"; // 僐
        case 802: return "qiao"; // 僑
        case 804: return "jiong"; // 僒
        case 806: return "tui"; // 僓
        case 808: return "zun"; // 僔
        case 810: return "pu"; // 僕
        case 812: return "lao"; // 僗
        case 814: return "chang"; // 僘
        case 816: return "guang"; // 僙
        case 818: return "qi"; // 僛
        case 820: return "deng"; // 僜
        case 822: return "zhuan"; // 僝
        case 824: return "wei"; // 僞
        case 826: return "ji"; // 僟
        case 828: return "bo"; // 僠
        case 830: return "hui"; // 僡
        case 832: return "chuan"; // 僢
        case 834: return "tie"; // 僣
        case 836: return "dan"; // 僤
        case 838: return "yao"; // 僥
        case 840: return "fen"; // 僨
        case 842: return "xian"; // 僩
        case 844: return "yu"; // 僪
        case 846: return "e"; // 僫
        case 848: return "lin"; // 僯
        case 850: return "bo"; // 僰
        case 852: return "gu"; // 僱
        case 854: return "xian"; // 僲
        case 856: return "xian"; // 僴
        case 858: return "min"; // 僶
        case 860: return "ye"; // 僷
        case 862: return "jin"; // 僸
        case 864: return "jia"; // 價
        case 866: return "qiao"; // 僺
        case 868: return "feng"; // 僼
        case 870: return "zhou"; // 僽
        case 872: return "ai"; // 僾
        case 874: return "sai"; // 僿
        case 876: return "yi"; // 儀
        case 878: return "jun"; // 儁
        case 880: return "nong"; // 儂
        case 882: return "chan"; // 儃
        case 884: return "yi"; // 億
        case 886: return "dang"; // 儅
        case 888: return "kuai"; // 儈
        case 890: return ""; // 张
        case 892: return "jian"; // 儉
        case 894: return "chu"; // 儊
        case 896: return "jiao"; // 儌
        case 898: return "sha"; // 儍
        case 900: return "zai"; // 儎
        case 902: return "can"; // 儏
        case 904: return "bin"; // 儐
        case 906: return "an"; // 儑
        case 908: return "tai"; // 儓
        case 910: return "chou"; // 儔
        case 912: return "chai"; // 儕
        case 914: return "lan"; // 儖
        case 916: return "yi"; // 儗
        case 918: return "jin"; // 儘
        case 920: return "qian"; // 儙
        case 922: return "meng"; // 儚
        case 924: return "wu"; // 儛
        case 926: return "ning"; // 儜
        case 928: return "qiong"; // 儝
        case 930: return "ni"; // 儞
        case 932: return "chang"; // 償
        case 934: return "la"; // 儠
        case 936: return "lu"; // 儢
        case 938: return "kuang"; // 儣
        case 940: return "bao"; // 儤
        case 942: return "yu"; // 儥
        case 944: return "biao"; // 儦
        case 946: return "zan"; // 儧
        case 948: return "zhi"; // 儨
        case 950: return "si"; // 儩
        case 952: return "you"; // 優
        case 954: return "hao"; // 儫
        case 956: return "jing"; // 儬
        case 958: return "qin"; // 儭
        case 960: return "li"; // 儮
        case 962: return "teng"; // 儯
        case 964: return "wei"; // 儰
        case 966: return "long"; // 儱
        case 968: return "chu"; // 儲
        case 970: return "chan"; // 儳
        case 972: return "xiang"; // 儴
        case 974: return "tiao"; // 儵
        case 976: return "hui"; // 儶
        case 978: return "li"; // 儷
        case 980: return "luo"; // 儸
        case 982: return "zan"; // 儹
        case 984: return "nuo"; // 儺
        case 986: return "tang"; // 儻
        case 988: return "yan"; // 儼
        case 990: return "lei"; // 儽
        case 992: return "nang"; // 儾
        case 994: return "zan"; // 兂
        case 996: return "xiong"; // 兇
        case 998: return "dui"; // 兊
        case 1000: return "dui"; // 兌
        case 1002: return "tu"; // 兎
        case 1004: return "chang"; // 兏
        case 1006: return "er"; // 児
        case 1008: return "er"; // 兒
        case 1010: return "jin"; // 兓
        case 1012: return "yan"; // 兗
        case 1014: return "shi"; // 兘
        case 1016: return "shi"; // 兙
        case 1018: return "qian"; // 兛
        case 1020: return "gong"; // 兝
        case 1022: return "hao"; // 兞
        case 1024: return "shen"; // 兟
        case 1026: return "dou"; // 兠
        case 1028: return "bai"; // 兡
        case 1030: return "gong"; // 兣
        case 1032: return "huang"; // 兤
        case 1034: return "wu"; // 兦
        case 1036: return "na"; // 內
        case 1038: return "liang"; // 兩
        case 1040: return "yu"; // 兪
        case 1042: return "han"; // 兯
        case 1044: return "tian"; // 兲
        case 1046: return "bun"; // 兺
        case 1048: return "ji"; // 兾
        case 1050: return "yi"; // 兿
        case 1052: return "mao"; // 冃
        case 1054: return "ran"; // 冄
        case 1056: return "yan"; // 円
        case 1058: return "mao"; // 冇
        case 1060: return "ce"; // 冊
        case 1062: return "jiong"; // 冋
        case 1064: return "gua"; // 冎
        case 1066: return "jiong"; // 冏
        case 1068: return "mao"; // 冐
        case 1070: return "zhou"; // 冑
        case 1072: return "gou"; // 冓
        case 1074: return "xu"; // 冔
        case 1076: return "you"; // 冘
        case 1078: return "kan"; // 冚
        case 1080: return "yi"; // 冝
        case 1082: return "mi"; // 冞
        case 1084: return "shi"; // 冟
        case 1086: return "meng"; // 冡
        case 1088: return "ju"; // 冣
        case 1090: return "kou"; // 冦
        case 1092: return "min"; // 冧
        case 1094: return "fu"; // 冨
        case 1096: return "xie"; // 冩
        case 1098: return "mi"; // 冪
        case 1100: return "tai"; // 冭
        case 1102: return "gang"; // 冮
        case 1104: return "hu"; // 冴
        case 1106: return "pan"; // 冸
        case 1108: return "fu"; // 冹
        case 1110: return "min"; // 冺
        case 1112: return "qia"; // 冾
        case 1114: return "jian"; // 冿
        case 1116: return "sou"; // 凁
        case 1118: return "mei"; // 凂
        case 1120: return "tu"; // 凃
        case 1122: return "gu"; // 凅
        case 1124: return "jing"; // 凈
        case 1126: return "qing"; // 凊
        case 1128: return "dong"; // 凍
        case 1130: return "gan"; // 凎
        case 1132: return "yin"; // 凐
        case 1134: return "ai"; // 凒
        case 1136: return "li"; // 凓
        case 1138: return "cang"; // 凔
        case 1140: return "ming"; // 凕
        case 1142: return "zhun"; // 凖
        case 1144: return "cui"; // 凗
        case 1146: return "si"; // 凘
        case 1148: return "duo"; // 凙
        case 1150: return "jin"; // 凚
        case 1152: return "lin"; // 凜
        case 1154: return "xi"; // 凞
        case 1156: return "dou"; // 凟
        case 1158: return "fan"; // 凢
        case 1160: return "fan"; // 凣
        case 1162: return "ju"; // 凥
        case 1164: return "chu"; // 処
        case 1166: return "zheng"; // 凧
        case 1168: return "feng"; // 凨
        case 1170: return "mu"; // 凩
        case 1172: return "zhi"; // 凪
        case 1174: return "feng"; // 凬
        case 1176: return "feng"; // 凮
        case 1178: return "kai"; // 凱
        case 1180: return "gan"; // 凲
        case 1182: return "ping"; // 凴
        case 1184: return "kuai"; // 凷
        case 1186: return "han"; // 凾
        case 1188: return "ren"; // 刄
        case 1190: return "chuang"; // 刅
        case 1192: return "ji"; // 刉
        case 1194: return "qian"; // 刋
        case 1196: return "cun"; // 刌
        case 1198: return "ji"; // 刏
        case 1200: return "dan"; // 刐
        case 1202: return "wan"; // 刓
        case 1204: return "jue"; // 刔
        case 1206: return "li"; // 刕
        case 1208: return "fu"; // 刜
        case 1210: return "qu"; // 刞
        case 1212: return "diao"; // 刟
        case 1214: return "min"; // 刡
        case 1216: return "ling"; // 刢
        case 1218: return "zhong"; // 刣
        case 1220: return "bie"; // 別
        case 1222: return "jie"; // 刦
        case 1224: return "jie"; // 刧
        case 1226: return "shan"; // 刪
        case 1228: return "chan"; // 刬
        case 1230: return "geng"; // 刯
        case 1232: return "chuang"; // 刱
        case 1234: return "kui"; // 刲
        case 1236: return "duo"; // 刴
        case 1238: return "er"; // 刵
        case 1240: return "jie"; // 刼
        case 1242: return "ci"; // 刾
        case 1244: return "jing"; // 剄
        case 1246: return "dou"; // 剅
        case 1248: return "luo"; // 剆
        case 1250: return "ze"; // 則
        case 1252: return "yuan"; // 剈
        case 1254: return "cuo"; // 剉
        case 1256: return "ke"; // 剋
        case 1258: return "cha"; // 剎
        case 1260: return "chuang"; // 剏
        case 1262: return "cuo"; // 剒
        case 1264: return "li"; // 剓
        case 1266: return "fei"; // 剕
        case 1268: return "chan"; // 剗
        case 1270: return "qi"; // 剘
        case 1272: return ""; // 张
        case 1274: return "chuang"; // 剙
        case 1276: return "zi"; // 剚
        case 1278: return "gang"; // 剛
        case 1280: return "bao"; // 剝
        case 1282: return "duo"; // 剟
        case 1284: return "lue"; // 剠
        case 1286: return "du"; // 剢
        case 1288: return "jian"; // 剣
        case 1290: return "ji"; // 剤
        case 1292: return "yan"; // 剦
        case 1294: return "huo"; // 剨
        case 1296: return "du"; // 剫
        case 1298: return "duan"; // 剬
        case 1300: return "wu"; // 剭
        case 1302: return "gua"; // 剮
        case 1304: return "sheng"; // 剰
        case 1306: return "jian"; // 剱
        case 1308: return "da"; // 剳
        case 1310: return "ai"; // 剴
        case 1312: return "chuang"; // 創
        case 1314: return "chuan"; // 剶
        case 1316: return "chan"; // 剷
        case 1318: return "tuan"; // 剸
        case 1320: return "lu"; // 剹
        case 1322: return "li"; // 剺
        case 1324: return "peng"; // 剻
        case 1326: return "shan"; // 剼
        case 1328: return "kou"; // 剾
        case 1330: return "gua"; // 劀
        case 1332: return "hua"; // 劃
        case 1334: return "zha"; // 劄
        case 1336: return "zhu"; // 劅
        case 1338: return "lian"; // 劆
        case 1340: return "ju"; // 劇
        case 1342: return "liu"; // 劉
        case 1344: return "gui"; // 劊
        case 1346: return "jiao"; // 劋
        case 1348: return "gui"; // 劌
        case 1350: return "jian"; // 劍
        case 1352: return "jian"; // 劎
        case 1354: return "tang"; // 劏
        case 1356: return "ji"; // 劑
        case 1358: return "jian"; // 劒
        case 1360: return "jian"; // 劔
        case 1362: return "zhi"; // 劕
        case 1364: return "chan"; // 劖
        case 1366: return "zuan"; // 劗
        case 1368: return "mo"; // 劘
        case 1370: return "li"; // 劙
        case 1372: return "zhu"; // 劚
        case 1374: return "ya"; // 劜
        case 1376: return "jin"; // 劤
        case 1378: return "keng"; // 劥
        case 1380: return "lie"; // 劦
        case 1382: return "zhi"; // 劧
        case 1384: return "yi"; // 劮
        case 1386: return "zhu"; // 劯
        case 1388: return "mo"; // 劰
        case 1390: return "lao"; // 労
        case 1392: return "juan"; // 劵
        case 1394: return "kou"; // 劶
        case 1396: return "yang"; // 劷
        case 1398: return "wa"; // 劸
        case 1400: return "xiao"; // 効
        case 1402: return "mou"; // 劺
        case 1404: return "kuang"; // 劻
        case 1406: return "jie"; // 劼
        case 1408: return "lie"; // 劽
        case 1410: return "ke"; // 勀
        case 1412: return "jin"; // 勁
        case 1414: return "gao"; // 勂
        case 1416: return "min"; // 勄
        case 1418: return "chi"; // 勅
        case 1420: return "lang"; // 勆
        case 1422: return "yong"; // 勈
        case 1424: return "ke"; // 勊
        case 1426: return "juan"; // 勌
        case 1428: return "qing"; // 勍
        case 1430: return "lu"; // 勎
        case 1432: return "bu"; // 勏
        case 1434: return "lai"; // 勑
        case 1436: return "kai"; // 勓
        case 1438: return "mian"; // 勔
        case 1440: return "dong"; // 動
        case 1442: return "xu"; // 勗
        case 1444: return "wu"; // 務
        case 1446: return "yi"; // 勚
        case 1448: return "xun"; // 勛
        case 1450: return "yang"; // 勜
        case 1452: return "sheng"; // 勝
        case 1454: return "lao"; // 勞
        case 1456: return "lu"; // 勠
        case 1458: return "piao"; // 勡
        case 1460: return "shi"; // 勢
        case 1462: return "ji"; // 勣
        case 1464: return "jiang"; // 勥
        case 1466: return "jiao"; // 勦
        case 1468: return "quan"; // 勧
        case 1470: return "xiang"; // 勨
        case 1472: return "yi"; // 勩
        case 1474: return "jue"; // 勪
        case 1476: return "fan"; // 勫
        case 1478: return "juan"; // 勬
        case 1480: return "dong"; // 勭
        case 1482: return "ju"; // 勮
        case 1484: return "dan"; // 勯
        case 1486: return "mai"; // 勱
        case 1488: return "xun"; // 勲
        case 1490: return "xun"; // 勳
        case 1492: return "lu"; // 勴
        case 1494: return "li"; // 勵
        case 1496: return "che"; // 勶
        case 1498: return "xiang"; // 勷
        case 1500: return "quan"; // 勸
        case 1502: return "yun"; // 勻
        case 1504: return "jiu"; // 勼
        case 1506: return "bao"; // 勽
        case 1508: return "mangmi"; // 匁
        case 1510: return "bi"; // 匂
        case 1512: return "gai"; // 匃
        case 1514: return "gai"; // 匄
        case 1516: return "yi"; // 匇
        case 1518: return "peng"; // 匉
        case 1520: return "ju"; // 匊
        case 1522: return "yao"; // 匋
        case 1524: return "ge"; // 匌
        case 1526: return "e"; // 匎
        case 1528: return "gong"; // 匑
        case 1530: return "da"; // 匒
        case 1532: return "jiu"; // 匓
        case 1534: return "gong"; // 匔
        case 1536: return "nao"; // 匘
        case 1538: return "jiu"; // 匛
        case 1540: return "yi"; // 匜
        case 1542: return "jiang"; // 匞
        case 1544: return "kang"; // 匟
        case 1546: return "hu"; // 匢
        case 1548: return "qu"; // 匤
        case 1550: return "fan"; // 匥
        case 1552: return "qie"; // 匧
        case 1554: return "zang"; // 匨
        case 1556: return "kuang"; // 匩
        case 1558: return "hu"; // 匫
        case 1560: return "yu"; // 匬
        case 1562: return "gui"; // 匭
        case 1564: return "hui"; // 匯
        case 1566: return "dan"; // 匰
        case 1568: return "kui"; // 匱
        case 1570: return "lian"; // 匲
        case 1572: return "lian"; // 匳
        case 1574: return "suan"; // 匴
        case 1576: return "du"; // 匵
        case 1578: return "jiu"; // 匶
        case 1580: return "jue"; // 匷
        case 1582: return "xi"; // 匸
        case 1584: return "e"; // 匼
        case 1586: return "yan"; // 匽
        case 1588: return "qu"; // 區
        case 1590: return "xun"; // 卂
        case 1592: return "nian"; // 卄
        case 1594: return "zu"; // 卆
        case 1596: return "shi"; // 卋
        case 1598: return "xi"; // 卌
        case 1600: return "wan"; // 卍
        case 1602: return "wan"; // 卐
        case 1604: return "xie"; // 協
        case 1606: return "dan"; // 単
        case 1608: return "ji"; // 卙
        case 1610: return "lu"; // 卛
        case 1612: return "guan"; // 卝
        case 1614: return "xi"; // 卥
        case 1616: return "xie"; // 卨
        case 1618: return "jie"; // 卪
        case 1620: return "ang"; // 卬
        case 1622: return "qiong"; // 卭
        case 1624: return "shao"; // 卲
        case 1626: return "chi"; // 卶
        case 1628: return "su"; // 卹
        case 1630: return "que"; // 卻
        case 1632: return "kui"; // 卼
        case 1634: return "ji"; // 卽
        case 1636: return "e"; // 卾
        case 1638: return "xi"; // 厀
        case 1640: return "san"; // 厁
        case 1642: return "yan"; // 厃
        case 1644: return "zhe"; // 厇
        case 1646: return "han"; // 厈
        case 1648: return "ya"; // 厊
        case 1650: return "di"; // 厎
        case 1652: return "zha"; // 厏
        case 1654: return ""; // 张
        case 1656: return "pang"; // 厐
        case 1658: return "ae"; // 厑
        case 1660: return "qie"; // 厒
        case 1662: return "ya"; // 厓
        case 1664: return "zhi"; // 厔
        case 1666: return "mang"; // 厖
        case 1668: return "ti"; // 厗
        case 1670: return "she"; // 厙
        case 1672: return "ting"; // 厛
        case 1674: return "zui"; // 厜
        case 1676: return "fei"; // 厞
        case 1678: return "ce"; // 厠
        case 1680: return "yuan"; // 厡
        case 1682: return "li"; // 厤
        case 1684: return "dian"; // 厧
        case 1686: return "jin"; // 厪
        case 1688: return "ao"; // 厫
        case 1690: return "gui"; // 厬
        case 1692: return "yan"; // 厭
        case 1694: return "li"; // 厯
        case 1696: return "an"; // 厰
        case 1698: return "lan"; // 厱
        case 1700: return "li"; // 厲
        case 1702: return "yan"; // 厳
        case 1704: return "yan"; // 厴
        case 1706: return "yuan"; // 厵
        case 1708: return "gong"; // 厷
        case 1710: return "mian"; // 厸
        case 1712: return "qiu"; // 厹
        case 1714: return "qu"; // 厺
        case 1716: return "keum"; // 厼
        case 1718: return "lei"; // 厽
        case 1720: return "du"; // 厾
        case 1722: return "hui"; // 叀
        case 1724: return "can"; // 參
        case 1726: return "shen"; // 叄
        case 1728: return "shen"; // 叅
        case 1730: return "ai"; // 叆
        case 1732: return "dai"; // 叇
        case 1734: return "shou"; // 収
        case 1736: return "guai"; // 叏
        case 1738: return "ba"; // 叐
        case 1740: return "ruo"; // 叒
        case 1742: return "li"; // 叓
        case 1744: return "yi"; // 叕
        case 1746: return "jia"; // 叚
        case 1748: return "sou"; // 叜
        case 1750: return "ji"; // 叝
        case 1752: return "wei"; // 叞
        case 1754: return "rui"; // 叡
        case 1756: return "cong"; // 叢
        case 1758: return "gua"; // 叧
        case 1760: return "qiu"; // 叴
        case 1762: return "chi"; // 叺
        case 1764: return "dug"; // 叾
        case 1766: return "hong"; // 叿
        case 1768: return "mie"; // 吀
        case 1770: return "mang"; // 吂
        case 1772: return "xuan"; // 吅
        case 1774: return "ji"; // 吇
        case 1776: return "duo"; // 吋
        case 1778: return "ye"; // 吔
        case 1780: return "ou"; // 吘
        case 1782: return "huo"; // 吙
        case 1784: return "yi"; // 吚
        case 1786: return "chou"; // 吜
        case 1788: return "qin"; // 吢
        case 1790: return "ge"; // 吤
        case 1792: return "bu"; // 吥
        case 1794: return "e"; // 吪
        case 1796: return "hong"; // 吰
        case 1798: return "wu"; // 吳
        case 1800: return "na"; // 吶
        case 1802: return "jue"; // 吷
        case 1804: return "dou"; // 吺
        case 1806: return "ou"; // 吽
        case 1808: return "gao"; // 吿
        case 1810: return "jun"; // 呁
        case 1812: return "lu"; // 呂
        case 1814: return "ge"; // 呄
        case 1816: return "wen"; // 呅
        case 1818: return "qi"; // 呇
        case 1820: return "wu"; // 呉
        case 1822: return "jiao"; // 呌
        case 1824: return "yun"; // 呍
        case 1826: return "chi"; // 呎
        case 1828: return "sheng"; // 呏
        case 1830: return "tian"; // 呑
        case 1832: return "wen"; // 呚
        case 1834: return "e"; // 呝
        case 1836: return "shi"; // 呞
        case 1838: return "juan"; // 呟
        case 1840: return "pen"; // 呠
        case 1842: return "wen"; // 呡
        case 1844: return "mou"; // 呣
        case 1846: return "ran"; // 呥
        case 1848: return "di"; // 呧
        case 1850: return "shi"; // 呩
        case 1852: return "zhou"; // 呪
        case 1854: return "tie"; // 呫
        case 1856: return "xi"; // 呬
        case 1858: return "yi"; // 呭
        case 1860: return "qi"; // 呮
        case 1862: return "ping"; // 呯
        case 1864: return "zi"; // 呰
        case 1866: return "hou"; // 呴
        case 1868: return "yi"; // 呹
        case 1870: return "hao"; // 呺
        case 1872: return "ya"; // 呾
        case 1874: return "ka"; // 呿
        case 1876: return "han"; // 咁
        case 1878: return "tuo"; // 咃
        case 1880: return "pou"; // 咅
        case 1882: return "bi"; // 咇
        case 1884: return "fu"; // 咈
        case 1886: return "yang"; // 咉
        case 1888: return "he"; // 咊
        case 1890: return "tai"; // 咍
        case 1892: return "da"; // 咑
        case 1894: return "wa"; // 咓
        case 1896: return "zuo"; // 咗
        case 1898: return "bu"; // 咘
        case 1900: return "ta"; // 咜
        case 1902: return "xian"; // 咞
        case 1904: return "huo"; // 咟
        case 1906: return "qi"; // 咠
        case 1908: return "er"; // 咡
        case 1910: return "e"; // 咢
        case 1912: return "xi"; // 咥
        case 1914: return "zhou"; // 咮
        case 1916: return "xun"; // 咰
        case 1918: return "xiao"; // 咲
        case 1920: return "kua"; // 咵
        case 1922: return "huai"; // 咶
        case 1924: return "tao"; // 咷
        case 1926: return "e"; // 咹
        case 1928: return "xuan"; // 咺
        case 1930: return "wai"; // 咼
        case 1932: return "lao"; // 咾
        case 1934: return "tong"; // 哃
        case 1936: return "xiong"; // 哅
        case 1938: return "you"; // 哊
        case 1940: return "mi"; // 哋
        case 1942: return "nian"; // 哖
        case 1944: return "xing"; // 哘
        case 1946: return "pun"; // 哛
        case 1948: return "hao"; // 哠
        case 1950: return "yuan"; // 員
        case 1952: return "ka"; // 哢
        case 1954: return "pou"; // 哣
        case 1956: return "mang"; // 哤
        case 1958: return "zu"; // 哫
        case 1960: return "he"; // 哬
        case 1962: return "xian"; // 哯
        case 1964: return "lao"; // 哰
        case 1966: return "bei"; // 哱
        case 1968: return "lang"; // 哴
        case 1970: return "ba"; // 哵
        case 1972: return "mie"; // 哶
        case 1974: return "lie"; // 哷
        case 1976: return "sui"; // 哸
        case 1978: return "fu"; // 哹
        case 1980: return "han"; // 哻
        case 1982: return "yue"; // 哾
        case 1984: return "you"; // 唀
        case 1986: return "gu"; // 唂
        case 1988: return "gu"; // 唃
        case 1990: return "bei"; // 唄
        case 1992: return "han"; // 唅
        case 1994: return "yi"; // 唈
        case 1996: return "jia"; // 唊
        case 1998: return "tu"; // 唋
        case 2000: return "yan"; // 唌
        case 2002: return "wan"; // 唍
        case 2004: return "li"; // 唎
        case 2006: return "qiu"; // 唒
        case 2008: return "che"; // 唓
        case 2010: return "zao"; // 唕
        case 2012: return "ya"; // 唖
        case 2014: return "dou"; // 唗
        case 2016: return "qi"; // 唘
        case 2018: return "di"; // 唙
        case 2020: return "qin"; // 唚
        case 2022: return "mas"; // 唜
        case 2024: return "gong"; // 唝
        case 2026: return "teo"; // 唞
        case 2028: return "keos"; // 唟
        case 2030: return "liang"; // 唡
        case 2032: return "lang"; // 唥
        case 2034: return "sha"; // 唦
        case 2036: return ""; // 张
        case 2038: return "zo"; // 唨
        case 2040: return "wo"; // 唩
        case 2042: return "yin"; // 唫
        case 2044: return "qi"; // 唭
        case 2046: return "er"; // 唲
        case 2048: return "qiang"; // 唴
        case 2050: return "an"; // 唵
        case 2052: return "jie"; // 唶
        case 2054: return "dian"; // 唸
        case 2056: return "yu"; // 唹
        case 2058: return "tian"; // 唺
        case 2060: return "lai"; // 唻
        case 2062: return "xi"; // 唽
        case 2064: return "ai"; // 啀
        case 2066: return "nou"; // 啂
        case 2068: return "zhao"; // 啅
        case 2070: return "di"; // 啇
        case 2072: return "e"; // 啈
        case 2074: return "xiao"; // 啋
        case 2076: return "qiang"; // 啌
        case 2078: return "tun"; // 啍
        case 2080: return "wu"; // 啎
        case 2082: return "wen"; // 問
        case 2084: return "die"; // 啑
        case 2086: return "gu"; // 啒
        case 2088: return "qi"; // 啓
        case 2090: return "qi"; // 啔
        case 2092: return "dan"; // 啗
        case 2094: return "ye"; // 啘
        case 2096: return "zi"; // 啙
        case 2098: return "bi"; // 啚
        case 2100: return "cui"; // 啛
        case 2102: return "he"; // 啝
        case 2104: return "ya"; // 啞
        case 2106: return "qi"; // 啟
        case 2108: return "zhe"; // 啠
        case 2110: return "liang"; // 啢
        case 2112: return "xian"; // 啣
        case 2114: return "ying"; // 啨
        case 2116: return "gua"; // 啩
        case 2118: return "ze"; // 啫
        case 2120: return "guo"; // 啯
        case 2122: return "luo"; // 啰
        case 2124: return "yan"; // 啱
        case 2126: return "di"; // 啲
        case 2128: return "jue"; // 啳
        case 2130: return "tan"; // 啴
        case 2132: return "geu"; // 啹
        case 2134: return "tang"; // 啺
        case 2136: return "an"; // 啽
        case 2138: return "dan"; // 啿
        case 2140: return "yu"; // 喅
        case 2142: return "zhe"; // 喆
        case 2144: return "zhou"; // 喌
        case 2146: return "chai"; // 喍
        case 2148: return "wai"; // 喎
        case 2150: return "yu"; // 喐
        case 2152: return "zan"; // 喒
        case 2154: return "yao"; // 喓
        case 2156: return "mian"; // 喕
        case 2158: return "hu"; // 喖
        case 2160: return "yun"; // 喗
        case 2162: return "huan"; // 喚
        case 2164: return "yuan"; // 喛
        case 2166: return "ji"; // 喞
        case 2168: return "zhong"; // 喠
        case 2170: return "wei"; // 喡
        case 2172: return "che"; // 喢
        case 2174: return "xu"; // 喣
        case 2176: return "huang"; // 喤
        case 2178: return "duo"; // 喥
        case 2180: return "nie"; // 喦
        case 2182: return "liang"; // 喨
        case 2184: return "yu"; // 喩
        case 2186: return "sang"; // 喪
        case 2188: return "kai"; // 喫
        case 2190: return "qiao"; // 喬
        case 2192: return "yan"; // 喭
        case 2194: return "dan"; // 單
        case 2196: return "ben"; // 喯
        case 2198: return "can"; // 喰
        case 2200: return "yo"; // 喲
        case 2202: return "wei"; // 喴
        case 2204: return "ying"; // 営
        case 2206: return "po"; // 喸
        case 2208: return "bei"; // 喺
        case 2210: return "gib"; // 喼
        case 2212: return "qiao"; // 喿
        case 2214: return "gu"; // 嗀
        case 2216: return "ti"; // 嗁
        case 2218: return "yao"; // 嗂
        case 2220: return "he"; // 嗃
        case 2222: return "qiang"; // 嗆
        case 2224: return "se"; // 嗇
        case 2226: return "yong"; // 嗈
        case 2228: return "gong"; // 嗊
        case 2230: return "xie"; // 嗋
        case 2232: return "ma"; // 嗎
        case 2234: return "cha"; // 嗏
        case 2236: return "hai"; // 嗐
        case 2238: return "ru"; // 嗕
        case 2240: return "wa"; // 嗗
        case 2242: return "ji"; // 嗘
        case 2244: return "beng"; // 嗙
        case 2246: return "wu"; // 嗚
        case 2248: return "qian"; // 嗛
        case 2250: return "zi"; // 嗞
        case 2252: return "lao"; // 嗠
        case 2254: return "wa"; // 嗢
        case 2256: return "jia"; // 嗧
        case 2258: return "suo"; // 嗩
        case 2260: return "cis"; // 嗭
        case 2262: return "sai"; // 嗮
        case 2264: return "go"; // 嗰
        case 2266: return "na"; // 嗱
        case 2268: return "qiang"; // 嗴
        case 2270: return "bi"; // 嗶
        case 2272: return "ao"; // 嗸
        case 2274: return "lian"; // 嗹
        case 2276: return "zui"; // 嗺
        case 2278: return "zhe"; // 嗻
        case 2280: return "mo"; // 嗼
        case 2282: return "tan"; // 嗿
        case 2284: return "jiao"; // 嘂
        case 2286: return "chong"; // 嘃
        case 2288: return "jiao"; // 嘄
        case 2290: return "ge"; // 嘅
        case 2292: return "tan"; // 嘆
        case 2294: return "shan"; // 嘇
        case 2296: return "ai"; // 嘊
        case 2298: return "xiao"; // 嘋
        case 2300: return "lou"; // 嘍
        case 2302: return "jiao"; // 嘐
        case 2304: return "hu"; // 嘑
        case 2306: return "hui"; // 嘒
        case 2308: return "guo"; // 嘓
        case 2310: return "ou"; // 嘔
        case 2312: return "xian"; // 嘕
        case 2314: return "ze"; // 嘖
        case 2316: return "chang"; // 嘗
        case 2318: return "po"; // 嘙
        case 2320: return "de"; // 嘚
        case 2322: return "ma"; // 嘜
        case 2324: return "hu"; // 嘝
        case 2326: return "ga"; // 嘠
        case 2328: return "tang"; // 嘡
        case 2330: return "ye"; // 嘢
        case 2332: return "sai"; // 嘥
        case 2334: return "jiao"; // 嘦
        case 2336: return "xiao"; // 嘨
        case 2338: return "hua"; // 嘩
        case 2340: return "mai"; // 嘪
        case 2342: return "ran"; // 嘫
        case 2344: return "lao"; // 嘮
        case 2346: return "xiao"; // 嘯
        case 2348: return "ji"; // 嘰
        case 2350: return "kui"; // 嘳
        case 2352: return "xiao"; // 嘵
        case 2354: return "hao"; // 嘷
        case 2356: return "mu"; // 嘸
        case 2358: return "qiao"; // 嘺
        case 2360: return "xu"; // 嘼
        case 2362: return "tan"; // 嘽
        case 2364: return "dan"; // 嘾
        case 2366: return "xun"; // 噀
        case 2368: return "wu"; // 噁
        case 2370: return "zun"; // 噂
        case 2372: return "bo"; // 噃
        case 2374: return "kai"; // 噄
        case 2376: return "hui"; // 噅
        case 2378: return "can"; // 噆
        case 2380: return "chuang"; // 噇
        case 2382: return "za"; // 噈
        case 2384: return "dan"; // 噉
        case 2386: return "yu"; // 噊
        case 2388: return "tun"; // 噋
        case 2390: return "xi"; // 噏
        case 2392: return "qi"; // 噐
        case 2394: return "hao"; // 噑
        case 2396: return "lian"; // 噒
        case 2398: return "xu"; // 噓
        case 2400: return "hui"; // 噕
        case 2402: return "yin"; // 噖
        case 2404: return "xun"; // 噚
        case 2406: return "yao"; // 噛
        case 2408: return "si"; // 噝
        case 2410: return "yan"; // 噞
        case 2412: return "ying"; // 噟
        case 2414: return "da"; // 噠
        case 2416: return "dan"; // 噡
        case 2418: return ""; // 张
        case 2420: return "zhou"; // 噣
        case 2422: return "nong"; // 噥
        case 2424: return "yue"; // 噦
        case 2426: return "xie"; // 噧
        case 2428: return "jiao"; // 噭
        case 2430: return "yuan"; // 噮
        case 2432: return "ai"; // 噯
        case 2434: return "yong"; // 噰
        case 2436: return "kuai"; // 噲
        case 2438: return "yu"; // 噳
        case 2440: return "pen"; // 噴
        case 2442: return "dao"; // 噵
        case 2444: return "hen"; // 噷
        case 2446: return "dun"; // 噸
        case 2448: return "dang"; // 噹
        case 2450: return "xin"; // 噺
        case 2452: return "pi"; // 噽
        case 2454: return "yin"; // 噾
        case 2456: return "zui"; // 噿
        case 2458: return "ning"; // 嚀
        case 2460: return "di"; // 嚁
        case 2462: return "lan"; // 嚂
        case 2464: return "ta"; // 嚃
        case 2466: return "wo"; // 嚄
        case 2468: return "xia"; // 嚇
        case 2470: return "ye"; // 嚈
        case 2472: return "duo"; // 嚉
        case 2474: return "pi"; // 嚊
        case 2476: return "zhou"; // 嚋
        case 2478: return "ji"; // 嚌
        case 2480: return "jin"; // 嚍
        case 2482: return "chang"; // 嚐
        case 2484: return "xun"; // 嚑
        case 2486: return "me"; // 嚒
        case 2488: return "ti"; // 嚔
        case 2490: return "lu"; // 嚕
        case 2492: return "hui"; // 嚖
        case 2494: return "bo"; // 嚗
        case 2496: return "you"; // 嚘
        case 2498: return "nie"; // 嚙
        case 2500: return "yin"; // 嚚
        case 2502: return "yo"; // 嚛
        case 2504: return "me"; // 嚜
        case 2506: return "hong"; // 嚝
        case 2508: return "zhe"; // 嚞
        case 2510: return "li"; // 嚟
        case 2512: return "liu"; // 嚠
        case 2514: return "hai"; // 嚡
        case 2516: return "nang"; // 嚢
        case 2518: return "mo"; // 嚤
        case 2520: return "yan"; // 嚥
        case 2522: return "li"; // 嚦
        case 2524: return "lu"; // 嚧
        case 2526: return "long"; // 嚨
        case 2528: return "mo"; // 嚩
        case 2530: return "dan"; // 嚪
        case 2532: return "chen"; // 嚫
        case 2534: return "pin"; // 嚬
        case 2536: return "pi"; // 嚭
        case 2538: return "xiang"; // 嚮
        case 2540: return "me"; // 嚰
        case 2542: return "xi"; // 嚱
        case 2544: return "duo"; // 嚲
        case 2546: return "ku"; // 嚳
        case 2548: return "yan"; // 嚴
        case 2550: return "chan"; // 嚵
        case 2552: return "ying"; // 嚶
        case 2554: return "dim"; // 嚸
        case 2556: return "la"; // 嚹
        case 2558: return "ta"; // 嚺
        case 2560: return "ao"; // 嚻
        case 2562: return "chuo"; // 嚽
        case 2564: return "huan"; // 嚾
        case 2566: return "huo"; // 嚿
        case 2568: return "zhuan"; // 囀
        case 2570: return "nie"; // 囁
        case 2572: return "xiao"; // 囂
        case 2574: return "zha"; // 囃
        case 2576: return "li"; // 囄
        case 2578: return "chan"; // 囅
        case 2580: return "chai"; // 囆
        case 2582: return "li"; // 囇
        case 2584: return "yi"; // 囈
        case 2586: return "luo"; // 囉
        case 2588: return "za"; // 囋
        case 2590: return "su"; // 囌
        case 2592: return "xi"; // 囍
        case 2594: return "zen"; // 囎
        case 2596: return "jian"; // 囏
        case 2598: return "nie"; // 囐
        case 2600: return "zhu"; // 囑
        case 2602: return "lan"; // 囒
        case 2604: return "nie"; // 囓
        case 2606: return "ram"; // 囕
        case 2608: return "lo"; // 囖
        case 2610: return "hui"; // 囘
        case 2612: return "yin"; // 囙
        case 2614: return "nin"; // 囜
        case 2616: return "tuan"; // 団
        case 2618: return "kang"; // 囥
        case 2620: return "yuan"; // 囦
        case 2622: return "jiong"; // 囧
        case 2624: return "pian"; // 囨
        case 2626: return "yun"; // 囩
        case 2628: return "cong"; // 囪
        case 2630: return "hui"; // 囬
        case 2632: return "e"; // 囮
        case 2634: return "guo"; // 囯
        case 2636: return "tong"; // 囲
        case 2638: return "tu"; // 図
        case 2640: return "guo"; // 囶
        case 2642: return "qun"; // 囷
        case 2644: return "ri"; // 囸
        case 2646: return "guo"; // 囻
        case 2648: return "tai"; // 囼
        case 2650: return "guo"; // 圀
        case 2652: return "yin"; // 圁
        case 2654: return "huan"; // 圂
        case 2656: return "han"; // 圅
        case 2658: return "lun"; // 圇
        case 2660: return "guo"; // 國
        case 2662: return "chui"; // 圌
        case 2664: return "wei"; // 圍
        case 2666: return "yuan"; // 圎
        case 2668: return "juan"; // 圏
        case 2670: return "ku"; // 圐
        case 2672: return "pu"; // 圑
        case 2674: return "yuan"; // 園
        case 2676: return "yuan"; // 圓
        case 2678: return "ya"; // 圔
        case 2680: return "tuan"; // 圕
        case 2682: return "tu"; // 圖
        case 2684: return "tu"; // 圗
        case 2686: return "tuan"; // 團
        case 2688: return "lue"; // 圙
        case 2690: return "hui"; // 圚
        case 2692: return "yi"; // 圛
        case 2694: return "luan"; // 圝
        case 2696: return "luan"; // 圞
        case 2698: return "ya"; // 圠
        case 2700: return "tu"; // 圡
        case 2702: return "ting"; // 圢
        case 2704: return "pu"; // 圤
        case 2706: return "lu"; // 圥
        case 2708: return "kuai"; // 圦
        case 2710: return "ya"; // 圧
        case 2712: return "yu"; // 圫
        case 2714: return "qian"; // 圱
        case 2716: return "qian"; // 圲
        case 2718: return "zhuo"; // 圴
        case 2720: return "dang"; // 圵
        case 2722: return "qia"; // 圶
        case 2724: return "xia"; // 圷
        case 2726: return "shan"; // 圸
        case 2728: return "nie"; // 圼
        case 2730: return "mo"; // 圽
        case 2732: return "jia"; // 圿
        case 2734: return "zhi"; // 坁
        case 2736: return "xun"; // 坃
        case 2738: return "yi"; // 坄
        case 2740: return "qin"; // 坅
        case 2742: return "mei"; // 坆
        case 2744: return "keng"; // 坈
        case 2746: return "tun"; // 坉
        case 2748: return "fen"; // 坋
        case 2750: return "bi"; // 坒
        case 2752: return "jing"; // 坓
        case 2754: return "di"; // 坔
        case 2756: return "jing"; // 坕
        case 2758: return "ji"; // 坖
        case 2760: return "di"; // 坘
        case 2762: return "jing"; // 坙
        case 2764: return "pan"; // 坢
        case 2766: return "tang"; // 坣
        case 2768: return "ju"; // 坥
        case 2770: return "zhi"; // 坧
        case 2772: return "gua"; // 坬
        case 2774: return "tai"; // 坮
        case 2776: return "shang"; // 坰
        case 2778: return "yang"; // 坱
        case 2780: return "fo"; // 坲
        case 2782: return "lu"; // 坴
        case 2784: return "qiu"; // 坵
        case 2786: return "gou"; // 坸
        case 2788: return "xue"; // 坹
        case 2790: return "ba"; // 坺
        case 2792: return "ling"; // 坽
        case 2794: return "zhu"; // 坾
        case 2796: return "fu"; // 坿
        case 2798: return "hu"; // 垀
        case 2800: return ""; // 张
        case 2802: return "zhi"; // 垁
        case 2804: return "ao"; // 垇
        case 2806: return "dai"; // 垈
        case 2808: return "pao"; // 垉
        case 2810: return "min"; // 垊
        case 2812: return "ji"; // 垍
        case 2814: return "he"; // 垎
        case 2816: return "lu"; // 垏
        case 2818: return "ci"; // 垐
        case 2820: return "chi"; // 垑
        case 2822: return "yin"; // 垔
        case 2824: return "hou"; // 垕
        case 2826: return "dui"; // 垖
        case 2828: return "zhao"; // 垗
        case 2830: return "fu"; // 垘
        case 2832: return "guang"; // 垙
        case 2834: return "yao"; // 垚
        case 2836: return "duo"; // 垜
        case 2838: return "gui"; // 垝
        case 2840: return "cha"; // 垞
        case 2842: return "yang"; // 垟
        case 2844: return "xie"; // 垥
        case 2846: return "shou"; // 垨
        case 2848: return "bing"; // 垪
        case 2850: return "hong"; // 垬
        case 2852: return "da"; // 垯
        case 2854: return "ka"; // 垰
        case 2856: return "dang"; // 垱
        case 2858: return "hang"; // 垳
        case 2860: return "an"; // 垵
        case 2862: return "xing"; // 垶
        case 2864: return "xian"; // 垷
        case 2866: return "bang"; // 垹
        case 2868: return "fou"; // 垺
        case 2870: return "bei"; // 垻
        case 2872: return "yi"; // 垼
        case 2874: return "yin"; // 垽
        case 2876: return "an"; // 垾
        case 2878: return "xu"; // 垿
        case 2880: return "zhui"; // 埀
        case 2882: return "qin"; // 埁
        case 2884: return "beng"; // 埄
        case 2886: return "fang"; // 埅
        case 2888: return "que"; // 埆
        case 2890: return "yong"; // 埇
        case 2892: return "jun4      "; // 埈
        case 2894: return "jia"; // 埉
        case 2896: return "di"; // 埊
        case 2898: return "lang"; // 埌
        case 2900: return "juan"; // 埍
        case 2902: return "jin"; // 埐
        case 2904: return "zhe"; // 埑
        case 2906: return "lie"; // 埓
        case 2908: return "hua"; // 埖
        case 2910: return "bu"; // 埗
        case 2912: return "jiong"; // 埛
        case 2914: return "ye"; // 埜
        case 2916: return "di"; // 埞
        case 2918: return "ya"; // 埡
        case 2920: return "juan"; // 埢
        case 2922: return "su"; // 埣
        case 2924: return "qing"; // 埥
        case 2926: return "wan"; // 埦
        case 2928: return "ju"; // 埧
        case 2930: return "lun"; // 埨
        case 2932: return "zheng"; // 埩
        case 2934: return "kong"; // 埪
        case 2936: return "chong"; // 埫
        case 2938: return "dong"; // 埬
        case 2940: return "tan"; // 埮
        case 2942: return "cai"; // 埰
        case 2944: return "tou"; // 埱
        case 2946: return "bang"; // 埲
        case 2948: return "kan"; // 埳
        case 2950: return "duo"; // 埵
        case 2952: return "zhi"; // 埶
        case 2954: return "zhi"; // 執
        case 2956: return "dui"; // 埻
        case 2958: return "qi"; // 埼
        case 2960: return "ju"; // 埾
        case 2962: return "ni"; // 埿
        case 2964: return "ke"; // 堁
        case 2966: return "kun"; // 堃
        case 2968: return "ni"; // 堄
        case 2970: return "jian"; // 堅
        case 2972: return "gang"; // 堈
        case 2974: return "yu"; // 堉
        case 2976: return "e"; // 堊
        case 2978: return "gu"; // 堌
        case 2980: return "leng"; // 堎
        case 2982: return "fang"; // 堏
        case 2984: return "ya"; // 堐
        case 2986: return "kun"; // 堒
        case 2988: return "an"; // 堓
        case 2990: return "shen"; // 堔
        case 2992: return "nao"; // 堖
        case 2994: return "tu"; // 堗
        case 2996: return "cheng"; // 堘
        case 2998: return "huan"; // 堚
        case 3000: return "bi"; // 堛
        case 3002: return "lian"; // 堜
        case 3004: return "wo"; // 堝
        case 3006: return "zhuan"; // 堟
        case 3008: return "bao"; // 堢
        case 3010: return "yu"; // 堣
        case 3012: return "mao"; // 堥
        case 3014: return "jie"; // 堦
        case 3016: return "nuo"; // 堧
        case 3018: return "ai"; // 堨
        case 3020: return "geng"; // 堩
        case 3022: return "zong"; // 堫
        case 3024: return "yu"; // 堬
        case 3026: return "huang"; // 堭
        case 3028: return "e"; // 堮
        case 3030: return "yao"; // 堯
        case 3032: return "bao"; // 報
        case 3034: return "ji"; // 堲
        case 3036: return "mei"; // 堳
        case 3038: return "chang"; // 場
        case 3040: return "tuo"; // 堶
        case 3042: return "yin"; // 堷
        case 3044: return "feng"; // 堸
        case 3046: return "zhong"; // 堹
        case 3048: return "jie"; // 堺
        case 3050: return "jin"; // 堻
        case 3052: return "heng"; // 堼
        case 3054: return "gang"; // 堽
        case 3056: return "chuan"; // 堾
        case 3058: return "jian"; // 堿
        case 3060: return "ping"; // 塀
        case 3062: return "lei"; // 塁
        case 3064: return "jiang"; // 塂
        case 3066: return "huang"; // 塃
        case 3068: return "duan"; // 塅
        case 3070: return "wan"; // 塆
        case 3072: return "xuan"; // 塇
        case 3074: return "xi"; // 塈
        case 3076: return "ji"; // 塉
        case 3078: return "kuai"; // 塊
        case 3080: return "ying"; // 塋
        case 3082: return "yong"; // 塎
        case 3084: return "kai"; // 塏
        case 3086: return "su"; // 塐
        case 3088: return "shi"; // 塒
        case 3090: return "mi"; // 塓
        case 3092: return "weng"; // 塕
        case 3094: return "cheng"; // 塖
        case 3096: return "tu"; // 塗
        case 3098: return "qiao"; // 塙
        case 3100: return "zhong"; // 塚
        case 3102: return "li"; // 塛
        case 3104: return "peng"; // 塜
        case 3106: return "bang"; // 塝
        case 3108: return "zang"; // 塟
        case 3110: return "dui"; // 塠
        case 3112: return "tian"; // 塡
        case 3114: return "wu"; // 塢
        case 3116: return "zheng"; // 塣
        case 3118: return "xun"; // 塤
        case 3120: return "zhen"; // 塦
        case 3122: return "ai"; // 塧
        case 3124: return "gong"; // 塨
        case 3126: return "yan"; // 塩
        case 3128: return "kan"; // 塪
        case 3130: return "wen"; // 塭
        case 3132: return "xie"; // 塮
        case 3134: return "liu"; // 塯
        case 3136: return "hai"; // 塰
        case 3138: return "lang"; // 塱
        case 3140: return "shang"; // 塲
        case 3142: return "peng"; // 塳
        case 3144: return "beng"; // 塴
        case 3146: return "chen"; // 塵
        case 3148: return "lu"; // 塶
        case 3150: return "lu"; // 塷
        case 3152: return "ou"; // 塸
        case 3154: return "qian"; // 塹
        case 3156: return "mei"; // 塺
        case 3158: return "mo"; // 塻
        case 3160: return "tuan"; // 塼
        case 3162: return "shuan"; // 塽
        case 3164: return "lou"; // 塿
        case 3166: return "biao"; // 墂
        case 3168: return "ce"; // 墄
        case 3170: return "di"; // 墆
        case 3172: return "zhang"; // 墇
        case 3174: return "kan"; // 墈
        case 3176: return "dian"; // 墊
        case 3178: return "chen"; // 墋
        case 3180: return "zhi"; // 墌
        case 3182: return ""; // 张
        case 3184: return "ji"; // 墍
        case 3186: return "guo"; // 墎
        case 3188: return "qiang"; // 墏
        case 3190: return "jin"; // 墐
        case 3192: return "di"; // 墑
        case 3194: return "cui"; // 墔
        case 3196: return "yan"; // 墕
        case 3198: return "ta"; // 墖
        case 3200: return "zeng"; // 増
        case 3202: return "qian"; // 墘
        case 3204: return "wei"; // 墛
        case 3206: return "zhui"; // 墜
        case 3208: return "qiao"; // 墝
        case 3210: return "chan"; // 墠
        case 3212: return "shan"; // 墡
        case 3214: return "ba"; // 墢
        case 3216: return "pu"; // 墣
        case 3218: return "tui"; // 墤
        case 3220: return "dong"; // 墥
        case 3222: return "fan"; // 墦
        case 3224: return "qiao"; // 墧
        case 3226: return "dun"; // 墪
        case 3228: return "zun"; // 墫
        case 3230: return "di"; // 墬
        case 3232: return "sheng"; // 墭
        case 3234: return "duo"; // 墮
        case 3236: return "duo"; // 墯
        case 3238: return "tan"; // 墰
        case 3240: return "deng"; // 墱
        case 3242: return "wu"; // 墲
        case 3244: return "fen"; // 墳
        case 3246: return "huang"; // 墴
        case 3248: return "tan"; // 墵
        case 3250: return "da"; // 墶
        case 3252: return "ye"; // 墷
        case 3254: return "zhu"; // 墸
        case 3256: return "jian"; // 墹
        case 3258: return "ao"; // 墺
        case 3260: return "qiang"; // 墻
        case 3262: return "qiao"; // 墽
        case 3264: return "ken"; // 墾
        case 3266: return "yi"; // 墿
        case 3268: return "pi"; // 壀
        case 3270: return "dian"; // 壂
        case 3272: return "jiang"; // 壃
        case 3274: return "ye"; // 壄
        case 3276: return "bo"; // 壆
        case 3278: return "tan"; // 壇
        case 3280: return "lan"; // 壈
        case 3282: return "ju"; // 壉
        case 3284: return "huai"; // 壊
        case 3286: return "dang"; // 壋
        case 3288: return "rang"; // 壌
        case 3290: return "qian"; // 壍
        case 3292: return "xun"; // 壎
        case 3294: return "lan"; // 壏
        case 3296: return "xi"; // 壐
        case 3298: return "ai"; // 壒
        case 3300: return "ya"; // 壓
        case 3302: return "dao"; // 壔
        case 3304: return "ruan"; // 壖
        case 3306: return "jin"; // 壗
        case 3308: return "lei"; // 壘
        case 3310: return "kuang"; // 壙
        case 3312: return "lu"; // 壚
        case 3314: return "yan"; // 壛
        case 3316: return "tan"; // 壜
        case 3318: return "wei"; // 壝
        case 3320: return "huai"; // 壞
        case 3322: return "long"; // 壟
        case 3324: return "long"; // 壠
        case 3326: return "rui"; // 壡
        case 3328: return "li"; // 壢
        case 3330: return "lin"; // 壣
        case 3332: return "chan"; // 壥
        case 3334: return "xun"; // 壦
        case 3336: return "yan"; // 壧
        case 3338: return "lei"; // 壨
        case 3340: return "ba"; // 壩
        case 3342: return "wan"; // 壪
        case 3344: return "san"; // 壭
        case 3346: return "zhuan"; // 壯
        case 3348: return "yi"; // 壱
        case 3350: return "mai"; // 売
        case 3352: return "zhu"; // 壴
        case 3354: return "zhuan"; // 壵
        case 3356: return "hu"; // 壷
        case 3358: return "kun"; // 壸
        case 3360: return "hu"; // 壺
        case 3362: return "xu"; // 壻
        case 3364: return "kun"; // 壼
        case 3366: return "shou"; // 壽
        case 3368: return "mang"; // 壾
        case 3370: return "dun"; // 壿
        case 3372: return "shou"; // 夀
        case 3374: return "yi"; // 夁
        case 3376: return "ying"; // 夃
        case 3378: return "jiang"; // 夅
        case 3380: return "pang"; // 夆
        case 3382: return "zhai"; // 夈
        case 3384: return "bian"; // 変
        case 3386: return "sui"; // 夊
        case 3388: return "qun"; // 夋
        case 3390: return "ling"; // 夌
        case 3392: return "cuo"; // 夎
        case 3394: return "xuan"; // 夐
        case 3396: return "xie"; // 夑
        case 3398: return "nao"; // 夒
        case 3400: return "jia"; // 夓
        case 3402: return "wan"; // 夗
        case 3404: return "wan"; // 夘
        case 3406: return "duo"; // 夛
        case 3408: return "qing"; // 夝
        case 3410: return "oes"; // 夞
        case 3412: return "gou"; // 夠
        case 3414: return "qi"; // 夡
        case 3416: return "meng"; // 夢
        case 3418: return "meng"; // 夣
        case 3420: return "chen"; // 夦
        case 3422: return "ze"; // 夨
        case 3424: return "guai"; // 夬
        case 3426: return "gao"; // 夰
        case 3428: return "ben"; // 夲
        case 3430: return "tai"; // 夳
        case 3432: return "yan"; // 夵
        case 3434: return "bi"; // 夶
        case 3436: return "hua"; // 夻
        case 3438: return "yun"; // 夽
        case 3440: return "ga"; // 夾
        case 3442: return "ba"; // 夿
        case 3444: return "en"; // 奀
        case 3446: return "di"; // 奃
        case 3448: return "pao"; // 奅
        case 3450: return "juan"; // 奆
        case 3452: return "lie"; // 奊
        case 3454: return "dian"; // 奌
        case 3456: return "yang"; // 奍
        case 3458: return "huan"; // 奐
        case 3460: return "kai"; // 奒
        case 3462: return "zha"; // 奓
        case 3464: return "ben"; // 奙
        case 3466: return "huang"; // 奛
        case 3468: return "fei"; // 奜
        case 3470: return "diao"; // 奝
        case 3472: return "xun"; // 奞
        case 3474: return "beng"; // 奟
        case 3476: return "ao"; // 奡
        case 3478: return "weng"; // 奣
        case 3480: return "po"; // 奤
        case 3482: return "wu"; // 奦
        case 3484: return "ao"; // 奧
        case 3486: return "jiang"; // 奨
        case 3488: return "lian"; // 奩
        case 3490: return "duo"; // 奪
        case 3492: return "yun"; // 奫
        case 3494: return "jiang"; // 奬
        case 3496: return "shi"; // 奭
        case 3498: return "fen"; // 奮
        case 3500: return "huo"; // 奯
        case 3502: return "bi"; // 奰
        case 3504: return "luan"; // 奱
        case 3506: return "duo"; // 奲
        case 3508: return "ding"; // 奵
        case 3510: return "qian"; // 奷
        case 3512: return "jiu"; // 奺
        case 3514: return "nuan"; // 奻
        case 3516: return "cha"; // 奼
        case 3518: return "xian"; // 奾
        case 3520: return "fan"; // 奿
        case 3522: return "ji"; // 妀
        case 3524: return "hong"; // 妅
        case 3526: return "dan"; // 妉
        case 3528: return "you"; // 妋
        case 3530: return "jing"; // 妌
        case 3532: return "ha"; // 妎
        case 3534: return "wen"; // 妏
        case 3536: return "zhong"; // 妐
        case 3538: return "pa"; // 妑
        case 3540: return "keng"; // 妔
        case 3542: return "zhong"; // 妕
        case 3544: return "yun"; // 妘
        case 3546: return "pei"; // 妚
        case 3548: return "chi"; // 妛
        case 3550: return "yue"; // 妜
        case 3552: return "zhuan"; // 妝
        case 3554: return "yan"; // 妟
        case 3556: return "na"; // 妠
        case 3558: return "xin"; // 妡
        case 3560: return "fen"; // 妢
        case 3562: return "feng"; // 妦
        case 3564: return ""; // 张
        case 3566: return "wan"; // 妧
        case 3568: return "du"; // 妬
        case 3570: return "ba"; // 妭
        case 3572: return "zhuo"; // 妰
        case 3574: return "zhao"; // 妱
        case 3576: return "nai"; // 妳
        case 3578: return "yuan"; // 妴
        case 3580: return "tou"; // 妵
        case 3582: return "xian"; // 妶
        case 3584: return "yi"; // 妷
        case 3586: return "e"; // 妸
        case 3588: return "mo"; // 妺
        case 3590: return "bi"; // 妼
        case 3592: return "shen"; // 妽
        case 3594: return "e"; // 妿
        case 3596: return "he"; // 姀
        case 3598: return "xu"; // 姁
        case 3600: return "fa"; // 姂
        case 3602: return "zheng"; // 姃
        case 3604: return "min"; // 姄
        case 3606: return "ban"; // 姅
        case 3608: return "fu"; // 姇
        case 3610: return "ling"; // 姈
        case 3612: return "zi"; // 姉
        case 3614: return "ran"; // 姌
        case 3616: return "shan"; // 姍
        case 3618: return "yang"; // 姎
        case 3620: return "man"; // 姏
        case 3622: return "zi"; // 姕
        case 3624: return "ju"; // 姖
        case 3626: return "ren"; // 姙
        case 3628: return "dong"; // 姛
        case 3630: return "ji"; // 姞
        case 3632: return "gai"; // 姟
        case 3634: return "xiang"; // 姠
        case 3636: return "hua"; // 姡
        case 3638: return "juan"; // 姢
        case 3640: return "gou"; // 姤
        case 3642: return "jian"; // 姦
        case 3644: return "jian"; // 姧
        case 3646: return "nian"; // 姩
        case 3648: return "zhi"; // 姪
        case 3650: return "zhen"; // 姫
        case 3652: return "xian"; // 姭
        case 3654: return "heng"; // 姮
        case 3656: return "guang"; // 姯
        case 3658: return "jun1      "; // 姰
        case 3660: return "kua"; // 姱
        case 3662: return "yan"; // 姲
        case 3664: return "ming"; // 姳
        case 3666: return "lie"; // 姴
        case 3668: return "pei"; // 姵
        case 3670: return "e"; // 姶
        case 3672: return "you"; // 姷
        case 3674: return "yan"; // 姸
        case 3676: return "xian"; // 姺
        case 3678: return "ti"; // 姼
        case 3680: return "wa"; // 姽
        case 3682: return "quan"; // 姾
        case 3684: return "song"; // 娀
        case 3686: return "hong"; // 娂
        case 3688: return "dan"; // 娊
        case 3690: return "shao"; // 娋
        case 3692: return "cheng"; // 娍
        case 3694: return "xie"; // 娎
        case 3696: return "mang"; // 娏
        case 3698: return "fu"; // 娐
        case 3700: return "wu"; // 娒
        case 3702: return "ke"; // 娔
        case 3704: return "chuo"; // 娕
        case 3706: return "chuo"; // 娖
        case 3708: return "tian"; // 娗
        case 3710: return "xing"; // 娙
        case 3712: return "nan"; // 娚
        case 3714: return "yu"; // 娛
        case 3716: return "bi"; // 娝
        case 3718: return "nei"; // 娞
        case 3720: return "zhi"; // 娡
        case 3722: return "han"; // 娢
        case 3724: return "zhuan"; // 娤
        case 3726: return "ping"; // 娦
        case 3728: return "tui"; // 娧
        case 3730: return "xian"; // 娨
        case 3732: return "wu"; // 娪
        case 3734: return "yan"; // 娫
        case 3736: return "wu"; // 娬
        case 3738: return "xi"; // 娭
        case 3740: return "yan"; // 娮
        case 3742: return "yu"; // 娯
        case 3744: return "si"; // 娰
        case 3746: return "li"; // 娳
        case 3748: return "ju"; // 娵
        case 3750: return "zhui"; // 娷
        case 3752: return "qi"; // 娸
        case 3754: return "xian"; // 娹
        case 3756: return "zhuo"; // 娺
        case 3758: return "dong"; // 娻
        case 3760: return "lu"; // 娽
        case 3762: return "ai"; // 娾
        case 3764: return "e"; // 娿
        case 3766: return "lou"; // 婁
        case 3768: return "mian"; // 婂
        case 3770: return "cong"; // 婃
        case 3772: return "pei"; // 婄
        case 3774: return "ju"; // 婅
        case 3776: return "cai"; // 婇
        case 3778: return "ling"; // 婈
        case 3780: return "xiao"; // 婋
        case 3782: return "shu"; // 婌
        case 3784: return "qi"; // 婍
        case 3786: return "hui"; // 婎
        case 3788: return "fan"; // 婏
        case 3790: return "wo"; // 婐
        case 3792: return "wo"; // 婑
        case 3794: return "tan"; // 婒
        case 3796: return "fei"; // 婓
        case 3798: return "fei"; // 婔
        case 3800: return "tian"; // 婖
        case 3802: return "ni"; // 婗
        case 3804: return "quan"; // 婘
        case 3806: return "jing"; // 婙
        case 3808: return "jing"; // 婛
        case 3810: return "jin"; // 婜
        case 3812: return "dian"; // 婝
        case 3814: return "xing"; // 婞
        case 3816: return "hu"; // 婟
        case 3818: return "wan"; // 婠
        case 3820: return "lai"; // 婡
        case 3822: return "yin"; // 婣
        case 3824: return "zhou"; // 婤
        case 3826: return "nao"; // 婥
        case 3828: return "fu"; // 婦
        case 3830: return "lun"; // 婨
        case 3832: return "an"; // 婩
        case 3834: return "kun"; // 婫
        case 3836: return "yin"; // 婬
        case 3838: return "ya"; // 婭
        case 3840: return "ju"; // 婮
        case 3842: return "li"; // 婯
        case 3844: return "dian"; // 婰
        case 3846: return "xian"; // 婱
        case 3848: return "hua"; // 婲
        case 3850: return "hua"; // 婳
        case 3852: return "yang"; // 婸
        case 3854: return "yao"; // 婹
        case 3856: return "nan"; // 婻
        case 3858: return "chuo"; // 婼
        case 3860: return "jia"; // 婽
        case 3862: return "yu"; // 婾
        case 3864: return "yu"; // 媀
        case 3866: return "wei"; // 媁
        case 3868: return "di"; // 媂
        case 3870: return "rou"; // 媃
        case 3872: return "mei"; // 媄
        case 3874: return "dan"; // 媅
        case 3876: return "nen"; // 媆
        case 3878: return "qin"; // 媇
        case 3880: return "hui"; // 媈
        case 3882: return "wo"; // 媉
        case 3884: return "qian"; // 媊
        case 3886: return "chun"; // 媋
        case 3888: return "miao"; // 媌
        case 3890: return "fu"; // 媍
        case 3892: return "jie"; // 媎
        case 3894: return "duan"; // 媏
        case 3896: return "yi"; // 媐
        case 3898: return "zhong"; // 媑
        case 3900: return "huang"; // 媓
        case 3902: return "mian"; // 媔
        case 3904: return "an"; // 媕
        case 3906: return "ying"; // 媖
        case 3908: return "xuan"; // 媗
        case 3910: return "jie"; // 媘
        case 3912: return "wei"; // 媙
        case 3914: return "zheng"; // 媜
        case 3916: return "qiu"; // 媝
        case 3918: return "ti"; // 媞
        case 3920: return "xie"; // 媟
        case 3922: return "duo"; // 媠
        case 3924: return "lian"; // 媡
        case 3926: return "mao"; // 媢
        case 3928: return "ran"; // 媣
        case 3930: return "si"; // 媤
        case 3932: return "pian"; // 媥
        case 3934: return "wei"; // 媦
        case 3936: return "wa"; // 媧
        case 3938: return "cu"; // 媨
        case 3940: return "hu"; // 媩
        case 3942: return "jie"; // 媫
        case 3944: return "bao"; // 媬
        case 3946: return ""; // 张
        case 3948: return "xu"; // 媭
        case 3950: return "yu"; // 媮
        case 3952: return "gui"; // 媯
        case 3954: return "chu"; // 媰
        case 3956: return "yao"; // 媱
        case 3958: return "yuan"; // 媴
        case 3960: return "rong"; // 媶
        case 3962: return "ru"; // 媷
        case 3964: return "liu"; // 媹
        case 3966: return "mei"; // 媺
        case 3968: return "pan"; // 媻
        case 3970: return "ao"; // 媼
        case 3972: return "ma"; // 媽
        case 3974: return "kui"; // 媿
        case 3976: return "qin"; // 嫀
        case 3978: return "zhen"; // 嫃
        case 3980: return "yuan"; // 嫄
        case 3982: return "jie"; // 嫅
        case 3984: return "rong"; // 嫆
        case 3986: return "ming"; // 嫇
        case 3988: return "ying"; // 嫈
        case 3990: return "su"; // 嫊
        case 3992: return "niao"; // 嫋
        case 3994: return "tao"; // 嫍
        case 3996: return "bang"; // 嫎
        case 3998: return "lang"; // 嫏
        case 4000: return "nao"; // 嫐
        case 4002: return "bao"; // 嫑
        case 4004: return "pi"; // 嫓
        case 4006: return "yi"; // 嫕
        case 4008: return "yu"; // 嫗
        case 4010: return "xuan"; // 嫙
        case 4012: return "yuan"; // 嫚
        case 4014: return "yi"; // 嫛
        case 4016: return "kang"; // 嫝
        case 4018: return "yong"; // 嫞
        case 4020: return "ni"; // 嫟
        case 4022: return "gui"; // 嫢
        case 4024: return "jin"; // 嫤
        case 4026: return "tuan"; // 嫥
        case 4028: return "ze"; // 嫧
        case 4030: return "nan"; // 嫨
        case 4032: return "lao"; // 嫪
        case 4034: return "zhe"; // 嫬
        case 4036: return "hu"; // 嫭
        case 4038: return "hu"; // 嫮
        case 4040: return "ao"; // 嫯
        case 4042: return "nen"; // 嫰
        case 4044: return "ma"; // 嫲
        case 4046: return "pie"; // 嫳
        case 4048: return "gu"; // 嫴
        case 4050: return "wu"; // 嫵
        case 4052: return "jiao"; // 嫶
        case 4054: return "duo"; // 嫷
        case 4056: return "zhan"; // 嫸
        case 4058: return "miao"; // 嫹
        case 4060: return "xian"; // 嫺
        case 4062: return "xian"; // 嫻
        case 4064: return "mo"; // 嫼
        case 4066: return "liao"; // 嫽
        case 4068: return "lian"; // 嫾
        case 4070: return "hua"; // 嫿
        case 4072: return "gui"; // 嬀
        case 4074: return "deng"; // 嬁
        case 4076: return "zhi"; // 嬂
        case 4078: return "xu"; // 嬃
        case 4080: return "yi"; // 嬄
        case 4082: return "hua"; // 嬅
        case 4084: return "xi"; // 嬆
        case 4086: return "kui"; // 嬇
        case 4088: return "rao"; // 嬈
        case 4090: return "yan"; // 嬊
        case 4092: return "chan"; // 嬋
        case 4094: return "jiao"; // 嬌
        case 4096: return "mei"; // 嬍
        case 4098: return "fan"; // 嬎
        case 4100: return "fan"; // 嬏
        case 4102: return "yan"; // 嬐
        case 4104: return "yi"; // 嬑
        case 4106: return "hei"; // 嬒
        case 4108: return "jiao"; // 嬓
        case 4110: return "fan"; // 嬔
        case 4112: return "shi"; // 嬕
        case 4114: return "sui"; // 嬘
        case 4116: return "qiang"; // 嬙
        case 4118: return "lian"; // 嬚
        case 4120: return "qiong"; // 嬛
        case 4122: return "xin"; // 嬜
        case 4124: return "niao"; // 嬝
        case 4126: return "dong"; // 嬞
        case 4128: return "yi"; // 嬟
        case 4130: return "can"; // 嬠
        case 4132: return "ai"; // 嬡
        case 4134: return "niang"; // 嬢
        case 4136: return "ning"; // 嬣
        case 4138: return "mo"; // 嬤
        case 4140: return "diao"; // 嬥
        case 4142: return "chou"; // 嬦
        case 4144: return "jin"; // 嬧
        case 4146: return "ci"; // 嬨
        case 4148: return "yu"; // 嬩
        case 4150: return "pin"; // 嬪
        case 4152: return "rong"; // 嬫
        case 4154: return "nou"; // 嬬
        case 4156: return "er"; // 嬭
        case 4158: return "yan"; // 嬮
        case 4160: return "tai"; // 嬯
        case 4162: return "ying"; // 嬰
        case 4164: return "qian"; // 嬱
        case 4166: return "yue"; // 嬳
        case 4168: return "mian"; // 嬵
        case 4170: return "bi"; // 嬶
        case 4172: return "shen"; // 嬸
        case 4174: return "xing"; // 嬹
        case 4176: return "ni"; // 嬺
        case 4178: return "du"; // 嬻
        case 4180: return "liu"; // 嬼
        case 4182: return "yuan"; // 嬽
        case 4184: return "lan"; // 嬾
        case 4186: return "yan"; // 嬿
        case 4188: return "ling"; // 孁
        case 4190: return "jiao"; // 孂
        case 4192: return "rang"; // 孃
        case 4194: return "lan"; // 孄
        case 4196: return "qian"; // 孅
        case 4198: return "ying"; // 孆
        case 4200: return "shuan"; // 孇
        case 4202: return "hui"; // 孈
        case 4204: return "quan"; // 孉
        case 4206: return "mi"; // 孊
        case 4208: return "li"; // 孋
        case 4210: return "lian"; // 孌
        case 4212: return "yan"; // 孍
        case 4214: return "zhu"; // 孎
        case 4216: return "lan"; // 孏
        case 4218: return "jue"; // 孒
        case 4220: return "ma"; // 孖
        case 4222: return "xin"; // 孞
        case 4224: return "si"; // 孠
        case 4226: return "tai"; // 孡
        case 4228: return "you"; // 孧
        case 4230: return "ni"; // 孨
        case 4232: return "sun"; // 孫
        case 4234: return "me"; // 孭
        case 4236: return "cong"; // 孮
        case 4238: return "wan"; // 孯
        case 4240: return "ya"; // 孲
        case 4242: return "ni"; // 孴
        case 4244: return "zi"; // 孶
        case 4246: return "li"; // 孷
        case 4248: return "xue"; // 學
        case 4250: return "bo"; // 孹
        case 4252: return "nai"; // 孻
        case 4254: return "nie"; // 孼
        case 4256: return "ying"; // 孾
        case 4258: return "luan"; // 孿
        case 4260: return "rong"; // 宂
        case 4262: return "kong"; // 宆
        case 4264: return "tu"; // 宊
        case 4266: return "rou"; // 宍
        case 4268: return "yao"; // 宎
        case 4270: return "yi"; // 宐
        case 4272: return "jing"; // 宑
        case 4274: return "zhun"; // 宒
        case 4276: return "zhu"; // 宔
        case 4278: return "hong"; // 宖
        case 4280: return "shi"; // 実
        case 4282: return "yi"; // 宧
        case 4284: return "tiao"; // 宨
        case 4286: return "xi"; // 宩
        case 4288: return "cheng"; // 宬
        case 4290: return "jiong"; // 宭
        case 4292: return "gong"; // 宮
        case 4294: return "xiao"; // 宯
        case 4296: return "zha"; // 宱
        case 4298: return "dao"; // 宲
        case 4300: return "pan"; // 宷
        case 4302: return "huang"; // 宺
        case 4304: return "mi"; // 宻
        case 4306: return "kou"; // 宼
        case 4308: return "cai"; // 寀
        case 4310: return "zan"; // 寁
        case 4312: return "yuan"; // 寃
        case 4314: return "qiu"; // 寈
        case 4316: return "he"; // 寉
        case 4318: return "zhen"; // 寊
        case 4320: return "jian"; // 寋
        case 4322: return "ning"; // 寍
        case 4324: return "bing"; // 寎
        case 4326: return "huan"; // 寏
        case 4328: return ""; // 张
        case 4330: return "qin"; // 寑
        case 4332: return "shi"; // 寔
        case 4334: return "ning"; // 寕
        case 4336: return "jin"; // 寖
        case 4338: return "ning"; // 寗
        case 4340: return "tian"; // 寘
        case 4342: return "yu"; // 寙
        case 4344: return "bao"; // 寚
        case 4346: return "kuan"; // 寛
        case 4348: return "ning"; // 寜
        case 4350: return "lu"; // 寠
        case 4352: return "qin"; // 寢
        case 4354: return "hu"; // 寣
        case 4356: return "shi"; // 實
        case 4358: return "ning"; // 寧
        case 4360: return "shen"; // 審
        case 4362: return "wei"; // 寪
        case 4364: return "xie"; // 寫
        case 4366: return "kuan"; // 寬
        case 4368: return "hui"; // 寭
        case 4370: return "jun4      "; // 寯
        case 4372: return "yi"; // 寱
        case 4374: return "yi"; // 寲
        case 4376: return "bao"; // 寳
        case 4378: return "qin"; // 寴
        case 4380: return "chong"; // 寵
        case 4382: return "bao"; // 寶
        case 4384: return "feng"; // 寷
        case 4386: return "lu"; // 寽
        case 4388: return "dui"; // 対
        case 4390: return "po"; // 尀
        case 4392: return "zhuan"; // 専
        case 4394: return "bu"; // 尃
        case 4396: return "ke"; // 尅
        case 4398: return "jiang"; // 將
        case 4400: return "zhuan"; // 專
        case 4402: return "xun"; // 尋
        case 4404: return "zhu"; // 尌
        case 4406: return "dui"; // 對
        case 4408: return "dao"; // 導
        case 4410: return "ji"; // 尐
        case 4412: return "er"; // 尒
        case 4414: return "er"; // 尓
        case 4416: return "shu"; // 尗
        case 4418: return "chang"; // 尙
        case 4420: return "ma"; // 尛
        case 4422: return "liao"; // 尞
        case 4424: return "xian"; // 尟
        case 4426: return "xian"; // 尠
        case 4428: return "kun"; // 尡
        case 4430: return "you"; // 尣
        case 4432: return "niao"; // 尦
        case 4434: return "mang"; // 尨
        case 4436: return "wang"; // 尩
        case 4438: return "wang"; // 尪
        case 4440: return "wang"; // 尫
        case 4442: return "yao"; // 尭
        case 4444: return "duo"; // 尮
        case 4446: return "kui"; // 尯
        case 4448: return "zhong"; // 尰
        case 4450: return "gan"; // 尲
        case 4452: return "gu"; // 尳
        case 4454: return "tui"; // 尵
        case 4456: return "gan"; // 尶
        case 4458: return "gan"; // 尷
        case 4460: return "xi"; // 屃
        case 4462: return "bi"; // 屄
        case 4464: return "jie"; // 屆
        case 4466: return "tian"; // 屇
        case 4468: return "diao"; // 屌
        case 4470: return "shi"; // 屍
        case 4472: return "zhen"; // 屒
        case 4474: return "xie"; // 屓
        case 4476: return "ni"; // 屔
        case 4478: return "xi"; // 屖
        case 4480: return "wei"; // 屗
        case 4482: return "man"; // 屘
        case 4484: return "lou"; // 屚
        case 4486: return "ping"; // 屛
        case 4488: return "ti"; // 屜
        case 4490: return "fei"; // 屝
        case 4492: return "xie"; // 屟
        case 4494: return "lu"; // 屢
        case 4496: return "ceng"; // 層
        case 4498: return "xie"; // 屧
        case 4500: return "ju"; // 屨
        case 4502: return "jue"; // 屩
        case 4504: return "liao"; // 屪
        case 4506: return "jue"; // 屫
        case 4508: return "shu"; // 屬
        case 4510: return "xie"; // 屭
        case 4512: return "po"; // 屰
        case 4514: return "wa"; // 屲
        case 4516: return "xian"; // 屳
        case 4518: return "li"; // 屴
        case 4520: return "e"; // 屵
        case 4522: return "dao"; // 屶
        case 4524: return "hui"; // 屷
        case 4526: return "long"; // 屸
        case 4528: return "ren"; // 屻
        case 4530: return "wu"; // 屼
        case 4532: return "an"; // 屽
        case 4534: return "shen"; // 屾
        case 4536: return "chu"; // 岀
        case 4538: return "yen"; // 岃
        case 4540: return "yue"; // 岄
        case 4542: return "ban"; // 岅
        case 4544: return "yao"; // 岆
        case 4546: return "ang"; // 岇
        case 4548: return "wu"; // 岉
        case 4550: return "jie"; // 岊
        case 4552: return "e"; // 岋
        case 4554: return "fen"; // 岎
        case 4556: return "wan"; // 岏
        case 4558: return "qian"; // 岒
        case 4560: return "qi"; // 岓
        case 4562: return "jie"; // 岕
        case 4564: return "zuo"; // 岝
        case 4566: return "zuo"; // 岞
        case 4568: return "yang"; // 岟
        case 4570: return "ju"; // 岠
        case 4572: return "gang"; // 岡
        case 4574: return "xue"; // 岤
        case 4576: return "po"; // 岥
        case 4578: return "li"; // 岦
        case 4580: return "tiao"; // 岧
        case 4582: return "qu"; // 岨
        case 4584: return "fu"; // 岪
        case 4586: return "tuo"; // 岮
        case 4588: return "pi"; // 岯
        case 4590: return "ao"; // 岰
        case 4592: return "kuang"; // 岲
        case 4594: return "qu"; // 岴
        case 4596: return "po"; // 岶
        case 4598: return "tiao"; // 岹
        case 4600: return "ling"; // 岺
        case 4602: return "chi"; // 岻
        case 4604: return "ping"; // 岼
        case 4606: return "ceom"; // 岾
        case 4608: return "bang"; // 峀
        case 4610: return "tong"; // 峂
        case 4612: return "xue"; // 峃
        case 4614: return "bian"; // 峅
        case 4616: return "he"; // 峆
        case 4618: return "ba"; // 峇
        case 4620: return "luo"; // 峈
        case 4622: return "e"; // 峉
        case 4624: return "fu"; // 峊
        case 4626: return "die"; // 峌
        case 4628: return "lu"; // 峍
        case 4630: return "en"; // 峎
        case 4632: return "er"; // 峏
        case 4634: return "gai"; // 峐
        case 4636: return "quan"; // 峑
        case 4638: return "yi"; // 峓
        case 4640: return "mu"; // 峔
        case 4642: return "shi"; // 峕
        case 4644: return "an"; // 峖
        case 4646: return "wei"; // 峗
        case 4648: return "huan"; // 峘
        case 4650: return "mi"; // 峚
        case 4652: return "li"; // 峛
        case 4654: return "ji"; // 峜
        case 4656: return "dong"; // 峝
        case 4658: return "wei"; // 峞
        case 4660: return "you"; // 峟
        case 4662: return "gu"; // 峠
        case 4664: return "lie"; // 峢
        case 4666: return "yao"; // 峣
        case 4668: return "jiao"; // 峧
        case 4670: return "e"; // 峩
        case 4672: return "ye"; // 峫
        case 4674: return "bu"; // 峬
        case 4676: return "qun"; // 峮
        case 4678: return "feng"; // 峯
        case 4680: return "nao"; // 峱
        case 4682: return "li"; // 峲
        case 4684: return "you"; // 峳
        case 4686: return "xian"; // 峴
        case 4688: return "rong"; // 峵
        case 4690: return "dao"; // 島
        case 4692: return "shen"; // 峷
        case 4694: return "cheng"; // 峸
        case 4696: return "tu"; // 峹
        case 4698: return "geng"; // 峺
        case 4700: return "gao"; // 峼
        case 4702: return "xia"; // 峽
        case 4704: return "yin"; // 峾
        case 4706: return "yu"; // 峿
        case 4708: return "nang"; // 崀
        case 4710: return ""; // 张
        case 4712: return "kan"; // 崁
        case 4714: return "yan"; // 崄
        case 4716: return "que"; // 崅
        case 4718: return "chong"; // 崈
        case 4720: return "ta"; // 崉
        case 4722: return "lin"; // 崊
        case 4724: return "hua"; // 崋
        case 4726: return "ju"; // 崌
        case 4728: return "lai"; // 崍
        case 4730: return "min"; // 崏
        case 4732: return "kun"; // 崐
        case 4734: return "kun"; // 崑
        case 4736: return "zu"; // 崒
        case 4738: return "gu"; // 崓
        case 4740: return "ya"; // 崕
        case 4742: return "gang"; // 崗
        case 4744: return "lun"; // 崘
        case 4746: return "lun"; // 崙
        case 4748: return "ling"; // 崚
        case 4750: return "duo"; // 崜
        case 4752: return "zheng"; // 崝
        case 4754: return "yin"; // 崟
        case 4756: return "dong"; // 崠
        case 4758: return "han"; // 崡
        case 4760: return "zheng"; // 崢
        case 4762: return "wei"; // 崣
        case 4764: return "bi"; // 崥
        case 4766: return "jie"; // 崨
        case 4768: return "zu"; // 崪
        case 4770: return "ku"; // 崫
        case 4772: return "dong"; // 崬
        case 4774: return "yin"; // 崯
        case 4776: return "zi"; // 崰
        case 4778: return "ze"; // 崱
        case 4780: return "huang"; // 崲
        case 4782: return "yu"; // 崳
        case 4784: return "yang"; // 崵
        case 4786: return "feng"; // 崶
        case 4788: return "qiu"; // 崷
        case 4790: return "yang"; // 崸
        case 4792: return "ti"; // 崹
        case 4794: return "yi"; // 崺
        case 4796: return "zhi"; // 崻
        case 4798: return "die"; // 崼
        case 4800: return "e"; // 崿
        case 4802: return "zhu"; // 嵀
        case 4804: return "kan"; // 嵁
        case 4806: return "lu"; // 嵂
        case 4808: return "yan"; // 嵃
        case 4810: return "mei"; // 嵄
        case 4812: return "han"; // 嵅
        case 4814: return "ji"; // 嵆
        case 4816: return "huan"; // 嵈
        case 4818: return "ting"; // 嵉
        case 4820: return "wu"; // 嵍
        case 4822: return "yu"; // 嵎
        case 4824: return "zong"; // 嵏
        case 4826: return "lan"; // 嵐
        case 4828: return "ke"; // 嵑
        case 4830: return "yan"; // 嵒
        case 4832: return "yan"; // 嵓
        case 4834: return "wei"; // 嵔
        case 4836: return "zong"; // 嵕
        case 4838: return "cha"; // 嵖
        case 4840: return "suo"; // 嵗
        case 4842: return "ke"; // 嵙
        case 4844: return "qin"; // 嵚
        case 4846: return "qi"; // 嵜
        case 4848: return "tu"; // 嵞
        case 4850: return "dui"; // 嵟
        case 4852: return "xi"; // 嵠
        case 4854: return "weng"; // 嵡
        case 4856: return "cang"; // 嵢
        case 4858: return "dang"; // 嵣
        case 4860: return "ying"; // 嵤
        case 4862: return "jie"; // 嵥
        case 4864: return "ai"; // 嵦
        case 4866: return "liu"; // 嵧
        case 4868: return "wu"; // 嵨
        case 4870: return "kao"; // 嵪
        case 4872: return "beng"; // 嵭
        case 4874: return "dian"; // 嵮
        case 4876: return "qian"; // 嵰
        case 4878: return "yong"; // 嵱
        case 4880: return "nie"; // 嵲
        case 4882: return "cuo"; // 嵳
        case 4884: return "shi"; // 嵵
        case 4886: return "ruo"; // 嵶
        case 4888: return "song"; // 嵷
        case 4890: return "zong"; // 嵸
        case 4892: return "jiang"; // 嵹
        case 4894: return "liao"; // 嵺
        case 4896: return "kang"; // 嵻
        case 4898: return "chan"; // 嵼
        case 4900: return "di"; // 嵽
        case 4902: return "can"; // 嵾
        case 4904: return "ding"; // 嵿
        case 4906: return "tu"; // 嶀
        case 4908: return "lou"; // 嶁
        case 4910: return "zhan"; // 嶃
        case 4912: return "zhan"; // 嶄
        case 4914: return "ao"; // 嶅
        case 4916: return "cao"; // 嶆
        case 4918: return "qu"; // 嶇
        case 4920: return "qiang"; // 嶈
        case 4922: return "zui"; // 嶉
        case 4924: return "zui"; // 嶊
        case 4926: return "dao"; // 嶋
        case 4928: return "dao"; // 嶌
        case 4930: return "xi"; // 嶍
        case 4932: return "yu"; // 嶎
        case 4934: return "pei"; // 嶏
        case 4936: return "long"; // 嶐
        case 4938: return "xiang"; // 嶑
        case 4940: return "zheng"; // 嶒
        case 4942: return "bo"; // 嶓
        case 4944: return "qin"; // 嶔
        case 4946: return "jiao"; // 嶕
        case 4948: return "yan"; // 嶖
        case 4950: return "lao"; // 嶗
        case 4952: return "zhan"; // 嶘
        case 4954: return "liao"; // 嶚
        case 4956: return "liao"; // 嶛
        case 4958: return "jin"; // 嶜
        case 4960: return "duo"; // 嶞
        case 4962: return "zun"; // 嶟
        case 4964: return "qiao"; // 嶠
        case 4966: return "gui"; // 嶡
        case 4968: return "yao"; // 嶢
        case 4970: return "jiao"; // 嶣
        case 4972: return "yao"; // 嶤
        case 4974: return "jue"; // 嶥
        case 4976: return "zhan"; // 嶦
        case 4978: return "yi"; // 嶧
        case 4980: return "xue"; // 嶨
        case 4982: return "nao"; // 嶩
        case 4984: return "ye"; // 嶪
        case 4986: return "ye"; // 嶫
        case 4988: return "yi"; // 嶬
        case 4990: return "nie"; // 嶭
        case 4992: return "yan"; // 嶮
        case 4994: return "ji"; // 嶯
        case 4996: return "jie"; // 嶰
        case 4998: return "ke"; // 嶱
        case 5000: return "gui"; // 嶲
        case 5002: return "di"; // 嶳
        case 5004: return "ao"; // 嶴
        case 5006: return "zui"; // 嶵
        case 5008: return "wei"; // 嶶
        case 5010: return "rong"; // 嶸
        case 5012: return "dao"; // 嶹
        case 5014: return "ling"; // 嶺
        case 5016: return "jie"; // 嶻
        case 5018: return "yu"; // 嶼
        case 5020: return "yue"; // 嶽
        case 5022: return "yin"; // 嶾
        case 5024: return "ru"; // 嶿
        case 5026: return "jie"; // 巀
        case 5028: return "li"; // 巁
        case 5030: return "gui"; // 巂
        case 5032: return "long"; // 巃
        case 5034: return "long"; // 巄
        case 5036: return "ying"; // 巆
        case 5038: return "xi"; // 巇
        case 5040: return "ju"; // 巈
        case 5042: return "chan"; // 巉
        case 5044: return "ying"; // 巊
        case 5046: return "kui"; // 巋
        case 5048: return "yan"; // 巌
        case 5050: return "nao"; // 巎
        case 5052: return "quan"; // 巏
        case 5054: return "chao"; // 巐
        case 5056: return "cuan"; // 巑
        case 5058: return "luan"; // 巒
        case 5060: return "dian"; // 巓
        case 5062: return "dian"; // 巔
        case 5064: return "nie"; // 巕
        case 5066: return "yan"; // 巖
        case 5068: return "yan"; // 巗
        case 5070: return "yan"; // 巘
        case 5072: return "nao"; // 巙
        case 5074: return "yan"; // 巚
        case 5076: return "kuai"; // 巜
        case 5078: return "huang"; // 巟
        case 5080: return "jing"; // 巠
        case 5082: return "chao"; // 巣
        case 5084: return "lie"; // 巤
        case 5086: return "keo"; // 巪
        case 5088: return "pu"; // 巬
        case 5090: return "pu"; // 巭
        case 5092: return ""; // 张
        case 5094: return "qiu"; // 巰
        case 5096: return "zhi"; // 巵
        case 5098: return "zhao"; // 巶
        case 5100: return "yi"; // 巸
        case 5102: return "jin"; // 巹
        case 5104: return "sun"; // 巺
        case 5106: return "quan"; // 巻
        case 5108: return "pa"; // 巼
        case 5110: return "po"; // 巿
        case 5112: return "za"; // 帀
        case 5114: return "ding"; // 帄
        case 5116: return "nie"; // 帇
        case 5118: return "fen"; // 帉
        case 5120: return "pa"; // 帊
        case 5122: return "zhi"; // 帋
        case 5124: return "hu"; // 帍
        case 5126: return "dan"; // 帎
        case 5128: return "dai"; // 帒
        case 5130: return "wa"; // 帓
        case 5132: return "bo"; // 帗
        case 5134: return "mo"; // 帞
        case 5136: return "yi"; // 帟
        case 5138: return "yi"; // 帠
        case 5140: return "ping"; // 帡
        case 5142: return "qia"; // 帢
        case 5144: return "juan"; // 帣
        case 5146: return "ru"; // 帤
        case 5148: return "shuai"; // 帥
        case 5150: return "shui"; // 帨
        case 5152: return "qiao"; // 帩
        case 5154: return "zhen"; // 帪
        case 5156: return "shi"; // 師
        case 5158: return "qun"; // 帬
        case 5160: return "dai"; // 帯
        case 5162: return "gui"; // 帰
        case 5164: return "ping"; // 帲
        case 5166: return "zhang"; // 帳
        case 5168: return "jian"; // 帴
        case 5170: return "wan"; // 帵
        case 5172: return "dai"; // 帶
        case 5174: return "qie"; // 帹
        case 5176: return "ji"; // 帺
        case 5178: return "du"; // 帾
        case 5180: return "hou"; // 帿
        case 5182: return "zhen"; // 幀
        case 5184: return "xu"; // 幁
        case 5186: return "wei"; // 幃
        case 5188: return "yi"; // 幆
        case 5190: return "bang"; // 幇
        case 5192: return "ping"; // 幈
        case 5194: return "die"; // 幉
        case 5196: return "gong"; // 幊
        case 5198: return "pan"; // 幋
        case 5200: return "tao"; // 幍
        case 5202: return "mi"; // 幎
        case 5204: return "jia"; // 幏
        case 5206: return "teng"; // 幐
        case 5208: return "hui"; // 幑
        case 5210: return "zhong"; // 幒
        case 5212: return "shan"; // 幓
        case 5214: return "biao"; // 幖
        case 5216: return "guo"; // 幗
        case 5218: return "ze"; // 幘
        case 5220: return "mu"; // 幙
        case 5222: return "bang"; // 幚
        case 5224: return "jing"; // 幜
        case 5226: return "chan"; // 幝
        case 5228: return "zhi"; // 幟
        case 5230: return "wu"; // 幠
        case 5232: return "bi"; // 幣
        case 5234: return "bi"; // 幤
        case 5236: return "zhang"; // 幥
        case 5238: return "mi"; // 幦
        case 5240: return "qiao"; // 幧
        case 5242: return "chan"; // 幨
        case 5244: return "fen"; // 幩
        case 5246: return "meng"; // 幪
        case 5248: return "bang"; // 幫
        case 5250: return "dao"; // 幬
        case 5252: return "mie"; // 幭
        case 5254: return "chu"; // 幮
        case 5256: return "jie"; // 幯
        case 5258: return "xian"; // 幰
        case 5260: return "lan"; // 幱
        case 5262: return "jian"; // 幵
        case 5264: return "bing"; // 幷
        case 5266: return "gan"; // 幹
        case 5268: return "ji"; // 幾
        case 5270: return "ting"; // 庁
        case 5272: return "ze"; // 庂
        case 5274: return "guang"; // 広
        case 5276: return "me"; // 庅
        case 5278: return "qin"; // 庈
        case 5280: return "dun"; // 庉
        case 5282: return "ya"; // 庌
        case 5284: return "bai"; // 庍
        case 5286: return "jie"; // 庎
        case 5288: return "zhuan"; // 庒
        case 5290: return "ya"; // 庘
        case 5292: return "ci"; // 庛
        case 5294: return "tong"; // 庝
        case 5296: return "yi"; // 庡
        case 5298: return "zhi"; // 庢
        case 5300: return "tiao"; // 庣
        case 5302: return "zhi"; // 庤
        case 5304: return "xiao"; // 庨
        case 5306: return "tu"; // 庩
        case 5308: return "gui"; // 庪
        case 5310: return "ku"; // 庫
        case 5312: return "mang"; // 庬
        case 5314: return "you"; // 庮
        case 5316: return "bu"; // 庯
        case 5318: return "bing"; // 庰
        case 5320: return "cheng"; // 庱
        case 5322: return "lai"; // 庲
        case 5324: return "ji"; // 庴
        case 5326: return "song"; // 庺
        case 5328: return "shu"; // 庻
        case 5330: return "qing"; // 庼
        case 5332: return "yu"; // 庽
        case 5334: return "miao"; // 庿
        case 5336: return "sou"; // 廀
        case 5338: return "ce"; // 廁
        case 5340: return "xiang"; // 廂
        case 5342: return "fei"; // 廃
        case 5344: return "jiu"; // 廄
        case 5346: return "e"; // 廅
        case 5348: return "wei"; // 廆
        case 5350: return "liu"; // 廇
        case 5352: return "sha"; // 廈
        case 5354: return "sou"; // 廋
        case 5356: return "zhi"; // 廌
        case 5358: return "bu"; // 廍
        case 5360: return "qing"; // 廎
        case 5362: return "jiu"; // 廏
        case 5364: return "jiu"; // 廐
        case 5366: return "lou"; // 廔
        case 5368: return "yin"; // 廕
        case 5370: return "dai"; // 廗
        case 5372: return "lu"; // 廘
        case 5374: return "yi"; // 廙
        case 5376: return "chu"; // 廚
        case 5378: return "tu"; // 廜
        case 5380: return "si"; // 廝
        case 5382: return "qian"; // 廞
        case 5384: return "miao"; // 廟
        case 5386: return "chang"; // 廠
        case 5388: return "wu"; // 廡
        case 5390: return "fei"; // 廢
        case 5392: return "guang"; // 廣
        case 5394: return "kos"; // 廤
        case 5396: return "kuai"; // 廥
        case 5398: return "bi"; // 廦
        case 5400: return "qiang"; // 廧
        case 5402: return "lin"; // 廩
        case 5404: return "liao"; // 廫
        case 5406: return "lu"; // 廬
        case 5408: return "ji"; // 廭
        case 5410: return "ying"; // 廮
        case 5412: return "xian"; // 廯
        case 5414: return "ting"; // 廰
        case 5416: return "yong"; // 廱
        case 5418: return "li"; // 廲
        case 5420: return "ting"; // 廳
        case 5422: return "yan"; // 廵
        case 5424: return "di"; // 廸
        case 5426: return "po"; // 廹
        case 5428: return "hui"; // 廻
        case 5430: return "nai"; // 廼
        case 5432: return "hui"; // 廽
        case 5434: return "fen"; // 弅
        case 5436: return "ju"; // 弆
        case 5438: return "yan"; // 弇
        case 5440: return "zang"; // 弉
        case 5442: return "yi"; // 弌
        case 5444: return "er"; // 弍
        case 5446: return "san"; // 弎
        case 5448: return "er"; // 弐
        case 5450: return "shi"; // 弒
        case 5452: return "di"; // 弔
        case 5454: return "hu"; // 弖
        case 5456: return "wu"; // 弙
        case 5458: return "di"; // 弚
        case 5460: return "jiang"; // 弜
        case 5462: return "ba"; // 弝
        case 5464: return "shen"; // 弞
        case 5466: return "jue"; // 弡
        case 5468: return "tao"; // 弢
        case 5470: return "fu"; // 弣
        case 5472: return "di"; // 弤
        case 5474: return ""; // 张
        case 5476: return "chao"; // 弨
        case 5478: return "zhen"; // 弫
        case 5480: return "yi"; // 弬
        case 5482: return "juan"; // 弮
        case 5484: return "shao"; // 弰
        case 5486: return "yuan"; // 弲
        case 5488: return "jing"; // 弳
        case 5490: return "diao"; // 弴
        case 5492: return "zhang"; // 張
        case 5494: return "jiang"; // 弶
        case 5496: return "qiang"; // 強
        case 5498: return "peng"; // 弸
        case 5500: return "bi"; // 弻
        case 5502: return "she"; // 弽
        case 5504: return "dan"; // 弾
        case 5506: return "jian"; // 弿
        case 5508: return "ge"; // 彁
        case 5510: return "fa"; // 彂
        case 5512: return "bi"; // 彃
        case 5514: return "kou"; // 彄
        case 5516: return "jian"; // 彅
        case 5518: return "bie"; // 彆
        case 5520: return "xiao"; // 彇
        case 5522: return "dan"; // 彈
        case 5524: return "guo"; // 彉
        case 5526: return "jiang"; // 彊
        case 5528: return "hong"; // 彋
        case 5530: return "mi"; // 彌
        case 5532: return "guo"; // 彍
        case 5534: return "wan"; // 彎
        case 5536: return "jue"; // 彏
        case 5538: return "ji"; // 彑
        case 5540: return "lu"; // 彔
        case 5542: return "hui"; // 彙
        case 5544: return "hui"; // 彚
        case 5546: return "yi"; // 彛
        case 5548: return "yi"; // 彜
        case 5550: return "yi"; // 彞
        case 5552: return "yue"; // 彟
        case 5554: return "yue"; // 彠
        case 5556: return "wen"; // 彣
        case 5558: return "yan"; // 彥
        case 5560: return "yu"; // 彧
        case 5562: return "chi"; // 彨
        case 5564: return "diao"; // 彫
        case 5566: return "yong"; // 彮
        case 5568: return "piao"; // 彯
        case 5570: return "chi"; // 彲
        case 5572: return "bo"; // 彴
        case 5574: return "yi"; // 彵
        case 5576: return "ji"; // 彶
        case 5578: return "zhong"; // 彸
        case 5580: return "wang"; // 彺
        case 5582: return "di"; // 彽
        case 5584: return "ling"; // 彾
        case 5586: return "fu"; // 彿
        case 5588: return "wang"; // 徃
        case 5590: return "xi"; // 徆
        case 5592: return "wa"; // 徍
        case 5594: return "zheng"; // 徎
        case 5596: return "zhi"; // 徏
        case 5598: return "jing"; // 徑
        case 5600: return "cong"; // 従
        case 5602: return "zhi"; // 徔
        case 5604: return "cong"; // 徖
        case 5606: return "dong"; // 徚
        case 5608: return "ji"; // 徛
        case 5610: return "zhi"; // 徝
        case 5612: return "cong"; // 從
        case 5614: return "zhou"; // 徟
        case 5616: return "lai"; // 徠
        case 5618: return "xie"; // 徢
        case 5620: return "jie"; // 徣
        case 5622: return "jian"; // 徤
        case 5624: return "ti"; // 徥
        case 5626: return "jia"; // 徦
        case 5628: return "pian"; // 徧
        case 5630: return "fu"; // 復
        case 5632: return "wei"; // 徫
        case 5634: return "bang"; // 徬
        case 5636: return "xi"; // 徯
        case 5638: return "zheng"; // 徰
        case 5640: return "biao"; // 徱
        case 5642: return "ti"; // 徲
        case 5644: return "de"; // 徳
        case 5646: return "zhi"; // 徴
        case 5648: return "bie"; // 徶
        case 5650: return "zhong"; // 徸
        case 5652: return "che"; // 徹
        case 5654: return "yao"; // 徺
        case 5656: return "hui"; // 徻
        case 5658: return "mei"; // 徾
        case 5660: return "long"; // 徿
        case 5662: return "xiang"; // 忀
        case 5664: return "bao"; // 忁
        case 5666: return "ju"; // 忂
        case 5668: return "le"; // 忇
        case 5670: return "ren"; // 忈
        case 5672: return "ding"; // 忊
        case 5674: return "gai"; // 忋
        case 5676: return "ren"; // 忎
        case 5678: return "gan"; // 忓
        case 5680: return "yi"; // 忔
        case 5682: return "tai"; // 忕
        case 5684: return "lie"; // 忚
        case 5686: return "fan"; // 忛
        case 5688: return "ying"; // 応
        case 5690: return "wen"; // 忞
        case 5692: return "wen"; // 忟
        case 5694: return "wu"; // 忢
        case 5696: return "ji"; // 忣
        case 5698: return "xi"; // 忥
        case 5700: return "jia"; // 忦
        case 5702: return "wan"; // 忨
        case 5704: return "cong"; // 忩
        case 5706: return "yu"; // 忬
        case 5708: return "qi"; // 忯
        case 5710: return "cui"; // 忰
        case 5712: return "tai"; // 忲
        case 5714: return "tun"; // 忳
        case 5716: return "qian"; // 忴
        case 5718: return "hun"; // 忶
        case 5720: return "xiong"; // 忷
        case 5722: return "wang"; // 忹
        case 5724: return "xian"; // 忺
        case 5726: return "kang"; // 忼
        case 5728: return "ju"; // 怇
        case 5730: return "yi"; // 怈
        case 5732: return "bao"; // 怉
        case 5734: return "men"; // 怋
        case 5736: return "pei"; // 怌
        case 5738: return "kou"; // 怐
        case 5740: return "ban"; // 怑
        case 5742: return "nao"; // 怓
        case 5744: return "tie"; // 怗
        case 5746: return "gu"; // 怘
        case 5748: return "ju"; // 怚
        case 5750: return "you"; // 怞
        case 5752: return "di"; // 怟
        case 5754: return "die"; // 怢
        case 5756: return "you"; // 怣
        case 5758: return "fu"; // 怤
        case 5760: return "xi"; // 怬
        case 5762: return "bi"; // 怭
        case 5764: return "yao"; // 怮
        case 5766: return "xuan"; // 怰
        case 5768: return "cong"; // 怱
        case 5770: return "bing"; // 怲
        case 5772: return "huang"; // 怳
        case 5774: return "xu"; // 怴
        case 5776: return "bi"; // 怶
        case 5778: return "shu"; // 怷
        case 5780: return "xi"; // 怸
        case 5782: return "tan"; // 怹
        case 5784: return "yong"; // 怺
        case 5786: return "mo"; // 怽
        case 5788: return "ki"; // 怾
        case 5790: return "shi"; // 恀
        case 5792: return "xi"; // 恄
        case 5794: return "lao"; // 恅
        case 5796: return "heng"; // 恆
        case 5798: return "kuang"; // 恇
        case 5800: return "mou"; // 恈
        case 5802: return "zhi"; // 恉
        case 5804: return "xie"; // 恊
        case 5806: return "yao"; // 恌
        case 5808: return "die"; // 恎
        case 5810: return "hao"; // 恏
        case 5812: return "wei"; // 恑
        case 5814: return "qi"; // 恓
        case 5816: return "jiao"; // 恔
        case 5818: return "si"; // 恖
        case 5820: return "kua"; // 恗
        case 5822: return "qiu"; // 恘
        case 5824: return "hui"; // 恛
        case 5826: return "chi"; // 恜
        case 5828: return "yi"; // 恞
        case 5830: return "xiong"; // 恟
        case 5832: return "guai"; // 恠
        case 5834: return "lin"; // 恡
        case 5836: return "chi"; // 恥
        case 5838: return "shang"; // 恦
        case 5840: return "quan"; // 恮
        case 5842: return "yue"; // 恱
        case 5844: return "peng"; // 恲
        case 5846: return "de"; // 恴
        case 5848: return "hui"; // 恵
        case 5850: return "xiao"; // 恷
        case 5852: return "mang"; // 恾
        case 5854: return "yong"; // 悀
        case 5856: return ""; // 张
        case 5858: return "yuan"; // 悁
        case 5860: return "bi"; // 悂
        case 5862: return "yue"; // 悅
        case 5864: return "yu"; // 悆
        case 5866: return "yu"; // 悇
        case 5868: return "ke"; // 悈
        case 5870: return "zhe"; // 悊
        case 5872: return "lin"; // 悋
        case 5874: return "hao"; // 悎
        case 5876: return "qie"; // 悏
        case 5878: return "ti"; // 悐
        case 5880: return "bu"; // 悑
        case 5882: return "qian"; // 悓
        case 5884: return "xi"; // 悕
        case 5886: return "man"; // 悗
        case 5888: return "yi"; // 悘
        case 5890: return "heng"; // 悙
        case 5892: return "cheng"; // 悜
        case 5894: return "wu"; // 悞
        case 5896: return "li"; // 悡
        case 5898: return "lang"; // 悢
        case 5900: return "cong"; // 悤
        case 5902: return "yi"; // 悥
        case 5904: return "li"; // 悧
        case 5906: return "nao"; // 悩
        case 5908: return "e"; // 悪
        case 5910: return "wu"; // 悮
        case 5912: return "cong"; // 悰
        case 5914: return "de"; // 悳
        case 5916: return "chang"; // 悵
        case 5918: return "men"; // 悶
        case 5920: return "li"; // 悷
        case 5922: return "guan"; // 悹
        case 5924: return "guan"; // 悺
        case 5926: return "qi"; // 悽
        case 5928: return "kong"; // 悾
        case 5930: return "tian"; // 悿
        case 5932: return "lun"; // 惀
        case 5934: return "xi"; // 惁
        case 5936: return "kan"; // 惂
        case 5938: return "gun"; // 惃
        case 5940: return "ni"; // 惄
        case 5942: return "dun"; // 惇
        case 5944: return "guo"; // 惈
        case 5946: return "zhan"; // 惉
        case 5948: return "wan"; // 惌
        case 5950: return "jin"; // 惍
        case 5952: return "ji"; // 惎
        case 5954: return "lan"; // 惏
        case 5956: return "yu"; // 惐
        case 5958: return "he"; // 惒
        case 5960: return "juan"; // 惓
        case 5962: return "dan"; // 惔
        case 5964: return "ti"; // 惖
        case 5966: return "nie"; // 惗
        case 5968: return "chuo"; // 惙
        case 5970: return "hun"; // 惛
        case 5972: return "xin"; // 惞
        case 5974: return "e"; // 惡
        case 5976: return "rui"; // 惢
        case 5978: return "zong"; // 惣
        case 5980: return "jian"; // 惤
        case 5982: return "yong"; // 惥
        case 5984: return "de"; // 惪
        case 5986: return "nao"; // 惱
        case 5988: return "yun"; // 惲
        case 5990: return "die"; // 惵
        case 5992: return "chun"; // 惷
        case 5994: return "qiong"; // 惸
        case 5996: return "ce"; // 惻
        case 5998: return "bian"; // 惼
        case 6000: return "hun"; // 惽
        case 6002: return "zong"; // 惾
        case 6004: return "ti"; // 惿
        case 6006: return "bei"; // 愂
        case 6008: return "xuan"; // 愃
        case 6010: return "wei"; // 愄
        case 6012: return "ge"; // 愅
        case 6014: return "wei"; // 愇
        case 6016: return "bi"; // 愊
        case 6018: return "xuan"; // 愋
        case 6020: return "huan"; // 愌
        case 6022: return "mian"; // 愐
        case 6024: return "yong"; // 愑
        case 6026: return "kai"; // 愒
        case 6028: return "dang"; // 愓
        case 6030: return "yin"; // 愔
        case 6032: return "dan"; // 愖
        case 6034: return "mao"; // 愗
        case 6036: return "qia"; // 愘
        case 6038: return "ke"; // 愙
        case 6040: return "ai"; // 愛
        case 6042: return "qie"; // 愜
        case 6044: return "yan"; // 愝
        case 6046: return "nuo"; // 愞
        case 6048: return "zong"; // 愡
        case 6050: return "si"; // 愢
        case 6052: return "ying"; // 愥
        case 6054: return "que"; // 愨
        case 6056: return "gong"; // 愩
        case 6058: return "yun"; // 愪
        case 6060: return "se"; // 愬
        case 6062: return "qi"; // 愭
        case 6064: return "yao"; // 愮
        case 6066: return "song"; // 愯
        case 6068: return "huang"; // 愰
        case 6070: return "ji"; // 愱
        case 6072: return "gu"; // 愲
        case 6074: return "ju"; // 愳
        case 6076: return "chuan"; // 愴
        case 6078: return "ni"; // 愵
        case 6080: return "xie"; // 愶
        case 6082: return "kai"; // 愷
        case 6084: return "zheng"; // 愸
        case 6086: return "yong"; // 愹
        case 6088: return "cao"; // 愺
        case 6090: return "xun"; // 愻
        case 6092: return "shen"; // 愼
        case 6094: return "bo"; // 愽
        case 6096: return "kai"; // 愾
        case 6098: return "xi"; // 慀
        case 6100: return "hun"; // 慁
        case 6102: return "yong"; // 慂
        case 6104: return "yang"; // 慃
        case 6106: return "li"; // 慄
        case 6108: return "cao"; // 慅
        case 6110: return "tao"; // 慆
        case 6112: return "yan"; // 慇
        case 6114: return "xu"; // 慉
        case 6116: return "tai"; // 態
        case 6118: return "yun"; // 慍
        case 6120: return "ming"; // 慏
        case 6122: return "gong"; // 慐
        case 6124: return "cao"; // 慒
        case 6126: return "piao"; // 慓
        case 6128: return "mu"; // 慔
        case 6130: return "guo"; // 慖
        case 6132: return "chi"; // 慗
        case 6134: return "can"; // 慘
        case 6136: return "can"; // 慙
        case 6138: return "can"; // 慚
        case 6140: return "cui"; // 慛
        case 6142: return "min"; // 慜
        case 6144: return "zhang"; // 慞
        case 6146: return "tong"; // 慟
        case 6148: return "ao"; // 慠
        case 6150: return "shuan"; // 慡
        case 6152: return "guan"; // 慣
        case 6154: return "que"; // 慤
        case 6156: return "zao"; // 慥
        case 6158: return "jiu"; // 慦
        case 6160: return "lian"; // 慩
        case 6162: return "ou"; // 慪
        case 6164: return "song"; // 慫
        case 6166: return "jin"; // 慬
        case 6168: return "yin"; // 慭
        case 6170: return "lu"; // 慮
        case 6172: return "shang"; // 慯
        case 6174: return "tuan"; // 慱
        case 6176: return "man"; // 慲
        case 6178: return "qian"; // 慳
        case 6180: return "she"; // 慴
        case 6182: return "qing"; // 慶
        case 6184: return "di"; // 慸
        case 6186: return "zhi"; // 慹
        case 6188: return "lou"; // 慺
        case 6190: return "juan"; // 慻
        case 6192: return "qi"; // 慼
        case 6194: return "qi"; // 慽
        case 6196: return "yu"; // 慾
        case 6198: return "ping"; // 慿
        case 6200: return "liao"; // 憀
        case 6202: return "cong"; // 憁
        case 6204: return "you"; // 憂
        case 6206: return "chong"; // 憃
        case 6208: return "zhi"; // 憄
        case 6210: return "tong"; // 憅
        case 6212: return "cheng"; // 憆
        case 6214: return "qi"; // 憇
        case 6216: return "qu"; // 憈
        case 6218: return "peng"; // 憉
        case 6220: return "bei"; // 憊
        case 6222: return "qiong"; // 憌
        case 6224: return "jiao"; // 憍
        case 6226: return "chi"; // 憏
        case 6228: return "lian"; // 憐
        case 6230: return "ping"; // 憑
        case 6232: return "kui"; // 憒
        case 6234: return "hui"; // 憓
        case 6236: return "zheng"; // 憕
        case 6238: return ""; // 张
        case 6240: return "yin"; // 憖
        case 6242: return "yin"; // 憗
        case 6244: return "xi"; // 憘
        case 6246: return "xi"; // 憙
        case 6248: return "dan"; // 憚
        case 6250: return "tan"; // 憛
        case 6252: return "duo"; // 憜
        case 6254: return "dui"; // 憞
        case 6256: return "su"; // 憟
        case 6258: return "jue"; // 憠
        case 6260: return "ce"; // 憡
        case 6262: return "jiao"; // 憢
        case 6264: return "fan"; // 憣
        case 6266: return "fen"; // 憤
        case 6268: return "lao"; // 憥
        case 6270: return "lao"; // 憦
        case 6272: return "xian"; // 憪
        case 6274: return "min"; // 憫
        case 6276: return "liao"; // 憭
        case 6278: return "wu"; // 憮
        case 6280: return "can"; // 憯
        case 6282: return "jue"; // 憰
        case 6284: return "cu"; // 憱
        case 6286: return "xian"; // 憲
        case 6288: return "tan"; // 憳
        case 6290: return "sheng"; // 憴
        case 6292: return "pi"; // 憵
        case 6294: return "yi"; // 憶
        case 6296: return "xian"; // 憸
        case 6298: return "nao"; // 憹
        case 6300: return "dan"; // 憺
        case 6302: return "tan"; // 憻
        case 6304: return "jing"; // 憼
        case 6306: return "song"; // 憽
        case 6308: return "ji"; // 憿
        case 6310: return "wei"; // 懀
        case 6312: return "huan"; // 懁
        case 6314: return "qin"; // 懃
        case 6316: return "qin"; // 懄
        case 6318: return "ju"; // 懅
        case 6320: return "cao"; // 懆
        case 6322: return "ken"; // 懇
        case 6324: return "ying"; // 應
        case 6326: return "yi"; // 懌
        case 6328: return "lin"; // 懍
        case 6330: return "se"; // 懎
        case 6332: return "jun4      "; // 懏
        case 6334: return "huai"; // 懐
        case 6336: return "ai"; // 懓
        case 6338: return "yan"; // 懕
        case 6340: return "kuo"; // 懖
        case 6342: return "xia"; // 懗
        case 6344: return "chi"; // 懘
        case 6346: return "yu"; // 懙
        case 6348: return "yin"; // 懚
        case 6350: return "dai"; // 懛
        case 6352: return "meng"; // 懜
        case 6354: return "ai"; // 懝
        case 6356: return "meng"; // 懞
        case 6358: return "dui"; // 懟
        case 6360: return "ji"; // 懠
        case 6362: return "mo"; // 懡
        case 6364: return "lan"; // 懢
        case 6366: return "men"; // 懣
        case 6368: return "chou"; // 懤
        case 6370: return "zhi"; // 懥
        case 6372: return "nuo"; // 懧
        case 6374: return "chu"; // 懨
        case 6376: return "yang"; // 懩
        case 6378: return "bo"; // 懪
        case 6380: return "zhi"; // 懫
        case 6382: return "kuang"; // 懬
        case 6384: return "kuang"; // 懭
        case 6386: return "you"; // 懮
        case 6388: return "fu"; // 懯
        case 6390: return "liu"; // 懰
        case 6392: return "mie"; // 懱
        case 6394: return "cheng"; // 懲
        case 6396: return "hui"; // 懳
        case 6398: return "chan"; // 懴
        case 6400: return "lan"; // 懶
        case 6402: return "huai"; // 懷
        case 6404: return "xuan"; // 懸
        case 6406: return "rang"; // 懹
        case 6408: return "chan"; // 懺
        case 6410: return "ji"; // 懻
        case 6412: return "ju"; // 懼
        case 6414: return "guan"; // 懽
        case 6416: return "she"; // 懾
        case 6418: return "lian"; // 戀
        case 6420: return "nan"; // 戁
        case 6422: return "mo"; // 戂
        case 6424: return "tang"; // 戃
        case 6426: return "jue"; // 戄
        case 6428: return "gang"; // 戅
        case 6430: return "gang"; // 戇
        case 6432: return "yue"; // 戉
        case 6434: return "ge"; // 戓
        case 6436: return "jian"; // 戔
        case 6438: return "dong"; // 戙
        case 6440: return "die"; // 戜
        case 6442: return "cai"; // 戝
        case 6444: return "jia"; // 戞
        case 6446: return "zhi"; // 戠
        case 6448: return "kui"; // 戣
        case 6450: return "zhan"; // 戦
        case 6452: return "qiang"; // 戧
        case 6454: return "ge"; // 戨
        case 6456: return "jian"; // 戩
        case 6458: return "yu"; // 戫
        case 6460: return "you"; // 戭
        case 6462: return "hu"; // 戯
        case 6464: return "zhan"; // 戰
        case 6466: return "hu"; // 戱
        case 6468: return "xi"; // 戲
        case 6470: return "qu"; // 戵
        case 6472: return "hu"; // 戶
        case 6474: return "hu"; // 戸
        case 6476: return "e"; // 戹
        case 6478: return "yi"; // 戺
        case 6480: return "ti"; // 戻
        case 6482: return "mao"; // 戼
        case 6484: return "dian"; // 扂
        case 6486: return "jiong"; // 扄
        case 6488: return "yi"; // 扅
        case 6490: return "yi"; // 扆
        case 6492: return "yan"; // 扊
        case 6494: return "qiu"; // 扏
        case 6496: return "le"; // 扐
        case 6498: return "fan"; // 払
        case 6500: return "ru"; // 扖
        case 6502: return "zai"; // 扗
        case 6504: return "zhang"; // 扙
        case 6506: return "diao"; // 扚
        case 6508: return "gan"; // 扜
        case 6510: return "wu"; // 扝
        case 6512: return "gan"; // 扞
        case 6514: return "shen"; // 扟
        case 6516: return "cha"; // 扠
        case 6518: return "qian"; // 扡
        case 6520: return "gu"; // 扢
        case 6522: return "wu"; // 扤
        case 6524: return "den"; // 扥
        case 6526: return "ren"; // 扨
        case 6528: return "xi"; // 扱
        case 6530: return "qian"; // 扲
        case 6532: return "jia"; // 扴
        case 6534: return "yu"; // 扵
        case 6536: return "ao"; // 扷
        case 6538: return "xi"; // 扸
        case 6540: return "qi"; // 扺
        case 6542: return "zhi"; // 扻
        case 6544: return "den"; // 扽
        case 6546: return "yan"; // 抁
        case 6548: return "wang"; // 抂
        case 6550: return "bian"; // 抃
        case 6552: return "gou"; // 抅
        case 6554: return "wen"; // 抆
        case 6556: return "gu"; // 抇
        case 6558: return "yue"; // 抈
        case 6560: return "qin"; // 抋
        case 6562: return "dan"; // 抌
        case 6564: return "zheng"; // 抍
        case 6566: return "yun"; // 抎
        case 6568: return "wan"; // 抏
        case 6570: return "ne"; // 抐
        case 6572: return "pou"; // 抔
        case 6574: return "pou"; // 抙
        case 6576: return "ba"; // 抜
        case 6578: return "ao"; // 抝
        case 6580: return "ze"; // 択
        case 6582: return "yun"; // 抣
        case 6584: return "bing"; // 抦
        case 6586: return "zhi"; // 抧
        case 6588: return "nan"; // 抩
        case 6590: return "bu"; // 抪
        case 6592: return "yao"; // 抭
        case 6594: return "zhen"; // 抮
        case 6596: return "zha"; // 抯
        case 6598: return "yang"; // 抰
        case 6600: return "he"; // 抲
        case 6602: return "ni"; // 抳
        case 6604: return "ye"; // 抴
        case 6606: return "chi"; // 抶
        case 6608: return "pei"; // 抷
        case 6610: return "jia"; // 抸
        case 6612: return "mei"; // 抺
        case 6614: return "qu"; // 抾
        case 6616: return "chu"; // 拀
        case 6618: return "ya"; // 拁
        case 6620: return ""; // 张
        case 6622: return "zha"; // 拃
        case 6624: return "pao"; // 拋
        case 6626: return "na"; // 拏
        case 6628: return "qian"; // 拑
        case 6630: return "tuo"; // 拕
        case 6632: return "bai"; // 拝
        case 6634: return "di"; // 拞
        case 6636: return "ju"; // 拠
        case 6638: return "kuo"; // 拡
        case 6640: return "qia"; // 拤
        case 6642: return "qian"; // 拪
        case 6644: return "hen"; // 拫
        case 6646: return "nin"; // 拰
        case 6648: return "gong"; // 拲
        case 6650: return "zun"; // 拵
        case 6652: return "yi"; // 拸
        case 6654: return "xie"; // 拹
        case 6656: return "ce"; // 拺
        case 6658: return "hui"; // 拻
        case 6660: return "bai"; // 挀
        case 6662: return "die"; // 挃
        case 6664: return "guang"; // 挄
        case 6666: return "duo"; // 挅
        case 6668: return "duo"; // 挆
        case 6670: return "nong"; // 挊
        case 6672: return "zhen"; // 挋
        case 6674: return "ge"; // 挌
        case 6676: return "jiao"; // 挍
        case 6678: return "dong"; // 挏
        case 6680: return "na"; // 挐
        case 6682: return "lie"; // 挒
        case 6684: return "zha"; // 挓
        case 6686: return "lu"; // 挔
        case 6688: return "she"; // 挕
        case 6690: return "jue"; // 挗
        case 6692: return "lie"; // 挘
        case 6694: return "ju"; // 挙
        case 6696: return "ya"; // 挜
        case 6698: return "xian"; // 挦
        case 6700: return "yu"; // 挧
        case 6702: return "tuo"; // 挩
        case 6704: return "bo"; // 挬
        case 6706: return "geng"; // 挭
        case 6708: return "ti"; // 挮
        case 6710: return "cheng"; // 挰
        case 6712: return "sha"; // 挱
        case 6714: return "keng"; // 挳
        case 6716: return "mei"; // 挴
        case 6718: return "nong"; // 挵
        case 6720: return "ju"; // 挶
        case 6722: return "beng"; // 挷
        case 6724: return "jian"; // 挸
        case 6726: return "yan"; // 挻
        case 6728: return "luo"; // 挼
        case 6730: return "jia"; // 挾
        case 6732: return "zha"; // 挿
        case 6734: return "feng"; // 捀
        case 6736: return "ku"; // 捁
        case 6738: return "ju"; // 捄
        case 6740: return "huo"; // 捇
        case 6742: return "tu"; // 捈
        case 6744: return "pou"; // 捊
        case 6746: return "ze"; // 捑
        case 6748: return "shu"; // 捒
        case 6750: return "ye"; // 捓
        case 6752: return "jue"; // 捔
        case 6754: return "wan"; // 捖
        case 6756: return "bu"; // 捗
        case 6758: return "zun"; // 捘
        case 6760: return "ye"; // 捙
        case 6762: return "zhai"; // 捚
        case 6764: return "lu"; // 捛
        case 6766: return "sou"; // 捜
        case 6768: return "tuo"; // 捝
        case 6770: return "bang"; // 捠
        case 6772: return "wei"; // 捤
        case 6774: return "wan"; // 捥
        case 6776: return "qin"; // 捦
        case 6778: return "she"; // 捨
        case 6780: return "min"; // 捪
        case 6782: return "men"; // 捫
        case 6784: return "fu"; // 捬
        case 6786: return "dao"; // 捯
        case 6788: return "wo"; // 捰
        case 6790: return "juan"; // 捲
        case 6792: return "yue"; // 捳
        case 6794: return "zong"; // 捴
        case 6796: return "tian"; // 捵
        case 6798: return "tu"; // 捸
        case 6800: return "ben"; // 捹
        case 6802: return "wo"; // 捼
        case 6804: return "zuo"; // 捽
        case 6806: return "wo"; // 捾
        case 6808: return "qi"; // 捿
        case 6810: return "cheng"; // 掁
        case 6812: return "sao"; // 掃
        case 6814: return "lun"; // 掄
        case 6816: return "qing"; // 掅
        case 6818: return "gang"; // 掆
        case 6820: return "di"; // 掋
        case 6822: return "hun"; // 掍
        case 6824: return "qi"; // 掑
        case 6826: return "shu"; // 掓
        case 6828: return "wan"; // 掔
        case 6830: return "ling"; // 掕
        case 6832: return "ya"; // 掗
        case 6834: return "zheng"; // 掙
        case 6836: return "liang"; // 掚
        case 6838: return "gua"; // 掛
        case 6840: return "yi"; // 掜
        case 6842: return "huo"; // 掝
        case 6844: return "yan"; // 掞
        case 6846: return "ding"; // 掟
        case 6848: return "cai"; // 採
        case 6850: return "bing"; // 掤
        case 6852: return "ti"; // 掦
        case 6854: return "chou"; // 掫
        case 6856: return "ken"; // 掯
        case 6858: return "pa"; // 掱
        case 6860: return "jie"; // 掲
        case 6862: return "ming"; // 掵
        case 6864: return "geng"; // 掶
        case 6866: return "meng"; // 掹
        case 6868: return "sao"; // 掻
        case 6870: return "peng"; // 掽
        case 6872: return "nuo"; // 掿
        case 6874: return "jian"; // 揀
        case 6876: return "keng"; // 揁
        case 6878: return "you"; // 揂
        case 6880: return "jian"; // 揃
        case 6882: return "yan"; // 揅
        case 6884: return "nan"; // 揇
        case 6886: return "hong"; // 揈
        case 6888: return "pi"; // 揊
        case 6890: return "wei"; // 揋
        case 6892: return "cai"; // 揌
        case 6894: return "nie"; // 揑
        case 6896: return "shi"; // 揓
        case 6898: return "zong"; // 揔
        case 6900: return "zhen"; // 揕
        case 6902: return "xun"; // 揗
        case 6904: return "yong"; // 揘
        case 6906: return "bian"; // 揙
        case 6908: return "yang"; // 揚
        case 6910: return "huan"; // 換
        case 6912: return "yan"; // 揜
        case 6914: return "zan"; // 揝
        case 6916: return "ju"; // 揟
        case 6918: return "ke"; // 揢
        case 6920: return "ji"; // 揤
        case 6922: return "di"; // 揥
        case 6924: return "la"; // 揦
        case 6926: return "la"; // 揧
        case 6928: return "chen"; // 揨
        case 6930: return "jiu"; // 揫
        case 6932: return "tu"; // 揬
        case 6934: return "hui"; // 揮
        case 6936: return "gen"; // 揯
        case 6938: return "dong"; // 揰
        case 6940: return "xiao"; // 揱
        case 6942: return "xie"; // 揳
        case 6944: return "jian"; // 揵
        case 6946: return "zha"; // 揷
        case 6948: return "bei"; // 揹
        case 6950: return "yao"; // 揺
        case 6952: return "wei"; // 揻
        case 6954: return "dem"; // 揼
        case 6956: return "wu"; // 揾
        case 6958: return "zong"; // 搃
        case 6960: return "gen"; // 搄
        case 6962: return "gou"; // 搆
        case 6964: return "qin"; // 搇
        case 6966: return "rong"; // 搈
        case 6968: return "huo"; // 搉
        case 6970: return "zou"; // 搊
        case 6972: return "sun"; // 損
        case 6974: return "sun"; // 搎
        case 6976: return "nang"; // 搑
        case 6978: return "beng"; // 搒
        case 6980: return "e"; // 搕
        case 6982: return "yao"; // 搖
        case 6984: return "dao"; // 搗
        case 6986: return "zhi"; // 搘
        case 6988: return "nu"; // 搙
        case 6990: return "la"; // 搚
        case 6992: return "qiu"; // 搝
        case 6994: return "xian"; // 搟
        case 6996: return "jin"; // 搢
        case 6998: return "mie"; // 搣
        case 7000: return "e"; // 搤
        case 7002: return ""; // 张
        case 7004: return "dui"; // 搥
        case 7006: return "shan"; // 搧
        case 7008: return "da"; // 搨
        case 7010: return "jie"; // 搩
        case 7012: return "ban"; // 搫
        case 7014: return "li"; // 搮
        case 7016: return "tao"; // 搯
        case 7018: return "ku"; // 搰
        case 7020: return "nai"; // 搱
        case 7022: return "wa"; // 搲
        case 7024: return "qia"; // 搳
        case 7026: return "wen"; // 搵
        case 7028: return "qiang"; // 搶
        case 7030: return "tian"; // 搷
        case 7032: return "zhen"; // 搸
        case 7034: return "e"; // 搹
        case 7036: return "nuo"; // 搻
        case 7038: return "quan"; // 搼
        case 7040: return "zha"; // 搾
        case 7042: return "wu"; // 摀
        case 7044: return "zhe"; // 摂
        case 7046: return "kang"; // 摃
        case 7048: return "rong"; // 摉
        case 7050: return "shai"; // 摋
        case 7052: return "chan"; // 摌
        case 7054: return "suo"; // 摍
        case 7056: return "jiu"; // 摎
        case 7058: return "chong"; // 摏
        case 7060: return "chuang"; // 摐
        case 7062: return "guo"; // 摑
        case 7064: return "peng"; // 摓
        case 7066: return "di"; // 摕
        case 7068: return "qi"; // 摖
        case 7070: return "sou"; // 摗
        case 7072: return "lian"; // 摙
        case 7074: return "cheng"; // 摚
        case 7076: return "chi"; // 摛
        case 7078: return "guan"; // 摜
        case 7080: return "lu"; // 摝
        case 7082: return "lou"; // 摟
        case 7084: return "zong"; // 摠
        case 7086: return "gai"; // 摡
        case 7088: return "hu"; // 摢
        case 7090: return "zha"; // 摣
        case 7092: return "qiang"; // 摤
        case 7094: return "tang"; // 摥
        case 7096: return "hua"; // 摦
        case 7098: return "nai"; // 摨
        case 7100: return "jiang"; // 摪
        case 7102: return "gui"; // 摫
        case 7104: return "ying"; // 摬
        case 7106: return "ao"; // 摮
        case 7108: return "zhi"; // 摯
        case 7110: return "nie"; // 摰
        case 7112: return "man"; // 摱
        case 7114: return "chan"; // 摲
        case 7116: return "kou"; // 摳
        case 7118: return "chi"; // 摴
        case 7120: return "she"; // 摵
        case 7122: return "tuan"; // 摶
        case 7124: return "jiao"; // 摷
        case 7126: return "chan"; // 摻
        case 7128: return "keng"; // 摼
        case 7130: return "biao"; // 摽
        case 7132: return "jiang"; // 摾
        case 7134: return "yao"; // 摿
        case 7136: return "gou"; // 撀
        case 7138: return "qian"; // 撁
        case 7140: return "ji"; // 撃
        case 7142: return "pie"; // 撆
        case 7144: return "lao"; // 撈
        case 7146: return "dun"; // 撉
        case 7148: return "xian"; // 撊
        case 7150: return "rui"; // 撋
        case 7152: return "gui"; // 撌
        case 7154: return "zan"; // 撍
        case 7156: return "yi"; // 撎
        case 7158: return "xun"; // 撏
        case 7160: return "cheng"; // 撐
        case 7162: return "nao"; // 撓
        case 7164: return "hong"; // 撔
        case 7166: return "guang"; // 撗
        case 7168: return "da"; // 撘
        case 7170: return "nian"; // 撚
        case 7172: return "lin"; // 撛
        case 7174: return "zheng"; // 撜
        case 7176: return "wei"; // 撝
        case 7178: return "jiao"; // 撟
        case 7180: return "ji"; // 撠
        case 7182: return "cao"; // 撡
        case 7184: return "dan"; // 撢
        case 7186: return "dan"; // 撣
        case 7188: return "bo"; // 撥
        case 7190: return "che"; // 撦
        case 7192: return "jue"; // 撧
        case 7194: return "xiao"; // 撨
        case 7196: return "ben"; // 撪
        case 7198: return "fu"; // 撫
        case 7200: return "zhuo"; // 撯
        case 7202: return "wei"; // 撱
        case 7204: return "pu"; // 撲
        case 7206: return "qin"; // 撳
        case 7208: return "dun"; // 撴
        case 7210: return "hua"; // 撶
        case 7212: return "jiao"; // 撹
        case 7214: return "ta"; // 撻
        case 7216: return "yao"; // 撽
        case 7218: return "wo"; // 撾
        case 7220: return "jian"; // 撿
        case 7222: return "yong"; // 擁
        case 7224: return "nang"; // 擃
        case 7226: return "lu"; // 擄
        case 7228: return "zhuo"; // 擆
        case 7230: return "ze"; // 擇
        case 7232: return "bu"; // 擈
        case 7234: return "chuo"; // 擉
        case 7236: return "ji"; // 擊
        case 7238: return "dang"; // 擋
        case 7240: return "se"; // 擌
        case 7242: return "jing"; // 擏
        case 7244: return "jie"; // 擑
        case 7246: return "kuai"; // 擓
        case 7248: return "dan"; // 擔
        case 7250: return "xie"; // 擕
        case 7252: return "ye"; // 擖
        case 7254: return "ao"; // 擙
        case 7256: return "ju"; // 據
        case 7258: return "ye"; // 擛
        case 7260: return "e"; // 擜
        case 7262: return "meng"; // 擝
        case 7264: return "mi"; // 擟
        case 7266: return "ji"; // 擠
        case 7268: return "tai"; // 擡
        case 7270: return "chou"; // 擣
        case 7272: return "lan"; // 擥
        case 7274: return "ju"; // 擧
        case 7276: return "ye"; // 擨
        case 7278: return "ru"; // 擩
        case 7280: return "ye"; // 擪
        case 7282: return "ye"; // 擫
        case 7284: return "ni"; // 擬
        case 7286: return "huo"; // 擭
        case 7288: return "jie"; // 擮
        case 7290: return "bin"; // 擯
        case 7292: return "ning"; // 擰
        case 7294: return "ge"; // 擱
        case 7296: return "zhi"; // 擲
        case 7298: return "jie"; // 擳
        case 7300: return "kuo"; // 擴
        case 7302: return "mo"; // 擵
        case 7304: return "jian"; // 擶
        case 7306: return "xie"; // 擷
        case 7308: return "la"; // 擸
        case 7310: return "tan"; // 擹
        case 7312: return "bai"; // 擺
        case 7314: return "sou"; // 擻
        case 7316: return "lu"; // 擼
        case 7318: return "lue"; // 擽
        case 7320: return "rao"; // 擾
        case 7322: return "ti"; // 擿
        case 7324: return "yang"; // 攁
        case 7326: return "lei"; // 攂
        case 7328: return "ca"; // 攃
        case 7330: return "lu"; // 攄
        case 7332: return "cuan"; // 攅
        case 7334: return "nian"; // 攆
        case 7336: return "xian"; // 攇
        case 7338: return "pei"; // 攈
        case 7340: return "li"; // 攊
        case 7342: return "la"; // 攋
        case 7344: return "huan"; // 攌
        case 7346: return "ying"; // 攍
        case 7348: return "lu"; // 攎
        case 7350: return "long"; // 攏
        case 7352: return "qian"; // 攐
        case 7354: return "qian"; // 攑
        case 7356: return "qian"; // 攓
        case 7358: return "lan"; // 攔
        case 7360: return "jian"; // 攕
        case 7362: return "ying"; // 攖
        case 7364: return "mei"; // 攗
        case 7366: return "chan"; // 攙
        case 7368: return "ying"; // 攚
        case 7370: return "cuan"; // 攛
        case 7372: return "xie"; // 攜
        case 7374: return "she"; // 攝
        case 7376: return "luo"; // 攞
        case 7378: return "mei"; // 攟
        case 7380: return "mo"; // 攠
        case 7382: return "chi"; // 攡
        case 7384: return ""; // 张
        case 7386: return "cuan"; // 攢
        case 7388: return "lian"; // 攣
        case 7390: return "tan"; // 攤
        case 7392: return "li"; // 攦
        case 7394: return "dian"; // 攧
        case 7396: return "wa"; // 攨
        case 7398: return "tang"; // 攩
        case 7400: return "jiao"; // 攪
        case 7402: return "lan"; // 攬
        case 7404: return "li"; // 攭
        case 7406: return "gui"; // 攰
        case 7408: return "gui"; // 攱
        case 7410: return "ji"; // 攲
        case 7412: return "xun"; // 攳
        case 7414: return "kao"; // 攷
        case 7416: return "yi"; // 攺
        case 7418: return "gan"; // 攼
        case 7420: return "ban"; // 攽
        case 7422: return "po"; // 敀
        case 7424: return "dian"; // 敁
        case 7426: return "kou"; // 敂
        case 7428: return "min"; // 敃
        case 7430: return "wu"; // 敄
        case 7432: return "he"; // 敆
        case 7434: return "ce"; // 敇
        case 7436: return "chu"; // 敊
        case 7438: return "ge"; // 敋
        case 7440: return "xu"; // 敍
        case 7442: return "jiao"; // 敎
        case 7444: return "chen"; // 敐
        case 7446: return "zhen"; // 敒
        case 7448: return "duo"; // 敓
        case 7450: return "yu"; // 敔
        case 7452: return "bai"; // 敗
        case 7454: return "xu"; // 敘
        case 7456: return "duo"; // 敚
        case 7458: return "nie"; // 敜
        case 7460: return "dian"; // 敟
        case 7462: return "duo"; // 敠
        case 7464: return "yi"; // 敡
        case 7466: return "ke"; // 敤
        case 7468: return "yan"; // 敥
        case 7470: return "ji"; // 敧
        case 7472: return "tou"; // 敨
        case 7474: return "xiao"; // 敩
        case 7476: return "duo"; // 敪
        case 7478: return "yang"; // 敭
        case 7480: return "xia"; // 敮
        case 7482: return "min"; // 敯
        case 7484: return "ai"; // 敱
        case 7486: return "ai"; // 敳
        case 7488: return "di"; // 敵
        case 7490: return "zhen"; // 敶
        case 7492: return "shu"; // 數
        case 7494: return "liao"; // 敹
        case 7496: return "ou"; // 敺
        case 7498: return "xiong"; // 敻
        case 7500: return "yi"; // 敼
        case 7502: return "jiao"; // 敽
        case 7504: return "shan"; // 敾
        case 7506: return "jiao"; // 敿
        case 7508: return "zhu"; // 斀
        case 7510: return "yi"; // 斁
        case 7512: return "lian"; // 斂
        case 7514: return "bi"; // 斃
        case 7516: return "tai"; // 斄
        case 7518: return "xiao"; // 斅
        case 7520: return "xiao"; // 斆
        case 7522: return "xue"; // 斈
        case 7524: return "qi"; // 斉
        case 7526: return "qi"; // 斊
        case 7528: return "jue"; // 斍
        case 7530: return "zhai"; // 斎
        case 7532: return "lang"; // 斏
        case 7534: return "ban"; // 斒
        case 7536: return "yu"; // 斔
        case 7538: return "lan"; // 斕
        case 7540: return "wei"; // 斖
        case 7542: return "sheng"; // 斘
        case 7544: return "jia"; // 斚
        case 7546: return "jia"; // 斝
        case 7548: return "yu"; // 斞
        case 7550: return "jiao"; // 斠
        case 7552: return "tou"; // 斢
        case 7554: return "dou"; // 斣
        case 7556: return "yin"; // 斦
        case 7558: return "qiang"; // 斨
        case 7560: return "qu"; // 斪
        case 7562: return "zhan"; // 斬
        case 7564: return "zhuo"; // 斮
        case 7566: return "zhuo"; // 斱
        case 7568: return "zhuo"; // 斲
        case 7570: return "jin"; // 斳
        case 7572: return "lin"; // 斴
        case 7574: return "zhuo"; // 斵
        case 7576: return "chu"; // 斶
        case 7578: return "duan"; // 斷
        case 7580: return "zhu"; // 斸
        case 7582: return "jie"; // 斺
        case 7584: return "hang"; // 斻
        case 7586: return "pei"; // 斾
        case 7588: return "you"; // 斿
        case 7590: return "mie"; // 旀
        case 7592: return "qi"; // 旂
        case 7594: return "bi"; // 旇
        case 7596: return "liu"; // 旈
        case 7598: return "fu"; // 旉
        case 7600: return "fang"; // 旊
        case 7602: return "jing"; // 旍
        case 7604: return "zhao"; // 旐
        case 7606: return "yi"; // 旑
        case 7608: return "shao"; // 旓
        case 7610: return "jian"; // 旔
        case 7612: return "eos"; // 旕
        case 7614: return "zhi"; // 旘
        case 7616: return "fan"; // 旙
        case 7618: return "piao"; // 旚
        case 7620: return "fan"; // 旛
        case 7622: return "zhan"; // 旜
        case 7624: return "kuai"; // 旝
        case 7626: return "sui"; // 旞
        case 7628: return "yu"; // 旟
        case 7630: return "ji"; // 旡
        case 7632: return "ji"; // 旣
        case 7634: return "huo"; // 旤
        case 7636: return "xie"; // 旪
        case 7638: return "tiao"; // 旫
        case 7640: return "ying"; // 旲
        case 7642: return "di"; // 旳
        case 7644: return "xu"; // 旴
        case 7646: return "chan"; // 旵
        case 7648: return "yang"; // 旸
        case 7650: return "shi"; // 旹
        case 7652: return "min"; // 旻
        case 7654: return "min"; // 旼
        case 7656: return "tun"; // 旽
        case 7658: return "chun"; // 旾
        case 7660: return "wu"; // 旿
        case 7662: return "bei"; // 昁
        case 7664: return "ban"; // 昄
        case 7666: return "jie"; // 昅
        case 7668: return "sheng"; // 昇
        case 7670: return "hu"; // 昈
        case 7672: return "fang"; // 昉
        case 7674: return "gui"; // 昋
        case 7676: return "xuan"; // 昍
        case 7678: return "fen"; // 昐
        case 7680: return "qin"; // 昑
        case 7682: return "hu"; // 昒
        case 7684: return "yan"; // 昖
        case 7686: return "ze"; // 昗
        case 7688: return "fang"; // 昘
        case 7690: return "shen"; // 昚
        case 7692: return "ju"; // 昛
        case 7694: return "yang"; // 昜
        case 7696: return "bing"; // 昞
        case 7698: return "xuan"; // 昡
        case 7700: return "po"; // 昢
        case 7702: return "zhen"; // 昣
        case 7704: return "ling"; // 昤
        case 7706: return "hao"; // 昦
        case 7708: return "mo"; // 昩
        case 7710: return "bian"; // 昪
        case 7712: return "xu"; // 昫
        case 7714: return "hun"; // 昬
        case 7716: return "zong"; // 昮
        case 7718: return "xia"; // 昰
        case 7720: return "fei"; // 昲
        case 7722: return "yi"; // 昳
        case 7724: return "wen"; // 昷
        case 7726: return "dong"; // 昸
        case 7728: return "ai"; // 昹
        case 7730: return "bing"; // 昺
        case 7732: return "ang"; // 昻
        case 7734: return "long"; // 昽
        case 7736: return "kuang"; // 昿
        case 7738: return "tiao"; // 晀
        case 7740: return "shi"; // 時
        case 7742: return "huang"; // 晄
        case 7744: return "xuan"; // 晅
        case 7746: return "kui"; // 晆
        case 7748: return "kua"; // 晇
        case 7750: return "jiao"; // 晈
        case 7752: return "jin"; // 晉
        case 7754: return "zhi"; // 晊
        case 7756: return "tong"; // 晍
        case 7758: return "hong"; // 晎
        case 7760: return "gai"; // 晐
        case 7762: return "xiang"; // 晑
        case 7764: return "han"; // 晘
        case 7766: return ""; // 张
        case 7768: return "jun4      "; // 晙
        case 7770: return "xian"; // 晛
        case 7772: return "kun"; // 晜
        case 7774: return "zhou"; // 晝
        case 7776: return "xi"; // 晞
        case 7778: return "sheng"; // 晠
        case 7780: return "zhe"; // 晢
        case 7782: return "zhe"; // 晣
        case 7784: return "han"; // 晥
        case 7786: return "hao"; // 晧
        case 7788: return "wan"; // 晩
        case 7790: return "tian"; // 晪
        case 7792: return "zhuo"; // 晫
        case 7794: return "zui"; // 晬
        case 7796: return "zhou"; // 晭
        case 7798: return "shan"; // 晱
        case 7800: return "ni"; // 晲
        case 7802: return "xi"; // 晳
        case 7804: return "du"; // 晵
        case 7806: return "zheng"; // 晸
        case 7808: return "yi"; // 晹
        case 7810: return "an"; // 晻
        case 7812: return "wan"; // 晼
        case 7814: return "lin"; // 晽
        case 7816: return "chang"; // 晿
        case 7818: return "wang"; // 暀
        case 7820: return "xiao"; // 暁
        case 7822: return "fei"; // 暃
        case 7824: return "geng"; // 暅
        case 7826: return "yi"; // 暆
        case 7828: return "yun"; // 暈
        case 7830: return "hui"; // 暉
        case 7832: return "xu"; // 暊
        case 7834: return "min"; // 暋
        case 7836: return "ye"; // 暍
        case 7838: return "ying"; // 暎
        case 7840: return "du"; // 暏
        case 7842: return "wei"; // 暐
        case 7844: return "qing"; // 暒
        case 7846: return "mao"; // 暓
        case 7848: return "nan"; // 暔
        case 7850: return "lan"; // 暕
        case 7852: return "yang"; // 暘
        case 7854: return "chun"; // 暙
        case 7856: return "yao"; // 暚
        case 7858: return "suo"; // 暛
        case 7860: return "pu"; // 暜
        case 7862: return "jiao"; // 暞
        case 7864: return "kai"; // 暟
        case 7866: return "gao"; // 暠
        case 7868: return "weng"; // 暡
        case 7870: return "chang"; // 暢
        case 7872: return "qi"; // 暣
        case 7874: return "hao"; // 暤
        case 7876: return "yan"; // 暥
        case 7878: return "li"; // 暦
        case 7880: return "ji"; // 暩
        case 7882: return "men"; // 暪
        case 7884: return "zan"; // 暫
        case 7886: return "xie"; // 暬
        case 7888: return "hao"; // 暭
        case 7890: return "mo"; // 暯
        case 7892: return "cong"; // 暰
        case 7894: return "ni"; // 暱
        case 7896: return "zhang"; // 暲
        case 7898: return "hui"; // 暳
        case 7900: return "han"; // 暵
        case 7902: return "xuan"; // 暶
        case 7904: return "chuan"; // 暷
        case 7906: return "liao"; // 暸
        case 7908: return "tan"; // 暺
        case 7910: return "jing"; // 暻
        case 7912: return "pie"; // 暼
        case 7914: return "lin"; // 暽
        case 7916: return "xi"; // 暿
        case 7918: return "yi"; // 曀
        case 7920: return "ji"; // 曁
        case 7922: return "huang"; // 曂
        case 7924: return "dai"; // 曃
        case 7926: return "ye"; // 曄
        case 7928: return "ye"; // 曅
        case 7930: return "li"; // 曆
        case 7932: return "tan"; // 曇
        case 7934: return "tong"; // 曈
        case 7936: return "xiao"; // 曉
        case 7938: return "fei"; // 曊
        case 7940: return "shen"; // 曋
        case 7942: return "zhao"; // 曌
        case 7944: return "hao"; // 曍
        case 7946: return "yi"; // 曎
        case 7948: return "shan"; // 曏
        case 7950: return "xing"; // 曐
        case 7952: return "shan"; // 曑
        case 7954: return "jiao"; // 曒
        case 7956: return "bao"; // 曓
        case 7958: return "jing"; // 曔
        case 7960: return "yan"; // 曕
        case 7962: return "ai"; // 曖
        case 7964: return "ye"; // 曗
        case 7966: return "ru"; // 曘
        case 7968: return "meng"; // 曚
        case 7970: return "li"; // 曞
        case 7972: return "chen"; // 曟
        case 7974: return "kuang"; // 曠
        case 7976: return "die"; // 曡
        case 7978: return "liao"; // 曢
        case 7980: return "yao"; // 曣
        case 7982: return "huo"; // 曤
        case 7984: return "lu"; // 曥
        case 7986: return "rong"; // 曧
        case 7988: return "long"; // 曨
        case 7990: return "luo"; // 曪
        case 7992: return "luan"; // 曫
        case 7994: return "shai"; // 曬
        case 7996: return "tang"; // 曭
        case 7998: return "yan"; // 曮
        case 8000: return "zhu"; // 曯
        case 8002: return "yue"; // 曱
        case 8004: return "yi"; // 曵
        case 8006: return "hu"; // 曶
        case 8008: return "shu"; // 書
        case 8010: return "cao"; // 曺
        case 8012: return "sheng"; // 曻
        case 8014: return "zeng"; // 曽
        case 8016: return "qian"; // 朁
        case 8018: return "xu"; // 朂
        case 8020: return "hui"; // 會
        case 8022: return "yin"; // 朄
        case 8024: return "qie"; // 朅
        case 8026: return "fen"; // 朆
        case 8028: return "pi"; // 朇
        case 8030: return "ban"; // 朌
        case 8032: return "ling"; // 朎
        case 8034: return "fei"; // 朏
        case 8036: return "ti"; // 朑
        case 8038: return "nu"; // 朒
        case 8040: return "tiao"; // 朓
        case 8042: return "lang"; // 朖
        case 8044: return "juan"; // 朘
        case 8046: return "ming"; // 朙
        case 8048: return "mang"; // 朚
        case 8050: return "tun"; // 朜
        case 8052: return "qi"; // 朞
        case 8054: return "ying"; // 朠
        case 8056: return "zong"; // 朡
        case 8058: return "wang"; // 朢
        case 8060: return "tong"; // 朣
        case 8062: return "lang"; // 朤
        case 8064: return "lao"; // 朥
        case 8066: return "long"; // 朧
        case 8068: return "pin"; // 朩
        case 8070: return "zhu"; // 朮
        case 8072: return "teul"; // 朰
        case 8074: return "ren"; // 朲
        case 8076: return "ba"; // 朳
        case 8078: return "duo"; // 朶
        case 8080: return "mu"; // 朷
        case 8082: return "li"; // 朸
        case 8084: return "gui"; // 朹
        case 8086: return "jiu"; // 朻
        case 8088: return "bi"; // 朼
        case 8090: return "zhen"; // 朾
        case 8092: return "ci"; // 朿
        case 8094: return "ru"; // 杁
        case 8096: return "qian"; // 杄
        case 8098: return "wu"; // 杅
        case 8100: return "wu"; // 杇
        case 8102: return "xun"; // 杊
        case 8104: return "fan"; // 杋
        case 8106: return "zi"; // 杍
        case 8108: return "er"; // 杒
        case 8110: return "tuo"; // 杔
        case 8112: return "di"; // 杕
        case 8114: return "mang"; // 杗
        case 8116: return "chi"; // 杘
        case 8118: return "yi"; // 杙
        case 8120: return "ge"; // 杚
        case 8122: return "gong"; // 杛
        case 8124: return "yi"; // 杝
        case 8126: return "jiang"; // 杢
        case 8128: return "shan"; // 杣
        case 8130: return "wan"; // 杤
        case 8132: return "jiu"; // 杦
        case 8134: return "mang"; // 杧
        case 8136: return "xi"; // 杫
        case 8138: return "yuan"; // 杬
        case 8140: return "bei"; // 杮
        case 8142: return "dong"; // 東
        case 8144: return "qian"; // 杴
        case 8146: return "chun"; // 杶
        case 8148: return ""; // 张
        case 8150: return "dui"; // 杸
        case 8152: return "hua"; // 杹
        case 8154: return "xin"; // 杺
        case 8156: return "niu"; // 杻
        case 8158: return "chou"; // 杽
        case 8160: return "song"; // 枀
        case 8162: return "wo"; // 枂
        case 8164: return "jin"; // 枃
        case 8166: return "ji"; // 枅
        case 8168: return "mao"; // 枆
        case 8170: return "bi"; // 枈
        case 8172: return "ang"; // 枊
        case 8174: return "fen"; // 枌
        case 8176: return "yi"; // 枍
        case 8178: return "fu"; // 枎
        case 8180: return "nan"; // 枏
        case 8182: return "hu"; // 枑
        case 8184: return "ya"; // 枒
        case 8186: return "dou"; // 枓
        case 8188: return "xin"; // 枔
        case 8190: return "yao"; // 枖
        case 8192: return "e"; // 枙
        case 8194: return "zhao"; // 枛
        case 8196: return "yun"; // 枟
        case 8198: return "zui"; // 枠
        case 8200: return "sheng"; // 枡
        case 8202: return "di"; // 枤
        case 8204: return "lu"; // 枦
        case 8206: return "song"; // 枩
        case 8208: return "nan"; // 枬
        case 8210: return "xian"; // 枮
        case 8212: return "ci"; // 枱
        case 8214: return "xi"; // 枲
        case 8216: return "guai"; // 枴
        case 8218: return "bao"; // 枹
        case 8220: return "mo"; // 枺
        case 8222: return "yi"; // 枻
        case 8224: return "ye"; // 枼
        case 8226: return "ye"; // 枽
        case 8228: return "shi"; // 枾
        case 8230: return "nie"; // 枿
        case 8232: return "bi"; // 柀
        case 8234: return "yi"; // 柂
        case 8236: return "ni"; // 柅
        case 8238: return "la"; // 柆
        case 8240: return "he"; // 柇
        case 8242: return "pan"; // 柈
        case 8244: return "fan"; // 柉
        case 8246: return "zhong"; // 柊
        case 8248: return "dai"; // 柋
        case 8250: return "ci"; // 柌
        case 8252: return "yang"; // 柍
        case 8254: return "fu"; // 柎
        case 8256: return "shu"; // 柕
        case 8258: return "shao"; // 柖
        case 8260: return "song"; // 柗
        case 8262: return "shen"; // 柛
        case 8264: return "nan"; // 柟
        case 8266: return "yong"; // 柡
        case 8268: return "die"; // 柣
        case 8270: return "zha"; // 柤
        case 8272: return "dan"; // 柦
        case 8274: return "gu"; // 柧
        case 8276: return "bu"; // 柨
        case 8278: return "ao"; // 柪
        case 8280: return "fu"; // 柫
        case 8282: return "ba"; // 柭
        case 8284: return "duo"; // 柮
        case 8286: return "bi"; // 柲
        case 8288: return "shan"; // 柵
        case 8290: return "si"; // 柶
        case 8292: return "zhu"; // 柷
        case 8294: return "bei"; // 柸
        case 8296: return "fei"; // 柹
        case 8298: return "guai"; // 柺
        case 8300: return "cha"; // 査
        case 8302: return "yao"; // 柼
        case 8304: return "jiu"; // 柾
        case 8306: return "liu"; // 栁
        case 8308: return "mei"; // 栂
        case 8310: return "li"; // 栃
        case 8312: return "rong"; // 栄
        case 8314: return "zao"; // 栆
        case 8316: return "saeng"; // 栍
        case 8318: return "yong"; // 栐
        case 8320: return "xun"; // 栒
        case 8322: return "qi"; // 栔
        case 8324: return "zhen"; // 栕
        case 8326: return "yi"; // 栘
        case 8328: return "xiang"; // 栙
        case 8330: return "zhen"; // 栚
        case 8332: return "li"; // 栛
        case 8334: return "se"; // 栜
        case 8336: return "kan"; // 栞
        case 8338: return "bing"; // 栟
        case 8340: return "ren"; // 栠
        case 8342: return "bai"; // 栢
        case 8344: return "ren"; // 栣
        case 8346: return "bing"; // 栤
        case 8348: return "zi"; // 栥
        case 8350: return "chou"; // 栦
        case 8352: return "yi"; // 栧
        case 8354: return "ci"; // 栨
        case 8356: return "jian"; // 栫
        case 8358: return "zui"; // 栬
        case 8360: return "er"; // 栭
        case 8362: return "er"; // 栮
        case 8364: return "you"; // 栯
        case 8366: return "fa"; // 栰
        case 8368: return "gong"; // 栱
        case 8370: return "zhan"; // 栴
        case 8372: return "li"; // 栵
        case 8374: return "yin"; // 栶
        case 8376: return "yi"; // 栺
        case 8378: return "shi"; // 栻
        case 8380: return "fu"; // 栿
        case 8382: return "ru"; // 桇
        case 8384: return "yi"; // 桋
        case 8386: return "ku"; // 桍
        case 8388: return "qiong"; // 桏
        case 8390: return "sang"; // 桒
        case 8392: return "xue"; // 桖
        case 8394: return "duo"; // 桗
        case 8396: return "chui"; // 桘
        case 8398: return "yu"; // 桙
        case 8400: return "za"; // 桚
        case 8402: return "ka"; // 桛
        case 8404: return "ying"; // 桜
        case 8406: return "jie"; // 桝
        case 8408: return "liu"; // 桞
        case 8410: return "zhan"; // 桟
        case 8412: return "xun"; // 桪
        case 8414: return "sa"; // 桬
        case 8416: return "zhen"; // 桭
        case 8418: return "bei"; // 桮
        case 8420: return "ying"; // 桯
        case 8422: return "kuo"; // 桰
        case 8424: return "jing"; // 桱
        case 8426: return "bo"; // 桲
        case 8428: return "ben"; // 桳
        case 8430: return "rui"; // 桵
        case 8432: return "xi"; // 桸
        case 8434: return "lang"; // 桹
        case 8436: return "liu"; // 桺
        case 8438: return "feng"; // 桻
        case 8440: return "qi"; // 桼
        case 8442: return "wen"; // 桽
        case 8444: return "jun"; // 桾
        case 8446: return "gan"; // 桿
        case 8448: return "yin"; // 梀
        case 8450: return "qiu"; // 梂
        case 8452: return "you"; // 梄
        case 8454: return "long"; // 梇
        case 8456: return "peng"; // 梈
        case 8458: return "zhuang"; // 梉
        case 8460: return "di"; // 梊
        case 8462: return "juan"; // 梋
        case 8464: return "tu"; // 梌
        case 8466: return "zao"; // 梍
        case 8468: return "ao"; // 梎
        case 8470: return "bi"; // 梐
        case 8472: return "di"; // 梑
        case 8474: return "han"; // 梒
        case 8476: return "zhi"; // 梔
        case 8478: return "ren"; // 梕
        case 8480: return "bei"; // 梖
        case 8482: return "jian"; // 梘
        case 8484: return "huan"; // 梙
        case 8486: return "wan"; // 梚
        case 8488: return "nuo"; // 梛
        case 8490: return "jia"; // 梜
        case 8492: return "tiao"; // 條
        case 8494: return "ji"; // 梞
        case 8496: return "xiao"; // 梟
        case 8498: return "lu"; // 梠
        case 8500: return "kuan"; // 梡
        case 8502: return "cen"; // 梣
        case 8504: return "fen"; // 梤
        case 8506: return "song"; // 梥
        case 8508: return "qi"; // 梩
        case 8510: return "dou"; // 梪
        case 8512: return "qin"; // 梫
        case 8514: return "ying"; // 梬
        case 8516: return "ju"; // 梮
        case 8518: return "hun"; // 梱
        case 8520: return "zhuo"; // 梲
        case 8522: return "chan"; // 梴
        case 8524: return "wei"; // 梶
        case 8526: return "jing"; // 梷
        case 8528: return "li"; // 梸
        case 8530: return ""; // 张
        case 8532: return "bing"; // 梹
        case 8534: return "xia"; // 梺
        case 8536: return "fo"; // 梻
        case 8538: return "tao"; // 梼
        case 8540: return "zhi"; // 梽
        case 8542: return "lai"; // 梾
        case 8544: return "lian"; // 梿
        case 8546: return "tuo"; // 棁
        case 8548: return "li"; // 棃
        case 8550: return "qi"; // 棄
        case 8552: return "bing"; // 棅
        case 8554: return "lun"; // 棆
        case 8556: return "cong"; // 棇
        case 8558: return "qian"; // 棈
        case 8560: return "qi"; // 棊
        case 8562: return "cai"; // 棌
        case 8564: return "chan"; // 棎
        case 8566: return "de"; // 棏
        case 8568: return "fei"; // 棐
        case 8570: return "bei"; // 棑
        case 8572: return "bang"; // 棓
        case 8574: return "hun"; // 棔
        case 8576: return "chang"; // 棖
        case 8578: return "zao"; // 棗
        case 8580: return "li"; // 棙
        case 8582: return "yu"; // 棛
        case 8584: return "yu"; // 棜
        case 8586: return "gu"; // 棝
        case 8588: return "gun"; // 棞
        case 8590: return "dong"; // 棟
        case 8592: return "gang"; // 棡
        case 8594: return "wang"; // 棢
        case 8596: return "cuo"; // 棤
        case 8598: return "fan"; // 棥
        case 8600: return "cheng"; // 棦
        case 8602: return "zhan"; // 棧
        case 8604: return "qi"; // 棨
        case 8606: return "yuan"; // 棩
        case 8608: return "yan"; // 棪
        case 8610: return "yu"; // 棫
        case 8612: return "juan"; // 棬
        case 8614: return "yi"; // 棭
        case 8616: return "shen"; // 棯
        case 8618: return "qi"; // 棲
        case 8620: return "zhuo"; // 棳
        case 8622: return "fu"; // 棴
        case 8624: return "lai"; // 棶
        case 8626: return "zou"; // 棷
        case 8628: return "zou"; // 棸
        case 8630: return "fen"; // 棻
        case 8632: return "chen"; // 棽
        case 8634: return "qing"; // 棾
        case 8636: return "ni"; // 棿
        case 8638: return "wan"; // 椀
        case 8640: return "lu"; // 椂
        case 8642: return "hao"; // 椃
        case 8644: return "jie"; // 椄
        case 8646: return "zhou"; // 椆
        case 8648: return "ju"; // 椇
        case 8650: return "ju"; // 椈
        case 8652: return "cheng"; // 椉
        case 8654: return "zuo"; // 椊
        case 8656: return "kong"; // 椌
        case 8658: return "ya"; // 椏
        case 8660: return "bei"; // 椑
        case 8662: return "zhuo"; // 椓
        case 8664: return "zi"; // 椔
        case 8666: return "bin"; // 椕
        case 8668: return "peng"; // 椖
        case 8670: return "ding"; // 椗
        case 8672: return "chu"; // 椘
        case 8674: return "chang"; // 椙
        case 8676: return "men"; // 椚
        case 8678: return "hua"; // 椛
        case 8680: return "jian"; // 検
        case 8682: return "gui"; // 椝
        case 8684: return "xi"; // 椞
        case 8686: return "dao"; // 椡
        case 8688: return "gui"; // 椢
        case 8690: return "dian"; // 椣
        case 8692: return "zhi"; // 椥
        case 8694: return "quan"; // 椦
        case 8696: return "mieng"; // 椧
        case 8698: return "fu"; // 椨
        case 8700: return "geng"; // 椩
        case 8702: return "peng"; // 椪
        case 8704: return "shan"; // 椫
        case 8706: return "yi"; // 椬
        case 8708: return "shen"; // 椮
        case 8710: return "duo"; // 椯
        case 8712: return "fu"; // 椱
        case 8714: return "wei"; // 椲
        case 8716: return "wei"; // 椳
        case 8718: return "jia"; // 椵
        case 8720: return "zong"; // 椶
        case 8722: return "han"; // 椷
        case 8724: return "yi"; // 椸
        case 8726: return "xi"; // 椺
        case 8728: return "ya"; // 椻
        case 8730: return "yan"; // 椼
        case 8732: return "jian"; // 椾
        case 8734: return "yu"; // 楀
        case 8736: return "he"; // 楁
        case 8738: return "wo"; // 楃
        case 8740: return "pian"; // 楄
        case 8742: return "bi"; // 楅
        case 8744: return "yao"; // 楆
        case 8746: return "guo"; // 楇
        case 8748: return "xu"; // 楈
        case 8750: return "ruo"; // 楉
        case 8752: return "yang"; // 楊
        case 8754: return "la"; // 楋
        case 8756: return "yan"; // 楌
        case 8758: return "ben"; // 楍
        case 8760: return "hui"; // 楎
        case 8762: return "kui"; // 楏
        case 8764: return "jie"; // 楐
        case 8766: return "kui"; // 楑
        case 8768: return "si"; // 楒
        case 8770: return "feng"; // 楓
        case 8772: return "tuo"; // 楕
        case 8774: return "ji"; // 楖
        case 8776: return "mu"; // 楘
        case 8778: return "mao"; // 楙
        case 8780: return "ku"; // 楛
        case 8782: return "hu"; // 楜
        case 8784: return "ting"; // 楟
        case 8786: return "yu"; // 楡
        case 8788: return "you"; // 楢
        case 8790: return "cong"; // 楤
        case 8792: return "yuan"; // 楥
        case 8794: return "yang"; // 楧
        case 8796: return "zhen"; // 楨
        case 8798: return "pian"; // 楩
        case 8800: return "ye"; // 楪
        case 8802: return "jie"; // 楬
        case 8804: return "ye"; // 業
        case 8806: return "dun"; // 楯
        case 8808: return "yu"; // 楰
        case 8810: return "wei"; // 楲
        case 8812: return "mei"; // 楳
        case 8814: return "ti"; // 楴
        case 8816: return "ji"; // 極
        case 8818: return "jie"; // 楶
        case 8820: return "rou"; // 楺
        case 8822: return "huang"; // 楻
        case 8824: return "le"; // 楽
        case 8826: return "quan"; // 楾
        case 8828: return "xiang"; // 楿
        case 8830: return "shi"; // 榁
        case 8832: return "tan"; // 榃
        case 8834: return "wen"; // 榅
        case 8836: return "shen"; // 榊
        case 8838: return "chu"; // 榋
        case 8840: return "pi"; // 榌
        case 8842: return "jia"; // 榎
        case 8844: return "yi"; // 榏
        case 8846: return "zhan"; // 榐
        case 8848: return "fu"; // 榑
        case 8850: return "nuo"; // 榒
        case 8852: return "mi"; // 榓
        case 8854: return "gu"; // 榖
        case 8856: return "jian"; // 榗
        case 8858: return "ta"; // 榙
        case 8860: return "yao"; // 榚
        case 8862: return "xie"; // 榝
        case 8864: return "yuan"; // 榞
        case 8866: return "zi"; // 榟
        case 8868: return "ming"; // 榠
        case 8870: return "su"; // 榡
        case 8872: return "jia"; // 榢
        case 8874: return "yao"; // 榣
        case 8876: return "jie"; // 榤
        case 8878: return "huang"; // 榥
        case 8880: return "han"; // 榦
        case 8882: return "qian"; // 榩
        case 8884: return "ma"; // 榪
        case 8886: return "yuan"; // 榬
        case 8888: return "rong"; // 榮
        case 8890: return "shi"; // 榯
        case 8892: return "zhi"; // 榰
        case 8894: return "wen"; // 榲
        case 8896: return "ting"; // 榳
        case 8898: return "rong"; // 榵
        case 8900: return "tang"; // 榶
        case 8902: return "zhai"; // 榸
        case 8904: return "si"; // 榹
        case 8906: return "sheng"; // 榺
        case 8908: return "ke"; // 榼
        case 8910: return "xi"; // 榽
        case 8912: return ""; // 张
        case 8914: return "gu"; // 榾
        case 8916: return "qi"; // 榿
        case 8918: return "gao"; // 槀
        case 8920: return "sun"; // 槂
        case 8922: return "pan"; // 槃
        case 8924: return "tao"; // 槄
        case 8926: return "ge"; // 槅
        case 8928: return "chun"; // 槆
        case 8930: return "dian"; // 槇
        case 8932: return "nou"; // 槈
        case 8934: return "ji"; // 槉
        case 8936: return "gou"; // 構
        case 8938: return "qiang"; // 槍
        case 8940: return "qian"; // 槏
        case 8942: return "mei"; // 槑
        case 8944: return "xu"; // 槒
        case 8946: return "gang"; // 槓
        case 8948: return "zhuo"; // 槕
        case 8950: return "tuo"; // 槖
        case 8952: return "qiao"; // 槗
        case 8954: return "yang"; // 様
        case 8956: return "dian"; // 槙
        case 8958: return "jia"; // 槚
        case 8960: return "zhi"; // 槜
        case 8962: return "dao"; // 槝
        case 8964: return "long"; // 槞
        case 8966: return "sang"; // 槡
        case 8968: return "die"; // 槢
        case 8970: return "gui"; // 槣
        case 8972: return "lian"; // 槤
        case 8974: return "hui"; // 槥
        case 8976: return "yong"; // 槦
        case 8978: return "qian"; // 槧
        case 8980: return "guo"; // 槨
        case 8982: return "gai"; // 槩
        case 8984: return "gai"; // 槪
        case 8986: return "tuan"; // 槫
        case 8988: return "hua"; // 槬
        case 8990: return "shen"; // 槮
        case 8992: return "zui"; // 槯
        case 8994: return "peng"; // 槰
        case 8996: return "you"; // 槱
        case 8998: return "jiang"; // 槳
        case 9000: return "hu"; // 槴
        case 9002: return "huan"; // 槵
        case 9004: return "gui"; // 槶
        case 9006: return "nie"; // 槷
        case 9008: return "yi"; // 槸
        case 9010: return "gao"; // 槹
        case 9012: return "kang"; // 槺
        case 9014: return "gui"; // 槻
        case 9016: return "gui"; // 槼
        case 9018: return "man"; // 槾
        case 9020: return "di"; // 樀
        case 9022: return "zhuang"; // 樁
        case 9024: return "le"; // 樂
        case 9026: return "lang"; // 樃
        case 9028: return "chen"; // 樄
        case 9030: return "cong"; // 樅
        case 9032: return "li"; // 樆
        case 9034: return "xiu"; // 樇
        case 9036: return "qing"; // 樈
        case 9038: return "shuang"; // 樉
        case 9040: return "tong"; // 樋
        case 9042: return "guan"; // 樌
        case 9044: return "ze"; // 樍
        case 9046: return "su"; // 樎
        case 9048: return "lei"; // 樏
        case 9050: return "lu"; // 樐
        case 9052: return "liang"; // 樑
        case 9054: return "mi"; // 樒
        case 9056: return "lou"; // 樓
        case 9058: return "chao"; // 樔
        case 9060: return "su"; // 樕
        case 9062: return "ke"; // 樖
        case 9064: return "biao"; // 標
        case 9066: return "du"; // 樚
        case 9068: return "liao"; // 樛
        case 9070: return "zhe"; // 樜
        case 9072: return "zha"; // 樝
        case 9074: return "shu"; // 樞
        case 9076: return "man"; // 樠
        case 9078: return "mu"; // 樢
        case 9080: return "yang"; // 樣
        case 9082: return "tiao"; // 樤
        case 9084: return "peng"; // 樥
        case 9086: return "zhu"; // 樦
        case 9088: return "sha"; // 樧
        case 9090: return "quan"; // 権
        case 9092: return "jian"; // 樫
        case 9094: return "cong"; // 樬
        case 9096: return "ji"; // 樭
        case 9098: return "yan"; // 樮
        case 9100: return "xue"; // 樰
        case 9102: return "er"; // 樲
        case 9104: return "xun"; // 樳
        case 9106: return "yi"; // 樴
        case 9108: return "zui"; // 樶
        case 9110: return "cong"; // 樷
        case 9112: return "pu"; // 樸
        case 9114: return "shu"; // 樹
        case 9116: return "hua"; // 樺
        case 9118: return "kui"; // 樻
        case 9120: return "zhen"; // 樼
        case 9122: return "shan"; // 樿
        case 9124: return "xi"; // 橀
        case 9126: return "chun"; // 橁
        case 9128: return "dian"; // 橂
        case 9130: return "fa"; // 橃
        case 9132: return "mo"; // 橅
        case 9134: return "wu"; // 橆
        case 9136: return "rao"; // 橈
        case 9138: return "lin"; // 橉
        case 9140: return "liu"; // 橊
        case 9142: return "qiao"; // 橋
        case 9144: return "jian"; // 橌
        case 9146: return "run"; // 橍
        case 9148: return "fan"; // 橎
        case 9150: return "jian"; // 橏
        case 9152: return "lao"; // 橑
        case 9154: return "yun"; // 橒
        case 9156: return "shun"; // 橓
        case 9158: return "dun"; // 橔
        case 9160: return "cheng"; // 橕
        case 9162: return "tang"; // 橖
        case 9164: return "meng"; // 橗
        case 9166: return "xiao"; // 橚
        case 9168: return "jue"; // 橜
        case 9170: return "dian"; // 橝
        case 9172: return "hui"; // 橞
        case 9174: return "ji"; // 機
        case 9176: return "nuo"; // 橠
        case 9178: return "duo"; // 橢
        case 9180: return "ning"; // 橣
        case 9182: return "rui"; // 橤
        case 9184: return "tong"; // 橦
        case 9186: return "zeng"; // 橧
        case 9188: return "fen"; // 橨
        case 9190: return "qiong"; // 橩
        case 9192: return "yan"; // 橪
        case 9194: return "heng"; // 橫
        case 9196: return "qian"; // 橬
        case 9198: return "gu"; // 橭
        case 9200: return "liu"; // 橮
        case 9202: return "lao"; // 橯
        case 9204: return "gao"; // 橰
        case 9206: return "xi"; // 橲
        case 9208: return "sheng"; // 橳
        case 9210: return "zi"; // 橴
        case 9212: return "san"; // 橵
        case 9214: return "ji"; // 橶
        case 9216: return "dou"; // 橷
        case 9218: return "jing"; // 橸
        case 9220: return "jian"; // 橺
        case 9222: return "chu"; // 橻
        case 9224: return "da"; // 橽
        case 9226: return "qiao"; // 橾
        case 9228: return "jiang"; // 橿
        case 9230: return "lin"; // 檁
        case 9232: return "nao"; // 檂
        case 9234: return "yin"; // 檃
        case 9236: return "hui"; // 檅
        case 9238: return "shan"; // 檆
        case 9240: return "zui"; // 檇
        case 9242: return "xuan"; // 檈
        case 9244: return "cheng"; // 檉
        case 9246: return "gan"; // 檊
        case 9248: return "ju"; // 檋
        case 9250: return "zui"; // 檌
        case 9252: return "yi"; // 檍
        case 9254: return "pu"; // 檏
        case 9256: return "feng"; // 檒
        case 9258: return "hui"; // 檓
        case 9260: return "dang"; // 檔
        case 9262: return "ji"; // 檕
        case 9264: return "sui"; // 檖
        case 9266: return "bo"; // 檘
        case 9268: return "cheng"; // 檙
        case 9270: return "chu"; // 檚
        case 9272: return "zhua"; // 檛
        case 9274: return "gui"; // 檜
        case 9276: return "ji"; // 檝
        case 9278: return "jie"; // 檞
        case 9280: return "jia"; // 檟
        case 9282: return "zhai"; // 檡
        case 9284: return "jian"; // 檢
        case 9286: return "qiang"; // 檣
        case 9288: return "dao"; // 檤
        case 9290: return "yi"; // 檥
        case 9292: return "biao"; // 檦
        case 9294: return ""; // 张
        case 9296: return "song"; // 檧
        case 9298: return "she"; // 檨
        case 9300: return "li"; // 檪
        case 9302: return "yin"; // 檭
        case 9304: return "tao"; // 檮
        case 9306: return "tai"; // 檯
        case 9308: return "mian"; // 檰
        case 9310: return "qi"; // 檱
        case 9312: return "tuan"; // 檲
        case 9314: return "bin"; // 檳
        case 9316: return "hua"; // 檴
        case 9318: return "ji"; // 檵
        case 9320: return "qian"; // 檶
        case 9322: return "mi"; // 檷
        case 9324: return "ning"; // 檸
        case 9326: return "yi"; // 檹
        case 9328: return "gao"; // 檺
        case 9330: return "kan"; // 檻
        case 9332: return "yin"; // 檼
        case 9334: return "nou"; // 檽
        case 9336: return "qing"; // 檾
        case 9338: return "yan"; // 檿
        case 9340: return "qi"; // 櫀
        case 9342: return "mi"; // 櫁
        case 9344: return "zhao"; // 櫂
        case 9346: return "gui"; // 櫃
        case 9348: return "chun"; // 櫄
        case 9350: return "ji"; // 櫅
        case 9352: return "kui"; // 櫆
        case 9354: return "po"; // 櫇
        case 9356: return "deng"; // 櫈
        case 9358: return "chu"; // 櫉
        case 9360: return "ge"; // 櫊
        case 9362: return "mian"; // 櫋
        case 9364: return "you"; // 櫌
        case 9366: return "zhi"; // 櫍
        case 9368: return "guang"; // 櫎
        case 9370: return "qian"; // 櫏
        case 9372: return "lei"; // 櫐
        case 9374: return "lei"; // 櫑
        case 9376: return "sa"; // 櫒
        case 9378: return "lu"; // 櫓
        case 9380: return "li"; // 櫔
        case 9382: return "cuan"; // 櫕
        case 9384: return "lu"; // 櫖
        case 9386: return "mei"; // 櫗
        case 9388: return "hui"; // 櫘
        case 9390: return "ou"; // 櫙
        case 9392: return "lu"; // 櫚
        case 9394: return "zhi"; // 櫛
        case 9396: return "gao"; // 櫜
        case 9398: return "du"; // 櫝
        case 9400: return "yuan"; // 櫞
        case 9402: return "li"; // 櫟
        case 9404: return "fei"; // 櫠
        case 9406: return "zhu"; // 櫡
        case 9408: return "sou"; // 櫢
        case 9410: return "lian"; // 櫣
        case 9412: return "jiang"; // 櫤
        case 9414: return "chu"; // 櫥
        case 9416: return "qing"; // 櫦
        case 9418: return "zhu"; // 櫧
        case 9420: return "lu"; // 櫨
        case 9422: return "yan"; // 櫩
        case 9424: return "li"; // 櫪
        case 9426: return "zhu"; // 櫫
        case 9428: return "qin"; // 櫬
        case 9430: return "ji"; // 櫭
        case 9432: return "e"; // 櫮
        case 9434: return "su"; // 櫯
        case 9436: return "gui"; // 櫰
        case 9438: return "nie"; // 櫱
        case 9440: return "yu"; // 櫲
        case 9442: return "long"; // 櫳
        case 9444: return "la"; // 櫴
        case 9446: return "jiao"; // 櫵
        case 9448: return "xian"; // 櫶
        case 9450: return "gui"; // 櫷
        case 9452: return "ju"; // 櫸
        case 9454: return "qiu"; // 櫹
        case 9456: return "ling"; // 櫺
        case 9458: return "ying"; // 櫻
        case 9460: return "jian"; // 櫼
        case 9462: return "yin"; // 櫽
        case 9464: return "you"; // 櫾
        case 9466: return "ying"; // 櫿
        case 9468: return "xiang"; // 欀
        case 9470: return "nong"; // 欁
        case 9472: return "bo"; // 欂
        case 9474: return "zhan"; // 欃
        case 9476: return "lan"; // 欄
        case 9478: return "ju"; // 欅
        case 9480: return "shuang"; // 欆
        case 9482: return "she"; // 欇
        case 9484: return "wei"; // 欈
        case 9486: return "cong"; // 欉
        case 9488: return "quan"; // 權
        case 9490: return "qu"; // 欋
        case 9492: return "cang"; // 欌
        case 9494: return "jou"; // 欍
        case 9496: return "yu"; // 欎
        case 9498: return "luo"; // 欏
        case 9500: return "li"; // 欐
        case 9502: return "zuan"; // 欑
        case 9504: return "luan"; // 欒
        case 9506: return "dang"; // 欓
        case 9508: return "jue"; // 欔
        case 9510: return "yan"; // 欕
        case 9512: return "lan"; // 欖
        case 9514: return "lan"; // 欗
        case 9516: return "zhu"; // 欘
        case 9518: return "lei"; // 欙
        case 9520: return "li"; // 欚
        case 9522: return "ba"; // 欛
        case 9524: return "nang"; // 欜
        case 9526: return "yu"; // 欝
        case 9528: return "ling"; // 欞
        case 9530: return "guang"; // 欟
        case 9532: return "yi"; // 欥
        case 9534: return "han"; // 欦
        case 9536: return "xu"; // 欨
        case 9538: return "chao"; // 欩
        case 9540: return "xi"; // 欪
        case 9542: return "qi"; // 欫
        case 9544: return "ai"; // 欬
        case 9546: return "yi"; // 欭
        case 9548: return "jue"; // 欮
        case 9550: return "kai"; // 欯
        case 9552: return "xu"; // 欰
        case 9554: return "he"; // 欱
        case 9556: return "kui"; // 欳
        case 9558: return "lang"; // 欴
        case 9560: return "kuan"; // 欵
        case 9562: return "shuo"; // 欶
        case 9564: return "e"; // 欸
        case 9566: return "xu"; // 欻
        case 9568: return "chi"; // 欼
        case 9570: return "qin"; // 欽
        case 9572: return "kan"; // 欿
        case 9574: return "kuan"; // 歀
        case 9576: return "ke"; // 歁
        case 9578: return "chuan"; // 歂
        case 9580: return "gua"; // 歄
        case 9582: return "yin"; // 歅
        case 9584: return "yu"; // 歈
        case 9586: return "xiao"; // 歊
        case 9588: return "ye"; // 歋
        case 9590: return "yang"; // 歍
        case 9592: return "tan"; // 歎
        case 9594: return "jin"; // 歏
        case 9596: return "ou"; // 歐
        case 9598: return "hu"; // 歑
        case 9600: return "ti"; // 歒
        case 9602: return "huan"; // 歓
        case 9604: return "xu"; // 歔
        case 9606: return "pen"; // 歕
        case 9608: return "yi"; // 歖
        case 9610: return "chi"; // 歗
        case 9612: return "xu"; // 歘
        case 9614: return "shan"; // 歚
        case 9616: return "lian"; // 歛
        case 9618: return "chu"; // 歜
        case 9620: return "yi"; // 歝
        case 9622: return "e"; // 歞
        case 9624: return "yu"; // 歟
        case 9626: return "chuo"; // 歠
        case 9628: return "huan"; // 歡
        case 9630: return "bu"; // 歨
        case 9632: return "bu"; // 歩
        case 9634: return "ju"; // 歫
        case 9636: return "qian"; // 歬
        case 9638: return "zhi"; // 歭
        case 9640: return "se"; // 歮
        case 9642: return "chi"; // 歯
        case 9644: return "se"; // 歰
        case 9646: return "zhong"; // 歱
        case 9648: return "sui"; // 歲
        case 9650: return "sui"; // 歳
        case 9652: return "li"; // 歴
        case 9654: return "ze"; // 歵
        case 9656: return "yu"; // 歶
        case 9658: return "li"; // 歷
        case 9660: return "gui"; // 歸
        case 9662: return "e"; // 歺
        case 9664: return "zhe"; // 歽
        case 9666: return "wen"; // 歾
        case 9668: return "mo"; // 歿
        case 9670: return "yao"; // 殀
        case 9672: return "sheng"; // 殅
        case 9674: return "xu"; // 殈
        case 9676: return ""; // 张
        case 9678: return "jue"; // 殌
        case 9680: return "qia"; // 殎
        case 9682: return "qiu"; // 殏
        case 9684: return "su"; // 殐
        case 9686: return "qing"; // 殑
        case 9688: return "yi"; // 殔
        case 9690: return "ye"; // 殕
        case 9692: return "ye"; // 殗
        case 9694: return "can"; // 殘
        case 9696: return "men"; // 殙
        case 9698: return "die"; // 殜
        case 9700: return "zhen"; // 殝
        case 9702: return "yun"; // 殞
        case 9704: return "wen"; // 殟
        case 9706: return "chou"; // 殠
        case 9708: return "ti"; // 殢
        case 9710: return "jin"; // 殣
        case 9712: return "shang"; // 殤
        case 9714: return "yin"; // 殥
        case 9716: return "diao"; // 殦
        case 9718: return "jiu"; // 殧
        case 9720: return "kui"; // 殨
        case 9722: return "cuan"; // 殩
        case 9724: return "dan"; // 殫
        case 9726: return "du"; // 殬
        case 9728: return "jiang"; // 殭
        case 9730: return "lian"; // 殮
        case 9732: return "bin"; // 殯
        case 9734: return "du"; // 殰
        case 9736: return "jian"; // 殱
        case 9738: return "jian"; // 殲
        case 9740: return "zhu"; // 殶
        case 9742: return "keng"; // 殸
        case 9744: return "yi"; // 殹
        case 9746: return "sha"; // 殺
        case 9748: return "que"; // 殻
        case 9750: return "ke"; // 殼
        case 9752: return "yao"; // 殽
        case 9754: return "xun"; // 殾
        case 9756: return "hui"; // 毀
        case 9758: return "qiao"; // 毃
        case 9760: return "ji"; // 毄
        case 9762: return "ou"; // 毆
        case 9764: return "hui"; // 毇
        case 9766: return "duan"; // 毈
        case 9768: return "yi"; // 毉
        case 9770: return "xiao"; // 毊
        case 9772: return "guan"; // 毌
        case 9774: return "mei"; // 毎
        case 9776: return "ai"; // 毐
        case 9778: return "jie"; // 毑
        case 9780: return "pi"; // 毘
        case 9782: return "chan"; // 毚
        case 9784: return "hao"; // 毜
        case 9786: return "cai"; // 毝
        case 9788: return "pi"; // 毞
        case 9790: return "lie"; // 毟
        case 9792: return "jia"; // 毠
        case 9794: return "sai"; // 毢
        case 9796: return "mao"; // 毣
        case 9798: return "tuo"; // 毤
        case 9800: return "xun"; // 毥
        case 9802: return "er"; // 毦
        case 9804: return "rong"; // 毧
        case 9806: return "xian"; // 毨
        case 9808: return "ju"; // 毩
        case 9810: return "qiu"; // 毬
        case 9812: return "dou"; // 毭
        case 9814: return "sha"; // 毮
        case 9816: return "pei"; // 毰
        case 9818: return "ju"; // 毱
        case 9820: return "duo"; // 毲
        case 9822: return "bi"; // 毴
        case 9824: return "san"; // 毶
        case 9826: return "mao"; // 毷
        case 9828: return "sai"; // 毸
        case 9830: return "shu"; // 毺
        case 9832: return "tuo"; // 毻
        case 9834: return "ke"; // 毼
        case 9836: return "ta"; // 毾
        case 9838: return "san"; // 毿
        case 9840: return "lu"; // 氀
        case 9842: return "mu"; // 氁
        case 9844: return "li"; // 氂
        case 9846: return "tong"; // 氃
        case 9848: return "rong"; // 氄
        case 9850: return "zhan"; // 氈
        case 9852: return "sao"; // 氉
        case 9854: return "zhan"; // 氊
        case 9856: return "meng"; // 氋
        case 9858: return "lu"; // 氌
        case 9860: return "die"; // 氎
        case 9862: return "jue"; // 氒
        case 9864: return "qi"; // 気
        case 9866: return "yang"; // 氜
        case 9868: return "nei"; // 氝
        case 9870: return "bin"; // 氞
        case 9872: return "shen"; // 氠
        case 9874: return "qi"; // 氣
        case 9876: return "xi"; // 氥
        case 9878: return "qing"; // 氫
        case 9880: return "ya"; // 氬
        case 9882: return "dong"; // 氭
        case 9884: return "yang"; // 氱
        case 9886: return "yun"; // 氳
        case 9888: return "zheng"; // 氶
        case 9890: return "bing"; // 氷
        case 9892: return "dang"; // 氹
        case 9894: return "shui"; // 氺
        case 9896: return "le"; // 氻
        case 9898: return "mei"; // 氼
        case 9900: return "fan"; // 氾
        case 9902: return "gui"; // 氿
        case 9904: return "bin"; // 汃
        case 9906: return "ze"; // 汄
        case 9908: return "mian"; // 汅
        case 9910: return "diao"; // 汈
        case 9912: return "yue"; // 汋
        case 9914: return "chuan"; // 汌
        case 9916: return "wan"; // 汍
        case 9918: return "fa"; // 汎
        case 9920: return "da"; // 汏
        case 9922: return "tuo"; // 汑
        case 9924: return "mang"; // 汒
        case 9926: return "you"; // 汓
        case 9928: return "pin"; // 汖
        case 9930: return "qian"; // 汘
        case 9932: return "yu"; // 汙
        case 9934: return "yu"; // 汚
        case 9936: return "tu"; // 汢
        case 9938: return "jiu"; // 汣
        case 9940: return "ji"; // 汥
        case 9942: return "zhi"; // 汦
        case 9944: return "qian"; // 汧
        case 9946: return "jing"; // 汫
        case 9948: return "jing"; // 汬
        case 9950: return "tun"; // 汭
        case 9952: return "jun1      "; // 汮
        case 9954: return "hong"; // 汯
        case 9956: return "fu"; // 汱
        case 9958: return "bian"; // 汳
        case 9960: return "gan"; // 汵
        case 9962: return "zhong"; // 汷
        case 9964: return "pang"; // 汸
        case 9966: return "jue"; // 決
        case 9968: return "hu"; // 汻
        case 9970: return "you"; // 汼
        case 9972: return "xu"; // 汿
        case 9974: return "xu"; // 沀
        case 9976: return "yun"; // 沄
        case 9978: return "yan"; // 沇
        case 9980: return "dan"; // 沊
        case 9982: return "you"; // 沋
        case 9984: return "hu"; // 沍
        case 9986: return "huo"; // 沎
        case 9988: return "niu"; // 沑
        case 9990: return "mei"; // 沒
        case 9992: return "mi"; // 沕
        case 9994: return "chong"; // 沖
        case 9996: return "pang"; // 沗
        case 9998: return "bi"; // 沘
        case 10000: return "zhi"; // 沚
        case 10002: return "pan"; // 沜
        case 10004: return "zhui"; // 沝
        case 10006: return "za"; // 沞
        case 10008: return "liu"; // 沠
        case 10010: return "ze"; // 沢
        case 10012: return "feng"; // 沨
        case 10014: return "mei"; // 沬
        case 10016: return "za"; // 沯
        case 10018: return "duo"; // 沰
        case 10020: return "li"; // 沴
        case 10022: return "mi"; // 沵
        case 10024: return "yi"; // 沶
        case 10026: return "fa"; // 沷
        case 10028: return "tian"; // 沺
        case 10030: return "si"; // 泀
        case 10032: return "kuang"; // 況
        case 10034: return "ying"; // 泂
        case 10036: return "gou"; // 泃
        case 10038: return "yi"; // 泆
        case 10040: return "jia"; // 泇
        case 10042: return "you"; // 泈
        case 10044: return "hui"; // 泋
        case 10046: return "ben"; // 泍
        case 10048: return "ze"; // 泎
        case 10050: return "ku"; // 泏
        case 10052: return "ao"; // 泑
        case 10054: return "gu"; // 泒
        case 10056: return "hu"; // 泘
        case 10058: return "zhang"; // 张
        case 10060: return "peng"; // 泙
        case 10062: return "zi"; // 泚
        case 10064: return "di"; // 泜
        case 10066: return "su"; // 泝
        case 10068: return "cheng"; // 泟
        case 10070: return "si"; // 泤
        case 10072: return "ju"; // 泦
        case 10074: return "xue"; // 泧
        case 10076: return "sheng"; // 泩
        case 10078: return "jue"; // 泬
        case 10080: return "fu"; // 泭
        case 10082: return "ji"; // 泲
        case 10084: return "guan"; // 泴
        case 10086: return "dan"; // 泹
        case 10088: return "yin"; // 泿
        case 10090: return "pan"; // 洀
        case 10092: return "ye"; // 洂
        case 10094: return "hui"; // 洃
        case 10096: return "zai"; // 洅
        case 10098: return "cheng"; // 洆
        case 10100: return "wei"; // 洈
        case 10102: return "hou"; // 洉
        case 10104: return "jian"; // 洊
        case 10106: return "si"; // 洍
        case 10108: return "er"; // 洏
        case 10110: return "xing"; // 洐
        case 10112: return "fu"; // 洑
        case 10114: return "qi"; // 洓
        case 10116: return "zhi"; // 洔
        case 10118: return "yin"; // 洕
        case 10120: return "wu"; // 洖
        case 10122: return "kao"; // 洘
        case 10124: return "luo"; // 洜
        case 10126: return "an"; // 洝
        case 10128: return "ti"; // 洟
        case 10130: return "mou"; // 洠
        case 10132: return "lei"; // 洡
        case 10134: return "yi"; // 洢
        case 10136: return "mi"; // 洣
        case 10138: return "quan"; // 洤
        case 10140: return "po"; // 洦
        case 10142: return "xiao"; // 洨
        case 10144: return "xie"; // 洩
        case 10146: return "shuo"; // 洬
        case 10148: return "kuang"; // 洭
        case 10150: return "jie"; // 洯
        case 10152: return "ju"; // 洰
        case 10154: return "ping"; // 洴
        case 10156: return "xiong"; // 洶
        case 10158: return "zhi"; // 洷
        case 10160: return "guang"; // 洸
        case 10162: return "ming"; // 洺
        case 10164: return "wu"; // 洿
        case 10166: return "qu"; // 浀
        case 10168: return "yi"; // 浂
        case 10170: return "jing"; // 浄
        case 10172: return "shi"; // 浉
        case 10174: return "peol"; // 浌
        case 10176: return "chan"; // 浐
        case 10178: return "jin"; // 浕
        case 10180: return "lie"; // 浖
        case 10182: return "qiu"; // 浗
        case 10184: return "wei"; // 浘
        case 10186: return "han"; // 浛
        case 10188: return "mang"; // 浝
        case 10190: return "you"; // 浟
        case 10192: return "bo"; // 浡
        case 10194: return "dou"; // 浢
        case 10196: return "hong"; // 浤
        case 10198: return "yi"; // 浥
        case 10200: return "ying"; // 浧
        case 10202: return "lan"; // 浨
        case 10204: return "han"; // 浫
        case 10206: return "li"; // 浬
        case 10208: return "geng"; // 浭
        case 10210: return "lian"; // 浰
        case 10212: return "chun"; // 浱
        case 10214: return "feng"; // 浲
        case 10216: return "yi"; // 浳
        case 10218: return "tong"; // 浵
        case 10220: return "lao"; // 浶
        case 10222: return "jia"; // 浹
        case 10224: return "chong"; // 浺
        case 10226: return "jiong"; // 浻
        case 10228: return "nei"; // 浽
        case 10230: return "cheng"; // 浾
        case 10232: return "pei"; // 浿
        case 10234: return "jian"; // 涀
        case 10236: return "lin"; // 涁
        case 10238: return "kun"; // 涃
        case 10240: return "ping"; // 涄
        case 10242: return "han"; // 涆
        case 10244: return "jing"; // 涇
        case 10246: return "nian"; // 涊
        case 10248: return "tu"; // 涋
        case 10250: return "xiao"; // 涍
        case 10252: return "ting"; // 涏
        case 10254: return "e"; // 涐
        case 10256: return "yun"; // 涒
        case 10258: return "li"; // 涖
        case 10260: return "shui"; // 涗
        case 10262: return "si"; // 涘
        case 10264: return "lei"; // 涙
        case 10266: return "shui"; // 涚
        case 10268: return "du"; // 涜
        case 10270: return "yun"; // 涢
        case 10272: return "heng"; // 涥
        case 10274: return "xing"; // 涬
        case 10276: return "tao"; // 涭
        case 10278: return "chuo"; // 涰
        case 10280: return "zhang"; // 涱
        case 10282: return "nang"; // 涳
        case 10284: return "wo"; // 涴
        case 10286: return "tuo"; // 涶
        case 10288: return "dong"; // 涷
        case 10290: return "wo"; // 涹
        case 10292: return "ju"; // 涺
        case 10294: return "she"; // 涻
        case 10296: return "liang"; // 涼
        case 10298: return "hun"; // 涽
        case 10300: return "ta"; // 涾
        case 10302: return "ji"; // 淁
        case 10304: return "de"; // 淂
        case 10306: return "juan"; // 淃
        case 10308: return "gu"; // 淈
        case 10310: return "guo"; // 淉
        case 10312: return "yan"; // 淊
        case 10314: return "diao"; // 淍
        case 10316: return "peng"; // 淎
        case 10318: return "hao"; // 淏
        case 10320: return "chang"; // 淐
        case 10322: return "qi"; // 淒
        case 10324: return "fang"; // 淓
        case 10326: return "chi"; // 淔
        case 10328: return "lu"; // 淕
        case 10330: return "ju"; // 淗
        case 10332: return "lei"; // 淚
        case 10334: return "zhe"; // 淛
        case 10336: return "peng"; // 淜
        case 10338: return "tian"; // 淟
        case 10340: return "yu"; // 淢
        case 10342: return "ni"; // 淣
        case 10344: return "lu"; // 淥
        case 10346: return "mi"; // 淧
        case 10348: return "jing"; // 淨
        case 10350: return "ling"; // 淩
        case 10352: return "lun"; // 淪
        case 10354: return "qu"; // 淭
        case 10356: return "yu"; // 淯
        case 10358: return "nian"; // 淰
        case 10360: return "biao"; // 淲
        case 10362: return "hu"; // 淴
        case 10364: return "yuan"; // 淵
        case 10366: return "lai"; // 淶
        case 10368: return "qing"; // 淸
        case 10370: return "qian"; // 淺
        case 10372: return "zhi"; // 淽
        case 10374: return "yin"; // 淾
        case 10376: return "bo"; // 淿
        case 10378: return "ben"; // 渀
        case 10380: return "yuan"; // 渁
        case 10382: return "wen"; // 渂
        case 10384: return "re"; // 渃
        case 10386: return "fei"; // 渄
        case 10388: return "yuan"; // 渆
        case 10390: return "ke"; // 渇
        case 10392: return "ji"; // 済
        case 10394: return "die"; // 渉
        case 10396: return "se"; // 渋
        case 10398: return "qi"; // 渏
        case 10400: return "pi"; // 渒
        case 10402: return "xi"; // 渓
        case 10404: return "yuan"; // 渕
        case 10406: return "rou"; // 渘
        case 10408: return "huan"; // 渙
        case 10410: return "jian"; // 減
        case 10412: return "nuan"; // 渜
        case 10414: return "wu"; // 渞
        case 10416: return "ting"; // 渟
        case 10418: return "fan"; // 渢
        case 10420: return "wo"; // 渦
        case 10422: return "di"; // 渧
        case 10424: return "wei"; // 渨
        case 10426: return "ru"; // 渪
        case 10428: return "ce"; // 測
        case 10430: return "he"; // 渮
        case 10432: return "yan"; // 渰
        case 10434: return "gong"; // 渱
        case 10436: return "mi"; // 渳
        case 10438: return "mao"; // 渵
        case 10440: return "zhang"; // 张
        case 10442: return "ying"; // 渶
        case 10444: return "yan"; // 渷
        case 10446: return "hong"; // 渹
        case 10448: return "sheng"; // 渻
        case 10450: return "mei"; // 渼
        case 10452: return "zai"; // 渽
        case 10454: return "hun"; // 渾
        case 10456: return "nai"; // 渿
        case 10458: return "gui"; // 湀
        case 10460: return "chi"; // 湁
        case 10462: return "e"; // 湂
        case 10464: return "lan"; // 湅
        case 10466: return "qi"; // 湆
        case 10468: return "qi"; // 湇
        case 10470: return "mei"; // 湈
        case 10472: return "tian"; // 湉
        case 10474: return "cou"; // 湊
        case 10476: return "wei"; // 湋
        case 10478: return "can"; // 湌
        case 10480: return "min"; // 湏
        case 10482: return "bo"; // 湐
        case 10484: return "xu"; // 湑
        case 10486: return "ji"; // 湒
        case 10488: return "jian"; // 湕
        case 10490: return "feng"; // 湗
        case 10492: return "yi"; // 湙
        case 10494: return "yin"; // 湚
        case 10496: return "shi"; // 湜
        case 10498: return "jie"; // 湝
        case 10500: return "zhen"; // 湞
        case 10502: return "tan"; // 湠
        case 10504: return "yu"; // 湡
        case 10506: return "bi"; // 湢
        case 10508: return "min"; // 湣
        case 10510: return "shi"; // 湤
        case 10512: return "tu"; // 湥
        case 10514: return "sheng"; // 湦
        case 10516: return "yong"; // 湧
        case 10518: return "ju"; // 湨
        case 10520: return "dong"; // 湩
        case 10522: return "tuan"; // 湪
        case 10524: return "jiao"; // 湬
        case 10526: return "qiu"; // 湭
        case 10528: return "tang"; // 湯
        case 10530: return "long"; // 湰
        case 10532: return "huo"; // 湱
        case 10534: return "yuan"; // 湲
        case 10536: return "nan"; // 湳
        case 10538: return "ban"; // 湴
        case 10540: return "you"; // 湵
        case 10542: return "quan"; // 湶
        case 10544: return "hun"; // 湷
        case 10546: return "liang"; // 湸
        case 10548: return "chan"; // 湹
        case 10550: return "yan"; // 湺
        case 10552: return "zhun"; // 湻
        case 10554: return "he"; // 湼
        case 10556: return "zi"; // 湽
        case 10558: return "man"; // 満
        case 10560: return "ying"; // 溁
        case 10562: return "la"; // 溂
        case 10564: return "feng"; // 溄
        case 10566: return "lou"; // 溇
        case 10568: return "wei"; // 溈
        case 10570: return "xia"; // 溊
        case 10572: return "ying"; // 溋
        case 10574: return "po"; // 溌
        case 10576: return "jin"; // 溍
        case 10578: return "yan"; // 溎
        case 10580: return "suo"; // 溑
        case 10582: return "yuan"; // 溒
        case 10584: return "lian"; // 溓
        case 10586: return "yao"; // 溔
        case 10588: return "meng"; // 溕
        case 10590: return "zhun"; // 準
        case 10592: return "cheng"; // 溗
        case 10594: return "tai"; // 溙
        case 10596: return "da"; // 溚
        case 10598: return "wa"; // 溛
        case 10600: return "gou"; // 溝
        case 10602: return "sao"; // 溞
        case 10604: return "zha"; // 溠
        case 10606: return "shi"; // 溡
        case 10608: return "lun"; // 溣
        case 10610: return "ma"; // 溤
        case 10612: return "wei"; // 溦
        case 10614: return "zai"; // 溨
        case 10616: return "wu"; // 溩
        case 10618: return "wen"; // 溫
        case 10620: return "qiang"; // 溬
        case 10622: return "ze"; // 溭
        case 10624: return "shi"; // 溮
        case 10626: return "ai"; // 溰
        case 10628: return "yun"; // 溳
        case 10630: return "yin"; // 溵
        case 10632: return "su"; // 溸
        case 10634: return "se"; // 溹
        case 10636: return "shi"; // 溼
        case 10638: return "ai"; // 溾
        case 10640: return "pan"; // 溿
        case 10642: return "xu"; // 滀
        case 10644: return "weng"; // 滃
        case 10646: return "cang"; // 滄
        case 10648: return "mie"; // 滅
        case 10650: return "ge"; // 滆
        case 10652: return "hao"; // 滈
        case 10654: return "huang"; // 滉
        case 10656: return "xi"; // 滊
        case 10658: return "di"; // 滌
        case 10660: return "zhi"; // 滍
        case 10662: return "ying"; // 滎
        case 10664: return "jie"; // 滐
        case 10666: return "ge"; // 滒
        case 10668: return "sui"; // 滖
        case 10670: return "jiao"; // 滘
        case 10672: return "hui"; // 滙
        case 10674: return "yin"; // 滛
        case 10676: return "gao"; // 滜
        case 10678: return "long"; // 滝
        case 10680: return "chun"; // 滣
        case 10682: return "xiao"; // 滧
        case 10684: return "yu"; // 滪
        case 10686: return "xiu"; // 滫
        case 10688: return "hu"; // 滬
        case 10690: return "bi"; // 滭
        case 10692: return "biao"; // 滮
        case 10694: return "zhi"; // 滯
        case 10696: return "jiang"; // 滰
        case 10698: return "kou"; // 滱
        case 10700: return "shen"; // 滲
        case 10702: return "shang"; // 滳
        case 10704: return "mi"; // 滵
        case 10706: return "ao"; // 滶
        case 10708: return "lu"; // 滷
        case 10710: return "hu"; // 滸
        case 10712: return "you"; // 滺
        case 10714: return "chan"; // 滻
        case 10716: return "fan"; // 滼
        case 10718: return "yong"; // 滽
        case 10720: return "gun"; // 滾
        case 10722: return "man"; // 滿
        case 10724: return "qing"; // 漀
        case 10726: return "yu"; // 漁
        case 10728: return "ji"; // 漃
        case 10730: return "ya"; // 漄
        case 10732: return "chao"; // 漅
        case 10734: return "xi"; // 漇
        case 10736: return "ji"; // 漈
        case 10738: return "lou"; // 漊
        case 10740: return "long"; // 漋
        case 10742: return "jin"; // 漌
        case 10744: return "guo"; // 漍
        case 10746: return "cong"; // 漎
        case 10748: return "zhi"; // 漐
        case 10750: return "gai"; // 漑
        case 10752: return "qiang"; // 漒
        case 10754: return "jiao"; // 漖
        case 10756: return "cong"; // 漗
        case 10758: return "chun"; // 漘
        case 10760: return "tuan"; // 漙
        case 10762: return "ou"; // 漚
        case 10764: return "teng"; // 漛
        case 10766: return "ye"; // 漜
        case 10768: return "xi"; // 漝
        case 10770: return "mi"; // 漞
        case 10772: return "tang"; // 漟
        case 10774: return "tang"; // 漡
        case 10776: return "han"; // 漢
        case 10778: return "lian"; // 漣
        case 10780: return "wa"; // 漥
        case 10782: return "tai"; // 漦
        case 10784: return "gan"; // 漧
        case 10786: return "peng"; // 漨
        case 10788: return "zi"; // 漬
        case 10790: return "kang"; // 漮
        case 10792: return "peng"; // 漰
        case 10794: return "zhang"; // 漲
        case 10796: return "zhuan"; // 漴
        case 10798: return "xu"; // 漵
        case 10800: return "kuo"; // 漷
        case 10802: return "jian"; // 漸
        case 10804: return "yan"; // 漹
        case 10806: return "chuan"; // 漺
        case 10808: return "liao"; // 漻
        case 10810: return "cui"; // 漼
        case 10812: return "ti"; // 漽
        case 10814: return "jiang"; // 漿
        case 10816: return "zong"; // 潀
        case 10818: return "ying"; // 潁
        case 10820: return "hong"; // 潂
        case 10822: return "zhang"; // 张
        case 10824: return "xin"; // 潃
        case 10826: return "shu"; // 潄
        case 10828: return "guan"; // 潅
        case 10830: return "zong"; // 潈
        case 10832: return "kun"; // 潉
        case 10834: return "xu"; // 潊
        case 10836: return "zhi"; // 潌
        case 10838: return "pi"; // 潎
        case 10840: return "jue"; // 潏
        case 10842: return "jiao"; // 潐
        case 10844: return "po"; // 潑
        case 10846: return "dang"; // 潒
        case 10848: return "hui"; // 潓
        case 10850: return "jie"; // 潔
        case 10852: return "wu"; // 潕
        case 10854: return "pa"; // 潖
        case 10856: return "ji"; // 潗
        case 10858: return "gui"; // 潙
        case 10860: return "xiao"; // 潚
        case 10862: return "qian"; // 潛
        case 10864: return "ya"; // 潝
        case 10866: return "xi"; // 潟
        case 10868: return "sun"; // 潠
        case 10870: return "dun"; // 潡
        case 10872: return "min"; // 潣
        case 10874: return "run"; // 潤
        case 10876: return "su"; // 潥
        case 10878: return "zhen"; // 潧
        case 10880: return "zong"; // 潨
        case 10882: return "yi"; // 潩
        case 10884: return "zhi"; // 潪
        case 10886: return "wan"; // 潫
        case 10888: return "tan"; // 潬
        case 10890: return "xun"; // 潯
        case 10892: return "kui"; // 潰
        case 10894: return "ye"; // 潱
        case 10896: return "tu"; // 潳
        case 10898: return "san"; // 潵
        case 10900: return "hei"; // 潶
        case 10902: return "bi"; // 潷
        case 10904: return "chan"; // 潹
        case 10906: return "shu"; // 潻
        case 10908: return "pu"; // 潽
        case 10910: return "lin"; // 潾
        case 10912: return "wei"; // 潿
        case 10914: return "se"; // 澀
        case 10916: return "se"; // 澁
        case 10918: return "deng"; // 澂
        case 10920: return "jiong"; // 澃
        case 10922: return "hua"; // 澅
        case 10924: return "jiao"; // 澆
        case 10926: return "lao"; // 澇
        case 10928: return "cun"; // 澊
        case 10930: return "hong"; // 澋
        case 10932: return "han"; // 澏
        case 10934: return "yun"; // 澐
        case 10936: return "liu"; // 澑
        case 10938: return "hong"; // 澒
        case 10940: return "fu"; // 澓
        case 10942: return "gao"; // 澔
        case 10944: return "he"; // 澕
        case 10946: return "xian"; // 澖
        case 10948: return "jian"; // 澗
        case 10950: return "shan"; // 澘
        case 10952: return "xi"; // 澙
        case 10954: return "ao"; // 澚
        case 10956: return "lu"; // 澛
        case 10958: return "ning"; // 澝
        case 10960: return "yu"; // 澞
        case 10962: return "lin"; // 澟
        case 10964: return "mian"; // 澠
        case 10966: return "dang"; // 澢
        case 10968: return "han"; // 澣
        case 10970: return "ze"; // 澤
        case 10972: return "xie"; // 澥
        case 10974: return "yu"; // 澦
        case 10976: return "shi"; // 澨
        case 10978: return "xiao"; // 澩
        case 10980: return "ling"; // 澪
        case 10982: return "ou"; // 澫
        case 10984: return "zi"; // 澬
        case 10986: return "yong"; // 澭
        case 10988: return "hui"; // 澮
        case 10990: return "can"; // 澯
        case 10992: return "lian"; // 澰
        case 10994: return "dian"; // 澱
        case 10996: return "ye"; // 澲
        case 10998: return "huan"; // 澴
        case 11000: return "zhen"; // 澵
        case 11002: return "man"; // 澷
        case 11004: return "dan"; // 澸
        case 11006: return "yi"; // 澺
        case 11008: return "sui"; // 澻
        case 11010: return "pi"; // 澼
        case 11012: return "ju"; // 澽
        case 11014: return "ta"; // 澾
        case 11016: return "qin"; // 澿
        case 11018: return "zhuo"; // 濁
        case 11020: return "nong"; // 濃
        case 11022: return "wo"; // 濄
        case 11024: return "jin"; // 濅
        case 11026: return "pen"; // 濆
        case 11028: return "se"; // 濇
        case 11030: return "ji"; // 濈
        case 11032: return "wei"; // 濊
        case 11034: return "chu"; // 濋
        case 11036: return "ta"; // 濌
        case 11038: return "song"; // 濍
        case 11040: return "ding"; // 濎
        case 11042: return "se"; // 濏
        case 11044: return "zhu"; // 濐
        case 11046: return "lian"; // 濓
        case 11048: return "ni"; // 濔
        case 11050: return "shi"; // 濕
        case 11052: return "shu"; // 濖
        case 11054: return "mi"; // 濗
        case 11056: return "ning"; // 濘
        case 11058: return "ying"; // 濙
        case 11060: return "ying"; // 濚
        case 11062: return "meng"; // 濛
        case 11064: return "jin"; // 濜
        case 11066: return "qi"; // 濝
        case 11068: return "ji"; // 濟
        case 11070: return "zui"; // 濢
        case 11072: return "wo"; // 濣
        case 11074: return "tao"; // 濤
        case 11076: return "yin"; // 濥
        case 11078: return "yin"; // 濦
        case 11080: return "dui"; // 濧
        case 11082: return "ci"; // 濨
        case 11084: return "hu"; // 濩
        case 11086: return "qing"; // 濪
        case 11088: return "lan"; // 濫
        case 11090: return "xun"; // 濬
        case 11092: return "ai"; // 濭
        case 11094: return "wei"; // 濰
        case 11096: return "bin"; // 濱
        case 11098: return "gu"; // 濲
        case 11100: return "qian"; // 濳
        case 11102: return "ying"; // 濴
        case 11104: return "bin"; // 濵
        case 11106: return "kuo"; // 濶
        case 11108: return "fei"; // 濷
        case 11110: return "cang"; // 濸
        case 11112: return "me"; // 濹
        case 11114: return "jian"; // 濺
        case 11116: return "wei"; // 濻
        case 11118: return "luo"; // 濼
        case 11120: return "zan"; // 濽
        case 11122: return "lu"; // 濾
        case 11124: return "li"; // 濿
        case 11126: return "you"; // 瀀
        case 11128: return "yang"; // 瀁
        case 11130: return "lu"; // 瀂
        case 11132: return "si"; // 瀃
        case 11134: return "zhi"; // 瀄
        case 11136: return "ying"; // 瀅
        case 11138: return "du"; // 瀆
        case 11140: return "wang"; // 瀇
        case 11142: return "hui"; // 瀈
        case 11144: return "xie"; // 瀉
        case 11146: return "pan"; // 瀊
        case 11148: return "chen"; // 瀋
        case 11150: return "biao"; // 瀌
        case 11152: return "chan"; // 瀍
        case 11154: return "mo"; // 瀎
        case 11156: return "liu"; // 瀏
        case 11158: return "jian"; // 瀐
        case 11160: return "se"; // 瀒
        case 11162: return "cheng"; // 瀓
        case 11164: return "gu"; // 瀔
        case 11166: return "bin"; // 瀕
        case 11168: return "huo"; // 瀖
        case 11170: return "xian"; // 瀗
        case 11172: return "lu"; // 瀘
        case 11174: return "qin"; // 瀙
        case 11176: return "rong"; // 瀜
        case 11178: return "li"; // 瀝
        case 11180: return "jing"; // 瀞
        case 11182: return "xiao"; // 瀟
        case 11184: return "ying"; // 瀠
        case 11186: return "sui"; // 瀡
        case 11188: return "wei"; // 瀢
        case 11190: return "wai"; // 瀤
        case 11192: return "xue"; // 瀥
        case 11194: return "zhu"; // 瀦
        case 11196: return "long"; // 瀧
        case 11198: return "lai"; // 瀨
        case 11200: return "dui"; // 瀩
        case 11202: return "fan"; // 瀪
        case 11204: return "zhang"; // 张
        case 11206: return "hu"; // 瀫
        case 11208: return "lai"; // 瀬
        case 11210: return "shu"; // 瀭
        case 11212: return "ling"; // 瀮
        case 11214: return "ying"; // 瀯
        case 11216: return "mi"; // 瀰
        case 11218: return "ji"; // 瀱
        case 11220: return "lian"; // 瀲
        case 11222: return "jian"; // 瀳
        case 11224: return "ying"; // 瀴
        case 11226: return "lin"; // 瀶
        case 11228: return "yi"; // 瀷
        case 11230: return "jian"; // 瀸
        case 11232: return "chan"; // 瀺
        case 11234: return "dai"; // 瀻
        case 11236: return "nang"; // 瀼
        case 11238: return "jian"; // 瀽
        case 11240: return "lan"; // 瀾
        case 11242: return "fan"; // 瀿
        case 11244: return "shuan"; // 灀
        case 11246: return "yuan"; // 灁
        case 11248: return "zhuo"; // 灂
        case 11250: return "feng"; // 灃
        case 11252: return "ni"; // 灄
        case 11254: return "lei"; // 灅
        case 11256: return "lan"; // 灆
        case 11258: return "cong"; // 灇
        case 11260: return "qu"; // 灈
        case 11262: return "yong"; // 灉
        case 11264: return "qian"; // 灊
        case 11266: return "fa"; // 灋
        case 11268: return "jue"; // 灍
        case 11270: return "yan"; // 灎
        case 11272: return "ying"; // 灐
        case 11274: return "sa"; // 灑
        case 11276: return "zan"; // 灒
        case 11278: return "luan"; // 灓
        case 11280: return "yan"; // 灔
        case 11282: return "li"; // 灕
        case 11284: return "mi"; // 灖
        case 11286: return "shan"; // 灗
        case 11288: return "tan"; // 灘
        case 11290: return "dang"; // 灙
        case 11292: return "jiao"; // 灚
        case 11294: return "chan"; // 灛
        case 11296: return "ying"; // 灜
        case 11298: return "hao"; // 灝
        case 11300: return "zhu"; // 灟
        case 11302: return "lan"; // 灠
        case 11304: return "lan"; // 灡
        case 11306: return "nang"; // 灢
        case 11308: return "wan"; // 灣
        case 11310: return "luan"; // 灤
        case 11312: return "quan"; // 灥
        case 11314: return "xian"; // 灦
        case 11316: return "yan"; // 灧
        case 11318: return "gan"; // 灨
        case 11320: return "yan"; // 灩
        case 11322: return "yu"; // 灪
        case 11324: return "guang"; // 灮
        case 11326: return "xiao"; // 灱
        case 11328: return "xiao"; // 灲
        case 11330: return "hui"; // 灳
        case 11332: return "hong"; // 灴
        case 11334: return "zhuan"; // 灷
        case 11336: return "yu"; // 灹
        case 11338: return "xie"; // 灺
        case 11340: return "chi"; // 灻
        case 11342: return "zai"; // 災
        case 11344: return "qi"; // 炁
        case 11346: return "zhong"; // 炂
        case 11348: return "ben"; // 炃
        case 11350: return "niu"; // 炄
        case 11352: return "wen"; // 炆
        case 11354: return "pu"; // 炇
        case 11356: return "yi"; // 炈
        case 11358: return "pi"; // 炋
        case 11360: return "kai"; // 炌
        case 11362: return "pan"; // 炍
        case 11364: return "yan"; // 炏
        case 11366: return "pang"; // 炐
        case 11368: return "mu"; // 炑
        case 11370: return "liao"; // 炓
        case 11372: return "guang"; // 炗
        case 11374: return "xin"; // 炘
        case 11376: return "guang"; // 炚
        case 11378: return "guang"; // 炛
        case 11380: return "bian"; // 炞
        case 11382: return "da"; // 炟
        case 11384: return "xia"; // 炠
        case 11386: return "zheng"; // 炡
        case 11388: return "zhu"; // 炢
        case 11390: return "ke"; // 炣
        case 11392: return "zhao"; // 炤
        case 11394: return "fu"; // 炥
        case 11396: return "ba"; // 炦
        case 11398: return "xie"; // 炧
        case 11400: return "xie"; // 炨
        case 11402: return "ling"; // 炩
        case 11404: return "zhuo"; // 炪
        case 11406: return "pao"; // 炰
        case 11408: return "tai"; // 炲
        case 11410: return "yang"; // 炴
        case 11412: return "tong"; // 炵
        case 11414: return "shan"; // 炶
        case 11416: return "wei"; // 為
        case 11418: return "huang"; // 炾
        case 11420: return "zhou"; // 炿
        case 11422: return "yao"; // 烄
        case 11424: return "xu"; // 烅
        case 11426: return "heng"; // 烆
        case 11428: return "quan"; // 烇
        case 11430: return "huan"; // 烉
        case 11432: return "xiao"; // 烋
        case 11434: return "xiu"; // 烌
        case 11436: return "xian"; // 烍
        case 11438: return "yin"; // 烎
        case 11440: return "wu"; // 烏
        case 11442: return "zhou"; // 烐
        case 11444: return "yao"; // 烑
        case 11446: return "shi"; // 烒
        case 11448: return "wei"; // 烓
        case 11450: return "dong"; // 烔
        case 11452: return "xue"; // 烕
        case 11454: return "zai"; // 烖
        case 11456: return "kai"; // 烗
        case 11458: return "xia"; // 烚
        case 11460: return "hui"; // 烜
        case 11462: return "zheng"; // 烝
        case 11464: return "po"; // 烞
        case 11466: return "hui"; // 烠
        case 11468: return "guang"; // 烡
        case 11470: return "che"; // 烢
        case 11472: return "hui"; // 烣
        case 11474: return "chen"; // 烥
        case 11476: return "zhen"; // 烪
        case 11478: return "lie"; // 烮
        case 11480: return "fu"; // 烰
        case 11482: return "jiong"; // 烱
        case 11484: return "xie"; // 烲
        case 11486: return "pu"; // 烳
        case 11488: return "ting"; // 烴
        case 11490: return "zhuo"; // 烵
        case 11492: return "ting"; // 烶
        case 11494: return "hai"; // 烸
        case 11496: return "lang"; // 烺
        case 11498: return "yan"; // 烻
        case 11500: return "xu"; // 烼
        case 11502: return "chi"; // 烾
        case 11504: return "rong"; // 烿
        case 11506: return "hu"; // 焀
        case 11508: return "xi"; // 焁
        case 11510: return "shu"; // 焂
        case 11512: return "he"; // 焃
        case 11514: return "hun"; // 焄
        case 11516: return "kao"; // 焅
        case 11518: return "jue"; // 焆
        case 11520: return "xiao"; // 焇
        case 11522: return "xi"; // 焈
        case 11524: return "zhuan"; // 焋
        case 11526: return "jun"; // 焌
        case 11528: return "di"; // 焍
        case 11530: return "xie"; // 焎
        case 11532: return "ji"; // 焏
        case 11534: return "yan"; // 焑
        case 11536: return "lu"; // 焒
        case 11538: return "yan"; // 焔
        case 11540: return "ju"; // 焗
        case 11542: return "lin"; // 焛
        case 11544: return "kun"; // 焜
        case 11546: return "hun"; // 焝
        case 11548: return "tui"; // 焞
        case 11550: return "xi"; // 焟
        case 11552: return "cui"; // 焠
        case 11554: return "wu"; // 無
        case 11556: return "hong"; // 焢
        case 11558: return "ju"; // 焣
        case 11560: return "fu"; // 焤
        case 11562: return "ai"; // 焥
        case 11564: return "cong"; // 焧
        case 11566: return "feng"; // 焨
        case 11568: return "ping"; // 焩
        case 11570: return "qiong"; // 焪
        case 11572: return "ruo"; // 焫
        case 11574: return "yi"; // 焬
        case 11576: return "qiong"; // 焭
        case 11578: return "xin"; // 焮
        case 11580: return "yi"; // 焲
        case 11582: return "jiao"; // 焳
        case 11584: return "yu"; // 焴
        case 11586: return "zhang"; // 张
        case 11588: return "gang"; // 焵
        case 11590: return "pi"; // 焷
        case 11592: return "gu"; // 焸
        case 11594: return "wang"; // 焹
        case 11596: return "sheng"; // 焺
        case 11598: return "gua"; // 焻
        case 11600: return "shao"; // 焼
        case 11602: return "ying"; // 焽
        case 11604: return "nem"; // 焾
        case 11606: return "geng"; // 焿
        case 11608: return "wei"; // 煀
        case 11610: return "chen"; // 煁
        case 11612: return "he"; // 煂
        case 11614: return "kui"; // 煃
        case 11616: return "zhong"; // 煄
        case 11618: return "duan"; // 煆
        case 11620: return "hui"; // 煇
        case 11622: return "feng"; // 煈
        case 11624: return "lan"; // 煉
        case 11626: return "xing"; // 煋
        case 11628: return "jiao"; // 煍
        case 11630: return "bi"; // 煏
        case 11632: return "ying"; // 煐
        case 11634: return "zhu"; // 煑
        case 11636: return "wei"; // 煒
        case 11638: return "tuan"; // 煓
        case 11640: return "qian"; // 煔
        case 11642: return "xi"; // 煕
        case 11644: return "xuan"; // 煖
        case 11646: return "nuan"; // 煗
        case 11648: return "chan"; // 煘
        case 11650: return "yan"; // 煙
        case 11652: return "jiong"; // 煚
        case 11654: return "jiong"; // 煛
        case 11656: return "mei"; // 煝
        case 11658: return "wei"; // 煟
        case 11660: return "ye"; // 煠
        case 11662: return "jin"; // 煡
        case 11664: return "qiong"; // 煢
        case 11666: return "rou"; // 煣
        case 11668: return "huan"; // 煥
        case 11670: return "fan"; // 煩
        case 11672: return "qiu"; // 煪
        case 11674: return "sui"; // 煫
        case 11676: return "yang"; // 煬
        case 11678: return "lie"; // 煭
        case 11680: return "jie"; // 煯
        case 11682: return "zao"; // 煰
        case 11684: return "gua"; // 煱
        case 11686: return "yun"; // 煴
        case 11688: return "nan"; // 煵
        case 11690: return "shi"; // 煶
        case 11692: return "liang"; // 煷
        case 11694: return "gou"; // 煹
        case 11696: return "tang"; // 煻
        case 11698: return "chao"; // 煼
        case 11700: return "en"; // 煾
        case 11702: return "bo"; // 煿
        case 11704: return "ye"; // 熀
        case 11706: return "xie"; // 熁
        case 11708: return "xi"; // 熂
        case 11710: return "wu"; // 熃
        case 11712: return "yun"; // 熅
        case 11714: return "he"; // 熆
        case 11716: return "he"; // 熇
        case 11718: return "yi"; // 熈
        case 11720: return "yun"; // 熉
        case 11722: return "nai"; // 熋
        case 11724: return "shan"; // 熌
        case 11726: return "qiong"; // 熍
        case 11728: return "yao"; // 熎
        case 11730: return "mi"; // 熐
        case 11732: return "lian"; // 熑
        case 11734: return "ying"; // 熒
        case 11736: return "wu"; // 熓
        case 11738: return "gong"; // 熕
        case 11740: return "yan"; // 熖
        case 11742: return "qiang"; // 熗
        case 11744: return "bi"; // 熚
        case 11746: return "biao"; // 熛
        case 11748: return "zong"; // 熜
        case 11750: return "ao"; // 熝
        case 11752: return "jian"; // 熞
        case 11754: return "lou"; // 熡
        case 11756: return "peng"; // 熢
        case 11758: return "cui"; // 熣
        case 11760: return "yi"; // 熤
        case 11762: return "tong"; // 熥
        case 11764: return "jue"; // 熦
        case 11766: return "zong"; // 熧
        case 11768: return "hu"; // 熩
        case 11770: return "yi"; // 熪
        case 11772: return "zhi"; // 熫
        case 11774: return "wei"; // 熭
        case 11776: return "liu"; // 熮
        case 11778: return "han"; // 熯
        case 11780: return "ou"; // 熰
        case 11782: return "re"; // 熱
        case 11784: return "jiong"; // 熲
        case 11786: return "kun"; // 熴
        case 11788: return "cuan"; // 熶
        case 11790: return "zeng"; // 熷
        case 11792: return "jian"; // 熸
        case 11794: return "xi"; // 熺
        case 11796: return "xi"; // 熻
        case 11798: return "yi"; // 熼
        case 11800: return "xiao"; // 熽
        case 11802: return "chi"; // 熾
        case 11804: return "huang"; // 熿
        case 11806: return "chan"; // 燀
        case 11808: return "ye"; // 燁
        case 11810: return "qian"; // 燂
        case 11812: return "yan"; // 燄
        case 11814: return "xun"; // 燅
        case 11816: return "qiao"; // 燆
        case 11818: return "jun"; // 燇
        case 11820: return "deng"; // 燈
        case 11822: return "dun"; // 燉
        case 11824: return "shen"; // 燊
        case 11826: return "jiao"; // 燋
        case 11828: return "ben"; // 燌
        case 11830: return "xi"; // 燍
        case 11832: return "yu"; // 燏
        case 11834: return "lin"; // 燐
        case 11836: return "tong"; // 燑
        case 11838: return "shao"; // 燒
        case 11840: return "fen"; // 燓
        case 11842: return "xun"; // 燖
        case 11844: return "lan"; // 燗
        case 11846: return "mei"; // 燘
        case 11848: return "tang"; // 燙
        case 11850: return "yi"; // 燚
        case 11852: return "jiong"; // 燛
        case 11854: return "men"; // 燜
        case 11856: return "jing"; // 燝
        case 11858: return "jiao"; // 燞
        case 11860: return "ying"; // 營
        case 11862: return "yi"; // 燡
        case 11864: return "xue"; // 燢
        case 11866: return "lan"; // 燣
        case 11868: return "tai"; // 燤
        case 11870: return "can"; // 燦
        case 11872: return "xi"; // 燨
        case 11874: return "que"; // 燩
        case 11876: return "zong"; // 燪
        case 11878: return "lian"; // 燫
        case 11880: return "hui"; // 燬
        case 11882: return "zhu"; // 燭
        case 11884: return "ling"; // 燯
        case 11886: return "wei"; // 燰
        case 11888: return "yi"; // 燱
        case 11890: return "xie"; // 燲
        case 11892: return "zhao"; // 燳
        case 11894: return "hui"; // 燴
        case 11896: return "da"; // 燵
        case 11898: return "nung"; // 燶
        case 11900: return "bing"; // 燷
        case 11902: return "ru"; // 燸
        case 11904: return "he"; // 燺
        case 11906: return "xun"; // 燻
        case 11908: return "jin"; // 燼
        case 11910: return "chou"; // 燽
        case 11912: return "tao"; // 燾
        case 11914: return "shuo"; // 燿
        case 11916: return "he"; // 爀
        case 11918: return "lan"; // 爁
        case 11920: return "biao"; // 爂
        case 11922: return "rong"; // 爃
        case 11924: return "li"; // 爄
        case 11926: return "mo"; // 爅
        case 11928: return "ruo"; // 爇
        case 11930: return "lu"; // 爈
        case 11932: return "la"; // 爉
        case 11934: return "ao"; // 爊
        case 11936: return "xun"; // 爋
        case 11938: return "kuang"; // 爌
        case 11940: return "shuo"; // 爍
        case 11942: return "liao"; // 爎
        case 11944: return "li"; // 爏
        case 11946: return "lu"; // 爐
        case 11948: return "jue"; // 爑
        case 11950: return "liao"; // 爒
        case 11952: return "yan"; // 爓
        case 11954: return "xi"; // 爔
        case 11956: return "xie"; // 爕
        case 11958: return "long"; // 爖
        case 11960: return "ye"; // 爗
        case 11962: return "can"; // 爘
        case 11964: return "rang"; // 爙
        case 11966: return "yue"; // 爚
        case 11968: return "zhang"; // 张
        case 11970: return "lan"; // 爛
        case 11972: return "cong"; // 爜
        case 11974: return "tong"; // 爞
        case 11976: return "guan"; // 爟
        case 11978: return "ju"; // 爠
        case 11980: return "che"; // 爡
        case 11982: return "mi"; // 爢
        case 11984: return "tang"; // 爣
        case 11986: return "lan"; // 爤
        case 11988: return "zhu"; // 爥
        case 11990: return "lan"; // 爦
        case 11992: return "ling"; // 爧
        case 11994: return "yu"; // 爩
        case 11996: return "zhao"; // 爫
        case 11998: return "zheng"; // 爭
        case 12000: return "pao"; // 爮
        case 12002: return "cheng"; // 爯
        case 12004: return "wei"; // 爲
        case 12006: return "han"; // 爳
        case 12008: return "jue"; // 爴
        case 12010: return "ye"; // 爺
        case 12012: return "zu"; // 爼
        case 12014: return "er"; // 爾
        case 12016: return "chuan"; // 牀
        case 12018: return "ke"; // 牁
        case 12020: return "zang"; // 牂
        case 12022: return "die"; // 牃
        case 12024: return "qiang"; // 牄
        case 12026: return "yong"; // 牅
        case 12028: return "qiang"; // 牆
        case 12030: return "pan"; // 牉
        case 12032: return "chao"; // 牊
        case 12034: return "jian"; // 牋
        case 12036: return "chuan"; // 牎
        case 12038: return "yu"; // 牏
        case 12040: return "zha"; // 牐
        case 12042: return "bian"; // 牑
        case 12044: return "bang"; // 牓
        case 12046: return "bo"; // 牔
        case 12048: return "chuan"; // 牕
        case 12050: return "you"; // 牗
        case 12052: return "du"; // 牘
        case 12054: return "cheng"; // 牚
        case 12056: return "niu"; // 牜
        case 12058: return "le"; // 牞
        case 12060: return "tuo"; // 牠
        case 12062: return "ren"; // 牣
        case 12064: return "mang"; // 牤
        case 12066: return "fang"; // 牥
        case 12068: return "gang"; // 牨
        case 12070: return "yan"; // 牪
        case 12072: return "ge"; // 牫
        case 12074: return "bei"; // 牬
        case 12076: return "si"; // 牭
        case 12078: return "you"; // 牰
        case 12080: return "ge"; // 牱
        case 12082: return "mu"; // 牳
        case 12084: return "di"; // 牴
        case 12086: return "quan"; // 牶
        case 12088: return "quan"; // 牷
        case 12090: return "zi"; // 牸
        case 12092: return "mang"; // 牻
        case 12094: return "keng"; // 牼
        case 12096: return "qian"; // 牽
        case 12098: return "li"; // 犂
        case 12100: return "pou"; // 犃
        case 12102: return "gang"; // 犅
        case 12104: return "te"; // 犆
        case 12106: return "ben"; // 犇
        case 12108: return "quan"; // 犈
        case 12110: return "chun"; // 犉
        case 12112: return "jia"; // 犌
        case 12114: return "feng"; // 犎
        case 12116: return "ke"; // 犐
        case 12118: return "ju"; // 犑
        case 12120: return "chu"; // 犓
        case 12122: return "xi"; // 犔
        case 12124: return "bei"; // 犕
        case 12126: return "luo"; // 犖
        case 12128: return "jie"; // 犗
        case 12130: return "ma"; // 犘
        case 12132: return "san"; // 犙
        case 12134: return "wei"; // 犚
        case 12136: return "li"; // 犛
        case 12138: return "dun"; // 犜
        case 12140: return "tong"; // 犝
        case 12142: return "qiao"; // 犞
        case 12144: return "xi"; // 犠
        case 12146: return "li"; // 犡
        case 12148: return "du"; // 犢
        case 12150: return "lie"; // 犣
        case 12152: return "pai"; // 犤
        case 12154: return "pao"; // 犥
        case 12156: return "bo"; // 犦
        case 12158: return "xi"; // 犧
        case 12160: return "chou"; // 犨
        case 12162: return "wei"; // 犩
        case 12164: return "rao"; // 犪
        case 12166: return "chou"; // 犫
        case 12168: return "ba"; // 犮
        case 12170: return "ji"; // 犱
        case 12172: return "chai"; // 犲
        case 12174: return "zhuo"; // 犳
        case 12176: return "ge"; // 犵
        case 12178: return "gang"; // 犺
        case 12180: return "bo"; // 犻
        case 12182: return "hou"; // 犼
        case 12184: return "ya"; // 犽
        case 12186: return "yin"; // 犾
        case 12188: return "fan"; // 犿
        case 12190: return "zhuan"; // 狀
        case 12192: return "kuang"; // 狅
        case 12194: return "zhong"; // 狆
        case 12196: return "mu"; // 狇
        case 12198: return "pi"; // 狉
        case 12200: return "ju"; // 狊
        case 12202: return "yi"; // 狋
        case 12204: return "xing"; // 狌
        case 12206: return "yi"; // 狏
        case 12208: return "ling"; // 狑
        case 12210: return "pi"; // 狓
        case 12212: return "ni"; // 狔
        case 12214: return "yao"; // 狕
        case 12216: return "you"; // 狖
        case 12218: return "xue"; // 狘
        case 12220: return "dan"; // 狚
        case 12222: return "bo"; // 狛
    }

    return NULL;
}

char* get_pinyin_gbk4(unsigned int code)
{
    switch (code)
    {
        case 0: return "ku";    // 狜
        case 2: return "xian";    // 狝
        case 4: return "huan";    // 狟
        case 6: return "mo";    // 狢
        case 8: return "zhao";    // 狣
        case 10: return "ji";    // 狤
        case 12: return "xun";    // 狥
        case 14: return "shan";    // 狦
        case 16: return "ta";    // 狧
        case 18: return "tong";    // 狪
        case 20: return "dong";    // 狫
        case 22: return "mang";    // 狵
        case 24: return "xi";    // 狶
        case 26: return "xia";    // 狹
        case 28: return "bei";    // 狽
        case 30: return "zhi";    // 狾
        case 32: return "yan";    // 狿
        case 34: return "sha";    // 猀
        case 36: return "han";    // 猂
        case 38: return "jing";    // 猄
        case 40: return "pai";    // 猅
        case 42: return "fei";    // 猆
        case 44: return "xiao";    // 猇
        case 46: return "pi";    // 猈
        case 48: return "qi";    // 猉
        case 50: return "biao";    // 猋
        case 52: return "yin";    // 猌
        case 54: return "lai";    // 猍
        case 56: return "jian";    // 猏
        case 58: return "qiang";    // 猐
        case 60: return "kun";    // 猑
        case 62: return "yan";    // 猒
        case 64: return "zong";    // 猔
        case 66: return "zhi";    // 猘
        case 68: return "zheng";    // 猙
        case 70: return "ya";    // 猚
        case 72: return "lie";    // 猟
        case 74: return "ceon";    // 猠
        case 76: return "zong";    // 猣
        case 78: return "gui";    // 猤
        case 80: return "feng";    // 猦
        case 82: return "wo";    // 猧
        case 84: return "yuan";    // 猨
        case 86: return "chuan";    // 猭
        case 88: return "tuan";    // 猯
        case 90: return "ya";    // 猰
        case 92: return "ge";    // 猲
        case 94: return "jia";    // 猳
        case 96: return "bian";    // 猵
        case 98: return "you";    // 猶
        case 100: return "yao";    // 猺
        case 102: return "sun";    // 猻
        case 104: return "bo";    // 猼
        case 106: return "ming";    // 猽
        case 108: return "sou";    // 獀
        case 110: return "ma";    // 獁
        case 112: return "yuan";    // 獂
        case 114: return "dai";    // 獃
        case 116: return "yu";    // 獄
        case 118: return "shi";    // 獅
        case 120: return "hao";    // 獆
        case 122: return "qiang";    // 獇
        case 124: return "yi";    // 獈
        case 126: return "";    // ?
        case 128: return "zhen";    // 獉
        case 130: return "cang";    // 獊
        case 132: return "gao";    // 獋
        case 134: return "man";    // 獌
        case 136: return "jiang";    // 獎
        case 138: return "mao";    // 獏
        case 140: return "chan";    // 獑
        case 142: return "ao";    // 獓
        case 144: return "gao";    // 獔
        case 146: return "cui";    // 獕
        case 148: return "ben";    // 獖
        case 150: return "bi";    // 獘
        case 152: return "bi";    // 獙
        case 154: return "huang";    // 獚
        case 156: return "bu";    // 獛
        case 158: return "lin";    // 獜
        case 160: return "yu";    // 獝
        case 162: return "tong";    // 獞
        case 164: return "yao";    // 獟
        case 166: return "xi";    // 獡
        case 168: return "xiao";    // 獢
        case 170: return "shou";    // 獣
        case 172: return "dun";    // 獤
        case 174: return "jiao";    // 獥
        case 176: return "ge";    // 獦
        case 178: return "juan";    // 獧
        case 180: return "du";    // 獨
        case 182: return "hui";    // 獩
        case 184: return "kuai";    // 獪
        case 186: return "xian";    // 獫
        case 188: return "xian";    // 獮
        case 190: return "ning";    // 獰
        case 192: return "bian";    // 獱
        case 194: return "huo";    // 獲
        case 196: return "nou";    // 獳
        case 198: return "meng";    // 獴
        case 200: return "lie";    // 獵
        case 202: return "nao";    // 獶
        case 204: return "guang";    // 獷
        case 206: return "shou";    // 獸
        case 208: return "lu";    // 獹
        case 210: return "ta";    // 獺
        case 212: return "xian";    // 獻
        case 214: return "mi";    // 獼
        case 216: return "rang";    // 獽
        case 218: return "nao";    // 獿
        case 220: return "e";    // 玀
        case 222: return "xian";    // 玁
        case 224: return "qi";    // 玂
        case 226: return "jue";    // 玃
        case 228: return "yao";    // 玅
        case 230: return "xuan";    // 玆
        case 232: return "lu";    // 玈
        case 234: return "su";    // 玊
        case 236: return "qiu";    // 玌
        case 238: return "ga";    // 玍
        case 240: return "le";    // 玏
        case 242: return "ba";    // 玐
        case 244: return "hong";    // 玒
        case 246: return "di";    // 玓
        case 248: return "chuan";    // 玔
        case 250: return "gan";    // 玕
        case 252: return "yu";    // 玗
        case 254: return "qi";    // 玘
        case 256: return "yu";    // 玙
        case 258: return "chang";    // 玚
        case 260: return "hong";    // 玜
        case 262: return "wu";    // 玝
        case 264: return "fu";    // 玞
        case 266: return "jie";    // 玠
        case 268: return "ya";    // 玡
        case 270: return "men";    // 玣
        case 272: return "bang";    // 玤
        case 274: return "yue";    // 玥
        case 276: return "jue";    // 玦
        case 278: return "yun";    // 玧
        case 280: return "jue";    // 玨
        case 282: return "yin";    // 玪
        case 284: return "dan";    // 玬
        case 286: return "pin";    // 玭
        case 288: return "qiang";    // 玱
        case 290: return "yi";    // 玴
        case 292: return "an";    // 玵
        case 294: return "ping";    // 玶
        case 296: return "fu";    // 玸
        case 298: return "xuan";    // 玹
        case 300: return "ci";    // 玼
        case 302: return "gou";    // 玽
        case 304: return "jia";    // 玾
        case 306: return "shao";    // 玿
        case 308: return "ci";    // 珁
        case 310: return "ran";    // 珃
        case 312: return "sheng";    // 珄
        case 314: return "shen";    // 珅
        case 316: return "yi";    // 珆
        case 318: return "ju";    // 珇
        case 320: return "";    // ?
        case 322: return "liu";    // 珋
        case 324: return "bi";    // 珌
        case 326: return "zhen";    // 珎
        case 328: return "jin";    // 珒
        case 330: return "jiao";    // 珓
        case 332: return "jian";    // 珔
        case 334: return "li";    // 珕
        case 336: return "guang";    // 珖
        case 338: return "xian";    // 珗
        case 340: return "zhou";    // 珘
        case 342: return "yan";    // 珚
        case 344: return "xiu";    // 珛
        case 346: return "yang";    // 珜
        case 348: return "xu";    // 珝
        case 350: return "su";    // 珟
        case 352: return "qin";    // 珡
        case 354: return "yin";    // 珢
        case 356: return "xun";    // 珣
        case 358: return "bao";    // 珤
        case 360: return "xiang";    // 珦
        case 362: return "xia";    // 珨
        case 364: return "gui";    // 珪
        case 366: return "chong";    // 珫
        case 368: return "xu";    // 珬
        case 370: return "pei";    // 珮
        case 372: return "lao";    // 珯
        case 374: return "dang";    // 珰
        case 376: return "ying";    // 珱
        case 378: return "wen";    // 珳
        case 380: return "e";    // 珴
        case 382: return "ting";    // 珵
        case 384: return "di";    // 珶
        case 386: return "wu";    // 珷
        case 388: return "wu";    // 珸
        case 390: return "cheng";    // 珹
        case 392: return "jun";    // 珺
        case 394: return "mei";    // 珻
        case 396: return "bei";    // 珼
        case 398: return "ting";    // 珽
        case 400: return "xian";    // 現
        case 402: return "chu";    // 珿
        case 404: return "han";    // 琀
        case 406: return "qiong";    // 琁
        case 408: return "yan";    // 琂
        case 410: return "xuan";    // 琄
        case 412: return "xiu";    // 琇
        case 414: return "fu";    // 琈
        case 416: return "xi";    // 琋
        case 418: return "ling";    // 琌
        case 420: return "li";    // 琍
        case 422: return "jin";    // 琎
        case 424: return "suo";    // 琑
        case 426: return "feng";    // 琒
        case 428: return "wan";    // 琓
        case 430: return "dian";    // 琔
        case 432: return "bing";    // 琕
        case 434: return "zhan";    // 琖
        case 436: return "cui";    // 琗
        case 438: return "min";    // 琘
        case 440: return "yu";    // 琙
        case 442: return "lai";    // 琜
        case 444: return "min";    // 琝
        case 446: return "wang";    // 琞
        case 448: return "wei";    // 琟
        case 450: return "tian";    // 琠
        case 452: return "chu";    // 琡
        case 454: return "beng";    // 琣
        case 456: return "cheng";    // 琤
        case 458: return "e";    // 琧
        case 460: return "chang";    // 琩
        case 462: return "beng";    // 琫
        case 464: return "lu";    // 琭
        case 466: return "gun";    // 琯
        case 468: return "diao";    // 琱
        case 470: return "bei";    // 琲
        case 472: return "qiang";    // 琷
        case 474: return "zhuo";    // 琸
        case 476: return "qin";    // 琹
        case 478: return "fa";    // 琺
        case 480: return "jin";    // 琻
        case 482: return "du";    // 琽
        case 484: return "jie";    // 琾
        case 486: return "hui";    // 琿
        case 488: return "yu";    // 瑀
        case 490: return "mei";    // 瑂
        case 492: return "chun";    // 瑃
        case 494: return "xuan";    // 瑄
        case 496: return "ti";    // 瑅
        case 498: return "xing";    // 瑆
        case 500: return "dai";    // 瑇
        case 502: return "rou";    // 瑈
        case 504: return "min";    // 瑉
        case 506: return "jian";    // 瑊
        case 508: return "wei";    // 瑋
        case 510: return "ruan";    // 瑌
        case 512: return "huan";    // 瑍
        case 514: return "";    // ?
        case 516: return "xie";    // 瑎
        case 518: return "chuan";    // 瑏
        case 520: return "jian";    // 瑐
        case 522: return "zhuan";    // 瑑
        case 524: return "yang";    // 瑒
        case 526: return "lian";    // 瑓
        case 528: return "quan";    // 瑔
        case 530: return "duan";    // 瑖
        case 532: return "ya";    // 瑘
        case 534: return "huang";    // 瑝
        case 536: return "liu";    // 瑠
        case 538: return "shi";    // 瑡
        case 540: return "rong";    // 瑢
        case 542: return "suo";    // 瑣
        case 544: return "yao";    // 瑤
        case 546: return "wen";    // 瑥
        case 548: return "wu";    // 瑦
        case 550: return "zhen";    // 瑧
        case 552: return "jin";    // 瑨
        case 554: return "ying";    // 瑩
        case 556: return "ma";    // 瑪
        case 558: return "tao";    // 瑫
        case 560: return "liu";    // 瑬
        case 562: return "li";    // 瑮
        case 564: return "lang";    // 瑯
        case 566: return "tian";    // 瑱
        case 568: return "qiang";    // 瑲
        case 570: return "cuo";    // 瑳
        case 572: return "jue";    // 瑴
        case 574: return "zhao";    // 瑵
        case 576: return "bin";    // 瑸
        case 578: return "tu";    // 瑹
        case 580: return "chang";    // 瑺
        case 582: return "kun";    // 瑻
        case 584: return "zhuan";    // 瑼
        case 586: return "cong";    // 瑽
        case 588: return "yi";    // 瑿
        case 590: return "ji";    // 璂
        case 592: return "jing";    // 璄
        case 594: return "zao";    // 璅
        case 596: return "qiu";    // 璆
        case 598: return "ao";    // 璈
        case 600: return "lian";    // 璉
        case 602: return "men";    // 璊
        case 604: return "yin";    // 璌
        case 606: return "hua";    // 璍
        case 608: return "wei";    // 璏
        case 610: return "wu";    // 璑
        case 612: return "deng";    // 璒
        case 614: return "xiu";    // 璓
        case 616: return "zeng";    // 璔
        case 618: return "xun";    // 璕
        case 620: return "qu";    // 璖
        case 622: return "dang";    // 璗
        case 624: return "lin";    // 璘
        case 626: return "liao";    // 璙
        case 628: return "jue";    // 璚
        case 630: return "su";    // 璛
        case 632: return "gui";    // 璝
        case 634: return "jing";    // 璟
        case 636: return "fan";    // 璠
        case 638: return "jin";    // 璡
        case 640: return "liu";    // 璢
        case 642: return "ji";    // 璣
        case 644: return "hui";    // 璤
        case 646: return "jing";    // 璥
        case 648: return "ai";    // 璦
        case 650: return "zao";    // 璪
        case 652: return "dang";    // 璫
        case 654: return "jiao";    // 璬
        case 656: return "gun";    // 璭
        case 658: return "tan";    // 璮
        case 660: return "kuai";    // 璯
        case 662: return "huan";    // 環
        case 664: return "se";    // 璱
        case 666: return "sui";    // 璲
        case 668: return "tian";    // 璳
        case 670: return "chu";    // 璴
        case 672: return "yu";    // 璵
        case 674: return "jin";    // 璶
        case 676: return "fu";    // 璷
        case 678: return "bin";    // 璸
        case 680: return "shu";    // 璹
        case 682: return "zui";    // 璻
        case 684: return "lan";    // 璼
        case 686: return "xi";    // 璽
        case 688: return "ji";    // 璾
        case 690: return "xuan";    // 璿
        case 692: return "ruan";    // 瓀
        case 694: return "wo";    // 瓁
        case 696: return "gai";    // 瓂
        case 698: return "lei";    // 瓃
        case 700: return "du";    // 瓄
        case 702: return "li";    // 瓅
        case 704: return "zhi";    // 瓆
        case 706: return "rou";    // 瓇
        case 708: return "";    // ?
        case 710: return "li";    // 瓈
        case 712: return "zan";    // 瓉
        case 714: return "qiong";    // 瓊
        case 716: return "ti";    // 瓋
        case 718: return "gui";    // 瓌
        case 720: return "sui";    // 瓍
        case 722: return "la";    // 瓎
        case 724: return "long";    // 瓏
        case 726: return "lu";    // 瓐
        case 728: return "li";    // 瓑
        case 730: return "lan";    // 瓓
        case 732: return "ying";    // 瓔
        case 734: return "mi";    // 瓕
        case 736: return "xiang";    // 瓖
        case 738: return "wei";    // 瓗
        case 740: return "guan";    // 瓘
        case 742: return "dao";    // 瓙
        case 744: return "zan";    // 瓚
        case 746: return "ye";    // 瓛
        case 748: return "bo";    // 瓝
        case 750: return "bo";    // 瓟
        case 752: return "hu";    // 瓡
        case 754: return "li";    // 瓥
        case 756: return "shi";    // 瓧
        case 758: return "hong";    // 瓨
        case 760: return "qian";    // 瓩
        case 762: return "ban";    // 瓪
        case 764: return "pen";    // 瓫
        case 766: return "fang";    // 瓬
        case 768: return "dan";    // 瓭
        case 770: return "fen";    // 瓰
        case 772: return "mao";    // 瓱
        case 774: return "wa";    // 瓲
        case 776: return "hu";    // 瓳
        case 778: return "yi";    // 瓵
        case 780: return "bai";    // 瓸
        case 782: return "juan";    // 瓹
        case 784: return "chang";    // 瓺
        case 786: return "chi";    // 瓻
        case 788: return "li";    // 瓼
        case 790: return "dang";    // 瓽
        case 792: return "meng";    // 瓾
        case 794: return "zhui";    // 甀
        case 796: return "ping";    // 甁
        case 798: return "bian";    // 甂
        case 800: return "zhou";    // 甃
        case 802: return "li";    // 甅
        case 804: return "ci";    // 甆
        case 806: return "ying";    // 甇
        case 808: return "qi";    // 甈
        case 810: return "xian";    // 甉
        case 812: return "lou";    // 甊
        case 814: return "di";    // 甋
        case 816: return "ou";    // 甌
        case 818: return "chuan";    // 甎
        case 820: return "lin";    // 甐
        case 822: return "wu";    // 甒
        case 824: return "dan";    // 甔
        case 826: return "weng";    // 甕
        case 828: return "ying";    // 甖
        case 830: return "yan";    // 甗
        case 832: return "tian";    // 甛
        case 834: return "han";    // 甝
        case 836: return "chang";    // 甞
        case 838: return "qing";    // 甠
        case 840: return "shen";    // 甡
        case 842: return "chan";    // 產
        case 844: return "chan";    // 産
        case 846: return "rui";    // 甤
        case 848: return "su";    // 甦
        case 850: return "shen";    // 甧
        case 852: return "lu";    // 甪
        case 854: return "feng";    // 甮
        case 856: return "you";    // 甴
        case 858: return "fu";    // 甶
        case 860: return "ping";    // 甹
        case 862: return "ding";    // 甼
        case 864: return "quan";    // 甽
        case 866: return "mang";    // 甿
        case 868: return "bi";    // 畁
        case 870: return "liu";    // 畂
        case 872: return "sun";    // 畃
        case 874: return "liu";    // 畄
        case 876: return "mu";    // 畆
        case 878: return "yun";    // 畇
        case 880: return "fu";    // 畉
        case 882: return "geng";    // 畊
        case 884: return "jie";    // 畍
        case 886: return "bi";    // 畐
        case 888: return "tian";    // 畑
        case 890: return "mu";    // 畒
        case 892: return "tap";    // 畓
        case 894: return "jiang";    // 畕
        case 896: return "wa";    // 畖
        case 898: return "fu";    // 畗
        case 900: return "nan";    // 畘
        case 902: return "";    // ?
        case 904: return "mu";    // 畝
        case 906: return "mu";    // 畞
        case 908: return "ji";    // 畟
        case 910: return "tian";    // 畠
        case 912: return "gai";    // 畡
        case 914: return "bi";    // 畢
        case 916: return "da";    // 畣
        case 918: return "zhi";    // 畤
        case 920: return "lue";    // 畧
        case 922: return "pan";    // 畨
        case 924: return "yi";    // 畩
        case 926: return "hua";    // 畫
        case 928: return "yu";    // 畬
        case 930: return "yu";    // 畭
        case 932: return "mu";    // 畮
        case 934: return "jun";    // 畯
        case 936: return "yi";    // 異
        case 938: return "liu";    // 畱
        case 940: return "die";    // 畳
        case 942: return "hua";    // 畵
        case 944: return "dang";    // 當
        case 946: return "zhui";    // 畷
        case 948: return "jiang";    // 畺
        case 950: return "cheng";    // 畻
        case 952: return "chang";    // 畼
        case 954: return "tuan";    // 畽
        case 956: return "lei";    // 畾
        case 958: return "cha";    // 疀
        case 960: return "liu";    // 疁
        case 962: return "die";    // 疂
        case 964: return "lin";    // 疄
        case 966: return "jiang";    // 疅
        case 968: return "chou";    // 疇
        case 970: return "pi";    // 疈
        case 972: return "die";    // 疉
        case 974: return "die";    // 疊
        case 976: return "jie";    // 疌
        case 978: return "dan";    // 疍
        case 980: return "shu";    // 疎
        case 982: return "di";    // 疐
        case 984: return "nai";    // 疓
        case 986: return "bi";    // 疕
        case 988: return "gang";    // 疘
        case 990: return "zhou";    // 疛
        case 992: return "xia";    // 疜
        case 994: return "xu";    // 疞
        case 996: return "chen";    // 疢
        case 998: return "jue";    // 疦
        case 1000: return "qi";    // 疧
        case 1002: return "ya";    // 疨
        case 1004: return "cui";    // 疩
        case 1006: return "bi";    // 疪
        case 1008: return "zong";    // 疭
        case 1010: return "xue";    // 疶
        case 1012: return "zhi";    // 疷
        case 1014: return "bian";    // 疺
        case 1016: return "zhi";    // 疻
        case 1018: return "fei";    // 疿
        case 1020: return "ju";    // 痀
        case 1022: return "shan";    // 痁
        case 1024: return "ni";    // 痆
        case 1026: return "teng";    // 痋
        case 1028: return "tong";    // 痌
        case 1030: return "jie";    // 痎
        case 1032: return "you";    // 痏
        case 1034: return "hui";    // 痐
        case 1036: return "tan";    // 痑
        case 1038: return "chi";    // 痓
        case 1040: return "mei";    // 痗
        case 1042: return "jing";    // 痙
        case 1044: return "xiao";    // 痚
        case 1046: return "tu";    // 痜
        case 1048: return "mang";    // 痝
        case 1050: return "xiao";    // 痟
        case 1052: return "suan";    // 痠
        case 1054: return "pu";    // 痡
        case 1056: return "duo";    // 痥
        case 1058: return "shou";    // 痩
        case 1060: return "yi";    // 痬
        case 1062: return "beng";    // 痭
        case 1064: return "zhang";    // 痮
        case 1066: return "guan";    // 痯
        case 1068: return "ma";    // 痲
        case 1070: return "lin";    // 痳
        case 1072: return "ji";    // 痵
        case 1074: return "dian";    // 痶
        case 1076: return "an";    // 痷
        case 1078: return "chi";    // 痸
        case 1080: return "bi";    // 痺
        case 1082: return "min";    // 痻
        case 1084: return "dui";    // 痽
        case 1086: return "ke";    // 痾
        case 1088: return "ya";    // 瘂
        case 1090: return "cu";    // 瘄
        case 1092: return "shen";    // 瘆
        case 1094: return "zhong";    // 瘇
        case 1096: return "";    // ?
        case 1098: return "zhi";    // 瘈
        case 1100: return "yu";    // 瘉
        case 1102: return "feng";    // 瘋
        case 1104: return "yang";    // 瘍
        case 1106: return "chen";    // 瘎
        case 1108: return "tu";    // 瘏
        case 1110: return "guo";    // 瘑
        case 1112: return "wen";    // 瘒
        case 1114: return "huan";    // 瘓
        case 1116: return "ku";    // 瘔
        case 1118: return "yin";    // 瘖
        case 1120: return "jue";    // 瘚
        case 1122: return "xi";    // 瘜
        case 1124: return "guan";    // 瘝
        case 1126: return "yi";    // 瘞
        case 1128: return "chuan";    // 瘡
        case 1130: return "lei";    // 瘣
        case 1132: return "nue";    // 瘧
        case 1134: return "dian";    // 瘨
        case 1136: return "zhang";    // 瘬
        case 1138: return "shen";    // 瘮
        case 1140: return "cu";    // 瘯
        case 1142: return "yi";    // 瘱
        case 1144: return "zong";    // 瘲
        case 1146: return "sou";    // 瘶
        case 1148: return "se";    // 瘷
        case 1150: return "diao";    // 瘹
        case 1152: return "lou";    // 瘺
        case 1154: return "lu";    // 瘻
        case 1156: return "qin";    // 瘽
        case 1158: return "fu";    // 癁
        case 1160: return "liao";    // 療
        case 1162: return "qiao";    // 癄
        case 1164: return "liu";    // 癅
        case 1166: return "lao";    // 癆
        case 1168: return "xian";    // 癇
        case 1170: return "fei";    // 癈
        case 1172: return "dan";    // 癉
        case 1174: return "yin";    // 癊
        case 1176: return "he";    // 癋
        case 1178: return "xian";    // 癎
        case 1180: return "guan";    // 癏
        case 1182: return "wei";    // 癐
        case 1184: return "nong";    // 癑
        case 1186: return "yu";    // 癒
        case 1188: return "wei";    // 癓
        case 1190: return "yong";    // 癕
        case 1192: return "lei";    // 癗
        case 1194: return "li";    // 癘
        case 1196: return "shu";    // 癙
        case 1198: return "dan";    // 癚
        case 1200: return "bing";    // 癛
        case 1202: return "bing";    // 癝
        case 1204: return "bie";    // 癟
        case 1206: return "ji";    // 癠
        case 1208: return "chi";    // 癡
        case 1210: return "yang";    // 癢
        case 1212: return "jie";    // 癤
        case 1214: return "zheng";    // 癥
        case 1216: return "yi";    // 癦
        case 1218: return "li";    // 癧
        case 1220: return "huo";    // 癨
        case 1222: return "lai";    // 癩
        case 1224: return "ji";    // 癪
        case 1226: return "xuan";    // 癬
        case 1228: return "ying";    // 癭
        case 1230: return "yin";    // 癮
        case 1232: return "yong";    // 癰
        case 1234: return "tan";    // 癱
        case 1236: return "dian";    // 癲
        case 1238: return "luo";    // 癳
        case 1240: return "luan";    // 癴
        case 1242: return "luan";    // 癵
        case 1244: return "bo";    // 癶
        case 1246: return "bo";    // 癷
        case 1248: return "ba";    // 癹
        case 1250: return "fa";    // 発
        case 1252: return "fa";    // 發
        case 1254: return "qie";    // 癿
        case 1256: return "bi";    // 皀
        case 1258: return "zao";    // 皁
        case 1260: return "mao";    // 皃
        case 1262: return "ba";    // 皅
        case 1264: return "ci";    // 皉
        case 1266: return "ling";    // 皊
        case 1268: return "mo";    // 皌
        case 1270: return "ji";    // 皍
        case 1272: return "peng";    // 皏
        case 1274: return "gao";    // 皐
        case 1276: return "e";    // 皒
        case 1278: return "han";    // 皔
        case 1280: return "bi";    // 皕
        case 1282: return "chou";    // 皗
        case 1284: return "qian";    // 皘
        case 1286: return "ai";    // 皚
        case 1288: return "po";    // 皛
        case 1290: return "";    // ?
        case 1292: return "hao";    // 皜
        case 1294: return "huang";    // 皝
        case 1296: return "hao";    // 皞
        case 1298: return "ze";    // 皟
        case 1300: return "cui";    // 皠
        case 1302: return "hao";    // 皡
        case 1304: return "xiao";    // 皢
        case 1306: return "ye";    // 皣
        case 1308: return "hao";    // 皥
        case 1310: return "jiao";    // 皦
        case 1312: return "ai";    // 皧
        case 1314: return "xing";    // 皨
        case 1316: return "huang";    // 皩
        case 1318: return "li";    // 皪
        case 1320: return "piao";    // 皫
        case 1322: return "he";    // 皬
        case 1324: return "jiao";    // 皭
        case 1326: return "gan";    // 皯
        case 1328: return "pao";    // 皰
        case 1330: return "qiu";    // 皳
        case 1332: return "que";    // 皵
        case 1334: return "zha";    // 皶
        case 1336: return "gu";    // 皷
        case 1338: return "jun";    // 皸
        case 1340: return "jun";    // 皹
        case 1342: return "zhou";    // 皺
        case 1344: return "zha";    // 皻
        case 1346: return "gu";    // 皼
        case 1348: return "zhao";    // 皽
        case 1350: return "du";    // 皾
        case 1352: return "qi";    // 盀
        case 1354: return "ying";    // 盁
        case 1356: return "bei";    // 盃
        case 1358: return "zhao";    // 盄
        case 1360: return "he";    // 盇
        case 1362: return "he";    // 盉
        case 1364: return "bo";    // 盋
        case 1366: return "wan";    // 盌
        case 1368: return "yu";    // 盓
        case 1370: return "fan";    // 盕
        case 1372: return "fu";    // 盙
        case 1374: return "qiu";    // 盚
        case 1376: return "dao";    // 盜
        case 1378: return "lu";    // 盝
        case 1380: return "zhan";    // 盞
        case 1382: return "li";    // 盠
        case 1384: return "jin";    // 盡
        case 1386: return "xu";    // 盢
        case 1388: return "jian";    // 監
        case 1390: return "pan";    // 盤
        case 1392: return "an";    // 盦
        case 1394: return "lu";    // 盧
        case 1396: return "xu";    // 盨
        case 1398: return "zhou";    // 盩
        case 1400: return "dang";    // 盪
        case 1402: return "an";    // 盫
        case 1404: return "gu";    // 盬
        case 1406: return "li";    // 盭
        case 1408: return "gan";    // 盰
        case 1410: return "wang";    // 盳
        case 1412: return "qi";    // 盵
        case 1414: return "yuan";    // 盶
        case 1416: return "tian";    // 盷
        case 1418: return "xin";    // 盺
        case 1420: return "pan";    // 盻
        case 1422: return "feng";    // 盽
        case 1424: return "min";    // 盿
        case 1426: return "ming";    // 眀
        case 1428: return "shi";    // 眂
        case 1430: return "yun";    // 眃
        case 1432: return "pan";    // 眅
        case 1434: return "fang";    // 眆
        case 1436: return "mei";    // 眊
        case 1438: return "xian";    // 県
        case 1440: return "shi";    // 眎
        case 1442: return "yang";    // 眏
        case 1444: return "zheng";    // 眐
        case 1446: return "ao";    // 眑
        case 1448: return "shen";    // 眒
        case 1450: return "huo";    // 眓
        case 1452: return "da";    // 眔
        case 1454: return "zhen";    // 眕
        case 1456: return "kuang";    // 眖
        case 1458: return "ju";    // 眗
        case 1460: return "shen";    // 眘
        case 1462: return "mei";    // 眛
        case 1464: return "mo";    // 眜
        case 1466: return "zhu";    // 眝
        case 1468: return "zhen";    // 眞
        case 1470: return "shi";    // 眡
        case 1472: return "die";    // 眣
        case 1474: return "ni";    // 眤
        case 1476: return "zi";    // 眥
        case 1478: return "chao";    // 眧
        case 1480: return "bing";    // 眪
        case 1482: return "pan";    // 眫
        case 1484: return "";    // ?
        case 1486: return "long";    // 眬
        case 1488: return "tong";    // 眮
        case 1490: return "die";    // 眰
        case 1492: return "di";    // 眱
        case 1494: return "ne";    // 眲
        case 1496: return "ming";    // 眳
        case 1498: return "xuan";    // 眴
        case 1500: return "zhen";    // 眹
        case 1502: return "yang";    // 眻
        case 1504: return "mo";    // 眽
        case 1506: return "zhong";    // 眾
        case 1508: return "mo";    // 眿
        case 1510: return "mei";    // 睂
        case 1512: return "qiao";    // 睄
        case 1514: return "han";    // 睅
        case 1516: return "huan";    // 睆
        case 1518: return "cheng";    // 睈
        case 1520: return "zhuai";    // 睉
        case 1522: return "juan";    // 睊
        case 1524: return "e";    // 睋
        case 1526: return "man";    // 睌
        case 1528: return "xian";    // 睍
        case 1530: return "xi";    // 睎
        case 1532: return "kun";    // 睏
        case 1534: return "shan";    // 睒
        case 1536: return "tian";    // 睓
        case 1538: return "gun";    // 睔
        case 1540: return "wan";    // 睕
        case 1542: return "leng";    // 睖
        case 1544: return "shi";    // 睗
        case 1546: return "qiong";    // 睘
        case 1548: return "lie";    // 睙
        case 1550: return "zheng";    // 睜
        case 1552: return "li";    // 睝
        case 1554: return "lai";    // 睞
        case 1556: return "zui";    // 睟
        case 1558: return "juan";    // 睠
        case 1560: return "pi";    // 睤
        case 1562: return "hun";    // 睧
        case 1564: return "lu";    // 睩
        case 1566: return "yi";    // 睪
        case 1568: return "zhou";    // 睭
        case 1570: return "yu";    // 睮
        case 1572: return "hun";    // 睯
        case 1574: return "ma";    // 睰
        case 1576: return "xia";    // 睱
        case 1578: return "xing";    // 睲
        case 1580: return "hui";    // 睳
        case 1582: return "gun";    // 睴
        case 1584: return "zai";    // 睵
        case 1586: return "chun";    // 睶
        case 1588: return "jian";    // 睷
        case 1590: return "mei";    // 睸
        case 1592: return "hou";    // 睺
        case 1594: return "xuan";    // 睻
        case 1596: return "tian";    // 睼
        case 1598: return "xu";    // 瞁
        case 1600: return "fa";    // 瞂
        case 1602: return "wo";    // 瞃
        case 1604: return "gui";    // 瞆
        case 1606: return "mi";    // 瞇
        case 1608: return "weng";    // 瞈
        case 1610: return "kou";    // 瞉
        case 1612: return "dang";    // 瞊
        case 1614: return "tian";    // 瞋
        case 1616: return "huan";    // 瞏
        case 1618: return "mo";    // 瞐
        case 1620: return "fen";    // 瞓
        case 1622: return "ze";    // 瞔
        case 1624: return "zhang";    // 瞕
        case 1626: return "yi";    // 瞖
        case 1628: return "dou";    // 瞗
        case 1630: return "kou";    // 瞘
        case 1632: return "mo";    // 瞙
        case 1634: return "shun";    // 瞚
        case 1636: return "cong";    // 瞛
        case 1638: return "lu";    // 瞜
        case 1640: return "chi";    // 瞝
        case 1642: return "man";    // 瞞
        case 1644: return "gui";    // 瞡
        case 1646: return "huan";    // 瞣
        case 1648: return "shun";    // 瞤
        case 1650: return "xi";    // 瞦
        case 1652: return "pu";    // 瞨
        case 1654: return "shen";    // 瞫
        case 1656: return "liao";    // 瞭
        case 1658: return "che";    // 瞮
        case 1660: return "jian";    // 瞯
        case 1662: return "ye";    // 瞱
        case 1664: return "xu";    // 瞲
        case 1666: return "wu";    // 瞴
        case 1668: return "gui";    // 瞶
        case 1670: return "jian";    // 瞷
        case 1672: return "ye";    // 瞸
        case 1674: return "ai";    // 瞹
        case 1676: return "hui";    // 瞺
        case 1678: return "";    // ?
        case 1680: return "jian";    // 瞼
        case 1682: return "zhao";    // 瞾
        case 1684: return "mei";    // 矀
        case 1686: return "chou";    // 矁
        case 1688: return "sao";    // 矂
        case 1690: return "ning";    // 矃
        case 1692: return "xun";    // 矄
        case 1694: return "yao";    // 矅
        case 1696: return "yue";    // 矆
        case 1698: return "meng";    // 矇
        case 1700: return "mian";    // 矈
        case 1702: return "pin";    // 矉
        case 1704: return "mian";    // 矊
        case 1706: return "lei";    // 矋
        case 1708: return "guo";    // 矌
        case 1710: return "xuan";    // 矎
        case 1712: return "mian";    // 矏
        case 1714: return "huo";    // 矐
        case 1716: return "lu";    // 矑
        case 1718: return "meng";    // 矒
        case 1720: return "long";    // 矓
        case 1722: return "guan";    // 矔
        case 1724: return "man";    // 矕
        case 1726: return "li";    // 矖
        case 1728: return "tang";    // 矘
        case 1730: return "kan";    // 矙
        case 1732: return "zhu";    // 矚
        case 1734: return "qin";    // 矝
        case 1736: return "yu";    // 矞
        case 1738: return "shuo";    // 矟
        case 1740: return "zhuo";    // 矠
        case 1742: return "jue";    // 矡
        case 1744: return "shen";    // 矤
        case 1746: return "hou";    // 矦
        case 1748: return "ying";    // 矨
        case 1750: return "zhou";    // 矪
        case 1752: return "jiao";    // 矯
        case 1754: return "zeng";    // 矰
        case 1756: return "yue";    // 矱
        case 1758: return "ba";    // 矲
        case 1760: return "ding";    // 矴
        case 1762: return "diao";    // 矵
        case 1764: return "zi";    // 矷
        case 1766: return "wu";    // 矹
        case 1768: return "da";    // 矺
        case 1770: return "ku";    // 矻
        case 1772: return "gang";    // 矼
        case 1774: return "dan";    // 砃
        case 1776: return "jue";    // 砄
        case 1778: return "li";    // 砅
        case 1780: return "fu";    // 砆
        case 1782: return "wen";    // 砇
        case 1784: return "e";    // 砈
        case 1786: return "kang";    // 砊
        case 1788: return "zhi";    // 砋
        case 1790: return "jie";    // 砎
        case 1792: return "bin";    // 砏
        case 1794: return "e";    // 砐
        case 1796: return "zhe";    // 砓
        case 1798: return "sui";    // 砕
        case 1800: return "wa";    // 砙
        case 1802: return "jin";    // 砛
        case 1804: return "mo";    // 砞
        case 1806: return "ju";    // 砠
        case 1808: return "yu";    // 砡
        case 1810: return "luo";    // 砢
        case 1812: return "tuo";    // 砤
        case 1814: return "e";    // 砨
        case 1816: return "mu";    // 砪
        case 1818: return "zhu";    // 砫
        case 1820: return "nu";    // 砮
        case 1822: return "ping";    // 砯
        case 1824: return "ling";    // 砱
        case 1826: return "pao";    // 砲
        case 1828: return "le";    // 砳
        case 1830: return "e";    // 砵
        case 1832: return "po";    // 砶
        case 1834: return "yong";    // 砽
        case 1836: return "kuang";    // 砿
        case 1838: return "keng";    // 硁
        case 1840: return "quan";    // 硂
        case 1842: return "zhu";    // 硃
        case 1844: return "guang";    // 硄
        case 1846: return "e";    // 硆
        case 1848: return "qia";    // 硈
        case 1850: return "lu";    // 硉
        case 1852: return "wei";    // 硊
        case 1854: return "ai";    // 硋
        case 1856: return "ken";    // 硍
        case 1858: return "yan";    // 硏
        case 1860: return "peng";    // 硑
        case 1862: return "lao";    // 硓
        case 1864: return "hong";    // 硔
        case 1866: return "qing";    // 硘
        case 1868: return "wei";    // 硙
        case 1870: return "qiao";    // 硚
        case 1872: return "";    // ?
        case 1874: return "ceok";    // 硛
        case 1876: return "keng";    // 硜
        case 1878: return "ke";    // 硞
        case 1880: return "chan";    // 硟
        case 1882: return "lang";    // 硠
        case 1884: return "hong";    // 硡
        case 1886: return "yu";    // 硢
        case 1888: return "xiao";    // 硣
        case 1890: return "xia";    // 硤
        case 1892: return "bang";    // 硥
        case 1894: return "luo";    // 硦
        case 1896: return "yong";    // 硧
        case 1898: return "che";    // 硨
        case 1900: return "che";    // 硩
        case 1902: return "yan";    // 硯
        case 1904: return "sha";    // 硰
        case 1906: return "kun";    // 硱
        case 1908: return "gu";    // 硲
        case 1910: return "ceok";    // 硳
        case 1912: return "hua";    // 硴
        case 1914: return "lu";    // 硵
        case 1916: return "cen";    // 硶
        case 1918: return "nue";    // 硸
        case 1920: return "song";    // 硹
        case 1922: return "zhuo";    // 硺
        case 1924: return "keng";    // 硻
        case 1926: return "yan";    // 硽
        case 1928: return "duo";    // 硾
        case 1930: return "kong";    // 硿
        case 1932: return "cheng";    // 碀
        case 1934: return "qi";    // 碁
        case 1936: return "zong";    // 碂
        case 1938: return "qing";    // 碃
        case 1940: return "lin";    // 碄
        case 1942: return "jun";    // 碅
        case 1944: return "bo";    // 碆
        case 1946: return "min";    // 碈
        case 1948: return "jian";    // 碊
        case 1950: return "he";    // 碋
        case 1952: return "que";    // 碏
        case 1954: return "leng";    // 碐
        case 1956: return "yin";    // 碒
        case 1958: return "wu";    // 碔
        case 1960: return "qi";    // 碕
        case 1962: return "lun";    // 碖
        case 1964: return "nao";    // 碙
        case 1966: return "ruan";    // 碝
        case 1968: return "yan";    // 碞
        case 1970: return "ding";    // 碠
        case 1972: return "tuo";    // 碢
        case 1974: return "ying";    // 碤
        case 1976: return "ke";    // 碦
        case 1978: return "wei";    // 碨
        case 1980: return "shuo";    // 碩
        case 1982: return "an";    // 碪
        case 1984: return "duan";    // 碫
        case 1986: return "xia";    // 碬
        case 1988: return "dang";    // 碭
        case 1990: return "di";    // 碮
        case 1992: return "nao";    // 碯
        case 1994: return "tian";    // 碵
        case 1996: return "qi";    // 碶
        case 1998: return "dun";    // 碷
        case 2000: return "feng";    // 碸
        case 2002: return "que";    // 確
        case 2004: return "qiao";    // 碻
        case 2006: return "ma";    // 碼
        case 2008: return "gong";    // 碽
        case 2010: return "xie";    // 碿
        case 2012: return "e";    // 磀
        case 2014: return "liu";    // 磂
        case 2016: return "ti";    // 磃
        case 2018: return "tang";    // 磄
        case 2020: return "ke";    // 磆
        case 2022: return "pi";    // 磇
        case 2024: return "wei";    // 磈
        case 2026: return "tian";    // 磌
        case 2028: return "qia";    // 磍
        case 2030: return "qi";    // 磎
        case 2032: return "lian";    // 磏
        case 2034: return "wei";    // 磑
        case 2036: return "yun";    // 磒
        case 2038: return "dui";    // 磓
        case 2040: return "la";    // 磖
        case 2042: return "pak";    // 磗
        case 2044: return "yao";    // 磘
        case 2046: return "zhuan";    // 磚
        case 2048: return "chan";    // 磛
        case 2050: return "qi";    // 磜
        case 2052: return "ao";    // 磝
        case 2054: return "peng";    // 磞
        case 2056: return "liu";    // 磟
        case 2058: return "lu";    // 磠
        case 2060: return "kan";    // 磡
        case 2062: return "chuan";    // 磢
        case 2064: return "chen";    // 磣
        case 2066: return "";    // ?
        case 2068: return "yin";    // 磤
        case 2070: return "lei";    // 磥
        case 2072: return "piao";    // 磦
        case 2074: return "qi";    // 磧
        case 2076: return "qi";    // 磩
        case 2078: return "cui";    // 磪
        case 2080: return "zong";    // 磫
        case 2082: return "chuo";    // 磭
        case 2084: return "lun";    // 磮
        case 2086: return "ji";    // 磯
        case 2088: return "shan";    // 磰
        case 2090: return "lao";    // 磱
        case 2092: return "zeng";    // 磳
        case 2094: return "jian";    // 磵
        case 2096: return "xi";    // 磶
        case 2098: return "ding";    // 磸
        case 2100: return "dian";    // 磹
        case 2102: return "bo";    // 磻
        case 2104: return "she";    // 磼
        case 2106: return "qiao";    // 磽
        case 2108: return "di";    // 磾
        case 2110: return "li";    // 磿
        case 2112: return "jian";    // 礀
        case 2114: return "xi";    // 礂
        case 2116: return "zhang";    // 礃
        case 2118: return "qiao";    // 礄
        case 2120: return "jian";    // 礆
        case 2122: return "yu";    // 礇
        case 2124: return "zhui";    // 礈
        case 2126: return "he";    // 礉
        case 2128: return "ke";    // 礊
        case 2130: return "ze";    // 礋
        case 2132: return "lei";    // 礌
        case 2134: return "jie";    // 礍
        case 2136: return "chu";    // 礎
        case 2138: return "ye";    // 礏
        case 2140: return "hu";    // 礐
        case 2142: return "dang";    // 礑
        case 2144: return "yi";    // 礒
        case 2146: return "pi";    // 礔
        case 2148: return "pi";    // 礕
        case 2150: return "yu";    // 礖
        case 2152: return "pin";    // 礗
        case 2154: return "e";    // 礘
        case 2156: return "ai";    // 礙
        case 2158: return "ke";    // 礚
        case 2160: return "jian";    // 礛
        case 2162: return "yu";    // 礜
        case 2164: return "ruan";    // 礝
        case 2166: return "pao";    // 礟
        case 2168: return "ci";    // 礠
        case 2170: return "bo";    // 礡
        case 2172: return "yang";    // 礢
        case 2174: return "ma";    // 礣
        case 2176: return "xian";    // 礥
        case 2178: return "kuang";    // 礦
        case 2180: return "lei";    // 礧
        case 2182: return "lei";    // 礨
        case 2184: return "zhi";    // 礩
        case 2186: return "li";    // 礪
        case 2188: return "li";    // 礫
        case 2190: return "fan";    // 礬
        case 2192: return "que";    // 礭
        case 2194: return "pao";    // 礮
        case 2196: return "ying";    // 礯
        case 2198: return "li";    // 礰
        case 2200: return "long";    // 礱
        case 2202: return "long";    // 礲
        case 2204: return "mo";    // 礳
        case 2206: return "shuan";    // 礵
        case 2208: return "guan";    // 礶
        case 2210: return "lan";    // 礷
        case 2212: return "ca";    // 礸
        case 2214: return "yan";    // 礹
        case 2216: return "reng";    // 礽
        case 2218: return "yue";    // 礿
        case 2220: return "ta";    // 祂
        case 2222: return "ma";    // 祃
        case 2224: return "xie";    // 祄
        case 2226: return "yao";    // 祅
        case 2228: return "qi";    // 祇
        case 2230: return "beng";    // 祊
        case 2232: return "dui";    // 祋
        case 2234: return "zhong";    // 祌
        case 2236: return "ren";    // 祍
        case 2238: return "yi";    // 祎
        case 2240: return "shi";    // 祏
        case 2242: return "you";    // 祐
        case 2244: return "zhi";    // 祑
        case 2246: return "tiao";    // 祒
        case 2248: return "fu";    // 祔
        case 2250: return "bi";    // 祕
        case 2252: return "suan";    // 祘
        case 2254: return "mei";    // 祙
        case 2256: return "chai";    // 祡
        case 2258: return "lu";    // 祣
        case 2260: return "";    // ?
        case 2262: return "yu";    // 祤
        case 2264: return "wu";    // 祦
        case 2266: return "zhu";    // 祩
        case 2268: return "gui";    // 祪
        case 2270: return "xia";    // 祫
        case 2272: return "zhi";    // 祬
        case 2274: return "gao";    // 祮
        case 2276: return "gao";    // 祰
        case 2278: return "lei";    // 祱
        case 2280: return "jin";    // 祲
        case 2282: return "shen";    // 祳
        case 2284: return "gai";    // 祴
        case 2286: return "kun";    // 祵
        case 2288: return "di";    // 祶
        case 2290: return "tao";    // 祹
        case 2292: return "gu";    // 祻
        case 2294: return "guan";    // 祼
        case 2296: return "zui";    // 祽
        case 2298: return "ling";    // 祾
        case 2300: return "lu";    // 祿
        case 2302: return "dao";    // 禂
        case 2304: return "zhi";    // 禃
        case 2306: return "bi";    // 禆
        case 2308: return "chu";    // 禇
        case 2310: return "hui";    // 禈
        case 2312: return "you";    // 禉
        case 2314: return "yin";    // 禋
        case 2316: return "zi";    // 禌
        case 2318: return "huo";    // 禍
        case 2320: return "zhen";    // 禎
        case 2322: return "yuan";    // 禐
        case 2324: return "wu";    // 禑
        case 2326: return "xian";    // 禒
        case 2328: return "yang";    // 禓
        case 2330: return "zhi";    // 禔
        case 2332: return "yi";    // 禕
        case 2334: return "mei";    // 禖
        case 2336: return "si";    // 禗
        case 2338: return "di";    // 禘
        case 2340: return "bei";    // 禙
        case 2342: return "zhen";    // 禛
        case 2344: return "yong";    // 禜
        case 2346: return "ji";    // 禝
        case 2348: return "gao";    // 禞
        case 2350: return "tang";    // 禟
        case 2352: return "si";    // 禠
        case 2354: return "ma";    // 禡
        case 2356: return "ta";    // 禢
        case 2358: return "fu";    // 禣
        case 2360: return "xuan";    // 禤
        case 2362: return "qi";    // 禥
        case 2364: return "yu";    // 禦
        case 2366: return "ji";    // 禨
        case 2368: return "si";    // 禩
        case 2370: return "chan";    // 禪
        case 2372: return "dan";    // 禫
        case 2374: return "gui";    // 禬
        case 2376: return "sui";    // 禭
        case 2378: return "li";    // 禮
        case 2380: return "nong";    // 禯
        case 2382: return "mi";    // 禰
        case 2384: return "dao";    // 禱
        case 2386: return "li";    // 禲
        case 2388: return "yue";    // 禴
        case 2390: return "zhi";    // 禵
        case 2392: return "zan";    // 禶
        case 2394: return "lei";    // 禷
        case 2396: return "rou";    // 禸
        case 2398: return "xie";    // 禼
        case 2400: return "tu";    // 禿
        case 2402: return "ren";    // 秂
        case 2404: return "zi";    // 秄
        case 2406: return "na";    // 秅
        case 2408: return "zhi";    // 秇
        case 2410: return "xian";    // 秈
        case 2412: return "nian";    // 秊
        case 2414: return "qiu";    // 秌
        case 2416: return "fen";    // 秎
        case 2418: return "mao";    // 秏
        case 2420: return "yun";    // 秐
        case 2422: return "zhi";    // 秓
        case 2424: return "jing";    // 秔
        case 2426: return "zhi";    // 秖
        case 2428: return "yu";    // 秗
        case 2430: return "ku";    // 秙
        case 2432: return "ban";    // 秚
        case 2434: return "pi";    // 秛
        case 2436: return "ni";    // 秜
        case 2438: return "li";    // 秝
        case 2440: return "you";    // 秞
        case 2442: return "pi";    // 秠
        case 2444: return "bo";    // 秡
        case 2446: return "ling";    // 秢
        case 2448: return "nian";    // 秥
        case 2450: return "zuo";    // 秨
        case 2452: return "zhi";    // 秪
        case 2454: return "";    // ?
        case 2456: return "ju";    // 秬
        case 2458: return "huo";    // 秮
        case 2460: return "tong";    // 秱
        case 2462: return "zhi";    // 秲
        case 2464: return "kuo";    // 秳
        case 2466: return "ge";    // 秴
        case 2468: return "yin";    // 秵
        case 2470: return "zi";    // 秶
        case 2472: return "zhi";    // 秷
        case 2474: return "ren";    // 秹
        case 2476: return "du";    // 秺
        case 2478: return "zhu";    // 秼
        case 2480: return "nong";    // 秾
        case 2482: return "bu";    // 秿
        case 2484: return "gao";    // 稁
        case 2486: return "xun";    // 稄
        case 2488: return "shui";    // 稅
        case 2490: return "kun";    // 稇
        case 2492: return "gan";    // 稈
        case 2494: return "jing";    // 稉
        case 2496: return "ti";    // 稊
        case 2498: return "tu";    // 稌
        case 2500: return "ya";    // 稏
        case 2502: return "lun";    // 稐
        case 2504: return "lu";    // 稑
        case 2506: return "gu";    // 稒
        case 2508: return "zuo";    // 稓
        case 2510: return "zhun";    // 稕
        case 2512: return "bang";    // 稖
        case 2514: return "ji";    // 稘
        case 2516: return "zhi";    // 稙
        case 2518: return "kun";    // 稛
        case 2520: return "leng";    // 稜
        case 2522: return "peng";    // 稝
        case 2524: return "bing";    // 稟
        case 2526: return "zu";    // 稡
        case 2528: return "yu";    // 稢
        case 2530: return "lue";    // 稤
        case 2532: return "xiang";    // 稥
        case 2534: return "yi";    // 稦
        case 2536: return "qie";    // 稧
        case 2538: return "bian";    // 稨
        case 2540: return "ji";    // 稩
        case 2542: return "fu";    // 稪
        case 2544: return "bi";    // 稫
        case 2546: return "nuo";    // 稬
        case 2548: return "jie";    // 稭
        case 2550: return "zhong";    // 種
        case 2552: return "zong";    // 稯
        case 2554: return "xu";    // 稰
        case 2556: return "cheng";    // 稱
        case 2558: return "dao";    // 稲
        case 2560: return "lian";    // 稴
        case 2562: return "jiu";    // 稵
        case 2564: return "yu";    // 稶
        case 2566: return "xu";    // 稸
        case 2568: return "zhi";    // 稺
        case 2570: return "gao";    // 稾
        case 2572: return "yu";    // 穀
        case 2574: return "rong";    // 穁
        case 2576: return "sui";    // 穂
        case 2578: return "rong";    // 穃
        case 2580: return "ji";    // 穄
        case 2582: return "kang";    // 穅
        case 2584: return "shan";    // 穇
        case 2586: return "men";    // 穈
        case 2588: return "ti";    // 穉
        case 2590: return "ji";    // 穊
        case 2592: return "lu";    // 穋
        case 2594: return "su";    // 穌
        case 2596: return "ji";    // 積
        case 2598: return "ying";    // 穎
        case 2600: return "wen";    // 穏
        case 2602: return "qiu";    // 穐
        case 2604: return "kuei";    // 穒
        case 2606: return "yi";    // 穓
        case 2608: return "huang";    // 穔
        case 2610: return "qie";    // 穕
        case 2612: return "ji";    // 穖
        case 2614: return "xiao";    // 穘
        case 2616: return "pu";    // 穙
        case 2618: return "jiao";    // 穚
        case 2620: return "bo";    // 穛
        case 2622: return "tong";    // 穜
        case 2624: return "zui";    // 穝
        case 2626: return "lu";    // 穞
        case 2628: return "sui";    // 穟
        case 2630: return "nong";    // 穠
        case 2632: return "se";    // 穡
        case 2634: return "hui";    // 穢
        case 2636: return "rang";    // 穣
        case 2638: return "nuo";    // 穤
        case 2640: return "yu";    // 穥
        case 2642: return "pin";    // 穦
        case 2644: return "ji";    // 穧
        case 2646: return "tui";    // 穨
        case 2648: return "";    // ?
        case 2650: return "wen";    // 穩
        case 2652: return "bie";    // 穪
        case 2654: return "hu";    // 穫
        case 2656: return "kuang";    // 穬
        case 2658: return "lu";    // 穭
        case 2660: return "biao";    // 穮
        case 2662: return "se";    // 穯
        case 2664: return "jue";    // 穱
        case 2666: return "li";    // 穲
        case 2668: return "zan";    // 穳
        case 2670: return "ya";    // 穵
        case 2672: return "yu";    // 穻
        case 2674: return "shen";    // 穼
        case 2676: return "jing";    // 穽
        case 2678: return "yao";    // 穾
        case 2680: return "lao";    // 窂
        case 2682: return "yao";    // 窅
        case 2684: return "bao";    // 窇
        case 2686: return "bing";    // 窉
        case 2688: return "wa";    // 窊
        case 2690: return "ku";    // 窋
        case 2692: return "pao";    // 窌
        case 2694: return "diao";    // 窎
        case 2696: return "wu";    // 窏
        case 2698: return "wa";    // 窐
        case 2700: return "chuan";    // 窓
        case 2702: return "yao";    // 窔
        case 2704: return "xiao";    // 窙
        case 2706: return "cheng";    // 窚
        case 2708: return "kou";    // 窛
        case 2710: return "dan";    // 窞
        case 2712: return "zhuo";    // 窡
        case 2714: return "xu";    // 窢
        case 2716: return "su";    // 窣
        case 2718: return "guan";    // 窤
        case 2720: return "zhuo";    // 窧
        case 2722: return "wo";    // 窩
        case 2724: return "wa";    // 窪
        case 2726: return "ya";    // 窫
        case 2728: return "qiong";    // 窮
        case 2730: return "yao";    // 窯
        case 2732: return "yao";    // 窰
        case 2734: return "tiao";    // 窱
        case 2736: return "chao";    // 窲
        case 2738: return "tian";    // 窴
        case 2740: return "diao";    // 窵
        case 2742: return "lou";    // 窶
        case 2744: return "liao";    // 窷
        case 2746: return "xi";    // 窸
        case 2748: return "wu";    // 窹
        case 2750: return "kui";    // 窺
        case 2752: return "chuan";    // 窻
        case 2754: return "ke";    // 窼
        case 2756: return "kuan";    // 窽
        case 2758: return "kuan";    // 窾
        case 2760: return "cheng";    // 竀
        case 2762: return "cui";    // 竁
        case 2764: return "liao";    // 竂
        case 2766: return "zao";    // 竃
        case 2768: return "cuan";    // 竄
        case 2770: return "qiao";    // 竅
        case 2772: return "qiong";    // 竆
        case 2774: return "dou";    // 竇
        case 2776: return "zao";    // 竈
        case 2778: return "long";    // 竉
        case 2780: return "qie";    // 竊
        case 2782: return "chu";    // 竌
        case 2784: return "shi";    // 竍
        case 2786: return "fu";    // 竎
        case 2788: return "qian";    // 竏
        case 2790: return "chu";    // 竐
        case 2792: return "hong";    // 竑
        case 2794: return "qi";    // 竒
        case 2796: return "hao";    // 竓
        case 2798: return "sheng";    // 竔
        case 2800: return "fen";    // 竕
        case 2802: return "miao";    // 竗
        case 2804: return "kou";    // 竘
        case 2806: return "zhu";    // 竚
        case 2808: return "ling";    // 竛
        case 2810: return "neng";    // 竜
        case 2812: return "bing";    // 竝
        case 2814: return "bai";    // 竡
        case 2816: return "si";    // 竢
        case 2818: return "hong";    // 竤
        case 2820: return "jing";    // 竧
        case 2822: return "diao";    // 竨
        case 2824: return "yi";    // 竩
        case 2826: return "shu";    // 竪
        case 2828: return "jing";    // 竫
        case 2830: return "qu";    // 竬
        case 2832: return "ping";    // 竮
        case 2834: return "li";    // 竰
        case 2836: return "zhuan";    // 竱
        case 2838: return "ceng";    // 竲
        case 2840: return "deng";    // 竳
        case 2842: return "";    // ?
        case 2844: return "cun";    // 竴
        case 2846: return "wai";    // 竵
        case 2848: return "jing";    // 競
        case 2850: return "kan";    // 竷
        case 2852: return "jing";    // 竸
        case 2854: return "le";    // 竻
        case 2856: return "peng";    // 竼
        case 2858: return "chi";    // 竾
        case 2860: return "mang";    // 笀
        case 2862: return "du";    // 笁
        case 2864: return "wan";    // 笂
        case 2866: return "jiao";    // 笅
        case 2868: return "suan";    // 笇
        case 2870: return "qin";    // 笉
        case 2872: return "ya";    // 笌
        case 2874: return "zhui";    // 笍
        case 2876: return "yuan";    // 笎
        case 2878: return "hang";    // 笐
        case 2880: return "jin";    // 笒
        case 2882: return "bi";    // 笓
        case 2884: return "yi";    // 笖
        case 2886: return "dong";    // 笗
        case 2888: return "shan";    // 笘
        case 2890: return "da";    // 笚
        case 2892: return "zhu";    // 笜
        case 2894: return "na";    // 笝
        case 2896: return "gu";    // 笟
        case 2898: return "qie";    // 笡
        case 2900: return "min";    // 笢
        case 2902: return "bao";    // 笣
        case 2904: return "shan";    // 笧
        case 2906: return "pei";    // 笩
        case 2908: return "ling";    // 笭
        case 2910: return "nu";    // 笯
        case 2912: return "fei";    // 笰
        case 2914: return "fan";    // 笲
        case 2916: return "gan";    // 笴
        case 2918: return "fan";    // 笵
        case 2920: return "shi";    // 笶
        case 2922: return "mao";    // 笷
        case 2924: return "xiao";    // 笹
        case 2926: return "qiong";    // 笻
        case 2928: return "min";    // 笽
        case 2930: return "luo";    // 笿
        case 2932: return "gui";    // 筀
        case 2934: return "qu";    // 筁
        case 2936: return "chi";    // 筂
        case 2938: return "yin";    // 筃
        case 2940: return "yao";    // 筄
        case 2942: return "bi";    // 筆
        case 2944: return "kuo";    // 筈
        case 2946: return "jiao";    // 筊
        case 2948: return "sun";    // 筍
        case 2950: return "ru";    // 筎
        case 2952: return "ji";    // 筓
        case 2954: return "hang";    // 筕
        case 2956: return "zhong";    // 筗
        case 2958: return "lai";    // 筙
        case 2960: return "dang";    // 筜
        case 2962: return "ce";    // 筞
        case 2964: return "fu";    // 筟
        case 2966: return "tu";    // 筡
        case 2968: return "li";    // 筣
        case 2970: return "lang";    // 筤
        case 2972: return "ju";    // 筥
        case 2974: return "guan";    // 筦
        case 2976: return "jian";    // 筧
        case 2978: return "han";    // 筨
        case 2980: return "yong";    // 筩
        case 2982: return "xia";    // 筪
        case 2984: return "zhi";    // 筫
        case 2986: return "cheng";    // 筬
        case 2988: return "suan";    // 筭
        case 2990: return "zhu";    // 筯
        case 2992: return "zuo";    // 筰
        case 2994: return "ting";    // 筳
        case 2996: return "jia";    // 筴
        case 2998: return "gao";    // 筶
        case 3000: return "gan";    // 筸
        case 3002: return "kuang";    // 筺
        case 3004: return "yun";    // 筼
        case 3006: return "o";    // 筽
        case 3008: return "xiao";    // 筿
        case 3010: return "bu";    // 箁
        case 3012: return "lai";    // 箂
        case 3014: return "bi";    // 箃
        case 3016: return "bi";    // 箄
        case 3018: return "bi";    // 箆
        case 3020: return "ge";    // 箇
        case 3022: return "tai";    // 箈
        case 3024: return "dai";    // 箉
        case 3026: return "yu";    // 箊
        case 3028: return "jian";    // 箋
        case 3030: return "dao";    // 箌
        case 3032: return "hu";    // 箎
        case 3034: return "zheng";    // 箏
        case 3036: return "";    // ?
        case 3038: return "zha";    // 箑
        case 3040: return "zhou";    // 箒
        case 3042: return "lu";    // 箓
        case 3044: return "lin";    // 箖
        case 3046: return "jun";    // 箘
        case 3048: return "fu";    // 箙
        case 3050: return "zha";    // 箚
        case 3052: return "gu";    // 箛
        case 3054: return "qian";    // 箞
        case 3056: return "jun";    // 箟
        case 3058: return "chui";    // 箠
        case 3060: return "ce";    // 箣
        case 3062: return "zu";    // 箤
        case 3064: return "bo";    // 箥
        case 3066: return "xuan";    // 箮
        case 3068: return "bian";    // 箯
        case 3070: return "sun";    // 箰
        case 3072: return "xian";    // 箲
        case 3074: return "ping";    // 箳
        case 3076: return "xing";    // 箵
        case 3078: return "hu";    // 箶
        case 3080: return "yi";    // 箷
        case 3082: return "yao";    // 箹
        case 3084: return "chun";    // 箺
        case 3086: return "lu";    // 箻
        case 3088: return "wu";    // 箼
        case 3090: return "dong";    // 箽
        case 3092: return "xiao";    // 箾
        case 3094: return "ji";    // 箿
        case 3096: return "jie";    // 節
        case 3098: return "xing";    // 篂
        case 3100: return "mei";    // 篃
        case 3102: return "fan";    // 範
        case 3104: return "duan";    // 篅
        case 3106: return "feng";    // 篈
        case 3108: return "zhu";    // 築
        case 3110: return "hong";    // 篊
        case 3112: return "qie";    // 篋
        case 3114: return "qiu";    // 篍
        case 3116: return "miao";    // 篎
        case 3118: return "qian";    // 篏
        case 3120: return "gu";    // 篐
        case 3122: return "shi";    // 篒
        case 3124: return "yun";    // 篔
        case 3126: return "he";    // 篕
        case 3128: return "tang";    // 篖
        case 3130: return "yue";    // 篗
        case 3132: return "chou";    // 篘
        case 3134: return "na";    // 篛
        case 3136: return "zheng";    // 篜
        case 3138: return "nie";    // 篞
        case 3140: return "qian";    // 篟
        case 3142: return "xiao";    // 篠
        case 3144: return "gan";    // 篢
        case 3146: return "pang";    // 篣
        case 3148: return "du";    // 篤
        case 3150: return "huo";    // 篧
        case 3152: return "chu";    // 篨
        case 3154: return "shai";    // 篩
        case 3156: return "zhu";    // 篫
        case 3158: return "qiang";    // 篬
        case 3160: return "long";    // 篭
        case 3162: return "jian";    // 篯
        case 3164: return "bu";    // 篰
        case 3166: return "hui";    // 篲
        case 3168: return "bi";    // 篳
        case 3170: return "di";    // 篴
        case 3172: return "cong";    // 篵
        case 3174: return "yan";    // 篶
        case 3176: return "zan";    // 篸
        case 3178: return "cuan";    // 篹
        case 3180: return "pi";    // 篺
        case 3182: return "biao";    // 篻
        case 3184: return "yu";    // 篽
        case 3186: return "tuan";    // 篿
        case 3188: return "zhai";    // 簀
        case 3190: return "shai";    // 簁
        case 3192: return "guo";    // 簂
        case 3194: return "yi";    // 簃
        case 3196: return "hu";    // 簄
        case 3198: return "chan";    // 簅
        case 3200: return "kou";    // 簆
        case 3202: return "ping";    // 簈
        case 3204: return "zao";    // 簉
        case 3206: return "ji";    // 簊
        case 3208: return "lou";    // 簍
        case 3210: return "ji";    // 簎
        case 3212: return "nian";    // 簐
        case 3214: return "sui";    // 簑
        case 3216: return "cuan";    // 簒
        case 3218: return "diao";    // 簓
        case 3220: return "suo";    // 簔
        case 3222: return "le";    // 簕
        case 3224: return "liang";    // 簗
        case 3226: return "xiao";    // 簘
        case 3228: return "bo";    // 簙
        case 3230: return "";    // ?
        case 3232: return "mi";    // 簚
        case 3234: return "shai";    // 簛
        case 3236: return "dang";    // 簜
        case 3238: return "liao";    // 簝
        case 3240: return "dan";    // 簞
        case 3242: return "fu";    // 簠
        case 3244: return "jian";    // 簡
        case 3246: return "min";    // 簢
        case 3248: return "kui";    // 簣
        case 3250: return "dai";    // 簤
        case 3252: return "jiao";    // 簥
        case 3254: return "zhuan";    // 簨
        case 3256: return "lao";    // 簩
        case 3258: return "xiao";    // 簫
        case 3260: return "lu";    // 簬
        case 3262: return "shi";    // 簭
        case 3264: return "zan";    // 簮
        case 3266: return "qi";    // 簯
        case 3268: return "pai";    // 簰
        case 3270: return "qi";    // 簱
        case 3272: return "pi";    // 簲
        case 3274: return "gan";    // 簳
        case 3276: return "ju";    // 簴
        case 3278: return "lu";    // 簵
        case 3280: return "lu";    // 簶
        case 3282: return "yan";    // 簷
        case 3284: return "dang";    // 簹
        case 3286: return "sai";    // 簺
        case 3288: return "ke";    // 簻
        case 3290: return "gou";    // 簼
        case 3292: return "qian";    // 簽
        case 3294: return "lian";    // 簾
        case 3296: return "shi";    // 籂
        case 3298: return "lan";    // 籃
        case 3300: return "kui";    // 籄
        case 3302: return "yu";    // 籅
        case 3304: return "yue";    // 籆
        case 3306: return "hao";    // 籇
        case 3308: return "jian";    // 籈
        case 3310: return "tai";    // 籉
        case 3312: return "ti";    // 籊
        case 3314: return "mi";    // 籋
        case 3316: return "chou";    // 籌
        case 3318: return "yi";    // 籎
        case 3320: return "qi";    // 籏
        case 3322: return "teng";    // 籐
        case 3324: return "zhuan";    // 籑
        case 3326: return "zhou";    // 籒
        case 3328: return "ban";    // 籓
        case 3330: return "shu";    // 籔
        case 3332: return "zhou";    // 籕
        case 3334: return "qian";    // 籖
        case 3336: return "zhuo";    // 籗
        case 3338: return "teng";    // 籘
        case 3340: return "lu";    // 籙
        case 3342: return "lu";    // 籚
        case 3344: return "jian";    // 籛
        case 3346: return "tuo";    // 籜
        case 3348: return "ying";    // 籝
        case 3350: return "yu";    // 籞
        case 3352: return "lai";    // 籟
        case 3354: return "long";    // 籠
        case 3356: return "qie";    // 籡
        case 3358: return "lian";    // 籢
        case 3360: return "lan";    // 籣
        case 3362: return "qian";    // 籤
        case 3364: return "yao";    // 籥
        case 3366: return "zhong";    // 籦
        case 3368: return "ju";    // 籧
        case 3370: return "lian";    // 籨
        case 3372: return "bian";    // 籩
        case 3374: return "duan";    // 籪
        case 3376: return "zuan";    // 籫
        case 3378: return "li";    // 籬
        case 3380: return "shi";    // 籭
        case 3382: return "luo";    // 籮
        case 3384: return "ying";    // 籯
        case 3386: return "yue";    // 籰
        case 3388: return "zhuo";    // 籱
        case 3390: return "yu";    // 籲
        case 3392: return "fan";    // 籵
        case 3394: return "shen";    // 籶
        case 3396: return "zhe";    // 籷
        case 3398: return "shen";    // 籸
        case 3400: return "nu";    // 籹
        case 3402: return "he";    // 籺
        case 3404: return "ni";    // 籾
        case 3406: return "cun";    // 籿
        case 3408: return "zhang";    // 粀
        case 3410: return "qian";    // 粁
        case 3412: return "zhai";    // 粂
        case 3414: return "bi";    // 粃
        case 3416: return "ban";    // 粄
        case 3418: return "wu";    // 粅
        case 3420: return "chao";    // 粆
        case 3422: return "kang";    // 粇
        case 3424: return "";    // ?
        case 3426: return "rou";    // 粈
        case 3428: return "bi";    // 粊
        case 3430: return "cui";    // 粋
        case 3432: return "yin";    // 粌
        case 3434: return "zhe";    // 粍
        case 3436: return "mi";    // 粎
        case 3438: return "tai";    // 粏
        case 3440: return "hu";    // 粐
        case 3442: return "gan";    // 粓
        case 3444: return "ju";    // 粔
        case 3446: return "mo";    // 粖
        case 3448: return "zhou";    // 粙
        case 3450: return "li";    // 粚
        case 3452: return "su";    // 粛
        case 3454: return "hong";    // 粠
        case 3456: return "tong";    // 粡
        case 3458: return "ce";    // 粣
        case 3460: return "lin";    // 粦
        case 3462: return "zhuan";    // 粧
        case 3464: return "bai";    // 粨
        case 3466: return "lao";    // 粩
        case 3468: return "er";    // 粫
        case 3470: return "qu";    // 粬
        case 3472: return "he";    // 粭
        case 3474: return "xian";    // 粯
        case 3476: return "fu";    // 粰
        case 3478: return "li";    // 粴
        case 3480: return "yue";    // 粵
        case 3482: return "lu";    // 粶
        case 3484: return "ju";    // 粷
        case 3486: return "qi";    // 粸
        case 3488: return "bai";    // 粺
        case 3490: return "zhang";    // 粻
        case 3492: return "guo";    // 粿
        case 3494: return "hua";    // 糀
        case 3496: return "san";    // 糂
        case 3498: return "tang";    // 糃
        case 3500: return "bian";    // 糄
        case 3502: return "mian";    // 糆
        case 3504: return "zong";    // 糉
        case 3506: return "jian";    // 糋
        case 3508: return "li";    // 糎
        case 3510: return "xie";    // 糏
        case 3512: return "fu";    // 糐
        case 3514: return "nuo";    // 糑
        case 3516: return "bei";    // 糒
        case 3518: return "gu";    // 糓
        case 3520: return "xiu";    // 糔
        case 3522: return "jia";    // 糘
        case 3524: return "zhuan";    // 糚
        case 3526: return "tang";    // 糛
        case 3528: return "san";    // 糝
        case 3530: return "fen";    // 糞
        case 3532: return "jiang";    // 糡
        case 3534: return "mo";    // 糢
        case 3536: return "san";    // 糣
        case 3538: return "san";    // 糤
        case 3540: return "nuo";    // 糥
        case 3542: return "xi";    // 糦
        case 3544: return "liang";    // 糧
        case 3546: return "kuai";    // 糩
        case 3548: return "bo";    // 糪
        case 3550: return "huan";    // 糫
        case 3552: return "shu";    // 糬
        case 3554: return "ji";    // 糭
        case 3556: return "han";    // 糮
        case 3558: return "tuan";    // 糰
        case 3560: return "nie";    // 糱
        case 3562: return "li";    // 糲
        case 3564: return "zuo";    // 糳
        case 3566: return "di";    // 糴
        case 3568: return "nie";    // 糵
        case 3570: return "tiao";    // 糶
        case 3572: return "lan";    // 糷
        case 3574: return "si";    // 糹
        case 3576: return "jiu";    // 糺
        case 3578: return "gong";    // 糼
        case 3580: return "zheng";    // 糽
        case 3582: return "jiu";    // 糾
        case 3584: return "you";    // 糿
        case 3586: return "ji";    // 紀
        case 3588: return "cha";    // 紁
        case 3590: return "zhou";    // 紂
        case 3592: return "xun";    // 紃
        case 3594: return "yue";    // 約
        case 3596: return "hong";    // 紅
        case 3598: return "yu";    // 紆
        case 3600: return "ge";    // 紇
        case 3602: return "wan";    // 紈
        case 3604: return "ren";    // 紉
        case 3606: return "wen";    // 紋
        case 3608: return "qiu";    // 紌
        case 3610: return "na";    // 納
        case 3612: return "zi";    // 紎
        case 3614: return "tou";    // 紏
        case 3616: return "niu";    // 紐
        case 3618: return "";    // ?
        case 3620: return "fou";    // 紑
        case 3622: return "ji";    // 紒
        case 3624: return "shu";    // 紓
        case 3626: return "chun";    // 純
        case 3628: return "pi";    // 紕
        case 3630: return "zhen";    // 紖
        case 3632: return "sha";    // 紗
        case 3634: return "hong";    // 紘
        case 3636: return "zhi";    // 紙
        case 3638: return "ji";    // 級
        case 3640: return "fen";    // 紛
        case 3642: return "yun";    // 紜
        case 3644: return "ren";    // 紝
        case 3646: return "dan";    // 紞
        case 3648: return "jin";    // 紟
        case 3650: return "fang";    // 紡
        case 3652: return "zu";    // 紣
        case 3654: return "jiu";    // 紤
        case 3656: return "zha";    // 紥
        case 3658: return "ba";    // 紦
        case 3660: return "fu";    // 紨
        case 3662: return "zhi";    // 紩
        case 3664: return "qi";    // 紪
        case 3666: return "chou";    // 紬
        case 3668: return "hong";    // 紭
        case 3670: return "za";    // 紮
        case 3672: return "xi";    // 細
        case 3674: return "fu";    // 紱
        case 3676: return "yi";    // 紲
        case 3678: return "shen";    // 紳
        case 3680: return "bo";    // 紴
        case 3682: return "zhu";    // 紵
        case 3684: return "qu";    // 紶
        case 3686: return "ling";    // 紷
        case 3688: return "zhu";    // 紸
        case 3690: return "shao";    // 紹
        case 3692: return "gan";    // 紺
        case 3694: return "yang";    // 紻
        case 3696: return "fei";    // 紼
        case 3698: return "tuo";    // 紽
        case 3700: return "tian";    // 紾
        case 3702: return "dai";    // 紿
        case 3704: return "chu";    // 絀
        case 3706: return "shi";    // 絁
        case 3708: return "zhong";    // 終
        case 3710: return "xuan";    // 絃
        case 3712: return "zu";    // 組
        case 3714: return "jiong";    // 絅
        case 3716: return "ban";    // 絆
        case 3718: return "qu";    // 絇
        case 3720: return "mo";    // 絈
        case 3722: return "shu";    // 絉
        case 3724: return "zui";    // 絊
        case 3726: return "kuang";    // 絋
        case 3728: return "jing";    // 経
        case 3730: return "ren";    // 絍
        case 3732: return "hang";    // 絎
        case 3734: return "yi";    // 絏
        case 3736: return "jie";    // 結
        case 3738: return "zhu";    // 絑
        case 3740: return "chou";    // 絒
        case 3742: return "gua";    // 絓
        case 3744: return "bai";    // 絔
        case 3746: return "jue";    // 絕
        case 3748: return "kuang";    // 絖
        case 3750: return "hu";    // 絗
        case 3752: return "ci";    // 絘
        case 3754: return "geng";    // 絙
        case 3756: return "geng";    // 絚
        case 3758: return "tao";    // 絛
        case 3760: return "jie";    // 絜
        case 3762: return "ku";    // 絝
        case 3764: return "jiao";    // 絞
        case 3766: return "quan";    // 絟
        case 3768: return "gai";    // 絠
        case 3770: return "luo";    // 絡
        case 3772: return "xuan";    // 絢
        case 3774: return "beng";    // 絣
        case 3776: return "xian";    // 絤
        case 3778: return "fu";    // 絥
        case 3780: return "gei";    // 給
        case 3782: return "dong";    // 絧
        case 3784: return "rong";    // 絨
        case 3786: return "diao";    // 絩
        case 3788: return "yin";    // 絪
        case 3790: return "lei";    // 絫
        case 3792: return "xie";    // 絬
        case 3794: return "juan";    // 絭
        case 3796: return "gai";    // 絯
        case 3798: return "die";    // 絰
        case 3800: return "tong";    // 統
        case 3802: return "si";    // 絲
        case 3804: return "jiang";    // 絳
        case 3806: return "xiang";    // 絴
        case 3808: return "gui";    // 絵
        case 3810: return "jue";    // 絶
        case 3812: return "";    // ?
        case 3814: return "jian";    // 絸
        case 3816: return "juan";    // 絹
        case 3818: return "zhi";    // 絺
        case 3820: return "wen";    // 絻
        case 3822: return "zhen";    // 絼
        case 3824: return "lu";    // 絽
        case 3826: return "cheng";    // 絾
        case 3828: return "qiu";    // 絿
        case 3830: return "shu";    // 綀
        case 3832: return "bang";    // 綁
        case 3834: return "tong";    // 綂
        case 3836: return "xiao";    // 綃
        case 3838: return "huan";    // 綄
        case 3840: return "qin";    // 綅
        case 3842: return "bing";    // 綆
        case 3844: return "xiu";    // 綇
        case 3846: return "ti";    // 綈
        case 3848: return "tou";    // 綉
        case 3850: return "xie";    // 綊
        case 3852: return "hong";    // 綋
        case 3854: return "xi";    // 綌
        case 3856: return "fu";    // 綍
        case 3858: return "ting";    // 綎
        case 3860: return "sui";    // 綏
        case 3862: return "dui";    // 綐
        case 3864: return "kun";    // 綑
        case 3866: return "fu";    // 綒
        case 3868: return "jing";    // 經
        case 3870: return "hu";    // 綔
        case 3872: return "zhi";    // 綕
        case 3874: return "yan";    // 綖
        case 3876: return "jiong";    // 綗
        case 3878: return "feng";    // 綘
        case 3880: return "ji";    // 継
        case 3882: return "xu";    // 続
        case 3884: return "ren";    // 綛
        case 3886: return "zong";    // 綜
        case 3888: return "chen";    // 綝
        case 3890: return "duo";    // 綞
        case 3892: return "li";    // 綟
        case 3894: return "lu";    // 綠
        case 3896: return "liang";    // 綡
        case 3898: return "chou";    // 綢
        case 3900: return "quan";    // 綣
        case 3902: return "chao";    // 綤
        case 3904: return "qi";    // 綥
        case 3906: return "zhun";    // 綧
        case 3908: return "qi";    // 綨
        case 3910: return "wan";    // 綩
        case 3912: return "qian";    // 綪
        case 3914: return "xian";    // 綫
        case 3916: return "shou";    // 綬
        case 3918: return "wei";    // 維
        case 3920: return "tao";    // 綯
        case 3922: return "wan";    // 綰
        case 3924: return "gang";    // 綱
        case 3926: return "wang";    // 網
        case 3928: return "beng";    // 綳
        case 3930: return "zhui";    // 綴
        case 3932: return "cai";    // 綵
        case 3934: return "guo";    // 綶
        case 3936: return "zu";    // 綷
        case 3938: return "lun";    // 綸
        case 3940: return "liu";    // 綹
        case 3942: return "qi";    // 綺
        case 3944: return "zhan";    // 綻
        case 3946: return "bi";    // 綼
        case 3948: return "chao";    // 綽
        case 3950: return "ling";    // 綾
        case 3952: return "mian";    // 綿
        case 3954: return "qi";    // 緀
        case 3956: return "qie";    // 緁
        case 3958: return "tan";    // 緂
        case 3960: return "zong";    // 緃
        case 3962: return "gun";    // 緄
        case 3964: return "zou";    // 緅
        case 3966: return "xi";    // 緆
        case 3968: return "zi";    // 緇
        case 3970: return "xing";    // 緈
        case 3972: return "liang";    // 緉
        case 3974: return "jin";    // 緊
        case 3976: return "fei";    // 緋
        case 3978: return "rui";    // 緌
        case 3980: return "min";    // 緍
        case 3982: return "yu";    // 緎
        case 3984: return "zong";    // 総
        case 3986: return "fan";    // 緐
        case 3988: return "lu";    // 緑
        case 3990: return "xu";    // 緒
        case 3992: return "ying";    // 緓
        case 3994: return "shang";    // 緔
        case 3996: return "qi";    // 緕
        case 3998: return "xu";    // 緖
        case 4000: return "xiang";    // 緗
        case 4002: return "jian";    // 緘
        case 4004: return "ke";    // 緙
        case 4006: return "";    // ?
        case 4008: return "xian";    // 線
        case 4010: return "ruan";    // 緛
        case 4012: return "mian";    // 緜
        case 4014: return "ji";    // 緝
        case 4016: return "duan";    // 緞
        case 4018: return "zhong";    // 緟
        case 4020: return "di";    // 締
        case 4022: return "min";    // 緡
        case 4024: return "mao";    // 緢
        case 4026: return "yuan";    // 緣
        case 4028: return "ye";    // 緤
        case 4030: return "bao";    // 緥
        case 4032: return "si";    // 緦
        case 4034: return "qiu";    // 緧
        case 4036: return "bian";    // 編
        case 4038: return "huan";    // 緩
        case 4040: return "geng";    // 緪
        case 4042: return "zong";    // 緫
        case 4044: return "mian";    // 緬
        case 4046: return "wei";    // 緭
        case 4048: return "fu";    // 緮
        case 4050: return "wei";    // 緯
        case 4052: return "tou";    // 緰
        case 4054: return "gou";    // 緱
        case 4056: return "miao";    // 緲
        case 4058: return "xie";    // 緳
        case 4060: return "lian";    // 練
        case 4062: return "zong";    // 緵
        case 4064: return "bian";    // 緶
        case 4066: return "yun";    // 緷
        case 4068: return "yin";    // 緸
        case 4070: return "ti";    // 緹
        case 4072: return "gua";    // 緺
        case 4074: return "zhi";    // 緻
        case 4076: return "wen";    // 緼
        case 4078: return "cheng";    // 緽
        case 4080: return "chan";    // 緾
        case 4082: return "dai";    // 緿
        case 4084: return "xia";    // 縀
        case 4086: return "yuan";    // 縁
        case 4088: return "zong";    // 縂
        case 4090: return "xu";    // 縃
        case 4092: return "sheng";    // 縄
        case 4094: return "wei";    // 縅
        case 4096: return "geng";    // 縆
        case 4098: return "seon";    // 縇
        case 4100: return "ying";    // 縈
        case 4102: return "jin";    // 縉
        case 4104: return "yi";    // 縊
        case 4106: return "zhui";    // 縋
        case 4108: return "ni";    // 縌
        case 4110: return "bang";    // 縍
        case 4112: return "gu";    // 縎
        case 4114: return "pan";    // 縏
        case 4116: return "zhou";    // 縐
        case 4118: return "jian";    // 縑
        case 4120: return "ci";    // 縒
        case 4122: return "quan";    // 縓
        case 4124: return "shuan";    // 縔
        case 4126: return "wen";    // 縕
        case 4128: return "xia";    // 縖
        case 4130: return "shuai";    // 縗
        case 4132: return "ji";    // 縘
        case 4134: return "rong";    // 縙
        case 4136: return "tao";    // 縚
        case 4138: return "fu";    // 縛
        case 4140: return "yun";    // 縜
        case 4142: return "zhen";    // 縝
        case 4144: return "gao";    // 縞
        case 4146: return "ru";    // 縟
        case 4148: return "hu";    // 縠
        case 4150: return "zeng";    // 縡
        case 4152: return "teng";    // 縢
        case 4154: return "xian";    // 縣
        case 4156: return "su";    // 縤
        case 4158: return "zhen";    // 縥
        case 4160: return "zong";    // 縦
        case 4162: return "tao";    // 縧
        case 4164: return "huang";    // 縨
        case 4166: return "cai";    // 縩
        case 4168: return "bi";    // 縪
        case 4170: return "feng";    // 縫
        case 4172: return "cu";    // 縬
        case 4174: return "li";    // 縭
        case 4176: return "suo";    // 縮
        case 4178: return "yin";    // 縯
        case 4180: return "xi";    // 縰
        case 4182: return "zong";    // 縱
        case 4184: return "lei";    // 縲
        case 4186: return "juan";    // 縳
        case 4188: return "qian";    // 縴
        case 4190: return "man";    // 縵
        case 4192: return "zhi";    // 縶
        case 4194: return "lu";    // 縷
        case 4196: return "mo";    // 縸
        case 4198: return "piao";    // 縹
        case 4200: return "";    // ?
        case 4202: return "lian";    // 縺
        case 4204: return "xuan";    // 縼
        case 4206: return "zong";    // 總
        case 4208: return "ji";    // 績
        case 4210: return "xian";    // 縿
        case 4212: return "cui";    // 繀
        case 4214: return "lu";    // 繂
        case 4216: return "beng";    // 繃
        case 4218: return "yi";    // 繄
        case 4220: return "sao";    // 繅
        case 4222: return "miu";    // 繆
        case 4224: return "qiang";    // 繈
        case 4226: return "hun";    // 繉
        case 4228: return "xian";    // 繊
        case 4230: return "ji";    // 繋
        case 4232: return "sha";    // 繌
        case 4234: return "xiu";    // 繍
        case 4236: return "ran";    // 繎
        case 4238: return "xuan";    // 繏
        case 4240: return "sui";    // 繐
        case 4242: return "jue";    // 繑
        case 4244: return "zeng";    // 繒
        case 4246: return "zuo";    // 繓
        case 4248: return "zhi";    // 織
        case 4250: return "shan";    // 繕
        case 4252: return "san";    // 繖
        case 4254: return "lin";    // 繗
        case 4256: return "yu";    // 繘
        case 4258: return "fan";    // 繙
        case 4260: return "liao";    // 繚
        case 4262: return "chao";    // 繛
        case 4264: return "zun";    // 繜
        case 4266: return "jian";    // 繝
        case 4268: return "rao";    // 繞
        case 4270: return "chan";    // 繟
        case 4272: return "rui";    // 繠
        case 4274: return "xiu";    // 繡
        case 4276: return "hui";    // 繢
        case 4278: return "hua";    // 繣
        case 4280: return "zuan";    // 繤
        case 4282: return "xi";    // 繥
        case 4284: return "qiang";    // 繦
        case 4286: return "yun";    // 繧
        case 4288: return "da";    // 繨
        case 4290: return "sheng";    // 繩
        case 4292: return "hui";    // 繪
        case 4294: return "ji";    // 繫
        case 4296: return "se";    // 繬
        case 4298: return "jian";    // 繭
        case 4300: return "jiang";    // 繮
        case 4302: return "huan";    // 繯
        case 4304: return "qiao";    // 繰
        case 4306: return "cong";    // 繱
        case 4308: return "jie";    // 繲
        case 4310: return "jiao";    // 繳
        case 4312: return "bi";    // 繴
        case 4314: return "dan";    // 繵
        case 4316: return "yi";    // 繶
        case 4318: return "nong";    // 繷
        case 4320: return "sui";    // 繸
        case 4322: return "yi";    // 繹
        case 4324: return "sha";    // 繺
        case 4326: return "xu";    // 繻
        case 4328: return "ji";    // 繼
        case 4330: return "bin";    // 繽
        case 4332: return "qian";    // 繾
        case 4334: return "lan";    // 繿
        case 4336: return "pu";    // 纀
        case 4338: return "xun";    // 纁
        case 4340: return "qi";    // 纃
        case 4342: return "peng";    // 纄
        case 4344: return "yao";    // 纅
        case 4346: return "mo";    // 纆
        case 4348: return "lei";    // 纇
        case 4350: return "xie";    // 纈
        case 4352: return "zuan";    // 纉
        case 4354: return "kuang";    // 纊
        case 4356: return "you";    // 纋
        case 4358: return "xu";    // 續
        case 4360: return "lei";    // 纍
        case 4362: return "jian";    // 纎
        case 4364: return "chan";    // 纏
        case 4366: return "jiao";    // 纐
        case 4368: return "lu";    // 纑
        case 4370: return "chan";    // 纒
        case 4372: return "ying";    // 纓
        case 4374: return "shan";    // 纔
        case 4376: return "xiang";    // 纕
        case 4378: return "xian";    // 纖
        case 4380: return "zui";    // 纗
        case 4382: return "zuan";    // 纘
        case 4384: return "luo";    // 纙
        case 4386: return "li";    // 纚
        case 4388: return "lan";    // 纜
        case 4390: return "lei";    // 纝
        case 4392: return "lian";    // 纞
        case 4394: return "";    // ?
        case 4396: return "hong";    // 纮
        case 4398: return "ren";    // 纴
        case 4400: return "zhu";    // 纻
        case 4402: return "zhen";    // 纼
        case 4404: return "die";    // 绖
        case 4406: return "xi";    // 绤
        case 4408: return "ying";    // 绬
        case 4410: return "tao";    // 绹
        case 4412: return "wen";    // 缊
        case 4414: return "xian";    // 缐
        case 4416: return "shuai";    // 缞
        case 4418: return "xie";    // 缷
        case 4420: return "fou";    // 缹
        case 4422: return "fou";    // 缻
        case 4424: return "qi";    // 缼
        case 4426: return "bo";    // 缽
        case 4428: return "ping";    // 缾
        case 4430: return "xiang";    // 缿
        case 4432: return "zhao";    // 罀
        case 4434: return "gang";    // 罁
        case 4436: return "ying";    // 罃
        case 4438: return "guan";    // 罆
        case 4440: return "zun";    // 罇
        case 4442: return "tan";    // 罈
        case 4444: return "cang";    // 罉
        case 4446: return "qi";    // 罊
        case 4448: return "weng";    // 罋
        case 4450: return "ying";    // 罌
        case 4452: return "lei";    // 罍
        case 4454: return "tan";    // 罎
        case 4456: return "lu";    // 罏
        case 4458: return "si";    // 罒
        case 4460: return "gang";    // 罓
        case 4462: return "ra";    // 罖
        case 4464: return "mi";    // 罙
        case 4466: return "gu";    // 罛
        case 4468: return "zhu";    // 罜
        case 4470: return "ju";    // 罝
        case 4472: return "mao";    // 罞
        case 4474: return "min";    // 罠
        case 4476: return "gua";    // 罣
        case 4478: return "ti";    // 罤
        case 4480: return "juan";    // 罥
        case 4482: return "fu";    // 罦
        case 4484: return "shen";    // 罧
        case 4486: return "gua";    // 罫
        case 4488: return "zhuo";    // 罬
        case 4490: return "yu";    // 罭
        case 4492: return "an";    // 罯
        case 4494: return "fa";    // 罰
        case 4496: return "si";    // 罳
        case 4498: return "ma";    // 罵
        case 4500: return "liu";    // 罶
        case 4502: return "ba";    // 罷
        case 4504: return "fa";    // 罸
        case 4506: return "chao";    // 罺
        case 4508: return "wei";    // 罻
        case 4510: return "bi";    // 罼
        case 4512: return "ji";    // 罽
        case 4514: return "chong";    // 罿
        case 4516: return "liu";    // 羀
        case 4518: return "juan";    // 羂
        case 4520: return "mi";    // 羃
        case 4522: return "zhao";    // 羄
        case 4524: return "luo";    // 羅
        case 4526: return "pi";    // 羆
        case 4528: return "ji";    // 羇
        case 4530: return "ji";    // 羈
        case 4532: return "luan";    // 羉
        case 4534: return "mi";    // 羋
        case 4536: return "da";    // 羍
        case 4538: return "yang";    // 羏
        case 4540: return "you";    // 羐
        case 4542: return "you";    // 羑
        case 4544: return "fen";    // 羒
        case 4546: return "ba";    // 羓
        case 4548: return "yang";    // 羕
        case 4550: return "gu";    // 羖
        case 4552: return "you";    // 羗
        case 4554: return "zang";    // 羘
        case 4556: return "mei";    // 羙
        case 4558: return "yi";    // 羛
        case 4560: return "zhu";    // 羜
        case 4562: return "yi";    // 羠
        case 4564: return "rong";    // 羢
        case 4566: return "qun";    // 羣
        case 4568: return "qiang";    // 羥
        case 4570: return "huan";    // 羦
        case 4572: return "xian";    // 羨
        case 4574: return "yi";    // 義
        case 4576: return "yang";    // 羪
        case 4578: return "kong";    // 羫
        case 4580: return "qian";    // 羬
        case 4582: return "yu";    // 羭
        case 4584: return "lang";    // 羮
        case 4586: return "yuan";    // 羱
        case 4588: return "";    // ?
        case 4590: return "fan";    // 羳
        case 4592: return "shan";    // 羴
        case 4594: return "fen";    // 羵
        case 4596: return "shan";    // 羶
        case 4598: return "lian";    // 羷
        case 4600: return "nou";    // 羺
        case 4602: return "qiang";    // 羻
        case 4604: return "gong";    // 羾
        case 4606: return "chong";    // 翀
        case 4608: return "fen";    // 翂
        case 4610: return "hong";    // 翃
        case 4612: return "chi";    // 翄
        case 4614: return "cui";    // 翆
        case 4616: return "fu";    // 翇
        case 4618: return "xia";    // 翈
        case 4620: return "ben";    // 翉
        case 4622: return "la";    // 翋
        case 4624: return "bi";    // 翍
        case 4626: return "liu";    // 翏
        case 4628: return "zhi";    // 翐
        case 4630: return "yu";    // 翑
        case 4632: return "xi";    // 習
        case 4634: return "xie";    // 翓
        case 4636: return "xi";    // 翖
        case 4638: return "ke";    // 翗
        case 4640: return "hui";    // 翙
        case 4642: return "hui";    // 翚
        case 4644: return "xiao";    // 翛
        case 4646: return "sha";    // 翜
        case 4648: return "hong";    // 翝
        case 4650: return "jiang";    // 翞
        case 4652: return "dao";    // 翢
        case 4654: return "sha";    // 翣
        case 4656: return "chi";    // 翤
        case 4658: return "xuan";    // 翧
        case 4660: return "chi";    // 翨
        case 4662: return "zong";    // 翪
        case 4664: return "wan";    // 翫
        case 4666: return "hui";    // 翬
        case 4668: return "hou";    // 翭
        case 4670: return "he";    // 翯
        case 4672: return "piao";    // 翲
        case 4674: return "lian";    // 翴
        case 4676: return "hou";    // 翵
        case 4678: return "ao";    // 翶
        case 4680: return "lin";    // 翷
        case 4682: return "pen";    // 翸
        case 4684: return "qiao";    // 翹
        case 4686: return "ao";    // 翺
        case 4688: return "hui";    // 翽
        case 4690: return "xuan";    // 翾
        case 4692: return "dao";    // 翿
        case 4694: return "lao";    // 耂
        case 4696: return "gou";    // 耇
        case 4698: return "gou";    // 耈
        case 4700: return "gou";    // 耉
        case 4702: return "die";    // 耊
        case 4704: return "nuo";    // 耎
        case 4706: return "er";    // 耏
        case 4708: return "zhuan";    // 耑
        case 4710: return "ting";    // 耓
        case 4712: return "pi";    // 耚
        case 4714: return "yi";    // 耛
        case 4716: return "qu";    // 耝
        case 4718: return "jia";    // 耞
        case 4720: return "ju";    // 耟
        case 4722: return "chu";    // 耡
        case 4724: return "lun";    // 耣
        case 4726: return "ji";    // 耤
        case 4728: return "zha";    // 耫
        case 4730: return "lou";    // 耬
        case 4732: return "ji";    // 耭
        case 4734: return "lao";    // 耮
        case 4736: return "huo";    // 耯
        case 4738: return "you";    // 耰
        case 4740: return "huai";    // 耲
        case 4742: return "yi";    // 耴
        case 4744: return "qin";    // 耹
        case 4746: return "ying";    // 耺
        case 4748: return "dan";    // 耼
        case 4750: return "hong";    // 耾
        case 4752: return "zhi";    // 聀
        case 4754: return "pan";    // 聁
        case 4756: return "zhen";    // 聄
        case 4758: return "che";    // 聅
        case 4760: return "zheng";    // 聇
        case 4762: return "you";    // 聈
        case 4764: return "wa";    // 聉
        case 4766: return "tiao";    // 聎
        case 4768: return "er";    // 聏
        case 4770: return "ya";    // 聐
        case 4772: return "tie";    // 聑
        case 4774: return "sei";    // 聓
        case 4776: return "hao";    // 聕
        case 4778: return "sheng";    // 聖
        case 4780: return "lie";    // 聗
        case 4782: return "";    // ?
        case 4784: return "jing";    // 聙
        case 4786: return "bi";    // 聛
        case 4788: return "di";    // 聜
        case 4790: return "guo";    // 聝
        case 4792: return "wen";    // 聞
        case 4794: return "xu";    // 聟
        case 4796: return "ping";    // 聠
        case 4798: return "cong";    // 聡
        case 4800: return "ding";    // 聢
        case 4802: return "ni";    // 聣
        case 4804: return "ting";    // 聤
        case 4806: return "ju";    // 聥
        case 4808: return "cong";    // 聦
        case 4810: return "kui";    // 聧
        case 4812: return "lian";    // 聨
        case 4814: return "lian";    // 聫
        case 4816: return "weng";    // 聬
        case 4818: return "kui";    // 聭
        case 4820: return "lian";    // 聮
        case 4822: return "lian";    // 聯
        case 4824: return "cong";    // 聰
        case 4826: return "sheng";    // 聲
        case 4828: return "song";    // 聳
        case 4830: return "ting";    // 聴
        case 4832: return "kui";    // 聵
        case 4834: return "nie";    // 聶
        case 4836: return "zhi";    // 職
        case 4838: return "dan";    // 聸
        case 4840: return "ning";    // 聹
        case 4842: return "qie";    // 聺
        case 4844: return "ni";    // 聻
        case 4846: return "ting";    // 聼
        case 4848: return "ting";    // 聽
        case 4850: return "long";    // 聾
        case 4852: return "zhao";    // 肁
        case 4854: return "si";    // 肂
        case 4856: return "su";    // 肅
        case 4858: return "zhao";    // 肈
        case 4860: return "yi";    // 肊
        case 4862: return "qiu";    // 肍
        case 4864: return "ken";    // 肎
        case 4866: return "cao";    // 肏
        case 4868: return "ge";    // 肐
        case 4870: return "bo";    // 肑
        case 4872: return "huan";    // 肒
        case 4874: return "chi";    // 肔
        case 4876: return "ren";    // 肕
        case 4878: return "ru";    // 肗
        case 4880: return "yuan";    // 肙
        case 4882: return "cha";    // 肞
        case 4884: return "han";    // 肣
        case 4886: return "ban";    // 肦
        case 4888: return "pei";    // 肧
        case 4890: return "pang";    // 肨
        case 4892: return "you";    // 肬
        case 4894: return "ran";    // 肰
        case 4896: return "wen";    // 肳
        case 4898: return "qi";    // 肵
        case 4900: return "bi";    // 肶
        case 4902: return "bi";    // 肸
        case 4904: return "xi";    // 肹
        case 4906: return "ken";    // 肻
        case 4908: return "die";    // 胅
        case 4910: return "bi";    // 胇
        case 4912: return "ba";    // 胈
        case 4914: return "bo";    // 胉
        case 4916: return "qu";    // 胊
        case 4918: return "tian";    // 胋
        case 4920: return "fei";    // 胏
        case 4922: return "fei";    // 胐
        case 4924: return "zhi";    // 胑
        case 4926: return "ni";    // 胒
        case 4928: return "peng";    // 胓
        case 4930: return "zi";    // 胔
        case 4932: return "fu";    // 胕
        case 4934: return "xian";    // 胘
        case 4936: return "mu";    // 胟
        case 4938: return "qu";    // 胠
        case 4940: return "ke";    // 胢
        case 4942: return "chi";    // 胣
        case 4944: return "yang";    // 胦
        case 4946: return "pang";    // 胮
        case 4948: return "zhi";    // 胵
        case 4950: return "xiong";    // 胷
        case 4952: return "er";    // 胹
        case 4954: return "heng";    // 胻
        case 4956: return "zi";    // 胾
        case 4958: return "gui";    // 胿
        case 4960: return "zheng";    // 脀
        case 4962: return "tiao";    // 脁
        case 4964: return "cui";    // 脃
        case 4966: return "mei";    // 脄
        case 4968: return "xie";    // 脅
        case 4970: return "xian";    // 脇
        case 4972: return "mai";    // 脈
        case 4974: return "xie";    // 脋
        case 4976: return "";    // ?
        case 4978: return "nin";    // 脌
        case 4980: return "wan";    // 脕
        case 4982: return "wen";    // 脗
        case 4984: return "xiu";    // 脙
        case 4986: return "jing";    // 脛
        case 4988: return "you";    // 脜
        case 4990: return "heng";    // 脝
        case 4992: return "lie";    // 脟
        case 4994: return "chan";    // 脠
        case 4996: return "ting";    // 脡
        case 4998: return "mei";    // 脢
        case 5000: return "chun";    // 脣
        case 5002: return "shen";    // 脤
        case 5004: return "jia";    // 脥
        case 5006: return "te";    // 脦
        case 5008: return "juan";    // 脧
        case 5010: return "ji";    // 脨
        case 5012: return "you";    // 脩
        case 5014: return "xin";    // 脪
        case 5016: return "tuo";    // 脫
        case 5018: return "cheng";    // 脭
        case 5020: return "tui";    // 脮
        case 5022: return "dou";    // 脰
        case 5024: return "nao";    // 脳
        case 5026: return "pi";    // 脴
        case 5028: return "gu";    // 脵
        case 5030: return "li";    // 脷
        case 5032: return "zhang";    // 脹
        case 5034: return "cui";    // 脺
        case 5036: return "jie";    // 脻
        case 5038: return "lang";    // 脼
        case 5040: return "shui";    // 脽
        case 5042: return "biao";    // 脿
        case 5044: return "lun";    // 腀
        case 5046: return "pian";    // 腁
        case 5048: return "lei";    // 腂
        case 5050: return "quan";    // 腃
        case 5052: return "hou";    // 腄
        case 5054: return "dan";    // 腅
        case 5056: return "nei";    // 腇
        case 5058: return "nai";    // 腉
        case 5060: return "dian";    // 腍
        case 5062: return "shen";    // 腎
        case 5064: return "zhui";    // 腏
        case 5066: return "ju";    // 腒
        case 5068: return "dong";    // 腖
        case 5070: return "pi";    // 腗
        case 5072: return "guo";    // 腘
        case 5074: return "wo";    // 腛
        case 5076: return "mei";    // 腜
        case 5078: return "ni";    // 腝
        case 5080: return "dun";    // 腞
        case 5082: return "chi";    // 腟
        case 5084: return "luo";    // 腡
        case 5086: return "ou";    // 腢
        case 5088: return "di";    // 腣
        case 5090: return "an";    // 腤
        case 5092: return "nao";    // 腦
        case 5094: return "shuan";    // 腨
        case 5096: return "yun";    // 腪
        case 5098: return "zhong";    // 腫
        case 5100: return "rou";    // 腬
        case 5102: return "dun";    // 腯
        case 5104: return "wei";    // 腲
        case 5106: return "jiao";    // 腳
        case 5108: return "jia";    // 腵
        case 5110: return "duan";    // 腶
        case 5112: return "bi";    // 腷
        case 5114: return "chang";    // 腸
        case 5116: return "qian";    // 膁
        case 5118: return "wa";    // 膃
        case 5120: return "shou";    // 膄
        case 5122: return "tang";    // 膅
        case 5124: return "su";    // 膆
        case 5126: return "zhui";    // 膇
        case 5128: return "yi";    // 膉
        case 5130: return "liao";    // 膋
        case 5132: return "ji";    // 膌
        case 5134: return "pi";    // 膍
        case 5136: return "xie";    // 膎
        case 5138: return "lu";    // 膐
        case 5140: return "ou";    // 膒
        case 5142: return "chang";    // 膓
        case 5144: return "biao";    // 膔
        case 5146: return "guo";    // 膕
        case 5148: return "pang";    // 膖
        case 5150: return "chuai";    // 膗
        case 5152: return "jiang";    // 膙
        case 5154: return "fu";    // 膚
        case 5156: return "zhuan";    // 膞
        case 5158: return "lu";    // 膟
        case 5160: return "jiao";    // 膠
        case 5162: return "ying";    // 膡
        case 5164: return "lou";    // 膢
        case 5166: return "xue";    // 膤
        case 5168: return "cen";    // 膥
        case 5170: return "";    // ?
        case 5172: return "tong";    // 膧
        case 5174: return "ni";    // 膩
        case 5176: return "liao";    // 膫
        case 5178: return "cui";    // 膬
        case 5180: return "gui";    // 膭
        case 5182: return "xiao";    // 膮
        case 5184: return "teng";    // 膯
        case 5186: return "pan";    // 膰
        case 5188: return "zhi";    // 膱
        case 5190: return "jiao";    // 膲
        case 5192: return "wu";    // 膴
        case 5194: return "cui";    // 膵
        case 5196: return "yen";    // 膶
        case 5198: return "xiang";    // 膷
        case 5200: return "wei";    // 膸
        case 5202: return "fen";    // 膹
        case 5204: return "zhua";    // 膼
        case 5206: return "dan";    // 膽
        case 5208: return "kuai";    // 膾
        case 5210: return "nong";    // 膿
        case 5212: return "ju";    // 臄
        case 5214: return "chu";    // 臅
        case 5216: return "juan";    // 臇
        case 5218: return "la";    // 臈
        case 5220: return "lian";    // 臉
        case 5222: return "tun";    // 臋
        case 5224: return "qi";    // 臍
        case 5226: return "cui";    // 臎
        case 5228: return "bin";    // 臏
        case 5230: return "xun";    // 臐
        case 5232: return "nao";    // 臑
        case 5234: return "qu";    // 臒
        case 5236: return "zang";    // 臓
        case 5238: return "xian";    // 臔
        case 5240: return "biao";    // 臕
        case 5242: return "xing";    // 臖
        case 5244: return "kun";    // 臗
        case 5246: return "la";    // 臘
        case 5248: return "yan";    // 臙
        case 5250: return "lu";    // 臚
        case 5252: return "huo";    // 臛
        case 5254: return "za";    // 臜
        case 5256: return "luo";    // 臝
        case 5258: return "qu";    // 臞
        case 5260: return "zang";    // 臟
        case 5262: return "luan";    // 臠
        case 5264: return "ni";    // 臡
        case 5266: return "za";    // 臢
        case 5268: return "qian";    // 臤
        case 5270: return "wo";    // 臥
        case 5272: return "guang";    // 臦
        case 5274: return "lin";    // 臨
        case 5276: return "guang";    // 臩
        case 5278: return "jiao";    // 臫
        case 5280: return "ji";    // 臮
        case 5282: return "gao";    // 臯
        case 5284: return "xiu";    // 臰
        case 5286: return "bian";    // 臱
        case 5288: return "nie";    // 臲
        case 5290: return "ge";    // 臵
        case 5292: return "jian";    // 臶
        case 5294: return "die";    // 臷
        case 5296: return "jin";    // 臸
        case 5298: return "xiu";    // 臹
        case 5300: return "tai";    // 臺
        case 5302: return "xian";    // 臽
        case 5304: return "cha";    // 臿
        case 5306: return "tuo";    // 舃
        case 5308: return "yu";    // 與
        case 5310: return "xing";    // 興
        case 5312: return "ju";    // 舉
        case 5314: return "jiu";    // 舊
        case 5316: return "xin";    // 舋
        case 5318: return "she";    // 舎
        case 5320: return "jiu";    // 舏
        case 5322: return "tan";    // 舑
        case 5324: return "shi";    // 舓
        case 5326: return "tan";    // 舕
        case 5328: return "pu";    // 舖
        case 5330: return "pu";    // 舗
        case 5332: return "guan";    // 舘
        case 5334: return "hua";    // 舙
        case 5336: return "tian";    // 舚
        case 5338: return "xia";    // 舝
        case 5340: return "dao";    // 舠
        case 5342: return "fan";    // 舤
        case 5344: return "pa";    // 舥
        case 5346: return "tai";    // 舦
        case 5348: return "fan";    // 舧
        case 5350: return "fan";    // 舩
        case 5352: return "lu";    // 舮
        case 5354: return "ling";    // 舲
        case 5356: return "xia";    // 舺
        case 5358: return "hong";    // 舼
        case 5360: return "pang";    // 舽
        case 5362: return "kua";    // 舿
        case 5364: return "";    // ?
        case 5366: return "fu";    // 艀
        case 5368: return "zao";    // 艁
        case 5370: return "feng";    // 艂
        case 5372: return "li";    // 艃
        case 5374: return "yu";    // 艅
        case 5376: return "lang";    // 艆
        case 5378: return "yu";    // 艈
        case 5380: return "bo";    // 艊
        case 5382: return "nian";    // 艌
        case 5384: return "ju";    // 艍
        case 5386: return "huang";    // 艎
        case 5388: return "ke";    // 艐
        case 5390: return "bian";    // 艑
        case 5392: return "mo";    // 艒
        case 5394: return "die";    // 艓
        case 5396: return "dou";    // 艔
        case 5398: return "bang";    // 艕
        case 5400: return "cha";    // 艖
        case 5402: return "yi";    // 艗
        case 5404: return "cang";    // 艙
        case 5406: return "lou";    // 艛
        case 5408: return "dai";    // 艜
        case 5410: return "xue";    // 艝
        case 5412: return "yao";    // 艞
        case 5414: return "deng";    // 艠
        case 5416: return "dang";    // 艡
        case 5418: return "qiang";    // 艢
        case 5420: return "lu";    // 艣
        case 5422: return "yi";    // 艤
        case 5424: return "ji";    // 艥
        case 5426: return "jian";    // 艦
        case 5428: return "wo";    // 艧
        case 5430: return "qi";    // 艩
        case 5432: return "lu";    // 艪
        case 5434: return "lu";    // 艫
        case 5436: return "chan";    // 艬
        case 5438: return "shuan";    // 艭
        case 5440: return "jian";    // 艱
        case 5442: return "ping";    // 艵
        case 5444: return "yan";    // 艶
        case 5446: return "yan";    // 艷
        case 5448: return "cao";    // 艸
        case 5450: return "le";    // 艻
        case 5452: return "ding";    // 艼
        case 5454: return "tiao";    // 芀
        case 5456: return "jiao";    // 芁
        case 5458: return "peng";    // 芃
        case 5460: return "yi";    // 芅
        case 5462: return "cha";    // 芆
        case 5464: return "mian";    // 芇
        case 5466: return "gan";    // 芉
        case 5468: return "yu";    // 芌
        case 5470: return "hu";    // 芐
        case 5472: return "zi";    // 芓
        case 5474: return "hu";    // 芔
        case 5476: return "sui";    // 芕
        case 5478: return "zhi";    // 芖
        case 5480: return "tun";    // 芚
        case 5482: return "wei";    // 芛
        case 5484: return "qi";    // 芞
        case 5486: return "wen";    // 芠
        case 5488: return "ren";    // 芢
        case 5490: return "fou";    // 芣
        case 5492: return "xu";    // 芧
        case 5494: return "hua";    // 芲
        case 5496: return "jue";    // 芵
        case 5498: return "ji";    // 芶
        case 5500: return "ao";    // 芺
        case 5502: return "zou";    // 芻
        case 5504: return "mao";    // 芼
        case 5506: return "reng";    // 芿
        case 5508: return "hang";    // 苀
        case 5510: return "yin";    // 苂
        case 5512: return "you";    // 苃
        case 5514: return "yi";    // 苅
        case 5516: return "qie";    // 苆
        case 5518: return "pi";    // 苉
        case 5520: return "di";    // 苐
        case 5522: return "di";    // 苖
        case 5524: return "li";    // 苙
        case 5526: return "yong";    // 苚
        case 5528: return "bei";    // 苝
        case 5530: return "yi";    // 苢
        case 5532: return "zhu";    // 苧
        case 5534: return "ni";    // 苨
        case 5536: return "bo";    // 苩
        case 5538: return "bing";    // 苪
        case 5540: return "xiu";    // 苬
        case 5542: return "yao";    // 苭
        case 5544: return "xian";    // 苮
        case 5546: return "hong";    // 苰
        case 5548: return "zha";    // 苲
        case 5550: return "dong";    // 苳
        case 5552: return "die";    // 苵
        case 5554: return "nie";    // 苶
        case 5556: return "hu";    // 苸
        case 5558: return "";    // ?
        case 5560: return "mei";    // 苺
        case 5562: return "sheng";    // 苼
        case 5564: return "gu";    // 苽
        case 5566: return "bi";    // 苾
        case 5568: return "wei";    // 苿
        case 5570: return "bo";    // 茀
        case 5572: return "zi";    // 茊
        case 5574: return "zhi";    // 茋
        case 5576: return "ji";    // 茍
        case 5578: return "cong";    // 茐
        case 5580: return "yuan";    // 茒
        case 5582: return "xue";    // 茓
        case 5584: return "luo";    // 茖
        case 5586: return "li";    // 茘
        case 5588: return "rong";    // 茙
        case 5590: return "zhi";    // 茝
        case 5592: return "chen";    // 茞
        case 5594: return "wei";    // 茟
        case 5596: return "hao";    // 茠
        case 5598: return "zi";    // 茡
        case 5600: return "lie";    // 茢
        case 5602: return "wu";    // 茣
        case 5604: return "duo";    // 茤
        case 5606: return "gui";    // 茥
        case 5608: return "ci";    // 茦
        case 5610: return "gou";    // 茩
        case 5612: return "guang";    // 茪
        case 5614: return "niao";    // 茮
        case 5616: return "yu";    // 茰
        case 5618: return "zi";    // 茲
        case 5620: return "pei";    // 茷
        case 5622: return "mang";    // 茻
        case 5624: return "zhong";    // 茽
        case 5626: return "qian";    // 茾
        case 5628: return "zhu";    // 茿
        case 5630: return "huan";    // 荁
        case 5632: return "fu";    // 荂
        case 5634: return "gai";    // 荄
        case 5636: return "da";    // 荅
        case 5638: return "chuan";    // 荈
        case 5640: return "jing";    // 荊
        case 5642: return "er";    // 荋
        case 5644: return "an";    // 荌
        case 5646: return "qiao";    // 荍
        case 5648: return "qi";    // 荎
        case 5650: return "peng";    // 荓
        case 5652: return "jin";    // 荕
        case 5654: return "lao";    // 荖
        case 5656: return "shu";    // 荗
        case 5658: return "zhuan";    // 荘
        case 5660: return "da";    // 荙
        case 5662: return "ce";    // 荝
        case 5664: return "yu";    // 荢
        case 5666: return "du";    // 荰
        case 5668: return "wei";    // 荱
        case 5670: return "li";    // 荲
        case 5672: return "dou";    // 荳
        case 5674: return "fu";    // 荴
        case 5676: return "ren";    // 荵
        case 5678: return "yin";    // 荶
        case 5680: return "bu";    // 荹
        case 5682: return "yun";    // 荺
        case 5684: return "sui";    // 荾
        case 5686: return "cheng";    // 荿
        case 5688: return "nong";    // 莀
        case 5690: return "wu";    // 莁
        case 5692: return "bie";    // 莂
        case 5694: return "xi";    // 莃
        case 5696: return "geng";    // 莄
        case 5698: return "zhu";    // 莇
        case 5700: return "mo";    // 莈
        case 5702: return "zhuan";    // 莊
        case 5704: return "ji";    // 莋
        case 5706: return "tuo";    // 莌
        case 5708: return "qiu";    // 莍
        case 5710: return "suo";    // 莏
        case 5712: return "chen";    // 莐
        case 5714: return "peng";    // 莑
        case 5716: return "meng";    // 莔
        case 5718: return "xing";    // 莕
        case 5720: return "jing";    // 莖
        case 5722: return "che";    // 莗
        case 5724: return "jun";    // 莙
        case 5726: return "yan";    // 莚
        case 5728: return "cuo";    // 莝
        case 5730: return "han";    // 莟
        case 5732: return "cuo";    // 莡
        case 5734: return "jia";    // 莢
        case 5736: return "wang";    // 莣
        case 5738: return "you";    // 莤
        case 5740: return "niu";    // 莥
        case 5742: return "xiao";    // 莦
        case 5744: return "xian";    // 莧
        case 5746: return "wan";    // 莬
        case 5748: return "jie";    // 莭
        case 5750: return "nan";    // 莮
        case 5752: return "";    // ?
        case 5754: return "mu";    // 莯
        case 5756: return "tu";    // 莵
        case 5758: return "neus";    // 莻
        case 5760: return "mang";    // 莾
        case 5762: return "ci";    // 莿
        case 5764: return "di";    // 菂
        case 5766: return "qu";    // 菃
        case 5768: return "dong";    // 菄
        case 5770: return "zou";    // 菆
        case 5772: return "la";    // 菈
        case 5774: return "lu";    // 菉
        case 5776: return "wei";    // 菋
        case 5778: return "nie";    // 菍
        case 5780: return "kun";    // 菎
        case 5782: return "pu";    // 菐
        case 5784: return "zi";    // 菑
        case 5786: return "gao";    // 菒
        case 5788: return "guo";    // 菓
        case 5790: return "lun";    // 菕
        case 5792: return "chou";    // 菗
        case 5794: return "chui";    // 菙
        case 5796: return "zhan";    // 菚
        case 5798: return "men";    // 菛
        case 5800: return "li";    // 菞
        case 5802: return "bao";    // 菢
        case 5804: return "qin";    // 菣
        case 5806: return "juan";    // 菤
        case 5808: return "qin";    // 菦
        case 5810: return "di";    // 菧
        case 5812: return "jie";    // 菨
        case 5814: return "jin";    // 菫
        case 5816: return "qiao";    // 菬
        case 5818: return "tai";    // 菭
        case 5820: return "geng";    // 菮
        case 5822: return "hua";    // 華
        case 5824: return "qin";    // 菳
        case 5826: return "yan";    // 菴
        case 5828: return "wang";    // 菵
        case 5830: return "beng";    // 菶
        case 5832: return "zhou";    // 菷
        case 5834: return "jian";    // 菺
        case 5836: return "lin";    // 菻
        case 5838: return "tan";    // 菼
        case 5840: return "tian";    // 菾
        case 5842: return "dao";    // 菿
        case 5844: return "hu";    // 萀
        case 5846: return "he";    // 萂
        case 5848: return "chun";    // 萅
        case 5850: return "chang";    // 萇
        case 5852: return "huan";    // 萈
        case 5854: return "fei";    // 萉
        case 5856: return "lai";    // 萊
        case 5858: return "sha";    // 萐
        case 5860: return "yan";    // 萒
        case 5862: return "yi";    // 萓
        case 5864: return "tiao";    // 萔
        case 5866: return "ji";    // 萕
        case 5868: return "guan";    // 萖
        case 5870: return "ce";    // 萗
        case 5872: return "zhen";    // 萙
        case 5874: return "tuo";    // 萚
        case 5876: return "jiu";    // 萛
        case 5878: return "bi";    // 萞
        case 5880: return "yi";    // 萟
        case 5882: return "meng";    // 萠
        case 5884: return "be";    // 萡
        case 5886: return "pao";    // 萢
        case 5888: return "ding";    // 萣
        case 5890: return "jiao";    // 萩
        case 5892: return "ke";    // 萪
        case 5894: return "xiang";    // 萫
        case 5896: return "wan";    // 萬
        case 5898: return "yu";    // 萭
        case 5900: return "yu";    // 萮
        case 5902: return "fu";    // 萯
        case 5904: return "lian";    // 萰
        case 5906: return "xuan";    // 萲
        case 5908: return "nan";    // 萳
        case 5910: return "ce";    // 萴
        case 5912: return "wo";    // 萵
        case 5914: return "chun";    // 萶
        case 5916: return "xiao";    // 萷
        case 5918: return "bian";    // 萹
        case 5920: return "mao";    // 萺
        case 5922: return "an";    // 萻
        case 5924: return "ying";    // 萾
        case 5926: return "kuo";    // 萿
        case 5928: return "kuo";    // 葀
        case 5930: return "jiang";    // 葁
        case 5932: return "mian";    // 葂
        case 5934: return "ze";    // 葃
        case 5936: return "zuo";    // 葄
        case 5938: return "ju";    // 葅
        case 5940: return "rou";    // 葇
        case 5942: return "xi";    // 葈
        case 5944: return "ye";    // 葉
        case 5946: return "";    // ?
        case 5948: return "an";    // 葊
        case 5950: return "qu";    // 葋
        case 5952: return "jian";    // 葌
        case 5954: return "fu";    // 葍
        case 5956: return "lu";    // 葎
        case 5958: return "jian";    // 葏
        case 5960: return "pen";    // 葐
        case 5962: return "hong";    // 葒
        case 5964: return "hong";    // 葓
        case 5966: return "hou";    // 葔
        case 5968: return "yan";    // 葕
        case 5970: return "tu";    // 葖
        case 5972: return "zi";    // 葘
        case 5974: return "jing";    // 葝
        case 5976: return "mi";    // 葞
        case 5978: return "huang";    // 葟
        case 5980: return "shen";    // 葠
        case 5982: return "gai";    // 葢
        case 5984: return "zhou";    // 葤
        case 5986: return "jian";    // 葥
        case 5988: return "wei";    // 葦
        case 5990: return "bo";    // 葧
        case 5992: return "wei";    // 葨
        case 5994: return "ji";    // 葪
        case 5996: return "duan";    // 葮
        case 5998: return "yao";    // 葯
        case 6000: return "jun";    // 葰
        case 6002: return "quan";    // 葲
        case 6004: return "qian";    // 葴
        case 6006: return "hun";    // 葷
        case 6008: return "shi";    // 葹
        case 6010: return "lan";    // 葻
        case 6012: return "zong";    // 葼
        case 6014: return "yao";    // 葽
        case 6016: return "yuan";    // 葾
        case 6018: return "mei";    // 葿
        case 6020: return "yun";    // 蒀
        case 6022: return "shu";    // 蒁
        case 6024: return "zhuan";    // 蒃
        case 6026: return "guan";    // 蒄
        case 6028: return "ran";    // 蒅
        case 6030: return "xue";    // 蒆
        case 6032: return "hua";    // 蒊
        case 6034: return "wei";    // 蒍
        case 6036: return "you";    // 蒏
        case 6038: return "sou";    // 蒐
        case 6040: return "yin";    // 蒑
        case 6042: return "shi";    // 蒒
        case 6044: return "chun";    // 蒓
        case 6046: return "shi";    // 蒔
        case 6048: return "yun";    // 蒕
        case 6050: return "zhen";    // 蒖
        case 6052: return "na";    // 蒘
        case 6054: return "li";    // 蒚
        case 6056: return "que";    // 蒛
        case 6058: return "yuan";    // 蒝
        case 6060: return "li";    // 蒞
        case 6062: return "ju";    // 蒟
        case 6064: return "xi";    // 蒠
        case 6066: return "chu";    // 蒢
        case 6068: return "xu";    // 蒣
        case 6070: return "tu";    // 蒤
        case 6072: return "liu";    // 蒥
        case 6074: return "wo";    // 蒦
        case 6076: return "dian";    // 蒧
        case 6078: return "qian";    // 蒨
        case 6080: return "ju";    // 蒩
        case 6082: return "po";    // 蒪
        case 6084: return "cuo";    // 蒫
        case 6086: return "yuan";    // 蒬
        case 6088: return "chu";    // 蒭
        case 6090: return "yu";    // 蒮
        case 6092: return "pan";    // 蒰
        case 6094: return "pu";    // 蒱
        case 6096: return "na";    // 蒳
        case 6098: return "xi";    // 蒵
        case 6100: return "fen";    // 蒶
        case 6102: return "yun";    // 蒷
        case 6104: return "ruo";    // 蒻
        case 6106: return "cang";    // 蒼
        case 6108: return "mi";    // 蒾
        case 6110: return "sun";    // 蓀
        case 6112: return "mi";    // 蓂
        case 6114: return "sou";    // 蓃
        case 6116: return "liu";    // 蓅
        case 6118: return "xi";    // 蓆
        case 6120: return "gu";    // 蓇
        case 6122: return "lang";    // 蓈
        case 6124: return "gai";    // 蓋
        case 6126: return "cuo";    // 蓌
        case 6128: return "tang";    // 蓎
        case 6130: return "luo";    // 蓏
        case 6132: return "xuan";    // 蓒
        case 6134: return "yao";    // 蓔
        case 6136: return "gui";    // 蓕
        case 6138: return "zong";    // 蓗
        case 6140: return "";    // ?
        case 6142: return "gun";    // 蓘
        case 6144: return "zuo";    // 蓙
        case 6146: return "tiao";    // 蓚
        case 6148: return "ce";    // 蓛
        case 6150: return "pei";    // 蓜
        case 6152: return "dan";    // 蓞
        case 6154: return "shen";    // 蓡
        case 6156: return "lang";    // 蓢
        case 6158: return "ling";    // 蓤
        case 6160: return "you";    // 蓧
        case 6162: return "tiao";    // 蓨
        case 6164: return "mao";    // 蓩
        case 6166: return "tong";    // 蓪
        case 6168: return "zhu";    // 蓫
        case 6170: return "an";    // 蓭
        case 6172: return "lian";    // 蓮
        case 6174: return "zong";    // 蓯
        case 6176: return "ping";    // 蓱
        case 6178: return "ou";    // 蓲
        case 6180: return "jin";    // 蓳
        case 6182: return "tuan";    // 蓴
        case 6184: return "jie";    // 蓵
        case 6186: return "wei";    // 蓶
        case 6188: return "tui";    // 蓷
        case 6190: return "cao";    // 蓸
        case 6192: return "yu";    // 蓹
        case 6194: return "yi";    // 蓺
        case 6196: return "ju";    // 蓻
        case 6198: return "bi";    // 蓽
        case 6200: return "lu";    // 蓾
        case 6202: return "bu";    // 蔀
        case 6204: return "zhang";    // 蔁
        case 6206: return "lei";    // 蔂
        case 6208: return "jiang";    // 蔃
        case 6210: return "man";    // 蔄
        case 6212: return "yan";    // 蔅
        case 6214: return "ling";    // 蔆
        case 6216: return "ji";    // 蔇
        case 6218: return "biao";    // 蔈
        case 6220: return "gun";    // 蔉
        case 6222: return "han";    // 蔊
        case 6224: return "di";    // 蔋
        case 6226: return "lu";    // 蔍
        case 6228: return "she";    // 蔎
        case 6230: return "shang";    // 蔏
        case 6232: return "di";    // 蔐
        case 6234: return "hun";    // 蔒
        case 6236: return "bo";    // 蔔
        case 6238: return "di";    // 蔕
        case 6240: return "cu";    // 蔖
        case 6242: return "shen";    // 蔘
        case 6244: return "xuan";    // 蔙
        case 6246: return "hu";    // 蔛
        case 6248: return "ao";    // 蔜
        case 6250: return "mi";    // 蔝
        case 6252: return "lou";    // 蔞
        case 6254: return "zhong";    // 蔠
        case 6256: return "bo";    // 蔢
        case 6258: return "jiang";    // 蔣
        case 6260: return "mi";    // 蔤
        case 6262: return "cong";    // 蔥
        case 6264: return "niao";    // 蔦
        case 6266: return "hui";    // 蔧
        case 6268: return "juan";    // 蔨
        case 6270: return "yin";    // 蔩
        case 6272: return "jian";    // 蔪
        case 6274: return "yin";    // 蔭
        case 6276: return "guo";    // 蔮
        case 6278: return "chen";    // 蔯
        case 6280: return "hu";    // 蔰
        case 6282: return "sha";    // 蔱
        case 6284: return "kou";    // 蔲
        case 6286: return "qian";    // 蔳
        case 6288: return "ma";    // 蔴
        case 6290: return "zang";    // 蔵
        case 6292: return "ze";    // 蔶
        case 6294: return "li";    // 蔾
        case 6296: return "wei";    // 蔿
        case 6298: return "ji";    // 蕀
        case 6300: return "tan";    // 蕁
        case 6302: return "sheng";    // 蕂
        case 6304: return "meng";    // 蕄
        case 6306: return "ou";    // 蕅
        case 6308: return "chan";    // 蕆
        case 6310: return "dian";    // 蕇
        case 6312: return "juan";    // 蕋
        case 6314: return "lei";    // 蕌
        case 6316: return "yu";    // 蕍
        case 6318: return "qiao";    // 蕎
        case 6320: return "zhu";    // 蕏
        case 6322: return "hua";    // 蕐
        case 6324: return "jian";    // 蕑
        case 6326: return "mai";    // 蕒
        case 6328: return "yun";    // 蕓
        case 6330: return "bao";    // 蕔
        case 6332: return "you";    // 蕕
        case 6334: return "";    // ?
        case 6336: return "lu";    // 蕗
        case 6338: return "yao";    // 蕘
        case 6340: return "e";    // 蕚
        case 6342: return "ti";    // 蕛
        case 6344: return "fei";    // 蕜
        case 6346: return "jue";    // 蕝
        case 6348: return "fa";    // 蕟
        case 6350: return "ru";    // 蕠
        case 6352: return "fei";    // 蕡
        case 6354: return "kuai";    // 蕢
        case 6356: return "shun";    // 蕣
        case 6358: return "ya";    // 蕥
        case 6360: return "xu";    // 蕦
        case 6362: return "fu";    // 蕧
        case 6364: return "dang";    // 蕩
        case 6366: return "wu";    // 蕪
        case 6368: return "dong";    // 蕫
        case 6370: return "si";    // 蕬
        case 6372: return "xiao";    // 蕭
        case 6374: return "xi";    // 蕮
        case 6376: return "long";    // 蕯
        case 6378: return "wen";    // 蕰
        case 6380: return "shao";    // 蕱
        case 6382: return "jian";    // 蕳
        case 6384: return "sun";    // 蕵
        case 6386: return "ling";    // 蕶
        case 6388: return "yu";    // 蕷
        case 6390: return "xia";    // 蕸
        case 6392: return "si";    // 蕼
        case 6394: return "nong";    // 蕽
        case 6396: return "xuan";    // 蕿
        case 6398: return "wen";    // 薀
        case 6400: return "yu";    // 薁
        case 6402: return "xi";    // 薂
        case 6404: return "hao";    // 薃
        case 6406: return "ai";    // 薆
        case 6408: return "hui";    // 薈
        case 6410: return "hui";    // 薉
        case 6412: return "ji";    // 薊
        case 6414: return "zi";    // 薋
        case 6416: return "xiang";    // 薌
        case 6418: return "wan";    // 薍
        case 6420: return "mie";    // 薎
        case 6422: return "leng";    // 薐
        case 6424: return "jiang";    // 薑
        case 6426: return "can";    // 薒
        case 6428: return "shen";    // 薓
        case 6430: return "qiang";    // 薔
        case 6432: return "lian";    // 薕
        case 6434: return "ke";    // 薖
        case 6436: return "yuan";    // 薗
        case 6438: return "da";    // 薘
        case 6440: return "ti";    // 薙
        case 6442: return "tang";    // 薚
        case 6444: return "zhan";    // 薝
        case 6446: return "sun";    // 薞
        case 6448: return "lian";    // 薟
        case 6450: return "fan";    // 薠
        case 6452: return "ding";    // 薡
        case 6454: return "xie";    // 薢
        case 6456: return "gu";    // 薣
        case 6458: return "zhu";    // 薥
        case 6460: return "jian";    // 薦
        case 6462: return "kao";    // 薧
        case 6464: return "sa";    // 薩
        case 6466: return "xun";    // 薫
        case 6468: return "yao";    // 薬
        case 6470: return "bai";    // 薭
        case 6472: return "dui";    // 薱
        case 6474: return "pin";    // 薲
        case 6476: return "wei";    // 薳
        case 6478: return "ning";    // 薴
        case 6480: return "zhou";    // 薵
        case 6482: return "wo";    // 薶
        case 6484: return "piao";    // 薸
        case 6486: return "qi";    // 薺
        case 6488: return "zao";    // 薻
        case 6490: return "chen";    // 薼
        case 6492: return "zhen";    // 薽
        case 6494: return "er";    // 薾
        case 6496: return "ni";    // 薿
        case 6498: return "ying";    // 藀
        case 6500: return "cong";    // 藂
        case 6502: return "hao";    // 藃
        case 6504: return "qi";    // 藄
        case 6506: return "fa";    // 藅
        case 6508: return "jian";    // 藆
        case 6510: return "yu";    // 藇
        case 6512: return "kui";    // 藈
        case 6514: return "bian";    // 藊
        case 6516: return "di";    // 藋
        case 6518: return "mi";    // 藌
        case 6520: return "lan";    // 藍
        case 6522: return "jin";    // 藎
        case 6524: return "qiong";    // 藑
        case 6526: return "qie";    // 藒
        case 6528: return "";    // ?
        case 6530: return "liao";    // 藔
        case 6532: return "qian";    // 藖
        case 6534: return "su";    // 藗
        case 6536: return "lu";    // 藘
        case 6538: return "yi";    // 藙
        case 6540: return "xu";    // 藚
        case 6542: return "xie";    // 藛
        case 6544: return "yi";    // 藝
        case 6546: return "la";    // 藞
        case 6548: return "lei";    // 藟
        case 6550: return "jiao";    // 藠
        case 6552: return "di";    // 藡
        case 6554: return "zhi";    // 藢
        case 6556: return "bei";    // 藣
        case 6558: return "yao";    // 藥
        case 6560: return "mo";    // 藦
        case 6562: return "huan";    // 藧
        case 6564: return "biao";    // 藨
        case 6566: return "sou";    // 藪
        case 6568: return "tan";    // 藫
        case 6570: return "tui";    // 藬
        case 6572: return "qiong";    // 藭
        case 6574: return "qiao";    // 藮
        case 6576: return "wei";    // 藯
        case 6578: return "liu";    // 藰
        case 6580: return "hui";    // 藱
        case 6582: return "ou";    // 藲
        case 6584: return "gao";    // 藳
        case 6586: return "wen";    // 藴
        case 6588: return "bao";    // 藵
        case 6590: return "li";    // 藶
        case 6592: return "zhu";    // 藷
        case 6594: return "zha";    // 藸
        case 6596: return "ai";    // 藹
        case 6598: return "lin";    // 藺
        case 6600: return "xuan";    // 藼
        case 6602: return "qin";    // 藽
        case 6604: return "lai";    // 藾
        case 6606: return "tuo";    // 蘀
        case 6608: return "e";    // 蘁
        case 6610: return "rui";    // 蘂
        case 6612: return "rui";    // 蘃
        case 6614: return "qi";    // 蘄
        case 6616: return "lu";    // 蘆
        case 6618: return "su";    // 蘇
        case 6620: return "tui";    // 蘈
        case 6622: return "mang";    // 蘉
        case 6624: return "yun";    // 蘊
        case 6626: return "pin";    // 蘋
        case 6628: return "yu";    // 蘌
        case 6630: return "xun";    // 蘍
        case 6632: return "ji";    // 蘎
        case 6634: return "jiong";    // 蘏
        case 6636: return "xuan";    // 蘐
        case 6638: return "qiu";    // 蘒
        case 6640: return "su";    // 蘓
        case 6642: return "jiong";    // 蘔
        case 6644: return "feng";    // 蘕
        case 6646: return "bo";    // 蘗
        case 6648: return "xiang";    // 蘘
        case 6650: return "yi";    // 蘙
        case 6652: return "xian";    // 蘚
        case 6654: return "yu";    // 蘛
        case 6656: return "ju";    // 蘜
        case 6658: return "lian";    // 蘝
        case 6660: return "lian";    // 蘞
        case 6662: return "yin";    // 蘟
        case 6664: return "qiang";    // 蘠
        case 6666: return "ying";    // 蘡
        case 6668: return "long";    // 蘢
        case 6670: return "tou";    // 蘣
        case 6672: return "hua";    // 蘤
        case 6674: return "yue";    // 蘥
        case 6676: return "ling";    // 蘦
        case 6678: return "yao";    // 蘨
        case 6680: return "mei";    // 蘪
        case 6682: return "lan";    // 蘫
        case 6684: return "kui";    // 蘬
        case 6686: return "lan";    // 蘭
        case 6688: return "ji";    // 蘮
        case 6690: return "dang";    // 蘯
        case 6692: return "man";    // 蘰
        case 6694: return "lei";    // 蘱
        case 6696: return "lei";    // 蘲
        case 6698: return "hua";    // 蘳
        case 6700: return "feng";    // 蘴
        case 6702: return "zhi";    // 蘵
        case 6704: return "wei";    // 蘶
        case 6706: return "kui";    // 蘷
        case 6708: return "huai";    // 蘹
        case 6710: return "li";    // 蘺
        case 6712: return "ji";    // 蘻
        case 6714: return "lei";    // 蘽
        case 6716: return "huai";    // 蘾
        case 6718: return "luo";    // 蘿
        case 6720: return "ji";    // 虀
        case 6722: return "";    // ?
        case 6724: return "kui";    // 虁
        case 6726: return "lu";    // 虂
        case 6728: return "jian";    // 虃
        case 6730: return "sal";    // 虄
        case 6732: return "teng";    // 虅
        case 6734: return "lei";    // 虆
        case 6736: return "quan";    // 虇
        case 6738: return "xiao";    // 虈
        case 6740: return "yi";    // 虉
        case 6742: return "luan";    // 虊
        case 6744: return "men";    // 虋
        case 6746: return "bie";    // 虌
        case 6748: return "ti";    // 虒
        case 6750: return "xiao";    // 虓
        case 6752: return "chu";    // 處
        case 6754: return "hu";    // 虖
        case 6756: return "xu";    // 虗
        case 6758: return "cuo";    // 虘
        case 6760: return "fu";    // 虙
        case 6762: return "xu";    // 虛
        case 6764: return "lu";    // 虜
        case 6766: return "hu";    // 虝
        case 6768: return "hao";    // 號
        case 6770: return "hao";    // 虠
        case 6772: return "ju";    // 虡
        case 6774: return "bao";    // 虣
        case 6776: return "yan";    // 虤
        case 6778: return "zhan";    // 虥
        case 6780: return "zhan";    // 虦
        case 6782: return "kui";    // 虧
        case 6784: return "bin";    // 虨
        case 6786: return "xi";    // 虩
        case 6788: return "shu";    // 虪
        case 6790: return "dao";    // 虭
        case 6792: return "qiu";    // 虯
        case 6794: return "ding";    // 虰
        case 6796: return "xia";    // 虲
        case 6798: return "jue";    // 虳
        case 6800: return "zhe";    // 虴
        case 6802: return "ye";    // 虵
        case 6804: return "yu";    // 虶
        case 6806: return "gan";    // 虷
        case 6808: return "zi";    // 虸
        case 6810: return "xiang";    // 蚃
        case 6812: return "bang";    // 蚄
        case 6814: return "e";    // 蚅
        case 6816: return "ba";    // 蚆
        case 6818: return "chi";    // 蚇
        case 6820: return "qian";    // 蚈
        case 6822: return "wen";    // 蚉
        case 6824: return "yue";    // 蚎
        case 6826: return "yue";    // 蚏
        case 6828: return "jun";    // 蚐
        case 6830: return "qi";    // 蚑
        case 6832: return "tong";    // 蚒
        case 6834: return "qi";    // 蚔
        case 6836: return "wan";    // 蚖
        case 6838: return "jue";    // 蚗
        case 6840: return "you";    // 蚘
        case 6842: return "qian";    // 蚙
        case 6844: return "qi";    // 蚚
        case 6846: return "zhong";    // 蚛
        case 6848: return "mu";    // 蚞
        case 6850: return "wang";    // 蚟
        case 6852: return "fen";    // 蚠
        case 6854: return "fen";    // 蚡
        case 6856: return "hang";    // 蚢
        case 6858: return "fu";    // 蚥
        case 6860: return "ran";    // 蚦
        case 6862: return "bao";    // 蚫
        case 6864: return "ni";    // 蚭
        case 6866: return "dai";    // 蚮
        case 6868: return "ping";    // 蚲
        case 6870: return "chi";    // 蚳
        case 6872: return "ju";    // 蚷
        case 6874: return "li";    // 蚸
        case 6876: return "fu";    // 蚹
        case 6878: return "zha";    // 蚻
        case 6880: return "gou";    // 蚼
        case 6882: return "pi";    // 蚽
        case 6884: return "bo";    // 蚾
        case 6886: return "xian";    // 蚿
        case 6888: return "diao";    // 蛁
        case 6890: return "bie";    // 蛂
        case 6892: return "bing";    // 蛃
        case 6894: return "zhan";    // 蛅
        case 6896: return "tie";    // 蛈
        case 6898: return "gu";    // 蛌
        case 6900: return "ying";    // 蛍
        case 6902: return "luo";    // 蛒
        case 6904: return "ci";    // 蛓
        case 6906: return "hui";    // 蛕
        case 6908: return "bang";    // 蛖
        case 6910: return "fu";    // 蛗
        case 6912: return "lie";    // 蛚
        case 6914: return "yi";    // 蛜
        case 6916: return "";    // ?
        case 6918: return "xian";    // 蛝
        case 6920: return "li";    // 蛠
        case 6922: return "yi";    // 蛡
        case 6924: return "ping";    // 蛢
        case 6926: return "jie";    // 蛣
        case 6928: return "she";    // 蛥
        case 6930: return "yi";    // 蛦
        case 6932: return "wang";    // 蛧
        case 6934: return "mo";    // 蛨
        case 6936: return "ni";    // 蛪
        case 6938: return "gui";    // 蛫
        case 6940: return "qiong";    // 蛬
        case 6942: return "lao";    // 蛯
        case 6944: return "xing";    // 蛵
        case 6946: return "jie";    // 蛶
        case 6948: return "qiu";    // 蛷
        case 6950: return "jia";    // 蛺
        case 6952: return "tui";    // 蛻
        case 6954: return "che";    // 蛼
        case 6956: return "bei";    // 蛽
        case 6958: return "han";    // 蛿
        case 6960: return "xuan";    // 蜁
        case 6962: return "zhen";    // 蜄
        case 6964: return "pu";    // 蜅
        case 6966: return "xian";    // 蜆
        case 6968: return "lang";    // 蜋
        case 6970: return "bi";    // 蜌
        case 6972: return "yuan";    // 蜎
        case 6974: return "you";    // 蜏
        case 6976: return "jie";    // 蜐
        case 6978: return "dan";    // 蜑
        case 6980: return "dian";    // 蜔
        case 6982: return "hui";    // 蜖
        case 6984: return "song";    // 蜙
        case 6986: return "ju";    // 蜛
        case 6988: return "qi";    // 蜝
        case 6990: return "yu";    // 蜟
        case 6992: return "jun";    // 蜠
        case 6994: return "xi";    // 蜤
        case 6996: return "lun";    // 蜦
        case 6998: return "li";    // 蜧
        case 7000: return "die";    // 蜨
        case 7002: return "tao";    // 蜪
        case 7004: return "kun";    // 蜫
        case 7006: return "han";    // 蜬
        case 7008: return "han";    // 蜭
        case 7010: return "bang";    // 蜯
        case 7012: return "fei";    // 蜰
        case 7014: return "wei";    // 蜲
        case 7016: return "dun";    // 蜳
        case 7018: return "yuan";    // 蜵
        case 7020: return "suo";    // 蜶
        case 7022: return "qian";    // 蜸
        case 7024: return "wei";    // 蜹
        case 7026: return "ni";    // 蜺
        case 7028: return "wei";    // 蜼
        case 7030: return "liang";    // 蜽
        case 7032: return "dong";    // 蝀
        case 7034: return "e";    // 蝁
        case 7036: return "ban";    // 蝂
        case 7038: return "di";    // 蝃
        case 7040: return "wang";    // 蝄
        case 7042: return "can";    // 蝅
        case 7044: return "mi";    // 蝆
        case 7046: return "ding";    // 蝊
        case 7048: return "la";    // 蝋
        case 7050: return "ji";    // 蝍
        case 7052: return "ting";    // 蝏
        case 7054: return "mao";    // 蝐
        case 7056: return "xie";    // 蝑
        case 7058: return "mian";    // 蝒
        case 7060: return "jie";    // 蝔
        case 7062: return "shi";    // 蝕
        case 7064: return "xuan";    // 蝖
        case 7066: return "yan";    // 蝘
        case 7068: return "nao";    // 蝚
        case 7070: return "wei";    // 蝛
        case 7072: return "fu";    // 蝜
        case 7074: return "yuan";    // 蝝
        case 7076: return "mei";    // 蝞
        case 7078: return "wei";    // 蝟
        case 7080: return "ruan";    // 蝡
        case 7082: return "xie";    // 蝢
        case 7084: return "xia";    // 蝦
        case 7086: return "ying";    // 蝧
        case 7088: return "shi";    // 蝨
        case 7090: return "zhong";    // 蝩
        case 7092: return "tang";    // 蝪
        case 7094: return "zhu";    // 蝫
        case 7096: return "zong";    // 蝬
        case 7098: return "ti";    // 蝭
        case 7100: return "yuan";    // 蝯
        case 7102: return "meng";    // 蝱
        case 7104: return "la";    // 蝲
        case 7106: return "dai";    // 蝳
        case 7108: return "qiu";    // 蝵
        case 7110: return "";    // ?
        case 7112: return "li";    // 蝷
        case 7114: return "wo";    // 蝸
        case 7116: return "ao";    // 蝹
        case 7118: return "yu";    // 蝺
        case 7120: return "ying";    // 蝿
        case 7122: return "jiang";    // 螀
        case 7124: return "ban";    // 螁
        case 7126: return "si";    // 螄
        case 7128: return "ci";    // 螆
        case 7130: return "qi";    // 螇
        case 7132: return "weng";    // 螉
        case 7134: return "lian";    // 螊
        case 7136: return "ban";    // 螌
        case 7138: return "rong";    // 螎
        case 7140: return "ji";    // 螏
        case 7142: return "wu";    // 螐
        case 7144: return "xiu";    // 螑
        case 7146: return "han";    // 螒
        case 7148: return "yi";    // 螔
        case 7150: return "bi";    // 螕
        case 7152: return "hua";    // 螖
        case 7154: return "yi";    // 螘
        case 7156: return "du";    // 螙
        case 7158: return "nai";    // 螚
        case 7160: return "he";    // 螛
        case 7162: return "hu";    // 螜
        case 7164: return "gui";    // 螝
        case 7166: return "ma";    // 螞
        case 7168: return "yi";    // 螠
        case 7170: return "wen";    // 螡
        case 7172: return "ying";    // 螢
        case 7174: return "te";    // 螣
        case 7176: return "zhong";    // 螤
        case 7178: return "cang";    // 螥
        case 7180: return "so";    // 螦
        case 7182: return "qi";    // 螧
        case 7184: return "tiao";    // 螩
        case 7186: return "shang";    // 螪
        case 7188: return "dai";    // 螮
        case 7190: return "lu";    // 螰
        case 7192: return "wei";    // 螱
        case 7194: return "die";    // 螲
        case 7196: return "chen";    // 螴
        case 7198: return "ju";    // 螶
        case 7200: return "pi";    // 螷
        case 7202: return "yu";    // 螸
        case 7204: return "jian";    // 螹
        case 7206: return "lou";    // 螻
        case 7208: return "qin";    // 螼
        case 7210: return "yin";    // 螾
        case 7212: return "jiang";    // 螿
        case 7214: return "wen";    // 蟁
        case 7216: return "xiao";    // 蟂
        case 7218: return "man";    // 蟃
        case 7220: return "zhe";    // 蟄
        case 7222: return "zhe";    // 蟅
        case 7224: return "ma";    // 蟇
        case 7226: return "yu";    // 蟈
        case 7228: return "liao";    // 蟉
        case 7230: return "cong";    // 蟌
        case 7232: return "li";    // 蟍
        case 7234: return "man";    // 蟎
        case 7236: return "xiao";    // 蟏
        case 7238: return "chang";    // 蟐
        case 7240: return "mo";    // 蟔
        case 7242: return "zui";    // 蟕
        case 7244: return "si";    // 蟖
        case 7246: return "qiu";    // 蟗
        case 7248: return "te";    // 蟘
        case 7250: return "zhi";    // 蟙
        case 7252: return "peng";    // 蟚
        case 7254: return "jiao";    // 蟜
        case 7256: return "qu";    // 蟝
        case 7258: return "bie";    // 蟞
        case 7260: return "liao";    // 蟟
        case 7262: return "gui";    // 蟡
        case 7264: return "xi";    // 蟢
        case 7266: return "ji";    // 蟣
        case 7268: return "zhuan";    // 蟤
        case 7270: return "fei";    // 蟦
        case 7272: return "lao";    // 蟧
        case 7274: return "jue";    // 蟨
        case 7276: return "jue";    // 蟩
        case 7278: return "yin";    // 蟫
        case 7280: return "chan";    // 蟬
        case 7282: return "jiao";    // 蟭
        case 7284: return "nao";    // 蟯
        case 7286: return "xiao";    // 蟰
        case 7288: return "wu";    // 蟱
        case 7290: return "chong";    // 蟲
        case 7292: return "xun";    // 蟳
        case 7294: return "si";    // 蟴
        case 7296: return "chu";    // 蟵
        case 7298: return "cheng";    // 蟶
        case 7300: return "dang";    // 蟷
        case 7302: return "li";    // 蟸
        case 7304: return "";    // ?
        case 7306: return "dan";    // 蟺
        case 7308: return "yi";    // 蟻
        case 7310: return "jing";    // 蟼
        case 7312: return "da";    // 蟽
        case 7314: return "ji";    // 蟿
        case 7316: return "ji";    // 蠀
        case 7318: return "xiang";    // 蠁
        case 7320: return "she";    // 蠂
        case 7322: return "qin";    // 蠄
        case 7324: return "ying";    // 蠅
        case 7326: return "chai";    // 蠆
        case 7328: return "li";    // 蠇
        case 7330: return "zei";    // 蠈
        case 7332: return "xuan";    // 蠉
        case 7334: return "zhu";    // 蠋
        case 7336: return "ze";    // 蠌
        case 7338: return "xie";    // 蠍
        case 7340: return "mang";    // 蠎
        case 7342: return "xie";    // 蠏
        case 7344: return "qi";    // 蠐
        case 7346: return "rong";    // 蠑
        case 7348: return "jian";    // 蠒
        case 7350: return "hao";    // 蠔
        case 7352: return "zhuo";    // 蠗
        case 7354: return "jie";    // 蠘
        case 7356: return "bin";    // 蠙
        case 7358: return "he";    // 蠚
        case 7360: return "fan";    // 蠜
        case 7362: return "lei";    // 蠝
        case 7364: return "jie";    // 蠞
        case 7366: return "la";    // 蠟
        case 7368: return "mian";    // 蠠
        case 7370: return "li";    // 蠣
        case 7372: return "qiu";    // 蠤
        case 7374: return "nie";    // 蠥
        case 7376: return "lu";    // 蠦
        case 7378: return "du";    // 蠧
        case 7380: return "xiao";    // 蠨
        case 7382: return "zhu";    // 蠩
        case 7384: return "long";    // 蠪
        case 7386: return "li";    // 蠫
        case 7388: return "long";    // 蠬
        case 7390: return "pang";    // 蠭
        case 7392: return "ye";    // 蠮
        case 7394: return "pi";    // 蠯
        case 7396: return "nang";    // 蠰
        case 7398: return "ye";    // 蠱
        case 7400: return "ying";    // 蠳
        case 7402: return "shu";    // 蠴
        case 7404: return "xi";    // 蠵
        case 7406: return "can";    // 蠶
        case 7408: return "qu";    // 蠷
        case 7410: return "huan";    // 蠸
        case 7412: return "can";    // 蠺
        case 7414: return "man";    // 蠻
        case 7416: return "jie";    // 蠽
        case 7418: return "zhu";    // 蠾
        case 7420: return "zhuo";    // 蠿
        case 7422: return "huang";    // 衁
        case 7424: return "nu";    // 衂
        case 7426: return "pei";    // 衃
        case 7428: return "zhong";    // 衆
        case 7430: return "mai";    // 衇
        case 7432: return "er";    // 衈
        case 7434: return "ka";    // 衉
        case 7436: return "mie";    // 衊
        case 7438: return "xi";    // 衋
        case 7440: return "kan";    // 衎
        case 7442: return "yuan";    // 衏
        case 7444: return "qu";    // 衐
        case 7446: return "ling";    // 衑
        case 7448: return "xuan";    // 衒
        case 7450: return "shu";    // 術
        case 7452: return "dong";    // 衕
        case 7454: return "long";    // 衖
        case 7456: return "yu";    // 衘
        case 7458: return "hu";    // 衚
        case 7460: return "wei";    // 衛
        case 7462: return "dao";    // 衜
        case 7464: return "chong";    // 衝
        case 7466: return "wei";    // 衞
        case 7468: return "dao";    // 衟
        case 7470: return "zhun";    // 衠
        case 7472: return "gan";    // 衦
        case 7474: return "yu";    // 衧
        case 7476: return "yi";    // 衪
        case 7478: return "fu";    // 衭
        case 7480: return "pen";    // 衯
        case 7482: return "jie";    // 衱
        case 7484: return "zhong";    // 衳
        case 7486: return "dan";    // 衴
        case 7488: return "yi";    // 衵
        case 7490: return "zhong";    // 衶
        case 7492: return "jie";    // 衸
        case 7494: return "ti";    // 衹
        case 7496: return "xie";    // 衺
        case 7498: return "";    // ?
        case 7500: return "ran";    // 衻
        case 7502: return "zhi";    // 衼
        case 7504: return "jun";    // 袀
        case 7506: return "chai";    // 袃
        case 7508: return "yi";    // 袆
        case 7510: return "ran";    // 袇
        case 7512: return "tuo";    // 袉
        case 7514: return "ling";    // 袊
        case 7516: return "bao";    // 袌
        case 7518: return "yao";    // 袎
        case 7520: return "zuo";    // 袏
        case 7522: return "bi";    // 袐
        case 7524: return "shao";    // 袑
        case 7526: return "jie";    // 袓
        case 7528: return "ke";    // 袔
        case 7530: return "xue";    // 袕
        case 7532: return "zhen";    // 袗
        case 7534: return "yi";    // 袘
        case 7536: return "pa";    // 袙
        case 7538: return "bo";    // 袚
        case 7540: return "di";    // 袛
        case 7542: return "fu";    // 袝
        case 7544: return "gun";    // 袞
        case 7546: return "zhi";    // 袟
        case 7548: return "zhi";    // 袠
        case 7550: return "ran";    // 袡
        case 7552: return "yi";    // 袣
        case 7554: return "tuo";    // 袥
        case 7556: return "na";    // 袦
        case 7558: return "gou";    // 袧
        case 7560: return "xuan";    // 袨
        case 7562: return "zhe";    // 袩
        case 7564: return "qu";    // 袪
        case 7566: return "yu";    // 袬
        case 7568: return "mi";    // 袮
        case 7570: return "bo";    // 袯
        case 7572: return "bo";    // 袰
        case 7574: return "nuo";    // 袲
        case 7576: return "qi";    // 袳
        case 7578: return "ku";    // 袴
        case 7580: return "ren";    // 袵
        case 7582: return "jiang";    // 袶
        case 7584: return "jian";    // 袸
        case 7586: return "bo";    // 袹
        case 7588: return "jie";    // 袺
        case 7590: return "er";    // 袻
        case 7592: return "ru";    // 袽
        case 7594: return "zhu";    // 袾
        case 7596: return "gui";    // 袿
        case 7598: return "yin";    // 裀
        case 7600: return "ka";    // 裃
        case 7602: return "xing";    // 裄
        case 7604: return "sed";    // 裇
        case 7606: return "kun";    // 裈
        case 7608: return "niao";    // 裊
        case 7610: return "shu";    // 裋
        case 7612: return "jia";    // 裌
        case 7614: return "kun";    // 裍
        case 7616: return "li";    // 裏
        case 7618: return "juan";    // 裐
        case 7620: return "shen";    // 裑
        case 7622: return "ge";    // 裓
        case 7624: return "zhen";    // 裖
        case 7626: return "liu";    // 裗
        case 7628: return "ji";    // 裚
        case 7630: return "yi";    // 裛
        case 7632: return "bu";    // 補
        case 7634: return "zhuan";    // 裝
        case 7636: return "shui";    // 裞
        case 7638: return "qun";    // 裠
        case 7640: return "li";    // 裡
        case 7642: return "bao";    // 裦
        case 7644: return "chan";    // 裧
        case 7646: return "kun";    // 裩
        case 7648: return "tao";    // 裪
        case 7650: return "yuan";    // 裫
        case 7652: return "ling";    // 裬
        case 7654: return "chi";    // 裭
        case 7656: return "chang";    // 裮
        case 7658: return "dao";    // 裯
        case 7660: return "liang";    // 裲
        case 7662: return "pei";    // 裵
        case 7664: return "fei";    // 裶
        case 7666: return "yuan";    // 裷
        case 7668: return "yan";    // 裺
        case 7670: return "du";    // 裻
        case 7672: return "zhi";    // 製
        case 7674: return "yi";    // 裿
        case 7676: return "ji";    // 褀
        case 7678: return "guo";    // 褁
        case 7680: return "ken";    // 褃
        case 7682: return "qi";    // 褄
        case 7684: return "ti";    // 褅
        case 7686: return "ti";    // 褆
        case 7688: return "fu";    // 複
        case 7690: return "chong";    // 褈
        case 7692: return "";    // ?
        case 7694: return "xie";    // 褉
        case 7696: return "die";    // 褋
        case 7698: return "kun";    // 褌
        case 7700: return "duan";    // 褍
        case 7702: return "you";    // 褎
        case 7704: return "you";    // 褏
        case 7706: return "yuan";    // 褑
        case 7708: return "fu";    // 褔
        case 7710: return "yu";    // 褕
        case 7712: return "tuan";    // 褖
        case 7714: return "yan";    // 褗
        case 7716: return "yi";    // 褘
        case 7718: return "pao";    // 褜
        case 7720: return "dan";    // 褝
        case 7722: return "wen";    // 褞
        case 7724: return "ta";    // 褟
        case 7726: return "gou";    // 褠
        case 7728: return "huai";    // 褢
        case 7730: return "rong";    // 褣
        case 7732: return "yuan";    // 褤
        case 7734: return "nai";    // 褦
        case 7736: return "jiong";    // 褧
        case 7738: return "cha";    // 褨
        case 7740: return "ban";    // 褩
        case 7742: return "sang";    // 褬
        case 7744: return "niao";    // 褭
        case 7746: return "ying";    // 褮
        case 7748: return "jie";    // 褯
        case 7750: return "huai";    // 褱
        case 7752: return "ku";    // 褲
        case 7754: return "lian";    // 褳
        case 7756: return "li";    // 褵
        case 7758: return "shi";    // 褷
        case 7760: return "lu";    // 褸
        case 7762: return "yi";    // 褹
        case 7764: return "die";    // 褺
        case 7766: return "xie";    // 褻
        case 7768: return "xian";    // 褼
        case 7770: return "wei";    // 褽
        case 7772: return "biao";    // 褾
        case 7774: return "cao";    // 褿
        case 7776: return "ji";    // 襀
        case 7778: return "shan";    // 襂
        case 7780: return "bao";    // 襃
        case 7782: return "bi";    // 襅
        case 7784: return "pu";    // 襆
        case 7786: return "jian";    // 襇
        case 7788: return "juan";    // 襈
        case 7790: return "jian";    // 襉
        case 7792: return "cuo";    // 襊
        case 7794: return "ji";    // 襋
        case 7796: return "dan";    // 襌
        case 7798: return "za";    // 襍
        case 7800: return "bo";    // 襎
        case 7802: return "fei";    // 襏
        case 7804: return "xiang";    // 襐
        case 7806: return "xin";    // 襑
        case 7808: return "bie";    // 襒
        case 7810: return "rao";    // 襓
        case 7812: return "man";    // 襔
        case 7814: return "lan";    // 襕
        case 7816: return "ao";    // 襖
        case 7818: return "yi";    // 襗
        case 7820: return "gui";    // 襘
        case 7822: return "cao";    // 襙
        case 7824: return "sui";    // 襚
        case 7826: return "nong";    // 襛
        case 7828: return "chan";    // 襜
        case 7830: return "lian";    // 襝
        case 7832: return "dang";    // 襠
        case 7834: return "du";    // 襡
        case 7836: return "tan";    // 襢
        case 7838: return "bi";    // 襣
        case 7840: return "lan";    // 襤
        case 7842: return "pu";    // 襥
        case 7844: return "zhi";    // 襧
        case 7846: return "tae";    // 襨
        case 7848: return "du";    // 襩
        case 7850: return "wa";    // 襪
        case 7852: return "shi";    // 襫
        case 7854: return "bai";    // 襬
        case 7856: return "xie";    // 襭
        case 7858: return "bo";    // 襮
        case 7860: return "chen";    // 襯
        case 7862: return "lai";    // 襰
        case 7864: return "long";    // 襱
        case 7866: return "xi";    // 襲
        case 7868: return "xian";    // 襳
        case 7870: return "lan";    // 襴
        case 7872: return "zhe";    // 襵
        case 7874: return "dai";    // 襶
        case 7876: return "ju";    // 襷
        case 7878: return "zan";    // 襸
        case 7880: return "shi";    // 襹
        case 7882: return "jian";    // 襺
        case 7884: return "yi";    // 襼
        case 7886: return "";    // ?
        case 7888: return "lan";    // 襽
        case 7890: return "ya";    // 襾
        case 7892: return "xi";    // 覀
        case 7894: return "ban";    // 覂
        case 7896: return "fu";    // 覄
        case 7898: return "fiao";    // 覅
        case 7900: return "ba";    // 覇
        case 7902: return "he";    // 覈
        case 7904: return "ji";    // 覉
        case 7906: return "ji";    // 覊
        case 7908: return "jian";    // 見
        case 7910: return "guan";    // 覌
        case 7912: return "bian";    // 覍
        case 7914: return "yan";    // 覎
        case 7916: return "gui";    // 規
        case 7918: return "jiao";    // 覐
        case 7920: return "pian";    // 覑
        case 7922: return "mao";    // 覒
        case 7924: return "mi";    // 覓
        case 7926: return "mi";    // 覔
        case 7928: return "pie";    // 覕
        case 7930: return "shi";    // 視
        case 7932: return "si";    // 覗
        case 7934: return "chan";    // 覘
        case 7936: return "zhen";    // 覙
        case 7938: return "jiao";    // 覚
        case 7940: return "mi";    // 覛
        case 7942: return "tiao";    // 覜
        case 7944: return "lian";    // 覝
        case 7946: return "yao";    // 覞
        case 7948: return "zhi";    // 覟
        case 7950: return "jun";    // 覠
        case 7952: return "xi";    // 覡
        case 7954: return "shan";    // 覢
        case 7956: return "wei";    // 覣
        case 7958: return "xi";    // 覤
        case 7960: return "tian";    // 覥
        case 7962: return "yu";    // 覦
        case 7964: return "lan";    // 覧
        case 7966: return "e";    // 覨
        case 7968: return "du";    // 覩
        case 7970: return "qin";    // 親
        case 7972: return "pang";    // 覫
        case 7974: return "ji";    // 覬
        case 7976: return "ming";    // 覭
        case 7978: return "ying";    // 覮
        case 7980: return "gou";    // 覯
        case 7982: return "qu";    // 覰
        case 7984: return "zhan";    // 覱
        case 7986: return "jin";    // 覲
        case 7988: return "guan";    // 観
        case 7990: return "deng";    // 覴
        case 7992: return "bian";    // 覵
        case 7994: return "luo";    // 覶
        case 7996: return "qu";    // 覷
        case 7998: return "jian";    // 覸
        case 8000: return "wei";    // 覹
        case 8002: return "jiao";    // 覺
        case 8004: return "qu";    // 覻
        case 8006: return "luo";    // 覼
        case 8008: return "lan";    // 覽
        case 8010: return "shen";    // 覾
        case 8012: return "di";    // 覿
        case 8014: return "guan";    // 觀
        case 8016: return "yan";    // 觃
        case 8018: return "tian";    // 觍
        case 8020: return "qiu";    // 觓
        case 8022: return "jin";    // 觔
        case 8024: return "chu";    // 觕
        case 8026: return "zhi";    // 觗
        case 8028: return "chao";    // 觘
        case 8030: return "ji";    // 觙
        case 8032: return "dan";    // 觛
        case 8034: return "zhi";    // 觝
        case 8036: return "hua";    // 觟
        case 8038: return "quan";    // 觠
        case 8040: return "ge";    // 觡
        case 8042: return "shi";    // 觢
        case 8044: return "gui";    // 觤
        case 8046: return "jie";    // 觧
        case 8048: return "hun";    // 觨
        case 8050: return "qiu";    // 觩
        case 8052: return "xing";    // 觪
        case 8054: return "ni";    // 觬
        case 8056: return "ji";    // 觭
        case 8058: return "lu";    // 觮
        case 8060: return "da";    // 觰
        case 8062: return "bi";    // 觱
        case 8064: return "xing";    // 觲
        case 8066: return "shang";    // 觴
        case 8068: return "gong";    // 觵
        case 8070: return "zhi";    // 觶
        case 8072: return "hu";    // 觷
        case 8074: return "chu";    // 觸
        case 8076: return "wei";    // 觹
        case 8078: return "yi";    // 觺
        case 8080: return "";    // ?
        case 8082: return "li";    // 觻
        case 8084: return "jue";    // 觼
        case 8086: return "wei";    // 觽
        case 8088: return "yan";    // 觾
        case 8090: return "wei";    // 觿
        case 8092: return "yan";    // 訁
        case 8094: return "ding";    // 訂
        case 8096: return "fu";    // 訃
        case 8098: return "kao";    // 訄
        case 8100: return "qiu";    // 訅
        case 8102: return "jiao";    // 訆
        case 8104: return "ji";    // 計
        case 8106: return "fan";    // 訉
        case 8108: return "xun";    // 訊
        case 8110: return "diao";    // 訋
        case 8112: return "hong";    // 訌
        case 8114: return "cha";    // 訍
        case 8116: return "tao";    // 討
        case 8118: return "xu";    // 訏
        case 8120: return "ji";    // 訐
        case 8122: return "yi";    // 訑
        case 8124: return "ren";    // 訒
        case 8126: return "xun";    // 訓
        case 8128: return "yin";    // 訔
        case 8130: return "shan";    // 訕
        case 8132: return "qi";    // 訖
        case 8134: return "tuo";    // 託
        case 8136: return "ji";    // 記
        case 8138: return "xun";    // 訙
        case 8140: return "yin";    // 訚
        case 8142: return "e";    // 訛
        case 8144: return "bin";    // 訜
        case 8146: return "ya";    // 訝
        case 8148: return "yao";    // 訞
        case 8150: return "song";    // 訟
        case 8152: return "shen";    // 訠
        case 8154: return "yin";    // 訡
        case 8156: return "xi";    // 訢
        case 8158: return "jue";    // 訣
        case 8160: return "na";    // 訤
        case 8162: return "ne";    // 訥
        case 8164: return "chen";    // 訦
        case 8166: return "you";    // 訧
        case 8168: return "zhi";    // 訨
        case 8170: return "xiong";    // 訩
        case 8172: return "fang";    // 訪
        case 8174: return "xin";    // 訫
        case 8176: return "miao";    // 訬
        case 8178: return "she";    // 設
        case 8180: return "yan";    // 訮
        case 8182: return "sa";    // 訯
        case 8184: return "zhun";    // 訰
        case 8186: return "xu";    // 許
        case 8188: return "yi";    // 訲
        case 8190: return "yi";    // 訳
        case 8192: return "su";    // 訴
        case 8194: return "chi";    // 訵
        case 8196: return "he";    // 訶
        case 8198: return "shen";    // 訷
        case 8200: return "he";    // 訸
        case 8202: return "xu";    // 訹
        case 8204: return "zhen";    // 診
        case 8206: return "zhu";    // 註
        case 8208: return "zheng";    // 証
        case 8210: return "gou";    // 訽
        case 8212: return "zi";    // 訿
        case 8214: return "zhan";    // 詀
        case 8216: return "gu";    // 詁
        case 8218: return "fu";    // 詂
        case 8220: return "jian";    // 詃
        case 8222: return "die";    // 詄
        case 8224: return "ling";    // 詅
        case 8226: return "di";    // 詆
        case 8228: return "yang";    // 詇
        case 8230: return "na";    // 詉
        case 8232: return "pan";    // 詊
        case 8234: return "zhou";    // 詋
        case 8236: return "gan";    // 詌
        case 8238: return "yi";    // 詍
        case 8240: return "ju";    // 詎
        case 8242: return "yao";    // 詏
        case 8244: return "zha";    // 詐
        case 8246: return "duo";    // 詑
        case 8248: return "yi";    // 詒
        case 8250: return "qu";    // 詓
        case 8252: return "zhao";    // 詔
        case 8254: return "ping";    // 評
        case 8256: return "bi";    // 詖
        case 8258: return "xiong";    // 詗
        case 8260: return "qu";    // 詘
        case 8262: return "ba";    // 詙
        case 8264: return "da";    // 詚
        case 8266: return "zu";    // 詛
        case 8268: return "tao";    // 詜
        case 8270: return "zhu";    // 詝
        case 8272: return "ci";    // 詞
        case 8274: return "";    // ?
        case 8276: return "zhe";    // 詟
        case 8278: return "yong";    // 詠
        case 8280: return "xu";    // 詡
        case 8282: return "xun";    // 詢
        case 8284: return "yi";    // 詣
        case 8286: return "huang";    // 詤
        case 8288: return "ge";    // 詥
        case 8290: return "shi";    // 試
        case 8292: return "qie";    // 詧
        case 8294: return "xiao";    // 詨
        case 8296: return "shi";    // 詩
        case 8298: return "hen";    // 詪
        case 8300: return "cha";    // 詫
        case 8302: return "gou";    // 詬
        case 8304: return "gui";    // 詭
        case 8306: return "quan";    // 詮
        case 8308: return "hui";    // 詯
        case 8310: return "jie";    // 詰
        case 8312: return "hua";    // 話
        case 8314: return "gai";    // 該
        case 8316: return "xiang";    // 詳
        case 8318: return "wei";    // 詴
        case 8320: return "shen";    // 詵
        case 8322: return "zhou";    // 詶
        case 8324: return "dong";    // 詷
        case 8326: return "mi";    // 詸
        case 8328: return "ming";    // 詺
        case 8330: return "e";    // 詻
        case 8332: return "hui";    // 詼
        case 8334: return "yan";    // 詽
        case 8336: return "xiong";    // 詾
        case 8338: return "gua";    // 詿
        case 8340: return "er";    // 誀
        case 8342: return "bing";    // 誁
        case 8344: return "diao";    // 誂
        case 8346: return "yi";    // 誃
        case 8348: return "lei";    // 誄
        case 8350: return "zhu";    // 誅
        case 8352: return "kuang";    // 誆
        case 8354: return "kua";    // 誇
        case 8356: return "wu";    // 誈
        case 8358: return "ji";    // 誋
        case 8360: return "zhi";    // 誌
        case 8362: return "ren";    // 認
        case 8364: return "cu";    // 誎
        case 8366: return "lang";    // 誏
        case 8368: return "e";    // 誐
        case 8370: return "kuang";    // 誑
        case 8372: return "ei";    // 誒
        case 8374: return "ting";    // 誔
        case 8376: return "dan";    // 誕
        case 8378: return "bei";    // 誖
        case 8380: return "chan";    // 誗
        case 8382: return "you";    // 誘
        case 8384: return "keng";    // 誙
        case 8386: return "qiao";    // 誚
        case 8388: return "qin";    // 誛
        case 8390: return "shua";    // 誜
        case 8392: return "an";    // 誝
        case 8394: return "yu";    // 語
        case 8396: return "xiao";    // 誟
        case 8398: return "cheng";    // 誠
        case 8400: return "jie";    // 誡
        case 8402: return "xian";    // 誢
        case 8404: return "wu";    // 誣
        case 8406: return "wu";    // 誤
        case 8408: return "gao";    // 誥
        case 8410: return "song";    // 誦
        case 8412: return "bu";    // 誧
        case 8414: return "hui";    // 誨
        case 8416: return "jing";    // 誩
        case 8418: return "shuo";    // 說
        case 8420: return "zhen";    // 誫
        case 8422: return "shui";    // 説
        case 8424: return "du";    // 読
        case 8426: return "hua";    // 誮
        case 8428: return "chang";    // 誯
        case 8430: return "shui";    // 誰
        case 8432: return "jie";    // 誱
        case 8434: return "ke";    // 課
        case 8436: return "jue";    // 誳
        case 8438: return "cong";    // 誴
        case 8440: return "xiao";    // 誵
        case 8442: return "sui";    // 誶
        case 8444: return "wang";    // 誷
        case 8446: return "xian";    // 誸
        case 8448: return "fei";    // 誹
        case 8450: return "lai";    // 誺
        case 8452: return "ta";    // 誻
        case 8454: return "yi";    // 誼
        case 8456: return "na";    // 誽
        case 8458: return "yin";    // 誾
        case 8460: return "diao";    // 調
        case 8462: return "bei";    // 諀
        case 8464: return "zhuo";    // 諁
        case 8466: return "chan";    // 諂
        case 8468: return "";    // ?
        case 8470: return "chen";    // 諃
        case 8472: return "zhun";    // 諄
        case 8474: return "ji";    // 諅
        case 8476: return "qi";    // 諆
        case 8478: return "tan";    // 談
        case 8480: return "zhui";    // 諈
        case 8482: return "wei";    // 諉
        case 8484: return "ju";    // 諊
        case 8486: return "qing";    // 請
        case 8488: return "dong";    // 諌
        case 8490: return "zheng";    // 諍
        case 8492: return "ze";    // 諎
        case 8494: return "zhou";    // 諏
        case 8496: return "qian";    // 諐
        case 8498: return "zhuo";    // 諑
        case 8500: return "liang";    // 諒
        case 8502: return "jian";    // 諓
        case 8504: return "ji";    // 諔
        case 8506: return "hao";    // 諕
        case 8508: return "lun";    // 論
        case 8510: return "nie";    // 諗
        case 8512: return "biao";    // 諘
        case 8514: return "hua";    // 諙
        case 8516: return "pian";    // 諚
        case 8518: return "yu";    // 諛
        case 8520: return "die";    // 諜
        case 8522: return "xu";    // 諝
        case 8524: return "pian";    // 諞
        case 8526: return "di";    // 諟
        case 8528: return "xuan";    // 諠
        case 8530: return "shi";    // 諡
        case 8532: return "hun";    // 諢
        case 8534: return "gua";    // 諣
        case 8536: return "e";    // 諤
        case 8538: return "zhong";    // 諥
        case 8540: return "di";    // 諦
        case 8542: return "xie";    // 諧
        case 8544: return "fu";    // 諨
        case 8546: return "pu";    // 諩
        case 8548: return "ting";    // 諪
        case 8550: return "jian";    // 諫
        case 8552: return "qi";    // 諬
        case 8554: return "yu";    // 諭
        case 8556: return "zi";    // 諮
        case 8558: return "zhuan";    // 諯
        case 8560: return "xi";    // 諰
        case 8562: return "hui";    // 諱
        case 8564: return "yin";    // 諲
        case 8566: return "an";    // 諳
        case 8568: return "gan";    // 諴
        case 8570: return "nan";    // 諵
        case 8572: return "chen";    // 諶
        case 8574: return "feng";    // 諷
        case 8576: return "zhu";    // 諸
        case 8578: return "yang";    // 諹
        case 8580: return "yan";    // 諺
        case 8582: return "huang";    // 諻
        case 8584: return "xuan";    // 諼
        case 8586: return "ge";    // 諽
        case 8588: return "nuo";    // 諾
        case 8590: return "qi";    // 諿
        case 8592: return "mou";    // 謀
        case 8594: return "ye";    // 謁
        case 8596: return "wei";    // 謂
        case 8598: return "xing";    // 謃
        case 8600: return "teng";    // 謄
        case 8602: return "zhou";    // 謅
        case 8604: return "shan";    // 謆
        case 8606: return "po";    // 謈
        case 8608: return "dui";    // 謉
        case 8610: return "huang";    // 謊
        case 8612: return "huo";    // 謋
        case 8614: return "ge";    // 謌
        case 8616: return "ying";    // 謍
        case 8618: return "mi";    // 謎
        case 8620: return "xiao";    // 謏
        case 8622: return "mi";    // 謐
        case 8624: return "xi";    // 謑
        case 8626: return "qiang";    // 謒
        case 8628: return "zhen";    // 謓
        case 8630: return "huo";    // 謔
        case 8632: return "ti";    // 謕
        case 8634: return "su";    // 謖
        case 8636: return "bang";    // 謗
        case 8638: return "chi";    // 謘
        case 8640: return "qian";    // 謙
        case 8642: return "yi";    // 謚
        case 8644: return "jiang";    // 講
        case 8646: return "yuan";    // 謜
        case 8648: return "xie";    // 謝
        case 8650: return "he";    // 謞
        case 8652: return "tao";    // 謟
        case 8654: return "yao";    // 謠
        case 8656: return "yao";    // 謡
        case 8658: return "zhi";    // 謢
        case 8660: return "yu";    // 謣
        case 8662: return "";    // ?
        case 8664: return "biao";    // 謤
        case 8666: return "cong";    // 謥
        case 8668: return "li";    // 謧
        case 8670: return "mo";    // 謨
        case 8672: return "mo";    // 謩
        case 8674: return "shang";    // 謪
        case 8676: return "zhe";    // 謫
        case 8678: return "miu";    // 謬
        case 8680: return "jian";    // 謭
        case 8682: return "ze";    // 謮
        case 8684: return "jie";    // 謯
        case 8686: return "lian";    // 謰
        case 8688: return "lou";    // 謱
        case 8690: return "can";    // 謲
        case 8692: return "ou";    // 謳
        case 8694: return "gun";    // 謴
        case 8696: return "xi";    // 謵
        case 8698: return "zhuo";    // 謶
        case 8700: return "ao";    // 謷
        case 8702: return "ao";    // 謸
        case 8704: return "jin";    // 謹
        case 8706: return "zhe";    // 謺
        case 8708: return "yi";    // 謻
        case 8710: return "hu";    // 謼
        case 8712: return "jiang";    // 謽
        case 8714: return "man";    // 謾
        case 8716: return "zhao";    // 謿
        case 8718: return "han";    // 譀
        case 8720: return "wa";    // 譁
        case 8722: return "dan";    // 譂
        case 8724: return "xu";    // 譃
        case 8726: return "zeng";    // 譄
        case 8728: return "se";    // 譅
        case 8730: return "xi";    // 譆
        case 8732: return "zha";    // 譇
        case 8734: return "dui";    // 譈
        case 8736: return "zheng";    // 證
        case 8738: return "nao";    // 譊
        case 8740: return "lan";    // 譋
        case 8742: return "e";    // 譌
        case 8744: return "ying";    // 譍
        case 8746: return "jue";    // 譎
        case 8748: return "ji";    // 譏
        case 8750: return "zun";    // 譐
        case 8752: return "jiao";    // 譑
        case 8754: return "bo";    // 譒
        case 8756: return "hui";    // 譓
        case 8758: return "quan";    // 譔
        case 8760: return "wu";    // 譕
        case 8762: return "jian";    // 譖
        case 8764: return "zha";    // 譗
        case 8766: return "shi";    // 識
        case 8768: return "qiao";    // 譙
        case 8770: return "tan";    // 譚
        case 8772: return "zen";    // 譛
        case 8774: return "pu";    // 譜
        case 8776: return "sheng";    // 譝
        case 8778: return "xuan";    // 譞
        case 8780: return "zao";    // 譟
        case 8782: return "tan";    // 譠
        case 8784: return "dang";    // 譡
        case 8786: return "sui";    // 譢
        case 8788: return "xian";    // 譣
        case 8790: return "ji";    // 譤
        case 8792: return "jiao";    // 譥
        case 8794: return "lian";    // 譧
        case 8796: return "nou";    // 譨
        case 8798: return "yi";    // 譩
        case 8800: return "ai";    // 譪
        case 8802: return "zhan";    // 譫
        case 8804: return "hui";    // 譭
        case 8806: return "hua";    // 譮
        case 8808: return "yi";    // 譯
        case 8810: return "yi";    // 議
        case 8812: return "shan";    // 譱
        case 8814: return "rang";    // 譲
        case 8816: return "nou";    // 譳
        case 8818: return "qian";    // 譴
        case 8820: return "dui";    // 譵
        case 8822: return "ta";    // 譶
        case 8824: return "hu";    // 護
        case 8826: return "zhou";    // 譸
        case 8828: return "hao";    // 譹
        case 8830: return "ai";    // 譺
        case 8832: return "ying";    // 譻
        case 8834: return "jian";    // 譼
        case 8836: return "yu";    // 譽
        case 8838: return "jian";    // 譾
        case 8840: return "hui";    // 譿
        case 8842: return "du";    // 讀
        case 8844: return "ze";    // 讁
        case 8846: return "juan";    // 讂
        case 8848: return "zan";    // 讃
        case 8850: return "lei";    // 讄
        case 8852: return "shen";    // 讅
        case 8854: return "wei";    // 讆
        case 8856: return "";    // ?
        case 8858: return "chan";    // 讇
        case 8860: return "li";    // 讈
        case 8862: return "yi";    // 讉
        case 8864: return "bian";    // 變
        case 8866: return "zhe";    // 讋
        case 8868: return "yan";    // 讌
        case 8870: return "e";    // 讍
        case 8872: return "chou";    // 讎
        case 8874: return "wei";    // 讏
        case 8876: return "chou";    // 讐
        case 8878: return "yao";    // 讑
        case 8880: return "chan";    // 讒
        case 8882: return "rang";    // 讓
        case 8884: return "yin";    // 讔
        case 8886: return "lan";    // 讕
        case 8888: return "chen";    // 讖
        case 8890: return "xie";    // 讗
        case 8892: return "nie";    // 讘
        case 8894: return "huan";    // 讙
        case 8896: return "zan";    // 讚
        case 8898: return "yi";    // 讛
        case 8900: return "dang";    // 讜
        case 8902: return "zhan";    // 讝
        case 8904: return "yan";    // 讞
        case 8906: return "du";    // 讟
        case 8908: return "tuo";    // 讬
        case 8910: return "ren";    // 讱
        case 8912: return "xiong";    // 讻
        case 8914: return "xiong";    // 诇
        case 8916: return "bi";    // 诐
        case 8918: return "zhou";    // 诪
        case 8920: return "shen";    // 谉
        case 8922: return "xu";    // 谞
        case 8924: return "qian";    // 谸
        case 8926: return "hong";    // 谹
        case 8928: return "xia";    // 谺
        case 8930: return "ji";    // 谻
        case 8932: return "hong";    // 谼
        case 8934: return "han";    // 谽
        case 8936: return "long";    // 谾
        case 8938: return "ji";    // 谿
        case 8940: return "xi";    // 豀
        case 8942: return "liao";    // 豂
        case 8944: return "gan";    // 豃
        case 8946: return "du";    // 豄
        case 8948: return "long";    // 豅
        case 8950: return "qi";    // 豈
        case 8952: return "feng";    // 豊
        case 8954: return "deng";    // 豋
        case 8956: return "bi";    // 豍
        case 8958: return "shu";    // 豎
        case 8960: return "xian";    // 豏
        case 8962: return "feng";    // 豐
        case 8964: return "zhi";    // 豑
        case 8966: return "zhi";    // 豒
        case 8968: return "yan";    // 豓
        case 8970: return "yan";    // 豔
        case 8972: return "chu";    // 豖
        case 8974: return "hui";    // 豗
        case 8976: return "tun";    // 豘
        case 8978: return "yi";    // 豙
        case 8980: return "yi";    // 豛
        case 8982: return "yan";    // 豜
        case 8984: return "ba";    // 豝
        case 8986: return "hou";    // 豞
        case 8988: return "e";    // 豟
        case 8990: return "chu";    // 豠
        case 8992: return "yan";    // 豣
        case 8994: return "ken";    // 豤
        case 8996: return "gai";    // 豥
        case 8998: return "ju";    // 豦
        case 9000: return "fu";    // 豧
        case 9002: return "xi";    // 豨
        case 9004: return "bin";    // 豩
        case 9006: return "zhu";    // 豬
        case 9008: return "jia";    // 豭
        case 9010: return "fen";    // 豮
        case 9012: return "xi";    // 豯
        case 9014: return "bo";    // 豰
        case 9016: return "wen";    // 豱
        case 9018: return "huan";    // 豲
        case 9020: return "di";    // 豴
        case 9022: return "zong";    // 豵
        case 9024: return "fen";    // 豶
        case 9026: return "yi";    // 豷
        case 9028: return "an";    // 豻
        case 9030: return "pi";    // 豼
        case 9032: return "na";    // 豽
        case 9034: return "pi";    // 豾
        case 9036: return "gou";    // 豿
        case 9038: return "duo";    // 貀
        case 9040: return "you";    // 貁
        case 9042: return "mo";    // 貃
        case 9044: return "si";    // 貄
        case 9046: return "huan";    // 貆
        case 9048: return "ken";    // 貇
        case 9050: return "";    // ?
        case 9052: return "mo";    // 貈
        case 9054: return "an";    // 貋
        case 9056: return "mai";    // 貍
        case 9058: return "ni";    // 貎
        case 9060: return "bi";    // 貏
        case 9062: return "yu";    // 貐
        case 9064: return "jia";    // 貑
        case 9066: return "tuan";    // 貒
        case 9068: return "mao";    // 貓
        case 9070: return "xi";    // 貕
        case 9072: return "yi";    // 貖
        case 9074: return "yu";    // 貗
        case 9076: return "chu";    // 貙
        case 9078: return "tan";    // 貚
        case 9080: return "huan";    // 貛
        case 9082: return "jue";    // 貜
        case 9084: return "bei";    // 貝
        case 9086: return "zhen";    // 貞
        case 9088: return "yuan";    // 貟
        case 9090: return "fu";    // 負
        case 9092: return "cai";    // 財
        case 9094: return "gong";    // 貢
        case 9096: return "te";    // 貣
        case 9098: return "yi";    // 貤
        case 9100: return "hang";    // 貥
        case 9102: return "wan";    // 貦
        case 9104: return "pin";    // 貧
        case 9106: return "huo";    // 貨
        case 9108: return "fan";    // 販
        case 9110: return "tan";    // 貪
        case 9112: return "guan";    // 貫
        case 9114: return "ze";    // 責
        case 9116: return "zhi";    // 貭
        case 9118: return "er";    // 貮
        case 9120: return "zhu";    // 貯
        case 9122: return "shi";    // 貰
        case 9124: return "bi";    // 貱
        case 9126: return "zi";    // 貲
        case 9128: return "er";    // 貳
        case 9130: return "gui";    // 貴
        case 9132: return "pian";    // 貵
        case 9134: return "bian";    // 貶
        case 9136: return "mai";    // 買
        case 9138: return "dai";    // 貸
        case 9140: return "sheng";    // 貹
        case 9142: return "kuang";    // 貺
        case 9144: return "fei";    // 費
        case 9146: return "tie";    // 貼
        case 9148: return "yi";    // 貽
        case 9150: return "chi";    // 貾
        case 9152: return "mao";    // 貿
        case 9154: return "he";    // 賀
        case 9156: return "ben";    // 賁
        case 9158: return "lu";    // 賂
        case 9160: return "lin";    // 賃
        case 9162: return "hui";    // 賄
        case 9164: return "gai";    // 賅
        case 9166: return "pian";    // 賆
        case 9168: return "zi";    // 資
        case 9170: return "jia";    // 賈
        case 9172: return "xu";    // 賉
        case 9174: return "zei";    // 賊
        case 9176: return "jiao";    // 賋
        case 9178: return "gai";    // 賌
        case 9180: return "zang";    // 賍
        case 9182: return "jian";    // 賎
        case 9184: return "ying";    // 賏
        case 9186: return "xun";    // 賐
        case 9188: return "zhen";    // 賑
        case 9190: return "she";    // 賒
        case 9192: return "bin";    // 賓
        case 9194: return "bin";    // 賔
        case 9196: return "qiu";    // 賕
        case 9198: return "sha";    // 賖
        case 9200: return "chuan";    // 賗
        case 9202: return "zang";    // 賘
        case 9204: return "zhou";    // 賙
        case 9206: return "lai";    // 賚
        case 9208: return "zan";    // 賛
        case 9210: return "ci";    // 賜
        case 9212: return "chen";    // 賝
        case 9214: return "shang";    // 賞
        case 9216: return "tian";    // 賟
        case 9218: return "pei";    // 賠
        case 9220: return "geng";    // 賡
        case 9222: return "xian";    // 賢
        case 9224: return "mai";    // 賣
        case 9226: return "jian";    // 賤
        case 9228: return "sui";    // 賥
        case 9230: return "fu";    // 賦
        case 9232: return "dan";    // 賧
        case 9234: return "cong";    // 賨
        case 9236: return "cong";    // 賩
        case 9238: return "zhi";    // 質
        case 9240: return "ji";    // 賫
        case 9242: return "zhang";    // 賬
        case 9244: return "";    // ?
        case 9246: return "du";    // 賭
        case 9248: return "jin";    // 賮
        case 9250: return "min";    // 賯
        case 9252: return "chun";    // 賰
        case 9254: return "yun";    // 賱
        case 9256: return "bao";    // 賲
        case 9258: return "zai";    // 賳
        case 9260: return "lai";    // 賴
        case 9262: return "feng";    // 賵
        case 9264: return "cang";    // 賶
        case 9266: return "ji";    // 賷
        case 9268: return "sheng";    // 賸
        case 9270: return "ai";    // 賹
        case 9272: return "zuan";    // 賺
        case 9274: return "fu";    // 賻
        case 9276: return "gou";    // 購
        case 9278: return "sai";    // 賽
        case 9280: return "ze";    // 賾
        case 9282: return "liao";    // 賿
        case 9284: return "yi";    // 贀
        case 9286: return "bai";    // 贁
        case 9288: return "chen";    // 贂
        case 9290: return "wan";    // 贃
        case 9292: return "zhi";    // 贄
        case 9294: return "zhui";    // 贅
        case 9296: return "biao";    // 贆
        case 9298: return "yun";    // 贇
        case 9300: return "zeng";    // 贈
        case 9302: return "dan";    // 贉
        case 9304: return "zan";    // 贊
        case 9306: return "yan";    // 贋
        case 9308: return "pu";    // 贌
        case 9310: return "shan";    // 贍
        case 9312: return "wan";    // 贎
        case 9314: return "ying";    // 贏
        case 9316: return "jin";    // 贐
        case 9318: return "gan";    // 贑
        case 9320: return "xian";    // 贒
        case 9322: return "zang";    // 贓
        case 9324: return "bi";    // 贔
        case 9326: return "du";    // 贕
        case 9328: return "shu";    // 贖
        case 9330: return "yan";    // 贗
        case 9332: return "shang";    // 贘
        case 9334: return "xuan";    // 贙
        case 9336: return "long";    // 贚
        case 9338: return "gan";    // 贛
        case 9340: return "zang";    // 贜
        case 9342: return "yuan";    // 贠
        case 9344: return "bi";    // 赑
        case 9346: return "zhou";    // 赒
        case 9348: return "feng";    // 赗
        case 9350: return "yun";    // 赟
        case 9352: return "xi";    // 赥
        case 9354: return "tong";    // 赨
        case 9356: return "xi";    // 赩
        case 9358: return "cheng";    // 赪
        case 9360: return "cheng";    // 赬
        case 9362: return "xia";    // 赮
        case 9364: return "tang";    // 赯
        case 9366: return "zou";    // 赱
        case 9368: return "li";    // 赲
        case 9370: return "shan";    // 赸
        case 9372: return "qiong";    // 赹
        case 9374: return "yin";    // 赺
        case 9376: return "xian";    // 赻
        case 9378: return "zi";    // 赼
        case 9380: return "gui";    // 赽
        case 9382: return "qin";    // 赾
        case 9384: return "di";    // 赿
        case 9386: return "ci";    // 趀
        case 9388: return "zhen";    // 趂
        case 9390: return "die";    // 趃
        case 9392: return "di";    // 趆
        case 9394: return "xi";    // 趇
        case 9396: return "zhan";    // 趈
        case 9398: return "ju";    // 趉
        case 9400: return "ji";    // 趌
        case 9402: return "qu";    // 趍
        case 9404: return "chu";    // 趎
        case 9406: return "gua";    // 趏
        case 9408: return "xue";    // 趐
        case 9410: return "tiao";    // 趒
        case 9412: return "duo";    // 趓
        case 9414: return "gan";    // 趕
        case 9416: return "suo";    // 趖
        case 9418: return "cu";    // 趗
        case 9420: return "xi";    // 趘
        case 9422: return "zhao";    // 趙
        case 9424: return "su";    // 趚
        case 9426: return "yin";    // 趛
        case 9428: return "ju";    // 趜
        case 9430: return "jian";    // 趝
        case 9432: return "qi";    // 趞
        case 9434: return "chao";    // 趠
        case 9436: return "wei";    // 趡
        case 9438: return "";    // ?
        case 9440: return "lu";    // 趢
        case 9442: return "dang";    // 趤
        case 9444: return "qiu";    // 趥
        case 9446: return "zi";    // 趦
        case 9448: return "ti";    // 趧
        case 9450: return "qu";    // 趨
        case 9452: return "chi";    // 趩
        case 9454: return "guang";    // 趪
        case 9456: return "jiao";    // 趫
        case 9458: return "qiao";    // 趬
        case 9460: return "jiao";    // 趭
        case 9462: return "zao";    // 趮
        case 9464: return "yue";    // 趯
        case 9466: return "er";    // 趰
        case 9468: return "zan";    // 趲
        case 9470: return "wu";    // 趶
        case 9472: return "ke";    // 趷
        case 9474: return "gui";    // 趹
        case 9476: return "chen";    // 趻
        case 9478: return "pang";    // 趽
        case 9480: return "yue";    // 跀
        case 9482: return "pa";    // 跁
        case 9484: return "qi";    // 跂
        case 9486: return "tuo";    // 跅
        case 9488: return "yi";    // 跇
        case 9490: return "nian";    // 跈
        case 9492: return "ling";    // 跉
        case 9494: return "mei";    // 跊
        case 9496: return "ku";    // 跍
        case 9498: return "ci";    // 跐
        case 9500: return "qia";    // 跒
        case 9502: return "zhu";    // 跓
        case 9504: return "ju";    // 跔
        case 9506: return "die";    // 跕
        case 9508: return "ban";    // 跘
        case 9510: return "ju";    // 跙
        case 9512: return "ni";    // 跜
        case 9514: return "yi";    // 跠
        case 9516: return "ji";    // 跡
        case 9518: return "dai";    // 跢
        case 9520: return "duo";    // 跥
        case 9522: return "zhu";    // 跦
        case 9524: return "quan";    // 跧
        case 9526: return "zhuai";    // 跩
        case 9528: return "xiang";    // 跭
        case 9530: return "die";    // 跮
        case 9532: return "beng";    // 跰
        case 9534: return "zhi";    // 跱
        case 9536: return "jia";    // 跲
        case 9538: return "cai";    // 跴
        case 9540: return "da";    // 跶
        case 9542: return "qu";    // 跼
        case 9544: return "chou";    // 跾
        case 9546: return "duo";    // 跿
        case 9548: return "chu";    // 踀
        case 9550: return "keng";    // 踁
        case 9552: return "nie";    // 踂
        case 9554: return "qiao";    // 踃
        case 9556: return "bu";    // 踄
        case 9558: return "qun";    // 踆
        case 9560: return "mu";    // 踇
        case 9562: return "shu";    // 踈
        case 9564: return "jiao";    // 踋
        case 9566: return "qiao";    // 踍
        case 9568: return "meo";    // 踎
        case 9570: return "jian";    // 踐
        case 9572: return "ji";    // 踑
        case 9574: return "wo";    // 踒
        case 9576: return "wei";    // 踓
        case 9578: return "jie";    // 踕
        case 9580: return "ji";    // 踖
        case 9582: return "nie";    // 踗
        case 9584: return "ju";    // 踘
        case 9586: return "nie";    // 踙
        case 9588: return "lun";    // 踚
        case 9590: return "lu";    // 踛
        case 9592: return "leng";    // 踜
        case 9594: return "wo";    // 踠
        case 9596: return "juan";    // 踡
        case 9598: return "zu";    // 踤
        case 9600: return "qie";    // 踥
        case 9602: return "ji";    // 踦
        case 9604: return "di";    // 踧
        case 9606: return "zong";    // 踨
        case 9608: return "pan";    // 踫
        case 9610: return "zheng";    // 踭
        case 9612: return "yao";    // 踰
        case 9614: return "dun";    // 踲
        case 9616: return "chuan";    // 踳
        case 9618: return "yong";    // 踴
        case 9620: return "di";    // 踶
        case 9622: return "zha";    // 踷
        case 9624: return "chen";    // 踸
        case 9626: return "tuo";    // 踻
        case 9628: return "tang";    // 踼
        case 9630: return "bi";    // 踾
        case 9632: return "";    // ?
        case 9634: return "zu";    // 踿
        case 9636: return "nuo";    // 蹃
        case 9638: return "zha";    // 蹅
        case 9640: return "tui";    // 蹆
        case 9642: return "qiang";    // 蹌
        case 9644: return "zhan";    // 蹍
        case 9646: return "dian";    // 蹎
        case 9648: return "di";    // 蹏
        case 9650: return "ji";    // 蹐
        case 9652: return "liu";    // 蹓
        case 9654: return "zan";    // 蹔
        case 9656: return "bi";    // 蹕
        case 9658: return "chong";    // 蹖
        case 9660: return "lu";    // 蹗
        case 9662: return "liao";    // 蹘
        case 9664: return "tang";    // 蹚
        case 9666: return "dai";    // 蹛
        case 9668: return "su";    // 蹜
        case 9670: return "xi";    // 蹝
        case 9672: return "kui";    // 蹞
        case 9674: return "ji";    // 蹟
        case 9676: return "zhi";    // 蹠
        case 9678: return "qiang";    // 蹡
        case 9680: return "di";    // 蹢
        case 9682: return "pan";    // 蹣
        case 9684: return "zong";    // 蹤
        case 9686: return "lian";    // 蹥
        case 9688: return "zao";    // 蹧
        case 9690: return "nian";    // 蹨
        case 9692: return "tui";    // 蹪
        case 9694: return "ju";    // 蹫
        case 9696: return "xian";    // 蹮
        case 9698: return "zhong";    // 蹱
        case 9700: return "bo";    // 蹳
        case 9702: return "cu";    // 蹵
        case 9704: return "jue";    // 蹷
        case 9706: return "lin";    // 蹸
        case 9708: return "ta";    // 蹹
        case 9710: return "qiao";    // 蹺
        case 9712: return "jiao";    // 蹻
        case 9714: return "liao";    // 蹽
        case 9716: return "dun";    // 蹾
        case 9718: return "guan";    // 躀
        case 9720: return "da";    // 躂
        case 9722: return "bi";    // 躃
        case 9724: return "bi";    // 躄
        case 9726: return "ju";    // 躆
        case 9728: return "qiao";    // 躈
        case 9730: return "dun";    // 躉
        case 9732: return "chou";    // 躊
        case 9734: return "ji";    // 躋
        case 9736: return "wu";    // 躌
        case 9738: return "yue";    // 躍
        case 9740: return "nian";    // 躎
        case 9742: return "zhi";    // 躑
        case 9744: return "yue";    // 躒
        case 9746: return "zhi";    // 躓
        case 9748: return "chu";    // 躕
        case 9750: return "duan";    // 躖
        case 9752: return "wei";    // 躗
        case 9754: return "long";    // 躘
        case 9756: return "lin";    // 躙
        case 9758: return "xian";    // 躚
        case 9760: return "wei";    // 躛
        case 9762: return "lan";    // 躝
        case 9764: return "rang";    // 躟
        case 9766: return "xie";    // 躠
        case 9768: return "nie";    // 躡
        case 9770: return "ta";    // 躢
        case 9772: return "qu";    // 躣
        case 9774: return "ji";    // 躤
        case 9776: return "cuan";    // 躥
        case 9778: return "zuan";    // 躦
        case 9780: return "xi";    // 躧
        case 9782: return "kui";    // 躨
        case 9784: return "jue";    // 躩
        case 9786: return "lin";    // 躪
        case 9788: return "dan";    // 躭
        case 9790: return "fen";    // 躮
        case 9792: return "ti";    // 躰
        case 9794: return "duo";    // 躱
        case 9796: return "gong";    // 躳
        case 9798: return "lang";    // 躴
        case 9800: return "ren";    // 躵
        case 9802: return "luo";    // 躶
        case 9804: return "ai";    // 躷
        case 9806: return "ji";    // 躸
        case 9808: return "ju";    // 躹
        case 9810: return "kong";    // 躻
        case 9812: return "lao";    // 躼
        case 9814: return "yan";    // 躽
        case 9816: return "mei";    // 躾
        case 9818: return "kang";    // 躿
        case 9820: return "qu";    // 軀
        case 9822: return "lou";    // 軁
        case 9824: return "lao";    // 軂
        case 9826: return "";    // ?
        case 9828: return "tuo";    // 軃
        case 9830: return "zhi";    // 軄
        case 9832: return "yan";    // 軅
        case 9834: return "ti";    // 軆
        case 9836: return "dao";    // 軇
        case 9838: return "ying";    // 軈
        case 9840: return "yu";    // 軉
        case 9842: return "che";    // 車
        case 9844: return "zha";    // 軋
        case 9846: return "gui";    // 軌
        case 9848: return "jun";    // 軍
        case 9850: return "yue";    // 軏
        case 9852: return "xian";    // 軐
        case 9854: return "dai";    // 軑
        case 9856: return "xuan";    // 軒
        case 9858: return "fan";    // 軓
        case 9860: return "ren";    // 軔
        case 9862: return "shan";    // 軕
        case 9864: return "kuang";    // 軖
        case 9866: return "shu";    // 軗
        case 9868: return "tun";    // 軘
        case 9870: return "qi";    // 軙
        case 9872: return "dai";    // 軚
        case 9874: return "e";    // 軛
        case 9876: return "na";    // 軜
        case 9878: return "qi";    // 軝
        case 9880: return "mao";    // 軞
        case 9882: return "ruan";    // 軟
        case 9884: return "kuang";    // 軠
        case 9886: return "qian";    // 軡
        case 9888: return "zhuan";    // 転
        case 9890: return "hong";    // 軣
        case 9892: return "hu";    // 軤
        case 9894: return "gou";    // 軥
        case 9896: return "kuang";    // 軦
        case 9898: return "di";    // 軧
        case 9900: return "ling";    // 軨
        case 9902: return "dai";    // 軩
        case 9904: return "ao";    // 軪
        case 9906: return "zhen";    // 軫
        case 9908: return "fan";    // 軬
        case 9910: return "kuang";    // 軭
        case 9912: return "yang";    // 軮
        case 9914: return "peng";    // 軯
        case 9916: return "bei";    // 軰
        case 9918: return "gu";    // 軱
        case 9920: return "gu";    // 軲
        case 9922: return "pao";    // 軳
        case 9924: return "zhu";    // 軴
        case 9926: return "fu";    // 軵
        case 9928: return "e";    // 軶
        case 9930: return "ba";    // 軷
        case 9932: return "zhou";    // 軸
        case 9934: return "zhi";    // 軹
        case 9936: return "yao";    // 軺
        case 9938: return "ke";    // 軻
        case 9940: return "yi";    // 軼
        case 9942: return "qing";    // 軽
        case 9944: return "shi";    // 軾
        case 9946: return "peng";    // 軿
        case 9948: return "er";    // 輀
        case 9950: return "gong";    // 輁
        case 9952: return "ju";    // 輂
        case 9954: return "jiao";    // 較
        case 9956: return "guang";    // 輄
        case 9958: return "lu";    // 輅
        case 9960: return "kai";    // 輆
        case 9962: return "quan";    // 輇
        case 9964: return "zhou";    // 輈
        case 9966: return "zai";    // 載
        case 9968: return "zhi";    // 輊
        case 9970: return "she";    // 輋
        case 9972: return "liang";    // 輌
        case 9974: return "yu";    // 輍
        case 9976: return "shao";    // 輎
        case 9978: return "you";    // 輏
        case 9980: return "wan";    // 輐
        case 9982: return "yin";    // 輑
        case 9984: return "zhe";    // 輒
        case 9986: return "wan";    // 輓
        case 9988: return "fu";    // 輔
        case 9990: return "qing";    // 輕
        case 9992: return "zhou";    // 輖
        case 9994: return "yi";    // 輗
        case 9996: return "leng";    // 輘
        case 9998: return "zhe";    // 輙
        case 10000: return "zhan";    // 輚
        case 10002: return "liang";    // 輛
        case 10004: return "zi";    // 輜
        case 10006: return "hui";    // 輝
        case 10008: return "wang";    // 輞
        case 10010: return "chuo";    // 輟
        case 10012: return "guo";    // 輠
        case 10014: return "kan";    // 輡
        case 10016: return "yi";    // 輢
        case 10018: return "peng";    // 輣
        case 10020: return "";    // ?
        case 10022: return "qian";    // 輤
        case 10024: return "gun";    // 輥
        case 10026: return "nian";    // 輦
        case 10028: return "peng";    // 輧
        case 10030: return "guan";    // 輨
        case 10032: return "bei";    // 輩
        case 10034: return "lun";    // 輪
        case 10036: return "pai";    // 輫
        case 10038: return "liang";    // 輬
        case 10040: return "er";    // 輭
        case 10042: return "rou";    // 輮
        case 10044: return "ji";    // 輯
        case 10046: return "yang";    // 輰
        case 10048: return "kan";    // 輱
        case 10050: return "chuan";    // 輲
        case 10052: return "cou";    // 輳
        case 10054: return "chun";    // 輴
        case 10056: return "ya";    // 輵
        case 10058: return "you";    // 輶
        case 10060: return "hong";    // 輷
        case 10062: return "shu";    // 輸
        case 10064: return "bu";    // 輹
        case 10066: return "zi";    // 輺
        case 10068: return "fu";    // 輻
        case 10070: return "wen";    // 輼
        case 10072: return "ben";    // 輽
        case 10074: return "nian";    // 輾
        case 10076: return "yu";    // 輿
        case 10078: return "yun";    // 轀
        case 10080: return "tao";    // 轁
        case 10082: return "gu";    // 轂
        case 10084: return "zhen";    // 轃
        case 10086: return "xia";    // 轄
        case 10088: return "yuan";    // 轅
        case 10090: return "lu";    // 轆
        case 10092: return "jiao";    // 轇
        case 10094: return "chao";    // 轈
        case 10096: return "zhuan";    // 轉
        case 10098: return "wei";    // 轊
        case 10100: return "hun";    // 轋
        case 10102: return "xue";    // 轌
        case 10104: return "zhe";    // 轍
        case 10106: return "jiao";    // 轎
        case 10108: return "zhan";    // 轏
        case 10110: return "bu";    // 轐
        case 10112: return "lao";    // 轑
        case 10114: return "fen";    // 轒
        case 10116: return "fan";    // 轓
        case 10118: return "lin";    // 轔
        case 10120: return "ge";    // 轕
        case 10122: return "se";    // 轖
        case 10124: return "kan";    // 轗
        case 10126: return "huan";    // 轘
        case 10128: return "yi";    // 轙
        case 10130: return "ji";    // 轚
        case 10132: return "zhui";    // 轛
        case 10134: return "er";    // 轜
        case 10136: return "yu";    // 轝
        case 10138: return "jian";    // 轞
        case 10140: return "hong";    // 轟
        case 10142: return "lei";    // 轠
        case 10144: return "pei";    // 轡
        case 10146: return "li";    // 轢
        case 10148: return "li";    // 轣
        case 10150: return "lu";    // 轤
        case 10152: return "lin";    // 轥
        case 10154: return "dai";    // 轪
        case 10156: return "zhou";    // 辀
        case 10158: return "liang";    // 辌
        case 10160: return "wen";    // 辒
        case 10162: return "ci";    // 辝
        case 10164: return "zui";    // 辠
        case 10166: return "bian";    // 辡
        case 10168: return "la";    // 辢
        case 10170: return "ci";    // 辤
        case 10172: return "yi";    // 辥
        case 10174: return "ban";    // 辦
        case 10176: return "bian";    // 辧
        case 10178: return "xue";    // 辪
        case 10180: return "ban";    // 辬
        case 10182: return "ci";    // 辭
        case 10184: return "bian";    // 辮
        case 10186: return "bian";    // 辯
        case 10188: return "nong";    // 農
        case 10190: return "nong";    // 辳
        case 10192: return "zhen";    // 辴
        case 10194: return "chuo";    // 辵
        case 10196: return "yi";    // 辷
        case 10198: return "reng";    // 辸
        case 10200: return "fan";    // 辺
        case 10202: return "shi";    // 辻
        case 10204: return "ru";    // 込
        case 10206: return "chan";    // 辿
        case 10208: return "gan";    // 迀
        case 10210: return "yu";    // 迃
        case 10212: return "tuo";    // 迆
        case 10214: return "";    // ?
        case 10216: return "qi";    // 迉
        case 10218: return "zha";    // 迊
        case 10220: return "wang";    // 迋
        case 10222: return "tu";    // 迌
        case 10224: return "zhun";    // 迍
        case 10226: return "da";    // 迏
        case 10228: return "hang";    // 迒
        case 10230: return "da";    // 迖
        case 10232: return "e";    // 迗
        case 10234: return "zhong";    // 迚
        case 10236: return "che";    // 迠
        case 10238: return "ni";    // 迡
        case 10240: return "zhi";    // 迣
        case 10242: return "zhen";    // 迧
        case 10244: return "wang";    // 迬
        case 10246: return "tao";    // 迯
        case 10248: return "yi";    // 迱
        case 10250: return "qu";    // 迲
        case 10252: return "hui";    // 迴
        case 10254: return "dong";    // 迵
        case 10256: return "you";    // 迶
        case 10258: return "nai";    // 迺
        case 10260: return "yi";    // 迻
        case 10262: return "jie";    // 迼
        case 10264: return "lie";    // 迾
        case 10266: return "xun";    // 迿
        case 10268: return "dun";    // 逇
        case 10270: return "jiong";    // 逈
        case 10272: return "you";    // 逌
        case 10274: return "qiu";    // 逎
        case 10276: return "di";    // 逓
        case 10278: return "jing";    // 逕
        case 10280: return "yi";    // 逘
        case 10282: return "zhe";    // 這
        case 10284: return "wu";    // 逜
        case 10286: return "lian";    // 連
        case 10288: return "suo";    // 逤
        case 10290: return "hui";    // 逥
        case 10292: return "gu";    // 逧
        case 10294: return "lai";    // 逨
        case 10296: return "ben";    // 逩
        case 10298: return "cuo";    // 逪
        case 10300: return "jue";    // 逫
        case 10302: return "beng";    // 逬
        case 10304: return "you";    // 逰
        case 10306: return "zhou";    // 週
        case 10308: return "jin";    // 進
        case 10310: return "yu";    // 逳
        case 10312: return "chuo";    // 逴
        case 10314: return "ti";    // 逷
        case 10316: return "da";    // 逹
        case 10318: return "yuan";    // 逺
        case 10320: return "nuo";    // 逽
        case 10322: return "dang";    // 逿
        case 10324: return "sui";    // 遀
        case 10326: return "an";    // 遃
        case 10328: return "chi";    // 遅
        case 10330: return "ti";    // 遆
        case 10332: return "shi";    // 遈
        case 10334: return "zhen";    // 遉
        case 10336: return "you";    // 遊
        case 10338: return "yun";    // 運
        case 10340: return "e";    // 遌
        case 10342: return "guo";    // 過
        case 10344: return "da";    // 達
        case 10346: return "wei";    // 違
        case 10348: return "nan";    // 遖
        case 10350: return "yao";    // 遙
        case 10352: return "chou";    // 遚
        case 10354: return "xun";    // 遜
        case 10356: return "ta";    // 遝
        case 10358: return "di";    // 遞
        case 10360: return "zhi";    // 遟
        case 10362: return "yuan";    // 遠
        case 10364: return "su";    // 遡
        case 10366: return "ma";    // 遤
        case 10368: return "guan";    // 遦
        case 10370: return "zhang";    // 遧
        case 10372: return "shi";    // 適
        case 10374: return "ca";    // 遪
        case 10376: return "chi";    // 遫
        case 10378: return "su";    // 遬
        case 10380: return "dun";    // 遯
        case 10382: return "di";    // 遰
        case 10384: return "lou";    // 遱
        case 10386: return "chi";    // 遲
        case 10388: return "cuo";    // 遳
        case 10390: return "rao";    // 遶
        case 10392: return "qian";    // 遷
        case 10394: return "xuan";    // 選
        case 10396: return "yu";    // 遹
        case 10398: return "yi";    // 遺
        case 10400: return "e";    // 遻
        case 10402: return "liao";    // 遼
        case 10404: return "shi";    // 遾
        case 10406: return "mai";    // 邁
        case 10408: return "";    // ?
        case 10410: return "hai";    // 還
        case 10412: return "zhan";    // 邅
        case 10414: return "teng";    // 邆
        case 10416: return "er";    // 邇
        case 10418: return "bian";    // 邉
        case 10420: return "bian";    // 邊
        case 10422: return "li";    // 邌
        case 10424: return "yuan";    // 邍
        case 10426: return "you";    // 邎
        case 10428: return "luo";    // 邏
        case 10430: return "li";    // 邐
        case 10432: return "ting";    // 邒
        case 10434: return "qi";    // 邔
        case 10436: return "shan";    // 邖
        case 10438: return "yu";    // 邘
        case 10440: return "fu";    // 邚
        case 10442: return "wan";    // 邜
        case 10444: return "fu";    // 邞
        case 10446: return "kang";    // 邟
        case 10448: return "bin";    // 邠
        case 10450: return "xin";    // 邤
        case 10452: return "shen";    // 邥
        case 10454: return "yuan";    // 邧
        case 10456: return "cun";    // 邨
        case 10458: return "huo";    // 邩
        case 10460: return "bang";    // 邫
        case 10462: return "ju";    // 邭
        case 10464: return "bi";    // 邲
        case 10466: return "wa";    // 邷
        case 10468: return "kuang";    // 邼
        case 10470: return "gui";    // 邽
        case 10472: return "shi";    // 邿
        case 10474: return "ku";    // 郀
        case 10476: return "gai";    // 郂
        case 10478: return "xia";    // 郃
        case 10480: return "ji";    // 郆
        case 10482: return "hou";    // 郈
        case 10484: return "geng";    // 郉
        case 10486: return "xi";    // 郋
        case 10488: return "gui";    // 郌
        case 10490: return "na";    // 郍
        case 10492: return "lang";    // 郒
        case 10494: return "yan";    // 郔
        case 10496: return "cheng";    // 郕
        case 10498: return "dou";    // 郖
        case 10500: return "lu";    // 郘
        case 10502: return "fu";    // 郙
        case 10504: return "wu";    // 郚
        case 10506: return "lang";    // 郞
        case 10508: return "jia";    // 郟
        case 10510: return "geng";    // 郠
        case 10512: return "bo";    // 郣
        case 10514: return "qie";    // 郤
        case 10516: return "ju";    // 郥
        case 10518: return "ao";    // 郩
        case 10520: return "qi";    // 郪
        case 10522: return "qing";    // 郬
        case 10524: return "zhou";    // 郮
        case 10526: return "ju";    // 郰
        case 10528: return "ping";    // 郱
        case 10530: return "lai";    // 郲
        case 10532: return "ni";    // 郳
        case 10534: return "you";    // 郵
        case 10536: return "bu";    // 郶
        case 10538: return "xiang";    // 郷
        case 10540: return "ju";    // 郹
        case 10542: return "yong";    // 郺
        case 10544: return "qiao";    // 郻
        case 10546: return "yi";    // 郼
        case 10548: return "mei";    // 郿
        case 10550: return "ruo";    // 鄀
        case 10552: return "bei";    // 鄁
        case 10554: return "shu";    // 鄃
        case 10556: return "yu";    // 鄅
        case 10558: return "yun";    // 鄆
        case 10560: return "hou";    // 鄇
        case 10562: return "kui";    // 鄈
        case 10564: return "xiang";    // 鄉
        case 10566: return "xiang";    // 鄊
        case 10568: return "sou";    // 鄋
        case 10570: return "tang";    // 鄌
        case 10572: return "ming";    // 鄍
        case 10574: return "xi";    // 鄎
        case 10576: return "ru";    // 鄏
        case 10578: return "chu";    // 鄐
        case 10580: return "zi";    // 鄑
        case 10582: return "zou";    // 鄒
        case 10584: return "ye";    // 鄓
        case 10586: return "wu";    // 鄔
        case 10588: return "xiang";    // 鄕
        case 10590: return "yun";    // 鄖
        case 10592: return "hao";    // 鄗
        case 10594: return "yong";    // 鄘
        case 10596: return "mao";    // 鄚
        case 10598: return "chao";    // 鄛
        case 10600: return "fu";    // 鄜
        case 10602: return "";    // ?
        case 10604: return "liao";    // 鄝
        case 10606: return "zhuan";    // 鄟
        case 10608: return "hu";    // 鄠
        case 10610: return "qiao";    // 鄡
        case 10612: return "wan";    // 鄤
        case 10614: return "qiao";    // 鄥
        case 10616: return "xu";    // 鄦
        case 10618: return "deng";    // 鄧
        case 10620: return "bi";    // 鄨
        case 10622: return "xun";    // 鄩
        case 10624: return "bi";    // 鄪
        case 10626: return "zeng";    // 鄫
        case 10628: return "wei";    // 鄬
        case 10630: return "zheng";    // 鄭
        case 10632: return "mao";    // 鄮
        case 10634: return "lin";    // 鄰
        case 10636: return "dan";    // 鄲
        case 10638: return "meng";    // 鄳
        case 10640: return "ye";    // 鄴
        case 10642: return "cao";    // 鄵
        case 10644: return "kuai";    // 鄶
        case 10646: return "feng";    // 鄷
        case 10648: return "meng";    // 鄸
        case 10650: return "kuang";    // 鄺
        case 10652: return "lian";    // 鄻
        case 10654: return "zan";    // 鄼
        case 10656: return "chan";    // 鄽
        case 10658: return "you";    // 鄾
        case 10660: return "ji";    // 鄿
        case 10662: return "yan";    // 酀
        case 10664: return "chan";    // 酁
        case 10666: return "zan";    // 酂
        case 10668: return "huan";    // 酄
        case 10670: return "xi";    // 酅
        case 10672: return "zan";    // 酇
        case 10674: return "li";    // 酈
        case 10676: return "yu";    // 酑
        case 10678: return "yan";    // 酓
        case 10680: return "zui";    // 酔
        case 10682: return "mao";    // 酕
        case 10684: return "dan";    // 酖
        case 10686: return "dou";    // 酘
        case 10688: return "zhen";    // 酙
        case 10690: return "yuan";    // 酛
        case 10692: return "fu";    // 酜
        case 10694: return "tian";    // 酟
        case 10696: return "qia";    // 酠
        case 10698: return "po";    // 酦
        case 10700: return "chou";    // 酧
        case 10702: return "zai";    // 酨
        case 10704: return "chuo";    // 酫
        case 10706: return "you";    // 酭
        case 10708: return "yin";    // 酳
        case 10710: return "pu";    // 酺
        case 10712: return "fu";    // 酻
        case 10714: return "hai";    // 酼
        case 10716: return "wei";    // 醀
        case 10718: return "lu";    // 醁
        case 10720: return "lan";    // 醂
        case 10722: return "yan";    // 醃
        case 10724: return "tao";    // 醄
        case 10726: return "zhan";    // 醆
        case 10728: return "dan";    // 醈
        case 10730: return "zhui";    // 醊
        case 10732: return "jian";    // 醎
        case 10734: return "du";    // 醏
        case 10736: return "tan";    // 醓
        case 10738: return "qiu";    // 醔
        case 10740: return "chun";    // 醕
        case 10742: return "yun";    // 醖
        case 10744: return "fa";    // 醗
        case 10746: return "ke";    // 醘
        case 10748: return "sou";    // 醙
        case 10750: return "chou";    // 醜
        case 10752: return "cuo";    // 醝
        case 10754: return "yun";    // 醞
        case 10756: return "yong";    // 醟
        case 10758: return "ang";    // 醠
        case 10760: return "zha";    // 醡
        case 10762: return "jiang";    // 醤
        case 10764: return "piao";    // 醥
        case 10766: return "chan";    // 醦
        case 10768: return "ou";    // 醧
        case 10770: return "li";    // 醨
        case 10772: return "zao";    // 醩
        case 10774: return "yi";    // 醫
        case 10776: return "jiang";    // 醬
        case 10778: return "tan";    // 醰
        case 10780: return "po";    // 醱
        case 10782: return "nong";    // 醲
        case 10784: return "yi";    // 醳
        case 10786: return "yan";    // 醶
        case 10788: return "yi";    // 醷
        case 10790: return "niang";    // 醸
        case 10792: return "ru";    // 醹
        case 10794: return "shou";    // 醻
        case 10796: return "";    // ?
        case 10798: return "yan";    // 醼
        case 10800: return "ling";    // 醽
        case 10802: return "mi";    // 醾
        case 10804: return "mi";    // 醿
        case 10806: return "niang";    // 釀
        case 10808: return "xin";    // 釁
        case 10810: return "jiao";    // 釂
        case 10812: return "shai";    // 釃
        case 10814: return "mi";    // 釄
        case 10816: return "yan";    // 釅
        case 10818: return "bian";    // 釆
        case 10820: return "shi";    // 釈
        case 10822: return "shi";    // 釋
        case 10824: return "li";    // 釐
        case 10826: return "jin";    // 釒
        case 10828: return "ga";    // 釓
        case 10830: return "yi";    // 釔
        case 10832: return "liao";    // 釕
        case 10834: return "dao";    // 釖
        case 10836: return "zhao";    // 釗
        case 10838: return "ding";    // 釘
        case 10840: return "po";    // 釙
        case 10842: return "qiu";    // 釚
        case 10844: return "ba";    // 釛
        case 10846: return "zhen";    // 針
        case 10848: return "zhi";    // 釞
        case 10850: return "ba";    // 釟
        case 10852: return "luan";    // 釠
        case 10854: return "fu";    // 釡
        case 10856: return "nai";    // 釢
        case 10858: return "diao";    // 釣
        case 10860: return "shan";    // 釤
        case 10862: return "jiao";    // 釥
        case 10864: return "kou";    // 釦
        case 10866: return "chuan";    // 釧
        case 10868: return "zi";    // 釨
        case 10870: return "fan";    // 釩
        case 10872: return "yu";    // 釪
        case 10874: return "wu";    // 釫
        case 10876: return "gan";    // 釬
        case 10878: return "gang";    // 釭
        case 10880: return "qi";    // 釮
        case 10882: return "mang";    // 釯
        case 10884: return "ri";    // 釰
        case 10886: return "di";    // 釱
        case 10888: return "si";    // 釲
        case 10890: return "xi";    // 釳
        case 10892: return "yi";    // 釴
        case 10894: return "chai";    // 釵
        case 10896: return "yi";    // 釶
        case 10898: return "tu";    // 釷
        case 10900: return "xi";    // 釸
        case 10902: return "nu";    // 釹
        case 10904: return "qian";    // 釺
        case 10906: return "qiu";    // 釻
        case 10908: return "jian";    // 釼
        case 10910: return "pi";    // 釽
        case 10912: return "ya";    // 釾
        case 10914: return "yin";    // 釿
        case 10916: return "ba";    // 鈀
        case 10918: return "fang";    // 鈁
        case 10920: return "qin";    // 鈂
        case 10922: return "jian";    // 鈃
        case 10924: return "dou";    // 鈄
        case 10926: return "yue";    // 鈅
        case 10928: return "qian";    // 鈆
        case 10930: return "fu";    // 鈇
        case 10932: return "bu";    // 鈈
        case 10934: return "na";    // 鈉
        case 10936: return "qin";    // 鈊
        case 10938: return "e";    // 鈋
        case 10940: return "jue";    // 鈌
        case 10942: return "dun";    // 鈍
        case 10944: return "gou";    // 鈎
        case 10946: return "yin";    // 鈏
        case 10948: return "qian";    // 鈐
        case 10950: return "ban";    // 鈑
        case 10952: return "xi";    // 鈒
        case 10954: return "ren";    // 鈓
        case 10956: return "chao";    // 鈔
        case 10958: return "niu";    // 鈕
        case 10960: return "fen";    // 鈖
        case 10962: return "yun";    // 鈗
        case 10964: return "yi";    // 鈘
        case 10966: return "qin";    // 鈙
        case 10968: return "bi";    // 鈚
        case 10970: return "guo";    // 鈛
        case 10972: return "hong";    // 鈜
        case 10974: return "yin";    // 鈝
        case 10976: return "jun";    // 鈞
        case 10978: return "diao";    // 鈟
        case 10980: return "yi";    // 鈠
        case 10982: return "zhong";    // 鈡
        case 10984: return "xi";    // 鈢
        case 10986: return "gai";    // 鈣
        case 10988: return "ri";    // 鈤
        case 10990: return "";    // ?
        case 10992: return "huo";    // 鈥
        case 10994: return "tai";    // 鈦
        case 10996: return "kang";    // 鈧
        case 10998: return "yuan";    // 鈨
        case 11000: return "lu";    // 鈩
        case 11002: return "e";    // 鈪
        case 11004: return "wen";    // 鈫
        case 11006: return "duo";    // 鈬
        case 11008: return "zi";    // 鈭
        case 11010: return "ni";    // 鈮
        case 11012: return "tu";    // 鈯
        case 11014: return "shi";    // 鈰
        case 11016: return "min";    // 鈱
        case 11018: return "pi";    // 鈲
        case 11020: return "ke";    // 鈳
        case 11022: return "ling";    // 鈴
        case 11024: return "bing";    // 鈵
        case 11026: return "ci";    // 鈶
        case 11028: return "gu";    // 鈷
        case 11030: return "bo";    // 鈸
        case 11032: return "pi";    // 鈹
        case 11034: return "yu";    // 鈺
        case 11036: return "si";    // 鈻
        case 11038: return "zuo";    // 鈼
        case 11040: return "bu";    // 鈽
        case 11042: return "you";    // 鈾
        case 11044: return "dian";    // 鈿
        case 11046: return "jia";    // 鉀
        case 11048: return "zhen";    // 鉁
        case 11050: return "shi";    // 鉂
        case 11052: return "shi";    // 鉃
        case 11054: return "zhi";    // 鉄
        case 11056: return "ju";    // 鉅
        case 11058: return "zuan";    // 鉆
        case 11060: return "yi";    // 鉇
        case 11062: return "ta";    // 鉈
        case 11064: return "xuan";    // 鉉
        case 11066: return "zhao";    // 鉊
        case 11068: return "bao";    // 鉋
        case 11070: return "he";    // 鉌
        case 11072: return "bi";    // 鉍
        case 11074: return "sheng";    // 鉎
        case 11076: return "chu";    // 鉏
        case 11078: return "shi";    // 鉐
        case 11080: return "bo";    // 鉑
        case 11082: return "zhu";    // 鉒
        case 11084: return "chi";    // 鉓
        case 11086: return "za";    // 鉔
        case 11088: return "po";    // 鉕
        case 11090: return "tong";    // 鉖
        case 11092: return "qian";    // 鉗
        case 11094: return "fu";    // 鉘
        case 11096: return "zhai";    // 鉙
        case 11098: return "mao";    // 鉚
        case 11100: return "qian";    // 鉛
        case 11102: return "fu";    // 鉜
        case 11104: return "li";    // 鉝
        case 11106: return "yue";    // 鉞
        case 11108: return "pi";    // 鉟
        case 11110: return "yang";    // 鉠
        case 11112: return "ban";    // 鉡
        case 11114: return "bo";    // 鉢
        case 11116: return "jie";    // 鉣
        case 11118: return "gou";    // 鉤
        case 11120: return "xu";    // 鉥
        case 11122: return "zheng";    // 鉦
        case 11124: return "mu";    // 鉧
        case 11126: return "ni";    // 鉨
        case 11128: return "xi";    // 鉩
        case 11130: return "di";    // 鉪
        case 11132: return "jia";    // 鉫
        case 11134: return "mu";    // 鉬
        case 11136: return "tan";    // 鉭
        case 11138: return "huan";    // 鉮
        case 11140: return "yi";    // 鉯
        case 11142: return "si";    // 鉰
        case 11144: return "kuang";    // 鉱
        case 11146: return "ka";    // 鉲
        case 11148: return "bei";    // 鉳
        case 11150: return "tong";    // 鉵
        case 11152: return "xing";    // 鉶
        case 11154: return "hong";    // 鉷
        case 11156: return "jiao";    // 鉸
        case 11158: return "chi";    // 鉹
        case 11160: return "er";    // 鉺
        case 11162: return "ge";    // 鉻
        case 11164: return "bing";    // 鉼
        case 11166: return "shi";    // 鉽
        case 11168: return "mao";    // 鉾
        case 11170: return "ha";    // 鉿
        case 11172: return "yin";    // 銀
        case 11174: return "jun";    // 銁
        case 11176: return "zhou";    // 銂
        case 11178: return "chong";    // 銃
        case 11180: return "jiong";    // 銄
        case 11182: return "tong";    // 銅
        case 11184: return "";    // ?
        case 11186: return "mo";    // 銆
        case 11188: return "lei";    // 銇
        case 11190: return "ji";    // 銈
        case 11192: return "yu";    // 銉
        case 11194: return "hui";    // 銊
        case 11196: return "ren";    // 銋
        case 11198: return "zun";    // 銌
        case 11200: return "zhi";    // 銍
        case 11202: return "shan";    // 銏
        case 11204: return "li";    // 銐
        case 11206: return "xi";    // 銑
        case 11208: return "jian";    // 銒
        case 11210: return "quan";    // 銓
        case 11212: return "pi";    // 銔
        case 11214: return "yi";    // 銕
        case 11216: return "zhu";    // 銖
        case 11218: return "hou";    // 銗
        case 11220: return "ming";    // 銘
        case 11222: return "kua";    // 銙
        case 11224: return "tiao";    // 銚
        case 11226: return "tian";    // 銛
        case 11228: return "xian";    // 銜
        case 11230: return "xiu";    // 銝
        case 11232: return "jun";    // 銞
        case 11234: return "cha";    // 銟
        case 11236: return "lao";    // 銠
        case 11238: return "ji";    // 銡
        case 11240: return "pi";    // 銢
        case 11242: return "ru";    // 銣
        case 11244: return "mi";    // 銤
        case 11246: return "yi";    // 銥
        case 11248: return "yin";    // 銦
        case 11250: return "guang";    // 銧
        case 11252: return "an";    // 銨
        case 11254: return "diu";    // 銩
        case 11256: return "you";    // 銪
        case 11258: return "se";    // 銫
        case 11260: return "kao";    // 銬
        case 11262: return "jian";    // 銭
        case 11264: return "si";    // 銯
        case 11266: return "ai";    // 銰
        case 11268: return "diao";    // 銱
        case 11270: return "han";    // 銲
        case 11272: return "rui";    // 銳
        case 11274: return "zhi";    // 銴
        case 11276: return "keng";    // 銵
        case 11278: return "qiu";    // 銶
        case 11280: return "xiao";    // 銷
        case 11282: return "nie";    // 銸
        case 11284: return "you";    // 銹
        case 11286: return "zang";    // 銺
        case 11288: return "ti";    // 銻
        case 11290: return "cuo";    // 銼
        case 11292: return "gua";    // 銽
        case 11294: return "gong";    // 銾
        case 11296: return "yong";    // 銿
        case 11298: return "dou";    // 鋀
        case 11300: return "lu";    // 鋁
        case 11302: return "mei";    // 鋂
        case 11304: return "lang";    // 鋃
        case 11306: return "wan";    // 鋄
        case 11308: return "xin";    // 鋅
        case 11310: return "yun";    // 鋆
        case 11312: return "bei";    // 鋇
        case 11314: return "su";    // 鋉
        case 11316: return "yu";    // 鋊
        case 11318: return "chan";    // 鋋
        case 11320: return "ding";    // 鋌
        case 11322: return "bo";    // 鋍
        case 11324: return "han";    // 鋎
        case 11326: return "jia";    // 鋏
        case 11328: return "hong";    // 鋐
        case 11330: return "juan";    // 鋑
        case 11332: return "feng";    // 鋒
        case 11334: return "chan";    // 鋓
        case 11336: return "wan";    // 鋔
        case 11338: return "zhi";    // 鋕
        case 11340: return "tuo";    // 鋖
        case 11342: return "juan";    // 鋗
        case 11344: return "hu";    // 鋘
        case 11346: return "wu";    // 鋙
        case 11348: return "tiao";    // 鋚
        case 11350: return "kuang";    // 鋛
        case 11352: return "chuo";    // 鋜
        case 11354: return "lue";    // 鋝
        case 11356: return "xiang";    // 鋞
        case 11358: return "qian";    // 鋟
        case 11360: return "shen";    // 鋠
        case 11362: return "han";    // 鋡
        case 11364: return "lue";    // 鋢
        case 11366: return "ye";    // 鋣
        case 11368: return "chu";    // 鋤
        case 11370: return "zeng";    // 鋥
        case 11372: return "ju";    // 鋦
        case 11374: return "xian";    // 鋧
        case 11376: return "e";    // 鋨
        case 11378: return "";    // ?
        case 11380: return "mang";    // 鋩
        case 11382: return "pu";    // 鋪
        case 11384: return "li";    // 鋫
        case 11386: return "pan";    // 鋬
        case 11388: return "dui";    // 鋭
        case 11390: return "cheng";    // 鋮
        case 11392: return "gao";    // 鋯
        case 11394: return "li";    // 鋰
        case 11396: return "te";    // 鋱
        case 11398: return "bing";    // 鋲
        case 11400: return "zhu";    // 鋳
        case 11402: return "zhen";    // 鋴
        case 11404: return "tu";    // 鋵
        case 11406: return "liu";    // 鋶
        case 11408: return "nie";    // 鋷
        case 11410: return "ju";    // 鋸
        case 11412: return "chang";    // 鋹
        case 11414: return "yuan";    // 鋺
        case 11416: return "jian";    // 鋻
        case 11418: return "gang";    // 鋼
        case 11420: return "diao";    // 鋽
        case 11422: return "tao";    // 鋾
        case 11424: return "chang";    // 鋿
        case 11426: return "fen";    // 錀
        case 11428: return "guo";    // 錁
        case 11430: return "ling";    // 錂
        case 11432: return "pi";    // 錃
        case 11434: return "lu";    // 錄
        case 11436: return "li";    // 錅
        case 11438: return "qiang";    // 錆
        case 11440: return "pei";    // 錇
        case 11442: return "juan";    // 錈
        case 11444: return "min";    // 錉
        case 11446: return "zu";    // 錊
        case 11448: return "beng";    // 錋
        case 11450: return "an";    // 錌
        case 11452: return "bei";    // 錍
        case 11454: return "gan";    // 錎
        case 11456: return "ya";    // 錏
        case 11458: return "zhui";    // 錐
        case 11460: return "lei";    // 錑
        case 11462: return "a";    // 錒
        case 11464: return "kong";    // 錓
        case 11466: return "ta";    // 錔
        case 11468: return "kun";    // 錕
        case 11470: return "du";    // 錖
        case 11472: return "wei";    // 錗
        case 11474: return "chui";    // 錘
        case 11476: return "zi";    // 錙
        case 11478: return "zheng";    // 錚
        case 11480: return "ben";    // 錛
        case 11482: return "nie";    // 錜
        case 11484: return "zong";    // 錝
        case 11486: return "dui";    // 錞
        case 11488: return "tan";    // 錟
        case 11490: return "ding";    // 錠
        case 11492: return "yi";    // 錡
        case 11494: return "qian";    // 錢
        case 11496: return "zhui";    // 錣
        case 11498: return "ji";    // 錤
        case 11500: return "yu";    // 錥
        case 11502: return "jin";    // 錦
        case 11504: return "guan";    // 錧
        case 11506: return "mao";    // 錨
        case 11508: return "chang";    // 錩
        case 11510: return "tian";    // 錪
        case 11512: return "xi";    // 錫
        case 11514: return "lian";    // 錬
        case 11516: return "diao";    // 錭
        case 11518: return "gu";    // 錮
        case 11520: return "cuo";    // 錯
        case 11522: return "shu";    // 錰
        case 11524: return "zhen";    // 錱
        case 11526: return "lu";    // 録
        case 11528: return "meng";    // 錳
        case 11530: return "lu";    // 錴
        case 11532: return "hua";    // 錵
        case 11534: return "biao";    // 錶
        case 11536: return "ga";    // 錷
        case 11538: return "lai";    // 錸
        case 11540: return "ken";    // 錹
        case 11542: return "fang";    // 錺
        case 11544: return "wu";    // 錻
        case 11546: return "nai";    // 錼
        case 11548: return "wan";    // 錽
        case 11550: return "hu";    // 錿
        case 11552: return "de";    // 鍀
        case 11554: return "xian";    // 鍁
        case 11556: return "pian";    // 鍂
        case 11558: return "huo";    // 鍃
        case 11560: return "liang";    // 鍄
        case 11562: return "fa";    // 鍅
        case 11564: return "men";    // 鍆
        case 11566: return "kai";    // 鍇
        case 11568: return "yang";    // 鍈
        case 11570: return "di";    // 鍉
        case 11572: return "";    // ?
        case 11574: return "lian";    // 鍊
        case 11576: return "guo";    // 鍋
        case 11578: return "xian";    // 鍌
        case 11580: return "du";    // 鍍
        case 11582: return "tu";    // 鍎
        case 11584: return "wei";    // 鍏
        case 11586: return "wan";    // 鍐
        case 11588: return "fu";    // 鍑
        case 11590: return "rou";    // 鍒
        case 11592: return "ji";    // 鍓
        case 11594: return "e";    // 鍔
        case 11596: return "jun";    // 鍕
        case 11598: return "zhen";    // 鍖
        case 11600: return "ti";    // 鍗
        case 11602: return "zha";    // 鍘
        case 11604: return "hu";    // 鍙
        case 11606: return "yang";    // 鍚
        case 11608: return "duan";    // 鍛
        case 11610: return "xia";    // 鍜
        case 11612: return "yu";    // 鍝
        case 11614: return "keng";    // 鍞
        case 11616: return "sheng";    // 鍟
        case 11618: return "huang";    // 鍠
        case 11620: return "wei";    // 鍡
        case 11622: return "fu";    // 鍢
        case 11624: return "zhao";    // 鍣
        case 11626: return "cha";    // 鍤
        case 11628: return "qie";    // 鍥
        case 11630: return "shi";    // 鍦
        case 11632: return "hong";    // 鍧
        case 11634: return "kui";    // 鍨
        case 11636: return "tian";    // 鍩
        case 11638: return "qiao";    // 鍫
        case 11640: return "qiao";    // 鍬
        case 11642: return "hou";    // 鍭
        case 11644: return "tou";    // 鍮
        case 11646: return "zong";    // 鍯
        case 11648: return "huan";    // 鍰
        case 11650: return "ye";    // 鍱
        case 11652: return "min";    // 鍲
        case 11654: return "jian";    // 鍳
        case 11656: return "duan";    // 鍴
        case 11658: return "jian";    // 鍵
        case 11660: return "si";    // 鍶
        case 11662: return "kui";    // 鍷
        case 11664: return "hu";    // 鍸
        case 11666: return "xuan";    // 鍹
        case 11668: return "zhe";    // 鍺
        case 11670: return "jie";    // 鍻
        case 11672: return "qian";    // 鍼
        case 11674: return "bian";    // 鍽
        case 11676: return "zhong";    // 鍾
        case 11678: return "zi";    // 鍿
        case 11680: return "xiu";    // 鎀
        case 11682: return "ye";    // 鎁
        case 11684: return "mei";    // 鎂
        case 11686: return "pai";    // 鎃
        case 11688: return "ai";    // 鎄
        case 11690: return "gai";    // 鎅
        case 11692: return "qian";    // 鎆
        case 11694: return "mei";    // 鎇
        case 11696: return "cha";    // 鎈
        case 11698: return "da";    // 鎉
        case 11700: return "bang";    // 鎊
        case 11702: return "xia";    // 鎋
        case 11704: return "lian";    // 鎌
        case 11706: return "se";    // 鎍
        case 11708: return "kai";    // 鎎
        case 11710: return "yao";    // 鎐
        case 11712: return "ye";    // 鎑
        case 11714: return "nou";    // 鎒
        case 11716: return "weng";    // 鎓
        case 11718: return "rong";    // 鎔
        case 11720: return "tang";    // 鎕
        case 11722: return "suo";    // 鎖
        case 11724: return "qiang";    // 鎗
        case 11726: return "ge";    // 鎘
        case 11728: return "shuo";    // 鎙
        case 11730: return "dui";    // 鎚
        case 11732: return "bo";    // 鎛
        case 11734: return "pan";    // 鎜
        case 11736: return "da";    // 鎝
        case 11738: return "bi";    // 鎞
        case 11740: return "sang";    // 鎟
        case 11742: return "gang";    // 鎠
        case 11744: return "zi";    // 鎡
        case 11746: return "wu";    // 鎢
        case 11748: return "ying";    // 鎣
        case 11750: return "huang";    // 鎤
        case 11752: return "tiao";    // 鎥
        case 11754: return "liu";    // 鎦
        case 11756: return "kai";    // 鎧
        case 11758: return "sun";    // 鎨
        case 11760: return "shi";    // 鎩
        case 11762: return "sou";    // 鎪
        case 11764: return "wan";    // 鎫
        case 11766: return "";    // ?
        case 11768: return "gao";    // 鎬
        case 11770: return "zhen";    // 鎭
        case 11772: return "zhen";    // 鎮
        case 11774: return "lang";    // 鎯
        case 11776: return "yi";    // 鎰
        case 11778: return "yuan";    // 鎱
        case 11780: return "tang";    // 鎲
        case 11782: return "nie";    // 鎳
        case 11784: return "xi";    // 鎴
        case 11786: return "jia";    // 鎵
        case 11788: return "ge";    // 鎶
        case 11790: return "ma";    // 鎷
        case 11792: return "juan";    // 鎸
        case 11794: return "song";    // 鎹
        case 11796: return "zu";    // 鎺
        case 11798: return "suo";    // 鎻
        case 11800: return "xia";    // 鎼
        case 11802: return "feng";    // 鎽
        case 11804: return "wen";    // 鎾
        case 11806: return "na";    // 鎿
        case 11808: return "lu";    // 鏀
        case 11810: return "suo";    // 鏁
        case 11812: return "ou";    // 鏂
        case 11814: return "zu";    // 鏃
        case 11816: return "tuan";    // 鏄
        case 11818: return "xiu";    // 鏅
        case 11820: return "guan";    // 鏆
        case 11822: return "xuan";    // 鏇
        case 11824: return "lian";    // 鏈
        case 11826: return "shou";    // 鏉
        case 11828: return "man";    // 鏋
        case 11830: return "mo";    // 鏌
        case 11832: return "luo";    // 鏍
        case 11834: return "bi";    // 鏎
        case 11836: return "wei";    // 鏏
        case 11838: return "liao";    // 鏐
        case 11840: return "di";    // 鏑
        case 11842: return "qiao";    // 鏒
        case 11844: return "zong";    // 鏓
        case 11846: return "yi";    // 鏔
        case 11848: return "ao";    // 鏕
        case 11850: return "keng";    // 鏗
        case 11852: return "qiang";    // 鏘
        case 11854: return "cui";    // 鏙
        case 11856: return "qi";    // 鏚
        case 11858: return "chang";    // 鏛
        case 11860: return "tang";    // 鏜
        case 11862: return "man";    // 鏝
        case 11864: return "yong";    // 鏞
        case 11866: return "chan";    // 鏟
        case 11868: return "feng";    // 鏠
        case 11870: return "jing";    // 鏡
        case 11872: return "biao";    // 鏢
        case 11874: return "shu";    // 鏣
        case 11876: return "lou";    // 鏤
        case 11878: return "xiu";    // 鏥
        case 11880: return "cong";    // 鏦
        case 11882: return "long";    // 鏧
        case 11884: return "zan";    // 鏨
        case 11886: return "jian";    // 鏩
        case 11888: return "cao";    // 鏪
        case 11890: return "li";    // 鏫
        case 11892: return "xia";    // 鏬
        case 11894: return "xi";    // 鏭
        case 11896: return "kang";    // 鏮
        case 11898: return "shuang";    // 鏯
        case 11900: return "beng";    // 鏰
        case 11902: return "zhang";    // 鏱
        case 11904: return "qian";    // 鏲
        case 11906: return "cheng";    // 鏳
        case 11908: return "lu";    // 鏴
        case 11910: return "hua";    // 鏵
        case 11912: return "ji";    // 鏶
        case 11914: return "pu";    // 鏷
        case 11916: return "hui";    // 鏸
        case 11918: return "qiang";    // 鏹
        case 11920: return "po";    // 鏺
        case 11922: return "lin";    // 鏻
        case 11924: return "se";    // 鏼
        case 11926: return "xiu";    // 鏽
        case 11928: return "xian";    // 鏾
        case 11930: return "cheng";    // 鏿
        case 11932: return "kui";    // 鐀
        case 11934: return "si";    // 鐁
        case 11936: return "liu";    // 鐂
        case 11938: return "nao";    // 鐃
        case 11940: return "huang";    // 鐄
        case 11942: return "pie";    // 鐅
        case 11944: return "sui";    // 鐆
        case 11946: return "fan";    // 鐇
        case 11948: return "qiao";    // 鐈
        case 11950: return "quan";    // 鐉
        case 11952: return "yang";    // 鐊
        case 11954: return "tang";    // 鐋
        case 11956: return "xiang";    // 鐌
        case 11958: return "yu";    // 鐍
        case 11960: return "";    // ?
        case 11962: return "jiao";    // 鐎
        case 11964: return "zun";    // 鐏
        case 11966: return "liao";    // 鐐
        case 11968: return "qie";    // 鐑
        case 11970: return "lao";    // 鐒
        case 11972: return "dun";    // 鐓
        case 11974: return "tan";    // 鐔
        case 11976: return "zan";    // 鐕
        case 11978: return "ji";    // 鐖
        case 11980: return "jian";    // 鐗
        case 11982: return "zhong";    // 鐘
        case 11984: return "deng";    // 鐙
        case 11986: return "ya";    // 鐚
        case 11988: return "ying";    // 鐛
        case 11990: return "dui";    // 鐜
        case 11992: return "jue";    // 鐝
        case 11994: return "nou";    // 鐞
        case 11996: return "ti";    // 鐟
        case 11998: return "pu";    // 鐠
        case 12000: return "die";    // 鐡
        case 12002: return "fan";    // 鐢
        case 12004: return "zhang";    // 鐣
        case 12006: return "ding";    // 鐤
        case 12008: return "shan";    // 鐥
        case 12010: return "kai";    // 鐦
        case 12012: return "jian";    // 鐧
        case 12014: return "fei";    // 鐨
        case 12016: return "sui";    // 鐩
        case 12018: return "lu";    // 鐪
        case 12020: return "juan";    // 鐫
        case 12022: return "hui";    // 鐬
        case 12024: return "yu";    // 鐭
        case 12026: return "lian";    // 鐮
        case 12028: return "zhuo";    // 鐯
        case 12030: return "qiao";    // 鐰
        case 12032: return "jian";    // 鐱
        case 12034: return "zhuo";    // 鐲
        case 12036: return "lei";    // 鐳
        case 12038: return "bei";    // 鐴
        case 12040: return "tie";    // 鐵
        case 12042: return "huan";    // 鐶
        case 12044: return "ye";    // 鐷
        case 12046: return "duo";    // 鐸
        case 12048: return "guo";    // 鐹
        case 12050: return "cheng";    // 鐺
        case 12052: return "ju";    // 鐻
        case 12054: return "fen";    // 鐼
        case 12056: return "da";    // 鐽
        case 12058: return "yi";    // 鐿
        case 12060: return "ai";    // 鑀
        case 12062: return "zong";    // 鑁
        case 12064: return "xun";    // 鑂
        case 12066: return "diao";    // 鑃
        case 12068: return "zhu";    // 鑄
        case 12070: return "heng";    // 鑅
        case 12072: return "zhui";    // 鑆
        case 12074: return "ji";    // 鑇
        case 12076: return "ni";    // 鑈
        case 12078: return "he";    // 鑉
        case 12080: return "huo";    // 鑊
        case 12082: return "qing";    // 鑋
        case 12084: return "bin";    // 鑌
        case 12086: return "ying";    // 鑍
        case 12088: return "kui";    // 鑎
        case 12090: return "ning";    // 鑏
        case 12092: return "xu";    // 鑐
        case 12094: return "jian";    // 鑑
        case 12096: return "jian";    // 鑒
        case 12098: return "qian";    // 鑓
        case 12100: return "cha";    // 鑔
        case 12102: return "zhi";    // 鑕
        case 12104: return "mi";    // 鑖
        case 12106: return "li";    // 鑗
        case 12108: return "lei";    // 鑘
        case 12110: return "ji";    // 鑙
        case 12112: return "zuan";    // 鑚
        case 12114: return "kuang";    // 鑛
        case 12116: return "shang";    // 鑜
        case 12118: return "peng";    // 鑝
        case 12120: return "la";    // 鑞
        case 12122: return "du";    // 鑟
        case 12124: return "shuo";    // 鑠
        case 12126: return "chuo";    // 鑡
        case 12128: return "lu";    // 鑢
        case 12130: return "biao";    // 鑣
        case 12132: return "bao";    // 鑤
        case 12134: return "lu";    // 鑥
        case 12136: return "xian";    // 鑦
        case 12138: return "kuan";    // 鑧
        case 12140: return "long";    // 鑨
        case 12142: return "e";    // 鑩
        case 12144: return "lu";    // 鑪
        case 12146: return "jian";    // 鑬
        case 12148: return "lan";    // 鑭
        case 12150: return "bo";    // 鑮
        case 12152: return "jian";    // 鑯
        case 12154: return "";    // ?
        case 12156: return "yao";    // 鑰
        case 12158: return "chan";    // 鑱
        case 12160: return "xiang";    // 鑲
        case 12162: return "jian";    // 鑳
        case 12164: return "xi";    // 鑴
        case 12166: return "guan";    // 鑵
        case 12168: return "cang";    // 鑶
        case 12170: return "nie";    // 鑷
        case 12172: return "lei";    // 鑸
        case 12174: return "cuan";    // 鑹
        case 12176: return "qu";    // 鑺
        case 12178: return "pan";    // 鑻
        case 12180: return "luo";    // 鑼
        case 12182: return "zuan";    // 鑽
        case 12184: return "luan";    // 鑾
        case 12186: return "zao";    // 鑿
        case 12188: return "yi";    // 钀
        case 12190: return "jue";    // 钁
        case 12192: return "tang";    // 钂
        case 12194: return "zhu";    // 钃
        case 12196: return "lan";    // 钄
        case 12198: return "xi";    // 钑
        case 12200: return "yang";    // 钖
        case 12202: return "jian";    // 钘
        case 12204: return "bao";    // 铇
        case 12206: return "xing";    // 铏
        case 12208: return "mang";    // 铓
        case 12210: return "ya";    // 铔
        case 12212: return "zhi";    // 铚
        case 12214: return "tian";    // 铦
        case 12216: return "wu";    // 铻
        case 12218: return "yi";    // 锜
        case 12220: return "chang";    // 锠
        case 12222: return "zhi";    // 锧
        case 12224: return "ying";    // 锳
        case 12226: return "huang";    // 锽
        case 12228: return "zi";    // 镃
        case 12230: return "bo";    // 镈
        case 12232: return "tang";    // 镋
        case 12234: return "rong";    // 镕
        case 12236: return "beng";    // 镚
        case 12238: return "liao";    // 镠
        case 12240: return "huan";    // 镮
        case 12242: return "la";    // 镴
        case 12244: return "chan";    // 镵
        case 12246: return "zhang";    // 長
        case 12248: return "zhang";    // 镸
        case 12250: return "jiu";    // 镹
        case 12252: return "ao";    // 镺
        case 12254: return "die";    // 镻
        case 12256: return "jue";    // 镼
        case 12258: return "liao";    // 镽
        case 12260: return "mi";    // 镾
        case 12262: return "men";    // 門
        case 12264: return "ma";    // 閁
        case 12266: return "shuan";    // 閂
        case 12268: return "shan";    // 閃
        case 12270: return "huo";    // 閄
        case 12272: return "men";    // 閅
        case 12274: return "yan";    // 閆
        case 12276: return "bi";    // 閇
        case 12278: return "bi";    // 閈
        case 12280: return "bi";    // 閉
        case 12282: return "shan";    // 閊
        case 12284: return "kai";    // 開
        case 12286: return "kang";    // 閌
        case 12288: return "beng";    // 閍
        case 12290: return "hong";    // 閎
        case 12292: return "run";    // 閏
        case 12294: return "san";    // 閐
        case 12296: return "xian";    // 閑
        case 12298: return "jian";    // 閒
        case 12300: return "jian";    // 間
        case 12302: return "min";    // 閔
        case 12304: return "xia";    // 閕
        case 12306: return "shui";    // 閖
        case 12308: return "dou";    // 閗
        case 12310: return "zha";    // 閘
        case 12312: return "nao";    // 閙
        case 12314: return "zhan";    // 閚
        case 12316: return "peng";    // 閛
        case 12318: return "e";    // 閜
        case 12320: return "ling";    // 閝
        case 12322: return "bian";    // 閞
        case 12324: return "bi";    // 閟
        case 12326: return "run";    // 閠
        case 12328: return "ai";    // 閡
        case 12330: return "wan";    // 関
        case 12332: return "ge";    // 閣
        case 12334: return "ge";    // 閤
        case 12336: return "fa";    // 閥
        case 12338: return "chu";    // 閦
        case 12340: return "hong";    // 閧
        case 12342: return "gui";    // 閨
        case 12344: return "min";    // 閩
        case 12346: return "seo";    // 閪
        case 12348: return "";    // ?
        case 12350: return "kun";    // 閫
        case 12352: return "lang";    // 閬
        case 12354: return "lu";    // 閭
        case 12356: return "ting";    // 閮
        case 12358: return "sha";    // 閯
        case 12360: return "ju";    // 閰
        case 12362: return "yue";    // 閱
        case 12364: return "yue";    // 閲
        case 12366: return "chan";    // 閳
        case 12368: return "qu";    // 閴
        case 12370: return "lin";    // 閵
        case 12372: return "chang";    // 閶
        case 12374: return "sha";    // 閷
        case 12376: return "kun";    // 閸
        case 12378: return "yan";    // 閹
        case 12380: return "wen";    // 閺
        case 12382: return "yan";    // 閻
        case 12384: return "yu";    // 閼
        case 12386: return "hun";    // 閽
        case 12388: return "yu";    // 閾
        case 12390: return "wen";    // 閿
        case 12392: return "hong";    // 闀
        case 12394: return "bao";    // 闁
        case 12396: return "hong";    // 闂
        case 12398: return "qu";    // 闃
        case 12400: return "yao";    // 闄
        case 12402: return "wen";    // 闅
        case 12404: return "pan";    // 闆
        case 12406: return "an";    // 闇
        case 12408: return "wei";    // 闈
        case 12410: return "yin";    // 闉
        case 12412: return "kuo";    // 闊
        case 12414: return "que";    // 闋
        case 12416: return "lan";    // 闌
        case 12418: return "du";    // 闍
        case 12420: return "quan";    // 闎
        case 12422: return "pai";    // 闏
        case 12424: return "tian";    // 闐
        case 12426: return "nie";    // 闑
        case 12428: return "ta";    // 闒
        case 12430: return "kai";    // 闓
        case 12432: return "he";    // 闔
        case 12434: return "que";    // 闕
        case 12436: return "chuang";    // 闖
        case 12438: return "wan";    // 闗
        case 12440: return "dou";    // 闘
        case 12442: return "qi";    // 闙
        case 12444: return "kui";    // 闚
        case 12446: return "tang";    // 闛
        case 12448: return "guan";    // 關
        case 12450: return "piao";    // 闝
        case 12452: return "kan";    // 闞
        case 12454: return "xi";    // 闟
        case 12456: return "hui";    // 闠
        case 12458: return "chan";    // 闡
        case 12460: return "pi";    // 闢
        case 12462: return "dang";    // 闣
        case 12464: return "huan";    // 闤
        case 12466: return "ta";    // 闥
        case 12468: return "wen";    // 闦
        case 12470: return "meng";    // 闧
        case 12472: return "bi";    // 闬
        case 12474: return "kai";    // 闿
        case 12476: return "du";    // 阇
        case 12478: return "hui";    // 阓
        case 12480: return "ta";    // 阘
        case 12482: return "huan";    // 阛
        case 12484: return "le";    // 阞
        case 12486: return "xin";    // 阠
        case 12488: return "yi";    // 阣
        case 12490: return "yi";    // 阤
        case 12492: return "yin";    // 阥
        case 12494: return "yang";    // 阦
        case 12496: return "dou";    // 阧
        case 12498: return "e";    // 阨
        case 12500: return "sheng";    // 阩
        case 12502: return "pei";    // 阫
        case 12504: return "gang";    // 阬
        case 12506: return "yan";    // 阭
        case 12508: return "zhi";    // 阯
        case 12510: return "pi";    // 阰
        case 12512: return "cheng";    // 阷
        case 12514: return "e";    // 阸
        case 12516: return "qu";    // 阹
        case 12518: return "di";    // 阺
        case 12520: return "ling";    // 阾
        case 12522: return "tuo";    // 陁
        case 12524: return "bing";    // 陃
        case 12526: return "duo";    // 陊
        case 12528: return "shu";    // 陎
        case 12530: return "duo";    // 陏
        case 12532: return "er";    // 陑
        case 12534: return "gui";    // 陒
        case 12536: return "yu";    // 陓
        case 12538: return "jun";    // 陖
        case 12540: return "qiao";    // 陗
        case 12542: return "";    // ?
        case 12544: return "jing";    // 陘
        case 12546: return "chun";    // 陙
        case 12548: return "wu";    // 陚
        case 12550: return "xia";    // 陜
        case 12552: return "shan";    // 陝
        case 12554: return "sheng";    // 陞
        case 12556: return "bu";    // 陠
        case 12558: return "zhen";    // 陣
        case 12560: return "xian";    // 陥
        case 12562: return "dao";    // 陦
        case 12564: return "pei";    // 陫
        case 12566: return "yi";    // 陭
        case 12568: return "dui";    // 陮
        case 12570: return "lun";    // 陯
        case 12572: return "yin";    // 陰
        case 12574: return "ju";    // 陱
        case 12576: return "chen";    // 陳
        case 12578: return "lu";    // 陸
        case 12580: return "sheng";    // 陹
        case 12582: return "xian";    // 険
        case 12584: return "yin";    // 陻
        case 12586: return "du";    // 陼
        case 12588: return "yang";    // 陽
        case 12590: return "er";    // 陾
        case 12592: return "xia";    // 陿
        case 12594: return "chong";    // 隀
        case 12596: return "yan";    // 隁
        case 12598: return "yin";    // 隂
        case 12600: return "yu";    // 隃
        case 12602: return "di";    // 隄
        case 12604: return "wei";    // 隇
        case 12606: return "nie";    // 隉
        case 12608: return "dui";    // 隊
        case 12610: return "an";    // 隌
        case 12612: return "jie";    // 階
        case 12614: return "ai";    // 隑
        case 12616: return "yan";    // 隒
        case 12618: return "duo";    // 隓
        case 12620: return "yun";    // 隕
        case 12622: return "wu";    // 隖
        case 12624: return "tang";    // 隚
        case 12626: return "ji";    // 際
        case 12628: return "dao";    // 隝
        case 12630: return "ao";    // 隞
        case 12632: return "xi";    // 隟
        case 12634: return "yin";    // 隠
        case 12636: return "sa";    // 隡
        case 12638: return "rao";    // 隢
        case 12640: return "lin";    // 隣
        case 12642: return "tui";    // 隤
        case 12644: return "deng";    // 隥
        case 12646: return "pi";    // 隦
        case 12648: return "sui";    // 隨
        case 12650: return "yu";    // 隩
        case 12652: return "xian";    // 險
        case 12654: return "fen";    // 隫
        case 12656: return "ni";    // 隬
        case 12658: return "er";    // 隭
        case 12660: return "ji";    // 隮
        case 12662: return "dao";    // 隯
        case 12664: return "yin";    // 隱
        case 12666: return "zhi";    // 隲
        case 12668: return "long";    // 隴
        case 12670: return "xi";    // 隵
        case 12672: return "li";    // 隷
        case 12674: return "li";    // 隸
        case 12676: return "he";    // 隺
        case 12678: return "zhi";    // 隻
        case 12680: return "yi";    // 隿
        case 12682: return "qin";    // 雂
        case 12684: return "jie";    // 雃
        case 12686: return "huan";    // 雈
        case 12688: return "gou";    // 雊
        case 12690: return "jun";    // 雋
        case 12692: return "hu";    // 雐
        case 12694: return "za";    // 雑
        case 12696: return "yu";    // 雓
        case 12698: return "chou";    // 雔
        case 12700: return "sui";    // 雖
        case 12702: return "han";    // 雗
        case 12704: return "wo";    // 雘
        case 12706: return "shuang";    // 雙
        case 12708: return "guan";    // 雚
        case 12710: return "chu";    // 雛
        case 12712: return "za";    // 雜
        case 12714: return "yong";    // 雝
        case 12716: return "ji";    // 雞
        case 12718: return "gui";    // 雟
        case 12720: return "liu";    // 雡
        case 12722: return "li";    // 離
        case 12724: return "nan";    // 難
        case 12726: return "xue";    // 雤
        case 12728: return "za";    // 雥
        case 12730: return "ji";    // 雦
        case 12732: return "ji";    // 雧
        case 12734: return "na";    // 雫
        case 12736: return "";    // ?
        case 12738: return "fou";    // 雬
        case 12740: return "xi";    // 雭
        case 12742: return "mu";    // 雮
        case 12744: return "fen";    // 雰
        case 12746: return "pang";    // 雱
        case 12748: return "yun";    // 雲
        case 12750: return "chi";    // 雴
        case 12752: return "yang";    // 雵
        case 12754: return "an";    // 雸
        case 12756: return "wu";    // 雺
        case 12758: return "dian";    // 電
        case 12760: return "dang";    // 雼
        case 12762: return "hu";    // 雽
        case 12764: return "diao";    // 雿
        case 12766: return "mu";    // 霂
        case 12768: return "chen";    // 霃
        case 12770: return "zha";    // 霅
        case 12772: return "ling";    // 霊
        case 12774: return "qi";    // 霋
        case 12776: return "zhou";    // 霌
        case 12778: return "hong";    // 霐
        case 12780: return "zhan";    // 霑
        case 12782: return "yin";    // 霒
        case 12784: return "zhu";    // 霔
        case 12786: return "tun";    // 霕
        case 12788: return "ling";    // 霗
        case 12790: return "dong";    // 霘
        case 12792: return "yang";    // 霙
        case 12794: return "wu";    // 霚
        case 12796: return "ling";    // 霛
        case 12798: return "ling";    // 霝
        case 12800: return "hong";    // 霟
        case 12802: return "yin";    // 霠
        case 12804: return "mai";    // 霡
        case 12806: return "mai";    // 霢
        case 12808: return "yun";    // 霣
        case 12810: return "liu";    // 霤
        case 12812: return "meng";    // 霥
        case 12814: return "bin";    // 霦
        case 12816: return "wu";    // 霧
        case 12818: return "wei";    // 霨
        case 12820: return "kuo";    // 霩
        case 12822: return "xi";    // 霫
        case 12824: return "yi";    // 霬
        case 12826: return "dan";    // 霮
        case 12828: return "teng";    // 霯
        case 12830: return "yu";    // 霱
        case 12832: return "long";    // 霳
        case 12834: return "dai";    // 霴
        case 12836: return "ji";    // 霵
        case 12838: return "pang";    // 霶
        case 12840: return "yang";    // 霷
        case 12842: return "wei";    // 霺
        case 12844: return "feng";    // 霻
        case 12846: return "xi";    // 霼
        case 12848: return "ji";    // 霽
        case 12850: return "mao";    // 霿
        case 12852: return "meng";    // 靀
        case 12854: return "lei";    // 靁
        case 12856: return "li";    // 靂
        case 12858: return "huo";    // 靃
        case 12860: return "ai";    // 靄
        case 12862: return "fei";    // 靅
        case 12864: return "dai";    // 靆
        case 12866: return "ling";    // 靇
        case 12868: return "ling";    // 靈
        case 12870: return "ai";    // 靉
        case 12872: return "feng";    // 靊
        case 12874: return "li";    // 靋
        case 12876: return "bao";    // 靌
        case 12878: return "he";    // 靍
        case 12880: return "he";    // 靎
        case 12882: return "he";    // 靏
        case 12884: return "bing";    // 靐
        case 12886: return "jing";    // 靑
        case 12888: return "tian";    // 靔
        case 12890: return "zhen";    // 靕
        case 12892: return "cheng";    // 靗
        case 12894: return "qing";    // 靘
        case 12896: return "liang";    // 靚
        case 12898: return "jing";    // 靜
        case 12900: return "tian";    // 靝
        case 12902: return "fei";    // 靟
        case 12904: return "mian";    // 靣
        case 12906: return "bao";    // 靤
        case 12908: return "mian";    // 靦
        case 12910: return "hui";    // 靧
        case 12912: return "ye";    // 靨
        case 12914: return "ding";    // 靪
        case 12916: return "cha";    // 靫
        case 12918: return "jian";    // 靬
        case 12920: return "ren";    // 靭
        case 12922: return "di";    // 靮
        case 12924: return "du";    // 靯
        case 12926: return "wu";    // 靰
        case 12928: return "ren";    // 靱
        case 12930: return "";    // ?
        case 12932: return "qin";    // 靲
        case 12934: return "niu";    // 靵
        case 12936: return "yin";    // 靷
        case 12938: return "sa";    // 靸
        case 12940: return "na";    // 靹
        case 12942: return "wa";    // 靺
        case 12944: return "zu";    // 靻
        case 12946: return "ban";    // 靽
        case 12948: return "yi";    // 靾
        case 12950: return "yao";    // 靿
        case 12952: return "tao";    // 鞀
        case 12954: return "bai";    // 鞁
        case 12956: return "jie";    // 鞂
        case 12958: return "hong";    // 鞃
        case 12960: return "pao";    // 鞄
        case 12962: return "bing";    // 鞆
        case 12964: return "yin";    // 鞇
        case 12966: return "ge";    // 鞈
        case 12968: return "tao";    // 鞉
        case 12970: return "ji";    // 鞊
        case 12972: return "an";    // 鞌
        case 12974: return "hen";    // 鞎
        case 12976: return "gong";    // 鞏
        case 12978: return "qia";    // 鞐
        case 12980: return "ting";    // 鞓
        case 12982: return "ying";    // 鞕
        case 12984: return "sui";    // 鞖
        case 12986: return "tiao";    // 鞗
        case 12988: return "juan";    // 鞙
        case 12990: return "kong";    // 鞚
        case 12992: return "beng";    // 鞛
        case 12994: return "ta";    // 鞜
        case 12996: return "zhang";    // 鞝
        case 12998: return "bi";    // 鞞
        case 13000: return "kuo";    // 鞟
        case 13002: return "la";    // 鞡
        case 13004: return "xie";    // 鞢
        case 13006: return "bang";    // 鞤
        case 13008: return "eng";    // 鞥
        case 13010: return "qiu";    // 鞦
        case 13012: return "qiu";    // 鞧
        case 13014: return "he";    // 鞨
        case 13016: return "qiao";    // 鞩
        case 13018: return "mou";    // 鞪
        case 13020: return "jian";    // 鞬
        case 13022: return "di";    // 鞮
        case 13024: return "on";    // 鞰
        case 13026: return "tao";    // 鞱
        case 13028: return "ta";    // 鞳
        case 13030: return "xie";    // 鞵
        case 13032: return "pan";    // 鞶
        case 13034: return "ge";    // 鞷
        case 13036: return "bi";    // 鞸
        case 13038: return "kuo";    // 鞹
        case 13040: return "tang";    // 鞺
        case 13042: return "lou";    // 鞻
        case 13044: return "gui";    // 鞼
        case 13046: return "qiao";    // 鞽
        case 13048: return "xue";    // 鞾
        case 13050: return "ji";    // 鞿
        case 13052: return "jian";    // 韀
        case 13054: return "jiang";    // 韁
        case 13056: return "chan";    // 韂
        case 13058: return "da";    // 韃
        case 13060: return "hu";    // 韄
        case 13062: return "xian";    // 韅
        case 13064: return "qian";    // 韆
        case 13066: return "du";    // 韇
        case 13068: return "wa";    // 韈
        case 13070: return "jian";    // 韉
        case 13072: return "lan";    // 韊
        case 13074: return "wei";    // 韋
        case 13076: return "ren";    // 韌
        case 13078: return "fu";    // 韍
        case 13080: return "wa";    // 韎
        case 13082: return "juan";    // 韏
        case 13084: return "ge";    // 韐
        case 13086: return "wei";    // 韑
        case 13088: return "qiao";    // 韒
        case 13090: return "han";    // 韓
        case 13092: return "chang";    // 韔
        case 13094: return "kuo";    // 韕
        case 13096: return "rou";    // 韖
        case 13098: return "yun";    // 韗
        case 13100: return "she";    // 韘
        case 13102: return "wei";    // 韙
        case 13104: return "ge";    // 韚
        case 13106: return "bai";    // 韛
        case 13108: return "tao";    // 韜
        case 13110: return "bei";    // 韝
        case 13112: return "yun";    // 韞
        case 13114: return "gao";    // 韟
        case 13116: return "bi";    // 韠
        case 13118: return "wei";    // 韡
        case 13120: return "hui";    // 韢
        case 13122: return "du";    // 韣
        case 13124: return "";    // ?
        case 13126: return "wa";    // 韤
        case 13128: return "du";    // 韥
        case 13130: return "fu";    // 韨
        case 13132: return "jiu";    // 韮
        case 13134: return "xian";    // 韯
        case 13136: return "xie";    // 韰
        case 13138: return "xian";    // 韱
        case 13140: return "ji";    // 韲
        case 13142: return "za";    // 韴
        case 13144: return "le";    // 韷
        case 13146: return "peng";    // 韸
        case 13148: return "ying";    // 韹
        case 13150: return "ying";    // 韺
        case 13152: return "yun";    // 韻
        case 13154: return "peng";    // 韼
        case 13156: return "an";    // 韽
        case 13158: return "yin";    // 韾
        case 13160: return "xiang";    // 響
        case 13162: return "hu";    // 頀
        case 13164: return "ye";    // 頁
        case 13166: return "ding";    // 頂
        case 13168: return "qing";    // 頃
        case 13170: return "kui";    // 頄
        case 13172: return "xiang";    // 項
        case 13174: return "shun";    // 順
        case 13176: return "an";    // 頇
        case 13178: return "xu";    // 須
        case 13180: return "yi";    // 頉
        case 13182: return "xu";    // 頊
        case 13184: return "gu";    // 頋
        case 13186: return "song";    // 頌
        case 13188: return "kui";    // 頍
        case 13190: return "ken";    // 頎
        case 13192: return "gang";    // 頏
        case 13194: return "yu";    // 預
        case 13196: return "wan";    // 頑
        case 13198: return "ban";    // 頒
        case 13200: return "dun";    // 頓
        case 13202: return "di";    // 頔
        case 13204: return "dan";    // 頕
        case 13206: return "pan";    // 頖
        case 13208: return "po";    // 頗
        case 13210: return "ling";    // 領
        case 13212: return "che";    // 頙
        case 13214: return "jing";    // 頚
        case 13216: return "lei";    // 頛
        case 13218: return "he";    // 頜
        case 13220: return "qiao";    // 頝
        case 13222: return "e";    // 頞
        case 13224: return "e";    // 頟
        case 13226: return "wei";    // 頠
        case 13228: return "jie";    // 頡
        case 13230: return "kuo";    // 頢
        case 13232: return "shen";    // 頣
        case 13234: return "yi";    // 頤
        case 13236: return "yi";    // 頥
        case 13238: return "ke";    // 頦
        case 13240: return "dui";    // 頧
        case 13242: return "yu";    // 頨
        case 13244: return "ping";    // 頩
        case 13246: return "lei";    // 頪
        case 13248: return "tiao";    // 頫
        case 13250: return "jia";    // 頬
        case 13252: return "tou";    // 頭
        case 13254: return "pou";    // 頮
        case 13256: return "kui";    // 頯
        case 13258: return "jia";    // 頰
        case 13260: return "luo";    // 頱
        case 13262: return "ting";    // 頲
        case 13264: return "cheng";    // 頳
        case 13266: return "ying";    // 頴
        case 13268: return "yun";    // 頵
        case 13270: return "hu";    // 頶
        case 13272: return "han";    // 頷
        case 13274: return "jing";    // 頸
        case 13276: return "tui";    // 頹
        case 13278: return "tui";    // 頺
        case 13280: return "pin";    // 頻
        case 13282: return "lai";    // 頼
        case 13284: return "tui";    // 頽
        case 13286: return "zi";    // 頾
        case 13288: return "zi";    // 頿
        case 13290: return "chui";    // 顀
        case 13292: return "ding";    // 顁
        case 13294: return "lai";    // 顂
        case 13296: return "tan";    // 顃
        case 13298: return "han";    // 顄
        case 13300: return "qian";    // 顅
        case 13302: return "ke";    // 顆
        case 13304: return "zu";    // 顇
        case 13306: return "jiong";    // 顈
        case 13308: return "qin";    // 顉
        case 13310: return "yi";    // 顊
        case 13312: return "sai";    // 顋
        case 13314: return "ti";    // 題
        case 13316: return "e";    // 額
        case 13318: return "";    // ?
        case 13320: return "e";    // 顎
        case 13322: return "yan";    // 顏
        case 13324: return "wen";    // 顐
        case 13326: return "yan";    // 顑
        case 13328: return "yu";    // 顒
        case 13330: return "zhuan";    // 顓
        case 13332: return "ya";    // 顔
        case 13334: return "xian";    // 顕
        case 13336: return "pi";    // 顖
        case 13338: return "yi";    // 顗
        case 13340: return "yuan";    // 願
        case 13342: return "sang";    // 顙
        case 13344: return "dian";    // 顚
        case 13346: return "dian";    // 顛
        case 13348: return "jiang";    // 顜
        case 13350: return "kua";    // 顝
        case 13352: return "lei";    // 類
        case 13354: return "lao";    // 顟
        case 13356: return "piao";    // 顠
        case 13358: return "wai";    // 顡
        case 13360: return "man";    // 顢
        case 13362: return "cu";    // 顣
        case 13364: return "yao";    // 顤
        case 13366: return "hao";    // 顥
        case 13368: return "qiao";    // 顦
        case 13370: return "gu";    // 顧
        case 13372: return "xun";    // 顨
        case 13374: return "yan";    // 顩
        case 13376: return "hui";    // 顪
        case 13378: return "chan";    // 顫
        case 13380: return "ru";    // 顬
        case 13382: return "meng";    // 顭
        case 13384: return "bin";    // 顮
        case 13386: return "xian";    // 顯
        case 13388: return "pin";    // 顰
        case 13390: return "lu";    // 顱
        case 13392: return "lan";    // 顲
        case 13394: return "nie";    // 顳
        case 13396: return "quan";    // 顴
        case 13398: return "ting";    // 颋
        case 13400: return "jiong";    // 颎
        case 13402: return "pou";    // 颒
        case 13404: return "ying";    // 颕
        case 13406: return "yu";    // 颙
        case 13408: return "lei";    // 颣
        case 13410: return "feng";    // 風
        case 13412: return "diao";    // 颩
        case 13414: return "gua";    // 颪
        case 13416: return "fu";    // 颫
        case 13418: return "xia";    // 颬
        case 13420: return "zhan";    // 颭
        case 13422: return "pao";    // 颮
        case 13424: return "sa";    // 颯
        case 13426: return "ba";    // 颰
        case 13428: return "tai";    // 颱
        case 13430: return "lie";    // 颲
        case 13432: return "ji";    // 颳
        case 13434: return "xuan";    // 颴
        case 13436: return "xiao";    // 颵
        case 13438: return "ju";    // 颶
        case 13440: return "biao";    // 颷
        case 13442: return "si";    // 颸
        case 13444: return "wei";    // 颹
        case 13446: return "yang";    // 颺
        case 13448: return "yao";    // 颻
        case 13450: return "sou";    // 颼
        case 13452: return "kai";    // 颽
        case 13454: return "sao";    // 颾
        case 13456: return "fan";    // 颿
        case 13458: return "liu";    // 飀
        case 13460: return "xi";    // 飁
        case 13462: return "liu";    // 飂
        case 13464: return "piao";    // 飃
        case 13466: return "piao";    // 飄
        case 13468: return "liu";    // 飅
        case 13470: return "biao";    // 飆
        case 13472: return "biao";    // 飇
        case 13474: return "biao";    // 飈
        case 13476: return "liao";    // 飉
        case 13478: return "biao";    // 飊
        case 13480: return "se";    // 飋
        case 13482: return "feng";    // 飌
        case 13484: return "xiu";    // 飍
        case 13486: return "yang";    // 飏
        case 13488: return "zhan";    // 飐
        case 13490: return "si";    // 飔
        case 13492: return "yao";    // 飖
        case 13494: return "liu";    // 飗
        case 13496: return "fei";    // 飛
        case 13498: return "fan";    // 飜
        case 13500: return "fei";    // 飝
        case 13502: return "shi";    // 飠
        case 13504: return "can";    // 飡
        case 13506: return "ji";    // 飢
        case 13508: return "ding";    // 飣
        case 13510: return "si";    // 飤
        case 13512: return "";    // ?
        case 13514: return "tuo";    // 飥
        case 13516: return "gan";    // 飦
        case 13518: return "tun";    // 飩
        case 13520: return "ren";    // 飪
        case 13522: return "yu";    // 飫
        case 13524: return "yang";    // 飬
        case 13526: return "chi";    // 飭
        case 13528: return "yin";    // 飮
        case 13530: return "fan";    // 飯
        case 13532: return "fan";    // 飰
        case 13534: return "can";    // 飱
        case 13536: return "yin";    // 飲
        case 13538: return "zhu";    // 飳
        case 13540: return "yi";    // 飴
        case 13542: return "zuo";    // 飵
        case 13544: return "bi";    // 飶
        case 13546: return "jie";    // 飷
        case 13548: return "tao";    // 飸
        case 13550: return "bao";    // 飹
        case 13552: return "ci";    // 飺
        case 13554: return "tie";    // 飻
        case 13556: return "si";    // 飼
        case 13558: return "bao";    // 飽
        case 13560: return "shi";    // 飾
        case 13562: return "duo";    // 飿
        case 13564: return "hai";    // 餀
        case 13566: return "ren";    // 餁
        case 13568: return "tian";    // 餂
        case 13570: return "jiao";    // 餃
        case 13572: return "he";    // 餄
        case 13574: return "bing";    // 餅
        case 13576: return "yao";    // 餆
        case 13578: return "tong";    // 餇
        case 13580: return "ci";    // 餈
        case 13582: return "xiang";    // 餉
        case 13584: return "yang";    // 養
        case 13586: return "juan";    // 餋
        case 13588: return "er";    // 餌
        case 13590: return "le";    // 餎
        case 13592: return "xi";    // 餏
        case 13594: return "bo";    // 餑
        case 13596: return "nei";    // 餒
        case 13598: return "e";    // 餓
        case 13600: return "bu";    // 餔
        case 13602: return "jun";    // 餕
        case 13604: return "dou";    // 餖
        case 13606: return "su";    // 餗
        case 13608: return "yu";    // 餘
        case 13610: return "xi";    // 餙
        case 13612: return "yao";    // 餚
        case 13614: return "hun";    // 餛
        case 13616: return "guo";    // 餜
        case 13618: return "chi";    // 餝
        case 13620: return "jian";    // 餞
        case 13622: return "zhui";    // 餟
        case 13624: return "bing";    // 餠
        case 13626: return "xian";    // 餡
        case 13628: return "bu";    // 餢
        case 13630: return "ye";    // 餣
        case 13632: return "dan";    // 餤
        case 13634: return "fei";    // 餥
        case 13636: return "zhang";    // 餦
        case 13638: return "wei";    // 餧
        case 13640: return "guan";    // 館
        case 13642: return "e";    // 餩
        case 13644: return "nuan";    // 餪
        case 13646: return "yun";    // 餫
        case 13648: return "hu";    // 餬
        case 13650: return "huang";    // 餭
        case 13652: return "hui";    // 餯
        case 13654: return "jian";    // 餰
        case 13656: return "hou";    // 餱
        case 13658: return "ai";    // 餲
        case 13660: return "tang";    // 餳
        case 13662: return "fen";    // 餴
        case 13664: return "wei";    // 餵
        case 13666: return "gu";    // 餶
        case 13668: return "zha";    // 餷
        case 13670: return "song";    // 餸
        case 13672: return "tang";    // 餹
        case 13674: return "bo";    // 餺
        case 13676: return "gao";    // 餻
        case 13678: return "xi";    // 餼
        case 13680: return "kui";    // 餽
        case 13682: return "liu";    // 餾
        case 13684: return "sou";    // 餿
        case 13686: return "tao";    // 饀
        case 13688: return "ye";    // 饁
        case 13690: return "wen";    // 饂
        case 13692: return "mo";    // 饃
        case 13694: return "tang";    // 饄
        case 13696: return "man";    // 饅
        case 13698: return "bi";    // 饆
        case 13700: return "yu";    // 饇
        case 13702: return "xiu";    // 饈
        case 13704: return "jin";    // 饉
        case 13706: return "";    // ?
        case 13708: return "san";    // 饊
        case 13710: return "kui";    // 饋
        case 13712: return "zhuan";    // 饌
        case 13714: return "shan";    // 饍
        case 13716: return "chi";    // 饎
        case 13718: return "dan";    // 饏
        case 13720: return "yi";    // 饐
        case 13722: return "qi";    // 饑
        case 13724: return "rao";    // 饒
        case 13726: return "cheng";    // 饓
        case 13728: return "wei";    // 饖
        case 13730: return "xiang";    // 饗
        case 13732: return "zhan";    // 饘
        case 13734: return "fen";    // 饙
        case 13736: return "hai";    // 饚
        case 13738: return "meng";    // 饛
        case 13740: return "yan";    // 饜
        case 13742: return "mo";    // 饝
        case 13744: return "chan";    // 饞
        case 13746: return "xiang";    // 饟
        case 13748: return "luo";    // 饠
        case 13750: return "zan";    // 饡
        case 13752: return "nang";    // 饢
        case 13754: return "ding";    // 饤
        case 13756: return "tuo";    // 饦
        case 13758: return "duo";    // 饳
        case 13760: return "he";    // 饸
        case 13762: return "le";    // 饹
        case 13764: return "xi";    // 饻
        case 13766: return "dou";    // 饾
        case 13768: return "jun";    // 馂
        case 13770: return "guo";    // 馃
        case 13772: return "gu";    // 馉
        case 13774: return "ye";    // 馌
        case 13776: return "bo";    // 馎
        case 13778: return "fen";    // 馚
        case 13780: return "bo";    // 馛
        case 13782: return "ni";    // 馜
        case 13784: return "bi";    // 馝
        case 13786: return "bo";    // 馞
        case 13788: return "tu";    // 馟
        case 13790: return "han";    // 馠
        case 13792: return "fei";    // 馡
        case 13794: return "jian";    // 馢
        case 13796: return "an";    // 馣
        case 13798: return "ai";    // 馤
        case 13800: return "xian";    // 馦
        case 13802: return "wo";    // 馧
        case 13804: return "fen";    // 馩
        case 13806: return "pin";    // 馪
        case 13808: return "xin";    // 馫
        case 13810: return "ma";    // 馬
        case 13812: return "yu";    // 馭
        case 13814: return "feng";    // 馮
        case 13816: return "han";    // 馯
        case 13818: return "di";    // 馰
        case 13820: return "tuo";    // 馱
        case 13822: return "tuo";    // 馲
        case 13824: return "chi";    // 馳
        case 13826: return "xun";    // 馴
        case 13828: return "zhu";    // 馵
        case 13830: return "zhi";    // 馶
        case 13832: return "pei";    // 馷
        case 13834: return "jin";    // 馸
        case 13836: return "ri";    // 馹
        case 13838: return "sa";    // 馺
        case 13840: return "yun";    // 馻
        case 13842: return "wen";    // 馼
        case 13844: return "zhi";    // 馽
        case 13846: return "dan";    // 馾
        case 13848: return "lu";    // 馿
        case 13850: return "you";    // 駀
        case 13852: return "bo";    // 駁
        case 13854: return "bao";    // 駂
        case 13856: return "kuai";    // 駃
        case 13858: return "duo";    // 駄
        case 13860: return "yi";    // 駅
        case 13862: return "qu";    // 駆
        case 13864: return "pu";    // 駇
        case 13866: return "qu";    // 駈
        case 13868: return "jiong";    // 駉
        case 13870: return "po";    // 駊
        case 13872: return "zhao";    // 駋
        case 13874: return "yuan";    // 駌
        case 13876: return "pei";    // 駍
        case 13878: return "zhou";    // 駎
        case 13880: return "ju";    // 駏
        case 13882: return "zhu";    // 駐
        case 13884: return "nu";    // 駑
        case 13886: return "ju";    // 駒
        case 13888: return "pi";    // 駓
        case 13890: return "zang";    // 駔
        case 13892: return "jia";    // 駕
        case 13894: return "ling";    // 駖
        case 13896: return "zhen";    // 駗
        case 13898: return "tai";    // 駘
        case 13900: return "";    // ?
        case 13902: return "fu";    // 駙
        case 13904: return "yang";    // 駚
        case 13906: return "shi";    // 駛
        case 13908: return "bi";    // 駜
        case 13910: return "tuo";    // 駝
        case 13912: return "tuo";    // 駞
        case 13914: return "si";    // 駟
        case 13916: return "liu";    // 駠
        case 13918: return "ma";    // 駡
        case 13920: return "pian";    // 駢
        case 13922: return "tao";    // 駣
        case 13924: return "zhi";    // 駤
        case 13926: return "rong";    // 駥
        case 13928: return "teng";    // 駦
        case 13930: return "dong";    // 駧
        case 13932: return "xuan";    // 駨
        case 13934: return "quan";    // 駩
        case 13936: return "shen";    // 駪
        case 13938: return "jiong";    // 駫
        case 13940: return "er";    // 駬
        case 13942: return "hai";    // 駭
        case 13944: return "bo";    // 駮
        case 13946: return "zhu";    // 駯
        case 13948: return "yin";    // 駰
        case 13950: return "luo";    // 駱
        case 13952: return "zhou";    // 駲
        case 13954: return "dan";    // 駳
        case 13956: return "hai";    // 駴
        case 13958: return "liu";    // 駵
        case 13960: return "ju";    // 駶
        case 13962: return "song";    // 駷
        case 13964: return "qin";    // 駸
        case 13966: return "mang";    // 駹
        case 13968: return "liang";    // 駺
        case 13970: return "han";    // 駻
        case 13972: return "tu";    // 駼
        case 13974: return "xuan";    // 駽
        case 13976: return "tui";    // 駾
        case 13978: return "jun";    // 駿
        case 13980: return "e";    // 騀
        case 13982: return "cheng";    // 騁
        case 13984: return "xing";    // 騂
        case 13986: return "ai";    // 騃
        case 13988: return "lu";    // 騄
        case 13990: return "zhui";    // 騅
        case 13992: return "dong";    // 騆
        case 13994: return "she";    // 騇
        case 13996: return "pian";    // 騈
        case 13998: return "kun";    // 騉
        case 14000: return "tao";    // 騊
        case 14002: return "lai";    // 騋
        case 14004: return "zong";    // 騌
        case 14006: return "ke";    // 騍
        case 14008: return "qi";    // 騎
        case 14010: return "qi";    // 騏
        case 14012: return "yan";    // 騐
        case 14014: return "fei";    // 騑
        case 14016: return "sao";    // 騒
        case 14018: return "yan";    // 験
        case 14020: return "ge";    // 騔
        case 14022: return "yao";    // 騕
        case 14024: return "wu";    // 騖
        case 14026: return "pian";    // 騗
        case 14028: return "cong";    // 騘
        case 14030: return "pian";    // 騙
        case 14032: return "qian";    // 騚
        case 14034: return "fei";    // 騛
        case 14036: return "huang";    // 騜
        case 14038: return "qian";    // 騝
        case 14040: return "huo";    // 騞
        case 14042: return "yu";    // 騟
        case 14044: return "ti";    // 騠
        case 14046: return "quan";    // 騡
        case 14048: return "xia";    // 騢
        case 14050: return "zong";    // 騣
        case 14052: return "kui";    // 騤
        case 14054: return "rou";    // 騥
        case 14056: return "si";    // 騦
        case 14058: return "gua";    // 騧
        case 14060: return "tuo";    // 騨
        case 14062: return "tui";    // 騩
        case 14064: return "sou";    // 騪
        case 14066: return "qian";    // 騫
        case 14068: return "cheng";    // 騬
        case 14070: return "zhi";    // 騭
        case 14072: return "liu";    // 騮
        case 14074: return "bang";    // 騯
        case 14076: return "teng";    // 騰
        case 14078: return "xi";    // 騱
        case 14080: return "cao";    // 騲
        case 14082: return "du";    // 騳
        case 14084: return "yan";    // 騴
        case 14086: return "yuan";    // 騵
        case 14088: return "zhu";    // 騶
        case 14090: return "sao";    // 騷
        case 14092: return "shan";    // 騸
        case 14094: return "";    // ?
        case 14096: return "qi";    // 騹
        case 14098: return "zhi";    // 騺
        case 14100: return "shuang";    // 騻
        case 14102: return "lu";    // 騼
        case 14104: return "xi";    // 騽
        case 14106: return "luo";    // 騾
        case 14108: return "zhang";    // 騿
        case 14110: return "mo";    // 驀
        case 14112: return "ao";    // 驁
        case 14114: return "can";    // 驂
        case 14116: return "biao";    // 驃
        case 14118: return "cong";    // 驄
        case 14120: return "qu";    // 驅
        case 14122: return "bi";    // 驆
        case 14124: return "zhi";    // 驇
        case 14126: return "yu";    // 驈
        case 14128: return "xu";    // 驉
        case 14130: return "hua";    // 驊
        case 14132: return "bo";    // 驋
        case 14134: return "su";    // 驌
        case 14136: return "xiao";    // 驍
        case 14138: return "lin";    // 驎
        case 14140: return "zhan";    // 驏
        case 14142: return "dun";    // 驐
        case 14144: return "liu";    // 驑
        case 14146: return "tuo";    // 驒
        case 14148: return "ceng";    // 驓
        case 14150: return "dian";    // 驔
        case 14152: return "jiao";    // 驕
        case 14154: return "tie";    // 驖
        case 14156: return "yan";    // 驗
        case 14158: return "luo";    // 驘
        case 14160: return "zhan";    // 驙
        case 14162: return "jing";    // 驚
        case 14164: return "yi";    // 驛
        case 14166: return "ye";    // 驜
        case 14168: return "tuo";    // 驝
        case 14170: return "pin";    // 驞
        case 14172: return "zhou";    // 驟
        case 14174: return "yan";    // 驠
        case 14176: return "long";    // 驡
        case 14178: return "lu";    // 驢
        case 14180: return "teng";    // 驣
        case 14182: return "xiang";    // 驤
        case 14184: return "ji";    // 驥
        case 14186: return "shuang";    // 驦
        case 14188: return "ju";    // 驧
        case 14190: return "xi";    // 驨
        case 14192: return "huan";    // 驩
        case 14194: return "li";    // 驪
        case 14196: return "biao";    // 驫
        case 14198: return "ri";    // 驲
        case 14200: return "yin";    // 骃
        case 14202: return "biao";    // 骉
        case 14204: return "xing";    // 骍
        case 14206: return "qin";    // 骎
        case 14208: return "zong";    // 骔
        case 14210: return "su";    // 骕
        case 14212: return "kui";    // 骙
        case 14214: return "shuang";    // 骦
        case 14216: return "wei";    // 骩
        case 14218: return "wei";    // 骪
        case 14220: return "wei";    // 骫
        case 14222: return "yu";    // 骬
        case 14224: return "gan";    // 骭
        case 14226: return "yi";    // 骮
        case 14228: return "ang";    // 骯
        case 14230: return "bao";    // 骲
        case 14232: return "bei";    // 骳
        case 14234: return "zhai";    // 骴
        case 14236: return "ti";    // 骵
        case 14238: return "jiao";    // 骹
        case 14240: return "kua";    // 骻
        case 14242: return "tui";    // 骽
        case 14244: return "geng";    // 骾
        case 14246: return "pian";    // 骿
        case 14248: return "yu";    // 髃
        case 14250: return "sui";    // 髄
        case 14252: return "bo";    // 髆
        case 14254: return "xiao";    // 髇
        case 14256: return "pang";    // 髈
        case 14258: return "bo";    // 髉
        case 14260: return "ci";    // 髊
        case 14262: return "mo";    // 髍
        case 14264: return "liao";    // 髎
        case 14266: return "lou";    // 髏
        case 14268: return "xiao";    // 髐
        case 14270: return "zang";    // 髒
        case 14272: return "ti";    // 體
        case 14274: return "bin";    // 髕
        case 14276: return "kuan";    // 髖
        case 14278: return "lu";    // 髗
        case 14280: return "gao";    // 髙
        case 14282: return "qiao";    // 髚
        case 14284: return "kao";    // 髛
        case 14286: return "qiao";    // 髜
        case 14288: return "";    // ?
        case 14290: return "lao";    // 髝
        case 14292: return "sao";    // 髞
        case 14294: return "kun";    // 髠
        case 14296: return "di";    // 髢
        case 14298: return "fang";    // 髣
        case 14300: return "xiu";    // 髤
        case 14302: return "ran";    // 髥
        case 14304: return "dan";    // 髧
        case 14306: return "kun";    // 髨
        case 14308: return "bin";    // 髩
        case 14310: return "fa";    // 髪
        case 14312: return "pi";    // 髬
        case 14314: return "fa";    // 髮
        case 14316: return "ti";    // 髰
        case 14318: return "bao";    // 髱
        case 14320: return "bi";    // 髲
        case 14322: return "mao";    // 髳
        case 14324: return "fei";    // 髴
        case 14326: return "er";    // 髵
        case 14328: return "er";    // 髶
        case 14330: return "qu";    // 髷
        case 14332: return "gong";    // 髸
        case 14334: return "yue";    // 髺
        case 14336: return "peng";    // 髼
        case 14338: return "zhua";    // 髽
        case 14340: return "shao";    // 髾
        case 14342: return "suo";    // 髿
        case 14344: return "ti";    // 鬀
        case 14346: return "li";    // 鬁
        case 14348: return "bin";    // 鬂
        case 14350: return "di";    // 鬄
        case 14352: return "peng";    // 鬅
        case 14354: return "song";    // 鬆
        case 14356: return "zheng";    // 鬇
        case 14358: return "zong";    // 鬉
        case 14360: return "shun";    // 鬊
        case 14362: return "jian";    // 鬋
        case 14364: return "duo";    // 鬌
        case 14366: return "hu";    // 鬍
        case 14368: return "la";    // 鬎
        case 14370: return "qi";    // 鬐
        case 14372: return "lian";    // 鬑
        case 14374: return "zhen";    // 鬒
        case 14376: return "peng";    // 鬔
        case 14378: return "ma";    // 鬕
        case 14380: return "san";    // 鬖
        case 14382: return "man";    // 鬗
        case 14384: return "man";    // 鬘
        case 14386: return "seng";    // 鬙
        case 14388: return "xu";    // 鬚
        case 14390: return "lie";    // 鬛
        case 14392: return "qian";    // 鬜
        case 14394: return "qian";    // 鬝
        case 14396: return "nang";    // 鬞
        case 14398: return "kuo";    // 鬠
        case 14400: return "ning";    // 鬡
        case 14402: return "bin";    // 鬢
        case 14404: return "ning";    // 鬤
        case 14406: return "dou";    // 鬥
        case 14408: return "dou";    // 鬦
        case 14410: return "nao";    // 鬧
        case 14412: return "xiang";    // 鬨
        case 14414: return "xi";    // 鬩
        case 14416: return "dou";    // 鬪
        case 14418: return "han";    // 鬫
        case 14420: return "dou";    // 鬬
        case 14422: return "dou";    // 鬭
        case 14424: return "jiu";    // 鬮
        case 14426: return "yu";    // 鬰
        case 14428: return "yu";    // 鬱
        case 14430: return "yan";    // 鬳
        case 14432: return "fu";    // 鬴
        case 14434: return "qin";    // 鬵
        case 14436: return "gui";    // 鬶
        case 14438: return "zeng";    // 鬷
        case 14440: return "liu";    // 鬸
        case 14442: return "gui";    // 鬹
        case 14444: return "shang";    // 鬺
        case 14446: return "mei";    // 鬽
        case 14448: return "ji";    // 鬾
        case 14450: return "qi";    // 鬿
        case 14452: return "ga";    // 魀
        case 14454: return "xu";    // 魆
        case 14456: return "yu";    // 魊
        case 14458: return "tui";    // 魋
        case 14460: return "qi";    // 魌
        case 14462: return "liang";    // 魎
        case 14464: return "gan";    // 魐
        case 14466: return "piao";    // 魒
        case 14468: return "bi";    // 魓
        case 14470: return "qi";    // 魕
        case 14472: return "xu";    // 魖
        case 14474: return "chou";    // 魗
        case 14476: return "yan";    // 魘
        case 14478: return "zhan";    // 魙
        case 14480: return "yu";    // 魚
        case 14482: return "";    // ?
        case 14484: return "dao";    // 魛
        case 14486: return "ren";    // 魜
        case 14488: return "ji";    // 魝
        case 14490: return "ba";    // 魞
        case 14492: return "gong";    // 魟
        case 14494: return "tuo";    // 魠
        case 14496: return "di";    // 魡
        case 14498: return "ji";    // 魢
        case 14500: return "yu";    // 魣
        case 14502: return "e";    // 魤
        case 14504: return "e";    // 魥
        case 14506: return "sha";    // 魦
        case 14508: return "hang";    // 魧
        case 14510: return "tun";    // 魨
        case 14512: return "mo";    // 魩
        case 14514: return "jie";    // 魪
        case 14516: return "shen";    // 魫
        case 14518: return "ban";    // 魬
        case 14520: return "wan";    // 魭
        case 14522: return "bi";    // 魮
        case 14524: return "lu";    // 魯
        case 14526: return "wen";    // 魰
        case 14528: return "hu";    // 魱
        case 14530: return "lu";    // 魲
        case 14532: return "shi";    // 魳
        case 14534: return "fang";    // 魴
        case 14536: return "fen";    // 魵
        case 14538: return "na";    // 魶
        case 14540: return "you";    // 魷
        case 14542: return "pian";    // 魸
        case 14544: return "mo";    // 魹
        case 14546: return "he";    // 魺
        case 14548: return "xia";    // 魻
        case 14550: return "xie";    // 魼
        case 14552: return "han";    // 魽
        case 14554: return "pi";    // 魾
        case 14556: return "lin";    // 魿
        case 14558: return "tuo";    // 鮀
        case 14560: return "ba";    // 鮁
        case 14562: return "qiu";    // 鮂
        case 14564: return "ping";    // 鮃
        case 14566: return "fu";    // 鮄
        case 14568: return "bi";    // 鮅
        case 14570: return "ji";    // 鮆
        case 14572: return "wei";    // 鮇
        case 14574: return "ju";    // 鮈
        case 14576: return "diao";    // 鮉
        case 14578: return "ba";    // 鮊
        case 14580: return "you";    // 鮋
        case 14582: return "gun";    // 鮌
        case 14584: return "pi";    // 鮍
        case 14586: return "nian";    // 鮎
        case 14588: return "xing";    // 鮏
        case 14590: return "tai";    // 鮐
        case 14592: return "bao";    // 鮑
        case 14594: return "fu";    // 鮒
        case 14596: return "zha";    // 鮓
        case 14598: return "ju";    // 鮔
        case 14600: return "gu";    // 鮕
        case 14602: return "shi";    // 鮖
        case 14604: return "dong";    // 鮗
        case 14606: return "dai";    // 鮘
        case 14608: return "die";    // 鮙
        case 14610: return "jie";    // 鮚
        case 14612: return "shu";    // 鮛
        case 14614: return "hou";    // 鮜
        case 14616: return "xiang";    // 鮝
        case 14618: return "er";    // 鮞
        case 14620: return "an";    // 鮟
        case 14622: return "wei";    // 鮠
        case 14624: return "zhao";    // 鮡
        case 14626: return "zhu";    // 鮢
        case 14628: return "yin";    // 鮣
        case 14630: return "lie";    // 鮤
        case 14632: return "luo";    // 鮥
        case 14634: return "tong";    // 鮦
        case 14636: return "yi";    // 鮧
        case 14638: return "yi";    // 鮨
        case 14640: return "bi";    // 鮩
        case 14642: return "wei";    // 鮪
        case 14644: return "jiao";    // 鮫
        case 14646: return "ku";    // 鮬
        case 14648: return "gui";    // 鮭
        case 14650: return "xian";    // 鮮
        case 14652: return "ge";    // 鮯
        case 14654: return "hui";    // 鮰
        case 14656: return "lao";    // 鮱
        case 14658: return "fu";    // 鮲
        case 14660: return "kao";    // 鮳
        case 14662: return "xiu";    // 鮴
        case 14664: return "duo";    // 鮵
        case 14666: return "jun";    // 鮶
        case 14668: return "ti";    // 鮷
        case 14670: return "mian";    // 鮸
        case 14672: return "shao";    // 鮹
        case 14674: return "zha";    // 鮺
        case 14676: return "";    // ?
        case 14678: return "suo";    // 鮻
        case 14680: return "qin";    // 鮼
        case 14682: return "yu";    // 鮽
        case 14684: return "nei";    // 鮾
        case 14686: return "zhe";    // 鮿
        case 14688: return "gun";    // 鯀
        case 14690: return "geng";    // 鯁
        case 14692: return "su";    // 鯂
        case 14694: return "wu";    // 鯃
        case 14696: return "qiu";    // 鯄
        case 14698: return "shan";    // 鯅
        case 14700: return "bu";    // 鯆
        case 14702: return "huan";    // 鯇
        case 14704: return "tiao";    // 鯈
        case 14706: return "li";    // 鯉
        case 14708: return "sha";    // 鯊
        case 14710: return "sha";    // 鯋
        case 14712: return "kao";    // 鯌
        case 14714: return "meng";    // 鯍
        case 14716: return "cheng";    // 鯎
        case 14718: return "li";    // 鯏
        case 14720: return "zou";    // 鯐
        case 14722: return "xi";    // 鯑
        case 14724: return "yong";    // 鯒
        case 14726: return "shen";    // 鯓
        case 14728: return "zi";    // 鯔
        case 14730: return "qi";    // 鯕
        case 14732: return "qing";    // 鯖
        case 14734: return "xiang";    // 鯗
        case 14736: return "nei";    // 鯘
        case 14738: return "chun";    // 鯙
        case 14740: return "ji";    // 鯚
        case 14742: return "diao";    // 鯛
        case 14744: return "qie";    // 鯜
        case 14746: return "gu";    // 鯝
        case 14748: return "zhou";    // 鯞
        case 14750: return "dong";    // 鯟
        case 14752: return "lai";    // 鯠
        case 14754: return "fei";    // 鯡
        case 14756: return "ni";    // 鯢
        case 14758: return "yi";    // 鯣
        case 14760: return "kun";    // 鯤
        case 14762: return "lu";    // 鯥
        case 14764: return "ai";    // 鯦
        case 14766: return "chang";    // 鯧
        case 14768: return "jing";    // 鯨
        case 14770: return "lun";    // 鯩
        case 14772: return "ling";    // 鯪
        case 14774: return "zou";    // 鯫
        case 14776: return "li";    // 鯬
        case 14778: return "meng";    // 鯭
        case 14780: return "zong";    // 鯮
        case 14782: return "ji";    // 鯯
        case 14784: return "nian";    // 鯰
        case 14786: return "hu";    // 鯱
        case 14788: return "yu";    // 鯲
        case 14790: return "di";    // 鯳
        case 14792: return "shi";    // 鯴
        case 14794: return "shen";    // 鯵
        case 14796: return "huan";    // 鯶
        case 14798: return "ti";    // 鯷
        case 14800: return "hou";    // 鯸
        case 14802: return "xing";    // 鯹
        case 14804: return "zhu";    // 鯺
        case 14806: return "la";    // 鯻
        case 14808: return "zong";    // 鯼
        case 14810: return "ji";    // 鯽
        case 14812: return "bian";    // 鯾
        case 14814: return "bian";    // 鯿
        case 14816: return "huan";    // 鰀
        case 14818: return "quan";    // 鰁
        case 14820: return "zei";    // 鰂
        case 14822: return "wei";    // 鰃
        case 14824: return "wei";    // 鰄
        case 14826: return "yu";    // 鰅
        case 14828: return "chun";    // 鰆
        case 14830: return "rou";    // 鰇
        case 14832: return "die";    // 鰈
        case 14834: return "huang";    // 鰉
        case 14836: return "lian";    // 鰊
        case 14838: return "yan";    // 鰋
        case 14840: return "qiu";    // 鰌
        case 14842: return "qiu";    // 鰍
        case 14844: return "jian";    // 鰎
        case 14846: return "bi";    // 鰏
        case 14848: return "e";    // 鰐
        case 14850: return "yang";    // 鰑
        case 14852: return "fu";    // 鰒
        case 14854: return "sai";    // 鰓
        case 14856: return "gan";    // 鰔
        case 14858: return "xia";    // 鰕
        case 14860: return "wei";    // 鰖
        case 14862: return "hu";    // 鰗
        case 14864: return "shi";    // 鰘
        case 14866: return "ruo";    // 鰙
        case 14868: return "xuan";    // 鰚
        case 14870: return "";    // ?
        case 14872: return "wen";    // 鰛
        case 14874: return "jian";    // 鰜
        case 14876: return "hao";    // 鰝
        case 14878: return "wu";    // 鰞
        case 14880: return "pang";    // 鰟
        case 14882: return "sao";    // 鰠
        case 14884: return "liu";    // 鰡
        case 14886: return "ma";    // 鰢
        case 14888: return "shi";    // 鰣
        case 14890: return "shi";    // 鰤
        case 14892: return "guan";    // 鰥
        case 14894: return "zi";    // 鰦
        case 14896: return "teng";    // 鰧
        case 14898: return "ta";    // 鰨
        case 14900: return "yao";    // 鰩
        case 14902: return "e";    // 鰪
        case 14904: return "yong";    // 鰫
        case 14906: return "qian";    // 鰬
        case 14908: return "qi";    // 鰭
        case 14910: return "wen";    // 鰮
        case 14912: return "ruo";    // 鰯
        case 14914: return "shen";    // 鰰
        case 14916: return "lian";    // 鰱
        case 14918: return "ao";    // 鰲
        case 14920: return "le";    // 鰳
        case 14922: return "hui";    // 鰴
        case 14924: return "min";    // 鰵
        case 14926: return "ji";    // 鰶
        case 14928: return "tiao";    // 鰷
        case 14930: return "qu";    // 鰸
        case 14932: return "jian";    // 鰹
        case 14934: return "shen";    // 鰺
        case 14936: return "man";    // 鰻
        case 14938: return "xi";    // 鰼
        case 14940: return "qiu";    // 鰽
        case 14942: return "biao";    // 鰾
        case 14944: return "ji";    // 鰿
        case 14946: return "ji";    // 鱀
        case 14948: return "zhu";    // 鱁
        case 14950: return "jiang";    // 鱂
        case 14952: return "qiu";    // 鱃
        case 14954: return "tuan";    // 鱄
        case 14956: return "yong";    // 鱅
        case 14958: return "zhang";    // 鱆
        case 14960: return "kang";    // 鱇
        case 14962: return "xue";    // 鱈
        case 14964: return "bie";    // 鱉
        case 14966: return "yu";    // 鱊
        case 14968: return "qu";    // 鱋
        case 14970: return "xiang";    // 鱌
        case 14972: return "bo";    // 鱍
        case 14974: return "jiao";    // 鱎
        case 14976: return "xun";    // 鱏
        case 14978: return "su";    // 鱐
        case 14980: return "huang";    // 鱑
        case 14982: return "zun";    // 鱒
        case 14984: return "tuo";    // 鱓
        case 14986: return "shan";    // 鱔
        case 14988: return "fan";    // 鱕
        case 14990: return "gui";    // 鱖
        case 14992: return "lin";    // 鱗
        case 14994: return "xun";    // 鱘
        case 14996: return "miao";    // 鱙
        case 14998: return "xi";    // 鱚
        case 15000: return "zeng";    // 鱛
        case 15002: return "xiang";    // 鱜
        case 15004: return "fen";    // 鱝
        case 15006: return "guan";    // 鱞
        case 15008: return "hou";    // 鱟
        case 15010: return "kuai";    // 鱠
        case 15012: return "zei";    // 鱡
        case 15014: return "sao";    // 鱢
        case 15016: return "shan";    // 鱣
        case 15018: return "gan";    // 鱤
        case 15020: return "gui";    // 鱥
        case 15022: return "ying";    // 鱦
        case 15024: return "li";    // 鱧
        case 15026: return "chang";    // 鱨
        case 15028: return "lei";    // 鱩
        case 15030: return "shu";    // 鱪
        case 15032: return "ai";    // 鱫
        case 15034: return "ru";    // 鱬
        case 15036: return "ji";    // 鱭
        case 15038: return "yu";    // 鱮
        case 15040: return "hu";    // 鱯
        case 15042: return "shu";    // 鱰
        case 15044: return "li";    // 鱱
        case 15046: return "la";    // 鱲
        case 15048: return "li";    // 鱳
        case 15050: return "mie";    // 鱴
        case 15052: return "zhen";    // 鱵
        case 15054: return "xiang";    // 鱶
        case 15056: return "e";    // 鱷
        case 15058: return "lu";    // 鱸
        case 15060: return "guan";    // 鱹
        case 15062: return "li";    // 鱺
        case 15064: return "";    // ?
        case 15066: return "xian";    // 鱻
        case 15068: return "dao";    // 鱽
        case 15070: return "ji";    // 鱾
        case 15072: return "tun";    // 鲀
        case 15074: return "ba";    // 鲃
        case 15076: return "ge";    // 鲄
        case 15078: return "you";    // 鲉
        case 15080: return "zha";    // 鲊
        case 15082: return "ba";    // 鲌
        case 15084: return "pi";    // 鲏
        case 15086: return "kao";    // 鲓
        case 15088: return "tong";    // 鲖
        case 15090: return "zei";    // 鲗
        case 15092: return "hou";    // 鲘
        case 15094: return "kuai";    // 鲙
        case 15096: return "zha";    // 鲝
        case 15098: return "jun";    // 鲪
        case 15100: return "yong";    // 鲬
        case 15102: return "qi";    // 鲯
        case 15104: return "shen";    // 鲹
        case 15106: return "bi";    // 鲾
        case 15108: return "chang";    // 鲿
        case 15110: return "ti";    // 鳀
        case 15112: return "wen";    // 鳁
        case 15114: return "wei";    // 鳂
        case 15116: return "quan";    // 鳈
        case 15118: return "jiang";    // 鳉
        case 15120: return "pang";    // 鳑
        case 15122: return "jian";    // 鳒
        case 15124: return "wei";    // 鳚
        case 15126: return "xi";    // 鳛
        case 15128: return "hu";    // 鳠
        case 15130: return "gan";    // 鳡
        case 15132: return "zhan";    // 鳣
        case 15134: return "guan";    // 鳤
        case 15136: return "niao";    // 鳥
        case 15138: return "yi";    // 鳦
        case 15140: return "fu";    // 鳧
        case 15142: return "li";    // 鳨
        case 15144: return "jiu";    // 鳩
        case 15146: return "bu";    // 鳪
        case 15148: return "yan";    // 鳫
        case 15150: return "fu";    // 鳬
        case 15152: return "diao";    // 鳭
        case 15154: return "ji";    // 鳮
        case 15156: return "feng";    // 鳯
        case 15158: return "ru";    // 鳰
        case 15160: return "gan";    // 鳱
        case 15162: return "shi";    // 鳲
        case 15164: return "feng";    // 鳳
        case 15166: return "ming";    // 鳴
        case 15168: return "bao";    // 鳵
        case 15170: return "yuan";    // 鳶
        case 15172: return "zhi";    // 鳷
        case 15174: return "hu";    // 鳸
        case 15176: return "qin";    // 鳹
        case 15178: return "fu";    // 鳺
        case 15180: return "ban";    // 鳻
        case 15182: return "wen";    // 鳼
        case 15184: return "jian";    // 鳽
        case 15186: return "shi";    // 鳾
        case 15188: return "yu";    // 鳿
        case 15190: return "fou";    // 鴀
        case 15192: return "ao";    // 鴁
        case 15194: return "gui";    // 鴂
        case 15196: return "gui";    // 鴃
        case 15198: return "pi";    // 鴄
        case 15200: return "huan";    // 鴅
        case 15202: return "zhen";    // 鴆
        case 15204: return "bao";    // 鴇
        case 15206: return "yan";    // 鴈
        case 15208: return "ya";    // 鴉
        case 15210: return "zheng";    // 鴊
        case 15212: return "fang";    // 鴋
        case 15214: return "feng";    // 鴌
        case 15216: return "wen";    // 鴍
        case 15218: return "ou";    // 鴎
        case 15220: return "dai";    // 鴏
        case 15222: return "ge";    // 鴐
        case 15224: return "ru";    // 鴑
        case 15226: return "ling";    // 鴒
        case 15228: return "bi";    // 鴓
        case 15230: return "fu";    // 鴔
        case 15232: return "tuo";    // 鴕
        case 15234: return "wen";    // 鴖
        case 15236: return "li";    // 鴗
        case 15238: return "bian";    // 鴘
        case 15240: return "zhi";    // 鴙
        case 15242: return "ge";    // 鴚
        case 15244: return "yuan";    // 鴛
        case 15246: return "ci";    // 鴜
        case 15248: return "gou";    // 鴝
        case 15250: return "xiao";    // 鴞
        case 15252: return "chi";    // 鴟
        case 15254: return "dan";    // 鴠
        case 15256: return "ju";    // 鴡
        case 15258: return "";    // ?
        case 15260: return "yao";    // 鴢
        case 15262: return "gu";    // 鴣
        case 15264: return "zhong";    // 鴤
        case 15266: return "yu";    // 鴥
        case 15268: return "yang";    // 鴦
        case 15270: return "yu";    // 鴧
        case 15272: return "ya";    // 鴨
        case 15274: return "tie";    // 鴩
        case 15276: return "yu";    // 鴪
        case 15278: return "tian";    // 鴫
        case 15280: return "ying";    // 鴬
        case 15282: return "dui";    // 鴭
        case 15284: return "wu";    // 鴮
        case 15286: return "er";    // 鴯
        case 15288: return "gua";    // 鴰
        case 15290: return "ai";    // 鴱
        case 15292: return "zhi";    // 鴲
        case 15294: return "an";    // 鴳
        case 15296: return "heng";    // 鴴
        case 15298: return "xiao";    // 鴵
        case 15300: return "jia";    // 鴶
        case 15302: return "lie";    // 鴷
        case 15304: return "zhu";    // 鴸
        case 15306: return "yang";    // 鴹
        case 15308: return "yi";    // 鴺
        case 15310: return "hong";    // 鴻
        case 15312: return "lu";    // 鴼
        case 15314: return "ru";    // 鴽
        case 15316: return "mou";    // 鴾
        case 15318: return "ge";    // 鴿
        case 15320: return "ren";    // 鵀
        case 15322: return "xiao";    // 鵁
        case 15324: return "xiu";    // 鵂
        case 15326: return "diao";    // 鵃
        case 15328: return "chi";    // 鵄
        case 15330: return "luo";    // 鵅
        case 15332: return "heng";    // 鵆
        case 15334: return "nian";    // 鵇
        case 15336: return "e";    // 鵈
        case 15338: return "luan";    // 鵉
        case 15340: return "jia";    // 鵊
        case 15342: return "ji";    // 鵋
        case 15344: return "tu";    // 鵌
        case 15346: return "huan";    // 鵍
        case 15348: return "tuo";    // 鵎
        case 15350: return "bu";    // 鵏
        case 15352: return "wu";    // 鵐
        case 15354: return "juan";    // 鵑
        case 15356: return "yu";    // 鵒
        case 15358: return "bo";    // 鵓
        case 15360: return "jun";    // 鵔
        case 15362: return "jun";    // 鵕
        case 15364: return "bi";    // 鵖
        case 15366: return "xi";    // 鵗
        case 15368: return "jun";    // 鵘
        case 15370: return "ju";    // 鵙
        case 15372: return "tu";    // 鵚
        case 15374: return "jing";    // 鵛
        case 15376: return "ti";    // 鵜
        case 15378: return "e";    // 鵝
        case 15380: return "e";    // 鵞
        case 15382: return "kuang";    // 鵟
        case 15384: return "hu";    // 鵠
        case 15386: return "wu";    // 鵡
        case 15388: return "shen";    // 鵢
        case 15390: return "lai";    // 鵣
        case 15392: return "jiao";    // 鵤
        case 15394: return "pan";    // 鵥
        case 15396: return "lu";    // 鵦
        case 15398: return "pi";    // 鵧
        case 15400: return "shu";    // 鵨
        case 15402: return "fu";    // 鵩
        case 15404: return "an";    // 鵪
        case 15406: return "zhuo";    // 鵫
        case 15408: return "peng";    // 鵬
        case 15410: return "qiu";    // 鵭
        case 15412: return "qian";    // 鵮
        case 15414: return "bei";    // 鵯
        case 15416: return "diao";    // 鵰
        case 15418: return "lu";    // 鵱
        case 15420: return "que";    // 鵲
        case 15422: return "jian";    // 鵳
        case 15424: return "ju";    // 鵴
        case 15426: return "tu";    // 鵵
        case 15428: return "ya";    // 鵶
        case 15430: return "yuan";    // 鵷
        case 15432: return "qi";    // 鵸
        case 15434: return "li";    // 鵹
        case 15436: return "ye";    // 鵺
        case 15438: return "zhui";    // 鵻
        case 15440: return "kong";    // 鵼
        case 15442: return "duo";    // 鵽
        case 15444: return "kun";    // 鵾
        case 15446: return "sheng";    // 鵿
        case 15448: return "qi";    // 鶀
        case 15450: return "jing";    // 鶁
        case 15452: return "";    // ?
        case 15454: return "yi";    // 鶂
        case 15456: return "yi";    // 鶃
        case 15458: return "qing";    // 鶄
        case 15460: return "zi";    // 鶅
        case 15462: return "lai";    // 鶆
        case 15464: return "dong";    // 鶇
        case 15466: return "qi";    // 鶈
        case 15468: return "chun";    // 鶉
        case 15470: return "geng";    // 鶊
        case 15472: return "ju";    // 鶋
        case 15474: return "jue";    // 鶌
        case 15476: return "yi";    // 鶍
        case 15478: return "zun";    // 鶎
        case 15480: return "ji";    // 鶏
        case 15482: return "shu";    // 鶐
        case 15484: return "ying";    // 鶑
        case 15486: return "chi";    // 鶒
        case 15488: return "miao";    // 鶓
        case 15490: return "rou";    // 鶔
        case 15492: return "an";    // 鶕
        case 15494: return "qiu";    // 鶖
        case 15496: return "ti";    // 鶗
        case 15498: return "hu";    // 鶘
        case 15500: return "ti";    // 鶙
        case 15502: return "e";    // 鶚
        case 15504: return "jie";    // 鶛
        case 15506: return "mao";    // 鶜
        case 15508: return "bi";    // 鶝
        case 15510: return "chun";    // 鶞
        case 15512: return "tu";    // 鶟
        case 15514: return "yan";    // 鶠
        case 15516: return "he";    // 鶡
        case 15518: return "yuan";    // 鶢
        case 15520: return "bian";    // 鶣
        case 15522: return "kun";    // 鶤
        case 15524: return "mei";    // 鶥
        case 15526: return "hu";    // 鶦
        case 15528: return "ying";    // 鶧
        case 15530: return "zhi";    // 鶨
        case 15532: return "wu";    // 鶩
        case 15534: return "ju";    // 鶪
        case 15536: return "dong";    // 鶫
        case 15538: return "qiang";    // 鶬
        case 15540: return "fang";    // 鶭
        case 15542: return "he";    // 鶮
        case 15544: return "ying";    // 鶯
        case 15546: return "yuan";    // 鶰
        case 15548: return "xian";    // 鶱
        case 15550: return "weng";    // 鶲
        case 15552: return "shi";    // 鶳
        case 15554: return "he";    // 鶴
        case 15556: return "chu";    // 鶵
        case 15558: return "tang";    // 鶶
        case 15560: return "xia";    // 鶷
        case 15562: return "ruo";    // 鶸
        case 15564: return "liu";    // 鶹
        case 15566: return "ji";    // 鶺
        case 15568: return "gu";    // 鶻
        case 15570: return "jian";    // 鶼
        case 15572: return "xun";    // 鶽
        case 15574: return "han";    // 鶾
        case 15576: return "ci";    // 鶿
        case 15578: return "ci";    // 鷀
        case 15580: return "yi";    // 鷁
        case 15582: return "yao";    // 鷂
        case 15584: return "yan";    // 鷃
        case 15586: return "ji";    // 鷄
        case 15588: return "li";    // 鷅
        case 15590: return "tian";    // 鷆
        case 15592: return "kou";    // 鷇
        case 15594: return "ti";    // 鷈
        case 15596: return "si";    // 鷉
        case 15598: return "yi";    // 鷊
        case 15600: return "tu";    // 鷋
        case 15602: return "ma";    // 鷌
        case 15604: return "xiao";    // 鷍
        case 15606: return "gao";    // 鷎
        case 15608: return "tian";    // 鷏
        case 15610: return "chen";    // 鷐
        case 15612: return "ji";    // 鷑
        case 15614: return "tuan";    // 鷒
        case 15616: return "zhe";    // 鷓
        case 15618: return "ao";    // 鷔
        case 15620: return "yao";    // 鷕
        case 15622: return "yi";    // 鷖
        case 15624: return "ou";    // 鷗
        case 15626: return "chi";    // 鷘
        case 15628: return "zhi";    // 鷙
        case 15630: return "liu";    // 鷚
        case 15632: return "yong";    // 鷛
        case 15634: return "lu";    // 鷜
        case 15636: return "bi";    // 鷝
        case 15638: return "shuang";    // 鷞
        case 15640: return "zhuo";    // 鷟
        case 15642: return "yu";    // 鷠
        case 15644: return "wu";    // 鷡
        case 15646: return "";    // ?
        case 15648: return "jue";    // 鷢
        case 15650: return "yin";    // 鷣
        case 15652: return "tan";    // 鷤
        case 15654: return "si";    // 鷥
        case 15656: return "jiao";    // 鷦
        case 15658: return "yi";    // 鷧
        case 15660: return "hua";    // 鷨
        case 15662: return "bi";    // 鷩
        case 15664: return "ying";    // 鷪
        case 15666: return "su";    // 鷫
        case 15668: return "huang";    // 鷬
        case 15670: return "fan";    // 鷭
        case 15672: return "jiao";    // 鷮
        case 15674: return "liao";    // 鷯
        case 15676: return "yan";    // 鷰
        case 15678: return "gao";    // 鷱
        case 15680: return "jiu";    // 鷲
        case 15682: return "xian";    // 鷳
        case 15684: return "xian";    // 鷴
        case 15686: return "tu";    // 鷵
        case 15688: return "mai";    // 鷶
        case 15690: return "zun";    // 鷷
        case 15692: return "yu";    // 鷸
        case 15694: return "ying";    // 鷹
        case 15696: return "lu";    // 鷺
        case 15698: return "tuan";    // 鷻
        case 15700: return "xian";    // 鷼
        case 15702: return "xue";    // 鷽
        case 15704: return "yi";    // 鷾
        case 15706: return "pi";    // 鷿
        case 15708: return "zhu";    // 鸀
        case 15710: return "luo";    // 鸁
        case 15712: return "xi";    // 鸂
        case 15714: return "yi";    // 鸃
        case 15716: return "ji";    // 鸄
        case 15718: return "ze";    // 鸅
        case 15720: return "yu";    // 鸆
        case 15722: return "zhan";    // 鸇
        case 15724: return "ye";    // 鸈
        case 15726: return "yang";    // 鸉
        case 15728: return "bi";    // 鸊
        case 15730: return "ning";    // 鸋
        case 15732: return "hu";    // 鸌
        case 15734: return "mi";    // 鸍
        case 15736: return "ying";    // 鸎
        case 15738: return "mang";    // 鸏
        case 15740: return "di";    // 鸐
        case 15742: return "yue";    // 鸑
        case 15744: return "yu";    // 鸒
        case 15746: return "lei";    // 鸓
        case 15748: return "bu";    // 鸔
        case 15750: return "lu";    // 鸕
        case 15752: return "he";    // 鸖
        case 15754: return "long";    // 鸗
        case 15756: return "shuang";    // 鸘
        case 15758: return "yue";    // 鸙
        case 15760: return "ying";    // 鸚
        case 15762: return "guan";    // 鸛
        case 15764: return "gou";    // 鸜
        case 15766: return "li";    // 鸝
        case 15768: return "luan";    // 鸞
        case 15770: return "shi";    // 鸤
        case 15772: return "qiang";    // 鸧
        case 15774: return "xiao";    // 鸮
        case 15776: return "ling";    // 鸰
        case 15778: return "xue";    // 鸴
        case 15780: return "heng";    // 鸻
        case 15782: return "diao";    // 鸼
        case 15784: return "wu";    // 鹀
        case 15786: return "kun";    // 鹍
        case 15788: return "qian";    // 鹐
        case 15790: return "geng";    // 鹒
        case 15792: return "yuan";    // 鹓
        case 15794: return "su";    // 鹔
        case 15796: return "he";    // 鹖
        case 15798: return "qiu";    // 鹙
        case 15800: return "yi";    // 鹝
        case 15802: return "weng";    // 鹟
        case 15804: return "liu";    // 鹠
        case 15806: return "ji";    // 鹡
        case 15808: return "yi";    // 鹢
        case 15810: return "yi";    // 鹥
        case 15812: return "huan";    // 鹮
        case 15814: return "zhan";    // 鹯
        case 15816: return "mang";    // 鹲
        case 15818: return "shuang";    // 鹴
        case 15820: return "lu";    // 鹵
        case 15822: return "jin";    // 鹶
        case 15824: return "ling";    // 鹷
        case 15826: return "jian";    // 鹸
        case 15828: return "jian";    // 鹹
        case 15830: return "cuo";    // 鹺
        case 15832: return "jian";    // 鹻
        case 15834: return "jian";    // 鹼
        case 15836: return "yan";    // 鹽
        case 15838: return "you";    // 麀
        case 15840: return "";    // ?
        case 15842: return "cu";    // 麁
        case 15844: return "biao";    // 麃
        case 15846: return "cu";    // 麄
        case 15848: return "pao";    // 麅
        case 15850: return "zhu";    // 麆
        case 15852: return "jian";    // 麉
        case 15854: return "mi";    // 麊
        case 15856: return "yu";    // 麌
        case 15858: return "liu";    // 麍
        case 15860: return "chen";    // 麎
        case 15862: return "jun";    // 麏
        case 15864: return "lin";    // 麐
        case 15866: return "ni";    // 麑
        case 15868: return "jiu";    // 麔
        case 15870: return "jun";    // 麕
        case 15872: return "jing";    // 麖
        case 15874: return "li";    // 麗
        case 15876: return "xiang";    // 麘
        case 15878: return "yan";    // 麙
        case 15880: return "jia";    // 麚
        case 15882: return "mi";    // 麛
        case 15884: return "li";    // 麜
        case 15886: return "zhang";    // 麞
        case 15888: return "jing";    // 麠
        case 15890: return "qi";    // 麡
        case 15892: return "ling";    // 麢
        case 15894: return "yan";    // 麣
        case 15896: return "cu";    // 麤
        case 15898: return "mai";    // 麥
        case 15900: return "he";    // 麧
        case 15902: return "chao";    // 麨
        case 15904: return "fu";    // 麩
        case 15906: return "mian";    // 麪
        case 15908: return "mian";    // 麫
        case 15910: return "fu";    // 麬
        case 15912: return "pao";    // 麭
        case 15914: return "qu";    // 麮
        case 15916: return "qu";    // 麯
        case 15918: return "mou";    // 麰
        case 15920: return "fu";    // 麱
        case 15922: return "yan";    // 麲
        case 15924: return "lai";    // 麳
        case 15926: return "mian";    // 麵
        case 15928: return "chi";    // 麶
        case 15930: return "feng";    // 麷
        case 15932: return "qu";    // 麹
        case 15934: return "mian";    // 麺
        case 15936: return "me";    // 麼
        case 15938: return "mo";    // 麿
        case 15940: return "zou";    // 黀
        case 15942: return "nun";    // 黁
        case 15944: return "fen";    // 黂
        case 15946: return "huang";    // 黃
        case 15948: return "jin";    // 黅
        case 15950: return "guang";    // 黆
        case 15952: return "tian";    // 黇
        case 15954: return "tou";    // 黈
        case 15956: return "hua";    // 黊
        case 15958: return "kuang";    // 黋
        case 15960: return "hong";    // 黌
        case 15962: return "chi";    // 黐
        case 15964: return "hei";    // 黒
        case 15966: return "yi";    // 黓
        case 15968: return "dan";    // 黕
        case 15970: return "xi";    // 黖
        case 15972: return "tun";    // 黗
        case 15974: return "mo";    // 黙
        case 15976: return "jian";    // 黚
        case 15978: return "dian";    // 點
        case 15980: return "yan";    // 黡
        case 15982: return "mei";    // 黣
        case 15984: return "yan";    // 黤
        case 15986: return "ye";    // 黦
        case 15988: return "dang";    // 黨
        case 15990: return "yan";    // 黫
        case 15992: return "yan";    // 黬
        case 15994: return "yan";    // 黭
        case 15996: return "dan";    // 黮
        case 15998: return "yan";    // 黰
        case 16000: return "dai";    // 黱
        case 16002: return "can";    // 黲
        case 16004: return "yi";    // 黳
        case 16006: return "mei";    // 黴
        case 16008: return "dan";    // 黵
        case 16010: return "yan";    // 黶
        case 16012: return "du";    // 黷
        case 16014: return "lu";    // 黸
        case 16016: return "fen";    // 黺
        case 16018: return "meng";    // 黽
        case 16020: return "yuan";    // 黿
        case 16022: return "cu";    // 鼀
        case 16024: return "qu";    // 鼁
        case 16026: return "zhao";    // 鼂
        case 16028: return "wa";    // 鼃
        case 16030: return "zhu";    // 鼄
        case 16032: return "zhi";    // 鼅
        case 16034: return "";    // ?
        case 16036: return "meng";    // 鼆
        case 16038: return "ao";    // 鼇
        case 16040: return "bie";    // 鼈
        case 16042: return "tuo";    // 鼉
        case 16044: return "bi";    // 鼊
        case 16046: return "zhao";    // 鼌
        case 16048: return "mi";    // 鼏
        case 16050: return "ding";    // 鼑
        case 16052: return "zi";    // 鼒
        case 16054: return "gu";    // 鼔
        case 16056: return "dong";    // 鼕
        case 16058: return "fen";    // 鼖
        case 16060: return "yuan";    // 鼘
        case 16062: return "chang";    // 鼚
        case 16064: return "gao";    // 鼛
        case 16066: return "qi";    // 鼜
        case 16068: return "yuan";    // 鼝
        case 16070: return "tang";    // 鼞
        case 16072: return "teng";    // 鼟
        case 16074: return "shu";    // 鼡
        case 16076: return "fei";    // 鼣
        case 16078: return "wen";    // 鼤
        case 16080: return "ba";    // 鼥
        case 16082: return "diao";    // 鼦
        case 16084: return "tuo";    // 鼧
        case 16086: return "zhong";    // 鼨
        case 16088: return "qu";    // 鼩
        case 16090: return "sheng";    // 鼪
        case 16092: return "shi";    // 鼫
        case 16094: return "shi";    // 鼭
        case 16096: return "ting";    // 鼮
        case 16098: return "ju";    // 鼰
        case 16100: return "jing";    // 鼱
        case 16102: return "hun";    // 鼲
        case 16104: return "ju";    // 鼳
        case 16106: return "yan";    // 鼴
        case 16108: return "tu";    // 鼵
        case 16110: return "si";    // 鼶
        case 16112: return "xian";    // 鼸
        case 16114: return "lei";    // 鼺
        case 16116: return "ya";    // 鼼
        case 16118: return "wu";    // 鼿
        case 16120: return "wu";    // 齀
        case 16122: return "ku";    // 齁
        case 16124: return "xie";    // 齂
        case 16126: return "e";    // 齃
        case 16128: return "xiu";    // 齅
        case 16130: return "weng";    // 齆
        case 16132: return "zha";    // 齇
        case 16134: return "nong";    // 齈
        case 16136: return "nang";    // 齉
        case 16138: return "qi";    // 齊
        case 16140: return "zhai";    // 齋
        case 16142: return "ji";    // 齌
        case 16144: return "ji";    // 齍
        case 16146: return "ji";    // 齎
        case 16148: return "ji";    // 齏
        case 16150: return "chi";    // 齒
        case 16152: return "chen";    // 齓
        case 16154: return "chen";    // 齔
        case 16156: return "he";    // 齕
        case 16158: return "ya";    // 齖
        case 16160: return "yan";    // 齗
        case 16162: return "xie";    // 齘
        case 16164: return "bao";    // 齙
        case 16166: return "ze";    // 齚
        case 16168: return "xie";    // 齛
        case 16170: return "zi";    // 齜
        case 16172: return "chi";    // 齝
        case 16174: return "yan";    // 齞
        case 16176: return "ju";    // 齟
        case 16178: return "tiao";    // 齠
        case 16180: return "ling";    // 齡
        case 16182: return "ling";    // 齢
        case 16184: return "chu";    // 齣
        case 16186: return "quan";    // 齤
        case 16188: return "xie";    // 齥
        case 16190: return "yin";    // 齦
        case 16192: return "nie";    // 齧
        case 16194: return "jiu";    // 齨
        case 16196: return "yao";    // 齩
        case 16198: return "chuo";    // 齪
        case 16200: return "yun";    // 齫
        case 16202: return "yu";    // 齬
        case 16204: return "chu";    // 齭
        case 16206: return "yi";    // 齮
        case 16208: return "ni";    // 齯
        case 16210: return "ze";    // 齰
        case 16212: return "chuo";    // 齱
        case 16214: return "qu";    // 齲
        case 16216: return "yun";    // 齳
        case 16218: return "yan";    // 齴
        case 16220: return "ou";    // 齵
        case 16222: return "e";    // 齶
        case 16224: return "wo";    // 齷
        case 16226: return "yi";    // 齸
        case 16228: return "";    // ?
        case 16230: return "ci";    // 齹
        case 16232: return "zou";    // 齺
        case 16234: return "dian";    // 齻
        case 16236: return "chu";    // 齼
        case 16238: return "jin";    // 齽
        case 16240: return "e";    // 齾
        case 16242: return "he";    // 龁
        case 16244: return "yan";    // 龂
        case 16246: return "long";    // 龍
        case 16248: return "pang";    // 龎
        case 16250: return "wo";    // 龏
        case 16252: return "pang";    // 龐
        case 16254: return "yan";    // 龑
        case 16256: return "mang";    // 龒
        case 16258: return "long";    // 龓
        case 16260: return "gong";    // 龔
        case 16262: return "kan";    // 龕
        case 16264: return "da";    // 龖
        case 16266: return "ling";    // 龗
        case 16268: return "da";    // 龘
        case 16270: return "gui";    // 龜
        case 16272: return "qiu";    // 龝
        case 16274: return "bie";    // 龞
        case 16276: return "chui";    // 龡
        case 16278: return "he";    // 龢
        case 16280: return "jue";    // 龣
        case 16282: return "xie";    // 龤
        case 16284: return "yue";    // 龥
        case 16286: return "lang";    // 郎
        case 16288: return "liang";    // 凉
        case 16290: return "nian";    // 秊
        case 16292: return "li";    // 裏
        case 16294: return "lin";    // 隣
        case 16296: return "wu";    // 兀
        case 16298: return "hu";    // 嗀
        case 16300: return "shuang";    // 﨎
        case 16302: return "xu";    // 﨏
        case 16304: return "qi";    // 﨑
        case 16306: return "fu";    // 﨓
        case 16308: return "ju";    // 﨔
        case 16310: return "li";    // 礼
        case 16312: return "ke";    // 﨟
        case 16314: return "qiu";    // 蘒
        case 16316: return "sheng";    // 﨡
        case 16318: return "suo";    // 﨣
        case 16320: return "ji";    // 﨤
        case 16322: return "xiao";    // 﨧
        case 16324: return "xing";    // 﨨
        case 16326: return "dao";    // 﨩
        case 16328: return "";    // ⺁
        case 16330: return "";    // 
        case 16332: return "";    // 
        case 16334: return "";    // 
        case 16336: return "";    // ⺄
        case 16338: return "";    // 㑳
        case 16340: return "";    // 㑇
        case 16342: return "";    // ⺈
        case 16344: return "";    // ⺋
        case 16346: return "";    // 
        case 16348: return "";    // 㖞
        case 16350: return "";    // 㘚
        case 16352: return "";    // 㘎
        case 16354: return "";    // ⺌
        case 16356: return "";    // ⺗
        case 16358: return "";    // 㥮
        case 16360: return "";    // 㤘
        case 16362: return "";    // 
        case 16364: return "";    // 㧏
        case 16366: return "";    // 㧟
        case 16368: return "";    // 㩳
        case 16370: return "";    // 㧐
        case 16372: return "";    // 
        case 16374: return "";    // 
        case 16376: return "";    // 㭎
        case 16378: return "";    // 㱮
        case 16380: return "";    // 㳠
        case 16382: return "";    // ⺧
        case 16384: return "";    // 
        case 16386: return "";    // 
        case 16388: return "";    // ⺪
        case 16390: return "";    // 䁖
        case 16392: return "";    // 䅟
        case 16394: return "";    // ⺮
        case 16396: return "";    // 䌷
        case 16398: return "";    // ⺳
        case 16400: return "";    // ⺶
        case 16402: return "";    // ⺷
        case 16404: return "";    // 
        case 16406: return "";    // 䎱
        case 16408: return "";    // 䎬
        case 16410: return "";    // ⺻
        case 16412: return "";    // 䏝
        case 16414: return "";    // 䓖
        case 16416: return "";    // 䙡
        case 16418: return "";    // 䙌
        case 16420: return "";    // 
        case 16422: return "";    // ?
        case 16424: return "";    // 䜣
        case 16426: return "";    // 䜩
        case 16428: return "";    // 䝼
        case 16430: return "";    // 䞍
        case 16432: return "";    // ⻊
        case 16434: return "";    // 䥇
        case 16436: return "";    // 䥺
        case 16438: return "";    // 䥽
        case 16440: return "";    // 䦂
        case 16442: return "";    // 䦃
        case 16444: return "";    // 䦅
        case 16446: return "";    // 䦆
        case 16448: return "";    // 䦟
        case 16450: return "";    // 䦛
        case 16452: return "";    // 䦷
        case 16454: return "";    // 䦶
        case 16456: return "";    // 
        case 16458: return "";    // 
        case 16460: return "";    // 䲣
        case 16462: return "";    // 䲟
        case 16464: return "";    // 䲠
        case 16466: return "";    // 䲡
        case 16468: return "";    // 䱷
        case 16470: return "";    // 䲢
        case 16472: return "";    // 䴓
        case 16474: return "";    // 䴔
        case 16476: return "";    // 䴕
        case 16478: return "";    // 䴖
        case 16480: return "";    // 䴗
        case 16482: return "";    // 䴘
        case 16484: return "";    // 䴙
        case 16486: return "";    // 䶮
        case 16488: return "";    // 
    }

    return NULL;
}

typedef struct _peyin_unit
{
    char *m;
    int len;

} peyin_unit, *p_peyin_unit;

/// 声母代码
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

/// 韵母代码
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

/// 声母
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

/// 韵母
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
    { "ue",   2},   // üe
    { "un",   2},   // ün
    { "a",    1},
    { "e",    1},
    { "i",    1},
    { "o",    1},
    { "u",    1},
};

/**
 *\brief                    得到声韵母
 *\param[in]    pinyin      拼音
 *\param[out]   sm          声母
 *\param[out]   ym          韵母
 *\return       0           成功
 */
int get_sm_ym(const char *pinyin, unsigned char *sm, unsigned char *ym)
{
    if (NULL == pinyin || NULL == sm || NULL == ym)
    {
        return -1;
    }

    int i        = 0;
    int count_sm = sizeof(g_pinyin_sm) / sizeof(g_pinyin_sm[0]); // 声母数量
    int count_ym = sizeof(g_pinyin_ym) / sizeof(g_pinyin_ym[0]); // 韵母数量

    for (; i < count_sm; i++)
    {
        if (0 == strncmp(pinyin, g_pinyin_sm[i].m, g_pinyin_sm[i].len))
        {
            break;
        }
    }

    int len;

    if (i == count_sm)  // 没有声母,是有这种情况的
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

    if (j == count_ym) // 没有韵母,出错
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
    // GB2312编码,A1A1-FEFE
    // 01-09区收录除汉字外的682个字符。                 A1-A9
    // 10-15区为空白区，没有使用。                      AA-AF
    // 16-55区收录3755个一级汉字，按拼音排序。          B0-D7
    // 56-87区收录3008个二级汉字，按部首/笔画排序。     D8-F7
    // 88-94区为空白区，没有使用。                      F8-FE

    // GBK编码,8140-FEFE
    //1. 汉字区。包含
    //  a. GB2312汉字区。         即GBK/2: B0A1-F7FE。收录GB2312 汉字6763个，按原顺序排列。
    //  b. GB13000.1 扩充汉字区。包括:
    //    (1)GBK/3: 8140-A0FE。   收录GB13000.1 中的CJK汉字6080个。
    //    (2)GBK/4: AA40-FEA0。   收录CJK汉字和增补的汉字8160个。
    //                            CJK汉字在前，按UCS代码大小排列；
    //                            增补的汉字(包括部首和构件)在后,按<<康熙字典>>的页码/字位排列。
    //    (3)汉字“〇”安排在图形符号区GBK/5：A996。
    //
    //2. 图形符号区。包含
    //  a. GB2312非汉字符号区。   即GBK/1: A1A1-A9FE。
    //                            其中除 GB2312 的符号外，
    //                            还有10个小写罗马数字和GB12345增补的符号。计符号717个。
    //  b. GB13000.1扩充非汉字区。即GBK/5: A840-A9A0。
    //                            BIG-5非汉字符号、结构符和“〇”排列在此区。计符号 166 个。
    //
    //3. 用户自定义区：分为(1)(2)(3)三个小区。
    //  (1) AAA1-AFFE，码位 564 个。
    //  (2) F8A1-FEFE，码位 658 个。
    //  (3) A140-A7A0，码位 672 个。

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
                // 0xD7FA~0xD7FE为空
                printf("GBK/2 code:%u 0x%02x%02x=%c%c pinyin=NULL\n", code, i, j, i, j);
                continue;
            }

            if (0 != get_sm_ym(pinyin, &sm, &ym))
            {
                printf("GBK/2 code:%u 0x%02x%02x=%c%c get_sm_ym error\n", code, i, j, i, j);
                continue;
            }

            buff_pos = ((i - 0x81) * (0xfe - 0x40 + 1) + (j - 0x40)) * 2;   // gbk 8140－FEFE
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
    // 将数据写入文件

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
    // 测试

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

    unsigned char *test = "丙辰中秋，歡飲達旦，大醉，作此篇，兼懷子由。"
    "明月几时有？把酒问青天。"
    "不知天上宫阙，今夕是何年。"
    "我欲乘风归去，又恐琼楼玉宇，高处不胜寒。"
    "起舞弄清影，何似在人间。"
    "转朱阁，低绮户，照无眠。"
    "不应有恨，何事长向别时圆？"
    "人有悲欢离合，月有阴晴圆缺，此事古难全。"
    "但愿人长久，千里共婵娟。";

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