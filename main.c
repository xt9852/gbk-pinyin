#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>
#include <Windows.h>

char* get_pinyin_gbk2(unsigned int code)
{
    char *str = NULL;

    switch(code)
	{
    case 1738: str="bi";     break;//±Æ
    case 2053: str="cou";    break;//´Õ
    case 2101: str="dai";    break;//µ¡
    case 2301: str="er";     break;//·¡
    case 2433: str="ga";     break;//¸Á
    case 2434: str="ga";     break;//¸Â
    case 4808: str="xie";    break;//Ð¨
    case 5602: str="ji";     break;//Ø¢
    case 5613: str="gun";    break;//Ø­
    case 5615: str="xie";    break;//Ø¯
    case 5628: str="zhu";    break;//Ø¼
    case 5636: str="se";     break;//ØÄ
    case 5646: str="fang";   break;//ØÎ
    case 5654: str="dao";    break;//ØÖ
    case 5661: str="la";     break;//ØÝ
    case 5673: str="ren";    break;//Øé
    case 5676: str="le";     break;//Øì
    case 5691: str="ka";     break;//Øû
    case 5719: str="li";     break;//Ù³
    case 5721: str="li";     break;//Ùµ
    case 5772: str="bao";    break;//Ùè
    case 5779: str="tou";    break;//Ùï
    case 5790: str="lei";    break;//Ùú
    case 5791: str="bing";   break;//Ùû
    case 5802: str="mi";     break;//Ú¢
    case 5805: str="yan";    break;//Ú¥
    case 5819: str="lei";    break;//Ú³
    case 5864: str="jie";    break;//Úà
    case 5866: str="fu";     break;//Úâ
    case 5910: str="li";     break;//Ûª
    case 5940: str="yin";    break;//ÛÈ
    case 5941: str="kan";    break;//ÛÉ
    case 5962: str="li";     break;//ÛÞ
    case 5986: str="guo";    break;//Ûö
    case 6008: str="leng";   break;//Ü¨
    case 6014: str="liang";  break;//Ü®
    case 6019: str="ao";     break;//Ü³
    case 6034: str="li";     break;//ÜÂ
    case 6082: str="fu";     break;//Üò
    case 6116: str="li";     break;//Ý°
    case 6125: str="lang";   break;//Ý¹
    case 6177: str="bei";    break;//Ýí
    case 6181: str="li";     break;//Ýñ
    case 6185: str="lang";   break;//Ýõ
    case 6192: str="lian";   break;//Ýü
    case 6228: str="li";     break;//Þ¼
    case 6235: str="gong";   break;//ÞÃ
    case 6238: str="lian";   break;//ÞÆ
    case 6248: str="shou";   break;//ÞÐ
    case 6323: str="le";     break;//ß·
    case 6331: str="li";     break;//ß¿
    case 6375: str="lao";    break;//ßë
    case 6405: str="lang";   break;//à¥
    case 6406: str="li";     break;//à¦
    case 6412: str="li";     break;//à¬
    case 6447: str="le";     break;//àÏ
    case 6477: str="wei";    break;//àí
    case 6480: str="lun";    break;//àð
    case 6516: str="lan";    break;//á°
    case 6532: str="lao";    break;//áÀ
    case 6533: str="lai";    break;//áÁ
    case 6560: str="chi";    break;//áÜ
    case 6566: str="lai";    break;//áâ
    case 6574: str="shan";   break;//áê
    case 6575: str="quan";   break;//áë
    case 6591: str="li";     break;//áû
    case 6626: str="zhong";  break;//âº
    case 6627: str="shi";    break;//â»
    case 6628: str="tang";   break;//â¼
    case 6664: str="xin";    break;//âà
    case 6674: str="chang";  break;//âê
    case 6706: str="li";     break;//ã¦
    case 6707: str="kun";    break;//ã§
    case 6714: str="chang";  break;//ã®
    case 6722: str="leng";   break;//ã¶
    case 6745: str="kun";    break;//ãÍ
    case 6747: str="lang";   break;//ãÏ
    case 6760: str="zhuang"; break;//ãÜ
    case 6763: str="san";    break;//ãß
    case 6778: str="le";     break;//ãî
    case 6783: str="yang";   break;//ãó
    case 6821: str="lai";    break;//äµ
    case 6864: str="li";     break;//äà
    case 6877: str="lan";    break;//äí
    case 6882: str="lian";   break;//äò
    case 6894: str="lai";    break;//äþ
    case 6902: str="li";     break;//å¢
    case 6905: str="lian";   break;//å¥
    case 6917: str="ba";     break;//å±
    case 6918: str="bao";    break;//å²
    case 6919: str="gui";    break;//å³
    case 6933: str="zou";    break;//åÁ
    case 6946: str="li";     break;//åÎ
    case 6969: str="la";     break;//åå
    case 6970: str="xun";    break;//åæ
    case 6988: str="chu";    break;//åø
    case 7001: str="jin";    break;//æ¡
    case 7018: str="li";     break;//æ²
    case 7043: str="li";     break;//æË
    case 7048: str="lei";    break;//æÐ
    case 7074: str="li";     break;//æê
    case 7089: str="jiao";   break;//æù
    case 7103: str="shu";    break;//ç£
    case 7142: str="li";     break;//çÊ
    case 7148: str="lei";    break;//çÐ
    case 7161: str="chuan";  break;//çÝ
    case 7186: str="lian";   break;//çö
    case 7191: str="kun";    break;//çû
    case 7232: str="li";     break;//èÀ
    case 7261: str="li";     break;//èÝ
    case 7265: str="lao";    break;//èá
    case 7303: str="liang";  break;//é£
    case 7312: str="lian";   break;//é¬
    case 7313: str="lan";    break;//é­
    case 7359: str="lei";    break;//éÛ
    case 7371: str="lian";   break;//éç
    case 7386: str="li";     break;//éö
    case 7423: str="po";     break;//ê·
    case 7425: str="la";     break;//ê¹
    case 7467: str="lai";    break;//êã
    case 7522: str="fan";    break;//ë¶
    case 7601: str="lian";   break;//ì¡
    case 7615: str="shu";    break;//ì¯
    case 7621: str="lan";    break;//ìµ
    case 7665: str="si";     break;//ìá
    case 7669: str="li";     break;//ìå
    case 7674: str="shi";    break;//ìê
    case 7717: str="yu";     break;//í±
    case 7734: str="li";     break;//íÂ
    case 7739: str="la";     break;//íÇ
    case 7789: str="lai";    break;//íù
    case 7826: str="li";     break;//îº
    case 7829: str="lan";    break;//î½
    case 7830: str="li";     break;//î¾
    case 7836: str="jin";    break;//îÄ
    case 7878: str="lao";    break;//îî
    case 7904: str="se";     break;//ï¤
    case 7909: str="lao";    break;//ï©
    case 7910: str="lai";    break;//ïª
    case 7914: str="li";     break;//ï®
    case 7922: str="lang";   break;//ï¶
    case 7931: str="kun";    break;//ï¿
    case 7971: str="lan";    break;//ïç
    case 7992: str="lang";   break;//ïü
    case 8003: str="se";     break;//ð£
    case 8031: str="li";     break;//ð¿
    case 8058: str="bing";   break;//ðÚ
    case 8061: str="li";     break;//ðÝ
    case 8063: str="li";     break;//ðß
    case 8076: str="lao";    break;//ðì
    case 8088: str="la";     break;//ðø
    case 8114: str="lai";    break;//ñ®
    case 8134: str="yi";     break;//ñÂ
    case 8145: str="lian";   break;//ñÍ
    case 8147: str="lian";   break;//ñÏ
    case 8160: str="lan";    break;//ñÜ
    case 8171: str="lei";    break;//ñç
    case 8176: str="lao";    break;//ñì
    case 8189: str="kui";    break;//ñù
    case 8214: str="hu";     break;//ò®
    case 8235: str="li";     break;//òÃ
    case 8250: str="kuo";    break;//òÒ
    case 8259: str="li";     break;//òÛ
    case 8275: str="lang";   break;//òë
    case 8281: str="kui";    break;//òñ
    case 8325: str="lian";   break;//ó¹
    case 8327: str="li";     break;//ó»
    case 8350: str="li";     break;//óÒ
    case 8381: str="kui";    break;//óñ
    case 8386: str="li";     break;//óö
    case 8405: str="lai";    break;//ô¥
    case 8447: str="li";     break;//ôÏ
    case 8473: str="jiao";   break;//ôé
    case 8510: str="lei";    break;//õª
    case 8511: str="kun";    break;//õ«
    case 8518: str="lao";    break;//õ²
    case 8523: str="li";     break;//õ·
    case 8540: str="luo";    break;//õÈ
    case 8545: str="kui";    break;//õÍ
    case 8552: str="liang";  break;//õÔ
    case 8553: str="ji";     break;//õÕ
    case 8608: str="li";     break;//ö¨
    case 8666: str="li";     break;//öâ
    case 8667: str="lian";   break;//öã
    case 8679: str="kun";    break;//öï
    case 8706: str="le";     break;//÷¦
    case 8715: str="li";     break;//÷¯
    case 8750: str="tao";    break;//÷Ò
    case 8753: str="kun";    break;//÷Õ
    case 8783: str="li";     break;//÷ó
	case 6325:
	case 6436:
	case 7571:
	case 7925:
		str="a";
		break;
	case 6263:
	case 6440:
	case 7040:
	case 7208:
	case 7451:
	case 7733:
	case 7945:
	case 8616:
		str="ai";
		break;
	case 5847:
	case 5991:
	case 6278:
	case 6577:
	case 6654:
	case 7281:
	case 7907:
	case 8038:
	case 8786:
		str="an";
		break;
		str="ang";
		break;
	case 5974:
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
	case 8773:
		str="ao";
		break;
	case 6056:
	case 6135:
	case 6517:
	case 7857:
	case 8446:
	case 8649:
	case 8741:
		str="ba";
		break;
	case 6267:
	case 6334:
	case 7494:
		str="bai";
		break;
	case 5870:
	case 5964:
	case 7851:
	case 8103:
	case 8113:
	case 8418:
		str="ban";
		break;
	case 6182:
	case 6826:
		str="bang";
		break;
	case 6165:
	case 7063:
	case 7650:
	case 8017:
	case 8157:
	case 8532:
	case 8621:
		str="bao";
		break;
	case 5635:
	case 5873:
	case 5893:
	case 5993:
	case 6141:
	case 6703:
	case 7753:
	case 8039:
	case 8156:
	case 8645:
	case 8725:
		str="bei";
		break;
	case 5946:
	case 5948:
	case 7458:
	case 7928:
		str="ben";
		break;
	case 6452:
	case 7420:
		str="beng";
		break;
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
	case 8734:
		str="bi";
		break;
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
	case 8693:
		str="bian";
		break;
	case 7027:
	case 7084:
	case 7609:
	case 7613:
	case 7958:
	case 7980:
	case 8106:
	case 8149:
	case 8707:
	case 8752:
		str="biao";
		break;
	case 8531:
		str="bie";
		break;
	case 5747:
	case 6557:
	case 7145:
	case 7167:
	case 7336:
	case 7375:
	case 7587:
	case 7957:
	case 8738:
	case 8762:
		str="bin";
		break;
	case 5787:
	case 5891:
	case 6280:
		str="bing";
		break;
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
	case 8559:
		str="bo";
		break;
	case 6318:
	case 6945:
	case 7419:
	case 7446:
	case 7848:
	case 7863:
	case 8519:
		str="bu";
		break;
	case 6474:
	case 7769:
		str="ca";
		break;
		str="cai";
		break;
	case 6978:
	case 7078:
	case 7218:
	case 8451:
	case 8785:
		str="can";
		break;
	case 5687:
		str="cang";
		break;
	case 6448:
	case 6878:
	case 8309:
	case 8429:
		str="cao";
		break;
	case 6692:
		str="ce";
		break;
	case 6515:
	case 6825:
		str="cen";
		break;
	case 6465:
		str="ceng";
		break;
	case 6639:
	case 6766:
	case 7017:
	case 7230:
	case 7311:
	case 7322:
	case 7363:
	case 7942:
	case 7979:
	case 8135:
		str="cha";
		break;
	case 5713:
	case 7846:
	case 8091:
	case 8218:
		str="chai";
		break;
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
	case 8580:
		str="chan";
		break;
	case 5686:
	case 5943:
	case 6041:
	case 6137:
	case 6660:
	case 6568:
	case 6749:
	case 7029:
	case 7047:
	case 7438:
	case 7509:
	case 8680:
		str="chang";
		break;
	case 6687:
	case 7443:
	case 8173:
		str="chao";
		break;
	case 5969:
	case 7726:
		str="che";
		break;
	case 5840:
	case 5863:
	case 6251:
	case 6433:
	case 6923:
	case 7201:
	case 7320:
	case 7755:
	case 8619:
		str="chen";
		break;
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
	case 8508:
		str="cheng";
		break;
	case 5749:
	case 6015:
	case 6061:
	case 6319:
	case 6374:
	case 6420:
	case 6445:
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
	case 8746:
		str="chi";
		break;
	case 6091:
	case 6671:
	case 6731:
	case 8409:
	case 8430:
		str="chong";
		break;
	case 5717:
	case 6492:
	case 6716:
	case 8112:
	case 8637:
		str="chou";
		break;
	case 5601:
	case 5927:
	case 6680:
	case 6732:
	case 7109:
	case 7238:
	case 7290:
	case 7343:
	case 8150:
	case 8260:
	case 8573:
	case 8777:
		str="chu";
		break;
	case 6285:
	case 6408:
	case 7590:
	case 8563:
		str="chuai";
		break;
	case 6622:
	case 6955:
	case 7516:
	case 7843:
	case 8413:
		str="chuan";
		break;
	case 6675:
		str="chuang";
		break;
	case 5879:
	case 7302:
	case 7319:
		str="chui";
		break;
	case 6127:
	case 8040:
	case 8277:
		str="chun";
		break;
	case 7401:
	case 8554:
	case 8626:
		str="chuo";
		break;
    case 6358:
    case 8043:
    case 7684:
    case 8457:
		str="ci";
		break;
	case 6075:
		str="zi";
		break;
	case 6042:
	case 6840:
	case 7085:
	case 7193:
	case 7214:
	case 7240:
		str="cong";
		break;
	case 7308:
	case 7403:
	case 7577:
		str="cou";
		break;
	case 6180:
	case 6562:
	case 6607:
	case 7367:
	case 8501:
	case 8530:
	case 8577:
		str="cu";
		break;
	case 5764:
	case 6305:
	case 7664:
	case 7973:
		str="cuan";
		break;
	case 6718:
	case 6145:
	case 6393:
	case 7213:
	case 7333:
	case 7505:
	case 8631:
		str="cui";
		break;
	case 6666:
	case 8169:
		str="cun";
		break;
	case 5640:
	case 6547:
	case 7566:
	case 7917:
	case 7983:
	case 8078:
	case 8526:
	case 8567:
		str="cuo";
		break;
	case 6239:
	case 6353:
	case 6410:
	case 6682:
	case 7007:
	case 8155:
	case 8346:
	case 8716:
	case 8718:
		str="da";
		break;
	case 6004:
	case 6316:
	case 6523:
	case 6942:
	case 7110:
	case 7173:
	case 8776:
		str="dai";
		break;
	case 5757:
	case 6144:
	case 6402:
	case 7373:
	case 7470:
	case 7781:
	case 8067:
	case 8087:
	case 8185:
	case 8376:
		str="dan";
		break;
	case 5852:
	case 5942:
	case 6148:
	case 6920:
	case 7724:
	case 7885:
	case 8141:
		str="dang";
		break;
	case 6322:
	case 6665:
	case 7514:
	case 8478:
		str="dao";
		break;
	case 7929:
		str="de";
		break;
	case 6466:
	case 6556:
	case 7413:
	case 7767:
	case 7975:
	case 8403:
		str="deng";
		break;
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
	case 8730:
		str="di";
		break;
	case 6439:
		str="dia";
		break;
	case 5871:
	case 5967:
	case 6559:
	case 7172:
	case 7868:
	case 8116:
	case 8118:
	case 8401:
	case 8558:
		str="dian";
		break;
	case 7886:
	case 8585:
	case 8684:
		str="diao";
		break;
	case 5976:
	case 6006:
	case 6273:
	case 6409:
	case 7526:
	case 8012:
	case 8183:
	case 8562:
	case 8688:
		str="die";
		break;
	case 5674:
	case 6404:
	case 7164:
	case 7575:
	case 7754:
	case 7814:
	case 8059:
	case 8184:
	case 8490:
		str="ding";
		break;
	case 7891:
		str="diu";
		break;
	case 5977:
	case 6343:
	case 6520:
	case 6528:
	case 7517:
	case 7543:
	case 7556:
	case 7747:
	case 8020:
		str="dong";
		break;
	case 6190:
	case 8128:
	case 8229:
	case 8391:
		str="dou";
		break;
	case 6022:
	case 6429:
	case 6834:
	case 7292:
	case 7525:
	case 8328:
	case 8338:
	case 8739:
	case 8782:
		str="du";
		break;
	case 7318:
	case 7649:
	case 8393:
		str="duan";
		break;
	case 7701:
	case 7713:
	case 7752:
		str="dui";
		break;
	case 6771:
	case 7632:
	case 7727:
	case 7766:
	case 7779:
	case 7970:
	case 8527:
		str="dun";
		break;
	case 6345:
	case 6365:
	case 6785:
	case 7122:
	case 7876:
	case 8154:
	case 8566:
		str="duo";
		break;
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
	case 8689:
		str="e";
		break;
	case 6176:
	case 6284:
		str="en";
		break;
	case 5706:
	case 6939:
	case 7177:
	case 7879:
	case 8025:
	case 8660:
		str="er";
		break;
	case 5950:
	case 7732:
		str="fa";
		break;
	case 6212:
	case 6232:
	case 6506:
	case 7283:
	case 7660:
	case 7818:
	case 8576:
		str="fan";
		break;
	case 5890:
	case 7242:
	case 7853:
	case 8419:
	case 8648:
		str="fang";
		break;
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
	case 8678:
		str="fei";
		break;
	case 5739:
	case 6915:
	case 7291:
	case 8687:
	case 8787:
		str="fen";
		break;
	case 5726:
	case 5926:
	case 6155:
	case 6384:
	case 6767:
	case 7731:
		str="feng";
		break;
		str="fo";
		break;
	case 8330:
		str="fou";
		break;
	case 5775:
	case 5776:
	case 5914:
	case 6029:
	case 6062:
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
	case 8691:
		str="fu";
		break;
	case 6246:
	case 7056:
	case 7057:
	case 7424:
	case 7837:
		str="ga";
		break;
	case 5604:
	case 5875:
	case 5982:
	case 7414:
	case 7464:
		str="gai";
		break;
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
	case 8491:
		str="gan";
		break;
	case 7716:
	case 7824:
	case 8364:
		str="gang";
		break;
	case 5626:
	case 5830:
	case 5912:
	case 6227:
	case 7141:
	case 7332:
	case 7334:
	case 7429:
	case 7915:
		str="gao";
		break;
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
	case 8732:
		str="ge";
		break;
		str="gei";
		break;
	case 5608:
	case 6102:
	case 6371:
	case 8462:
		str="gen";
		break;
	case 6376:
	case 6657:
	case 7114:
	case 8665:
		str="geng";
		break;
	case 7178:
	case 7537:
	case 8228:
	case 8601:
		str="gong";
		break;
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
	case 8724:
		str="gou";
		break;
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
	case 8729:
		str="gu";
		break;
	case 5652:
	case 5820:
	case 6341:
	case 7273:
	case 7550:
	case 8027:
		str="gua";
		break;
		str="guai";
		break;
	case 5736:
	case 6124:
	case 6272:
	case 6842:
	case 7834:
	case 8057:
	case 8170:
	case 8704:
		str="guan";
		break;
	case 6359:
	case 6578:
	case 7270:
	case 7555:
		str="guang";
		break;
	case 5648:
	case 5659:
	case 6649:
	case 7003:
	case 7277:
	case 7433:
	case 7448:
	case 8007:
	case 8394:
	case 8657:
	case 8712:
		str="gui";
		break;
	case 5782:
	case 7121:
	case 7762:
	case 8671:
		str="gun";
		break;
	case 5769:
	case 6266:
	case 6335:
	case 6494:
	case 6538:
	case 6603:
	case 7304:
	case 7529:
	case 8188:
	case 8268:
	case 8269:
		str="guo";
		break;
	case 7894:
		str="ha";
		break;
	case 6443:
	case 7560:
	case 8516:
		str="hai";
		break;
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
	case 8793:
		str="han";
		break;
	case 6776:
	case 7112:
	case 8194:
		str="hang";
		break;
	case 6179:
	case 6222:
	case 6438:
	case 6467:
	case 6909:
	case 6916:
	case 7427:
	case 8009:
	case 8211:
	case 8226:
		str="hao";
		break;
	case 5813:
	case 5932:
	case 5954:
	case 6432:
	case 6756:
	case 7434:
	case 7833:
	case 8202:
	case 8234:
	case 8471:
		str="he";
		break;
		str="hei";
		break;
		str="hen";
		break;
	case 6231:
	case 7181:
	case 7276:
		str="heng";
		break;
	case 5768:
	case 5774:
	case 5807:
	case 6106:
	case 6214:
	case 6216:
	case 6740:
	case 6792:
		str="hong";
		break;
	case 6009:
	case 6565:
	case 6943:
	case 8090:
	case 8383:
	case 8455:
	case 8655:
	case 8731:
		str="hou";
		break;
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
	case 8343:
	case 8513:
	case 8590:
		str="hu";
		break;
	case 7072:
	case 7275:
	case 7725:
	case 7892:
		str="hua";
		break;
	case 8555:
		str="huai";
		break;
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
	case 8763:
		str="huan";
		break;
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
	case 8692:
		str="huang";
		break;
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
	case 8766:
		str="hui";
		break;
	case 5827:
	case 6638:
	case 6752:
	case 6867:
		str="hun";
		break;
	case 5669:
	case 6229:
	case 6311:
	case 6475:
	case 6623:
	case 7856:
	case 7933:
	case 7976:
	case 8175:
	case 8322:
		str="huo";
		break;
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
	case 8611:
	case 8661:
	case 8674:
	case 8757:
	case 8768:
		str="ji";
		break;
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
	case 8542:
		str="jia";
		break;
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
	case 8721:
		str="jian";
		break;
	case 6092:
	case 6814:
	case 7113:
	case 7154:
	case 7481:
	case 7768:
	case 8180:
	case 8461:
	case 8488:
		str="jiang";
		break;
	case 5714:
	case 5753:
	case 6020:
	case 6090:
	case 6256:
	case 6461:
	case 6572:
	case 7015:
	case 7524:
	case 8008:
	case 8052:
	case 8252:
	case 8520:
	case 8551:
	case 8662:
		str="jiao";
		break;
	case 5806:
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
	case 8726:
		str="jie";
		break;
	case 5865:
	case 6103:
	case 6132:
	case 6468:
	case 6643:
	case 6659:
	case 7138:
	case 7210:
	case 7340:
	case 7465:
	case 7478:
	case 8138:
		str="jin";
		break;
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
	case 7626:
		str="jiang";
		break;
	case 6936:
	case 7671:
		str="jiong";
		break;
	case 5754:
	case 6417:
	case 6746:
	case 7249:
	case 7274:
	case 8015:
	case 8053:
	case 8481:
	case 8761:
		str="jiu";
		break;
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
	case 8722:
		str="ju";
		break;
	case 5918:
	case 6590:
	case 6824:
	case 7280:
	case 7835:
	case 7935:
	case 7952:
	case 8633:
		str="juan";
		break;
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
	case 8591:
		str="jue";
		break;
	case 6260:
	case 8168:
	case 8362:
	case 8769:
		str="jun";
		break;
	case 5671:
	case 6339:
	case 7544:
		str="ka";
		break;
	case 5660:
	case 5978:
	case 6160:
	case 6673:
	case 6693:
	case 7888:
	case 7920:
	case 7939:
		str="kai";
		break;
	case 5709:
	case 6108:
	case 7412:
	case 7772:
	case 7811:
		str="kan";
		break;
	case 5688:
	case 6742:
	case 7854:
		str="kang";
		break;
	case 6974:
	case 7264:
	case 7491:
	case 7877:
		str="kao";
		break;
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
	case 8733:
		str="ke";
		break;
	case 8144:
		str="ken";
		break;
	case 7912:
		str="keng";
		break;
	case 5737:
	case 6539:
	case 8377:
		str="kong";
		break;
	case 6050:
	case 6202:
	case 6321:
	case 7778:
	case 8356:
		str="kou";
		break;
	case 5658:
	case 6005:
	case 6423:
	case 7111:
	case 8728:
		str="ku";
		break;
	case 5708:
		str="kua";
		break;
	case 5665:
	case 5906:
	case 6364:
	case 6586:
	case 7558:
		str="kuai";
		break;
	case 8737:
		str="kuan";
		break;
	case 5818:
	case 5831:
	case 5887:
	case 5959:
	case 6237:
	case 6349:
	case 7094:
	case 7460:
		str="kuang";
		break;
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
	case 8606:
	case 8743:
		str="kui";
		break;
	case 6204:
	case 6245:
	case 6458:
	case 6618:
	case 6928:
	case 7152:
	case 7841:
	case 8051:
		str="liao";
		break;
	case 5793:
	case 5988:
	case 6270:
	case 6354:
	case 6803:
	case 8483:
	case 8581:
	case 8764:
		str="lie";
		break;
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
	case 8775:
		str="lin";
		break;
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
	case 8676:
		str="ling";
		break;
	case 6815:
	case 6962:
	case 7082:
	case 7124:
	case 7628:
	case 7654:
	case 7919:
	case 7954:
	case 8050:
	case 8644:
		str="liu";
		break;
	case 5966:
	case 6055:
	case 6781:
	case 7171:
	case 7248:
	case 7542:
	case 7735:
	case 8110:
		str="long";
		break;
	case 5745:
	case 6168:
	case 6422:
	case 6548:
	case 7946:
	case 8092:
	case 8179:
	case 8287:
	case 8735:
		str="lou";
		break;
	case 6744:
	case 7321:
	case 7586:
	case 7918:
	case 7989:
	case 8158:
		str="lu";
		break;
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
	case 8652:
		str="lu";
		break;
	case 5785:
	case 7014:
	case 7279:
	case 8029:
	case 8639:
		str="luan";
		break;
		str="l¨µe";
		break;
		str="lun";
		break;
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
	case 8635:
		str="luo";
		break;
	case 6328:
		str="mu";
		break;
	case 6373:
	case 6579:
	case 7054:
	case 7231:
	case 8301:
		str="ma";
		break;
	case 5929:
	case 6104:
	case 8618:
		str="mai";
		break;
	case 6012:
	case 6503:
	case 7147:
	case 7655:
	case 7960:
	case 8209:
	case 8293:
	case 8709:
	case 8720:
		str="man";
		break;
	case 5888:
	case 6861:
	case 7743:
	case 8294:
		str="mang";
		break;
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
	case 8754:
		str="mao";
		break;
	case 6114:
	case 6550:
	case 6613:
	case 6828:
	case 6856:
	case 7325:
	case 7949:
	case 8044:
	case 8139:
	case 8740:
		str="mei";
		break;
	case 6249:
	case 7643:
	case 7715:
	case 7845:
		str="men";
		break;
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
	case 8431:
		str="meng";
		break;
	case 5634:
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
	case 8771:
		str="mi";
		break;
	case 6770:
	case 6837:
	case 6847:
	case 7579:
	case 7777:
		str="mian";
		break;
	case 6387:
	case 6967:
	case 7131:
	case 7149:
	case 7234:
	case 7721:
	case 7780:
	case 8037:
		str="miao";
		break;
	case 5631:
	case 6367:
	case 8326:
	case 8390:
		str="mie";
		break;
	case 6069:
	case 6526:
	case 6741:
	case 6793:
	case 7137:
	case 7168:
	case 7175:
	case 7710:
	case 8710:
	case 8628:
		str="min";
		break;
	case 5804:
	case 6088:
	case 6873:
	case 7452:
	case 7808:
	case 8504:
		str="ming";
		break;
		str="miu";
		break;
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
	case 8765:
		str="mo";
		break;
	case 5716:
	case 6372:
	case 7788:
	case 8254:
	case 8290:
	case 8642:
		str="mou";
		break;
	case 5679:
	case 5973:
	case 6057:
	case 6769:
	case 7504:
	case 7866:
		str="mu";
		break;
	case 6437:
		str="en";
		break;
	case 6264:
	case 7539:
	case 7953:
	case 8136:
		str="na";
		break;
	case 5630:
	case 6021:
	case 6133:
	case 7245:
		str="nai";
		break;
	case 6411:
	case 6478:
	case 6479:
	case 7310:
	case 7578:
	case 8279:
	case 8486:
		str="nan";
		break;
	case 6313:
	case 6476:
	case 6646:
	case 7457:
		str="nang";
		break;
	case 5611:
	case 5981:
	case 6346:
	case 6614:
	case 7207:
	case 7748:
	case 7883:
	case 8245:
		str="nao";
		break;
	case 5811:
		str="ne";
		break;
		str="nei";
		break;
	case 7705:
		str="nen";
		break;
		str="neng";
		break;
	case 5703:
	case 5972:
	case 6605:
	case 6685:
	case 7439:
	case 7627:
	case 7711:
	case 7794:
	case 7874:
	case 8682:
		str="ni";
		break;
	case 5605:
	case 5994:
	case 7393:
	case 8004:
	case 8651:
	case 8683:
		str="nian";
		break;
		str="niang";
		break;
	case 6064:
	case 7053:
	case 7569:
	case 8433:
		str="niao";
		break;
	case 5877:
	case 6233:
	case 6431:
	case 8208:
	case 8411:
	case 8570:
		str="nie";
		break;
		str="nin";
		break;
	case 5690:
	case 6344:
	case 6924:
	case 8187:
		str="ning";
		break;
	case 6580:
	case 6678:
	case 7004:
		str="niu";
		break;
	case 5715:
	case 6370:
		str="nong";
		break;
	case 8181:
		str="nou";
		break;
	case 6983:
	case 7032:
	case 7059:
	case 7069:
		str="nu";
		break;
	case 7704:
	case 7847:
	case 8412:
		str="nu";
		break;
		str="nuan";
		break;
		str="nue";
		break;
	case 5748:
	case 6289:
	case 6386:
	case 7927:
		str="nuo";
		break;
	case 6424:
	case 6462:
		str="o";
		break;
	case 5809:
	case 6670:
	case 7417:
	case 8178:
		str="ou";
		break;
	case 6166:
	case 7243:
	case 8365:
		str="pa";
		break;
	case 5729:
	case 6169:
	case 6363:
		str="pai";
		break;
	case 6761:
	case 6790:
	case 8140:
	case 8165:
	case 8320:
	case 8571:
		str="pan";
		break;
	case 6561:
	case 6872:
	case 6944:
	case 8306:
		str="pang";
		break;
	case 6243:
	case 6583:
	case 6650:
	case 7567:
	case 8069:
		str="pao";
		break;
	case 6446:
	case 6490:
	case 7623:
	case 7934:
	case 8512:
	case 8612:
		str="pei";
		break;
	case 6852:
		str="pen";
		break;
	case 6001:
	case 6456:
	case 6681:
	case 8318:
		str="peng";
		break;
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
	case 8589:
		str="pi";
		break;
	case 5850:
	case 7073:
	case 7490:
	case 7561:
	case 8470:
	case 8568:
		str="pian";
		break;
	case 5666:
	case 6449:
	case 7046:
	case 7146:
	case 7372:
	case 7809:
	case 8310:
		str="piao";
		break;
	case 6054:
	case 7513:
		str="pie";
		break;
	case 7041:
	case 6253:
	case 7016:
	case 7315:
	case 7482:
	case 8213:
		str="pin";
		break;
	case 5723:
	case 7019:
	case 7250:
	case 8650:
		str="ping";
		break;
	case 5647:
	case 5922:
	case 7174:
	case 7839:
	case 7862:
	case 8011:
	case 8345:
		str="po";
		break;
	case 5786:
	case 6269:
		str="pou";
		break;
	case 5773:
	case 6459:
	case 6863:
	case 6907:
	case 7217:
	case 7511:
	case 7968:
	case 7972:
	case 8575:
		str="pu";
		break;
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
	case 8772:
		str="qi";
		break;
	case 6154:
	case 8736:
		str="qia";
		break;
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
	case 8373:
		str="qian";
		break;
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
	case 8536:
		str="qiang";
		break;
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
	case 8719:
		str="qiao";
		break;
	case 5907:
	case 6711:
	case 7010:
	case 7492:
	case 7938:
	case 8370:
		str="qie";
		break;
	case 6043:
	case 6276:
	case 6336:
	case 6426:
	case 6463:
	case 6858:
	case 7353:
	case 7923:
	case 8291:
	case 8432:
		str="qin";
		break;
	case 6060:
	case 6485:
	case 7349:
	case 7764:
	case 8263:
	case 8332:
	case 8368:
	case 8605:
	case 8675:
	case 8784:
		str="qing";
		break;
	case 5886:
	case 6068:
	case 8123:
	case 8243:
	case 8344:
	case 8528:
	case 8638:
		str="qiong";
		break;
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
	case 8792:
		str="qiu";
		break;
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
	case 8781:
		str="qu";
		break;
	case 5825:
	case 6085:
	case 6710:
	case 7125:
	case 7390:
	case 7816:
	case 7893:
	case 8273:
	case 8360:
	case 8760:
		str="quan";
		break;
	case 6755:
	case 6758:
	case 7708:
		str="que";
		break;
	case 6950:
		str="qun";
		break;
	case 6059:
	case 8237:
	case 8755:
		str="ran";
		break;
	case 7692:
	case 8006:
		str="rang";
		break;
	case 6073:
	case 7012:
	case 7267:
		str="rao";
		break;
		str="re";
		break;
	case 5680:
	case 6083:
	case 6156:
	case 6631:
	case 7377:
	case 7994:
	case 8137:
		str="ren";
		break;
		str="reng";
		break;
		str="ri";
		break;
	case 6541:
	case 6585:
	case 7337:
	case 7532:
	case 8278:
		str="rong";
		break;
	case 8459:
	case 8569:
	case 8723:
		str="rou";
		break;
	case 6174:
	case 6224:
	case 6473:
	case 6818:
	case 6865:
	case 6906:
	case 7140:
	case 7908:
	case 8164:
	case 8212:
		str="ru";
		break;
	case 7535:
		str="ruan";
		break;
	case 6039:
	case 6208:
	case 7236:
	case 7803:
	case 8224:
		str="rui";
		break;
		str="run";
		break;
	case 5728:
	case 8372:
		str="ruo";
		break;
	case 5606:
	case 5677:
	case 7493:
	case 7559:
	case 7610:
		str="sa";
		break;
	case 6471:
		str="sai";
		break;
	case 6644:
	case 7507:
	case 8454:
		str="san";
		break;
	case 6290:
	case 7763:
	case 8210:
		str="sang";
		break;
	case 6003:
	case 7150:
	case 7156:
	case 7593:
	case 8094:
	case 8694:
		str="sao";
		break;
		str="se";
		break;
		str="sen";
		break;
		str="seng";
		break;
	case 6394:
	case 7606:
	case 7901:
	case 8080:
	case 8436:
	case 8614:
	case 8672:
		str="sha";
		break;
	case 8507:
		str="shai";
		break;
	case 5663:
	case 5808:
	case 5923:
	case 5979:
	case 6047:
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
	case 8713:
		str="shan";
		break;
	case 5980:
	case 7120:
	case 7368:
	case 7656:
	case 8592:
		str="shang";
		break;
	case 5931:
	case 6070:
	case 6891:
	case 7228:
	case 8366:
	case 8425:
		str="shao";
		break;
	case 5639:
	case 5760:
	case 6606:
	case 6860:
	case 7608:
	case 7820:
	case 8774:
		str="she";
		break;
	case 5837:
	case 6123:
	case 6351:
	case 6841:
	case 7309:
	case 7547:
	case 7982:
	case 8255:
		str="shen";
		break;
	case 6551:
	case 7441:
	case 7782:
	case 8347:
		str="sheng";
		break;
	case 5854:
	case 5985:
	case 6110:
	case 6173:
	case 6317:
	case 7388:
	case 7459:
	case 7634:
	case 7870:
	case 8307:
	case 8334:
	case 8363:
	case 8525:
	case 8669:
	case 8685:
		str="shi";
		break;
	case 6587:
	case 7123:
	case 8428:
		str="shou";
		break;
	case 5731:
	case 5951:
	case 6136:
	case 6283:
	case 6780:
	case 6888:
	case 7013:
	case 7508:
	case 7582:
	case 7988:
		str="shu";
		break;
	case 6407:
		str="shua";
		break;
	case 8316:
		str="shuai";
		break;
	case 6737:
	case 6844:
		str="shuan";
		break;
	case 7055:
		str="shuang";
		break;
		str="shui";
		break;
		str="shun";
		break;
	case 6184:
	case 6287:
	case 6989:
	case 7335:
	case 7869:
		str="shuo";
		break;
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
	case 7675:
	case 7940:
	case 8024:
	case 8174:
	case 8247:
	case 8351:
		str="si";
		break;
	case 5801:
	case 6131:
	case 6534:
	case 6552:
	case 6676:
	case 6704:
	case 6833:
	case 8121:
		str="song";
		break;
	case 5937:
	case 6220:
	case 6418:
	case 6453:
	case 6640:
	case 6849:
	case 7612:
	case 7804:
	case 7943:
	case 8284:
		str="sou";
		break;
	case 5777:
	case 5853:
	case 6188:
	case 6428:
	case 6726:
	case 6819:
	case 8389:
	case 8602:
	case 8653:
		str="su";
		break;
	case 6601:
		str="suan";
		break;
	case 5839:
	case 6120:
	case 6901:
	case 6968:
	case 7661:
	case 7785:
	case 7801:
		str="sui";
		break;
	case 6105:
	case 6588:
	case 6624:
	case 7330:
	case 8632:
		str="sun";
		break;
	case 6379:
	case 6434:
	case 6442:
	case 7022:
	case 7288:
	case 7792:
	case 8440:
		str="suo";
		break;
	case 6743:
	case 6866:
	case 6961:
	case 7329:
	case 7719:
	case 7872:
	case 8533:
	case 8703:
		str="ta";
		break;
	case 5902:
	case 6223:
	case 6330:
	case 7070:
	case 7536:
	case 7638:
	case 7849:
	case 8544:
	case 8656:
		str="tai";
		break;
	case 5916:
	case 6903:
	case 7428:
	case 7694:
	case 7867:
	case 7936:
	case 8191:
		str="tan";
		break;
	case 5746:
	case 6491:
	case 6871:
	case 7209:
	case 7344:
	case 7906:
	case 7959:
	case 8177:
	case 8305:
	case 8311:
	case 8442:
	case 8517:
		str="tang";
		break;
	case 5627:
	case 6391:
	case 6812:
	case 7226:
	case 7666:
		str="tao";
		break;
		str="1845 ²Í";
		break;
	case 6315:
	case 7693:
	case 7911:
		str="te";
		break;
	case 7588:
		str="teng";
		break;
	case 5735:
	case 6709:
	case 6949:
	case 7130:
	case 8035:
	case 8151:
	case 8514:
		str="ti";
		break;
	case 6261:
	case 6735:
	case 6757:
	case 7369:
	case 7817:
		str="tian";
		break;
	case 5712:
	case 7686:
	case 8127:
	case 8272:
	case 8352:
	case 8448:
	case 8622:
	case 8670:
	case 8756:
		str="tiao";
		break;
	case 6138:
	case 8749:
		str="tie";
		break;
	case 6080:
	case 6167:
	case 7035:
	case 7272:
	case 7890:
	case 8249:
	case 8610:
		str="ting";
		break;
	case 5701:
	case 5758:
	case 6077:
	case 6444:
	case 6690:
	case 6892:
	case 7737:
		str="tong";
		break;
	case 7855:
	case 7822:
	case 8727:
		str="tou";
		break;
	case 6002:
	case 6117:
	case 6143:
	case 7842:
	case 8509:
		str="tu";
		break;
	case 6250:
	case 6972:
		str="tuan";
		break;
	case 7653:
		str="tui";
		break;
	case 5759:
	case 6629:
	case 7453:
	case 7564:
		str="tun";
		break;
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
	case 8630:
		str="tuo";
		break;
	case 5684:
	case 7020:
	case 7580:
		str="wa";
		break;
		str="wai";
		break;
	case 5664:
	case 6025:
	case 6150:
	case 7093:
	case 7126:
	case 7194:
	case 7568:
	case 7821:
	case 8274:
		str="wan";
		break;
	case 5672:
	case 6244:
	case 6715:
	case 7394:
	case 8745:
		str="wang";
		break;
	case 5743:
	case 5835:
	case 5881:
	case 5883:
	case 6158:
	case 6217:
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
	case 8659:
		str="wei";
		break;
	case 5656:
	case 6751:
	case 6775:
	case 7223:
	case 8609:
		str="wen";
		break;
	case 6178:
	case 6219:
		str="weng";
		break;
	case 5733:
	case 6111:
	case 6502:
	case 6855:
	case 7531:
	case 7750:
	case 8627:
		str="wo";
		break;
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
	case 8789:
		str="wu";
		break;
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
	case 8791:
		str="xi";
		break;
	case 6340:
	case 6582:
	case 6958:
	case 7206:
	case 7252:
	case 7744:
	case 8093:
	case 8333:
	case 8779:
		str="xia";
		break;
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
	case 8617:
		str="xian";
		break;
	case 6028:
	case 6157:
	case 6635:
	case 6652:
	case 7088:
	case 7129:
	case 8313:
	case 8663:
	case 8747:
		str="xiang";
		break;
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
	case 8744:
		str="xiao";
		break;
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
	case 8583:
		str="xie";
		break;
	case 5622:
	case 6016:
	case 7431:
	case 7607:
	case 8646:
		str="xin";
		break;
	case 5874:
	case 6084:
	case 6309:
	case 6712:
	case 7742:
		str="xing";
		break;
	case 6026:
		str="xiong";
		break;
	case 6361:
	case 6522:
	case 6642:
	case 6651:
	case 6869:
	case 8028:
	case 8587:
	case 8759:
		str="xiu";
		break;
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
	case 8515:
		str="xu";
		break;
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
	case 8071:
		str="xuan";
		break;
	case 5842:
	case 7720:
	case 8529:
	case 8708:
		str="xue";
		break;
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
	case 7454:
	case 8131:
	case 8524:
	case 8664:
		str="xun";
		break;
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
	case 8073:
		str="ya";
		break;
	case 5641:
	case 5645:
	case 5718:
	case 5740:
	case 5780:
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
	case 8790:
		str="yan";
		break;
	case 6564:
	case 6683:
	case 7630:
	case 7640:
	case 7706:
	case 8253:
	case 8717:
		str="yang";
		break;
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
	case 8705:
		str="yao";
		break;
	case 5644:
	case 5843:
	case 5894:
	case 6262:
	case 7442:
	case 7639:
	case 7884:
		str="ye";
		break;
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
	case 8270:
	case 8415:
	case 8464:
	case 8472:
	case 8493:
	case 8780:
		str="yi";
		break;
	case 5623:
	case 5920:
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
	case 8624:
		str="yin";
		break;
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
	case 8331:
		str="ying";
		break;
	case 6401:
		str="yo";
		break;
	case 5724:
	case 5953:
	case 6013:
	case 6415:
	case 6728:
	case 7163:
	case 7962:
	case 8014:
	case 8711:
	case 8751:
		str="yong";
		break;
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
	case 8788:
		str="you";
		break;
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
	case 8625:
		str="yu";
		break;
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
	case 8629:
		str="yuan";
		break;
	case 5763:
	case 6914:
	case 7348:
	case 7530:
	case 7865:
		str="yue";
		break;
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
	case 7657:
		str="yun";
		break;
	case 6257:
	case 6338:
		str="za";
		break;
	case 6544:
	case 7162:
		str="zai";
		break;
	case 7222:
	case 7435:
	case 8402:
	case 8456:
	case 8485:
	case 8641:
		str="zan";
		break;
	case 6242:
	case 7064:
	case 7416:
		str="zang";
		break;
	case 6380:
		str="zao";
		break;
	case 5638:
	case 8369:
	case 5651:
	case 6385:
	case 6493:
	case 6937:
	case 7430:
	case 8348:
	case 8423:
		str="ze";
		break;
		str="zei";
		break;
	case 5858:
		str="zen";
		break;
	case 7153:
	case 7421:
	case 7832:
	case 7913:
		str="zeng";
		break;
	case 6610:
	case 6274:
	case 6324:
	case 6369:
	case 6378:
	case 7736:
	case 8068:
	case 8238:
	case 8794:
		str="zha";
		break;
	case 7746:
	case 8109:
		str="zhai";
		break;
	case 5862:
	case 6288:
	case 7625:
		str="zhan";
		break;
	case 5675:
	case 5921:
	case 6504:
	case 6554:
	case 6615:
	case 7049:
	case 7216:
	case 8315:
		str="zhang";
		break;
	case 5815:
	case 7294:
	case 7840:
	case 8341:
		str="zhao";
		break;
	case 5856:
	case 6301:
	case 7247:
	case 7392:
	case 7761:
	case 8049:
	case 8162:
	case 8256:
	case 8487:
		str="zhe";
		break;
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
	case 8380:
		str="zhen";
		break;
	case 5826:
	case 6531:
	case 6571:
	case 7859:
	case 7903:
	case 8361:
		str="zheng";
		break;
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
	case 8603:
		str="zhi";
		break;
	case 5803:
	case 7981:
	case 8314:
	case 8417:
	case 8564:
		str="zhong";
		break;
	case 6107:
	case 6390:
	case 7008:
	case 7091:
	case 7107:
	case 7548:
	case 7756:
	case 8406:
	case 8492:
		str="zhou";
		break;
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
	case 8770:
		str="zhu";
		break;
		str="zhua";
		break;
		str="zhuai";
		break;
	case 6389:
	case 6645:
	case 8207:
		str="zhuan";
		break;
	case 5755:
		str="zhuang";
		break;
	case 6723:
	case 7077:
	case 7136:
		str="zhui";
		break;
	case 7538:
	case 8124:
		str="zhun";
		break;
	case 5730:
	case 5834:
	case 6310:
	case 6823:
	case 6835:
	case 6910:
	case 7644:
	case 7690:
	case 7729:
	case 7977:
		str="zhuo";
		break;
	case 5849:
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
	case 8758:
		str="zi";
		break;
	case 5744:
	case 7574:
	case 8453:
		str="zong";
		break;
	case 5833:
	case 5878:
	case 5924:
	case 7067:
	case 8677:
		str="zou";
		break;
	case 5762:
	case 6147:
	case 7963:
		str="zu";
		break;
	case 6312:
	case 7158:
	case 8582:
		str="zuan";
		break;
	case 6209:
		str="zui";
		break;
	case 6304:
	case 7355:
	case 8714:
		str="zun";
		break;
	case 5872:
	case 6382:
	case 6460:
	case 6684:
	case 7549:
	case 7681:
		str="zuo";
		break;
	default:
		if(code>=1601 && code<=1602)
		{
			str="a";
			break;
		}
		if(code>=1603 && code<=1615)
		{
			str="ai";
			break;
		}
		if(code>=1616 && code<=1624)
		{
			str="an";
			break;
		}
		if(code>=1625 && code<=1627)
		{
			str="ang";
			break;
		}
		if(code>=1628 && code<=1636)
		{
			str="ao";
			break;
		}
		if(code>=1637 && code<=1654)
		{
			str="ba";
			break;
		}
		if(code>=1655 && code<=1662)
		{
			str="bai";
			break;
		}
		if(code>=1663 && code<=1677)
		{
			str="ban";
			break;
		}
		if(code>=1678 && code<=1689)
		{
			str="bang";
			break;
		}
		if(code>=1690 && code<=1712)
		{
			str="bao";
			break;
		}
		if(code>=1713 && code<=1727)
		{
			str="bei";
			break;
		}
		if(code>=1728 && code<=1731)
		{
			str="ben";
			break;
		}
		if(code>=1732 && code<=1737)
		{
			str="beng";
			break;
		}
		if(code>1738 && code<=1761)
		{
			str="bi";
			break;
		}
		if(code>=1762 && code<=1773)
		{
			str="bian";
			break;
		}
		if(code>=1774 && code<=1777)
		{
			str="biao";
			break;
		}
		if(code>=1778 && code<=1781)
		{
			str="bie";
			break;
		}
		if(code>=1782 && code<=1787)
		{
			str="bin";
			break;
		}
		if(code>=1788 && code<=1794)
		{
			str="bing";
			break;
		}
		if(code>=1801 && code<=1802)
		{
			str="bing";
			break;
		}
		if(code>=1803 && code<=1821)
		{
			str="bo";
			break;
		}
		if(code>=1822 && code<=1832)
		{
			str="bu";
			break;
		}
		if(code==1833)
		{
			str="ca";
			break;
		}
		if(code>=1834 && code<=1844)
		{
			str="cai";
			break;
		}
		if(code>=1845 && code<=1851)
		{
			str="can";
			break;
		}
		if(code>=1852 && code<=1856)
		{
			str="cang";
			break;
		}
		if(code>=1857 && code<=1861)
		{
			str="cao";
			break;
		}
		if(code>=1862 && code<=1866)
		{
			str="ce";
			break;
		}
		if(code>=1867 && code<=1868)
		{
			str="ceng";
			break;
		}
		if(code>=1869 && code<=1879)
		{
			str="cha";
			break;
		}
		if(code>=1880 && code<=1882)
		{
			str="chai";
			break;
		}
		if(code>=1883 && code<=1892)
		{
			str="chan";
			break;
		}
		if(code>=1893 && code<=1911)
		{
			str="chang";
			break;
		}
		if(code>=1912 && code<=1920)
		{
			str="chao";
			break;
		}
		if(code>=1921 && code<=1926)
		{
			str="che";
			break;
		}
		if(code>=1927 && code<=1936)
		{
			str="chen";
			break;
		}
		if(code>=1937 && code<=1951)
		{
			str="cheng";
			break;
		}
		if(code>=1952 && code<=1967)
		{
			str="chi";
			break;
		}
		if(code>=1968 && code<=1972)
		{
			str="chong";
			break;
		}
		if(code>=1973 && code<=1984)
		{
			str="chou";
			break;
		}
		if(code>=1985 && code<=2006)
		{
			str="chu";
			break;
		}
		if(code==2007)
		{
			str="chuai";
			break;
		}
		if(code>=2008 && code<=2014)
		{
			str="chuan";
			break;
		}
		if(code>=2015 && code<=2020)
		{
			str="chuang";
			break;
		}
		if(code>=2021 && code<=2025)
		{
			str="chui";
			break;
		}
		if(code>=2026 && code<=2032)
		{
			str="chun";
			break;
		}
		if(code>=2033 && code<=2034)
		{
			str="chuo";
			break;
		}
		if(code>=2035 && code<=2046)
		{
			str="ci";
			break;
		}
		if(code>=2047 && code<=2052)
		{
			str="cong";
			break;
		}
		if(code>=2054 && code<=2057)
		{
			str="cu";
			break;
		}
		if(code>=2058 && code<=2060)
		{
			str="cuan";
			break;
		}
		if(code>=2061 && code<=2068)
		{
			str="cui";
			break;
		}
		if(code>=2069 && code<=2071)
		{
			str="cun";
			break;
		}
		if(code>=2072 && code<=2077)
		{
			str="cuo";
			break;
		}
		if(code>=2078 && code<=2083)
		{
			str="da";
			break;
		}
		if(code>=2084 && code<=2094)
		{
			str="dai";
			break;
		}
		if(code>=2102 && code<=2116)
		{
			str="dan";
			break;
		}
		if(code>=2117 && code<=2121)
		{
			str="dang";
			break;
		}
		if(code>=2122 && code<=2133)
		{
			str="dao";
			break;
		}
		if(code>=2134 && code<=2136)
		{
			str="de";
			break;
		}
		if(code>=2137 && code<=2143)
		{
			str="deng";
			break;
		}
		if(code>=2144 && code<=2162)
		{
			str="di";
			break;
		}
		if(code>=2163 && code<=2178)
		{
			str="dian";
			break;
		}
		if(code>=2179 && code<=2187)
		{
			str="diao";
			break;
		}
		if(code>=2188 && code<=2194)
		{
			str="die";
			break;
		}
		if(code>=2201 && code<=2209)
		{
			str="ding";
			break;
		}
		if(code==2210)
		{
			str="diu";
			break;
		}
		if(code>=2211 && code<=2220)
		{
			str="dong";
			break;
		}
		if(code>=2221 && code<=2227)
		{
			str="dou";
			break;
		}
		if(code>=2228 && code<=2242)
		{
			str="du";
			break;
		}
		if(code>=2243 && code<=2248)
		{
			str="duan";
			break;
		}
		if(code>=2249 && code<=2252)
		{
			str="dui";
			break;
		}
		if(code>=2253 && code<=2261)
		{
			str="dun";
			break;
		}
		if(code>=2262 && code<=2273)
		{
			str="duo";
			break;
		}
		if(code>=2274 && code<=2286)
		{
			str="e";
			break;
		}
		if(code==2287)
		{
			str="en";
			break;
		}
		if(code>=2288 && code<=2231)
		{
			str="er";
			break;
		}
		if(code>=2302 && code<=2309)
		{
			str="fa";
			break;
		}
		if(code>=2310 && code<=2326)
		{
			str="fan";
			break;
		}
		if(code>=2327 && code<=2337)
		{
			str="fang";
			break;
		}
		if(code>=2338 && code<=2349)
		{
			str="fei";
			break;
		}
		if(code>=2350 && code<=2364)
		{
			str="fen";
			break;
		}
		if(code>=2365 && code<=2379)
		{
			str="feng";
			break;
		}
		if(code==2380)
		{
			str="fo";
			break;
		}
		if(code==2381)
		{
			str="fou";
			break;
		}
		if(code>=2382 && code<=2432)
		{
			str="fu";
			break;
		}
		if(code>=2435 && code<=2440)
		{
			str="gai";
			break;
		}
		if(code>=2441 && code<=2451)
		{
			str="gan";
			break;
		}
		if(code>=2452 && code<=2460)
		{
			str="gang";
			break;
		}
		if(code>=2461 && code<=2470)
		{
			str="gao";
			break;
		}
		if(code>=2471 && code<=2487)
		{
			str="ge";
			break;
		}
		if(code==2488)
		{
			str="gei";
			break;
		}
		if(code>=2489 && code<=2490)
		{
			str="gen";
			break;
		}
		if(code>=2491 && code<=2503)
		{
			str="geng";
			break;
		}
		if(code>=2504 && code<=2518)
		{
			str="gong";
			break;
		}
		if(code>=2519 && code<=2527)
		{
			str="gou";
			break;
		}
		if(code>=2528 && code<=2545)
		{
			str="gu";
			break;
		}
		if(code>=2546 && code<=2551)
		{
			str="gua";
			break;
		}
		if(code>=2552 && code<=2554)
		{
			str="guai";
			break;
		}
		if(code>=2555 && code<=2565)
		{
			str="guan";
			break;
		}
		if(code>=2566 && code<=2568)
		{
			str="guang";
			break;
		}
		if(code>=2569 && code<=2584)
		{
			str="gui";
			break;
		}
		if(code>=2585 && code<=2587)
		{
			str="gun";
			break;
		}
		if(code>=2588 && code<=2593)
		{
			str="guo";
			break;
		}
		if(code==2594)
		{
			str="ha";
			break;
		}
		if(code>=2601 && code<=2607)
		{
			str="hai";
			break;
		}
		if(code>=2608 && code<=2626)
		{
			str="han";
			break;
		}
		if(code>=2627 && code<=2629)
		{
			str="hang";
			break;
		}
		if(code>=2630 && code<=2638)
		{
			str="hao";
			break;
		}
		if(code>=2639 && code<=2656)
		{
			str="he";
			break;
		}
		if(code>=2657 && code<=2658)
		{
			str="hei";
			break;
		}
		if(code>=2659 && code<=2662)
		{
			str="hen";
			break;
		}
		if(code>=2663 && code<=2667)
		{
			str="heng";
			break;
		}
		if(code>=2668 && code<=2676)
		{
			str="hong";
			break;
		}
		if(code>=2677 && code<=2683)
		{
			str="hou";
			break;
		}
		if(code>=2684 && code<=2707)
		{
			str="hu";
			break;
		}
		if(code>=2708 && code<=2716)
		{
			str="hua";
			break;
		}
		if(code>=2717 && code<=2721)
		{
			str="huai";
			break;
		}
		if(code>=2722 && code<=2735)
		{
			str="huan";
			break;
		}
		if(code>=2736 && code<=2749)
		{
			str="huang";
			break;
		}
		if(code>=2750 && code<=2770)
		{
			str="hui";
			break;
		}
		if(code>=2771 && code<=2776)
		{
			str="hun";
			break;
		}
		if(code>=2777 && code<=2786)
		{
			str="huo";
			break;
		}
		if(code>=2787 && code<=2845)
		{
			str="ji";
			break;
		}
		if(code>=2846 && code<=2862)
		{
			str="jia";
			break;
		}
		if(code>=2863 && code<=2908)
		{
			str="jian";
			break;
		}
		if(code>=2909 && code<=2921)
		{
			str="jiang";
			break;
		}
		if(code>=2922 && code<=2949)
		{
			str="jiao";
			break;
		}
		if(code>=2950 && code<=2976)
		{
			str="jie";
			break;
		}
		if(code>=2977 && code<=3002)
		{
			str="jin";
			break;
		}
		if(code>=3003 && code<=3027)
		{
			str="jing";
			break;
		}
		if(code>=3028 && code<=3029)
		{
			str="jiong";
			break;
		}
		if(code>=3030 && code<=3046)
		{
			str="jiu";
			break;
		}
		if(code>=3047 && code<=3071)
		{
			str="ju";
			break;
		}
		if(code>=3072 && code<=3078)
		{
			str="juan";
			break;
		}
		if(code>=3079 && code<=3088)
		{
			str="jue";
			break;
		}
		if(code>=3089 && code<=3105)
		{
			str="jun";
			break;
		}
		if(code>=3106 && code<=3109)
		{
			str="ka";
			break;
		}
		if(code>=3110 && code<=3114)
		{
			str="kai";
			break;
		}
		if(code>=3115 && code<=3120)
		{
			str="kan";
			break;
		}
		if(code>=3121 && code<=3127)
		{
			str="kang";
			break;
		}
		if(code>=3128 && code<=3131)
		{
			str="kao";
			break;
		}
		if(code>=3132 && code<=3146)
		{
			str="ke";
			break;
		}
		if(code>=3147 && code<=3150)
		{
			str="ken";
			break;
		}
		if(code>=3151 && code<=3152)
		{
			str="keng";
			break;
		}
		if(code>=3153 && code<=3156)
		{
			str="kong";
			break;
		}
		if(code>=3157 && code<=3160)
		{
			str="kou";
			break;
		}
		if(code>=3161 && code<=3167)
		{
			str="ku";
			break;
		}
		if(code>=3168 && code<=3172)
		{
			str="kua";
			break;
		}
		if(code>=3173 && code<=3176)
		{
			str="kuai";
			break;
		}
		if(code>=3177 && code<=3178)
		{
			str="kuan";
			break;
		}
		if(code>=3179 && code<=3186)
		{
			str="kuang";
			break;
		}
		if(code>=3187 && code<=3203)
		{
			str="kui";
			break;
		}
		if(code>=3204 && code<=3207)
		{
			str="kun";
			break;
		}
		if(code>=3208 && code<=3211)
		{
			str="kuo";
			break;
		}
		if(code>=3212 && code<=3218)
		{
			str="la";
			break;
		}
		if(code>=3219 && code<=3221)
		{
			str="lai";
			break;
		}
		if(code>=3222 && code<=3236)
		{
			str="lan";
			break;
		}
		if(code>=3237 && code<=3243)
		{
			str="lang";
			break;
		}
		if(code>=3244 && code<=3252)
		{
			str="lao";
			break;
		}
		if(code>=3253 && code<=3254)
		{
			str="le";
			break;
		}
		if(code>=3255 && code<=3265)
		{
			str="lei";
			break;
		}
		if(code>=3266 && code<=3268)
		{
			str="leng";
			break;
		}
		if(code>=3269 && code<=3308)
		{
			str="li";
		}
		if(code==3309)
		{
			str="lia";
			break;
		}
		if(code>=3310 && code<=3323)
		{
			str="lian";
			break;
		}
		if(code>=3324 && code<=3334)
		{
			str="liang";
			break;
		}
		if(code>=3335 && code<=3347)
		{
			str="liao";
			break;
		}
		if(code>=3348 && code<=3352)
		{
			str="lie";
			break;
		}
		if(code>=3353 && code<=3363)
		{
			str="lin";
			break;
		}
		if(code>=3364 && code<=3378)
		{
			str="ling";
			break;
		}
		if(code>=3379 && code<=3389)
		{
			str="liu";
			break;
		}
		if(code>=3390 && code<=3404)
		{
			str="long";
			break;
		}
		if(code>=3405 && code<=3410)
		{
			str="lou";
			break;
		}
		if(code>=3411 && code<=3444)
		{
			str="lu";
			break;
		}
		if(code>=3445 && code<=3450)
		{
			str="luan";
			break;
		}
		if(code>=3451 && code<=3452)
		{
			str="lue";
			break;
		}
		if(code>=3453 && code<=3459)
		{
			str="lun";
			break;
		}
		if(code>=3460 && code<=3471)
		{
			str="luo";
			break;
		}
		if(code>=3472 && code<=3480)
		{
			str="ma";
			break;
		}
		if(code>=3481 && code<=3486)
		{
			str="mai";
			break;
		}
		if(code>=3487 && code<=3501)
		{
			str="man";
			break;
		}
		if(code>=3502 && code<=3507)
		{
			str="mang";
			break;
		}
		if(code>=3508 && code<=3519)
		{
			str="mao";
			break;
		}
		if(code==3520)
		{
			str="me";
			break;
		}
		if(code>=3521 && code<=3536)
		{
			str="mei";
			break;
		}
		if(code>=3537 && code<=3539)
		{
			str="men";
			break;
		}
		if(code>=3540 && code<=3547)
		{
			str="meng";
			break;
		}
		if(code>=3548 && code<=3561)
		{
			str="mi";
		}
		if(code>=3562 && code<=3570)
		{
			str="mian";
			break;
		}
		if(code>=3571 && code<=3578)
		{
			str="miao";
			break;
		}
		if(code>=3579 && code<=3580)
		{
			str="mie";
			break;
		}
		if(code>=3581 && code<=3586)
		{
			str="min";
			break;
		}
		if(code>=3587 && code<=3592)
		{
			str="ming";
			break;
		}
		if(code==3593)
		{
			str="miu";
			break;
		}
		if(code>=3594 && code<=3616)
		{
			str="mo";
			break;
		}
		if(code>=3617 && code<=3619)
		{
			str="mou";
			break;
		}
		if(code>=3620 && code<=3634)
		{
			str="mu";
			break;
		}
		if(code>=3635 && code<=3641)
		{
			str="na";
			break;
		}
		if(code>=3642 && code<=3646)
		{
			str="nai";
			break;
		}
		if(code>=3647 && code<=3649)
		{
			str="nan";
			break;
		}
		if(code==3650)
		{
			str="nang";
			break;
		}
		if(code>=3651 && code<=3655)
		{
			str="nao";
			break;
		}
		if(code==3656)
		{
			str="ne";
			break;
		}
		if(code>=3657 && code<=3658)
		{
			str="nei";
			break;
		}
		if(code==3659)
		{
			str="nen";
			break;
		}
		if(code==3660)
		{
			str="neng";
			break;
		}
		if(code>=3661 && code<=3671)
		{
			str="ni";
			break;
		}
		if(code>=3672 && code<=3678)
		{
			str="nian";
			break;
		}
		if(code>=3679 && code<=3680)
		{
			str="niang";
			break;
		}
		if(code>=3681 && code<=3682)
		{
			str="niao";
			break;
		}
		if(code>=3683 && code<=3689)
		{
			str="nie";
			break;
		}
		if(code==3690)
		{
			str="nin";
			break;
		}
		if(code>=3691 && code<=3702)
		{
			str="ning";
			break;
		}
		if(code>=3703 && code<=3706)
		{
			str="niu";
			break;
		}
		if(code>=3707 && code<=3710)
		{
			str="nong";
			break;
		}
		if(code>=3711 && code<=3714)
		{
			str="nu";
			break;
		}
		if(code==3715)
		{
			str="nuan";
			break;
		}
		if(code>=3716 && code<=3717)
		{
			str="nue";
			break;
		}
		if(code>=3718 && code<=3721)
		{
			str="nuo";
			break;
		}
		if(code==3722)
		{
			str="o";
			break;
		}
		if(code>=3723 && code<=3729)
		{
			str="ou";
			break;
		}
		if(code>=3730 && code<=3735)
		{
			str="pa";
			break;
		}
		if(code>=3736 && code<=3741)
		{
			str="pai";
			break;
		}
		if(code>=3742 && code<=3749)
		{
			str="pan";
			break;
		}
		if(code>=3750 && code<=3754)
		{
			str="pang";
			break;
		}
		if(code>=3755 && code<=3761)
		{
			str="pao";
			break;
		}
		if(code>=3762 && code<=3770)
		{
			str="pei";
			break;
		}
		if(code>=3771 && code<=3772)
		{
			str="pen";
			break;
		}
		if(code>=3773 && code<=3786)
		{
			str="peng";
			break;
		}
		if(code>=3787 && code<=3809)
		{
			str="pi";
			break;
		}
		if(code>=3810 && code<=3813)
		{
			str="pian";
			break;
		}
		if(code>=3814 && code<=3817)
		{
			str="piao";
			break;
		}
		if(code>=3818 && code<=3819)
		{
			str="pie";
			break;
		}
		if(code>=3820 && code<=3824)
		{
			str="pin";
			break;
		}
		if(code>=3825 && code<=3833)
		{
			str="ping";
			break;
		}
		if(code>=3834 && code<=3841)
		{
			str="po";
			break;
		}
		if(code==3842)
		{
			str="pou";
			break;
		}
		if(code>=3843 && code<=3857)
		{
			str="pu";
			break;
		}
		if(code>=3858 && code<=3893)
		{
			str="qi";
			break;
		}
		if(code==3894||code>=3901 && code<=3902)
		{
			str="qia";
			break;
		}
		if(code>=3903 && code<=3924)
		{
			str="qian";
			break;
		}
		if(code>=3925 && code<=3932)
		{
			str="qiang";
			break;
		}
		if(code>=3933 && code<=3947)
		{
			str="qiao";
			break;
		}
		if(code>=3948 && code<=3952)
		{
			str="qie";
			break;
		}
		if(code>=3953 && code<=3963)
		{
			str="qin";
			break;
		}
		if(code>=3964 && code<=3976)
		{
			str="qing";
			break;
		}
		if(code>=3977 && code<=3978)
		{
			str="qiong";
			break;
		}
		if(code>=3979 && code<=3986)
		{
			str="qiu";
			break;
		}
		if(code>=3987 && code<=4005)
		{
			str="qu";
			break;
		}
		if(code>=4006 && code<=4016)
		{
			str="quan";
			break;
		}
		if(code>=4017 && code<=4024)
		{
			str="que";
			break;
		}
		if(code>=4025 && code<=4026)
		{
			str="qun";
			break;
		}
		if(code>=4027 && code<=4030)
		{
			str="ran";
			break;
		}
		if(code>=4031 && code<=4035)
		{
			str="rang";
		}
		if(code>=4036 && code<=4038)
		{
			str="rao";
			break;
		}
		if(code>=4039 && code<=4040)
		{
			str="re";
			break;
		}
		if(code>=4041 && code<=4050)
		{
			str="ren";
			break;
		}
		if(code>=4051 && code<=4052)
		{
			str="reng";
			break;
		}
		if(code==4053)
		{
			str="ri";
			break;
		}
		if(code>=4054 && code<=4063)
		{
			str="rong";
			break;
		}
		if(code>=4064 && code<=4066)
		{
			str="rou";
			break;
		}
		if(code>=4067 && code<=4076)
		{
			str="ru";
			break;
		}
		if(code>=4077 && code<=4078)
		{
			str="ruan";
			break;
		}
		if(code>=4079 && code<=4081)
		{
			str="rui";
			break;
		}
		if(code>=4082 && code<=4083)
		{
			str="run";
			break;
		}
		if(code>=4084 && code<=4085)
		{
			str="ruo";
			break;
		}
		if(code>=4086 && code<=4088)
		{
			str="sa";
			break;
		}
		if(code>=4089 && code<=4092)
		{
			str="sai";
			break;
		}
		if(code>=4093 && code<=4094)
		{
			str="san";
			break;
		}
		if(code>=4101 && code<=4102)
		{
			str="san";
			break;
		}
		if(code>=4103 && code<=4105)
		{
			str="sang";
			break;
		}
		if(code>=4106 && code<=4109)
		{
			str="sao";
			break;
		}
		if(code>=4110 && code<=4112)
		{
			str="se";
			break;
		}
		if(code==4113)
		{
			str="sen";
		}
		if(code==4114)
		{
			str="seng";
			break;
		}
		if(code>=4115 && code<=4123)
		{
			str="sha";
			break;
		}
		if(code>=4124 && code<=4125)
		{
			str="shai";
			break;
		}
		if(code>=4126 && code<=4141)
		{
			str="shan";
			break;
		}
		if(code>=4142 && code<=4149)
		{
			str="shang";
			break;
		}
		if(code>=4150 && code<=4160)
		{
			str="shao";
			break;
		}
		if(code>=4161 && code<=4172)
		{
			str="she";
			break;
		}
		if(code>=4173 && code<=4188)
		{
			str="shen";
			break;
		}
		if(code>=4189 && code<=4205)
		{
			str="sheng";
			break;
		}
		if(code>=4206 && code<=4252)
		{
			str="shi";
			break;
		}
		if(code>=4253 && code<=4262)
		{
			str="shou";
			break;
		}
		if(code>=4263 && code<=4301)
		{
			str="shu";
			break;
		}
		if(code>=4302 && code<=4303)
		{
			str="shua";
			break;
		}
		if(code>=4304 && code<=4307)
		{
			str="shuai";
			break;
		}
		if(code>=4308 && code<=4309)
		{
			str="shuan";
			break;
		}
		if(code>=4310 && code<=4312)
		{
			str="shuang";
			break;
		}
		if(code>=4313 && code<=4316)
		{
			str="shui";
			break;
		}
		if(code>=4317 && code<=4320)
		{
			str="shun";
			break;
		}
		if(code>=4321 && code<=4324)
		{
			str="shuo";
			break;
		}
		if(code>=4325 && code<=4340)
		{
			str="si";
			break;
		}
		if(code>=4341 && code<=4348)
		{
			str="song";
			break;
		}
		if(code>=4349 && code<=4352)
		{
			str="sou";
			break;
		}
		if(code>=4353 && code<=4364)
		{
			str="su";
			break;
		}
		if(code>=4365 && code<=4367)
		{
			str="suan";
			break;
		}
		if(code>=4368 && code<=4378)
		{
			str="sui";
			break;
		}
		if(code>=4379 && code<=4381)
		{
			str="sun";
			break;
		}
		if(code>=4382 && code<=4389)
		{
			str="suo";
			break;
		}
		if(code>=4390 && code<=4404)
		{
			str="ta";
			break;
		}
		if(code>=4405 && code<=4413)
		{
			str="tai";
			break;
		}
		if(code>=4414 && code<=4431)
		{
			str="tan";
			break;
		}
		if(code>=4432 && code<=4444)
		{
			str="tang";
			break;
		}
		if(code>=4445 && code<=4455)
		{
			str="tao";
			break;
		}
		if(code==4456)
		{
			str="te";
			break;
		}
		if(code>=4457 && code<=4460)
		{
			str="teng";
			break;
		}
		if(code>=4461 && code<=4475)
		{
			str="ti";
			break;
		}
		if(code>=4476 && code<=4483)
		{
			str="tian";
			break;
		}
		if(code>=4484 && code<=4488)
		{
			str="tiao";
			break;
		}
		if(code>=4489 && code<=4491)
		{
			str="tie";
			break;
		}
		if(code>=4492 && code<=4507)
		{
			str="ting";
			break;
		}
		if(code>=4508 && code<=4520)
		{
			str="tong";
			break;
		}
		if(code>=4521 && code<=4524)
		{
			str="tou";
			break;
		}
		if(code>=4525 && code<=4535)
		{
			str="tu";
			break;
		}
		if(code>=4536 && code<=4537)
		{
			str="tuan";
			break;
		}
		if(code>=4538 && code<=4543)
		{
			str="tui";
			break;
		}
		if(code>=4544 && code<=4546)
		{
			str="tun";
			break;
		}
		if(code>=4547 && code<=4557)
		{
			str="tuo";
			break;
		}
		if(code>=4558 && code<=4564)
		{
			str="wa";
			break;
		}
		if(code>=4565 && code<=4566)
		{
			str="wai";
			break;
		}
		if(code>=4567 && code<=4583)
		{
			str="wan";
			break;
		}
		if(code>=4584 && code<=4593)
		{
			str="wang";
			break;
		}
		if(code>=4594 && code<=4632)
		{
			str="wei";
			break;
		}
		if(code>=4633 && code<=4642)
		{
			str="wen";
			break;
		}
		if(code>=4643 && code<=4645)
		{
			str="weng";
			break;
		}
		if(code>=4646 && code<=4654)
		{
			str="wo";
			break;
		}
		if(code>=4655 && code<=4683)
		{
			str="wu";
			break;
		}
		if(code>=4684 && code<=4724)
		{
			str="xi";
			break;
		}
		if(code>=4725 && code<=4737)
		{
			str="xia";
			break;
		}
		if(code>=4738 && code<=4763)
		{
			str="xian";
			break;
		}
		if(code>=4764 && code<=4783)
		{
			str="xiang";
			break;
		}
		if(code>=4784 && code<=4807)
		{
			str="xiao";
			break;
		}
		if(code>=4809 && code<=4828)
		{
			str="xie";
			break;
		}
		if(code>=4829 && code<=4838)
		{
			str="xin";
			break;
		}
		if(code>=4839 && code<=4853)
		{
			str="xing";
			break;
		}
		if(code>=4854 && code<=4860)
		{
			str="xiong";
			break;
		}
		if(code>=4861 && code<=4869)
		{
			str="xiu";
			break;
		}
		if(code>=4870 && code<=4888)
		{
			str="xu";
			break;
		}
		if(code>=4889 && code<=4904)
		{
			str="xuan";
			break;
		}
		if(code>=4905 && code<=4910)
		{
			str="xue";
			break;
		}
		if(code>=4911 && code<=4924)
		{
			str="xun";
			break;
		}
		if(code>=4925 && code<=4940)
		{
			str="ya";
			break;
		}
		if(code>=4941 && code<=4973)
		{
			str="yan";
			break;
		}
		if(code>=4974 && code<=4990)
		{
			str="yang";
			break;
		}
		if(code>=4991 && code<=5011)
		{
			str="yao";
			break;
		}
		if(code>=5012 && code<=5026)
		{
			str="ye";
			break;
		}
		if(code>=5027 && code<=5079)
		{
			str="yi";
			break;
		}
		if(code>=5080 && code<=5101)
		{
			str="yin";
			break;
		}
		if(code>=5102 && code<=5119)
		{
			str="ying";
			break;
		}
		if(code==5120)
		{
			str="yo";
			break;
		}
		if(code>=5121 && code<=5135)
		{
			str="yong";
			break;
		}
		if(code>=5136 && code<=5155)
		{
			str="you";
			break;
		}
		if(code>=5156 && code<=5206)
		{
			str="yu";
			break;
		}
		if(code>=5207 && code<=5226)
		{
			str="yuan";
			break;
		}
		if(code>=5227 && code<=5236)
		{
			str="yue";
			break;
		}
		if(code>=5237 && code<=5248)
		{
			str="yun";
			break;
		}
		if(code>=5249 && code<=5251)
		{
			str="za";
			break;
		}
		if(code>=5252 && code<=5258)
		{
			str="zai";
			break;
		}
		if(code>=5259 && code<=5262)
		{
			str="zan";
			break;
		}
		if(code>=5263 && code<=5265)
		{
			str="zang";
			break;
		}
		if(code>=5266 && code<=5279)
		{
			str="zao";
			break;
		}
		if(code>=5280 && code<=5283)
		{
			str="ze";
			break;
		}
		if(code==5284)
		{
			str="zei";
			break;
		}
		if(code==5285)
		{
			str="zen";
			break;
		}
		if(code>=5286 && code<=5289)
		{
			str="zeng";
			break;
		}
		if(code>=5290 && code<=5309)
		{
			str="zha";
			break;
		}
		if(code>=5310 && code<=5315)
		{
			str="zhai";
			break;
		}
		if(code>=5316 && code<=5332)
		{
			str="zhan";
			break;
		}
		if(code>=5333 && code<=5347)
		{
			str="zhang";
			break;
		}
		if(code>=5348 && code<=5357)
		{
			str="zhao";
			break;
		}
		if(code>=5358 && code<=5367)
		{
			str="zhe";
			break;
		}
		if(code>=5368 && code<=5383)
		{
			str="zhen";
			break;
		}
		if(code>=5384 && code<=5404)
		{
			str="zheng";
			break;
		}
		if(code>=5405 && code<=5447)
		{
			str="zhi";
			break;
		}
		if(code>=5448 && code<=5458)
		{
			str="zhong";
			break;
		}
		if(code>=5459 && code<=5472)
		{
			str="zhou";
			break;
		}
		if(code>=5473 && code<=5504)
		{
			str="zhu";
			break;
		}
		if(code>=5505 && code<=5506)
		{
			str="zhua";
			break;
		}
		if(code==5507)
		{
			str="zhuai";
			break;
		}
		if(code>=5508 && code<=5513)
		{
			str="zhuan";
			break;
		}
		if(code>=5514 && code<=5520)
		{
			str="zhuang";
			break;
		}
		if(code>=5521 && code<=5526)
		{
			str="zhui";
			break;
		}
		if(code>=5527 && code<=5528)
		{
			str="zhun";
			break;
		}
		if(code>=5529 && code<=5539)
		{
			str="zhuo";
			break;
		}
		if(code>=5540 && code<=5554)
		{
			str="zi";
			break;
		}
		if(code>=5555 && code<=5561)
		{
			str="zong";
			break;
		}
		if(code>=5562 && code<=5565)
		{
			str="zou";
			break;
		}
		if(code>=5566 && code<=5573)
		{
			str="zu";
			break;
		}
		if(code>=5574 && code<=5575)
		{
			str="zuan";
			break;
		}
		if(code>=5576 && code<=5579)
		{
			str="zui";
			break;
		}
		if(code>=5580 && code<=5581)
		{
			str="zun";
			break;
		}
		if(code>=5582 && code<=5589)
		{
			str="zuo";
			break;
		}
        if(code>=2288 && code<=2294)
		{
			str="er";
			break;
		}
	}

	return str;
}

char* get_pinyin_gbk3(unsigned int code)
{
    switch(code)
	{
        case 0: return "yu";        // @
        case 2: return "shang";     // A
        case 4: return "xia";       // B
        case 6: return "han";       // C
        case 8: return "mian";      // D
        case 10: return "chou";     // E
        case 12: return "shi";      // F
        case 14: return "diu";      // G
        case 16: return "qiu";      // H
        case 18: return "liang";    // I
        case 20: return "you";      // J
        case 22: return "bing";     // K
        case 24: return "jiu";      // L
        case 26: return "ji";       // M
        case 28: return "jie";      // N
        case 30: return "guan";     // O
        case 32: return "chan";     // P
        case 34: return "zhuo";     // Q
        case 36: return "ba";       // R
        case 38: return "dan";      // S
        case 40: return "fu";       // T
        case 42: return "yi";       // U
        case 44: return "ai";       // V
        case 46: return "wu";       // W
        case 48: return "jiu";      // X
        case 50: return "yi";       // Y
        case 52: return "yin";      // Z
        case 54: return "hu";       // [
        case 56: return "cheng"; // \
        case 58: return "yin"; // ]
        case 60: return "wan"; // ^
        case 62: return "gai"; // _
        case 64: return "jiu"; // `
        case 66: return "hal"; // a
        case 68: return "hol"; // b
        case 70: return "dou"; // c
        case 72: return "shi"; // d
        case 74: return "nang"; // e
        case 76: return "kal"; // f
        case 78: return "keol"; // g
        case 80: return "tol"; // h
        case 82: return "mol"; // i
        case 84: return "ol"; // j
        case 86: return "cal"; // k
        case 88: return "xue"; // l
        case 90: return "yan"; // m
        case 92: return "fu"; // n
        case 94: return "sha"; // o
        case 96: return "na"; // p
        case 98: return "gan"; // q
        case 100: return "sol"; // r
        case 102: return "eol"; // s
        case 104: return "cui"; // t
        case 106: return "zhe"; // u
        case 108: return "luan"; // v
        case 110: return "gui"; // w
        case 112: return "gan"; // x
        case 114: return "luan"; // y
        case 116: return "lin"; // z
        case 118: return "yi"; // {
        case 120: return "jue"; // |
        case 122: return "ma"; // }
        case 124: return "zhi"; // ~
        case 126: return ""; // ÕÅ
        case 128: return "yu"; // €
        case 130: return "si"; // 
        case 132: return "sui"; // ‚
        case 134: return "gen"; // ƒ
        case 136: return "ya"; // „
        case 138: return "qi"; // …
        case 140: return "ya"; // †
        case 142: return "da"; // ‡
        case 144: return "ye"; // ˆ
        case 146: return "xiang"; // ‰
        case 148: return "jing"; // Š
        case 150: return "ye"; // ‹
        case 152: return "you"; // Œ
        case 154: return "dan"; // 
        case 156: return "lian"; // Ž
        case 158: return "duo"; // 
        case 160: return "wei"; // 
        case 162: return "ji"; // ‘
        case 164: return "ra"; // ’
        case 166: return "wu"; // “
        case 168: return "ba"; // ”
        case 170: return "bing"; // •
        case 172: return "fo"; // –
        case 174: return "tao"; // —
        case 176: return "eo"; // ˜
        case 178: return "xian"; // ™
        case 180: return "duo"; // š
        case 182: return "hong"; // ›
        case 184: return "gan"; // œ
        case 186: return "bo"; // 
        case 188: return "chao"; // ž
        case 190: return "zhang"; // Ÿ
        case 192: return "shang"; //  
        case 194: return "ren"; // ¡
        case 196: return "fan"; // ¢
        case 198: return "miao"; // £
        case 200: return "jing"; // ¤
        case 202: return "wo"; // ¥
        case 204: return "yao"; // ¦
        case 206: return "feng"; // §
        case 208: return "chuan"; // ¨
        case 210: return "wang"; // ©
        case 212: return "di"; // ª
        case 214: return "zhong"; // «
        case 216: return "pei"; // ¬
        case 218: return "yu"; // ­
        case 220: return "diao"; // ®
        case 222: return "dun"; // ¯
        case 224: return "wu"; // °
        case 226: return "yi"; // ±
        case 228: return "lin"; // ²
        case 230: return "fan"; // ³
        case 232: return "ai"; // ´
        case 234: return "yin"; // µ
        case 236: return "pi"; // ¶
        case 238: return "dan"; // ·
        case 240: return "fu"; // ¸
        case 242: return "tang"; // ¹
        case 244: return "zu"; // º
        case 246: return "yun"; // »
        case 248: return "ju"; // ¼
        case 250: return "qian"; // ½
        case 252: return "xun"; // ¾
        case 254: return "xin"; // ¿
        case 256: return "ze"; // À
        case 258: return "xian"; // Á
        case 260: return "nu"; // Â
        case 262: return "ni"; // Ã
        case 264: return "xie"; // Ä
        case 266: return "xu"; // Å
        case 268: return "zhou"; // Æ
        case 270: return "qu"; // Ç
        case 272: return "beng"; // È
        case 274: return "pi"; // É
        case 276: return "yi"; // Ê
        case 278: return "shi"; // Ë
        case 280: return "yi"; // Ì
        case 282: return "zheng"; // Í
        case 284: return "gan"; // Î
        case 286: return "mai"; // Ï
        case 288: return "zhu"; // Ð
        case 290: return "bu"; // Ñ
        case 292: return "qu"; // Ò
        case 294: return "bi"; // Ó
        case 296: return "zhao"; // Ô
        case 298: return "ci"; // Õ
        case 300: return "yang"; // Ö
        case 302: return "zhan"; // ×
        case 304: return "bi"; // Ø
        case 306: return "xian"; // Ù
        case 308: return "qu"; // Ú
        case 310: return "shi"; // Û
        case 312: return "bao"; // Ü
        case 314: return "huai"; // Ý
        case 316: return "ge"; // Þ
        case 318: return "xiang"; // ß
        case 320: return "e"; // à
        case 322: return "fa"; // á
        case 324: return "ming"; // â
        case 326: return "bing"; // ã
        case 328: return "hen"; // ä
        case 330: return "huo"; // å
        case 332: return "gui"; // æ
        case 334: return "quan"; // ç
        case 336: return "ci"; // è
        case 338: return "xing"; // é
        case 340: return "shen"; // ê
        case 342: return "tuo"; // ë
        case 344: return "gai"; // ì
        case 346: return "lai"; // í
        case 348: return "yi"; // î
        case 350: return "guang"; // ï
        case 352: return "yin"; // ð
        case 354: return "mi"; // ñ
        case 356: return "xu"; // ò
        case 358: return "an"; // ó
        case 360: return "lu"; // ô
        case 362: return "er"; // õ
        case 364: return "lun"; // ö
        case 366: return "cha"; // ÷
        case 368: return "chi"; // ø
        case 370: return "xun"; // ù
        case 372: return "zhou"; // ú
        case 374: return "ru"; // û
        case 376: return "jian"; // ü
        case 378: return "si"; // ý
        case 380: return "dai"; // þ
        case 382: return "ta"; // ‚@
        case 384: return "ning"; // ‚A
        case 386: return "jin"; // ‚B
        case 388: return "jiong"; // ‚C
        case 390: return "ting"; // ‚D
        case 392: return "zhen"; // ‚E
        case 394: return "zuo"; // ‚F
        case 396: return "chou"; // ‚G
        case 398: return "lu"; // ‚H
        case 400: return "ju"; // ‚I
        case 402: return "dou"; // ‚J
        case 404: return "ting"; // ‚K
        case 406: return "shen"; // ‚L
        case 408: return "tuo"; // ‚M
        case 410: return "bo"; // ‚N
        case 412: return "nan"; // ‚O
        case 414: return "xiao"; // ‚P
        case 416: return "tui"; // ‚Q
        case 418: return "yu"; // ‚R
        case 420: return "xi"; // ‚S
        case 422: return "xu"; // ‚T
        case 424: return "guang"; // ‚U
        case 426: return "ku"; // ‚V
        case 428: return "wu"; // ‚W
        case 430: return "yi"; // ‚X
        case 432: return "fu"; // ‚Y
        case 434: return "lang"; // ‚Z
        case 436: return "hun"; // ‚[
        case 438: return "ying"; // ‚\
        case 440: return "qian"; // ‚]
        case 442: return "san"; // ‚^
        case 444: return "pei"; // ‚_
        case 446: return "xi"; // ‚`
        case 448: return "mian"; // ‚a
        case 450: return "xia"; // ‚b
        case 452: return "xiu"; // ‚c
        case 454: return "di"; // ‚d
        case 456: return "ju"; // ‚e
        case 458: return "zhi"; // ‚f
        case 460: return "lai"; // ‚g
        case 462: return "si"; // ‚h
        case 464: return "huo"; // ‚i
        case 466: return "xiao"; // ‚j
        case 468: return "jian"; // ‚k
        case 470: return "biao"; // ‚l
        case 472: return "chu"; // ‚m
        case 474: return "fei"; // ‚n
        case 476: return "ya"; // ‚o
        case 478: return "bei"; // ‚p
        case 480: return "yu"; // ‚q
        case 482: return "xin"; // ‚r
        case 484: return "hu"; // ‚s
        case 486: return "chang"; // ‚t
        case 488: return "zhi"; // ‚u
        case 490: return "bing"; // ‚v
        case 492: return "jiu"; // ‚w
        case 494: return "yao"; // ‚x
        case 496: return "zu"; // ‚y
        case 498: return "liang"; // ‚z
        case 500: return "wan"; // ‚{
        case 502: return "lai"; // ‚|
        case 504: return "cang"; // ‚}
        case 506: return "zong"; // ‚~
        case 508: return ""; // ÕÅ
        case 510: return "ge"; // ‚€
        case 512: return "tian"; // ‚
        case 514: return "shu"; // ‚‚
        case 516: return "men"; // ‚ƒ
        case 518: return "dan"; // ‚„
        case 520: return "zhui"; // ‚…
        case 522: return "xing"; // ‚†
        case 524: return "peng"; // ‚‡
        case 526: return "qi"; // ‚ˆ
        case 528: return "gan"; // ‚‰
        case 530: return "liang"; // ‚Š
        case 532: return "sui"; // ‚‹
        case 534: return "jie"; // ‚Œ
        case 536: return "fang"; // ‚
        case 538: return "zhi"; // ‚Ž
        case 540: return "zong"; // ‚
        case 542: return "lun"; // ‚
        case 544: return "song"; // ‚‘
        case 546: return "leng"; // ‚’
        case 548: return "hun"; // ‚“
        case 550: return "dong"; // ‚”
        case 552: return "zi"; // ‚•
        case 554: return "ben"; // ‚–
        case 556: return "wu"; // ‚—
        case 558: return "ju"; // ‚˜
        case 560: return "nai"; // ‚™
        case 562: return "cai"; // ‚š
        case 564: return "jian"; // ‚›
        case 566: return "ye"; // ‚œ
        case 568: return "sha"; // ‚
        case 570: return "qie"; // ‚ž
        case 572: return "ying"; // ‚Ÿ
        case 574: return "cheng"; // ‚ 
        case 576: return "jian"; // ‚¡
        case 578: return "ru"; // ‚¢
        case 580: return "zhong"; // ‚£
        case 582: return "chun"; // ‚¤
        case 584: return "wei"; // ‚¥
        case 586: return "yu"; // ‚¦
        case 588: return "bing"; // ‚§
        case 590: return "ti"; // ‚¨
        case 592: return "yan"; // ‚©
        case 594: return "feng"; // ‚ª
        case 596: return "dang"; // ‚«
        case 598: return "wo"; // ‚¬
        case 600: return "e"; // ‚­
        case 602: return "che"; // ‚®
        case 604: return "sheng"; // ‚¯
        case 606: return "kan"; // ‚°
        case 608: return "di"; // ‚±
        case 610: return "cha"; // ‚²
        case 612: return "bei"; // ‚³
        case 614: return "ye"; // ‚´
        case 616: return "huang"; // ‚µ
        case 618: return "yao"; // ‚¶
        case 620: return "zhan"; // ‚·
        case 622: return "qiao"; // ‚¸
        case 624: return "yan"; // ‚¹
        case 626: return "you"; // ‚º
        case 628: return "xu"; // ‚»
        case 630: return "zha"; // ‚¼
        case 632: return "ci"; // ‚½
        case 634: return "fu"; // ‚¾
        case 636: return "bi"; // ‚¿
        case 638: return "zhi"; // ‚À
        case 640: return "mian"; // ‚Á
        case 642: return "ji"; // ‚Â
        case 644: return "yi"; // ‚Ã
        case 646: return "xie"; // ‚Ä
        case 648: return "xun"; // ‚Å
        case 650: return "cai"; // ‚Æ
        case 652: return "duan"; // ‚Ç
        case 654: return "ce"; // ‚È
        case 656: return "zhen"; // ‚É
        case 658: return "tou"; // ‚Ê
        case 660: return "bei"; // ‚Ë
        case 662: return "zan"; // ‚Ì
        case 664: return "jie"; // ‚Í
        case 666: return "wei"; // ‚Î
        case 668: return "sou"; // ‚Ï
        case 670: return "zhi"; // ‚Ð
        case 672: return "su"; // ‚Ñ
        case 674: return "xia"; // ‚Ò
        case 676: return "yuan"; // ‚Ó
        case 678: return "rong"; // ‚Ô
        case 680: return "nu"; // ‚Õ
        case 682: return "yun"; // ‚Ö
        case 684: return "gou"; // ‚×
        case 686: return "ma"; // ‚Ø
        case 688: return "dian"; // ‚Ù
        case 690: return "tang"; // ‚Ú
        case 692: return "hao"; // ‚Û
        case 694: return "jie"; // ‚Ü
        case 696: return "xi"; // ‚Ý
        case 698: return "shan"; // ‚Þ
        case 700: return "jian"; // ‚ß
        case 702: return "jue"; // ‚à
        case 704: return "chen"; // ‚á
        case 706: return "chu"; // ‚â
        case 708: return "san"; // ‚ã
        case 710: return "bei"; // ‚ä
        case 712: return "xiao"; // ‚å
        case 714: return "yong"; // ‚æ
        case 716: return "yao"; // ‚ç
        case 718: return "ta"; // ‚è
        case 720: return "suo"; // ‚é
        case 722: return "yang"; // ‚ê
        case 724: return "fa"; // ‚ë
        case 726: return "bing"; // ‚ì
        case 728: return "xiang"; // ‚í
        case 730: return "zai"; // ‚î
        case 732: return "gu"; // ‚ï
        case 734: return "can"; // ‚ð
        case 736: return "lei"; // ‚ñ
        case 738: return "chong"; // ‚ò
        case 740: return "zao"; // ‚ó
        case 742: return "zong"; // ‚ô
        case 744: return "beng"; // ‚õ
        case 746: return "shuan"; // ‚ö
        case 748: return "chuan"; // ‚÷
        case 750: return "yu"; // ‚ø
        case 752: return "zhai"; // ‚ù
        case 754: return "qi"; // ‚ú
        case 756: return "shang"; // ‚û
        case 758: return "chuan"; // ‚ü
        case 760: return "jing"; // ‚ý
        case 762: return "han"; // ‚þ
        case 764: return "zhang"; // ƒ@
        case 766: return "qing"; // ƒA
        case 768: return "yan"; // ƒB
        case 770: return "di"; // ƒC
        case 772: return "xie"; // ƒD
        case 774: return "lu"; // ƒE
        case 776: return "bei"; // ƒF
        case 778: return "biao"; // ƒG
        case 780: return "jin"; // ƒH
        case 782: return "lian"; // ƒI
        case 784: return "liao"; // ƒJ
        case 786: return "man"; // ƒK
        case 788: return "qian"; // ƒL
        case 790: return "xian"; // ƒM
        case 792: return "tan"; // ƒN
        case 794: return "ying"; // ƒO
        case 796: return "dong"; // ƒP
        case 798: return "zhuan"; // ƒQ
        case 800: return "shan"; // ƒR
        case 802: return "qiao"; // ƒS
        case 804: return "jiong"; // ƒT
        case 806: return "tui"; // ƒU
        case 808: return "zun"; // ƒV
        case 810: return "pu"; // ƒW
        case 812: return "lao"; // ƒX
        case 814: return "chang"; // ƒY
        case 816: return "guang"; // ƒZ
        case 818: return "qi"; // ƒ[
        case 820: return "deng"; // ƒ\
        case 822: return "zhuan"; // ƒ]
        case 824: return "wei"; // ƒ^
        case 826: return "ji"; // ƒ_
        case 828: return "bo"; // ƒ`
        case 830: return "hui"; // ƒa
        case 832: return "chuan"; // ƒb
        case 834: return "tie"; // ƒc
        case 836: return "dan"; // ƒd
        case 838: return "yao"; // ƒe
        case 840: return "fen"; // ƒf
        case 842: return "xian"; // ƒg
        case 844: return "yu"; // ƒh
        case 846: return "e"; // ƒi
        case 848: return "lin"; // ƒj
        case 850: return "bo"; // ƒk
        case 852: return "gu"; // ƒl
        case 854: return "xian"; // ƒm
        case 856: return "xian"; // ƒn
        case 858: return "min"; // ƒo
        case 860: return "ye"; // ƒp
        case 862: return "jin"; // ƒq
        case 864: return "jia"; // ƒr
        case 866: return "qiao"; // ƒs
        case 868: return "feng"; // ƒt
        case 870: return "zhou"; // ƒu
        case 872: return "ai"; // ƒv
        case 874: return "sai"; // ƒw
        case 876: return "yi"; // ƒx
        case 878: return "jun"; // ƒy
        case 880: return "nong"; // ƒz
        case 882: return "chan"; // ƒ{
        case 884: return "yi"; // ƒ|
        case 886: return "dang"; // ƒ}
        case 888: return "kuai"; // ƒ~
        case 890: return ""; // ÕÅ
        case 892: return "jian"; // ƒ€
        case 894: return "chu"; // ƒ
        case 896: return "jiao"; // ƒ‚
        case 898: return "sha"; // ƒƒ
        case 900: return "zai"; // ƒ„
        case 902: return "can"; // ƒ…
        case 904: return "bin"; // ƒ†
        case 906: return "an"; // ƒ‡
        case 908: return "tai"; // ƒˆ
        case 910: return "chou"; // ƒ‰
        case 912: return "chai"; // ƒŠ
        case 914: return "lan"; // ƒ‹
        case 916: return "yi"; // ƒŒ
        case 918: return "jin"; // ƒ
        case 920: return "qian"; // ƒŽ
        case 922: return "meng"; // ƒ
        case 924: return "wu"; // ƒ
        case 926: return "ning"; // ƒ‘
        case 928: return "qiong"; // ƒ’
        case 930: return "ni"; // ƒ“
        case 932: return "chang"; // ƒ”
        case 934: return "la"; // ƒ•
        case 936: return "lu"; // ƒ–
        case 938: return "kuang"; // ƒ—
        case 940: return "bao"; // ƒ˜
        case 942: return "yu"; // ƒ™
        case 944: return "biao"; // ƒš
        case 946: return "zan"; // ƒ›
        case 948: return "zhi"; // ƒœ
        case 950: return "si"; // ƒ
        case 952: return "you"; // ƒž
        case 954: return "hao"; // ƒŸ
        case 956: return "jing"; // ƒ 
        case 958: return "qin"; // ƒ¡
        case 960: return "li"; // ƒ¢
        case 962: return "teng"; // ƒ£
        case 964: return "wei"; // ƒ¤
        case 966: return "long"; // ƒ¥
        case 968: return "chu"; // ƒ¦
        case 970: return "chan"; // ƒ§
        case 972: return "xiang"; // ƒ¨
        case 974: return "tiao"; // ƒ©
        case 976: return "hui"; // ƒª
        case 978: return "li"; // ƒ«
        case 980: return "luo"; // ƒ¬
        case 982: return "zan"; // ƒ­
        case 984: return "nuo"; // ƒ®
        case 986: return "tang"; // ƒ¯
        case 988: return "yan"; // ƒ°
        case 990: return "lei"; // ƒ±
        case 992: return "nang"; // ƒ²
        case 994: return "zan"; // ƒ³
        case 996: return "xiong"; // ƒ´
        case 998: return "dui"; // ƒµ
        case 1000: return "dui"; // ƒ¶
        case 1002: return "tu"; // ƒ·
        case 1004: return "chang"; // ƒ¸
        case 1006: return "er"; // ƒ¹
        case 1008: return "er"; // ƒº
        case 1010: return "jin"; // ƒ»
        case 1012: return "yan"; // ƒ¼
        case 1014: return "shi"; // ƒ½
        case 1016: return "shi"; // ƒ¾
        case 1018: return "qian"; // ƒ¿
        case 1020: return "gong"; // ƒÀ
        case 1022: return "hao"; // ƒÁ
        case 1024: return "shen"; // ƒÂ
        case 1026: return "dou"; // ƒÃ
        case 1028: return "bai"; // ƒÄ
        case 1030: return "gong"; // ƒÅ
        case 1032: return "huang"; // ƒÆ
        case 1034: return "wu"; // ƒÇ
        case 1036: return "na"; // ƒÈ
        case 1038: return "liang"; // ƒÉ
        case 1040: return "yu"; // ƒÊ
        case 1042: return "han"; // ƒË
        case 1044: return "tian"; // ƒÌ
        case 1046: return "bun"; // ƒÍ
        case 1048: return "ji"; // ƒÎ
        case 1050: return "yi"; // ƒÏ
        case 1052: return "mao"; // ƒÐ
        case 1054: return "ran"; // ƒÑ
        case 1056: return "yan"; // ƒÒ
        case 1058: return "mao"; // ƒÓ
        case 1060: return "ce"; // ƒÔ
        case 1062: return "jiong"; // ƒÕ
        case 1064: return "gua"; // ƒÖ
        case 1066: return "jiong"; // ƒ×
        case 1068: return "mao"; // ƒØ
        case 1070: return "zhou"; // ƒÙ
        case 1072: return "gou"; // ƒÚ
        case 1074: return "xu"; // ƒÛ
        case 1076: return "you"; // ƒÜ
        case 1078: return "kan"; // ƒÝ
        case 1080: return "yi"; // ƒÞ
        case 1082: return "mi"; // ƒß
        case 1084: return "shi"; // ƒà
        case 1086: return "meng"; // ƒá
        case 1088: return "ju"; // ƒâ
        case 1090: return "kou"; // ƒã
        case 1092: return "min"; // ƒä
        case 1094: return "fu"; // ƒå
        case 1096: return "xie"; // ƒæ
        case 1098: return "mi"; // ƒç
        case 1100: return "tai"; // ƒè
        case 1102: return "gang"; // ƒé
        case 1104: return "hu"; // ƒê
        case 1106: return "pan"; // ƒë
        case 1108: return "fu"; // ƒì
        case 1110: return "min"; // ƒí
        case 1112: return "qia"; // ƒî
        case 1114: return "jian"; // ƒï
        case 1116: return "sou"; // ƒð
        case 1118: return "mei"; // ƒñ
        case 1120: return "tu"; // ƒò
        case 1122: return "gu"; // ƒó
        case 1124: return "jing"; // ƒô
        case 1126: return "qing"; // ƒõ
        case 1128: return "dong"; // ƒö
        case 1130: return "gan"; // ƒ÷
        case 1132: return "yin"; // ƒø
        case 1134: return "ai"; // ƒù
        case 1136: return "li"; // ƒú
        case 1138: return "cang"; // ƒû
        case 1140: return "ming"; // ƒü
        case 1142: return "zhun"; // ƒý
        case 1144: return "cui"; // ƒþ
        case 1146: return "si"; // „@
        case 1148: return "duo"; // „A
        case 1150: return "jin"; // „B
        case 1152: return "lin"; // „C
        case 1154: return "xi"; // „D
        case 1156: return "dou"; // „E
        case 1158: return "fan"; // „F
        case 1160: return "fan"; // „G
        case 1162: return "ju"; // „H
        case 1164: return "chu"; // „I
        case 1166: return "zheng"; // „J
        case 1168: return "feng"; // „K
        case 1170: return "mu"; // „L
        case 1172: return "zhi"; // „M
        case 1174: return "feng"; // „N
        case 1176: return "feng"; // „O
        case 1178: return "kai"; // „P
        case 1180: return "gan"; // „Q
        case 1182: return "ping"; // „R
        case 1184: return "kuai"; // „S
        case 1186: return "han"; // „T
        case 1188: return "ren"; // „U
        case 1190: return "chuang"; // „V
        case 1192: return "ji"; // „W
        case 1194: return "qian"; // „X
        case 1196: return "cun"; // „Y
        case 1198: return "ji"; // „Z
        case 1200: return "dan"; // „[
        case 1202: return "wan"; // „\
        case 1204: return "jue"; // „]
        case 1206: return "li"; // „^
        case 1208: return "fu"; // „_
        case 1210: return "qu"; // „`
        case 1212: return "diao"; // „a
        case 1214: return "min"; // „b
        case 1216: return "ling"; // „c
        case 1218: return "zhong"; // „d
        case 1220: return "bie"; // „e
        case 1222: return "jie"; // „f
        case 1224: return "jie"; // „g
        case 1226: return "shan"; // „h
        case 1228: return "chan"; // „i
        case 1230: return "geng"; // „j
        case 1232: return "chuang"; // „k
        case 1234: return "kui"; // „l
        case 1236: return "duo"; // „m
        case 1238: return "er"; // „n
        case 1240: return "jie"; // „o
        case 1242: return "ci"; // „p
        case 1244: return "jing"; // „q
        case 1246: return "dou"; // „r
        case 1248: return "luo"; // „s
        case 1250: return "ze"; // „t
        case 1252: return "yuan"; // „u
        case 1254: return "cuo"; // „v
        case 1256: return "ke"; // „w
        case 1258: return "cha"; // „x
        case 1260: return "chuang"; // „y
        case 1262: return "cuo"; // „z
        case 1264: return "li"; // „{
        case 1266: return "fei"; // „|
        case 1268: return "chan"; // „}
        case 1270: return "qi"; // „~
        case 1272: return ""; // ÕÅ
        case 1274: return "chuang"; // „€
        case 1276: return "zi"; // „
        case 1278: return "gang"; // „‚
        case 1280: return "bao"; // „ƒ
        case 1282: return "duo"; // „„
        case 1284: return "lue"; // „…
        case 1286: return "du"; // „†
        case 1288: return "jian"; // „‡
        case 1290: return "ji"; // „ˆ
        case 1292: return "yan"; // „‰
        case 1294: return "huo"; // „Š
        case 1296: return "du"; // „‹
        case 1298: return "duan"; // „Œ
        case 1300: return "wu"; // „
        case 1302: return "gua"; // „Ž
        case 1304: return "sheng"; // „
        case 1306: return "jian"; // „
        case 1308: return "da"; // „‘
        case 1310: return "ai"; // „’
        case 1312: return "chuang"; // „“
        case 1314: return "chuan"; // „”
        case 1316: return "chan"; // „•
        case 1318: return "tuan"; // „–
        case 1320: return "lu"; // „—
        case 1322: return "li"; // „˜
        case 1324: return "peng"; // „™
        case 1326: return "shan"; // „š
        case 1328: return "kou"; // „›
        case 1330: return "gua"; // „œ
        case 1332: return "hua"; // „
        case 1334: return "zha"; // „ž
        case 1336: return "zhu"; // „Ÿ
        case 1338: return "lian"; // „ 
        case 1340: return "ju"; // „¡
        case 1342: return "liu"; // „¢
        case 1344: return "gui"; // „£
        case 1346: return "jiao"; // „¤
        case 1348: return "gui"; // „¥
        case 1350: return "jian"; // „¦
        case 1352: return "jian"; // „§
        case 1354: return "tang"; // „¨
        case 1356: return "ji"; // „©
        case 1358: return "jian"; // „ª
        case 1360: return "jian"; // „«
        case 1362: return "zhi"; // „¬
        case 1364: return "chan"; // „­
        case 1366: return "zuan"; // „®
        case 1368: return "mo"; // „¯
        case 1370: return "li"; // „°
        case 1372: return "zhu"; // „±
        case 1374: return "ya"; // „²
        case 1376: return "jin"; // „³
        case 1378: return "keng"; // „´
        case 1380: return "lie"; // „µ
        case 1382: return "zhi"; // „¶
        case 1384: return "yi"; // „·
        case 1386: return "zhu"; // „¸
        case 1388: return "mo"; // „¹
        case 1390: return "lao"; // „º
        case 1392: return "juan"; // „»
        case 1394: return "kou"; // „¼
        case 1396: return "yang"; // „½
        case 1398: return "wa"; // „¾
        case 1400: return "xiao"; // „¿
        case 1402: return "mou"; // „À
        case 1404: return "kuang"; // „Á
        case 1406: return "jie"; // „Â
        case 1408: return "lie"; // „Ã
        case 1410: return "ke"; // „Ä
        case 1412: return "jin"; // „Å
        case 1414: return "gao"; // „Æ
        case 1416: return "min"; // „Ç
        case 1418: return "chi"; // „È
        case 1420: return "lang"; // „É
        case 1422: return "yong"; // „Ê
        case 1424: return "ke"; // „Ë
        case 1426: return "juan"; // „Ì
        case 1428: return "qing"; // „Í
        case 1430: return "lu"; // „Î
        case 1432: return "bu"; // „Ï
        case 1434: return "lai"; // „Ð
        case 1436: return "kai"; // „Ñ
        case 1438: return "mian"; // „Ò
        case 1440: return "dong"; // „Ó
        case 1442: return "xu"; // „Ô
        case 1444: return "wu"; // „Õ
        case 1446: return "yi"; // „Ö
        case 1448: return "xun"; // „×
        case 1450: return "yang"; // „Ø
        case 1452: return "sheng"; // „Ù
        case 1454: return "lao"; // „Ú
        case 1456: return "lu"; // „Û
        case 1458: return "piao"; // „Ü
        case 1460: return "shi"; // „Ý
        case 1462: return "ji"; // „Þ
        case 1464: return "jiang"; // „ß
        case 1466: return "jiao"; // „à
        case 1468: return "quan"; // „á
        case 1470: return "xiang"; // „â
        case 1472: return "yi"; // „ã
        case 1474: return "jue"; // „ä
        case 1476: return "fan"; // „å
        case 1478: return "juan"; // „æ
        case 1480: return "dong"; // „ç
        case 1482: return "ju"; // „è
        case 1484: return "dan"; // „é
        case 1486: return "mai"; // „ê
        case 1488: return "xun"; // „ë
        case 1490: return "xun"; // „ì
        case 1492: return "lu"; // „í
        case 1494: return "li"; // „î
        case 1496: return "che"; // „ï
        case 1498: return "xiang"; // „ð
        case 1500: return "quan"; // „ñ
        case 1502: return "yun"; // „ò
        case 1504: return "jiu"; // „ó
        case 1506: return "bao"; // „ô
        case 1508: return "mangmi"; // „õ
        case 1510: return "bi"; // „ö
        case 1512: return "gai"; // „÷
        case 1514: return "gai"; // „ø
        case 1516: return "yi"; // „ù
        case 1518: return "peng"; // „ú
        case 1520: return "ju"; // „û
        case 1522: return "yao"; // „ü
        case 1524: return "ge"; // „ý
        case 1526: return "e"; // „þ
        case 1528: return "gong"; // …@
        case 1530: return "da"; // …A
        case 1532: return "jiu"; // …B
        case 1534: return "gong"; // …C
        case 1536: return "nao"; // …D
        case 1538: return "jiu"; // …E
        case 1540: return "yi"; // …F
        case 1542: return "jiang"; // …G
        case 1544: return "kang"; // …H
        case 1546: return "hu"; // …I
        case 1548: return "qu"; // …J
        case 1550: return "fan"; // …K
        case 1552: return "qie"; // …L
        case 1554: return "zang"; // …M
        case 1556: return "kuang"; // …N
        case 1558: return "hu"; // …O
        case 1560: return "yu"; // …P
        case 1562: return "gui"; // …Q
        case 1564: return "hui"; // …R
        case 1566: return "dan"; // …S
        case 1568: return "kui"; // …T
        case 1570: return "lian"; // …U
        case 1572: return "lian"; // …V
        case 1574: return "suan"; // …W
        case 1576: return "du"; // …X
        case 1578: return "jiu"; // …Y
        case 1580: return "jue"; // …Z
        case 1582: return "xi"; // …[
        case 1584: return "e"; // …\
        case 1586: return "yan"; // …]
        case 1588: return "qu"; // …^
        case 1590: return "xun"; // …_
        case 1592: return "nian"; // …`
        case 1594: return "zu"; // …a
        case 1596: return "shi"; // …b
        case 1598: return "xi"; // …c
        case 1600: return "wan"; // …d
        case 1602: return "wan"; // …e
        case 1604: return "xie"; // …f
        case 1606: return "dan"; // …g
        case 1608: return "ji"; // …h
        case 1610: return "lu"; // …i
        case 1612: return "guan"; // …j
        case 1614: return "xi"; // …k
        case 1616: return "xie"; // …l
        case 1618: return "jie"; // …m
        case 1620: return "ang"; // …n
        case 1622: return "qiong"; // …o
        case 1624: return "shao"; // …p
        case 1626: return "chi"; // …q
        case 1628: return "su"; // …r
        case 1630: return "que"; // …s
        case 1632: return "kui"; // …t
        case 1634: return "ji"; // …u
        case 1636: return "e"; // …v
        case 1638: return "xi"; // …w
        case 1640: return "san"; // …x
        case 1642: return "yan"; // …y
        case 1644: return "zhe"; // …z
        case 1646: return "han"; // …{
        case 1648: return "ya"; // …|
        case 1650: return "di"; // …}
        case 1652: return "zha"; // …~
        case 1654: return ""; // ÕÅ
        case 1656: return "pang"; // …€
        case 1658: return "ae"; // …
        case 1660: return "qie"; // …‚
        case 1662: return "ya"; // …ƒ
        case 1664: return "zhi"; // …„
        case 1666: return "mang"; // ……
        case 1668: return "ti"; // …†
        case 1670: return "she"; // …‡
        case 1672: return "ting"; // …ˆ
        case 1674: return "zui"; // …‰
        case 1676: return "fei"; // …Š
        case 1678: return "ce"; // …‹
        case 1680: return "yuan"; // …Œ
        case 1682: return "li"; // …
        case 1684: return "dian"; // …Ž
        case 1686: return "jin"; // …
        case 1688: return "ao"; // …
        case 1690: return "gui"; // …‘
        case 1692: return "yan"; // …’
        case 1694: return "li"; // …“
        case 1696: return "an"; // …”
        case 1698: return "lan"; // …•
        case 1700: return "li"; // …–
        case 1702: return "yan"; // …—
        case 1704: return "yan"; // …˜
        case 1706: return "yuan"; // …™
        case 1708: return "gong"; // …š
        case 1710: return "mian"; // …›
        case 1712: return "qiu"; // …œ
        case 1714: return "qu"; // …
        case 1716: return "keum"; // …ž
        case 1718: return "lei"; // …Ÿ
        case 1720: return "du"; // … 
        case 1722: return "hui"; // …¡
        case 1724: return "can"; // …¢
        case 1726: return "shen"; // …£
        case 1728: return "shen"; // …¤
        case 1730: return "ai"; // …¥
        case 1732: return "dai"; // …¦
        case 1734: return "shou"; // …§
        case 1736: return "guai"; // …¨
        case 1738: return "ba"; // …©
        case 1740: return "ruo"; // …ª
        case 1742: return "li"; // …«
        case 1744: return "yi"; // …¬
        case 1746: return "jia"; // …­
        case 1748: return "sou"; // …®
        case 1750: return "ji"; // …¯
        case 1752: return "wei"; // …°
        case 1754: return "rui"; // …±
        case 1756: return "cong"; // …²
        case 1758: return "gua"; // …³
        case 1760: return "qiu"; // …´
        case 1762: return "chi"; // …µ
        case 1764: return "dug"; // …¶
        case 1766: return "hong"; // …·
        case 1768: return "mie"; // …¸
        case 1770: return "mang"; // …¹
        case 1772: return "xuan"; // …º
        case 1774: return "ji"; // …»
        case 1776: return "duo"; // …¼
        case 1778: return "ye"; // …½
        case 1780: return "ou"; // …¾
        case 1782: return "huo"; // …¿
        case 1784: return "yi"; // …À
        case 1786: return "chou"; // …Á
        case 1788: return "qin"; // …Â
        case 1790: return "ge"; // …Ã
        case 1792: return "bu"; // …Ä
        case 1794: return "e"; // …Å
        case 1796: return "hong"; // …Æ
        case 1798: return "wu"; // …Ç
        case 1800: return "na"; // …È
        case 1802: return "jue"; // …É
        case 1804: return "dou"; // …Ê
        case 1806: return "ou"; // …Ë
        case 1808: return "gao"; // …Ì
        case 1810: return "jun"; // …Í
        case 1812: return "lu"; // …Î
        case 1814: return "ge"; // …Ï
        case 1816: return "wen"; // …Ð
        case 1818: return "qi"; // …Ñ
        case 1820: return "wu"; // …Ò
        case 1822: return "jiao"; // …Ó
        case 1824: return "yun"; // …Ô
        case 1826: return "chi"; // …Õ
        case 1828: return "sheng"; // …Ö
        case 1830: return "tian"; // …×
        case 1832: return "wen"; // …Ø
        case 1834: return "e"; // …Ù
        case 1836: return "shi"; // …Ú
        case 1838: return "juan"; // …Û
        case 1840: return "pen"; // …Ü
        case 1842: return "wen"; // …Ý
        case 1844: return "mou"; // …Þ
        case 1846: return "ran"; // …ß
        case 1848: return "di"; // …à
        case 1850: return "shi"; // …á
        case 1852: return "zhou"; // …â
        case 1854: return "tie"; // …ã
        case 1856: return "xi"; // …ä
        case 1858: return "yi"; // …å
        case 1860: return "qi"; // …æ
        case 1862: return "ping"; // …ç
        case 1864: return "zi"; // …è
        case 1866: return "hou"; // …é
        case 1868: return "yi"; // …ê
        case 1870: return "hao"; // …ë
        case 1872: return "ya"; // …ì
        case 1874: return "ka"; // …í
        case 1876: return "han"; // …î
        case 1878: return "tuo"; // …ï
        case 1880: return "pou"; // …ð
        case 1882: return "bi"; // …ñ
        case 1884: return "fu"; // …ò
        case 1886: return "yang"; // …ó
        case 1888: return "he"; // …ô
        case 1890: return "tai"; // …õ
        case 1892: return "da"; // …ö
        case 1894: return "wa"; // …÷
        case 1896: return "zuo"; // …ø
        case 1898: return "bu"; // …ù
        case 1900: return "ta"; // …ú
        case 1902: return "xian"; // …û
        case 1904: return "huo"; // …ü
        case 1906: return "qi"; // …ý
        case 1908: return "er"; // …þ
        case 1910: return "e"; // †@
        case 1912: return "xi"; // †A
        case 1914: return "zhou"; // †B
        case 1916: return "xun"; // †C
        case 1918: return "xiao"; // †D
        case 1920: return "kua"; // †E
        case 1922: return "huai"; // †F
        case 1924: return "tao"; // †G
        case 1926: return "e"; // †H
        case 1928: return "xuan"; // †I
        case 1930: return "wai"; // †J
        case 1932: return "lao"; // †K
        case 1934: return "tong"; // †L
        case 1936: return "xiong"; // †M
        case 1938: return "you"; // †N
        case 1940: return "mi"; // †O
        case 1942: return "nian"; // †P
        case 1944: return "xing"; // †Q
        case 1946: return "pun"; // †R
        case 1948: return "hao"; // †S
        case 1950: return "yuan"; // †T
        case 1952: return "ka"; // †U
        case 1954: return "pou"; // †V
        case 1956: return "mang"; // †W
        case 1958: return "zu"; // †X
        case 1960: return "he"; // †Y
        case 1962: return "xian"; // †Z
        case 1964: return "lao"; // †[
        case 1966: return "bei"; // †\
        case 1968: return "lang"; // †]
        case 1970: return "ba"; // †^
        case 1972: return "mie"; // †_
        case 1974: return "lie"; // †`
        case 1976: return "sui"; // †a
        case 1978: return "fu"; // †b
        case 1980: return "han"; // †c
        case 1982: return "yue"; // †d
        case 1984: return "you"; // †e
        case 1986: return "gu"; // †f
        case 1988: return "gu"; // †g
        case 1990: return "bei"; // †h
        case 1992: return "han"; // †i
        case 1994: return "yi"; // †j
        case 1996: return "jia"; // †k
        case 1998: return "tu"; // †l
        case 2000: return "yan"; // †m
        case 2002: return "wan"; // †n
        case 2004: return "li"; // †o
        case 2006: return "qiu"; // †p
        case 2008: return "che"; // †q
        case 2010: return "zao"; // †r
        case 2012: return "ya"; // †s
        case 2014: return "dou"; // †t
        case 2016: return "qi"; // †u
        case 2018: return "di"; // †v
        case 2020: return "qin"; // †w
        case 2022: return "mas"; // †x
        case 2024: return "gong"; // †y
        case 2026: return "teo"; // †z
        case 2028: return "keos"; // †{
        case 2030: return "liang"; // †|
        case 2032: return "lang"; // †}
        case 2034: return "sha"; // †~
        case 2036: return ""; // ÕÅ
        case 2038: return "zo"; // †€
        case 2040: return "wo"; // †
        case 2042: return "yin"; // †‚
        case 2044: return "qi"; // †ƒ
        case 2046: return "er"; // †„
        case 2048: return "qiang"; // †…
        case 2050: return "an"; // ††
        case 2052: return "jie"; // †‡
        case 2054: return "dian"; // †ˆ
        case 2056: return "yu"; // †‰
        case 2058: return "tian"; // †Š
        case 2060: return "lai"; // †‹
        case 2062: return "xi"; // †Œ
        case 2064: return "ai"; // †
        case 2066: return "nou"; // †Ž
        case 2068: return "zhao"; // †
        case 2070: return "di"; // †
        case 2072: return "e"; // †‘
        case 2074: return "xiao"; // †’
        case 2076: return "qiang"; // †“
        case 2078: return "tun"; // †”
        case 2080: return "wu"; // †•
        case 2082: return "wen"; // †–
        case 2084: return "die"; // †—
        case 2086: return "gu"; // †˜
        case 2088: return "qi"; // †™
        case 2090: return "qi"; // †š
        case 2092: return "dan"; // †›
        case 2094: return "ye"; // †œ
        case 2096: return "zi"; // †
        case 2098: return "bi"; // †ž
        case 2100: return "cui"; // †Ÿ
        case 2102: return "he"; // † 
        case 2104: return "ya"; // †¡
        case 2106: return "qi"; // †¢
        case 2108: return "zhe"; // †£
        case 2110: return "liang"; // †¤
        case 2112: return "xian"; // †¥
        case 2114: return "ying"; // †¦
        case 2116: return "gua"; // †§
        case 2118: return "ze"; // †¨
        case 2120: return "guo"; // †©
        case 2122: return "luo"; // †ª
        case 2124: return "yan"; // †«
        case 2126: return "di"; // †¬
        case 2128: return "jue"; // †­
        case 2130: return "tan"; // †®
        case 2132: return "geu"; // †¯
        case 2134: return "tang"; // †°
        case 2136: return "an"; // †±
        case 2138: return "dan"; // †²
        case 2140: return "yu"; // †³
        case 2142: return "zhe"; // †´
        case 2144: return "zhou"; // †µ
        case 2146: return "chai"; // †¶
        case 2148: return "wai"; // †·
        case 2150: return "yu"; // †¸
        case 2152: return "zan"; // †¹
        case 2154: return "yao"; // †º
        case 2156: return "mian"; // †»
        case 2158: return "hu"; // †¼
        case 2160: return "yun"; // †½
        case 2162: return "huan"; // †¾
        case 2164: return "yuan"; // †¿
        case 2166: return "ji"; // †À
        case 2168: return "zhong"; // †Á
        case 2170: return "wei"; // †Â
        case 2172: return "che"; // †Ã
        case 2174: return "xu"; // †Ä
        case 2176: return "huang"; // †Å
        case 2178: return "duo"; // †Æ
        case 2180: return "nie"; // †Ç
        case 2182: return "liang"; // †È
        case 2184: return "yu"; // †É
        case 2186: return "sang"; // †Ê
        case 2188: return "kai"; // †Ë
        case 2190: return "qiao"; // †Ì
        case 2192: return "yan"; // †Í
        case 2194: return "dan"; // †Î
        case 2196: return "ben"; // †Ï
        case 2198: return "can"; // †Ð
        case 2200: return "yo"; // †Ñ
        case 2202: return "wei"; // †Ò
        case 2204: return "ying"; // †Ó
        case 2206: return "po"; // †Ô
        case 2208: return "bei"; // †Õ
        case 2210: return "gib"; // †Ö
        case 2212: return "qiao"; // †×
        case 2214: return "gu"; // †Ø
        case 2216: return "ti"; // †Ù
        case 2218: return "yao"; // †Ú
        case 2220: return "he"; // †Û
        case 2222: return "qiang"; // †Ü
        case 2224: return "se"; // †Ý
        case 2226: return "yong"; // †Þ
        case 2228: return "gong"; // †ß
        case 2230: return "xie"; // †à
        case 2232: return "ma"; // †á
        case 2234: return "cha"; // †â
        case 2236: return "hai"; // †ã
        case 2238: return "ru"; // †ä
        case 2240: return "wa"; // †å
        case 2242: return "ji"; // †æ
        case 2244: return "beng"; // †ç
        case 2246: return "wu"; // †è
        case 2248: return "qian"; // †é
        case 2250: return "zi"; // †ê
        case 2252: return "lao"; // †ë
        case 2254: return "wa"; // †ì
        case 2256: return "jia"; // †í
        case 2258: return "suo"; // †î
        case 2260: return "cis"; // †ï
        case 2262: return "sai"; // †ð
        case 2264: return "go"; // †ñ
        case 2266: return "na"; // †ò
        case 2268: return "qiang"; // †ó
        case 2270: return "bi"; // †ô
        case 2272: return "ao"; // †õ
        case 2274: return "lian"; // †ö
        case 2276: return "zui"; // †÷
        case 2278: return "zhe"; // †ø
        case 2280: return "mo"; // †ù
        case 2282: return "tan"; // †ú
        case 2284: return "jiao"; // †û
        case 2286: return "chong"; // †ü
        case 2288: return "jiao"; // †ý
        case 2290: return "ge"; // †þ
        case 2292: return "tan"; // ‡@
        case 2294: return "shan"; // ‡A
        case 2296: return "ai"; // ‡B
        case 2298: return "xiao"; // ‡C
        case 2300: return "lou"; // ‡D
        case 2302: return "jiao"; // ‡E
        case 2304: return "hu"; // ‡F
        case 2306: return "hui"; // ‡G
        case 2308: return "guo"; // ‡H
        case 2310: return "ou"; // ‡I
        case 2312: return "xian"; // ‡J
        case 2314: return "ze"; // ‡K
        case 2316: return "chang"; // ‡L
        case 2318: return "po"; // ‡M
        case 2320: return "de"; // ‡N
        case 2322: return "ma"; // ‡O
        case 2324: return "hu"; // ‡P
        case 2326: return "ga"; // ‡Q
        case 2328: return "tang"; // ‡R
        case 2330: return "ye"; // ‡S
        case 2332: return "sai"; // ‡T
        case 2334: return "jiao"; // ‡U
        case 2336: return "xiao"; // ‡V
        case 2338: return "hua"; // ‡W
        case 2340: return "mai"; // ‡X
        case 2342: return "ran"; // ‡Y
        case 2344: return "lao"; // ‡Z
        case 2346: return "xiao"; // ‡[
        case 2348: return "ji"; // ‡\
        case 2350: return "kui"; // ‡]
        case 2352: return "xiao"; // ‡^
        case 2354: return "hao"; // ‡_
        case 2356: return "mu"; // ‡`
        case 2358: return "qiao"; // ‡a
        case 2360: return "xu"; // ‡b
        case 2362: return "tan"; // ‡c
        case 2364: return "dan"; // ‡d
        case 2366: return "xun"; // ‡e
        case 2368: return "wu"; // ‡f
        case 2370: return "zun"; // ‡g
        case 2372: return "bo"; // ‡h
        case 2374: return "kai"; // ‡i
        case 2376: return "hui"; // ‡j
        case 2378: return "can"; // ‡k
        case 2380: return "chuang"; // ‡l
        case 2382: return "za"; // ‡m
        case 2384: return "dan"; // ‡n
        case 2386: return "yu"; // ‡o
        case 2388: return "tun"; // ‡p
        case 2390: return "xi"; // ‡q
        case 2392: return "qi"; // ‡r
        case 2394: return "hao"; // ‡s
        case 2396: return "lian"; // ‡t
        case 2398: return "xu"; // ‡u
        case 2400: return "hui"; // ‡v
        case 2402: return "yin"; // ‡w
        case 2404: return "xun"; // ‡x
        case 2406: return "yao"; // ‡y
        case 2408: return "si"; // ‡z
        case 2410: return "yan"; // ‡{
        case 2412: return "ying"; // ‡|
        case 2414: return "da"; // ‡}
        case 2416: return "dan"; // ‡~
        case 2418: return ""; // ÕÅ
        case 2420: return "zhou"; // ‡€
        case 2422: return "nong"; // ‡
        case 2424: return "yue"; // ‡‚
        case 2426: return "xie"; // ‡ƒ
        case 2428: return "jiao"; // ‡„
        case 2430: return "yuan"; // ‡…
        case 2432: return "ai"; // ‡†
        case 2434: return "yong"; // ‡‡
        case 2436: return "kuai"; // ‡ˆ
        case 2438: return "yu"; // ‡‰
        case 2440: return "pen"; // ‡Š
        case 2442: return "dao"; // ‡‹
        case 2444: return "hen"; // ‡Œ
        case 2446: return "dun"; // ‡
        case 2448: return "dang"; // ‡Ž
        case 2450: return "xin"; // ‡
        case 2452: return "pi"; // ‡
        case 2454: return "yin"; // ‡‘
        case 2456: return "zui"; // ‡’
        case 2458: return "ning"; // ‡“
        case 2460: return "di"; // ‡”
        case 2462: return "lan"; // ‡•
        case 2464: return "ta"; // ‡–
        case 2466: return "wo"; // ‡—
        case 2468: return "xia"; // ‡˜
        case 2470: return "ye"; // ‡™
        case 2472: return "duo"; // ‡š
        case 2474: return "pi"; // ‡›
        case 2476: return "zhou"; // ‡œ
        case 2478: return "ji"; // ‡
        case 2480: return "jin"; // ‡ž
        case 2482: return "chang"; // ‡Ÿ
        case 2484: return "xun"; // ‡ 
        case 2486: return "me"; // ‡¡
        case 2488: return "ti"; // ‡¢
        case 2490: return "lu"; // ‡£
        case 2492: return "hui"; // ‡¤
        case 2494: return "bo"; // ‡¥
        case 2496: return "you"; // ‡¦
        case 2498: return "nie"; // ‡§
        case 2500: return "yin"; // ‡¨
        case 2502: return "yo"; // ‡©
        case 2504: return "me"; // ‡ª
        case 2506: return "hong"; // ‡«
        case 2508: return "zhe"; // ‡¬
        case 2510: return "li"; // ‡­
        case 2512: return "liu"; // ‡®
        case 2514: return "hai"; // ‡¯
        case 2516: return "nang"; // ‡°
        case 2518: return "mo"; // ‡±
        case 2520: return "yan"; // ‡²
        case 2522: return "li"; // ‡³
        case 2524: return "lu"; // ‡´
        case 2526: return "long"; // ‡µ
        case 2528: return "mo"; // ‡¶
        case 2530: return "dan"; // ‡·
        case 2532: return "chen"; // ‡¸
        case 2534: return "pin"; // ‡¹
        case 2536: return "pi"; // ‡º
        case 2538: return "xiang"; // ‡»
        case 2540: return "me"; // ‡¼
        case 2542: return "xi"; // ‡½
        case 2544: return "duo"; // ‡¾
        case 2546: return "ku"; // ‡¿
        case 2548: return "yan"; // ‡À
        case 2550: return "chan"; // ‡Á
        case 2552: return "ying"; // ‡Â
        case 2554: return "dim"; // ‡Ã
        case 2556: return "la"; // ‡Ä
        case 2558: return "ta"; // ‡Å
        case 2560: return "ao"; // ‡Æ
        case 2562: return "chuo"; // ‡Ç
        case 2564: return "huan"; // ‡È
        case 2566: return "huo"; // ‡É
        case 2568: return "zhuan"; // ‡Ê
        case 2570: return "nie"; // ‡Ë
        case 2572: return "xiao"; // ‡Ì
        case 2574: return "zha"; // ‡Í
        case 2576: return "li"; // ‡Î
        case 2578: return "chan"; // ‡Ï
        case 2580: return "chai"; // ‡Ð
        case 2582: return "li"; // ‡Ñ
        case 2584: return "yi"; // ‡Ò
        case 2586: return "luo"; // ‡Ó
        case 2588: return "za"; // ‡Ô
        case 2590: return "su"; // ‡Õ
        case 2592: return "xi"; // ‡Ö
        case 2594: return "zen"; // ‡×
        case 2596: return "jian"; // ‡Ø
        case 2598: return "nie"; // ‡Ù
        case 2600: return "zhu"; // ‡Ú
        case 2602: return "lan"; // ‡Û
        case 2604: return "nie"; // ‡Ü
        case 2606: return "ram"; // ‡Ý
        case 2608: return "lo"; // ‡Þ
        case 2610: return "hui"; // ‡ß
        case 2612: return "yin"; // ‡à
        case 2614: return "nin"; // ‡á
        case 2616: return "tuan"; // ‡â
        case 2618: return "kang"; // ‡ã
        case 2620: return "yuan"; // ‡ä
        case 2622: return "jiong"; // ‡å
        case 2624: return "pian"; // ‡æ
        case 2626: return "yun"; // ‡ç
        case 2628: return "cong"; // ‡è
        case 2630: return "hui"; // ‡é
        case 2632: return "e"; // ‡ê
        case 2634: return "guo"; // ‡ë
        case 2636: return "tong"; // ‡ì
        case 2638: return "tu"; // ‡í
        case 2640: return "guo"; // ‡î
        case 2642: return "qun"; // ‡ï
        case 2644: return "ri"; // ‡ð
        case 2646: return "guo"; // ‡ñ
        case 2648: return "tai"; // ‡ò
        case 2650: return "guo"; // ‡ó
        case 2652: return "yin"; // ‡ô
        case 2654: return "huan"; // ‡õ
        case 2656: return "han"; // ‡ö
        case 2658: return "lun"; // ‡÷
        case 2660: return "guo"; // ‡ø
        case 2662: return "chui"; // ‡ù
        case 2664: return "wei"; // ‡ú
        case 2666: return "yuan"; // ‡û
        case 2668: return "juan"; // ‡ü
        case 2670: return "ku"; // ‡ý
        case 2672: return "pu"; // ‡þ
        case 2674: return "yuan"; // ˆ@
        case 2676: return "yuan"; // ˆA
        case 2678: return "ya"; // ˆB
        case 2680: return "tuan"; // ˆC
        case 2682: return "tu"; // ˆD
        case 2684: return "tu"; // ˆE
        case 2686: return "tuan"; // ˆF
        case 2688: return "lue"; // ˆG
        case 2690: return "hui"; // ˆH
        case 2692: return "yi"; // ˆI
        case 2694: return "luan"; // ˆJ
        case 2696: return "luan"; // ˆK
        case 2698: return "ya"; // ˆL
        case 2700: return "tu"; // ˆM
        case 2702: return "ting"; // ˆN
        case 2704: return "pu"; // ˆO
        case 2706: return "lu"; // ˆP
        case 2708: return "kuai"; // ˆQ
        case 2710: return "ya"; // ˆR
        case 2712: return "yu"; // ˆS
        case 2714: return "qian"; // ˆT
        case 2716: return "qian"; // ˆU
        case 2718: return "zhuo"; // ˆV
        case 2720: return "dang"; // ˆW
        case 2722: return "qia"; // ˆX
        case 2724: return "xia"; // ˆY
        case 2726: return "shan"; // ˆZ
        case 2728: return "nie"; // ˆ[
        case 2730: return "mo"; // ˆ\
        case 2732: return "jia"; // ˆ]
        case 2734: return "zhi"; // ˆ^
        case 2736: return "xun"; // ˆ_
        case 2738: return "yi"; // ˆ`
        case 2740: return "qin"; // ˆa
        case 2742: return "mei"; // ˆb
        case 2744: return "keng"; // ˆc
        case 2746: return "tun"; // ˆd
        case 2748: return "fen"; // ˆe
        case 2750: return "bi"; // ˆf
        case 2752: return "jing"; // ˆg
        case 2754: return "di"; // ˆh
        case 2756: return "jing"; // ˆi
        case 2758: return "ji"; // ˆj
        case 2760: return "di"; // ˆk
        case 2762: return "jing"; // ˆl
        case 2764: return "pan"; // ˆm
        case 2766: return "tang"; // ˆn
        case 2768: return "ju"; // ˆo
        case 2770: return "zhi"; // ˆp
        case 2772: return "gua"; // ˆq
        case 2774: return "tai"; // ˆr
        case 2776: return "shang"; // ˆs
        case 2778: return "yang"; // ˆt
        case 2780: return "fo"; // ˆu
        case 2782: return "lu"; // ˆv
        case 2784: return "qiu"; // ˆw
        case 2786: return "gou"; // ˆx
        case 2788: return "xue"; // ˆy
        case 2790: return "ba"; // ˆz
        case 2792: return "ling"; // ˆ{
        case 2794: return "zhu"; // ˆ|
        case 2796: return "fu"; // ˆ}
        case 2798: return "hu"; // ˆ~
        case 2800: return ""; // ÕÅ
        case 2802: return "zhi"; // ˆ€
        case 2804: return "ao"; // ˆ
        case 2806: return "dai"; // ˆ‚
        case 2808: return "pao"; // ˆƒ
        case 2810: return "min"; // ˆ„
        case 2812: return "ji"; // ˆ…
        case 2814: return "he"; // ˆ†
        case 2816: return "lu"; // ˆ‡
        case 2818: return "ci"; // ˆˆ
        case 2820: return "chi"; // ˆ‰
        case 2822: return "yin"; // ˆŠ
        case 2824: return "hou"; // ˆ‹
        case 2826: return "dui"; // ˆŒ
        case 2828: return "zhao"; // ˆ
        case 2830: return "fu"; // ˆŽ
        case 2832: return "guang"; // ˆ
        case 2834: return "yao"; // ˆ
        case 2836: return "duo"; // ˆ‘
        case 2838: return "gui"; // ˆ’
        case 2840: return "cha"; // ˆ“
        case 2842: return "yang"; // ˆ”
        case 2844: return "xie"; // ˆ•
        case 2846: return "shou"; // ˆ–
        case 2848: return "bing"; // ˆ—
        case 2850: return "hong"; // ˆ˜
        case 2852: return "da"; // ˆ™
        case 2854: return "ka"; // ˆš
        case 2856: return "dang"; // ˆ›
        case 2858: return "hang"; // ˆœ
        case 2860: return "an"; // ˆ
        case 2862: return "xing"; // ˆž
        case 2864: return "xian"; // ˆŸ
        case 2866: return "bang"; // ˆ 
        case 2868: return "fou"; // ˆ¡
        case 2870: return "bei"; // ˆ¢
        case 2872: return "yi"; // ˆ£
        case 2874: return "yin"; // ˆ¤
        case 2876: return "an"; // ˆ¥
        case 2878: return "xu"; // ˆ¦
        case 2880: return "zhui"; // ˆ§
        case 2882: return "qin"; // ˆ¨
        case 2884: return "beng"; // ˆ©
        case 2886: return "fang"; // ˆª
        case 2888: return "que"; // ˆ«
        case 2890: return "yong"; // ˆ¬
        case 2892: return "jun4      "; // ˆ­
        case 2894: return "jia"; // ˆ®
        case 2896: return "di"; // ˆ¯
        case 2898: return "lang"; // ˆ°
        case 2900: return "juan"; // ˆ±
        case 2902: return "jin"; // ˆ²
        case 2904: return "zhe"; // ˆ³
        case 2906: return "lie"; // ˆ´
        case 2908: return "hua"; // ˆµ
        case 2910: return "bu"; // ˆ¶
        case 2912: return "jiong"; // ˆ·
        case 2914: return "ye"; // ˆ¸
        case 2916: return "di"; // ˆ¹
        case 2918: return "ya"; // ˆº
        case 2920: return "juan"; // ˆ»
        case 2922: return "su"; // ˆ¼
        case 2924: return "qing"; // ˆ½
        case 2926: return "wan"; // ˆ¾
        case 2928: return "ju"; // ˆ¿
        case 2930: return "lun"; // ˆÀ
        case 2932: return "zheng"; // ˆÁ
        case 2934: return "kong"; // ˆÂ
        case 2936: return "chong"; // ˆÃ
        case 2938: return "dong"; // ˆÄ
        case 2940: return "tan"; // ˆÅ
        case 2942: return "cai"; // ˆÆ
        case 2944: return "tou"; // ˆÇ
        case 2946: return "bang"; // ˆÈ
        case 2948: return "kan"; // ˆÉ
        case 2950: return "duo"; // ˆÊ
        case 2952: return "zhi"; // ˆË
        case 2954: return "zhi"; // ˆÌ
        case 2956: return "dui"; // ˆÍ
        case 2958: return "qi"; // ˆÎ
        case 2960: return "ju"; // ˆÏ
        case 2962: return "ni"; // ˆÐ
        case 2964: return "ke"; // ˆÑ
        case 2966: return "kun"; // ˆÒ
        case 2968: return "ni"; // ˆÓ
        case 2970: return "jian"; // ˆÔ
        case 2972: return "gang"; // ˆÕ
        case 2974: return "yu"; // ˆÖ
        case 2976: return "e"; // ˆ×
        case 2978: return "gu"; // ˆØ
        case 2980: return "leng"; // ˆÙ
        case 2982: return "fang"; // ˆÚ
        case 2984: return "ya"; // ˆÛ
        case 2986: return "kun"; // ˆÜ
        case 2988: return "an"; // ˆÝ
        case 2990: return "shen"; // ˆÞ
        case 2992: return "nao"; // ˆß
        case 2994: return "tu"; // ˆà
        case 2996: return "cheng"; // ˆá
        case 2998: return "huan"; // ˆâ
        case 3000: return "bi"; // ˆã
        case 3002: return "lian"; // ˆä
        case 3004: return "wo"; // ˆå
        case 3006: return "zhuan"; // ˆæ
        case 3008: return "bao"; // ˆç
        case 3010: return "yu"; // ˆè
        case 3012: return "mao"; // ˆé
        case 3014: return "jie"; // ˆê
        case 3016: return "nuo"; // ˆë
        case 3018: return "ai"; // ˆì
        case 3020: return "geng"; // ˆí
        case 3022: return "zong"; // ˆî
        case 3024: return "yu"; // ˆï
        case 3026: return "huang"; // ˆð
        case 3028: return "e"; // ˆñ
        case 3030: return "yao"; // ˆò
        case 3032: return "bao"; // ˆó
        case 3034: return "ji"; // ˆô
        case 3036: return "mei"; // ˆõ
        case 3038: return "chang"; // ˆö
        case 3040: return "tuo"; // ˆ÷
        case 3042: return "yin"; // ˆø
        case 3044: return "feng"; // ˆù
        case 3046: return "zhong"; // ˆú
        case 3048: return "jie"; // ˆû
        case 3050: return "jin"; // ˆü
        case 3052: return "heng"; // ˆý
        case 3054: return "gang"; // ˆþ
        case 3056: return "chuan"; // ‰@
        case 3058: return "jian"; // ‰A
        case 3060: return "ping"; // ‰B
        case 3062: return "lei"; // ‰C
        case 3064: return "jiang"; // ‰D
        case 3066: return "huang"; // ‰E
        case 3068: return "duan"; // ‰F
        case 3070: return "wan"; // ‰G
        case 3072: return "xuan"; // ‰H
        case 3074: return "xi"; // ‰I
        case 3076: return "ji"; // ‰J
        case 3078: return "kuai"; // ‰K
        case 3080: return "ying"; // ‰L
        case 3082: return "yong"; // ‰M
        case 3084: return "kai"; // ‰N
        case 3086: return "su"; // ‰O
        case 3088: return "shi"; // ‰P
        case 3090: return "mi"; // ‰Q
        case 3092: return "weng"; // ‰R
        case 3094: return "cheng"; // ‰S
        case 3096: return "tu"; // ‰T
        case 3098: return "qiao"; // ‰U
        case 3100: return "zhong"; // ‰V
        case 3102: return "li"; // ‰W
        case 3104: return "peng"; // ‰X
        case 3106: return "bang"; // ‰Y
        case 3108: return "zang"; // ‰Z
        case 3110: return "dui"; // ‰[
        case 3112: return "tian"; // ‰\
        case 3114: return "wu"; // ‰]
        case 3116: return "zheng"; // ‰^
        case 3118: return "xun"; // ‰_
        case 3120: return "zhen"; // ‰`
        case 3122: return "ai"; // ‰a
        case 3124: return "gong"; // ‰b
        case 3126: return "yan"; // ‰c
        case 3128: return "kan"; // ‰d
        case 3130: return "wen"; // ‰e
        case 3132: return "xie"; // ‰f
        case 3134: return "liu"; // ‰g
        case 3136: return "hai"; // ‰h
        case 3138: return "lang"; // ‰i
        case 3140: return "shang"; // ‰j
        case 3142: return "peng"; // ‰k
        case 3144: return "beng"; // ‰l
        case 3146: return "chen"; // ‰m
        case 3148: return "lu"; // ‰n
        case 3150: return "lu"; // ‰o
        case 3152: return "ou"; // ‰p
        case 3154: return "qian"; // ‰q
        case 3156: return "mei"; // ‰r
        case 3158: return "mo"; // ‰s
        case 3160: return "tuan"; // ‰t
        case 3162: return "shuan"; // ‰u
        case 3164: return "lou"; // ‰v
        case 3166: return "biao"; // ‰w
        case 3168: return "ce"; // ‰x
        case 3170: return "di"; // ‰y
        case 3172: return "zhang"; // ‰z
        case 3174: return "kan"; // ‰{
        case 3176: return "dian"; // ‰|
        case 3178: return "chen"; // ‰}
        case 3180: return "zhi"; // ‰~
        case 3182: return ""; // ÕÅ
        case 3184: return "ji"; // ‰€
        case 3186: return "guo"; // ‰
        case 3188: return "qiang"; // ‰‚
        case 3190: return "jin"; // ‰ƒ
        case 3192: return "di"; // ‰„
        case 3194: return "cui"; // ‰…
        case 3196: return "yan"; // ‰†
        case 3198: return "ta"; // ‰‡
        case 3200: return "zeng"; // ‰ˆ
        case 3202: return "qian"; // ‰‰
        case 3204: return "wei"; // ‰Š
        case 3206: return "zhui"; // ‰‹
        case 3208: return "qiao"; // ‰Œ
        case 3210: return "chan"; // ‰
        case 3212: return "shan"; // ‰Ž
        case 3214: return "ba"; // ‰
        case 3216: return "pu"; // ‰
        case 3218: return "tui"; // ‰‘
        case 3220: return "dong"; // ‰’
        case 3222: return "fan"; // ‰“
        case 3224: return "qiao"; // ‰”
        case 3226: return "dun"; // ‰•
        case 3228: return "zun"; // ‰–
        case 3230: return "di"; // ‰—
        case 3232: return "sheng"; // ‰˜
        case 3234: return "duo"; // ‰™
        case 3236: return "duo"; // ‰š
        case 3238: return "tan"; // ‰›
        case 3240: return "deng"; // ‰œ
        case 3242: return "wu"; // ‰
        case 3244: return "fen"; // ‰ž
        case 3246: return "huang"; // ‰Ÿ
        case 3248: return "tan"; // ‰ 
        case 3250: return "da"; // ‰¡
        case 3252: return "ye"; // ‰¢
        case 3254: return "zhu"; // ‰£
        case 3256: return "jian"; // ‰¤
        case 3258: return "ao"; // ‰¥
        case 3260: return "qiang"; // ‰¦
        case 3262: return "qiao"; // ‰§
        case 3264: return "ken"; // ‰¨
        case 3266: return "yi"; // ‰©
        case 3268: return "pi"; // ‰ª
        case 3270: return "dian"; // ‰«
        case 3272: return "jiang"; // ‰¬
        case 3274: return "ye"; // ‰­
        case 3276: return "bo"; // ‰®
        case 3278: return "tan"; // ‰¯
        case 3280: return "lan"; // ‰°
        case 3282: return "ju"; // ‰±
        case 3284: return "huai"; // ‰²
        case 3286: return "dang"; // ‰³
        case 3288: return "rang"; // ‰´
        case 3290: return "qian"; // ‰µ
        case 3292: return "xun"; // ‰¶
        case 3294: return "lan"; // ‰·
        case 3296: return "xi"; // ‰¸
        case 3298: return "ai"; // ‰¹
        case 3300: return "ya"; // ‰º
        case 3302: return "dao"; // ‰»
        case 3304: return "ruan"; // ‰¼
        case 3306: return "jin"; // ‰½
        case 3308: return "lei"; // ‰¾
        case 3310: return "kuang"; // ‰¿
        case 3312: return "lu"; // ‰À
        case 3314: return "yan"; // ‰Á
        case 3316: return "tan"; // ‰Â
        case 3318: return "wei"; // ‰Ã
        case 3320: return "huai"; // ‰Ä
        case 3322: return "long"; // ‰Å
        case 3324: return "long"; // ‰Æ
        case 3326: return "rui"; // ‰Ç
        case 3328: return "li"; // ‰È
        case 3330: return "lin"; // ‰É
        case 3332: return "chan"; // ‰Ê
        case 3334: return "xun"; // ‰Ë
        case 3336: return "yan"; // ‰Ì
        case 3338: return "lei"; // ‰Í
        case 3340: return "ba"; // ‰Î
        case 3342: return "wan"; // ‰Ï
        case 3344: return "san"; // ‰Ð
        case 3346: return "zhuan"; // ‰Ñ
        case 3348: return "yi"; // ‰Ò
        case 3350: return "mai"; // ‰Ó
        case 3352: return "zhu"; // ‰Ô
        case 3354: return "zhuan"; // ‰Õ
        case 3356: return "hu"; // ‰Ö
        case 3358: return "kun"; // ‰×
        case 3360: return "hu"; // ‰Ø
        case 3362: return "xu"; // ‰Ù
        case 3364: return "kun"; // ‰Ú
        case 3366: return "shou"; // ‰Û
        case 3368: return "mang"; // ‰Ü
        case 3370: return "dun"; // ‰Ý
        case 3372: return "shou"; // ‰Þ
        case 3374: return "yi"; // ‰ß
        case 3376: return "ying"; // ‰à
        case 3378: return "jiang"; // ‰á
        case 3380: return "pang"; // ‰â
        case 3382: return "zhai"; // ‰ã
        case 3384: return "bian"; // ‰ä
        case 3386: return "sui"; // ‰å
        case 3388: return "qun"; // ‰æ
        case 3390: return "ling"; // ‰ç
        case 3392: return "cuo"; // ‰è
        case 3394: return "xuan"; // ‰é
        case 3396: return "xie"; // ‰ê
        case 3398: return "nao"; // ‰ë
        case 3400: return "jia"; // ‰ì
        case 3402: return "wan"; // ‰í
        case 3404: return "wan"; // ‰î
        case 3406: return "duo"; // ‰ï
        case 3408: return "qing"; // ‰ð
        case 3410: return "oes"; // ‰ñ
        case 3412: return "gou"; // ‰ò
        case 3414: return "qi"; // ‰ó
        case 3416: return "meng"; // ‰ô
        case 3418: return "meng"; // ‰õ
        case 3420: return "chen"; // ‰ö
        case 3422: return "ze"; // ‰÷
        case 3424: return "guai"; // ‰ø
        case 3426: return "gao"; // ‰ù
        case 3428: return "ben"; // ‰ú
        case 3430: return "tai"; // ‰û
        case 3432: return "yan"; // ‰ü
        case 3434: return "bi"; // ‰ý
        case 3436: return "hua"; // ‰þ
        case 3438: return "yun"; // Š@
        case 3440: return "ga"; // ŠA
        case 3442: return "ba"; // ŠB
        case 3444: return "en"; // ŠC
        case 3446: return "di"; // ŠD
        case 3448: return "pao"; // ŠE
        case 3450: return "juan"; // ŠF
        case 3452: return "lie"; // ŠG
        case 3454: return "dian"; // ŠH
        case 3456: return "yang"; // ŠI
        case 3458: return "huan"; // ŠJ
        case 3460: return "kai"; // ŠK
        case 3462: return "zha"; // ŠL
        case 3464: return "ben"; // ŠM
        case 3466: return "huang"; // ŠN
        case 3468: return "fei"; // ŠO
        case 3470: return "diao"; // ŠP
        case 3472: return "xun"; // ŠQ
        case 3474: return "beng"; // ŠR
        case 3476: return "ao"; // ŠS
        case 3478: return "weng"; // ŠT
        case 3480: return "po"; // ŠU
        case 3482: return "wu"; // ŠV
        case 3484: return "ao"; // ŠW
        case 3486: return "jiang"; // ŠX
        case 3488: return "lian"; // ŠY
        case 3490: return "duo"; // ŠZ
        case 3492: return "yun"; // Š[
        case 3494: return "jiang"; // Š\
        case 3496: return "shi"; // Š]
        case 3498: return "fen"; // Š^
        case 3500: return "huo"; // Š_
        case 3502: return "bi"; // Š`
        case 3504: return "luan"; // Ša
        case 3506: return "duo"; // Šb
        case 3508: return "ding"; // Šc
        case 3510: return "qian"; // Šd
        case 3512: return "jiu"; // Še
        case 3514: return "nuan"; // Šf
        case 3516: return "cha"; // Šg
        case 3518: return "xian"; // Šh
        case 3520: return "fan"; // Ši
        case 3522: return "ji"; // Šj
        case 3524: return "hong"; // Šk
        case 3526: return "dan"; // Šl
        case 3528: return "you"; // Šm
        case 3530: return "jing"; // Šn
        case 3532: return "ha"; // Šo
        case 3534: return "wen"; // Šp
        case 3536: return "zhong"; // Šq
        case 3538: return "pa"; // Šr
        case 3540: return "keng"; // Šs
        case 3542: return "zhong"; // Št
        case 3544: return "yun"; // Šu
        case 3546: return "pei"; // Šv
        case 3548: return "chi"; // Šw
        case 3550: return "yue"; // Šx
        case 3552: return "zhuan"; // Šy
        case 3554: return "yan"; // Šz
        case 3556: return "na"; // Š{
        case 3558: return "xin"; // Š|
        case 3560: return "fen"; // Š}
        case 3562: return "feng"; // Š~
        case 3564: return ""; // ÕÅ
        case 3566: return "wan"; // Š€
        case 3568: return "du"; // Š
        case 3570: return "ba"; // Š‚
        case 3572: return "zhuo"; // Šƒ
        case 3574: return "zhao"; // Š„
        case 3576: return "nai"; // Š…
        case 3578: return "yuan"; // Š†
        case 3580: return "tou"; // Š‡
        case 3582: return "xian"; // Šˆ
        case 3584: return "yi"; // Š‰
        case 3586: return "e"; // ŠŠ
        case 3588: return "mo"; // Š‹
        case 3590: return "bi"; // ŠŒ
        case 3592: return "shen"; // Š
        case 3594: return "e"; // ŠŽ
        case 3596: return "he"; // Š
        case 3598: return "xu"; // Š
        case 3600: return "fa"; // Š‘
        case 3602: return "zheng"; // Š’
        case 3604: return "min"; // Š“
        case 3606: return "ban"; // Š”
        case 3608: return "fu"; // Š•
        case 3610: return "ling"; // Š–
        case 3612: return "zi"; // Š—
        case 3614: return "ran"; // Š˜
        case 3616: return "shan"; // Š™
        case 3618: return "yang"; // Šš
        case 3620: return "man"; // Š›
        case 3622: return "zi"; // Šœ
        case 3624: return "ju"; // Š
        case 3626: return "ren"; // Šž
        case 3628: return "dong"; // ŠŸ
        case 3630: return "ji"; // Š 
        case 3632: return "gai"; // Š¡
        case 3634: return "xiang"; // Š¢
        case 3636: return "hua"; // Š£
        case 3638: return "juan"; // Š¤
        case 3640: return "gou"; // Š¥
        case 3642: return "jian"; // Š¦
        case 3644: return "jian"; // Š§
        case 3646: return "nian"; // Š¨
        case 3648: return "zhi"; // Š©
        case 3650: return "zhen"; // Šª
        case 3652: return "xian"; // Š«
        case 3654: return "heng"; // Š¬
        case 3656: return "guang"; // Š­
        case 3658: return "jun1      "; // Š®
        case 3660: return "kua"; // Š¯
        case 3662: return "yan"; // Š°
        case 3664: return "ming"; // Š±
        case 3666: return "lie"; // Š²
        case 3668: return "pei"; // Š³
        case 3670: return "e"; // Š´
        case 3672: return "you"; // Šµ
        case 3674: return "yan"; // Š¶
        case 3676: return "xian"; // Š·
        case 3678: return "ti"; // Š¸
        case 3680: return "wa"; // Š¹
        case 3682: return "quan"; // Šº
        case 3684: return "song"; // Š»
        case 3686: return "hong"; // Š¼
        case 3688: return "dan"; // Š½
        case 3690: return "shao"; // Š¾
        case 3692: return "cheng"; // Š¿
        case 3694: return "xie"; // ŠÀ
        case 3696: return "mang"; // ŠÁ
        case 3698: return "fu"; // ŠÂ
        case 3700: return "wu"; // ŠÃ
        case 3702: return "ke"; // ŠÄ
        case 3704: return "chuo"; // ŠÅ
        case 3706: return "chuo"; // ŠÆ
        case 3708: return "tian"; // ŠÇ
        case 3710: return "xing"; // ŠÈ
        case 3712: return "nan"; // ŠÉ
        case 3714: return "yu"; // ŠÊ
        case 3716: return "bi"; // ŠË
        case 3718: return "nei"; // ŠÌ
        case 3720: return "zhi"; // ŠÍ
        case 3722: return "han"; // ŠÎ
        case 3724: return "zhuan"; // ŠÏ
        case 3726: return "ping"; // ŠÐ
        case 3728: return "tui"; // ŠÑ
        case 3730: return "xian"; // ŠÒ
        case 3732: return "wu"; // ŠÓ
        case 3734: return "yan"; // ŠÔ
        case 3736: return "wu"; // ŠÕ
        case 3738: return "xi"; // ŠÖ
        case 3740: return "yan"; // Š×
        case 3742: return "yu"; // ŠØ
        case 3744: return "si"; // ŠÙ
        case 3746: return "li"; // ŠÚ
        case 3748: return "ju"; // ŠÛ
        case 3750: return "zhui"; // ŠÜ
        case 3752: return "qi"; // ŠÝ
        case 3754: return "xian"; // ŠÞ
        case 3756: return "zhuo"; // Šß
        case 3758: return "dong"; // Šà
        case 3760: return "lu"; // Šá
        case 3762: return "ai"; // Šâ
        case 3764: return "e"; // Šã
        case 3766: return "lou"; // Šä
        case 3768: return "mian"; // Šå
        case 3770: return "cong"; // Šæ
        case 3772: return "pei"; // Šç
        case 3774: return "ju"; // Šè
        case 3776: return "cai"; // Šé
        case 3778: return "ling"; // Šê
        case 3780: return "xiao"; // Šë
        case 3782: return "shu"; // Šì
        case 3784: return "qi"; // Ší
        case 3786: return "hui"; // Šî
        case 3788: return "fan"; // Šï
        case 3790: return "wo"; // Šð
        case 3792: return "wo"; // Šñ
        case 3794: return "tan"; // Šò
        case 3796: return "fei"; // Šó
        case 3798: return "fei"; // Šô
        case 3800: return "tian"; // Šõ
        case 3802: return "ni"; // Šö
        case 3804: return "quan"; // Š÷
        case 3806: return "jing"; // Šø
        case 3808: return "jing"; // Šù
        case 3810: return "jin"; // Šú
        case 3812: return "dian"; // Šû
        case 3814: return "xing"; // Šü
        case 3816: return "hu"; // Šý
        case 3818: return "wan"; // Šþ
        case 3820: return "lai"; // ‹@
        case 3822: return "yin"; // ‹A
        case 3824: return "zhou"; // ‹B
        case 3826: return "nao"; // ‹C
        case 3828: return "fu"; // ‹D
        case 3830: return "lun"; // ‹E
        case 3832: return "an"; // ‹F
        case 3834: return "kun"; // ‹G
        case 3836: return "yin"; // ‹H
        case 3838: return "ya"; // ‹I
        case 3840: return "ju"; // ‹J
        case 3842: return "li"; // ‹K
        case 3844: return "dian"; // ‹L
        case 3846: return "xian"; // ‹M
        case 3848: return "hua"; // ‹N
        case 3850: return "hua"; // ‹O
        case 3852: return "yang"; // ‹P
        case 3854: return "yao"; // ‹Q
        case 3856: return "nan"; // ‹R
        case 3858: return "chuo"; // ‹S
        case 3860: return "jia"; // ‹T
        case 3862: return "yu"; // ‹U
        case 3864: return "yu"; // ‹V
        case 3866: return "wei"; // ‹W
        case 3868: return "di"; // ‹X
        case 3870: return "rou"; // ‹Y
        case 3872: return "mei"; // ‹Z
        case 3874: return "dan"; // ‹[
        case 3876: return "nen"; // ‹\
        case 3878: return "qin"; // ‹]
        case 3880: return "hui"; // ‹^
        case 3882: return "wo"; // ‹_
        case 3884: return "qian"; // ‹`
        case 3886: return "chun"; // ‹a
        case 3888: return "miao"; // ‹b
        case 3890: return "fu"; // ‹c
        case 3892: return "jie"; // ‹d
        case 3894: return "duan"; // ‹e
        case 3896: return "yi"; // ‹f
        case 3898: return "zhong"; // ‹g
        case 3900: return "huang"; // ‹h
        case 3902: return "mian"; // ‹i
        case 3904: return "an"; // ‹j
        case 3906: return "ying"; // ‹k
        case 3908: return "xuan"; // ‹l
        case 3910: return "jie"; // ‹m
        case 3912: return "wei"; // ‹n
        case 3914: return "zheng"; // ‹o
        case 3916: return "qiu"; // ‹p
        case 3918: return "ti"; // ‹q
        case 3920: return "xie"; // ‹r
        case 3922: return "duo"; // ‹s
        case 3924: return "lian"; // ‹t
        case 3926: return "mao"; // ‹u
        case 3928: return "ran"; // ‹v
        case 3930: return "si"; // ‹w
        case 3932: return "pian"; // ‹x
        case 3934: return "wei"; // ‹y
        case 3936: return "wa"; // ‹z
        case 3938: return "cu"; // ‹{
        case 3940: return "hu"; // ‹|
        case 3942: return "jie"; // ‹}
        case 3944: return "bao"; // ‹~
        case 3946: return ""; // ÕÅ
        case 3948: return "xu"; // ‹€
        case 3950: return "yu"; // ‹
        case 3952: return "gui"; // ‹‚
        case 3954: return "chu"; // ‹ƒ
        case 3956: return "yao"; // ‹„
        case 3958: return "yuan"; // ‹…
        case 3960: return "rong"; // ‹†
        case 3962: return "ru"; // ‹‡
        case 3964: return "liu"; // ‹ˆ
        case 3966: return "mei"; // ‹‰
        case 3968: return "pan"; // ‹Š
        case 3970: return "ao"; // ‹‹
        case 3972: return "ma"; // ‹Œ
        case 3974: return "kui"; // ‹
        case 3976: return "qin"; // ‹Ž
        case 3978: return "zhen"; // ‹
        case 3980: return "yuan"; // ‹
        case 3982: return "jie"; // ‹‘
        case 3984: return "rong"; // ‹’
        case 3986: return "ming"; // ‹“
        case 3988: return "ying"; // ‹”
        case 3990: return "su"; // ‹•
        case 3992: return "niao"; // ‹–
        case 3994: return "tao"; // ‹—
        case 3996: return "bang"; // ‹˜
        case 3998: return "lang"; // ‹™
        case 4000: return "nao"; // ‹š
        case 4002: return "bao"; // ‹›
        case 4004: return "pi"; // ‹œ
        case 4006: return "yi"; // ‹
        case 4008: return "yu"; // ‹ž
        case 4010: return "xuan"; // ‹Ÿ
        case 4012: return "yuan"; // ‹ 
        case 4014: return "yi"; // ‹¡
        case 4016: return "kang"; // ‹¢
        case 4018: return "yong"; // ‹£
        case 4020: return "ni"; // ‹¤
        case 4022: return "gui"; // ‹¥
        case 4024: return "jin"; // ‹¦
        case 4026: return "tuan"; // ‹§
        case 4028: return "ze"; // ‹¨
        case 4030: return "nan"; // ‹©
        case 4032: return "lao"; // ‹ª
        case 4034: return "zhe"; // ‹«
        case 4036: return "hu"; // ‹¬
        case 4038: return "hu"; // ‹­
        case 4040: return "ao"; // ‹®
        case 4042: return "nen"; // ‹¯
        case 4044: return "ma"; // ‹°
        case 4046: return "pie"; // ‹±
        case 4048: return "gu"; // ‹²
        case 4050: return "wu"; // ‹³
        case 4052: return "jiao"; // ‹´
        case 4054: return "duo"; // ‹µ
        case 4056: return "zhan"; // ‹¶
        case 4058: return "miao"; // ‹·
        case 4060: return "xian"; // ‹¸
        case 4062: return "xian"; // ‹¹
        case 4064: return "mo"; // ‹º
        case 4066: return "liao"; // ‹»
        case 4068: return "lian"; // ‹¼
        case 4070: return "hua"; // ‹½
        case 4072: return "gui"; // ‹¾
        case 4074: return "deng"; // ‹¿
        case 4076: return "zhi"; // ‹À
        case 4078: return "xu"; // ‹Á
        case 4080: return "yi"; // ‹Â
        case 4082: return "hua"; // ‹Ã
        case 4084: return "xi"; // ‹Ä
        case 4086: return "kui"; // ‹Å
        case 4088: return "rao"; // ‹Æ
        case 4090: return "yan"; // ‹Ç
        case 4092: return "chan"; // ‹È
        case 4094: return "jiao"; // ‹É
        case 4096: return "mei"; // ‹Ê
        case 4098: return "fan"; // ‹Ë
        case 4100: return "fan"; // ‹Ì
        case 4102: return "yan"; // ‹Í
        case 4104: return "yi"; // ‹Î
        case 4106: return "hei"; // ‹Ï
        case 4108: return "jiao"; // ‹Ð
        case 4110: return "fan"; // ‹Ñ
        case 4112: return "shi"; // ‹Ò
        case 4114: return "sui"; // ‹Ó
        case 4116: return "qiang"; // ‹Ô
        case 4118: return "lian"; // ‹Õ
        case 4120: return "qiong"; // ‹Ö
        case 4122: return "xin"; // ‹×
        case 4124: return "niao"; // ‹Ø
        case 4126: return "dong"; // ‹Ù
        case 4128: return "yi"; // ‹Ú
        case 4130: return "can"; // ‹Û
        case 4132: return "ai"; // ‹Ü
        case 4134: return "niang"; // ‹Ý
        case 4136: return "ning"; // ‹Þ
        case 4138: return "mo"; // ‹ß
        case 4140: return "diao"; // ‹à
        case 4142: return "chou"; // ‹á
        case 4144: return "jin"; // ‹â
        case 4146: return "ci"; // ‹ã
        case 4148: return "yu"; // ‹ä
        case 4150: return "pin"; // ‹å
        case 4152: return "rong"; // ‹æ
        case 4154: return "nou"; // ‹ç
        case 4156: return "er"; // ‹è
        case 4158: return "yan"; // ‹é
        case 4160: return "tai"; // ‹ê
        case 4162: return "ying"; // ‹ë
        case 4164: return "qian"; // ‹ì
        case 4166: return "yue"; // ‹í
        case 4168: return "mian"; // ‹î
        case 4170: return "bi"; // ‹ï
        case 4172: return "shen"; // ‹ð
        case 4174: return "xing"; // ‹ñ
        case 4176: return "ni"; // ‹ò
        case 4178: return "du"; // ‹ó
        case 4180: return "liu"; // ‹ô
        case 4182: return "yuan"; // ‹õ
        case 4184: return "lan"; // ‹ö
        case 4186: return "yan"; // ‹÷
        case 4188: return "ling"; // ‹ø
        case 4190: return "jiao"; // ‹ù
        case 4192: return "rang"; // ‹ú
        case 4194: return "lan"; // ‹û
        case 4196: return "qian"; // ‹ü
        case 4198: return "ying"; // ‹ý
        case 4200: return "shuan"; // ‹þ
        case 4202: return "hui"; // Œ@
        case 4204: return "quan"; // ŒA
        case 4206: return "mi"; // ŒB
        case 4208: return "li"; // ŒC
        case 4210: return "lian"; // ŒD
        case 4212: return "yan"; // ŒE
        case 4214: return "zhu"; // ŒF
        case 4216: return "lan"; // ŒG
        case 4218: return "jue"; // ŒH
        case 4220: return "ma"; // ŒI
        case 4222: return "xin"; // ŒJ
        case 4224: return "si"; // ŒK
        case 4226: return "tai"; // ŒL
        case 4228: return "you"; // ŒM
        case 4230: return "ni"; // ŒN
        case 4232: return "sun"; // ŒO
        case 4234: return "me"; // ŒP
        case 4236: return "cong"; // ŒQ
        case 4238: return "wan"; // ŒR
        case 4240: return "ya"; // ŒS
        case 4242: return "ni"; // ŒT
        case 4244: return "zi"; // ŒU
        case 4246: return "li"; // ŒV
        case 4248: return "xue"; // ŒW
        case 4250: return "bo"; // ŒX
        case 4252: return "nai"; // ŒY
        case 4254: return "nie"; // ŒZ
        case 4256: return "ying"; // Œ[
        case 4258: return "luan"; // Œ\
        case 4260: return "rong"; // Œ]
        case 4262: return "kong"; // Œ^
        case 4264: return "tu"; // Œ_
        case 4266: return "rou"; // Œ`
        case 4268: return "yao"; // Œa
        case 4270: return "yi"; // Œb
        case 4272: return "jing"; // Œc
        case 4274: return "zhun"; // Œd
        case 4276: return "zhu"; // Œe
        case 4278: return "hong"; // Œf
        case 4280: return "shi"; // Œg
        case 4282: return "yi"; // Œh
        case 4284: return "tiao"; // Œi
        case 4286: return "xi"; // Œj
        case 4288: return "cheng"; // Œk
        case 4290: return "jiong"; // Œl
        case 4292: return "gong"; // Œm
        case 4294: return "xiao"; // Œn
        case 4296: return "zha"; // Œo
        case 4298: return "dao"; // Œp
        case 4300: return "pan"; // Œq
        case 4302: return "huang"; // Œr
        case 4304: return "mi"; // Œs
        case 4306: return "kou"; // Œt
        case 4308: return "cai"; // Œu
        case 4310: return "zan"; // Œv
        case 4312: return "yuan"; // Œw
        case 4314: return "qiu"; // Œx
        case 4316: return "he"; // Œy
        case 4318: return "zhen"; // Œz
        case 4320: return "jian"; // Œ{
        case 4322: return "ning"; // Œ|
        case 4324: return "bing"; // Œ}
        case 4326: return "huan"; // Œ~
        case 4328: return ""; // ÕÅ
        case 4330: return "qin"; // Œ€
        case 4332: return "shi"; // Œ
        case 4334: return "ning"; // Œ‚
        case 4336: return "jin"; // Œƒ
        case 4338: return "ning"; // Œ„
        case 4340: return "tian"; // Œ…
        case 4342: return "yu"; // Œ†
        case 4344: return "bao"; // Œ‡
        case 4346: return "kuan"; // Œˆ
        case 4348: return "ning"; // Œ‰
        case 4350: return "lu"; // ŒŠ
        case 4352: return "qin"; // Œ‹
        case 4354: return "hu"; // ŒŒ
        case 4356: return "shi"; // Œ
        case 4358: return "ning"; // ŒŽ
        case 4360: return "shen"; // Œ
        case 4362: return "wei"; // Œ
        case 4364: return "xie"; // Œ‘
        case 4366: return "kuan"; // Œ’
        case 4368: return "hui"; // Œ“
        case 4370: return "jun4      "; // Œ”
        case 4372: return "yi"; // Œ•
        case 4374: return "yi"; // Œ–
        case 4376: return "bao"; // Œ—
        case 4378: return "qin"; // Œ˜
        case 4380: return "chong"; // Œ™
        case 4382: return "bao"; // Œš
        case 4384: return "feng"; // Œ›
        case 4386: return "lu"; // Œœ
        case 4388: return "dui"; // Œ
        case 4390: return "po"; // Œž
        case 4392: return "zhuan"; // ŒŸ
        case 4394: return "bu"; // Œ 
        case 4396: return "ke"; // Œ¡
        case 4398: return "jiang"; // Œ¢
        case 4400: return "zhuan"; // Œ£
        case 4402: return "xun"; // Œ¤
        case 4404: return "zhu"; // Œ¥
        case 4406: return "dui"; // Œ¦
        case 4408: return "dao"; // Œ§
        case 4410: return "ji"; // Œ¨
        case 4412: return "er"; // Œ©
        case 4414: return "er"; // Œª
        case 4416: return "shu"; // Œ«
        case 4418: return "chang"; // Œ¬
        case 4420: return "ma"; // Œ­
        case 4422: return "liao"; // Œ®
        case 4424: return "xian"; // Œ¯
        case 4426: return "xian"; // Œ°
        case 4428: return "kun"; // Œ±
        case 4430: return "you"; // Œ²
        case 4432: return "niao"; // Œ³
        case 4434: return "mang"; // Œ´
        case 4436: return "wang"; // Œµ
        case 4438: return "wang"; // Œ¶
        case 4440: return "wang"; // Œ·
        case 4442: return "yao"; // Œ¸
        case 4444: return "duo"; // Œ¹
        case 4446: return "kui"; // Œº
        case 4448: return "zhong"; // Œ»
        case 4450: return "gan"; // Œ¼
        case 4452: return "gu"; // Œ½
        case 4454: return "tui"; // Œ¾
        case 4456: return "gan"; // Œ¿
        case 4458: return "gan"; // ŒÀ
        case 4460: return "xi"; // ŒÁ
        case 4462: return "bi"; // ŒÂ
        case 4464: return "jie"; // ŒÃ
        case 4466: return "tian"; // ŒÄ
        case 4468: return "diao"; // ŒÅ
        case 4470: return "shi"; // ŒÆ
        case 4472: return "zhen"; // ŒÇ
        case 4474: return "xie"; // ŒÈ
        case 4476: return "ni"; // ŒÉ
        case 4478: return "xi"; // ŒÊ
        case 4480: return "wei"; // ŒË
        case 4482: return "man"; // ŒÌ
        case 4484: return "lou"; // ŒÍ
        case 4486: return "ping"; // ŒÎ
        case 4488: return "ti"; // ŒÏ
        case 4490: return "fei"; // ŒÐ
        case 4492: return "xie"; // ŒÑ
        case 4494: return "lu"; // ŒÒ
        case 4496: return "ceng"; // ŒÓ
        case 4498: return "xie"; // ŒÔ
        case 4500: return "ju"; // ŒÕ
        case 4502: return "jue"; // ŒÖ
        case 4504: return "liao"; // Œ×
        case 4506: return "jue"; // ŒØ
        case 4508: return "shu"; // ŒÙ
        case 4510: return "xie"; // ŒÚ
        case 4512: return "po"; // ŒÛ
        case 4514: return "wa"; // ŒÜ
        case 4516: return "xian"; // ŒÝ
        case 4518: return "li"; // ŒÞ
        case 4520: return "e"; // Œß
        case 4522: return "dao"; // Œà
        case 4524: return "hui"; // Œá
        case 4526: return "long"; // Œâ
        case 4528: return "ren"; // Œã
        case 4530: return "wu"; // Œä
        case 4532: return "an"; // Œå
        case 4534: return "shen"; // Œæ
        case 4536: return "chu"; // Œç
        case 4538: return "yen"; // Œè
        case 4540: return "yue"; // Œé
        case 4542: return "ban"; // Œê
        case 4544: return "yao"; // Œë
        case 4546: return "ang"; // Œì
        case 4548: return "wu"; // Œí
        case 4550: return "jie"; // Œî
        case 4552: return "e"; // Œï
        case 4554: return "fen"; // Œð
        case 4556: return "wan"; // Œñ
        case 4558: return "qian"; // Œò
        case 4560: return "qi"; // Œó
        case 4562: return "jie"; // Œô
        case 4564: return "zuo"; // Œõ
        case 4566: return "zuo"; // Œö
        case 4568: return "yang"; // Œ÷
        case 4570: return "ju"; // Œø
        case 4572: return "gang"; // Œù
        case 4574: return "xue"; // Œú
        case 4576: return "po"; // Œû
        case 4578: return "li"; // Œü
        case 4580: return "tiao"; // Œý
        case 4582: return "qu"; // Œþ
        case 4584: return "fu"; // @
        case 4586: return "tuo"; // A
        case 4588: return "pi"; // B
        case 4590: return "ao"; // C
        case 4592: return "kuang"; // D
        case 4594: return "qu"; // E
        case 4596: return "po"; // F
        case 4598: return "tiao"; // G
        case 4600: return "ling"; // H
        case 4602: return "chi"; // I
        case 4604: return "ping"; // J
        case 4606: return "ceom"; // K
        case 4608: return "bang"; // L
        case 4610: return "tong"; // M
        case 4612: return "xue"; // N
        case 4614: return "bian"; // O
        case 4616: return "he"; // P
        case 4618: return "ba"; // Q
        case 4620: return "luo"; // R
        case 4622: return "e"; // S
        case 4624: return "fu"; // T
        case 4626: return "die"; // U
        case 4628: return "lu"; // V
        case 4630: return "en"; // W
        case 4632: return "er"; // X
        case 4634: return "gai"; // Y
        case 4636: return "quan"; // Z
        case 4638: return "yi"; // [
        case 4640: return "mu"; // \
        case 4642: return "shi"; // ]
        case 4644: return "an"; // ^
        case 4646: return "wei"; // _
        case 4648: return "huan"; // `
        case 4650: return "mi"; // a
        case 4652: return "li"; // b
        case 4654: return "ji"; // c
        case 4656: return "dong"; // d
        case 4658: return "wei"; // e
        case 4660: return "you"; // f
        case 4662: return "gu"; // g
        case 4664: return "lie"; // h
        case 4666: return "yao"; // i
        case 4668: return "jiao"; // j
        case 4670: return "e"; // k
        case 4672: return "ye"; // l
        case 4674: return "bu"; // m
        case 4676: return "qun"; // n
        case 4678: return "feng"; // o
        case 4680: return "nao"; // p
        case 4682: return "li"; // q
        case 4684: return "you"; // r
        case 4686: return "xian"; // s
        case 4688: return "rong"; // t
        case 4690: return "dao"; // u
        case 4692: return "shen"; // v
        case 4694: return "cheng"; // w
        case 4696: return "tu"; // x
        case 4698: return "geng"; // y
        case 4700: return "gao"; // z
        case 4702: return "xia"; // {
        case 4704: return "yin"; // |
        case 4706: return "yu"; // }
        case 4708: return "nang"; // ~
        case 4710: return ""; // ÕÅ
        case 4712: return "kan"; // €
        case 4714: return "yan"; // 
        case 4716: return "que"; // ‚
        case 4718: return "chong"; // ƒ
        case 4720: return "ta"; // „
        case 4722: return "lin"; // …
        case 4724: return "hua"; // †
        case 4726: return "ju"; // ‡
        case 4728: return "lai"; // ˆ
        case 4730: return "min"; // ‰
        case 4732: return "kun"; // Š
        case 4734: return "kun"; // ‹
        case 4736: return "zu"; // Œ
        case 4738: return "gu"; // 
        case 4740: return "ya"; // Ž
        case 4742: return "gang"; // 
        case 4744: return "lun"; // 
        case 4746: return "lun"; // ‘
        case 4748: return "ling"; // ’
        case 4750: return "duo"; // “
        case 4752: return "zheng"; // ”
        case 4754: return "yin"; // •
        case 4756: return "dong"; // –
        case 4758: return "han"; // —
        case 4760: return "zheng"; // ˜
        case 4762: return "wei"; // ™
        case 4764: return "bi"; // š
        case 4766: return "jie"; // ›
        case 4768: return "zu"; // œ
        case 4770: return "ku"; // 
        case 4772: return "dong"; // ž
        case 4774: return "yin"; // Ÿ
        case 4776: return "zi"; //  
        case 4778: return "ze"; // ¡
        case 4780: return "huang"; // ¢
        case 4782: return "yu"; // £
        case 4784: return "yang"; // ¤
        case 4786: return "feng"; // ¥
        case 4788: return "qiu"; // ¦
        case 4790: return "yang"; // §
        case 4792: return "ti"; // ¨
        case 4794: return "yi"; // ©
        case 4796: return "zhi"; // ª
        case 4798: return "die"; // «
        case 4800: return "e"; // ¬
        case 4802: return "zhu"; // ­
        case 4804: return "kan"; // ®
        case 4806: return "lu"; // ¯
        case 4808: return "yan"; // °
        case 4810: return "mei"; // ±
        case 4812: return "han"; // ²
        case 4814: return "ji"; // ³
        case 4816: return "huan"; // ´
        case 4818: return "ting"; // µ
        case 4820: return "wu"; // ¶
        case 4822: return "yu"; // ·
        case 4824: return "zong"; // ¸
        case 4826: return "lan"; // ¹
        case 4828: return "ke"; // º
        case 4830: return "yan"; // »
        case 4832: return "yan"; // ¼
        case 4834: return "wei"; // ½
        case 4836: return "zong"; // ¾
        case 4838: return "cha"; // ¿
        case 4840: return "suo"; // À
        case 4842: return "ke"; // Á
        case 4844: return "qin"; // Â
        case 4846: return "qi"; // Ã
        case 4848: return "tu"; // Ä
        case 4850: return "dui"; // Å
        case 4852: return "xi"; // Æ
        case 4854: return "weng"; // Ç
        case 4856: return "cang"; // È
        case 4858: return "dang"; // É
        case 4860: return "ying"; // Ê
        case 4862: return "jie"; // Ë
        case 4864: return "ai"; // Ì
        case 4866: return "liu"; // Í
        case 4868: return "wu"; // Î
        case 4870: return "kao"; // Ï
        case 4872: return "beng"; // Ð
        case 4874: return "dian"; // Ñ
        case 4876: return "qian"; // Ò
        case 4878: return "yong"; // Ó
        case 4880: return "nie"; // Ô
        case 4882: return "cuo"; // Õ
        case 4884: return "shi"; // Ö
        case 4886: return "ruo"; // ×
        case 4888: return "song"; // Ø
        case 4890: return "zong"; // Ù
        case 4892: return "jiang"; // Ú
        case 4894: return "liao"; // Û
        case 4896: return "kang"; // Ü
        case 4898: return "chan"; // Ý
        case 4900: return "di"; // Þ
        case 4902: return "can"; // ß
        case 4904: return "ding"; // à
        case 4906: return "tu"; // á
        case 4908: return "lou"; // â
        case 4910: return "zhan"; // ã
        case 4912: return "zhan"; // ä
        case 4914: return "ao"; // å
        case 4916: return "cao"; // æ
        case 4918: return "qu"; // ç
        case 4920: return "qiang"; // è
        case 4922: return "zui"; // é
        case 4924: return "zui"; // ê
        case 4926: return "dao"; // ë
        case 4928: return "dao"; // ì
        case 4930: return "xi"; // í
        case 4932: return "yu"; // î
        case 4934: return "pei"; // ï
        case 4936: return "long"; // ð
        case 4938: return "xiang"; // ñ
        case 4940: return "zheng"; // ò
        case 4942: return "bo"; // ó
        case 4944: return "qin"; // ô
        case 4946: return "jiao"; // õ
        case 4948: return "yan"; // ö
        case 4950: return "lao"; // ÷
        case 4952: return "zhan"; // ø
        case 4954: return "liao"; // ù
        case 4956: return "liao"; // ú
        case 4958: return "jin"; // û
        case 4960: return "duo"; // ü
        case 4962: return "zun"; // ý
        case 4964: return "qiao"; // þ
        case 4966: return "gui"; // Ž@
        case 4968: return "yao"; // ŽA
        case 4970: return "jiao"; // ŽB
        case 4972: return "yao"; // ŽC
        case 4974: return "jue"; // ŽD
        case 4976: return "zhan"; // ŽE
        case 4978: return "yi"; // ŽF
        case 4980: return "xue"; // ŽG
        case 4982: return "nao"; // ŽH
        case 4984: return "ye"; // ŽI
        case 4986: return "ye"; // ŽJ
        case 4988: return "yi"; // ŽK
        case 4990: return "nie"; // ŽL
        case 4992: return "yan"; // ŽM
        case 4994: return "ji"; // ŽN
        case 4996: return "jie"; // ŽO
        case 4998: return "ke"; // ŽP
        case 5000: return "gui"; // ŽQ
        case 5002: return "di"; // ŽR
        case 5004: return "ao"; // ŽS
        case 5006: return "zui"; // ŽT
        case 5008: return "wei"; // ŽU
        case 5010: return "rong"; // ŽV
        case 5012: return "dao"; // ŽW
        case 5014: return "ling"; // ŽX
        case 5016: return "jie"; // ŽY
        case 5018: return "yu"; // ŽZ
        case 5020: return "yue"; // Ž[
        case 5022: return "yin"; // Ž\
        case 5024: return "ru"; // Ž]
        case 5026: return "jie"; // Ž^
        case 5028: return "li"; // Ž_
        case 5030: return "gui"; // Ž`
        case 5032: return "long"; // Ža
        case 5034: return "long"; // Žb
        case 5036: return "ying"; // Žc
        case 5038: return "xi"; // Žd
        case 5040: return "ju"; // Že
        case 5042: return "chan"; // Žf
        case 5044: return "ying"; // Žg
        case 5046: return "kui"; // Žh
        case 5048: return "yan"; // Ži
        case 5050: return "nao"; // Žj
        case 5052: return "quan"; // Žk
        case 5054: return "chao"; // Žl
        case 5056: return "cuan"; // Žm
        case 5058: return "luan"; // Žn
        case 5060: return "dian"; // Žo
        case 5062: return "dian"; // Žp
        case 5064: return "nie"; // Žq
        case 5066: return "yan"; // Žr
        case 5068: return "yan"; // Žs
        case 5070: return "yan"; // Žt
        case 5072: return "nao"; // Žu
        case 5074: return "yan"; // Žv
        case 5076: return "kuai"; // Žw
        case 5078: return "huang"; // Žx
        case 5080: return "jing"; // Žy
        case 5082: return "chao"; // Žz
        case 5084: return "lie"; // Ž{
        case 5086: return "keo"; // Ž|
        case 5088: return "pu"; // Ž}
        case 5090: return "pu"; // Ž~
        case 5092: return ""; // ÕÅ
        case 5094: return "qiu"; // Ž€
        case 5096: return "zhi"; // Ž
        case 5098: return "zhao"; // Ž‚
        case 5100: return "yi"; // Žƒ
        case 5102: return "jin"; // Ž„
        case 5104: return "sun"; // Ž…
        case 5106: return "quan"; // Ž†
        case 5108: return "pa"; // Ž‡
        case 5110: return "po"; // Žˆ
        case 5112: return "za"; // Ž‰
        case 5114: return "ding"; // ŽŠ
        case 5116: return "nie"; // Ž‹
        case 5118: return "fen"; // ŽŒ
        case 5120: return "pa"; // Ž
        case 5122: return "zhi"; // ŽŽ
        case 5124: return "hu"; // Ž
        case 5126: return "dan"; // Ž
        case 5128: return "dai"; // Ž‘
        case 5130: return "wa"; // Ž’
        case 5132: return "bo"; // Ž“
        case 5134: return "mo"; // Ž”
        case 5136: return "yi"; // Ž•
        case 5138: return "yi"; // Ž–
        case 5140: return "ping"; // Ž—
        case 5142: return "qia"; // Ž˜
        case 5144: return "juan"; // Ž™
        case 5146: return "ru"; // Žš
        case 5148: return "shuai"; // Ž›
        case 5150: return "shui"; // Žœ
        case 5152: return "qiao"; // Ž
        case 5154: return "zhen"; // Žž
        case 5156: return "shi"; // ŽŸ
        case 5158: return "qun"; // Ž 
        case 5160: return "dai"; // Ž¡
        case 5162: return "gui"; // Ž¢
        case 5164: return "ping"; // Ž£
        case 5166: return "zhang"; // Ž¤
        case 5168: return "jian"; // Ž¥
        case 5170: return "wan"; // Ž¦
        case 5172: return "dai"; // Ž§
        case 5174: return "qie"; // Ž¨
        case 5176: return "ji"; // Ž©
        case 5178: return "du"; // Žª
        case 5180: return "hou"; // Ž«
        case 5182: return "zhen"; // Ž¬
        case 5184: return "xu"; // Ž­
        case 5186: return "wei"; // Ž®
        case 5188: return "yi"; // Ž¯
        case 5190: return "bang"; // Ž°
        case 5192: return "ping"; // Ž±
        case 5194: return "die"; // Ž²
        case 5196: return "gong"; // Ž³
        case 5198: return "pan"; // Ž´
        case 5200: return "tao"; // Žµ
        case 5202: return "mi"; // Ž¶
        case 5204: return "jia"; // Ž·
        case 5206: return "teng"; // Ž¸
        case 5208: return "hui"; // Ž¹
        case 5210: return "zhong"; // Žº
        case 5212: return "shan"; // Ž»
        case 5214: return "biao"; // Ž¼
        case 5216: return "guo"; // Ž½
        case 5218: return "ze"; // Ž¾
        case 5220: return "mu"; // Ž¿
        case 5222: return "bang"; // ŽÀ
        case 5224: return "jing"; // ŽÁ
        case 5226: return "chan"; // ŽÂ
        case 5228: return "zhi"; // ŽÃ
        case 5230: return "wu"; // ŽÄ
        case 5232: return "bi"; // ŽÅ
        case 5234: return "bi"; // ŽÆ
        case 5236: return "zhang"; // ŽÇ
        case 5238: return "mi"; // ŽÈ
        case 5240: return "qiao"; // ŽÉ
        case 5242: return "chan"; // ŽÊ
        case 5244: return "fen"; // ŽË
        case 5246: return "meng"; // ŽÌ
        case 5248: return "bang"; // ŽÍ
        case 5250: return "dao"; // ŽÎ
        case 5252: return "mie"; // ŽÏ
        case 5254: return "chu"; // ŽÐ
        case 5256: return "jie"; // ŽÑ
        case 5258: return "xian"; // ŽÒ
        case 5260: return "lan"; // ŽÓ
        case 5262: return "jian"; // ŽÔ
        case 5264: return "bing"; // ŽÕ
        case 5266: return "gan"; // ŽÖ
        case 5268: return "ji"; // Ž×
        case 5270: return "ting"; // ŽØ
        case 5272: return "ze"; // ŽÙ
        case 5274: return "guang"; // ŽÚ
        case 5276: return "me"; // ŽÛ
        case 5278: return "qin"; // ŽÜ
        case 5280: return "dun"; // ŽÝ
        case 5282: return "ya"; // ŽÞ
        case 5284: return "bai"; // Žß
        case 5286: return "jie"; // Žà
        case 5288: return "zhuan"; // Žá
        case 5290: return "ya"; // Žâ
        case 5292: return "ci"; // Žã
        case 5294: return "tong"; // Žä
        case 5296: return "yi"; // Žå
        case 5298: return "zhi"; // Žæ
        case 5300: return "tiao"; // Žç
        case 5302: return "zhi"; // Žè
        case 5304: return "xiao"; // Žé
        case 5306: return "tu"; // Žê
        case 5308: return "gui"; // Žë
        case 5310: return "ku"; // Žì
        case 5312: return "mang"; // Ží
        case 5314: return "you"; // Žî
        case 5316: return "bu"; // Žï
        case 5318: return "bing"; // Žð
        case 5320: return "cheng"; // Žñ
        case 5322: return "lai"; // Žò
        case 5324: return "ji"; // Žó
        case 5326: return "song"; // Žô
        case 5328: return "shu"; // Žõ
        case 5330: return "qing"; // Žö
        case 5332: return "yu"; // Ž÷
        case 5334: return "miao"; // Žø
        case 5336: return "sou"; // Žù
        case 5338: return "ce"; // Žú
        case 5340: return "xiang"; // Žû
        case 5342: return "fei"; // Žü
        case 5344: return "jiu"; // Žý
        case 5346: return "e"; // Žþ
        case 5348: return "wei"; // @
        case 5350: return "liu"; // A
        case 5352: return "sha"; // B
        case 5354: return "sou"; // C
        case 5356: return "zhi"; // D
        case 5358: return "bu"; // E
        case 5360: return "qing"; // F
        case 5362: return "jiu"; // G
        case 5364: return "jiu"; // H
        case 5366: return "lou"; // I
        case 5368: return "yin"; // J
        case 5370: return "dai"; // K
        case 5372: return "lu"; // L
        case 5374: return "yi"; // M
        case 5376: return "chu"; // N
        case 5378: return "tu"; // O
        case 5380: return "si"; // P
        case 5382: return "qian"; // Q
        case 5384: return "miao"; // R
        case 5386: return "chang"; // S
        case 5388: return "wu"; // T
        case 5390: return "fei"; // U
        case 5392: return "guang"; // V
        case 5394: return "kos"; // W
        case 5396: return "kuai"; // X
        case 5398: return "bi"; // Y
        case 5400: return "qiang"; // Z
        case 5402: return "lin"; // [
        case 5404: return "liao"; // \
        case 5406: return "lu"; // ]
        case 5408: return "ji"; // ^
        case 5410: return "ying"; // _
        case 5412: return "xian"; // `
        case 5414: return "ting"; // a
        case 5416: return "yong"; // b
        case 5418: return "li"; // c
        case 5420: return "ting"; // d
        case 5422: return "yan"; // e
        case 5424: return "di"; // f
        case 5426: return "po"; // g
        case 5428: return "hui"; // h
        case 5430: return "nai"; // i
        case 5432: return "hui"; // j
        case 5434: return "fen"; // k
        case 5436: return "ju"; // l
        case 5438: return "yan"; // m
        case 5440: return "zang"; // n
        case 5442: return "yi"; // o
        case 5444: return "er"; // p
        case 5446: return "san"; // q
        case 5448: return "er"; // r
        case 5450: return "shi"; // s
        case 5452: return "di"; // t
        case 5454: return "hu"; // u
        case 5456: return "wu"; // v
        case 5458: return "di"; // w
        case 5460: return "jiang"; // x
        case 5462: return "ba"; // y
        case 5464: return "shen"; // z
        case 5466: return "jue"; // {
        case 5468: return "tao"; // |
        case 5470: return "fu"; // }
        case 5472: return "di"; // ~
        case 5474: return ""; // ÕÅ
        case 5476: return "chao"; // €
        case 5478: return "zhen"; // 
        case 5480: return "yi"; // ‚
        case 5482: return "juan"; // ƒ
        case 5484: return "shao"; // „
        case 5486: return "yuan"; // …
        case 5488: return "jing"; // †
        case 5490: return "diao"; // ‡
        case 5492: return "zhang"; // ˆ
        case 5494: return "jiang"; // ‰
        case 5496: return "qiang"; // Š
        case 5498: return "peng"; // ‹
        case 5500: return "bi"; // Œ
        case 5502: return "she"; // 
        case 5504: return "dan"; // Ž
        case 5506: return "jian"; // 
        case 5508: return "ge"; // 
        case 5510: return "fa"; // ‘
        case 5512: return "bi"; // ’
        case 5514: return "kou"; // “
        case 5516: return "jian"; // ”
        case 5518: return "bie"; // •
        case 5520: return "xiao"; // –
        case 5522: return "dan"; // —
        case 5524: return "guo"; // ˜
        case 5526: return "jiang"; // ™
        case 5528: return "hong"; // š
        case 5530: return "mi"; // ›
        case 5532: return "guo"; // œ
        case 5534: return "wan"; // 
        case 5536: return "jue"; // ž
        case 5538: return "ji"; // Ÿ
        case 5540: return "lu"; //  
        case 5542: return "hui"; // ¡
        case 5544: return "hui"; // ¢
        case 5546: return "yi"; // £
        case 5548: return "yi"; // ¤
        case 5550: return "yi"; // ¥
        case 5552: return "yue"; // ¦
        case 5554: return "yue"; // §
        case 5556: return "wen"; // ¨
        case 5558: return "yan"; // ©
        case 5560: return "yu"; // ª
        case 5562: return "chi"; // «
        case 5564: return "diao"; // ¬
        case 5566: return "yong"; // ­
        case 5568: return "piao"; // ®
        case 5570: return "chi"; // ¯
        case 5572: return "bo"; // °
        case 5574: return "yi"; // ±
        case 5576: return "ji"; // ²
        case 5578: return "zhong"; // ³
        case 5580: return "wang"; // ´
        case 5582: return "di"; // µ
        case 5584: return "ling"; // ¶
        case 5586: return "fu"; // ·
        case 5588: return "wang"; // ¸
        case 5590: return "xi"; // ¹
        case 5592: return "wa"; // º
        case 5594: return "zheng"; // »
        case 5596: return "zhi"; // ¼
        case 5598: return "jing"; // ½
        case 5600: return "cong"; // ¾
        case 5602: return "zhi"; // ¿
        case 5604: return "cong"; // À
        case 5606: return "dong"; // Á
        case 5608: return "ji"; // Â
        case 5610: return "zhi"; // Ã
        case 5612: return "cong"; // Ä
        case 5614: return "zhou"; // Å
        case 5616: return "lai"; // Æ
        case 5618: return "xie"; // Ç
        case 5620: return "jie"; // È
        case 5622: return "jian"; // É
        case 5624: return "ti"; // Ê
        case 5626: return "jia"; // Ë
        case 5628: return "pian"; // Ì
        case 5630: return "fu"; // Í
        case 5632: return "wei"; // Î
        case 5634: return "bang"; // Ï
        case 5636: return "xi"; // Ð
        case 5638: return "zheng"; // Ñ
        case 5640: return "biao"; // Ò
        case 5642: return "ti"; // Ó
        case 5644: return "de"; // Ô
        case 5646: return "zhi"; // Õ
        case 5648: return "bie"; // Ö
        case 5650: return "zhong"; // ×
        case 5652: return "che"; // Ø
        case 5654: return "yao"; // Ù
        case 5656: return "hui"; // Ú
        case 5658: return "mei"; // Û
        case 5660: return "long"; // Ü
        case 5662: return "xiang"; // Ý
        case 5664: return "bao"; // Þ
        case 5666: return "ju"; // ß
        case 5668: return "le"; // à
        case 5670: return "ren"; // á
        case 5672: return "ding"; // â
        case 5674: return "gai"; // ã
        case 5676: return "ren"; // ä
        case 5678: return "gan"; // å
        case 5680: return "yi"; // æ
        case 5682: return "tai"; // ç
        case 5684: return "lie"; // è
        case 5686: return "fan"; // é
        case 5688: return "ying"; // ê
        case 5690: return "wen"; // ë
        case 5692: return "wen"; // ì
        case 5694: return "wu"; // í
        case 5696: return "ji"; // î
        case 5698: return "xi"; // ï
        case 5700: return "jia"; // ð
        case 5702: return "wan"; // ñ
        case 5704: return "cong"; // ò
        case 5706: return "yu"; // ó
        case 5708: return "qi"; // ô
        case 5710: return "cui"; // õ
        case 5712: return "tai"; // ö
        case 5714: return "tun"; // ÷
        case 5716: return "qian"; // ø
        case 5718: return "hun"; // ù
        case 5720: return "xiong"; // ú
        case 5722: return "wang"; // û
        case 5724: return "xian"; // ü
        case 5726: return "kang"; // ý
        case 5728: return "ju"; // þ
        case 5730: return "yi"; // @
        case 5732: return "bao"; // A
        case 5734: return "men"; // B
        case 5736: return "pei"; // C
        case 5738: return "kou"; // D
        case 5740: return "ban"; // E
        case 5742: return "nao"; // F
        case 5744: return "tie"; // G
        case 5746: return "gu"; // H
        case 5748: return "ju"; // I
        case 5750: return "you"; // J
        case 5752: return "di"; // K
        case 5754: return "die"; // L
        case 5756: return "you"; // M
        case 5758: return "fu"; // N
        case 5760: return "xi"; // O
        case 5762: return "bi"; // P
        case 5764: return "yao"; // Q
        case 5766: return "xuan"; // R
        case 5768: return "cong"; // S
        case 5770: return "bing"; // T
        case 5772: return "huang"; // U
        case 5774: return "xu"; // V
        case 5776: return "bi"; // W
        case 5778: return "shu"; // X
        case 5780: return "xi"; // Y
        case 5782: return "tan"; // Z
        case 5784: return "yong"; // [
        case 5786: return "mo"; // \
        case 5788: return "ki"; // ]
        case 5790: return "shi"; // ^
        case 5792: return "xi"; // _
        case 5794: return "lao"; // `
        case 5796: return "heng"; // a
        case 5798: return "kuang"; // b
        case 5800: return "mou"; // c
        case 5802: return "zhi"; // d
        case 5804: return "xie"; // e
        case 5806: return "yao"; // f
        case 5808: return "die"; // g
        case 5810: return "hao"; // h
        case 5812: return "wei"; // i
        case 5814: return "qi"; // j
        case 5816: return "jiao"; // k
        case 5818: return "si"; // l
        case 5820: return "kua"; // m
        case 5822: return "qiu"; // n
        case 5824: return "hui"; // o
        case 5826: return "chi"; // p
        case 5828: return "yi"; // q
        case 5830: return "xiong"; // r
        case 5832: return "guai"; // s
        case 5834: return "lin"; // t
        case 5836: return "chi"; // u
        case 5838: return "shang"; // v
        case 5840: return "quan"; // w
        case 5842: return "yue"; // x
        case 5844: return "peng"; // y
        case 5846: return "de"; // z
        case 5848: return "hui"; // {
        case 5850: return "xiao"; // |
        case 5852: return "mang"; // }
        case 5854: return "yong"; // ~
        case 5856: return ""; // ÕÅ
        case 5858: return "yuan"; // €
        case 5860: return "bi"; // 
        case 5862: return "yue"; // ‚
        case 5864: return "yu"; // ƒ
        case 5866: return "yu"; // „
        case 5868: return "ke"; // …
        case 5870: return "zhe"; // †
        case 5872: return "lin"; // ‡
        case 5874: return "hao"; // ˆ
        case 5876: return "qie"; // ‰
        case 5878: return "ti"; // Š
        case 5880: return "bu"; // ‹
        case 5882: return "qian"; // Œ
        case 5884: return "xi"; // 
        case 5886: return "man"; // Ž
        case 5888: return "yi"; // 
        case 5890: return "heng"; // 
        case 5892: return "cheng"; // ‘
        case 5894: return "wu"; // ’
        case 5896: return "li"; // “
        case 5898: return "lang"; // ”
        case 5900: return "cong"; // •
        case 5902: return "yi"; // –
        case 5904: return "li"; // —
        case 5906: return "nao"; // ˜
        case 5908: return "e"; // ™
        case 5910: return "wu"; // š
        case 5912: return "cong"; // ›
        case 5914: return "de"; // œ
        case 5916: return "chang"; // 
        case 5918: return "men"; // ž
        case 5920: return "li"; // Ÿ
        case 5922: return "guan"; //  
        case 5924: return "guan"; // ¡
        case 5926: return "qi"; // ¢
        case 5928: return "kong"; // £
        case 5930: return "tian"; // ¤
        case 5932: return "lun"; // ¥
        case 5934: return "xi"; // ¦
        case 5936: return "kan"; // §
        case 5938: return "gun"; // ¨
        case 5940: return "ni"; // ©
        case 5942: return "dun"; // ª
        case 5944: return "guo"; // «
        case 5946: return "zhan"; // ¬
        case 5948: return "wan"; // ­
        case 5950: return "jin"; // ®
        case 5952: return "ji"; // ¯
        case 5954: return "lan"; // °
        case 5956: return "yu"; // ±
        case 5958: return "he"; // ²
        case 5960: return "juan"; // ³
        case 5962: return "dan"; // ´
        case 5964: return "ti"; // µ
        case 5966: return "nie"; // ¶
        case 5968: return "chuo"; // ·
        case 5970: return "hun"; // ¸
        case 5972: return "xin"; // ¹
        case 5974: return "e"; // º
        case 5976: return "rui"; // »
        case 5978: return "zong"; // ¼
        case 5980: return "jian"; // ½
        case 5982: return "yong"; // ¾
        case 5984: return "de"; // ¿
        case 5986: return "nao"; // À
        case 5988: return "yun"; // Á
        case 5990: return "die"; // Â
        case 5992: return "chun"; // Ã
        case 5994: return "qiong"; // Ä
        case 5996: return "ce"; // Å
        case 5998: return "bian"; // Æ
        case 6000: return "hun"; // Ç
        case 6002: return "zong"; // È
        case 6004: return "ti"; // É
        case 6006: return "bei"; // Ê
        case 6008: return "xuan"; // Ë
        case 6010: return "wei"; // Ì
        case 6012: return "ge"; // Í
        case 6014: return "wei"; // Î
        case 6016: return "bi"; // Ï
        case 6018: return "xuan"; // Ð
        case 6020: return "huan"; // Ñ
        case 6022: return "mian"; // Ò
        case 6024: return "yong"; // Ó
        case 6026: return "kai"; // Ô
        case 6028: return "dang"; // Õ
        case 6030: return "yin"; // Ö
        case 6032: return "dan"; // ×
        case 6034: return "mao"; // Ø
        case 6036: return "qia"; // Ù
        case 6038: return "ke"; // Ú
        case 6040: return "ai"; // Û
        case 6042: return "qie"; // Ü
        case 6044: return "yan"; // Ý
        case 6046: return "nuo"; // Þ
        case 6048: return "zong"; // ß
        case 6050: return "si"; // à
        case 6052: return "ying"; // á
        case 6054: return "que"; // â
        case 6056: return "gong"; // ã
        case 6058: return "yun"; // ä
        case 6060: return "se"; // å
        case 6062: return "qi"; // æ
        case 6064: return "yao"; // ç
        case 6066: return "song"; // è
        case 6068: return "huang"; // é
        case 6070: return "ji"; // ê
        case 6072: return "gu"; // ë
        case 6074: return "ju"; // ì
        case 6076: return "chuan"; // í
        case 6078: return "ni"; // î
        case 6080: return "xie"; // ï
        case 6082: return "kai"; // ð
        case 6084: return "zheng"; // ñ
        case 6086: return "yong"; // ò
        case 6088: return "cao"; // ó
        case 6090: return "xun"; // ô
        case 6092: return "shen"; // õ
        case 6094: return "bo"; // ö
        case 6096: return "kai"; // ÷
        case 6098: return "xi"; // ø
        case 6100: return "hun"; // ù
        case 6102: return "yong"; // ú
        case 6104: return "yang"; // û
        case 6106: return "li"; // ü
        case 6108: return "cao"; // ý
        case 6110: return "tao"; // þ
        case 6112: return "yan"; // ‘@
        case 6114: return "xu"; // ‘A
        case 6116: return "tai"; // ‘B
        case 6118: return "yun"; // ‘C
        case 6120: return "ming"; // ‘D
        case 6122: return "gong"; // ‘E
        case 6124: return "cao"; // ‘F
        case 6126: return "piao"; // ‘G
        case 6128: return "mu"; // ‘H
        case 6130: return "guo"; // ‘I
        case 6132: return "chi"; // ‘J
        case 6134: return "can"; // ‘K
        case 6136: return "can"; // ‘L
        case 6138: return "can"; // ‘M
        case 6140: return "cui"; // ‘N
        case 6142: return "min"; // ‘O
        case 6144: return "zhang"; // ‘P
        case 6146: return "tong"; // ‘Q
        case 6148: return "ao"; // ‘R
        case 6150: return "shuan"; // ‘S
        case 6152: return "guan"; // ‘T
        case 6154: return "que"; // ‘U
        case 6156: return "zao"; // ‘V
        case 6158: return "jiu"; // ‘W
        case 6160: return "lian"; // ‘X
        case 6162: return "ou"; // ‘Y
        case 6164: return "song"; // ‘Z
        case 6166: return "jin"; // ‘[
        case 6168: return "yin"; // ‘\
        case 6170: return "lu"; // ‘]
        case 6172: return "shang"; // ‘^
        case 6174: return "tuan"; // ‘_
        case 6176: return "man"; // ‘`
        case 6178: return "qian"; // ‘a
        case 6180: return "she"; // ‘b
        case 6182: return "qing"; // ‘c
        case 6184: return "di"; // ‘d
        case 6186: return "zhi"; // ‘e
        case 6188: return "lou"; // ‘f
        case 6190: return "juan"; // ‘g
        case 6192: return "qi"; // ‘h
        case 6194: return "qi"; // ‘i
        case 6196: return "yu"; // ‘j
        case 6198: return "ping"; // ‘k
        case 6200: return "liao"; // ‘l
        case 6202: return "cong"; // ‘m
        case 6204: return "you"; // ‘n
        case 6206: return "chong"; // ‘o
        case 6208: return "zhi"; // ‘p
        case 6210: return "tong"; // ‘q
        case 6212: return "cheng"; // ‘r
        case 6214: return "qi"; // ‘s
        case 6216: return "qu"; // ‘t
        case 6218: return "peng"; // ‘u
        case 6220: return "bei"; // ‘v
        case 6222: return "qiong"; // ‘w
        case 6224: return "jiao"; // ‘x
        case 6226: return "chi"; // ‘y
        case 6228: return "lian"; // ‘z
        case 6230: return "ping"; // ‘{
        case 6232: return "kui"; // ‘|
        case 6234: return "hui"; // ‘}
        case 6236: return "zheng"; // ‘~
        case 6238: return ""; // ÕÅ
        case 6240: return "yin"; // ‘€
        case 6242: return "yin"; // ‘
        case 6244: return "xi"; // ‘‚
        case 6246: return "xi"; // ‘ƒ
        case 6248: return "dan"; // ‘„
        case 6250: return "tan"; // ‘…
        case 6252: return "duo"; // ‘†
        case 6254: return "dui"; // ‘‡
        case 6256: return "su"; // ‘ˆ
        case 6258: return "jue"; // ‘‰
        case 6260: return "ce"; // ‘Š
        case 6262: return "jiao"; // ‘‹
        case 6264: return "fan"; // ‘Œ
        case 6266: return "fen"; // ‘
        case 6268: return "lao"; // ‘Ž
        case 6270: return "lao"; // ‘
        case 6272: return "xian"; // ‘
        case 6274: return "min"; // ‘‘
        case 6276: return "liao"; // ‘’
        case 6278: return "wu"; // ‘“
        case 6280: return "can"; // ‘”
        case 6282: return "jue"; // ‘•
        case 6284: return "cu"; // ‘–
        case 6286: return "xian"; // ‘—
        case 6288: return "tan"; // ‘˜
        case 6290: return "sheng"; // ‘™
        case 6292: return "pi"; // ‘š
        case 6294: return "yi"; // ‘›
        case 6296: return "xian"; // ‘œ
        case 6298: return "nao"; // ‘
        case 6300: return "dan"; // ‘ž
        case 6302: return "tan"; // ‘Ÿ
        case 6304: return "jing"; // ‘ 
        case 6306: return "song"; // ‘¡
        case 6308: return "ji"; // ‘¢
        case 6310: return "wei"; // ‘£
        case 6312: return "huan"; // ‘¤
        case 6314: return "qin"; // ‘¥
        case 6316: return "qin"; // ‘¦
        case 6318: return "ju"; // ‘§
        case 6320: return "cao"; // ‘¨
        case 6322: return "ken"; // ‘©
        case 6324: return "ying"; // ‘ª
        case 6326: return "yi"; // ‘«
        case 6328: return "lin"; // ‘¬
        case 6330: return "se"; // ‘­
        case 6332: return "jun4      "; // ‘®
        case 6334: return "huai"; // ‘¯
        case 6336: return "ai"; // ‘°
        case 6338: return "yan"; // ‘±
        case 6340: return "kuo"; // ‘²
        case 6342: return "xia"; // ‘³
        case 6344: return "chi"; // ‘´
        case 6346: return "yu"; // ‘µ
        case 6348: return "yin"; // ‘¶
        case 6350: return "dai"; // ‘·
        case 6352: return "meng"; // ‘¸
        case 6354: return "ai"; // ‘¹
        case 6356: return "meng"; // ‘º
        case 6358: return "dui"; // ‘»
        case 6360: return "ji"; // ‘¼
        case 6362: return "mo"; // ‘½
        case 6364: return "lan"; // ‘¾
        case 6366: return "men"; // ‘¿
        case 6368: return "chou"; // ‘À
        case 6370: return "zhi"; // ‘Á
        case 6372: return "nuo"; // ‘Â
        case 6374: return "chu"; // ‘Ã
        case 6376: return "yang"; // ‘Ä
        case 6378: return "bo"; // ‘Å
        case 6380: return "zhi"; // ‘Æ
        case 6382: return "kuang"; // ‘Ç
        case 6384: return "kuang"; // ‘È
        case 6386: return "you"; // ‘É
        case 6388: return "fu"; // ‘Ê
        case 6390: return "liu"; // ‘Ë
        case 6392: return "mie"; // ‘Ì
        case 6394: return "cheng"; // ‘Í
        case 6396: return "hui"; // ‘Î
        case 6398: return "chan"; // ‘Ï
        case 6400: return "lan"; // ‘Ð
        case 6402: return "huai"; // ‘Ñ
        case 6404: return "xuan"; // ‘Ò
        case 6406: return "rang"; // ‘Ó
        case 6408: return "chan"; // ‘Ô
        case 6410: return "ji"; // ‘Õ
        case 6412: return "ju"; // ‘Ö
        case 6414: return "guan"; // ‘×
        case 6416: return "she"; // ‘Ø
        case 6418: return "lian"; // ‘Ù
        case 6420: return "nan"; // ‘Ú
        case 6422: return "mo"; // ‘Û
        case 6424: return "tang"; // ‘Ü
        case 6426: return "jue"; // ‘Ý
        case 6428: return "gang"; // ‘Þ
        case 6430: return "gang"; // ‘ß
        case 6432: return "yue"; // ‘à
        case 6434: return "ge"; // ‘á
        case 6436: return "jian"; // ‘â
        case 6438: return "dong"; // ‘ã
        case 6440: return "die"; // ‘ä
        case 6442: return "cai"; // ‘å
        case 6444: return "jia"; // ‘æ
        case 6446: return "zhi"; // ‘ç
        case 6448: return "kui"; // ‘è
        case 6450: return "zhan"; // ‘é
        case 6452: return "qiang"; // ‘ê
        case 6454: return "ge"; // ‘ë
        case 6456: return "jian"; // ‘ì
        case 6458: return "yu"; // ‘í
        case 6460: return "you"; // ‘î
        case 6462: return "hu"; // ‘ï
        case 6464: return "zhan"; // ‘ð
        case 6466: return "hu"; // ‘ñ
        case 6468: return "xi"; // ‘ò
        case 6470: return "qu"; // ‘ó
        case 6472: return "hu"; // ‘ô
        case 6474: return "hu"; // ‘õ
        case 6476: return "e"; // ‘ö
        case 6478: return "yi"; // ‘÷
        case 6480: return "ti"; // ‘ø
        case 6482: return "mao"; // ‘ù
        case 6484: return "dian"; // ‘ú
        case 6486: return "jiong"; // ‘û
        case 6488: return "yi"; // ‘ü
        case 6490: return "yi"; // ‘ý
        case 6492: return "yan"; // ‘þ
        case 6494: return "qiu"; // ’@
        case 6496: return "le"; // ’A
        case 6498: return "fan"; // ’B
        case 6500: return "ru"; // ’C
        case 6502: return "zai"; // ’D
        case 6504: return "zhang"; // ’E
        case 6506: return "diao"; // ’F
        case 6508: return "gan"; // ’G
        case 6510: return "wu"; // ’H
        case 6512: return "gan"; // ’I
        case 6514: return "shen"; // ’J
        case 6516: return "cha"; // ’K
        case 6518: return "qian"; // ’L
        case 6520: return "gu"; // ’M
        case 6522: return "wu"; // ’N
        case 6524: return "den"; // ’O
        case 6526: return "ren"; // ’P
        case 6528: return "xi"; // ’Q
        case 6530: return "qian"; // ’R
        case 6532: return "jia"; // ’S
        case 6534: return "yu"; // ’T
        case 6536: return "ao"; // ’U
        case 6538: return "xi"; // ’V
        case 6540: return "qi"; // ’W
        case 6542: return "zhi"; // ’X
        case 6544: return "den"; // ’Y
        case 6546: return "yan"; // ’Z
        case 6548: return "wang"; // ’[
        case 6550: return "bian"; // ’\
        case 6552: return "gou"; // ’]
        case 6554: return "wen"; // ’^
        case 6556: return "gu"; // ’_
        case 6558: return "yue"; // ’`
        case 6560: return "qin"; // ’a
        case 6562: return "dan"; // ’b
        case 6564: return "zheng"; // ’c
        case 6566: return "yun"; // ’d
        case 6568: return "wan"; // ’e
        case 6570: return "ne"; // ’f
        case 6572: return "pou"; // ’g
        case 6574: return "pou"; // ’h
        case 6576: return "ba"; // ’i
        case 6578: return "ao"; // ’j
        case 6580: return "ze"; // ’k
        case 6582: return "yun"; // ’l
        case 6584: return "bing"; // ’m
        case 6586: return "zhi"; // ’n
        case 6588: return "nan"; // ’o
        case 6590: return "bu"; // ’p
        case 6592: return "yao"; // ’q
        case 6594: return "zhen"; // ’r
        case 6596: return "zha"; // ’s
        case 6598: return "yang"; // ’t
        case 6600: return "he"; // ’u
        case 6602: return "ni"; // ’v
        case 6604: return "ye"; // ’w
        case 6606: return "chi"; // ’x
        case 6608: return "pei"; // ’y
        case 6610: return "jia"; // ’z
        case 6612: return "mei"; // ’{
        case 6614: return "qu"; // ’|
        case 6616: return "chu"; // ’}
        case 6618: return "ya"; // ’~
        case 6620: return ""; // ÕÅ
        case 6622: return "zha"; // ’€
        case 6624: return "pao"; // ’
        case 6626: return "na"; // ’‚
        case 6628: return "qian"; // ’ƒ
        case 6630: return "tuo"; // ’„
        case 6632: return "bai"; // ’…
        case 6634: return "di"; // ’†
        case 6636: return "ju"; // ’‡
        case 6638: return "kuo"; // ’ˆ
        case 6640: return "qia"; // ’‰
        case 6642: return "qian"; // ’Š
        case 6644: return "hen"; // ’‹
        case 6646: return "nin"; // ’Œ
        case 6648: return "gong"; // ’
        case 6650: return "zun"; // ’Ž
        case 6652: return "yi"; // ’
        case 6654: return "xie"; // ’
        case 6656: return "ce"; // ’‘
        case 6658: return "hui"; // ’’
        case 6660: return "bai"; // ’“
        case 6662: return "die"; // ’”
        case 6664: return "guang"; // ’•
        case 6666: return "duo"; // ’–
        case 6668: return "duo"; // ’—
        case 6670: return "nong"; // ’˜
        case 6672: return "zhen"; // ’™
        case 6674: return "ge"; // ’š
        case 6676: return "jiao"; // ’›
        case 6678: return "dong"; // ’œ
        case 6680: return "na"; // ’
        case 6682: return "lie"; // ’ž
        case 6684: return "zha"; // ’Ÿ
        case 6686: return "lu"; // ’ 
        case 6688: return "she"; // ’¡
        case 6690: return "jue"; // ’¢
        case 6692: return "lie"; // ’£
        case 6694: return "ju"; // ’¤
        case 6696: return "ya"; // ’¥
        case 6698: return "xian"; // ’¦
        case 6700: return "yu"; // ’§
        case 6702: return "tuo"; // ’¨
        case 6704: return "bo"; // ’©
        case 6706: return "geng"; // ’ª
        case 6708: return "ti"; // ’«
        case 6710: return "cheng"; // ’¬
        case 6712: return "sha"; // ’­
        case 6714: return "keng"; // ’®
        case 6716: return "mei"; // ’¯
        case 6718: return "nong"; // ’°
        case 6720: return "ju"; // ’±
        case 6722: return "beng"; // ’²
        case 6724: return "jian"; // ’³
        case 6726: return "yan"; // ’´
        case 6728: return "luo"; // ’µ
        case 6730: return "jia"; // ’¶
        case 6732: return "zha"; // ’·
        case 6734: return "feng"; // ’¸
        case 6736: return "ku"; // ’¹
        case 6738: return "ju"; // ’º
        case 6740: return "huo"; // ’»
        case 6742: return "tu"; // ’¼
        case 6744: return "pou"; // ’½
        case 6746: return "ze"; // ’¾
        case 6748: return "shu"; // ’¿
        case 6750: return "ye"; // ’À
        case 6752: return "jue"; // ’Á
        case 6754: return "wan"; // ’Â
        case 6756: return "bu"; // ’Ã
        case 6758: return "zun"; // ’Ä
        case 6760: return "ye"; // ’Å
        case 6762: return "zhai"; // ’Æ
        case 6764: return "lu"; // ’Ç
        case 6766: return "sou"; // ’È
        case 6768: return "tuo"; // ’É
        case 6770: return "bang"; // ’Ê
        case 6772: return "wei"; // ’Ë
        case 6774: return "wan"; // ’Ì
        case 6776: return "qin"; // ’Í
        case 6778: return "she"; // ’Î
        case 6780: return "min"; // ’Ï
        case 6782: return "men"; // ’Ð
        case 6784: return "fu"; // ’Ñ
        case 6786: return "dao"; // ’Ò
        case 6788: return "wo"; // ’Ó
        case 6790: return "juan"; // ’Ô
        case 6792: return "yue"; // ’Õ
        case 6794: return "zong"; // ’Ö
        case 6796: return "tian"; // ’×
        case 6798: return "tu"; // ’Ø
        case 6800: return "ben"; // ’Ù
        case 6802: return "wo"; // ’Ú
        case 6804: return "zuo"; // ’Û
        case 6806: return "wo"; // ’Ü
        case 6808: return "qi"; // ’Ý
        case 6810: return "cheng"; // ’Þ
        case 6812: return "sao"; // ’ß
        case 6814: return "lun"; // ’à
        case 6816: return "qing"; // ’á
        case 6818: return "gang"; // ’â
        case 6820: return "di"; // ’ã
        case 6822: return "hun"; // ’ä
        case 6824: return "qi"; // ’å
        case 6826: return "shu"; // ’æ
        case 6828: return "wan"; // ’ç
        case 6830: return "ling"; // ’è
        case 6832: return "ya"; // ’é
        case 6834: return "zheng"; // ’ê
        case 6836: return "liang"; // ’ë
        case 6838: return "gua"; // ’ì
        case 6840: return "yi"; // ’í
        case 6842: return "huo"; // ’î
        case 6844: return "yan"; // ’ï
        case 6846: return "ding"; // ’ð
        case 6848: return "cai"; // ’ñ
        case 6850: return "bing"; // ’ò
        case 6852: return "ti"; // ’ó
        case 6854: return "chou"; // ’ô
        case 6856: return "ken"; // ’õ
        case 6858: return "pa"; // ’ö
        case 6860: return "jie"; // ’÷
        case 6862: return "ming"; // ’ø
        case 6864: return "geng"; // ’ù
        case 6866: return "meng"; // ’ú
        case 6868: return "sao"; // ’û
        case 6870: return "peng"; // ’ü
        case 6872: return "nuo"; // ’ý
        case 6874: return "jian"; // ’þ
        case 6876: return "keng"; // “@
        case 6878: return "you"; // “A
        case 6880: return "jian"; // “B
        case 6882: return "yan"; // “C
        case 6884: return "nan"; // “D
        case 6886: return "hong"; // “E
        case 6888: return "pi"; // “F
        case 6890: return "wei"; // “G
        case 6892: return "cai"; // “H
        case 6894: return "nie"; // “I
        case 6896: return "shi"; // “J
        case 6898: return "zong"; // “K
        case 6900: return "zhen"; // “L
        case 6902: return "xun"; // “M
        case 6904: return "yong"; // “N
        case 6906: return "bian"; // “O
        case 6908: return "yang"; // “P
        case 6910: return "huan"; // “Q
        case 6912: return "yan"; // “R
        case 6914: return "zan"; // “S
        case 6916: return "ju"; // “T
        case 6918: return "ke"; // “U
        case 6920: return "ji"; // “V
        case 6922: return "di"; // “W
        case 6924: return "la"; // “X
        case 6926: return "la"; // “Y
        case 6928: return "chen"; // “Z
        case 6930: return "jiu"; // “[
        case 6932: return "tu"; // “\
        case 6934: return "hui"; // “]
        case 6936: return "gen"; // “^
        case 6938: return "dong"; // “_
        case 6940: return "xiao"; // “`
        case 6942: return "xie"; // “a
        case 6944: return "jian"; // “b
        case 6946: return "zha"; // “c
        case 6948: return "bei"; // “d
        case 6950: return "yao"; // “e
        case 6952: return "wei"; // “f
        case 6954: return "dem"; // “g
        case 6956: return "wu"; // “h
        case 6958: return "zong"; // “i
        case 6960: return "gen"; // “j
        case 6962: return "gou"; // “k
        case 6964: return "qin"; // “l
        case 6966: return "rong"; // “m
        case 6968: return "huo"; // “n
        case 6970: return "zou"; // “o
        case 6972: return "sun"; // “p
        case 6974: return "sun"; // “q
        case 6976: return "nang"; // “r
        case 6978: return "beng"; // “s
        case 6980: return "e"; // “t
        case 6982: return "yao"; // “u
        case 6984: return "dao"; // “v
        case 6986: return "zhi"; // “w
        case 6988: return "nu"; // “x
        case 6990: return "la"; // “y
        case 6992: return "qiu"; // “z
        case 6994: return "xian"; // “{
        case 6996: return "jin"; // “|
        case 6998: return "mie"; // “}
        case 7000: return "e"; // “~
        case 7002: return ""; // ÕÅ
        case 7004: return "dui"; // “€
        case 7006: return "shan"; // “
        case 7008: return "da"; // “‚
        case 7010: return "jie"; // “ƒ
        case 7012: return "ban"; // “„
        case 7014: return "li"; // “…
        case 7016: return "tao"; // “†
        case 7018: return "ku"; // “‡
        case 7020: return "nai"; // “ˆ
        case 7022: return "wa"; // “‰
        case 7024: return "qia"; // “Š
        case 7026: return "wen"; // “‹
        case 7028: return "qiang"; // “Œ
        case 7030: return "tian"; // “
        case 7032: return "zhen"; // “Ž
        case 7034: return "e"; // “
        case 7036: return "nuo"; // “
        case 7038: return "quan"; // “‘
        case 7040: return "zha"; // “’
        case 7042: return "wu"; // ““
        case 7044: return "zhe"; // “”
        case 7046: return "kang"; // “•
        case 7048: return "rong"; // “–
        case 7050: return "shai"; // “—
        case 7052: return "chan"; // “˜
        case 7054: return "suo"; // “™
        case 7056: return "jiu"; // “š
        case 7058: return "chong"; // “›
        case 7060: return "chuang"; // “œ
        case 7062: return "guo"; // “
        case 7064: return "peng"; // “ž
        case 7066: return "di"; // “Ÿ
        case 7068: return "qi"; // “ 
        case 7070: return "sou"; // “¡
        case 7072: return "lian"; // “¢
        case 7074: return "cheng"; // “£
        case 7076: return "chi"; // “¤
        case 7078: return "guan"; // “¥
        case 7080: return "lu"; // “¦
        case 7082: return "lou"; // “§
        case 7084: return "zong"; // “¨
        case 7086: return "gai"; // “©
        case 7088: return "hu"; // “ª
        case 7090: return "zha"; // “«
        case 7092: return "qiang"; // “¬
        case 7094: return "tang"; // “­
        case 7096: return "hua"; // “®
        case 7098: return "nai"; // “¯
        case 7100: return "jiang"; // “°
        case 7102: return "gui"; // “±
        case 7104: return "ying"; // “²
        case 7106: return "ao"; // “³
        case 7108: return "zhi"; // “´
        case 7110: return "nie"; // “µ
        case 7112: return "man"; // “¶
        case 7114: return "chan"; // “·
        case 7116: return "kou"; // “¸
        case 7118: return "chi"; // “¹
        case 7120: return "she"; // “º
        case 7122: return "tuan"; // “»
        case 7124: return "jiao"; // “¼
        case 7126: return "chan"; // “½
        case 7128: return "keng"; // “¾
        case 7130: return "biao"; // “¿
        case 7132: return "jiang"; // “À
        case 7134: return "yao"; // “Á
        case 7136: return "gou"; // “Â
        case 7138: return "qian"; // “Ã
        case 7140: return "ji"; // “Ä
        case 7142: return "pie"; // “Å
        case 7144: return "lao"; // “Æ
        case 7146: return "dun"; // “Ç
        case 7148: return "xian"; // “È
        case 7150: return "rui"; // “É
        case 7152: return "gui"; // “Ê
        case 7154: return "zan"; // “Ë
        case 7156: return "yi"; // “Ì
        case 7158: return "xun"; // “Í
        case 7160: return "cheng"; // “Î
        case 7162: return "nao"; // “Ï
        case 7164: return "hong"; // “Ð
        case 7166: return "guang"; // “Ñ
        case 7168: return "da"; // “Ò
        case 7170: return "nian"; // “Ó
        case 7172: return "lin"; // “Ô
        case 7174: return "zheng"; // “Õ
        case 7176: return "wei"; // “Ö
        case 7178: return "jiao"; // “×
        case 7180: return "ji"; // “Ø
        case 7182: return "cao"; // “Ù
        case 7184: return "dan"; // “Ú
        case 7186: return "dan"; // “Û
        case 7188: return "bo"; // “Ü
        case 7190: return "che"; // “Ý
        case 7192: return "jue"; // “Þ
        case 7194: return "xiao"; // “ß
        case 7196: return "ben"; // “à
        case 7198: return "fu"; // “á
        case 7200: return "zhuo"; // “â
        case 7202: return "wei"; // “ã
        case 7204: return "pu"; // “ä
        case 7206: return "qin"; // “å
        case 7208: return "dun"; // “æ
        case 7210: return "hua"; // “ç
        case 7212: return "jiao"; // “è
        case 7214: return "ta"; // “é
        case 7216: return "yao"; // “ê
        case 7218: return "wo"; // “ë
        case 7220: return "jian"; // “ì
        case 7222: return "yong"; // “í
        case 7224: return "nang"; // “î
        case 7226: return "lu"; // “ï
        case 7228: return "zhuo"; // “ð
        case 7230: return "ze"; // “ñ
        case 7232: return "bu"; // “ò
        case 7234: return "chuo"; // “ó
        case 7236: return "ji"; // “ô
        case 7238: return "dang"; // “õ
        case 7240: return "se"; // “ö
        case 7242: return "jing"; // “÷
        case 7244: return "jie"; // “ø
        case 7246: return "kuai"; // “ù
        case 7248: return "dan"; // “ú
        case 7250: return "xie"; // “û
        case 7252: return "ye"; // “ü
        case 7254: return "ao"; // “ý
        case 7256: return "ju"; // “þ
        case 7258: return "ye"; // ”@
        case 7260: return "e"; // ”A
        case 7262: return "meng"; // ”B
        case 7264: return "mi"; // ”C
        case 7266: return "ji"; // ”D
        case 7268: return "tai"; // ”E
        case 7270: return "chou"; // ”F
        case 7272: return "lan"; // ”G
        case 7274: return "ju"; // ”H
        case 7276: return "ye"; // ”I
        case 7278: return "ru"; // ”J
        case 7280: return "ye"; // ”K
        case 7282: return "ye"; // ”L
        case 7284: return "ni"; // ”M
        case 7286: return "huo"; // ”N
        case 7288: return "jie"; // ”O
        case 7290: return "bin"; // ”P
        case 7292: return "ning"; // ”Q
        case 7294: return "ge"; // ”R
        case 7296: return "zhi"; // ”S
        case 7298: return "jie"; // ”T
        case 7300: return "kuo"; // ”U
        case 7302: return "mo"; // ”V
        case 7304: return "jian"; // ”W
        case 7306: return "xie"; // ”X
        case 7308: return "la"; // ”Y
        case 7310: return "tan"; // ”Z
        case 7312: return "bai"; // ”[
        case 7314: return "sou"; // ”\
        case 7316: return "lu"; // ”]
        case 7318: return "lue"; // ”^
        case 7320: return "rao"; // ”_
        case 7322: return "ti"; // ”`
        case 7324: return "yang"; // ”a
        case 7326: return "lei"; // ”b
        case 7328: return "ca"; // ”c
        case 7330: return "lu"; // ”d
        case 7332: return "cuan"; // ”e
        case 7334: return "nian"; // ”f
        case 7336: return "xian"; // ”g
        case 7338: return "pei"; // ”h
        case 7340: return "li"; // ”i
        case 7342: return "la"; // ”j
        case 7344: return "huan"; // ”k
        case 7346: return "ying"; // ”l
        case 7348: return "lu"; // ”m
        case 7350: return "long"; // ”n
        case 7352: return "qian"; // ”o
        case 7354: return "qian"; // ”p
        case 7356: return "qian"; // ”q
        case 7358: return "lan"; // ”r
        case 7360: return "jian"; // ”s
        case 7362: return "ying"; // ”t
        case 7364: return "mei"; // ”u
        case 7366: return "chan"; // ”v
        case 7368: return "ying"; // ”w
        case 7370: return "cuan"; // ”x
        case 7372: return "xie"; // ”y
        case 7374: return "she"; // ”z
        case 7376: return "luo"; // ”{
        case 7378: return "mei"; // ”|
        case 7380: return "mo"; // ”}
        case 7382: return "chi"; // ”~
        case 7384: return ""; // ÕÅ
        case 7386: return "cuan"; // ”€
        case 7388: return "lian"; // ”
        case 7390: return "tan"; // ”‚
        case 7392: return "li"; // ”ƒ
        case 7394: return "dian"; // ”„
        case 7396: return "wa"; // ”…
        case 7398: return "tang"; // ”†
        case 7400: return "jiao"; // ”‡
        case 7402: return "lan"; // ”ˆ
        case 7404: return "li"; // ”‰
        case 7406: return "gui"; // ”Š
        case 7408: return "gui"; // ”‹
        case 7410: return "ji"; // ”Œ
        case 7412: return "xun"; // ”
        case 7414: return "kao"; // ”Ž
        case 7416: return "yi"; // ”
        case 7418: return "gan"; // ”
        case 7420: return "ban"; // ”‘
        case 7422: return "po"; // ”’
        case 7424: return "dian"; // ”“
        case 7426: return "kou"; // ””
        case 7428: return "min"; // ”•
        case 7430: return "wu"; // ”–
        case 7432: return "he"; // ”—
        case 7434: return "ce"; // ”˜
        case 7436: return "chu"; // ”™
        case 7438: return "ge"; // ”š
        case 7440: return "xu"; // ”›
        case 7442: return "jiao"; // ”œ
        case 7444: return "chen"; // ”
        case 7446: return "zhen"; // ”ž
        case 7448: return "duo"; // ”Ÿ
        case 7450: return "yu"; // ” 
        case 7452: return "bai"; // ”¡
        case 7454: return "xu"; // ”¢
        case 7456: return "duo"; // ”£
        case 7458: return "nie"; // ”¤
        case 7460: return "dian"; // ”¥
        case 7462: return "duo"; // ”¦
        case 7464: return "yi"; // ”§
        case 7466: return "ke"; // ”¨
        case 7468: return "yan"; // ”©
        case 7470: return "ji"; // ”ª
        case 7472: return "tou"; // ”«
        case 7474: return "xiao"; // ”¬
        case 7476: return "duo"; // ”­
        case 7478: return "yang"; // ”®
        case 7480: return "xia"; // ”¯
        case 7482: return "min"; // ”°
        case 7484: return "ai"; // ”±
        case 7486: return "ai"; // ”²
        case 7488: return "di"; // ”³
        case 7490: return "zhen"; // ”´
        case 7492: return "shu"; // ”µ
        case 7494: return "liao"; // ”¶
        case 7496: return "ou"; // ”·
        case 7498: return "xiong"; // ”¸
        case 7500: return "yi"; // ”¹
        case 7502: return "jiao"; // ”º
        case 7504: return "shan"; // ”»
        case 7506: return "jiao"; // ”¼
        case 7508: return "zhu"; // ”½
        case 7510: return "yi"; // ”¾
        case 7512: return "lian"; // ”¿
        case 7514: return "bi"; // ”À
        case 7516: return "tai"; // ”Á
        case 7518: return "xiao"; // ”Â
        case 7520: return "xiao"; // ”Ã
        case 7522: return "xue"; // ”Ä
        case 7524: return "qi"; // ”Å
        case 7526: return "qi"; // ”Æ
        case 7528: return "jue"; // ”Ç
        case 7530: return "zhai"; // ”È
        case 7532: return "lang"; // ”É
        case 7534: return "ban"; // ”Ê
        case 7536: return "yu"; // ”Ë
        case 7538: return "lan"; // ”Ì
        case 7540: return "wei"; // ”Í
        case 7542: return "sheng"; // ”Î
        case 7544: return "jia"; // ”Ï
        case 7546: return "jia"; // ”Ð
        case 7548: return "yu"; // ”Ñ
        case 7550: return "jiao"; // ”Ò
        case 7552: return "tou"; // ”Ó
        case 7554: return "dou"; // ”Ô
        case 7556: return "yin"; // ”Õ
        case 7558: return "qiang"; // ”Ö
        case 7560: return "qu"; // ”×
        case 7562: return "zhan"; // ”Ø
        case 7564: return "zhuo"; // ”Ù
        case 7566: return "zhuo"; // ”Ú
        case 7568: return "zhuo"; // ”Û
        case 7570: return "jin"; // ”Ü
        case 7572: return "lin"; // ”Ý
        case 7574: return "zhuo"; // ”Þ
        case 7576: return "chu"; // ”ß
        case 7578: return "duan"; // ”à
        case 7580: return "zhu"; // ”á
        case 7582: return "jie"; // ”â
        case 7584: return "hang"; // ”ã
        case 7586: return "pei"; // ”ä
        case 7588: return "you"; // ”å
        case 7590: return "mie"; // ”æ
        case 7592: return "qi"; // ”ç
        case 7594: return "bi"; // ”è
        case 7596: return "liu"; // ”é
        case 7598: return "fu"; // ”ê
        case 7600: return "fang"; // ”ë
        case 7602: return "jing"; // ”ì
        case 7604: return "zhao"; // ”í
        case 7606: return "yi"; // ”î
        case 7608: return "shao"; // ”ï
        case 7610: return "jian"; // ”ð
        case 7612: return "eos"; // ”ñ
        case 7614: return "zhi"; // ”ò
        case 7616: return "fan"; // ”ó
        case 7618: return "piao"; // ”ô
        case 7620: return "fan"; // ”õ
        case 7622: return "zhan"; // ”ö
        case 7624: return "kuai"; // ”÷
        case 7626: return "sui"; // ”ø
        case 7628: return "yu"; // ”ù
        case 7630: return "ji"; // ”ú
        case 7632: return "ji"; // ”û
        case 7634: return "huo"; // ”ü
        case 7636: return "xie"; // ”ý
        case 7638: return "tiao"; // ”þ
        case 7640: return "ying"; // •@
        case 7642: return "di"; // •A
        case 7644: return "xu"; // •B
        case 7646: return "chan"; // •C
        case 7648: return "yang"; // •D
        case 7650: return "shi"; // •E
        case 7652: return "min"; // •F
        case 7654: return "min"; // •G
        case 7656: return "tun"; // •H
        case 7658: return "chun"; // •I
        case 7660: return "wu"; // •J
        case 7662: return "bei"; // •K
        case 7664: return "ban"; // •L
        case 7666: return "jie"; // •M
        case 7668: return "sheng"; // •N
        case 7670: return "hu"; // •O
        case 7672: return "fang"; // •P
        case 7674: return "gui"; // •Q
        case 7676: return "xuan"; // •R
        case 7678: return "fen"; // •S
        case 7680: return "qin"; // •T
        case 7682: return "hu"; // •U
        case 7684: return "yan"; // •V
        case 7686: return "ze"; // •W
        case 7688: return "fang"; // •X
        case 7690: return "shen"; // •Y
        case 7692: return "ju"; // •Z
        case 7694: return "yang"; // •[
        case 7696: return "bing"; // •\
        case 7698: return "xuan"; // •]
        case 7700: return "po"; // •^
        case 7702: return "zhen"; // •_
        case 7704: return "ling"; // •`
        case 7706: return "hao"; // •a
        case 7708: return "mo"; // •b
        case 7710: return "bian"; // •c
        case 7712: return "xu"; // •d
        case 7714: return "hun"; // •e
        case 7716: return "zong"; // •f
        case 7718: return "xia"; // •g
        case 7720: return "fei"; // •h
        case 7722: return "yi"; // •i
        case 7724: return "wen"; // •j
        case 7726: return "dong"; // •k
        case 7728: return "ai"; // •l
        case 7730: return "bing"; // •m
        case 7732: return "ang"; // •n
        case 7734: return "long"; // •o
        case 7736: return "kuang"; // •p
        case 7738: return "tiao"; // •q
        case 7740: return "shi"; // •r
        case 7742: return "huang"; // •s
        case 7744: return "xuan"; // •t
        case 7746: return "kui"; // •u
        case 7748: return "kua"; // •v
        case 7750: return "jiao"; // •w
        case 7752: return "jin"; // •x
        case 7754: return "zhi"; // •y
        case 7756: return "tong"; // •z
        case 7758: return "hong"; // •{
        case 7760: return "gai"; // •|
        case 7762: return "xiang"; // •}
        case 7764: return "han"; // •~
        case 7766: return ""; // ÕÅ
        case 7768: return "jun4      "; // •€
        case 7770: return "xian"; // •
        case 7772: return "kun"; // •‚
        case 7774: return "zhou"; // •ƒ
        case 7776: return "xi"; // •„
        case 7778: return "sheng"; // •…
        case 7780: return "zhe"; // •†
        case 7782: return "zhe"; // •‡
        case 7784: return "han"; // •ˆ
        case 7786: return "hao"; // •‰
        case 7788: return "wan"; // •Š
        case 7790: return "tian"; // •‹
        case 7792: return "zhuo"; // •Œ
        case 7794: return "zui"; // •
        case 7796: return "zhou"; // •Ž
        case 7798: return "shan"; // •
        case 7800: return "ni"; // •
        case 7802: return "xi"; // •‘
        case 7804: return "du"; // •’
        case 7806: return "zheng"; // •“
        case 7808: return "yi"; // •”
        case 7810: return "an"; // ••
        case 7812: return "wan"; // •–
        case 7814: return "lin"; // •—
        case 7816: return "chang"; // •˜
        case 7818: return "wang"; // •™
        case 7820: return "xiao"; // •š
        case 7822: return "fei"; // •›
        case 7824: return "geng"; // •œ
        case 7826: return "yi"; // •
        case 7828: return "yun"; // •ž
        case 7830: return "hui"; // •Ÿ
        case 7832: return "xu"; // • 
        case 7834: return "min"; // •¡
        case 7836: return "ye"; // •¢
        case 7838: return "ying"; // •£
        case 7840: return "du"; // •¤
        case 7842: return "wei"; // •¥
        case 7844: return "qing"; // •¦
        case 7846: return "mao"; // •§
        case 7848: return "nan"; // •¨
        case 7850: return "lan"; // •©
        case 7852: return "yang"; // •ª
        case 7854: return "chun"; // •«
        case 7856: return "yao"; // •¬
        case 7858: return "suo"; // •­
        case 7860: return "pu"; // •®
        case 7862: return "jiao"; // •¯
        case 7864: return "kai"; // •°
        case 7866: return "gao"; // •±
        case 7868: return "weng"; // •²
        case 7870: return "chang"; // •³
        case 7872: return "qi"; // •´
        case 7874: return "hao"; // •µ
        case 7876: return "yan"; // •¶
        case 7878: return "li"; // •·
        case 7880: return "ji"; // •¸
        case 7882: return "men"; // •¹
        case 7884: return "zan"; // •º
        case 7886: return "xie"; // •»
        case 7888: return "hao"; // •¼
        case 7890: return "mo"; // •½
        case 7892: return "cong"; // •¾
        case 7894: return "ni"; // •¿
        case 7896: return "zhang"; // •À
        case 7898: return "hui"; // •Á
        case 7900: return "han"; // •Â
        case 7902: return "xuan"; // •Ã
        case 7904: return "chuan"; // •Ä
        case 7906: return "liao"; // •Å
        case 7908: return "tan"; // •Æ
        case 7910: return "jing"; // •Ç
        case 7912: return "pie"; // •È
        case 7914: return "lin"; // •É
        case 7916: return "xi"; // •Ê
        case 7918: return "yi"; // •Ë
        case 7920: return "ji"; // •Ì
        case 7922: return "huang"; // •Í
        case 7924: return "dai"; // •Î
        case 7926: return "ye"; // •Ï
        case 7928: return "ye"; // •Ð
        case 7930: return "li"; // •Ñ
        case 7932: return "tan"; // •Ò
        case 7934: return "tong"; // •Ó
        case 7936: return "xiao"; // •Ô
        case 7938: return "fei"; // •Õ
        case 7940: return "shen"; // •Ö
        case 7942: return "zhao"; // •×
        case 7944: return "hao"; // •Ø
        case 7946: return "yi"; // •Ù
        case 7948: return "shan"; // •Ú
        case 7950: return "xing"; // •Û
        case 7952: return "shan"; // •Ü
        case 7954: return "jiao"; // •Ý
        case 7956: return "bao"; // •Þ
        case 7958: return "jing"; // •ß
        case 7960: return "yan"; // •à
        case 7962: return "ai"; // •á
        case 7964: return "ye"; // •â
        case 7966: return "ru"; // •ã
        case 7968: return "meng"; // •ä
        case 7970: return "li"; // •å
        case 7972: return "chen"; // •æ
        case 7974: return "kuang"; // •ç
        case 7976: return "die"; // •è
        case 7978: return "liao"; // •é
        case 7980: return "yao"; // •ê
        case 7982: return "huo"; // •ë
        case 7984: return "lu"; // •ì
        case 7986: return "rong"; // •í
        case 7988: return "long"; // •î
        case 7990: return "luo"; // •ï
        case 7992: return "luan"; // •ð
        case 7994: return "shai"; // •ñ
        case 7996: return "tang"; // •ò
        case 7998: return "yan"; // •ó
        case 8000: return "zhu"; // •ô
        case 8002: return "yue"; // •õ
        case 8004: return "yi"; // •ö
        case 8006: return "hu"; // •÷
        case 8008: return "shu"; // •ø
        case 8010: return "cao"; // •ù
        case 8012: return "sheng"; // •ú
        case 8014: return "zeng"; // •û
        case 8016: return "qian"; // •ü
        case 8018: return "xu"; // •ý
        case 8020: return "hui"; // •þ
        case 8022: return "yin"; // –@
        case 8024: return "qie"; // –A
        case 8026: return "fen"; // –B
        case 8028: return "pi"; // –C
        case 8030: return "ban"; // –D
        case 8032: return "ling"; // –E
        case 8034: return "fei"; // –F
        case 8036: return "ti"; // –G
        case 8038: return "nu"; // –H
        case 8040: return "tiao"; // –I
        case 8042: return "lang"; // –J
        case 8044: return "juan"; // –K
        case 8046: return "ming"; // –L
        case 8048: return "mang"; // –M
        case 8050: return "tun"; // –N
        case 8052: return "qi"; // –O
        case 8054: return "ying"; // –P
        case 8056: return "zong"; // –Q
        case 8058: return "wang"; // –R
        case 8060: return "tong"; // –S
        case 8062: return "lang"; // –T
        case 8064: return "lao"; // –U
        case 8066: return "long"; // –V
        case 8068: return "pin"; // –W
        case 8070: return "zhu"; // –X
        case 8072: return "teul"; // –Y
        case 8074: return "ren"; // –Z
        case 8076: return "ba"; // –[
        case 8078: return "duo"; // –\
        case 8080: return "mu"; // –]
        case 8082: return "li"; // –^
        case 8084: return "gui"; // –_
        case 8086: return "jiu"; // –`
        case 8088: return "bi"; // –a
        case 8090: return "zhen"; // –b
        case 8092: return "ci"; // –c
        case 8094: return "ru"; // –d
        case 8096: return "qian"; // –e
        case 8098: return "wu"; // –f
        case 8100: return "wu"; // –g
        case 8102: return "xun"; // –h
        case 8104: return "fan"; // –i
        case 8106: return "zi"; // –j
        case 8108: return "er"; // –k
        case 8110: return "tuo"; // –l
        case 8112: return "di"; // –m
        case 8114: return "mang"; // –n
        case 8116: return "chi"; // –o
        case 8118: return "yi"; // –p
        case 8120: return "ge"; // –q
        case 8122: return "gong"; // –r
        case 8124: return "yi"; // –s
        case 8126: return "jiang"; // –t
        case 8128: return "shan"; // –u
        case 8130: return "wan"; // –v
        case 8132: return "jiu"; // –w
        case 8134: return "mang"; // –x
        case 8136: return "xi"; // –y
        case 8138: return "yuan"; // –z
        case 8140: return "bei"; // –{
        case 8142: return "dong"; // –|
        case 8144: return "qian"; // –}
        case 8146: return "chun"; // –~
        case 8148: return ""; // ÕÅ
        case 8150: return "dui"; // –€
        case 8152: return "hua"; // –
        case 8154: return "xin"; // –‚
        case 8156: return "niu"; // –ƒ
        case 8158: return "chou"; // –„
        case 8160: return "song"; // –…
        case 8162: return "wo"; // –†
        case 8164: return "jin"; // –‡
        case 8166: return "ji"; // –ˆ
        case 8168: return "mao"; // –‰
        case 8170: return "bi"; // –Š
        case 8172: return "ang"; // –‹
        case 8174: return "fen"; // –Œ
        case 8176: return "yi"; // –
        case 8178: return "fu"; // –Ž
        case 8180: return "nan"; // –
        case 8182: return "hu"; // –
        case 8184: return "ya"; // –‘
        case 8186: return "dou"; // –’
        case 8188: return "xin"; // –“
        case 8190: return "yao"; // –”
        case 8192: return "e"; // –•
        case 8194: return "zhao"; // ––
        case 8196: return "yun"; // –—
        case 8198: return "zui"; // –˜
        case 8200: return "sheng"; // –™
        case 8202: return "di"; // –š
        case 8204: return "lu"; // –›
        case 8206: return "song"; // –œ
        case 8208: return "nan"; // –
        case 8210: return "xian"; // –ž
        case 8212: return "ci"; // –Ÿ
        case 8214: return "xi"; // – 
        case 8216: return "guai"; // –¡
        case 8218: return "bao"; // –¢
        case 8220: return "mo"; // –£
        case 8222: return "yi"; // –¤
        case 8224: return "ye"; // –¥
        case 8226: return "ye"; // –¦
        case 8228: return "shi"; // –§
        case 8230: return "nie"; // –¨
        case 8232: return "bi"; // –©
        case 8234: return "yi"; // –ª
        case 8236: return "ni"; // –«
        case 8238: return "la"; // –¬
        case 8240: return "he"; // –­
        case 8242: return "pan"; // –®
        case 8244: return "fan"; // –¯
        case 8246: return "zhong"; // –°
        case 8248: return "dai"; // –±
        case 8250: return "ci"; // –²
        case 8252: return "yang"; // –³
        case 8254: return "fu"; // –´
        case 8256: return "shu"; // –µ
        case 8258: return "shao"; // –¶
        case 8260: return "song"; // –·
        case 8262: return "shen"; // –¸
        case 8264: return "nan"; // –¹
        case 8266: return "yong"; // –º
        case 8268: return "die"; // –»
        case 8270: return "zha"; // –¼
        case 8272: return "dan"; // –½
        case 8274: return "gu"; // –¾
        case 8276: return "bu"; // –¿
        case 8278: return "ao"; // –À
        case 8280: return "fu"; // –Á
        case 8282: return "ba"; // –Â
        case 8284: return "duo"; // –Ã
        case 8286: return "bi"; // –Ä
        case 8288: return "shan"; // –Å
        case 8290: return "si"; // –Æ
        case 8292: return "zhu"; // –Ç
        case 8294: return "bei"; // –È
        case 8296: return "fei"; // –É
        case 8298: return "guai"; // –Ê
        case 8300: return "cha"; // –Ë
        case 8302: return "yao"; // –Ì
        case 8304: return "jiu"; // –Í
        case 8306: return "liu"; // –Î
        case 8308: return "mei"; // –Ï
        case 8310: return "li"; // –Ð
        case 8312: return "rong"; // –Ñ
        case 8314: return "zao"; // –Ò
        case 8316: return "saeng"; // –Ó
        case 8318: return "yong"; // –Ô
        case 8320: return "xun"; // –Õ
        case 8322: return "qi"; // –Ö
        case 8324: return "zhen"; // –×
        case 8326: return "yi"; // –Ø
        case 8328: return "xiang"; // –Ù
        case 8330: return "zhen"; // –Ú
        case 8332: return "li"; // –Û
        case 8334: return "se"; // –Ü
        case 8336: return "kan"; // –Ý
        case 8338: return "bing"; // –Þ
        case 8340: return "ren"; // –ß
        case 8342: return "bai"; // –à
        case 8344: return "ren"; // –á
        case 8346: return "bing"; // –â
        case 8348: return "zi"; // –ã
        case 8350: return "chou"; // –ä
        case 8352: return "yi"; // –å
        case 8354: return "ci"; // –æ
        case 8356: return "jian"; // –ç
        case 8358: return "zui"; // –è
        case 8360: return "er"; // –é
        case 8362: return "er"; // –ê
        case 8364: return "you"; // –ë
        case 8366: return "fa"; // –ì
        case 8368: return "gong"; // –í
        case 8370: return "zhan"; // –î
        case 8372: return "li"; // –ï
        case 8374: return "yin"; // –ð
        case 8376: return "yi"; // –ñ
        case 8378: return "shi"; // –ò
        case 8380: return "fu"; // –ó
        case 8382: return "ru"; // –ô
        case 8384: return "yi"; // –õ
        case 8386: return "ku"; // –ö
        case 8388: return "qiong"; // –÷
        case 8390: return "sang"; // –ø
        case 8392: return "xue"; // –ù
        case 8394: return "duo"; // –ú
        case 8396: return "chui"; // –û
        case 8398: return "yu"; // –ü
        case 8400: return "za"; // –ý
        case 8402: return "ka"; // –þ
        case 8404: return "ying"; // —@
        case 8406: return "jie"; // —A
        case 8408: return "liu"; // —B
        case 8410: return "zhan"; // —C
        case 8412: return "xun"; // —D
        case 8414: return "sa"; // —E
        case 8416: return "zhen"; // —F
        case 8418: return "bei"; // —G
        case 8420: return "ying"; // —H
        case 8422: return "kuo"; // —I
        case 8424: return "jing"; // —J
        case 8426: return "bo"; // —K
        case 8428: return "ben"; // —L
        case 8430: return "rui"; // —M
        case 8432: return "xi"; // —N
        case 8434: return "lang"; // —O
        case 8436: return "liu"; // —P
        case 8438: return "feng"; // —Q
        case 8440: return "qi"; // —R
        case 8442: return "wen"; // —S
        case 8444: return "jun"; // —T
        case 8446: return "gan"; // —U
        case 8448: return "yin"; // —V
        case 8450: return "qiu"; // —W
        case 8452: return "you"; // —X
        case 8454: return "long"; // —Y
        case 8456: return "peng"; // —Z
        case 8458: return "zhuang"; // —[
        case 8460: return "di"; // —\
        case 8462: return "juan"; // —]
        case 8464: return "tu"; // —^
        case 8466: return "zao"; // —_
        case 8468: return "ao"; // —`
        case 8470: return "bi"; // —a
        case 8472: return "di"; // —b
        case 8474: return "han"; // —c
        case 8476: return "zhi"; // —d
        case 8478: return "ren"; // —e
        case 8480: return "bei"; // —f
        case 8482: return "jian"; // —g
        case 8484: return "huan"; // —h
        case 8486: return "wan"; // —i
        case 8488: return "nuo"; // —j
        case 8490: return "jia"; // —k
        case 8492: return "tiao"; // —l
        case 8494: return "ji"; // —m
        case 8496: return "xiao"; // —n
        case 8498: return "lu"; // —o
        case 8500: return "kuan"; // —p
        case 8502: return "cen"; // —q
        case 8504: return "fen"; // —r
        case 8506: return "song"; // —s
        case 8508: return "qi"; // —t
        case 8510: return "dou"; // —u
        case 8512: return "qin"; // —v
        case 8514: return "ying"; // —w
        case 8516: return "ju"; // —x
        case 8518: return "hun"; // —y
        case 8520: return "zhuo"; // —z
        case 8522: return "chan"; // —{
        case 8524: return "wei"; // —|
        case 8526: return "jing"; // —}
        case 8528: return "li"; // —~
        case 8530: return ""; // ÕÅ
        case 8532: return "bing"; // —€
        case 8534: return "xia"; // —
        case 8536: return "fo"; // —‚
        case 8538: return "tao"; // —ƒ
        case 8540: return "zhi"; // —„
        case 8542: return "lai"; // —…
        case 8544: return "lian"; // —†
        case 8546: return "tuo"; // —‡
        case 8548: return "li"; // —ˆ
        case 8550: return "qi"; // —‰
        case 8552: return "bing"; // —Š
        case 8554: return "lun"; // —‹
        case 8556: return "cong"; // —Œ
        case 8558: return "qian"; // —
        case 8560: return "qi"; // —Ž
        case 8562: return "cai"; // —
        case 8564: return "chan"; // —
        case 8566: return "de"; // —‘
        case 8568: return "fei"; // —’
        case 8570: return "bei"; // —“
        case 8572: return "bang"; // —”
        case 8574: return "hun"; // —•
        case 8576: return "chang"; // —–
        case 8578: return "zao"; // ——
        case 8580: return "li"; // —˜
        case 8582: return "yu"; // —™
        case 8584: return "yu"; // —š
        case 8586: return "gu"; // —›
        case 8588: return "gun"; // —œ
        case 8590: return "dong"; // —
        case 8592: return "gang"; // —ž
        case 8594: return "wang"; // —Ÿ
        case 8596: return "cuo"; // — 
        case 8598: return "fan"; // —¡
        case 8600: return "cheng"; // —¢
        case 8602: return "zhan"; // —£
        case 8604: return "qi"; // —¤
        case 8606: return "yuan"; // —¥
        case 8608: return "yan"; // —¦
        case 8610: return "yu"; // —§
        case 8612: return "juan"; // —¨
        case 8614: return "yi"; // —©
        case 8616: return "shen"; // —ª
        case 8618: return "qi"; // —«
        case 8620: return "zhuo"; // —¬
        case 8622: return "fu"; // —­
        case 8624: return "lai"; // —®
        case 8626: return "zou"; // —¯
        case 8628: return "zou"; // —°
        case 8630: return "fen"; // —±
        case 8632: return "chen"; // —²
        case 8634: return "qing"; // —³
        case 8636: return "ni"; // —´
        case 8638: return "wan"; // —µ
        case 8640: return "lu"; // —¶
        case 8642: return "hao"; // —·
        case 8644: return "jie"; // —¸
        case 8646: return "zhou"; // —¹
        case 8648: return "ju"; // —º
        case 8650: return "ju"; // —»
        case 8652: return "cheng"; // —¼
        case 8654: return "zuo"; // —½
        case 8656: return "kong"; // —¾
        case 8658: return "ya"; // —¿
        case 8660: return "bei"; // —À
        case 8662: return "zhuo"; // —Á
        case 8664: return "zi"; // —Â
        case 8666: return "bin"; // —Ã
        case 8668: return "peng"; // —Ä
        case 8670: return "ding"; // —Å
        case 8672: return "chu"; // —Æ
        case 8674: return "chang"; // —Ç
        case 8676: return "men"; // —È
        case 8678: return "hua"; // —É
        case 8680: return "jian"; // —Ê
        case 8682: return "gui"; // —Ë
        case 8684: return "xi"; // —Ì
        case 8686: return "dao"; // —Í
        case 8688: return "gui"; // —Î
        case 8690: return "dian"; // —Ï
        case 8692: return "zhi"; // —Ð
        case 8694: return "quan"; // —Ñ
        case 8696: return "mieng"; // —Ò
        case 8698: return "fu"; // —Ó
        case 8700: return "geng"; // —Ô
        case 8702: return "peng"; // —Õ
        case 8704: return "shan"; // —Ö
        case 8706: return "yi"; // —×
        case 8708: return "shen"; // —Ø
        case 8710: return "duo"; // —Ù
        case 8712: return "fu"; // —Ú
        case 8714: return "wei"; // —Û
        case 8716: return "wei"; // —Ü
        case 8718: return "jia"; // —Ý
        case 8720: return "zong"; // —Þ
        case 8722: return "han"; // —ß
        case 8724: return "yi"; // —à
        case 8726: return "xi"; // —á
        case 8728: return "ya"; // —â
        case 8730: return "yan"; // —ã
        case 8732: return "jian"; // —ä
        case 8734: return "yu"; // —å
        case 8736: return "he"; // —æ
        case 8738: return "wo"; // —ç
        case 8740: return "pian"; // —è
        case 8742: return "bi"; // —é
        case 8744: return "yao"; // —ê
        case 8746: return "guo"; // —ë
        case 8748: return "xu"; // —ì
        case 8750: return "ruo"; // —í
        case 8752: return "yang"; // —î
        case 8754: return "la"; // —ï
        case 8756: return "yan"; // —ð
        case 8758: return "ben"; // —ñ
        case 8760: return "hui"; // —ò
        case 8762: return "kui"; // —ó
        case 8764: return "jie"; // —ô
        case 8766: return "kui"; // —õ
        case 8768: return "si"; // —ö
        case 8770: return "feng"; // —÷
        case 8772: return "tuo"; // —ø
        case 8774: return "ji"; // —ù
        case 8776: return "mu"; // —ú
        case 8778: return "mao"; // —û
        case 8780: return "ku"; // —ü
        case 8782: return "hu"; // —ý
        case 8784: return "ting"; // —þ
        case 8786: return "yu"; // ˜@
        case 8788: return "you"; // ˜A
        case 8790: return "cong"; // ˜B
        case 8792: return "yuan"; // ˜C
        case 8794: return "yang"; // ˜D
        case 8796: return "zhen"; // ˜E
        case 8798: return "pian"; // ˜F
        case 8800: return "ye"; // ˜G
        case 8802: return "jie"; // ˜H
        case 8804: return "ye"; // ˜I
        case 8806: return "dun"; // ˜J
        case 8808: return "yu"; // ˜K
        case 8810: return "wei"; // ˜L
        case 8812: return "mei"; // ˜M
        case 8814: return "ti"; // ˜N
        case 8816: return "ji"; // ˜O
        case 8818: return "jie"; // ˜P
        case 8820: return "rou"; // ˜Q
        case 8822: return "huang"; // ˜R
        case 8824: return "le"; // ˜S
        case 8826: return "quan"; // ˜T
        case 8828: return "xiang"; // ˜U
        case 8830: return "shi"; // ˜V
        case 8832: return "tan"; // ˜W
        case 8834: return "wen"; // ˜X
        case 8836: return "shen"; // ˜Y
        case 8838: return "chu"; // ˜Z
        case 8840: return "pi"; // ˜[
        case 8842: return "jia"; // ˜\
        case 8844: return "yi"; // ˜]
        case 8846: return "zhan"; // ˜^
        case 8848: return "fu"; // ˜_
        case 8850: return "nuo"; // ˜`
        case 8852: return "mi"; // ˜a
        case 8854: return "gu"; // ˜b
        case 8856: return "jian"; // ˜c
        case 8858: return "ta"; // ˜d
        case 8860: return "yao"; // ˜e
        case 8862: return "xie"; // ˜f
        case 8864: return "yuan"; // ˜g
        case 8866: return "zi"; // ˜h
        case 8868: return "ming"; // ˜i
        case 8870: return "su"; // ˜j
        case 8872: return "jia"; // ˜k
        case 8874: return "yao"; // ˜l
        case 8876: return "jie"; // ˜m
        case 8878: return "huang"; // ˜n
        case 8880: return "han"; // ˜o
        case 8882: return "qian"; // ˜p
        case 8884: return "ma"; // ˜q
        case 8886: return "yuan"; // ˜r
        case 8888: return "rong"; // ˜s
        case 8890: return "shi"; // ˜t
        case 8892: return "zhi"; // ˜u
        case 8894: return "wen"; // ˜v
        case 8896: return "ting"; // ˜w
        case 8898: return "rong"; // ˜x
        case 8900: return "tang"; // ˜y
        case 8902: return "zhai"; // ˜z
        case 8904: return "si"; // ˜{
        case 8906: return "sheng"; // ˜|
        case 8908: return "ke"; // ˜}
        case 8910: return "xi"; // ˜~
        case 8912: return ""; // ÕÅ
        case 8914: return "gu"; // ˜€
        case 8916: return "qi"; // ˜
        case 8918: return "gao"; // ˜‚
        case 8920: return "sun"; // ˜ƒ
        case 8922: return "pan"; // ˜„
        case 8924: return "tao"; // ˜…
        case 8926: return "ge"; // ˜†
        case 8928: return "chun"; // ˜‡
        case 8930: return "dian"; // ˜ˆ
        case 8932: return "nou"; // ˜‰
        case 8934: return "ji"; // ˜Š
        case 8936: return "gou"; // ˜‹
        case 8938: return "qiang"; // ˜Œ
        case 8940: return "qian"; // ˜
        case 8942: return "mei"; // ˜Ž
        case 8944: return "xu"; // ˜
        case 8946: return "gang"; // ˜
        case 8948: return "zhuo"; // ˜‘
        case 8950: return "tuo"; // ˜’
        case 8952: return "qiao"; // ˜“
        case 8954: return "yang"; // ˜”
        case 8956: return "dian"; // ˜•
        case 8958: return "jia"; // ˜–
        case 8960: return "zhi"; // ˜—
        case 8962: return "dao"; // ˜˜
        case 8964: return "long"; // ˜™
        case 8966: return "sang"; // ˜š
        case 8968: return "die"; // ˜›
        case 8970: return "gui"; // ˜œ
        case 8972: return "lian"; // ˜
        case 8974: return "hui"; // ˜ž
        case 8976: return "yong"; // ˜Ÿ
        case 8978: return "qian"; // ˜ 
        case 8980: return "guo"; // ˜¡
        case 8982: return "gai"; // ˜¢
        case 8984: return "gai"; // ˜£
        case 8986: return "tuan"; // ˜¤
        case 8988: return "hua"; // ˜¥
        case 8990: return "shen"; // ˜¦
        case 8992: return "zui"; // ˜§
        case 8994: return "peng"; // ˜¨
        case 8996: return "you"; // ˜©
        case 8998: return "jiang"; // ˜ª
        case 9000: return "hu"; // ˜«
        case 9002: return "huan"; // ˜¬
        case 9004: return "gui"; // ˜­
        case 9006: return "nie"; // ˜®
        case 9008: return "yi"; // ˜¯
        case 9010: return "gao"; // ˜°
        case 9012: return "kang"; // ˜±
        case 9014: return "gui"; // ˜²
        case 9016: return "gui"; // ˜³
        case 9018: return "man"; // ˜´
        case 9020: return "di"; // ˜µ
        case 9022: return "zhuang"; // ˜¶
        case 9024: return "le"; // ˜·
        case 9026: return "lang"; // ˜¸
        case 9028: return "chen"; // ˜¹
        case 9030: return "cong"; // ˜º
        case 9032: return "li"; // ˜»
        case 9034: return "xiu"; // ˜¼
        case 9036: return "qing"; // ˜½
        case 9038: return "shuang"; // ˜¾
        case 9040: return "tong"; // ˜¿
        case 9042: return "guan"; // ˜À
        case 9044: return "ze"; // ˜Á
        case 9046: return "su"; // ˜Â
        case 9048: return "lei"; // ˜Ã
        case 9050: return "lu"; // ˜Ä
        case 9052: return "liang"; // ˜Å
        case 9054: return "mi"; // ˜Æ
        case 9056: return "lou"; // ˜Ç
        case 9058: return "chao"; // ˜È
        case 9060: return "su"; // ˜É
        case 9062: return "ke"; // ˜Ê
        case 9064: return "biao"; // ˜Ë
        case 9066: return "du"; // ˜Ì
        case 9068: return "liao"; // ˜Í
        case 9070: return "zhe"; // ˜Î
        case 9072: return "zha"; // ˜Ï
        case 9074: return "shu"; // ˜Ð
        case 9076: return "man"; // ˜Ñ
        case 9078: return "mu"; // ˜Ò
        case 9080: return "yang"; // ˜Ó
        case 9082: return "tiao"; // ˜Ô
        case 9084: return "peng"; // ˜Õ
        case 9086: return "zhu"; // ˜Ö
        case 9088: return "sha"; // ˜×
        case 9090: return "quan"; // ˜Ø
        case 9092: return "jian"; // ˜Ù
        case 9094: return "cong"; // ˜Ú
        case 9096: return "ji"; // ˜Û
        case 9098: return "yan"; // ˜Ü
        case 9100: return "xue"; // ˜Ý
        case 9102: return "er"; // ˜Þ
        case 9104: return "xun"; // ˜ß
        case 9106: return "yi"; // ˜à
        case 9108: return "zui"; // ˜á
        case 9110: return "cong"; // ˜â
        case 9112: return "pu"; // ˜ã
        case 9114: return "shu"; // ˜ä
        case 9116: return "hua"; // ˜å
        case 9118: return "kui"; // ˜æ
        case 9120: return "zhen"; // ˜ç
        case 9122: return "shan"; // ˜è
        case 9124: return "xi"; // ˜é
        case 9126: return "chun"; // ˜ê
        case 9128: return "dian"; // ˜ë
        case 9130: return "fa"; // ˜ì
        case 9132: return "mo"; // ˜í
        case 9134: return "wu"; // ˜î
        case 9136: return "rao"; // ˜ï
        case 9138: return "lin"; // ˜ð
        case 9140: return "liu"; // ˜ñ
        case 9142: return "qiao"; // ˜ò
        case 9144: return "jian"; // ˜ó
        case 9146: return "run"; // ˜ô
        case 9148: return "fan"; // ˜õ
        case 9150: return "jian"; // ˜ö
        case 9152: return "lao"; // ˜÷
        case 9154: return "yun"; // ˜ø
        case 9156: return "shun"; // ˜ù
        case 9158: return "dun"; // ˜ú
        case 9160: return "cheng"; // ˜û
        case 9162: return "tang"; // ˜ü
        case 9164: return "meng"; // ˜ý
        case 9166: return "xiao"; // ˜þ
        case 9168: return "jue"; // ™@
        case 9170: return "dian"; // ™A
        case 9172: return "hui"; // ™B
        case 9174: return "ji"; // ™C
        case 9176: return "nuo"; // ™D
        case 9178: return "duo"; // ™E
        case 9180: return "ning"; // ™F
        case 9182: return "rui"; // ™G
        case 9184: return "tong"; // ™H
        case 9186: return "zeng"; // ™I
        case 9188: return "fen"; // ™J
        case 9190: return "qiong"; // ™K
        case 9192: return "yan"; // ™L
        case 9194: return "heng"; // ™M
        case 9196: return "qian"; // ™N
        case 9198: return "gu"; // ™O
        case 9200: return "liu"; // ™P
        case 9202: return "lao"; // ™Q
        case 9204: return "gao"; // ™R
        case 9206: return "xi"; // ™S
        case 9208: return "sheng"; // ™T
        case 9210: return "zi"; // ™U
        case 9212: return "san"; // ™V
        case 9214: return "ji"; // ™W
        case 9216: return "dou"; // ™X
        case 9218: return "jing"; // ™Y
        case 9220: return "jian"; // ™Z
        case 9222: return "chu"; // ™[
        case 9224: return "da"; // ™\
        case 9226: return "qiao"; // ™]
        case 9228: return "jiang"; // ™^
        case 9230: return "lin"; // ™_
        case 9232: return "nao"; // ™`
        case 9234: return "yin"; // ™a
        case 9236: return "hui"; // ™b
        case 9238: return "shan"; // ™c
        case 9240: return "zui"; // ™d
        case 9242: return "xuan"; // ™e
        case 9244: return "cheng"; // ™f
        case 9246: return "gan"; // ™g
        case 9248: return "ju"; // ™h
        case 9250: return "zui"; // ™i
        case 9252: return "yi"; // ™j
        case 9254: return "pu"; // ™k
        case 9256: return "feng"; // ™l
        case 9258: return "hui"; // ™m
        case 9260: return "dang"; // ™n
        case 9262: return "ji"; // ™o
        case 9264: return "sui"; // ™p
        case 9266: return "bo"; // ™q
        case 9268: return "cheng"; // ™r
        case 9270: return "chu"; // ™s
        case 9272: return "zhua"; // ™t
        case 9274: return "gui"; // ™u
        case 9276: return "ji"; // ™v
        case 9278: return "jie"; // ™w
        case 9280: return "jia"; // ™x
        case 9282: return "zhai"; // ™y
        case 9284: return "jian"; // ™z
        case 9286: return "qiang"; // ™{
        case 9288: return "dao"; // ™|
        case 9290: return "yi"; // ™}
        case 9292: return "biao"; // ™~
        case 9294: return ""; // ÕÅ
        case 9296: return "song"; // ™€
        case 9298: return "she"; // ™
        case 9300: return "li"; // ™‚
        case 9302: return "yin"; // ™ƒ
        case 9304: return "tao"; // ™„
        case 9306: return "tai"; // ™…
        case 9308: return "mian"; // ™†
        case 9310: return "qi"; // ™‡
        case 9312: return "tuan"; // ™ˆ
        case 9314: return "bin"; // ™‰
        case 9316: return "hua"; // ™Š
        case 9318: return "ji"; // ™‹
        case 9320: return "qian"; // ™Œ
        case 9322: return "mi"; // ™
        case 9324: return "ning"; // ™Ž
        case 9326: return "yi"; // ™
        case 9328: return "gao"; // ™
        case 9330: return "kan"; // ™‘
        case 9332: return "yin"; // ™’
        case 9334: return "nou"; // ™“
        case 9336: return "qing"; // ™”
        case 9338: return "yan"; // ™•
        case 9340: return "qi"; // ™–
        case 9342: return "mi"; // ™—
        case 9344: return "zhao"; // ™˜
        case 9346: return "gui"; // ™™
        case 9348: return "chun"; // ™š
        case 9350: return "ji"; // ™›
        case 9352: return "kui"; // ™œ
        case 9354: return "po"; // ™
        case 9356: return "deng"; // ™ž
        case 9358: return "chu"; // ™Ÿ
        case 9360: return "ge"; // ™ 
        case 9362: return "mian"; // ™¡
        case 9364: return "you"; // ™¢
        case 9366: return "zhi"; // ™£
        case 9368: return "guang"; // ™¤
        case 9370: return "qian"; // ™¥
        case 9372: return "lei"; // ™¦
        case 9374: return "lei"; // ™§
        case 9376: return "sa"; // ™¨
        case 9378: return "lu"; // ™©
        case 9380: return "li"; // ™ª
        case 9382: return "cuan"; // ™«
        case 9384: return "lu"; // ™¬
        case 9386: return "mei"; // ™­
        case 9388: return "hui"; // ™®
        case 9390: return "ou"; // ™¯
        case 9392: return "lu"; // ™°
        case 9394: return "zhi"; // ™±
        case 9396: return "gao"; // ™²
        case 9398: return "du"; // ™³
        case 9400: return "yuan"; // ™´
        case 9402: return "li"; // ™µ
        case 9404: return "fei"; // ™¶
        case 9406: return "zhu"; // ™·
        case 9408: return "sou"; // ™¸
        case 9410: return "lian"; // ™¹
        case 9412: return "jiang"; // ™º
        case 9414: return "chu"; // ™»
        case 9416: return "qing"; // ™¼
        case 9418: return "zhu"; // ™½
        case 9420: return "lu"; // ™¾
        case 9422: return "yan"; // ™¿
        case 9424: return "li"; // ™À
        case 9426: return "zhu"; // ™Á
        case 9428: return "qin"; // ™Â
        case 9430: return "ji"; // ™Ã
        case 9432: return "e"; // ™Ä
        case 9434: return "su"; // ™Å
        case 9436: return "gui"; // ™Æ
        case 9438: return "nie"; // ™Ç
        case 9440: return "yu"; // ™È
        case 9442: return "long"; // ™É
        case 9444: return "la"; // ™Ê
        case 9446: return "jiao"; // ™Ë
        case 9448: return "xian"; // ™Ì
        case 9450: return "gui"; // ™Í
        case 9452: return "ju"; // ™Î
        case 9454: return "qiu"; // ™Ï
        case 9456: return "ling"; // ™Ð
        case 9458: return "ying"; // ™Ñ
        case 9460: return "jian"; // ™Ò
        case 9462: return "yin"; // ™Ó
        case 9464: return "you"; // ™Ô
        case 9466: return "ying"; // ™Õ
        case 9468: return "xiang"; // ™Ö
        case 9470: return "nong"; // ™×
        case 9472: return "bo"; // ™Ø
        case 9474: return "zhan"; // ™Ù
        case 9476: return "lan"; // ™Ú
        case 9478: return "ju"; // ™Û
        case 9480: return "shuang"; // ™Ü
        case 9482: return "she"; // ™Ý
        case 9484: return "wei"; // ™Þ
        case 9486: return "cong"; // ™ß
        case 9488: return "quan"; // ™à
        case 9490: return "qu"; // ™á
        case 9492: return "cang"; // ™â
        case 9494: return "jou"; // ™ã
        case 9496: return "yu"; // ™ä
        case 9498: return "luo"; // ™å
        case 9500: return "li"; // ™æ
        case 9502: return "zuan"; // ™ç
        case 9504: return "luan"; // ™è
        case 9506: return "dang"; // ™é
        case 9508: return "jue"; // ™ê
        case 9510: return "yan"; // ™ë
        case 9512: return "lan"; // ™ì
        case 9514: return "lan"; // ™í
        case 9516: return "zhu"; // ™î
        case 9518: return "lei"; // ™ï
        case 9520: return "li"; // ™ð
        case 9522: return "ba"; // ™ñ
        case 9524: return "nang"; // ™ò
        case 9526: return "yu"; // ™ó
        case 9528: return "ling"; // ™ô
        case 9530: return "guang"; // ™õ
        case 9532: return "yi"; // ™ö
        case 9534: return "han"; // ™÷
        case 9536: return "xu"; // ™ø
        case 9538: return "chao"; // ™ù
        case 9540: return "xi"; // ™ú
        case 9542: return "qi"; // ™û
        case 9544: return "ai"; // ™ü
        case 9546: return "yi"; // ™ý
        case 9548: return "jue"; // ™þ
        case 9550: return "kai"; // š@
        case 9552: return "xu"; // šA
        case 9554: return "he"; // šB
        case 9556: return "kui"; // šC
        case 9558: return "lang"; // šD
        case 9560: return "kuan"; // šE
        case 9562: return "shuo"; // šF
        case 9564: return "e"; // šG
        case 9566: return "xu"; // šH
        case 9568: return "chi"; // šI
        case 9570: return "qin"; // šJ
        case 9572: return "kan"; // šK
        case 9574: return "kuan"; // šL
        case 9576: return "ke"; // šM
        case 9578: return "chuan"; // šN
        case 9580: return "gua"; // šO
        case 9582: return "yin"; // šP
        case 9584: return "yu"; // šQ
        case 9586: return "xiao"; // šR
        case 9588: return "ye"; // šS
        case 9590: return "yang"; // šT
        case 9592: return "tan"; // šU
        case 9594: return "jin"; // šV
        case 9596: return "ou"; // šW
        case 9598: return "hu"; // šX
        case 9600: return "ti"; // šY
        case 9602: return "huan"; // šZ
        case 9604: return "xu"; // š[
        case 9606: return "pen"; // š\
        case 9608: return "yi"; // š]
        case 9610: return "chi"; // š^
        case 9612: return "xu"; // š_
        case 9614: return "shan"; // š`
        case 9616: return "lian"; // ša
        case 9618: return "chu"; // šb
        case 9620: return "yi"; // šc
        case 9622: return "e"; // šd
        case 9624: return "yu"; // še
        case 9626: return "chuo"; // šf
        case 9628: return "huan"; // šg
        case 9630: return "bu"; // šh
        case 9632: return "bu"; // ši
        case 9634: return "ju"; // šj
        case 9636: return "qian"; // šk
        case 9638: return "zhi"; // šl
        case 9640: return "se"; // šm
        case 9642: return "chi"; // šn
        case 9644: return "se"; // šo
        case 9646: return "zhong"; // šp
        case 9648: return "sui"; // šq
        case 9650: return "sui"; // šr
        case 9652: return "li"; // šs
        case 9654: return "ze"; // št
        case 9656: return "yu"; // šu
        case 9658: return "li"; // šv
        case 9660: return "gui"; // šw
        case 9662: return "e"; // šx
        case 9664: return "zhe"; // šy
        case 9666: return "wen"; // šz
        case 9668: return "mo"; // š{
        case 9670: return "yao"; // š|
        case 9672: return "sheng"; // š}
        case 9674: return "xu"; // š~
        case 9676: return ""; // ÕÅ
        case 9678: return "jue"; // š€
        case 9680: return "qia"; // š
        case 9682: return "qiu"; // š‚
        case 9684: return "su"; // šƒ
        case 9686: return "qing"; // š„
        case 9688: return "yi"; // š…
        case 9690: return "ye"; // š†
        case 9692: return "ye"; // š‡
        case 9694: return "can"; // šˆ
        case 9696: return "men"; // š‰
        case 9698: return "die"; // šŠ
        case 9700: return "zhen"; // š‹
        case 9702: return "yun"; // šŒ
        case 9704: return "wen"; // š
        case 9706: return "chou"; // šŽ
        case 9708: return "ti"; // š
        case 9710: return "jin"; // š
        case 9712: return "shang"; // š‘
        case 9714: return "yin"; // š’
        case 9716: return "diao"; // š“
        case 9718: return "jiu"; // š”
        case 9720: return "kui"; // š•
        case 9722: return "cuan"; // š–
        case 9724: return "dan"; // š—
        case 9726: return "du"; // š˜
        case 9728: return "jiang"; // š™
        case 9730: return "lian"; // šš
        case 9732: return "bin"; // š›
        case 9734: return "du"; // šœ
        case 9736: return "jian"; // š
        case 9738: return "jian"; // šž
        case 9740: return "zhu"; // šŸ
        case 9742: return "keng"; // š 
        case 9744: return "yi"; // š¡
        case 9746: return "sha"; // š¢
        case 9748: return "que"; // š£
        case 9750: return "ke"; // š¤
        case 9752: return "yao"; // š¥
        case 9754: return "xun"; // š¦
        case 9756: return "hui"; // š§
        case 9758: return "qiao"; // š¨
        case 9760: return "ji"; // š©
        case 9762: return "ou"; // šª
        case 9764: return "hui"; // š«
        case 9766: return "duan"; // š¬
        case 9768: return "yi"; // š­
        case 9770: return "xiao"; // š®
        case 9772: return "guan"; // š¯
        case 9774: return "mei"; // š°
        case 9776: return "ai"; // š±
        case 9778: return "jie"; // š²
        case 9780: return "pi"; // š³
        case 9782: return "chan"; // š´
        case 9784: return "hao"; // šµ
        case 9786: return "cai"; // š¶
        case 9788: return "pi"; // š·
        case 9790: return "lie"; // š¸
        case 9792: return "jia"; // š¹
        case 9794: return "sai"; // šº
        case 9796: return "mao"; // š»
        case 9798: return "tuo"; // š¼
        case 9800: return "xun"; // š½
        case 9802: return "er"; // š¾
        case 9804: return "rong"; // š¿
        case 9806: return "xian"; // šÀ
        case 9808: return "ju"; // šÁ
        case 9810: return "qiu"; // šÂ
        case 9812: return "dou"; // šÃ
        case 9814: return "sha"; // šÄ
        case 9816: return "pei"; // šÅ
        case 9818: return "ju"; // šÆ
        case 9820: return "duo"; // šÇ
        case 9822: return "bi"; // šÈ
        case 9824: return "san"; // šÉ
        case 9826: return "mao"; // šÊ
        case 9828: return "sai"; // šË
        case 9830: return "shu"; // šÌ
        case 9832: return "tuo"; // šÍ
        case 9834: return "ke"; // šÎ
        case 9836: return "ta"; // šÏ
        case 9838: return "san"; // šÐ
        case 9840: return "lu"; // šÑ
        case 9842: return "mu"; // šÒ
        case 9844: return "li"; // šÓ
        case 9846: return "tong"; // šÔ
        case 9848: return "rong"; // šÕ
        case 9850: return "zhan"; // šÖ
        case 9852: return "sao"; // š×
        case 9854: return "zhan"; // šØ
        case 9856: return "meng"; // šÙ
        case 9858: return "lu"; // šÚ
        case 9860: return "die"; // šÛ
        case 9862: return "jue"; // šÜ
        case 9864: return "qi"; // šÝ
        case 9866: return "yang"; // šÞ
        case 9868: return "nei"; // šß
        case 9870: return "bin"; // šà
        case 9872: return "shen"; // šá
        case 9874: return "qi"; // šâ
        case 9876: return "xi"; // šã
        case 9878: return "qing"; // šä
        case 9880: return "ya"; // šå
        case 9882: return "dong"; // šæ
        case 9884: return "yang"; // šç
        case 9886: return "yun"; // šè
        case 9888: return "zheng"; // šé
        case 9890: return "bing"; // šê
        case 9892: return "dang"; // šë
        case 9894: return "shui"; // šì
        case 9896: return "le"; // ší
        case 9898: return "mei"; // šî
        case 9900: return "fan"; // šï
        case 9902: return "gui"; // šð
        case 9904: return "bin"; // šñ
        case 9906: return "ze"; // šò
        case 9908: return "mian"; // šó
        case 9910: return "diao"; // šô
        case 9912: return "yue"; // šõ
        case 9914: return "chuan"; // šö
        case 9916: return "wan"; // š÷
        case 9918: return "fa"; // šø
        case 9920: return "da"; // šù
        case 9922: return "tuo"; // šú
        case 9924: return "mang"; // šû
        case 9926: return "you"; // šü
        case 9928: return "pin"; // šý
        case 9930: return "qian"; // šþ
        case 9932: return "yu"; // ›@
        case 9934: return "yu"; // ›A
        case 9936: return "tu"; // ›B
        case 9938: return "jiu"; // ›C
        case 9940: return "ji"; // ›D
        case 9942: return "zhi"; // ›E
        case 9944: return "qian"; // ›F
        case 9946: return "jing"; // ›G
        case 9948: return "jing"; // ›H
        case 9950: return "tun"; // ›I
        case 9952: return "jun1      "; // ›J
        case 9954: return "hong"; // ›K
        case 9956: return "fu"; // ›L
        case 9958: return "bian"; // ›M
        case 9960: return "gan"; // ›N
        case 9962: return "zhong"; // ›O
        case 9964: return "pang"; // ›P
        case 9966: return "jue"; // ›Q
        case 9968: return "hu"; // ›R
        case 9970: return "you"; // ›S
        case 9972: return "xu"; // ›T
        case 9974: return "xu"; // ›U
        case 9976: return "yun"; // ›V
        case 9978: return "yan"; // ›W
        case 9980: return "dan"; // ›X
        case 9982: return "you"; // ›Y
        case 9984: return "hu"; // ›Z
        case 9986: return "huo"; // ›[
        case 9988: return "niu"; // ›\
        case 9990: return "mei"; // ›]
        case 9992: return "mi"; // ›^
        case 9994: return "chong"; // ›_
        case 9996: return "pang"; // ›`
        case 9998: return "bi"; // ›a
        case 10000: return "zhi"; // ›b
        case 10002: return "pan"; // ›c
        case 10004: return "zhui"; // ›d
        case 10006: return "za"; // ›e
        case 10008: return "liu"; // ›f
        case 10010: return "ze"; // ›g
        case 10012: return "feng"; // ›h
        case 10014: return "mei"; // ›i
        case 10016: return "za"; // ›j
        case 10018: return "duo"; // ›k
        case 10020: return "li"; // ›l
        case 10022: return "mi"; // ›m
        case 10024: return "yi"; // ›n
        case 10026: return "fa"; // ›o
        case 10028: return "tian"; // ›p
        case 10030: return "si"; // ›q
        case 10032: return "kuang"; // ›r
        case 10034: return "ying"; // ›s
        case 10036: return "gou"; // ›t
        case 10038: return "yi"; // ›u
        case 10040: return "jia"; // ›v
        case 10042: return "you"; // ›w
        case 10044: return "hui"; // ›x
        case 10046: return "ben"; // ›y
        case 10048: return "ze"; // ›z
        case 10050: return "ku"; // ›{
        case 10052: return "ao"; // ›|
        case 10054: return "gu"; // ›}
        case 10056: return "hu"; // ›~
        case 10058: return "zhang"; // ÕÅ
        case 10060: return "peng"; // ›€
        case 10062: return "zi"; // ›
        case 10064: return "di"; // ›‚
        case 10066: return "su"; // ›ƒ
        case 10068: return "cheng"; // ›„
        case 10070: return "si"; // ›…
        case 10072: return "ju"; // ›†
        case 10074: return "xue"; // ›‡
        case 10076: return "sheng"; // ›ˆ
        case 10078: return "jue"; // ›‰
        case 10080: return "fu"; // ›Š
        case 10082: return "ji"; // ›‹
        case 10084: return "guan"; // ›Œ
        case 10086: return "dan"; // ›
        case 10088: return "yin"; // ›Ž
        case 10090: return "pan"; // ›
        case 10092: return "ye"; // ›
        case 10094: return "hui"; // ›‘
        case 10096: return "zai"; // ›’
        case 10098: return "cheng"; // ›“
        case 10100: return "wei"; // ›”
        case 10102: return "hou"; // ›•
        case 10104: return "jian"; // ›–
        case 10106: return "si"; // ›—
        case 10108: return "er"; // ›˜
        case 10110: return "xing"; // ›™
        case 10112: return "fu"; // ›š
        case 10114: return "qi"; // ››
        case 10116: return "zhi"; // ›œ
        case 10118: return "yin"; // ›
        case 10120: return "wu"; // ›ž
        case 10122: return "kao"; // ›Ÿ
        case 10124: return "luo"; // › 
        case 10126: return "an"; // ›¡
        case 10128: return "ti"; // ›¢
        case 10130: return "mou"; // ›£
        case 10132: return "lei"; // ›¤
        case 10134: return "yi"; // ›¥
        case 10136: return "mi"; // ›¦
        case 10138: return "quan"; // ›§
        case 10140: return "po"; // ›¨
        case 10142: return "xiao"; // ›©
        case 10144: return "xie"; // ›ª
        case 10146: return "shuo"; // ›«
        case 10148: return "kuang"; // ›¬
        case 10150: return "jie"; // ›­
        case 10152: return "ju"; // ›®
        case 10154: return "ping"; // ›¯
        case 10156: return "xiong"; // ›°
        case 10158: return "zhi"; // ›±
        case 10160: return "guang"; // ›²
        case 10162: return "ming"; // ›³
        case 10164: return "wu"; // ›´
        case 10166: return "qu"; // ›µ
        case 10168: return "yi"; // ›¶
        case 10170: return "jing"; // ›·
        case 10172: return "shi"; // ›¸
        case 10174: return "peol"; // ›¹
        case 10176: return "chan"; // ›º
        case 10178: return "jin"; // ›»
        case 10180: return "lie"; // ›¼
        case 10182: return "qiu"; // ›½
        case 10184: return "wei"; // ›¾
        case 10186: return "han"; // ›¿
        case 10188: return "mang"; // ›À
        case 10190: return "you"; // ›Á
        case 10192: return "bo"; // ›Â
        case 10194: return "dou"; // ›Ã
        case 10196: return "hong"; // ›Ä
        case 10198: return "yi"; // ›Å
        case 10200: return "ying"; // ›Æ
        case 10202: return "lan"; // ›Ç
        case 10204: return "han"; // ›È
        case 10206: return "li"; // ›É
        case 10208: return "geng"; // ›Ê
        case 10210: return "lian"; // ›Ë
        case 10212: return "chun"; // ›Ì
        case 10214: return "feng"; // ›Í
        case 10216: return "yi"; // ›Î
        case 10218: return "tong"; // ›Ï
        case 10220: return "lao"; // ›Ð
        case 10222: return "jia"; // ›Ñ
        case 10224: return "chong"; // ›Ò
        case 10226: return "jiong"; // ›Ó
        case 10228: return "nei"; // ›Ô
        case 10230: return "cheng"; // ›Õ
        case 10232: return "pei"; // ›Ö
        case 10234: return "jian"; // ›×
        case 10236: return "lin"; // ›Ø
        case 10238: return "kun"; // ›Ù
        case 10240: return "ping"; // ›Ú
        case 10242: return "han"; // ›Û
        case 10244: return "jing"; // ›Ü
        case 10246: return "nian"; // ›Ý
        case 10248: return "tu"; // ›Þ
        case 10250: return "xiao"; // ›ß
        case 10252: return "ting"; // ›à
        case 10254: return "e"; // ›á
        case 10256: return "yun"; // ›â
        case 10258: return "li"; // ›ã
        case 10260: return "shui"; // ›ä
        case 10262: return "si"; // ›å
        case 10264: return "lei"; // ›æ
        case 10266: return "shui"; // ›ç
        case 10268: return "du"; // ›è
        case 10270: return "yun"; // ›é
        case 10272: return "heng"; // ›ê
        case 10274: return "xing"; // ›ë
        case 10276: return "tao"; // ›ì
        case 10278: return "chuo"; // ›í
        case 10280: return "zhang"; // ›î
        case 10282: return "nang"; // ›ï
        case 10284: return "wo"; // ›ð
        case 10286: return "tuo"; // ›ñ
        case 10288: return "dong"; // ›ò
        case 10290: return "wo"; // ›ó
        case 10292: return "ju"; // ›ô
        case 10294: return "she"; // ›õ
        case 10296: return "liang"; // ›ö
        case 10298: return "hun"; // ›÷
        case 10300: return "ta"; // ›ø
        case 10302: return "ji"; // ›ù
        case 10304: return "de"; // ›ú
        case 10306: return "juan"; // ›û
        case 10308: return "gu"; // ›ü
        case 10310: return "guo"; // ›ý
        case 10312: return "yan"; // ›þ
        case 10314: return "diao"; // œ@
        case 10316: return "peng"; // œA
        case 10318: return "hao"; // œB
        case 10320: return "chang"; // œC
        case 10322: return "qi"; // œD
        case 10324: return "fang"; // œE
        case 10326: return "chi"; // œF
        case 10328: return "lu"; // œG
        case 10330: return "ju"; // œH
        case 10332: return "lei"; // œI
        case 10334: return "zhe"; // œJ
        case 10336: return "peng"; // œK
        case 10338: return "tian"; // œL
        case 10340: return "yu"; // œM
        case 10342: return "ni"; // œN
        case 10344: return "lu"; // œO
        case 10346: return "mi"; // œP
        case 10348: return "jing"; // œQ
        case 10350: return "ling"; // œR
        case 10352: return "lun"; // œS
        case 10354: return "qu"; // œT
        case 10356: return "yu"; // œU
        case 10358: return "nian"; // œV
        case 10360: return "biao"; // œW
        case 10362: return "hu"; // œX
        case 10364: return "yuan"; // œY
        case 10366: return "lai"; // œZ
        case 10368: return "qing"; // œ[
        case 10370: return "qian"; // œ\
        case 10372: return "zhi"; // œ]
        case 10374: return "yin"; // œ^
        case 10376: return "bo"; // œ_
        case 10378: return "ben"; // œ`
        case 10380: return "yuan"; // œa
        case 10382: return "wen"; // œb
        case 10384: return "re"; // œc
        case 10386: return "fei"; // œd
        case 10388: return "yuan"; // œe
        case 10390: return "ke"; // œf
        case 10392: return "ji"; // œg
        case 10394: return "die"; // œh
        case 10396: return "se"; // œi
        case 10398: return "qi"; // œj
        case 10400: return "pi"; // œk
        case 10402: return "xi"; // œl
        case 10404: return "yuan"; // œm
        case 10406: return "rou"; // œn
        case 10408: return "huan"; // œo
        case 10410: return "jian"; // œp
        case 10412: return "nuan"; // œq
        case 10414: return "wu"; // œr
        case 10416: return "ting"; // œs
        case 10418: return "fan"; // œt
        case 10420: return "wo"; // œu
        case 10422: return "di"; // œv
        case 10424: return "wei"; // œw
        case 10426: return "ru"; // œx
        case 10428: return "ce"; // œy
        case 10430: return "he"; // œz
        case 10432: return "yan"; // œ{
        case 10434: return "gong"; // œ|
        case 10436: return "mi"; // œ}
        case 10438: return "mao"; // œ~
        case 10440: return "zhang"; // ÕÅ
        case 10442: return "ying"; // œ€
        case 10444: return "yan"; // œ
        case 10446: return "hong"; // œ‚
        case 10448: return "sheng"; // œƒ
        case 10450: return "mei"; // œ„
        case 10452: return "zai"; // œ…
        case 10454: return "hun"; // œ†
        case 10456: return "nai"; // œ‡
        case 10458: return "gui"; // œˆ
        case 10460: return "chi"; // œ‰
        case 10462: return "e"; // œŠ
        case 10464: return "lan"; // œ‹
        case 10466: return "qi"; // œŒ
        case 10468: return "qi"; // œ
        case 10470: return "mei"; // œŽ
        case 10472: return "tian"; // œ
        case 10474: return "cou"; // œ
        case 10476: return "wei"; // œ‘
        case 10478: return "can"; // œ’
        case 10480: return "min"; // œ“
        case 10482: return "bo"; // œ”
        case 10484: return "xu"; // œ•
        case 10486: return "ji"; // œ–
        case 10488: return "jian"; // œ—
        case 10490: return "feng"; // œ˜
        case 10492: return "yi"; // œ™
        case 10494: return "yin"; // œš
        case 10496: return "shi"; // œ›
        case 10498: return "jie"; // œœ
        case 10500: return "zhen"; // œ
        case 10502: return "tan"; // œž
        case 10504: return "yu"; // œŸ
        case 10506: return "bi"; // œ 
        case 10508: return "min"; // œ¡
        case 10510: return "shi"; // œ¢
        case 10512: return "tu"; // œ£
        case 10514: return "sheng"; // œ¤
        case 10516: return "yong"; // œ¥
        case 10518: return "ju"; // œ¦
        case 10520: return "dong"; // œ§
        case 10522: return "tuan"; // œ¨
        case 10524: return "jiao"; // œ©
        case 10526: return "qiu"; // œª
        case 10528: return "tang"; // œ«
        case 10530: return "long"; // œ¬
        case 10532: return "huo"; // œ­
        case 10534: return "yuan"; // œ®
        case 10536: return "nan"; // œ¯
        case 10538: return "ban"; // œ°
        case 10540: return "you"; // œ±
        case 10542: return "quan"; // œ²
        case 10544: return "hun"; // œ³
        case 10546: return "liang"; // œ´
        case 10548: return "chan"; // œµ
        case 10550: return "yan"; // œ¶
        case 10552: return "zhun"; // œ·
        case 10554: return "he"; // œ¸
        case 10556: return "zi"; // œ¹
        case 10558: return "man"; // œº
        case 10560: return "ying"; // œ»
        case 10562: return "la"; // œ¼
        case 10564: return "feng"; // œ½
        case 10566: return "lou"; // œ¾
        case 10568: return "wei"; // œ¿
        case 10570: return "xia"; // œÀ
        case 10572: return "ying"; // œÁ
        case 10574: return "po"; // œÂ
        case 10576: return "jin"; // œÃ
        case 10578: return "yan"; // œÄ
        case 10580: return "suo"; // œÅ
        case 10582: return "yuan"; // œÆ
        case 10584: return "lian"; // œÇ
        case 10586: return "yao"; // œÈ
        case 10588: return "meng"; // œÉ
        case 10590: return "zhun"; // œÊ
        case 10592: return "cheng"; // œË
        case 10594: return "tai"; // œÌ
        case 10596: return "da"; // œÍ
        case 10598: return "wa"; // œÎ
        case 10600: return "gou"; // œÏ
        case 10602: return "sao"; // œÐ
        case 10604: return "zha"; // œÑ
        case 10606: return "shi"; // œÒ
        case 10608: return "lun"; // œÓ
        case 10610: return "ma"; // œÔ
        case 10612: return "wei"; // œÕ
        case 10614: return "zai"; // œÖ
        case 10616: return "wu"; // œ×
        case 10618: return "wen"; // œØ
        case 10620: return "qiang"; // œÙ
        case 10622: return "ze"; // œÚ
        case 10624: return "shi"; // œÛ
        case 10626: return "ai"; // œÜ
        case 10628: return "yun"; // œÝ
        case 10630: return "yin"; // œÞ
        case 10632: return "su"; // œß
        case 10634: return "se"; // œà
        case 10636: return "shi"; // œá
        case 10638: return "ai"; // œâ
        case 10640: return "pan"; // œã
        case 10642: return "xu"; // œä
        case 10644: return "weng"; // œå
        case 10646: return "cang"; // œæ
        case 10648: return "mie"; // œç
        case 10650: return "ge"; // œè
        case 10652: return "hao"; // œé
        case 10654: return "huang"; // œê
        case 10656: return "xi"; // œë
        case 10658: return "di"; // œì
        case 10660: return "zhi"; // œí
        case 10662: return "ying"; // œî
        case 10664: return "jie"; // œï
        case 10666: return "ge"; // œð
        case 10668: return "sui"; // œñ
        case 10670: return "jiao"; // œò
        case 10672: return "hui"; // œó
        case 10674: return "yin"; // œô
        case 10676: return "gao"; // œõ
        case 10678: return "long"; // œö
        case 10680: return "chun"; // œ÷
        case 10682: return "xiao"; // œø
        case 10684: return "yu"; // œù
        case 10686: return "xiu"; // œú
        case 10688: return "hu"; // œû
        case 10690: return "bi"; // œü
        case 10692: return "biao"; // œý
        case 10694: return "zhi"; // œþ
        case 10696: return "jiang"; // @
        case 10698: return "kou"; // A
        case 10700: return "shen"; // B
        case 10702: return "shang"; // C
        case 10704: return "mi"; // D
        case 10706: return "ao"; // E
        case 10708: return "lu"; // F
        case 10710: return "hu"; // G
        case 10712: return "you"; // H
        case 10714: return "chan"; // I
        case 10716: return "fan"; // J
        case 10718: return "yong"; // K
        case 10720: return "gun"; // L
        case 10722: return "man"; // M
        case 10724: return "qing"; // N
        case 10726: return "yu"; // O
        case 10728: return "ji"; // P
        case 10730: return "ya"; // Q
        case 10732: return "chao"; // R
        case 10734: return "xi"; // S
        case 10736: return "ji"; // T
        case 10738: return "lou"; // U
        case 10740: return "long"; // V
        case 10742: return "jin"; // W
        case 10744: return "guo"; // X
        case 10746: return "cong"; // Y
        case 10748: return "zhi"; // Z
        case 10750: return "gai"; // [
        case 10752: return "qiang"; // \
        case 10754: return "jiao"; // ]
        case 10756: return "cong"; // ^
        case 10758: return "chun"; // _
        case 10760: return "tuan"; // `
        case 10762: return "ou"; // a
        case 10764: return "teng"; // b
        case 10766: return "ye"; // c
        case 10768: return "xi"; // d
        case 10770: return "mi"; // e
        case 10772: return "tang"; // f
        case 10774: return "tang"; // g
        case 10776: return "han"; // h
        case 10778: return "lian"; // i
        case 10780: return "wa"; // j
        case 10782: return "tai"; // k
        case 10784: return "gan"; // l
        case 10786: return "peng"; // m
        case 10788: return "zi"; // n
        case 10790: return "kang"; // o
        case 10792: return "peng"; // p
        case 10794: return "zhang"; // q
        case 10796: return "zhuan"; // r
        case 10798: return "xu"; // s
        case 10800: return "kuo"; // t
        case 10802: return "jian"; // u
        case 10804: return "yan"; // v
        case 10806: return "chuan"; // w
        case 10808: return "liao"; // x
        case 10810: return "cui"; // y
        case 10812: return "ti"; // z
        case 10814: return "jiang"; // {
        case 10816: return "zong"; // |
        case 10818: return "ying"; // }
        case 10820: return "hong"; // ~
        case 10822: return "zhang"; // ÕÅ
        case 10824: return "xin"; // €
        case 10826: return "shu"; // 
        case 10828: return "guan"; // ‚
        case 10830: return "zong"; // ƒ
        case 10832: return "kun"; // „
        case 10834: return "xu"; // …
        case 10836: return "zhi"; // †
        case 10838: return "pi"; // ‡
        case 10840: return "jue"; // ˆ
        case 10842: return "jiao"; // ‰
        case 10844: return "po"; // Š
        case 10846: return "dang"; // ‹
        case 10848: return "hui"; // Œ
        case 10850: return "jie"; // 
        case 10852: return "wu"; // Ž
        case 10854: return "pa"; // 
        case 10856: return "ji"; // 
        case 10858: return "gui"; // ‘
        case 10860: return "xiao"; // ’
        case 10862: return "qian"; // “
        case 10864: return "ya"; // ”
        case 10866: return "xi"; // •
        case 10868: return "sun"; // –
        case 10870: return "dun"; // —
        case 10872: return "min"; // ˜
        case 10874: return "run"; // ™
        case 10876: return "su"; // š
        case 10878: return "zhen"; // ›
        case 10880: return "zong"; // œ
        case 10882: return "yi"; // 
        case 10884: return "zhi"; // ž
        case 10886: return "wan"; // Ÿ
        case 10888: return "tan"; //  
        case 10890: return "xun"; // ¡
        case 10892: return "kui"; // ¢
        case 10894: return "ye"; // £
        case 10896: return "tu"; // ¤
        case 10898: return "san"; // ¥
        case 10900: return "hei"; // ¦
        case 10902: return "bi"; // §
        case 10904: return "chan"; // ¨
        case 10906: return "shu"; // ©
        case 10908: return "pu"; // ª
        case 10910: return "lin"; // «
        case 10912: return "wei"; // ¬
        case 10914: return "se"; // ­
        case 10916: return "se"; // ®
        case 10918: return "deng"; // ¯
        case 10920: return "jiong"; // °
        case 10922: return "hua"; // ±
        case 10924: return "jiao"; // ²
        case 10926: return "lao"; // ³
        case 10928: return "cun"; // ´
        case 10930: return "hong"; // µ
        case 10932: return "han"; // ¶
        case 10934: return "yun"; // ·
        case 10936: return "liu"; // ¸
        case 10938: return "hong"; // ¹
        case 10940: return "fu"; // º
        case 10942: return "gao"; // »
        case 10944: return "he"; // ¼
        case 10946: return "xian"; // ½
        case 10948: return "jian"; // ¾
        case 10950: return "shan"; // ¿
        case 10952: return "xi"; // À
        case 10954: return "ao"; // Á
        case 10956: return "lu"; // Â
        case 10958: return "ning"; // Ã
        case 10960: return "yu"; // Ä
        case 10962: return "lin"; // Å
        case 10964: return "mian"; // Æ
        case 10966: return "dang"; // Ç
        case 10968: return "han"; // È
        case 10970: return "ze"; // É
        case 10972: return "xie"; // Ê
        case 10974: return "yu"; // Ë
        case 10976: return "shi"; // Ì
        case 10978: return "xiao"; // Í
        case 10980: return "ling"; // Î
        case 10982: return "ou"; // Ï
        case 10984: return "zi"; // Ð
        case 10986: return "yong"; // Ñ
        case 10988: return "hui"; // Ò
        case 10990: return "can"; // Ó
        case 10992: return "lian"; // Ô
        case 10994: return "dian"; // Õ
        case 10996: return "ye"; // Ö
        case 10998: return "huan"; // ×
        case 11000: return "zhen"; // Ø
        case 11002: return "man"; // Ù
        case 11004: return "dan"; // Ú
        case 11006: return "yi"; // Û
        case 11008: return "sui"; // Ü
        case 11010: return "pi"; // Ý
        case 11012: return "ju"; // Þ
        case 11014: return "ta"; // ß
        case 11016: return "qin"; // à
        case 11018: return "zhuo"; // á
        case 11020: return "nong"; // â
        case 11022: return "wo"; // ã
        case 11024: return "jin"; // ä
        case 11026: return "pen"; // å
        case 11028: return "se"; // æ
        case 11030: return "ji"; // ç
        case 11032: return "wei"; // è
        case 11034: return "chu"; // é
        case 11036: return "ta"; // ê
        case 11038: return "song"; // ë
        case 11040: return "ding"; // ì
        case 11042: return "se"; // í
        case 11044: return "zhu"; // î
        case 11046: return "lian"; // ï
        case 11048: return "ni"; // ð
        case 11050: return "shi"; // ñ
        case 11052: return "shu"; // ò
        case 11054: return "mi"; // ó
        case 11056: return "ning"; // ô
        case 11058: return "ying"; // õ
        case 11060: return "ying"; // ö
        case 11062: return "meng"; // ÷
        case 11064: return "jin"; // ø
        case 11066: return "qi"; // ù
        case 11068: return "ji"; // ú
        case 11070: return "zui"; // û
        case 11072: return "wo"; // ü
        case 11074: return "tao"; // ý
        case 11076: return "yin"; // þ
        case 11078: return "yin"; // ž@
        case 11080: return "dui"; // žA
        case 11082: return "ci"; // žB
        case 11084: return "hu"; // žC
        case 11086: return "qing"; // žD
        case 11088: return "lan"; // žE
        case 11090: return "xun"; // žF
        case 11092: return "ai"; // žG
        case 11094: return "wei"; // žH
        case 11096: return "bin"; // žI
        case 11098: return "gu"; // žJ
        case 11100: return "qian"; // žK
        case 11102: return "ying"; // žL
        case 11104: return "bin"; // žM
        case 11106: return "kuo"; // žN
        case 11108: return "fei"; // žO
        case 11110: return "cang"; // žP
        case 11112: return "me"; // žQ
        case 11114: return "jian"; // žR
        case 11116: return "wei"; // žS
        case 11118: return "luo"; // žT
        case 11120: return "zan"; // žU
        case 11122: return "lu"; // žV
        case 11124: return "li"; // žW
        case 11126: return "you"; // žX
        case 11128: return "yang"; // žY
        case 11130: return "lu"; // žZ
        case 11132: return "si"; // ž[
        case 11134: return "zhi"; // ž\
        case 11136: return "ying"; // ž]
        case 11138: return "du"; // ž^
        case 11140: return "wang"; // ž_
        case 11142: return "hui"; // ž`
        case 11144: return "xie"; // ža
        case 11146: return "pan"; // žb
        case 11148: return "chen"; // žc
        case 11150: return "biao"; // žd
        case 11152: return "chan"; // že
        case 11154: return "mo"; // žf
        case 11156: return "liu"; // žg
        case 11158: return "jian"; // žh
        case 11160: return "se"; // ži
        case 11162: return "cheng"; // žj
        case 11164: return "gu"; // žk
        case 11166: return "bin"; // žl
        case 11168: return "huo"; // žm
        case 11170: return "xian"; // žn
        case 11172: return "lu"; // žo
        case 11174: return "qin"; // žp
        case 11176: return "rong"; // žq
        case 11178: return "li"; // žr
        case 11180: return "jing"; // žs
        case 11182: return "xiao"; // žt
        case 11184: return "ying"; // žu
        case 11186: return "sui"; // žv
        case 11188: return "wei"; // žw
        case 11190: return "wai"; // žx
        case 11192: return "xue"; // žy
        case 11194: return "zhu"; // žz
        case 11196: return "long"; // ž{
        case 11198: return "lai"; // ž|
        case 11200: return "dui"; // ž}
        case 11202: return "fan"; // ž~
        case 11204: return "zhang"; // ÕÅ
        case 11206: return "hu"; // ž€
        case 11208: return "lai"; // ž
        case 11210: return "shu"; // ž‚
        case 11212: return "ling"; // žƒ
        case 11214: return "ying"; // ž„
        case 11216: return "mi"; // ž…
        case 11218: return "ji"; // ž†
        case 11220: return "lian"; // ž‡
        case 11222: return "jian"; // žˆ
        case 11224: return "ying"; // ž‰
        case 11226: return "lin"; // žŠ
        case 11228: return "yi"; // ž‹
        case 11230: return "jian"; // žŒ
        case 11232: return "chan"; // ž
        case 11234: return "dai"; // žŽ
        case 11236: return "nang"; // ž
        case 11238: return "jian"; // ž
        case 11240: return "lan"; // ž‘
        case 11242: return "fan"; // ž’
        case 11244: return "shuan"; // ž“
        case 11246: return "yuan"; // ž”
        case 11248: return "zhuo"; // ž•
        case 11250: return "feng"; // ž–
        case 11252: return "ni"; // ž—
        case 11254: return "lei"; // ž˜
        case 11256: return "lan"; // ž™
        case 11258: return "cong"; // žš
        case 11260: return "qu"; // ž›
        case 11262: return "yong"; // žœ
        case 11264: return "qian"; // ž
        case 11266: return "fa"; // žž
        case 11268: return "jue"; // žŸ
        case 11270: return "yan"; // ž 
        case 11272: return "ying"; // ž¡
        case 11274: return "sa"; // ž¢
        case 11276: return "zan"; // ž£
        case 11278: return "luan"; // ž¤
        case 11280: return "yan"; // ž¥
        case 11282: return "li"; // ž¦
        case 11284: return "mi"; // ž§
        case 11286: return "shan"; // ž¨
        case 11288: return "tan"; // ž©
        case 11290: return "dang"; // žª
        case 11292: return "jiao"; // ž«
        case 11294: return "chan"; // ž¬
        case 11296: return "ying"; // ž­
        case 11298: return "hao"; // ž®
        case 11300: return "zhu"; // ž¯
        case 11302: return "lan"; // ž°
        case 11304: return "lan"; // ž±
        case 11306: return "nang"; // ž²
        case 11308: return "wan"; // ž³
        case 11310: return "luan"; // ž´
        case 11312: return "quan"; // žµ
        case 11314: return "xian"; // ž¶
        case 11316: return "yan"; // ž·
        case 11318: return "gan"; // ž¸
        case 11320: return "yan"; // ž¹
        case 11322: return "yu"; // žº
        case 11324: return "guang"; // ž»
        case 11326: return "xiao"; // ž¼
        case 11328: return "xiao"; // ž½
        case 11330: return "hui"; // ž¾
        case 11332: return "hong"; // ž¿
        case 11334: return "zhuan"; // žÀ
        case 11336: return "yu"; // žÁ
        case 11338: return "xie"; // žÂ
        case 11340: return "chi"; // žÃ
        case 11342: return "zai"; // žÄ
        case 11344: return "qi"; // žÅ
        case 11346: return "zhong"; // žÆ
        case 11348: return "ben"; // žÇ
        case 11350: return "niu"; // žÈ
        case 11352: return "wen"; // žÉ
        case 11354: return "pu"; // žÊ
        case 11356: return "yi"; // žË
        case 11358: return "pi"; // žÌ
        case 11360: return "kai"; // žÍ
        case 11362: return "pan"; // žÎ
        case 11364: return "yan"; // žÏ
        case 11366: return "pang"; // žÐ
        case 11368: return "mu"; // žÑ
        case 11370: return "liao"; // žÒ
        case 11372: return "guang"; // žÓ
        case 11374: return "xin"; // žÔ
        case 11376: return "guang"; // žÕ
        case 11378: return "guang"; // žÖ
        case 11380: return "bian"; // ž×
        case 11382: return "da"; // žØ
        case 11384: return "xia"; // žÙ
        case 11386: return "zheng"; // žÚ
        case 11388: return "zhu"; // žÛ
        case 11390: return "ke"; // žÜ
        case 11392: return "zhao"; // žÝ
        case 11394: return "fu"; // žÞ
        case 11396: return "ba"; // žß
        case 11398: return "xie"; // žà
        case 11400: return "xie"; // žá
        case 11402: return "ling"; // žâ
        case 11404: return "zhuo"; // žã
        case 11406: return "pao"; // žä
        case 11408: return "tai"; // žå
        case 11410: return "yang"; // žæ
        case 11412: return "tong"; // žç
        case 11414: return "shan"; // žè
        case 11416: return "wei"; // žé
        case 11418: return "huang"; // žê
        case 11420: return "zhou"; // žë
        case 11422: return "yao"; // žì
        case 11424: return "xu"; // ží
        case 11426: return "heng"; // žî
        case 11428: return "quan"; // žï
        case 11430: return "huan"; // žð
        case 11432: return "xiao"; // žñ
        case 11434: return "xiu"; // žò
        case 11436: return "xian"; // žó
        case 11438: return "yin"; // žô
        case 11440: return "wu"; // žõ
        case 11442: return "zhou"; // žö
        case 11444: return "yao"; // ž÷
        case 11446: return "shi"; // žø
        case 11448: return "wei"; // žù
        case 11450: return "dong"; // žú
        case 11452: return "xue"; // žû
        case 11454: return "zai"; // žü
        case 11456: return "kai"; // žý
        case 11458: return "xia"; // žþ
        case 11460: return "hui"; // Ÿ@
        case 11462: return "zheng"; // ŸA
        case 11464: return "po"; // ŸB
        case 11466: return "hui"; // ŸC
        case 11468: return "guang"; // ŸD
        case 11470: return "che"; // ŸE
        case 11472: return "hui"; // ŸF
        case 11474: return "chen"; // ŸG
        case 11476: return "zhen"; // ŸH
        case 11478: return "lie"; // ŸI
        case 11480: return "fu"; // ŸJ
        case 11482: return "jiong"; // ŸK
        case 11484: return "xie"; // ŸL
        case 11486: return "pu"; // ŸM
        case 11488: return "ting"; // ŸN
        case 11490: return "zhuo"; // ŸO
        case 11492: return "ting"; // ŸP
        case 11494: return "hai"; // ŸQ
        case 11496: return "lang"; // ŸR
        case 11498: return "yan"; // ŸS
        case 11500: return "xu"; // ŸT
        case 11502: return "chi"; // ŸU
        case 11504: return "rong"; // ŸV
        case 11506: return "hu"; // ŸW
        case 11508: return "xi"; // ŸX
        case 11510: return "shu"; // ŸY
        case 11512: return "he"; // ŸZ
        case 11514: return "hun"; // Ÿ[
        case 11516: return "kao"; // Ÿ\
        case 11518: return "jue"; // Ÿ]
        case 11520: return "xiao"; // Ÿ^
        case 11522: return "xi"; // Ÿ_
        case 11524: return "zhuan"; // Ÿ`
        case 11526: return "jun"; // Ÿa
        case 11528: return "di"; // Ÿb
        case 11530: return "xie"; // Ÿc
        case 11532: return "ji"; // Ÿd
        case 11534: return "yan"; // Ÿe
        case 11536: return "lu"; // Ÿf
        case 11538: return "yan"; // Ÿg
        case 11540: return "ju"; // Ÿh
        case 11542: return "lin"; // Ÿi
        case 11544: return "kun"; // Ÿj
        case 11546: return "hun"; // Ÿk
        case 11548: return "tui"; // Ÿl
        case 11550: return "xi"; // Ÿm
        case 11552: return "cui"; // Ÿn
        case 11554: return "wu"; // Ÿo
        case 11556: return "hong"; // Ÿp
        case 11558: return "ju"; // Ÿq
        case 11560: return "fu"; // Ÿr
        case 11562: return "ai"; // Ÿs
        case 11564: return "cong"; // Ÿt
        case 11566: return "feng"; // Ÿu
        case 11568: return "ping"; // Ÿv
        case 11570: return "qiong"; // Ÿw
        case 11572: return "ruo"; // Ÿx
        case 11574: return "yi"; // Ÿy
        case 11576: return "qiong"; // Ÿz
        case 11578: return "xin"; // Ÿ{
        case 11580: return "yi"; // Ÿ|
        case 11582: return "jiao"; // Ÿ}
        case 11584: return "yu"; // Ÿ~
        case 11586: return "zhang"; // ÕÅ
        case 11588: return "gang"; // Ÿ€
        case 11590: return "pi"; // Ÿ
        case 11592: return "gu"; // Ÿ‚
        case 11594: return "wang"; // Ÿƒ
        case 11596: return "sheng"; // Ÿ„
        case 11598: return "gua"; // Ÿ…
        case 11600: return "shao"; // Ÿ†
        case 11602: return "ying"; // Ÿ‡
        case 11604: return "nem"; // Ÿˆ
        case 11606: return "geng"; // Ÿ‰
        case 11608: return "wei"; // ŸŠ
        case 11610: return "chen"; // Ÿ‹
        case 11612: return "he"; // ŸŒ
        case 11614: return "kui"; // Ÿ
        case 11616: return "zhong"; // ŸŽ
        case 11618: return "duan"; // Ÿ
        case 11620: return "hui"; // Ÿ
        case 11622: return "feng"; // Ÿ‘
        case 11624: return "lan"; // Ÿ’
        case 11626: return "xing"; // Ÿ“
        case 11628: return "jiao"; // Ÿ”
        case 11630: return "bi"; // Ÿ•
        case 11632: return "ying"; // Ÿ–
        case 11634: return "zhu"; // Ÿ—
        case 11636: return "wei"; // Ÿ˜
        case 11638: return "tuan"; // Ÿ™
        case 11640: return "qian"; // Ÿš
        case 11642: return "xi"; // Ÿ›
        case 11644: return "xuan"; // Ÿœ
        case 11646: return "nuan"; // Ÿ
        case 11648: return "chan"; // Ÿž
        case 11650: return "yan"; // ŸŸ
        case 11652: return "jiong"; // Ÿ 
        case 11654: return "jiong"; // Ÿ¡
        case 11656: return "mei"; // Ÿ¢
        case 11658: return "wei"; // Ÿ£
        case 11660: return "ye"; // Ÿ¤
        case 11662: return "jin"; // Ÿ¥
        case 11664: return "qiong"; // Ÿ¦
        case 11666: return "rou"; // Ÿ§
        case 11668: return "huan"; // Ÿ¨
        case 11670: return "fan"; // Ÿ©
        case 11672: return "qiu"; // Ÿª
        case 11674: return "sui"; // Ÿ«
        case 11676: return "yang"; // Ÿ¬
        case 11678: return "lie"; // Ÿ­
        case 11680: return "jie"; // Ÿ®
        case 11682: return "zao"; // Ÿ¯
        case 11684: return "gua"; // Ÿ°
        case 11686: return "yun"; // Ÿ±
        case 11688: return "nan"; // Ÿ²
        case 11690: return "shi"; // Ÿ³
        case 11692: return "liang"; // Ÿ´
        case 11694: return "gou"; // Ÿµ
        case 11696: return "tang"; // Ÿ¶
        case 11698: return "chao"; // Ÿ·
        case 11700: return "en"; // Ÿ¸
        case 11702: return "bo"; // Ÿ¹
        case 11704: return "ye"; // Ÿº
        case 11706: return "xie"; // Ÿ»
        case 11708: return "xi"; // Ÿ¼
        case 11710: return "wu"; // Ÿ½
        case 11712: return "yun"; // Ÿ¾
        case 11714: return "he"; // Ÿ¿
        case 11716: return "he"; // ŸÀ
        case 11718: return "yi"; // ŸÁ
        case 11720: return "yun"; // ŸÂ
        case 11722: return "nai"; // ŸÃ
        case 11724: return "shan"; // ŸÄ
        case 11726: return "qiong"; // ŸÅ
        case 11728: return "yao"; // ŸÆ
        case 11730: return "mi"; // ŸÇ
        case 11732: return "lian"; // ŸÈ
        case 11734: return "ying"; // ŸÉ
        case 11736: return "wu"; // ŸÊ
        case 11738: return "gong"; // ŸË
        case 11740: return "yan"; // ŸÌ
        case 11742: return "qiang"; // ŸÍ
        case 11744: return "bi"; // ŸÎ
        case 11746: return "biao"; // ŸÏ
        case 11748: return "zong"; // ŸÐ
        case 11750: return "ao"; // ŸÑ
        case 11752: return "jian"; // ŸÒ
        case 11754: return "lou"; // ŸÓ
        case 11756: return "peng"; // ŸÔ
        case 11758: return "cui"; // ŸÕ
        case 11760: return "yi"; // ŸÖ
        case 11762: return "tong"; // Ÿ×
        case 11764: return "jue"; // ŸØ
        case 11766: return "zong"; // ŸÙ
        case 11768: return "hu"; // ŸÚ
        case 11770: return "yi"; // ŸÛ
        case 11772: return "zhi"; // ŸÜ
        case 11774: return "wei"; // ŸÝ
        case 11776: return "liu"; // ŸÞ
        case 11778: return "han"; // Ÿß
        case 11780: return "ou"; // Ÿà
        case 11782: return "re"; // Ÿá
        case 11784: return "jiong"; // Ÿâ
        case 11786: return "kun"; // Ÿã
        case 11788: return "cuan"; // Ÿä
        case 11790: return "zeng"; // Ÿå
        case 11792: return "jian"; // Ÿæ
        case 11794: return "xi"; // Ÿç
        case 11796: return "xi"; // Ÿè
        case 11798: return "yi"; // Ÿé
        case 11800: return "xiao"; // Ÿê
        case 11802: return "chi"; // Ÿë
        case 11804: return "huang"; // Ÿì
        case 11806: return "chan"; // Ÿí
        case 11808: return "ye"; // Ÿî
        case 11810: return "qian"; // Ÿï
        case 11812: return "yan"; // Ÿð
        case 11814: return "xun"; // Ÿñ
        case 11816: return "qiao"; // Ÿò
        case 11818: return "jun"; // Ÿó
        case 11820: return "deng"; // Ÿô
        case 11822: return "dun"; // Ÿõ
        case 11824: return "shen"; // Ÿö
        case 11826: return "jiao"; // Ÿ÷
        case 11828: return "ben"; // Ÿø
        case 11830: return "xi"; // Ÿù
        case 11832: return "yu"; // Ÿú
        case 11834: return "lin"; // Ÿû
        case 11836: return "tong"; // Ÿü
        case 11838: return "shao"; // Ÿý
        case 11840: return "fen"; // Ÿþ
        case 11842: return "xun"; //  @
        case 11844: return "lan"; //  A
        case 11846: return "mei"; //  B
        case 11848: return "tang"; //  C
        case 11850: return "yi"; //  D
        case 11852: return "jiong"; //  E
        case 11854: return "men"; //  F
        case 11856: return "jing"; //  G
        case 11858: return "jiao"; //  H
        case 11860: return "ying"; //  I
        case 11862: return "yi"; //  J
        case 11864: return "xue"; //  K
        case 11866: return "lan"; //  L
        case 11868: return "tai"; //  M
        case 11870: return "can"; //  N
        case 11872: return "xi"; //  O
        case 11874: return "que"; //  P
        case 11876: return "zong"; //  Q
        case 11878: return "lian"; //  R
        case 11880: return "hui"; //  S
        case 11882: return "zhu"; //  T
        case 11884: return "ling"; //  U
        case 11886: return "wei"; //  V
        case 11888: return "yi"; //  W
        case 11890: return "xie"; //  X
        case 11892: return "zhao"; //  Y
        case 11894: return "hui"; //  Z
        case 11896: return "da"; //  [
        case 11898: return "nung"; //  \
        case 11900: return "bing"; //  ]
        case 11902: return "ru"; //  ^
        case 11904: return "he"; //  _
        case 11906: return "xun"; //  `
        case 11908: return "jin"; //  a
        case 11910: return "chou"; //  b
        case 11912: return "tao"; //  c
        case 11914: return "shuo"; //  d
        case 11916: return "he"; //  e
        case 11918: return "lan"; //  f
        case 11920: return "biao"; //  g
        case 11922: return "rong"; //  h
        case 11924: return "li"; //  i
        case 11926: return "mo"; //  j
        case 11928: return "ruo"; //  k
        case 11930: return "lu"; //  l
        case 11932: return "la"; //  m
        case 11934: return "ao"; //  n
        case 11936: return "xun"; //  o
        case 11938: return "kuang"; //  p
        case 11940: return "shuo"; //  q
        case 11942: return "liao"; //  r
        case 11944: return "li"; //  s
        case 11946: return "lu"; //  t
        case 11948: return "jue"; //  u
        case 11950: return "liao"; //  v
        case 11952: return "yan"; //  w
        case 11954: return "xi"; //  x
        case 11956: return "xie"; //  y
        case 11958: return "long"; //  z
        case 11960: return "ye"; //  {
        case 11962: return "can"; //  |
        case 11964: return "rang"; //  }
        case 11966: return "yue"; //  ~
        case 11968: return "zhang"; // ÕÅ
        case 11970: return "lan"; //  €
        case 11972: return "cong"; //  
        case 11974: return "tong"; //  ‚
        case 11976: return "guan"; //  ƒ
        case 11978: return "ju"; //  „
        case 11980: return "che"; //  …
        case 11982: return "mi"; //  †
        case 11984: return "tang"; //  ‡
        case 11986: return "lan"; //  ˆ
        case 11988: return "zhu"; //  ‰
        case 11990: return "lan"; //  Š
        case 11992: return "ling"; //  ‹
        case 11994: return "yu"; //  Œ
        case 11996: return "zhao"; //  
        case 11998: return "zheng"; //  Ž
        case 12000: return "pao"; //  
        case 12002: return "cheng"; //  
        case 12004: return "wei"; //  ‘
        case 12006: return "han"; //  ’
        case 12008: return "jue"; //  “
        case 12010: return "ye"; //  ”
        case 12012: return "zu"; //  •
        case 12014: return "er"; //  –
        case 12016: return "chuan"; //  —
        case 12018: return "ke"; //  ˜
        case 12020: return "zang"; //  ™
        case 12022: return "die"; //  š
        case 12024: return "qiang"; //  ›
        case 12026: return "yong"; //  œ
        case 12028: return "qiang"; //  
        case 12030: return "pan"; //  ž
        case 12032: return "chao"; //  Ÿ
        case 12034: return "jian"; //   
        case 12036: return "chuan"; //  ¡
        case 12038: return "yu"; //  ¢
        case 12040: return "zha"; //  £
        case 12042: return "bian"; //  ¤
        case 12044: return "bang"; //  ¥
        case 12046: return "bo"; //  ¦
        case 12048: return "chuan"; //  §
        case 12050: return "you"; //  ¨
        case 12052: return "du"; //  ©
        case 12054: return "cheng"; //  ª
        case 12056: return "niu"; //  «
        case 12058: return "le"; //  ¬
        case 12060: return "tuo"; //  ­
        case 12062: return "ren"; //  ®
        case 12064: return "mang"; //  ¯
        case 12066: return "fang"; //  °
        case 12068: return "gang"; //  ±
        case 12070: return "yan"; //  ²
        case 12072: return "ge"; //  ³
        case 12074: return "bei"; //  ´
        case 12076: return "si"; //  µ
        case 12078: return "you"; //  ¶
        case 12080: return "ge"; //  ·
        case 12082: return "mu"; //  ¸
        case 12084: return "di"; //  ¹
        case 12086: return "quan"; //  º
        case 12088: return "quan"; //  »
        case 12090: return "zi"; //  ¼
        case 12092: return "mang"; //  ½
        case 12094: return "keng"; //  ¾
        case 12096: return "qian"; //  ¿
        case 12098: return "li"; //  À
        case 12100: return "pou"; //  Á
        case 12102: return "gang"; //  Â
        case 12104: return "te"; //  Ã
        case 12106: return "ben"; //  Ä
        case 12108: return "quan"; //  Å
        case 12110: return "chun"; //  Æ
        case 12112: return "jia"; //  Ç
        case 12114: return "feng"; //  È
        case 12116: return "ke"; //  É
        case 12118: return "ju"; //  Ê
        case 12120: return "chu"; //  Ë
        case 12122: return "xi"; //  Ì
        case 12124: return "bei"; //  Í
        case 12126: return "luo"; //  Î
        case 12128: return "jie"; //  Ï
        case 12130: return "ma"; //  Ð
        case 12132: return "san"; //  Ñ
        case 12134: return "wei"; //  Ò
        case 12136: return "li"; //  Ó
        case 12138: return "dun"; //  Ô
        case 12140: return "tong"; //  Õ
        case 12142: return "qiao"; //  Ö
        case 12144: return "xi"; //  ×
        case 12146: return "li"; //  Ø
        case 12148: return "du"; //  Ù
        case 12150: return "lie"; //  Ú
        case 12152: return "pai"; //  Û
        case 12154: return "pao"; //  Ü
        case 12156: return "bo"; //  Ý
        case 12158: return "xi"; //  Þ
        case 12160: return "chou"; //  ß
        case 12162: return "wei"; //  à
        case 12164: return "rao"; //  á
        case 12166: return "chou"; //  â
        case 12168: return "ba"; //  ã
        case 12170: return "ji"; //  ä
        case 12172: return "chai"; //  å
        case 12174: return "zhuo"; //  æ
        case 12176: return "ge"; //  ç
        case 12178: return "gang"; //  è
        case 12180: return "bo"; //  é
        case 12182: return "hou"; //  ê
        case 12184: return "ya"; //  ë
        case 12186: return "yin"; //  ì
        case 12188: return "fan"; //  í
        case 12190: return "zhuan"; //  î
        case 12192: return "kuang"; //  ï
        case 12194: return "zhong"; //  ð
        case 12196: return "mu"; //  ñ
        case 12198: return "pi"; //  ò
        case 12200: return "ju"; //  ó
        case 12202: return "yi"; //  ô
        case 12204: return "xing"; //  õ
        case 12206: return "yi"; //  ö
        case 12208: return "ling"; //  ÷
        case 12210: return "pi"; //  ø
        case 12212: return "ni"; //  ù
        case 12214: return "yao"; //  ú
        case 12216: return "you"; //  û
        case 12218: return "xue"; //  ü
        case 12220: return "dan"; //  ý
        case 12222: return "bo"; //  þ
    }

    return NULL;
}

char* get_pinyin_gbk4(unsigned int code)
{
    switch (code)
    {
        case 0: return "ku";    // ª@
        case 2: return "xian";    // ªA
        case 4: return "huan";    // ªB
        case 6: return "mo";    // ªC
        case 8: return "zhao";    // ªD
        case 10: return "ji";    // ªE
        case 12: return "xun";    // ªF
        case 14: return "shan";    // ªG
        case 16: return "ta";    // ªH
        case 18: return "tong";    // ªI
        case 20: return "dong";    // ªJ
        case 22: return "mang";    // ªK
        case 24: return "xi";    // ªL
        case 26: return "xia";    // ªM
        case 28: return "bei";    // ªN
        case 30: return "zhi";    // ªO
        case 32: return "yan";    // ªP
        case 34: return "sha";    // ªQ
        case 36: return "han";    // ªR
        case 38: return "jing";    // ªS
        case 40: return "pai";    // ªT
        case 42: return "fei";    // ªU
        case 44: return "xiao";    // ªV
        case 46: return "pi";    // ªW
        case 48: return "qi";    // ªX
        case 50: return "biao";    // ªY
        case 52: return "yin";    // ªZ
        case 54: return "lai";    // ª[
        case 56: return "jian";    // ª\
        case 58: return "qiang";    // ª]
        case 60: return "kun";    // ª^
        case 62: return "yan";    // ª_
        case 64: return "zong";    // ª`
        case 66: return "zhi";    // ªa
        case 68: return "zheng";    // ªb
        case 70: return "ya";    // ªc
        case 72: return "lie";    // ªd
        case 74: return "ceon";    // ªe
        case 76: return "zong";    // ªf
        case 78: return "gui";    // ªg
        case 80: return "feng";    // ªh
        case 82: return "wo";    // ªi
        case 84: return "yuan";    // ªj
        case 86: return "chuan";    // ªk
        case 88: return "tuan";    // ªl
        case 90: return "ya";    // ªm
        case 92: return "ge";    // ªn
        case 94: return "jia";    // ªo
        case 96: return "bian";    // ªp
        case 98: return "you";    // ªq
        case 100: return "yao";    // ªr
        case 102: return "sun";    // ªs
        case 104: return "bo";    // ªt
        case 106: return "ming";    // ªu
        case 108: return "sou";    // ªv
        case 110: return "ma";    // ªw
        case 112: return "yuan";    // ªx
        case 114: return "dai";    // ªy
        case 116: return "yu";    // ªz
        case 118: return "shi";    // ª{
        case 120: return "hao";    // ª|
        case 122: return "qiang";    // ª}
        case 124: return "yi";    // ª~
        case 126: return "";    // ?
        case 128: return "zhen";    // ª€
        case 130: return "cang";    // ª
        case 132: return "gao";    // ª‚
        case 134: return "man";    // ªƒ
        case 136: return "jiang";    // ª„
        case 138: return "mao";    // ª…
        case 140: return "chan";    // ª†
        case 142: return "ao";    // ª‡
        case 144: return "gao";    // ªˆ
        case 146: return "cui";    // ª‰
        case 148: return "ben";    // ªŠ
        case 150: return "bi";    // ª‹
        case 152: return "bi";    // ªŒ
        case 154: return "huang";    // ª
        case 156: return "bu";    // ªŽ
        case 158: return "lin";    // ª
        case 160: return "yu";    // ª
        case 162: return "tong";    // ª‘
        case 164: return "yao";    // ª’
        case 166: return "xi";    // ª“
        case 168: return "xiao";    // ª”
        case 170: return "shou";    // ª•
        case 172: return "dun";    // ª–
        case 174: return "jiao";    // ª—
        case 176: return "ge";    // ª˜
        case 178: return "juan";    // ª™
        case 180: return "du";    // ªš
        case 182: return "hui";    // ª›
        case 184: return "kuai";    // ªœ
        case 186: return "xian";    // ª
        case 188: return "xian";    // ªž
        case 190: return "ning";    // ªŸ
        case 192: return "bian";    // ª 
        case 194: return "huo";    // «@
        case 196: return "nou";    // «A
        case 198: return "meng";    // «B
        case 200: return "lie";    // «C
        case 202: return "nao";    // «D
        case 204: return "guang";    // «E
        case 206: return "shou";    // «F
        case 208: return "lu";    // «G
        case 210: return "ta";    // «H
        case 212: return "xian";    // «I
        case 214: return "mi";    // «J
        case 216: return "rang";    // «K
        case 218: return "nao";    // «L
        case 220: return "e";    // «M
        case 222: return "xian";    // «N
        case 224: return "qi";    // «O
        case 226: return "jue";    // «P
        case 228: return "yao";    // «Q
        case 230: return "xuan";    // «R
        case 232: return "lu";    // «S
        case 234: return "su";    // «T
        case 236: return "qiu";    // «U
        case 238: return "ga";    // «V
        case 240: return "le";    // «W
        case 242: return "ba";    // «X
        case 244: return "hong";    // «Y
        case 246: return "di";    // «Z
        case 248: return "chuan";    // «[
        case 250: return "gan";    // «\
        case 252: return "yu";    // «]
        case 254: return "qi";    // «^
        case 256: return "yu";    // «_
        case 258: return "chang";    // «`
        case 260: return "hong";    // «a
        case 262: return "wu";    // «b
        case 264: return "fu";    // «c
        case 266: return "jie";    // «d
        case 268: return "ya";    // «e
        case 270: return "men";    // «f
        case 272: return "bang";    // «g
        case 274: return "yue";    // «h
        case 276: return "jue";    // «i
        case 278: return "yun";    // «j
        case 280: return "jue";    // «k
        case 282: return "yin";    // «l
        case 284: return "dan";    // «m
        case 286: return "pin";    // «n
        case 288: return "qiang";    // «o
        case 290: return "yi";    // «p
        case 292: return "an";    // «q
        case 294: return "ping";    // «r
        case 296: return "fu";    // «s
        case 298: return "xuan";    // «t
        case 300: return "ci";    // «u
        case 302: return "gou";    // «v
        case 304: return "jia";    // «w
        case 306: return "shao";    // «x
        case 308: return "ci";    // «y
        case 310: return "ran";    // «z
        case 312: return "sheng";    // «{
        case 314: return "shen";    // «|
        case 316: return "yi";    // «}
        case 318: return "ju";    // «~
        case 320: return "";    // ?
        case 322: return "liu";    // «€
        case 324: return "bi";    // «
        case 326: return "zhen";    // «‚
        case 328: return "jin";    // «ƒ
        case 330: return "jiao";    // «„
        case 332: return "jian";    // «…
        case 334: return "li";    // «†
        case 336: return "guang";    // «‡
        case 338: return "xian";    // «ˆ
        case 340: return "zhou";    // «‰
        case 342: return "yan";    // «Š
        case 344: return "xiu";    // «‹
        case 346: return "yang";    // «Œ
        case 348: return "xu";    // «
        case 350: return "su";    // «Ž
        case 352: return "qin";    // «
        case 354: return "yin";    // «
        case 356: return "xun";    // «‘
        case 358: return "bao";    // «’
        case 360: return "xiang";    // «“
        case 362: return "xia";    // «”
        case 364: return "gui";    // «•
        case 366: return "chong";    // «–
        case 368: return "xu";    // «—
        case 370: return "pei";    // «˜
        case 372: return "lao";    // «™
        case 374: return "dang";    // «š
        case 376: return "ying";    // «›
        case 378: return "wen";    // «œ
        case 380: return "e";    // «
        case 382: return "ting";    // «ž
        case 384: return "di";    // «Ÿ
        case 386: return "wu";    // « 
        case 388: return "wu";    // ¬@
        case 390: return "cheng";    // ¬A
        case 392: return "jun";    // ¬B
        case 394: return "mei";    // ¬C
        case 396: return "bei";    // ¬D
        case 398: return "ting";    // ¬E
        case 400: return "xian";    // ¬F
        case 402: return "chu";    // ¬G
        case 404: return "han";    // ¬H
        case 406: return "qiong";    // ¬I
        case 408: return "yan";    // ¬J
        case 410: return "xuan";    // ¬K
        case 412: return "xiu";    // ¬L
        case 414: return "fu";    // ¬M
        case 416: return "xi";    // ¬N
        case 418: return "ling";    // ¬O
        case 420: return "li";    // ¬P
        case 422: return "jin";    // ¬Q
        case 424: return "suo";    // ¬R
        case 426: return "feng";    // ¬S
        case 428: return "wan";    // ¬T
        case 430: return "dian";    // ¬U
        case 432: return "bing";    // ¬V
        case 434: return "zhan";    // ¬W
        case 436: return "cui";    // ¬X
        case 438: return "min";    // ¬Y
        case 440: return "yu";    // ¬Z
        case 442: return "lai";    // ¬[
        case 444: return "min";    // ¬\
        case 446: return "wang";    // ¬]
        case 448: return "wei";    // ¬^
        case 450: return "tian";    // ¬_
        case 452: return "chu";    // ¬`
        case 454: return "beng";    // ¬a
        case 456: return "cheng";    // ¬b
        case 458: return "e";    // ¬c
        case 460: return "chang";    // ¬d
        case 462: return "beng";    // ¬e
        case 464: return "lu";    // ¬f
        case 466: return "gun";    // ¬g
        case 468: return "diao";    // ¬h
        case 470: return "bei";    // ¬i
        case 472: return "qiang";    // ¬j
        case 474: return "zhuo";    // ¬k
        case 476: return "qin";    // ¬l
        case 478: return "fa";    // ¬m
        case 480: return "jin";    // ¬n
        case 482: return "du";    // ¬o
        case 484: return "jie";    // ¬p
        case 486: return "hui";    // ¬q
        case 488: return "yu";    // ¬r
        case 490: return "mei";    // ¬s
        case 492: return "chun";    // ¬t
        case 494: return "xuan";    // ¬u
        case 496: return "ti";    // ¬v
        case 498: return "xing";    // ¬w
        case 500: return "dai";    // ¬x
        case 502: return "rou";    // ¬y
        case 504: return "min";    // ¬z
        case 506: return "jian";    // ¬{
        case 508: return "wei";    // ¬|
        case 510: return "ruan";    // ¬}
        case 512: return "huan";    // ¬~
        case 514: return "";    // ?
        case 516: return "xie";    // ¬€
        case 518: return "chuan";    // ¬
        case 520: return "jian";    // ¬‚
        case 522: return "zhuan";    // ¬ƒ
        case 524: return "yang";    // ¬„
        case 526: return "lian";    // ¬…
        case 528: return "quan";    // ¬†
        case 530: return "duan";    // ¬‡
        case 532: return "ya";    // ¬ˆ
        case 534: return "huang";    // ¬‰
        case 536: return "liu";    // ¬Š
        case 538: return "shi";    // ¬‹
        case 540: return "rong";    // ¬Œ
        case 542: return "suo";    // ¬
        case 544: return "yao";    // ¬Ž
        case 546: return "wen";    // ¬
        case 548: return "wu";    // ¬
        case 550: return "zhen";    // ¬‘
        case 552: return "jin";    // ¬’
        case 554: return "ying";    // ¬“
        case 556: return "ma";    // ¬”
        case 558: return "tao";    // ¬•
        case 560: return "liu";    // ¬–
        case 562: return "li";    // ¬—
        case 564: return "lang";    // ¬˜
        case 566: return "tian";    // ¬™
        case 568: return "qiang";    // ¬š
        case 570: return "cuo";    // ¬›
        case 572: return "jue";    // ¬œ
        case 574: return "zhao";    // ¬
        case 576: return "bin";    // ¬ž
        case 578: return "tu";    // ¬Ÿ
        case 580: return "chang";    // ¬ 
        case 582: return "kun";    // ­@
        case 584: return "zhuan";    // ­A
        case 586: return "cong";    // ­B
        case 588: return "yi";    // ­C
        case 590: return "ji";    // ­D
        case 592: return "jing";    // ­E
        case 594: return "zao";    // ­F
        case 596: return "qiu";    // ­G
        case 598: return "ao";    // ­H
        case 600: return "lian";    // ­I
        case 602: return "men";    // ­J
        case 604: return "yin";    // ­K
        case 606: return "hua";    // ­L
        case 608: return "wei";    // ­M
        case 610: return "wu";    // ­N
        case 612: return "deng";    // ­O
        case 614: return "xiu";    // ­P
        case 616: return "zeng";    // ­Q
        case 618: return "xun";    // ­R
        case 620: return "qu";    // ­S
        case 622: return "dang";    // ­T
        case 624: return "lin";    // ­U
        case 626: return "liao";    // ­V
        case 628: return "jue";    // ­W
        case 630: return "su";    // ­X
        case 632: return "gui";    // ­Y
        case 634: return "jing";    // ­Z
        case 636: return "fan";    // ­[
        case 638: return "jin";    // ­\
        case 640: return "liu";    // ­]
        case 642: return "ji";    // ­^
        case 644: return "hui";    // ­_
        case 646: return "jing";    // ­`
        case 648: return "ai";    // ­a
        case 650: return "zao";    // ­b
        case 652: return "dang";    // ­c
        case 654: return "jiao";    // ­d
        case 656: return "gun";    // ­e
        case 658: return "tan";    // ­f
        case 660: return "kuai";    // ­g
        case 662: return "huan";    // ­h
        case 664: return "se";    // ­i
        case 666: return "sui";    // ­j
        case 668: return "tian";    // ­k
        case 670: return "chu";    // ­l
        case 672: return "yu";    // ­m
        case 674: return "jin";    // ­n
        case 676: return "fu";    // ­o
        case 678: return "bin";    // ­p
        case 680: return "shu";    // ­q
        case 682: return "zui";    // ­r
        case 684: return "lan";    // ­s
        case 686: return "xi";    // ­t
        case 688: return "ji";    // ­u
        case 690: return "xuan";    // ­v
        case 692: return "ruan";    // ­w
        case 694: return "wo";    // ­x
        case 696: return "gai";    // ­y
        case 698: return "lei";    // ­z
        case 700: return "du";    // ­{
        case 702: return "li";    // ­|
        case 704: return "zhi";    // ­}
        case 706: return "rou";    // ­~
        case 708: return "";    // ?
        case 710: return "li";    // ­€
        case 712: return "zan";    // ­
        case 714: return "qiong";    // ­‚
        case 716: return "ti";    // ­ƒ
        case 718: return "gui";    // ­„
        case 720: return "sui";    // ­…
        case 722: return "la";    // ­†
        case 724: return "long";    // ­‡
        case 726: return "lu";    // ­ˆ
        case 728: return "li";    // ­‰
        case 730: return "lan";    // ­Š
        case 732: return "ying";    // ­‹
        case 734: return "mi";    // ­Œ
        case 736: return "xiang";    // ­
        case 738: return "wei";    // ­Ž
        case 740: return "guan";    // ­
        case 742: return "dao";    // ­
        case 744: return "zan";    // ­‘
        case 746: return "ye";    // ­’
        case 748: return "bo";    // ­“
        case 750: return "bo";    // ­”
        case 752: return "hu";    // ­•
        case 754: return "li";    // ­–
        case 756: return "shi";    // ­—
        case 758: return "hong";    // ­˜
        case 760: return "qian";    // ­™
        case 762: return "ban";    // ­š
        case 764: return "pen";    // ­›
        case 766: return "fang";    // ­œ
        case 768: return "dan";    // ­
        case 770: return "fen";    // ­ž
        case 772: return "mao";    // ­Ÿ
        case 774: return "wa";    // ­ 
        case 776: return "hu";    // ®@
        case 778: return "yi";    // ®A
        case 780: return "bai";    // ®B
        case 782: return "juan";    // ®C
        case 784: return "chang";    // ®D
        case 786: return "chi";    // ®E
        case 788: return "li";    // ®F
        case 790: return "dang";    // ®G
        case 792: return "meng";    // ®H
        case 794: return "zhui";    // ®I
        case 796: return "ping";    // ®J
        case 798: return "bian";    // ®K
        case 800: return "zhou";    // ®L
        case 802: return "li";    // ®M
        case 804: return "ci";    // ®N
        case 806: return "ying";    // ®O
        case 808: return "qi";    // ®P
        case 810: return "xian";    // ®Q
        case 812: return "lou";    // ®R
        case 814: return "di";    // ®S
        case 816: return "ou";    // ®T
        case 818: return "chuan";    // ®U
        case 820: return "lin";    // ®V
        case 822: return "wu";    // ®W
        case 824: return "dan";    // ®X
        case 826: return "weng";    // ®Y
        case 828: return "ying";    // ®Z
        case 830: return "yan";    // ®[
        case 832: return "tian";    // ®\
        case 834: return "han";    // ®]
        case 836: return "chang";    // ®^
        case 838: return "qing";    // ®_
        case 840: return "shen";    // ®`
        case 842: return "chan";    // ®a
        case 844: return "chan";    // ®b
        case 846: return "rui";    // ®c
        case 848: return "su";    // ®d
        case 850: return "shen";    // ®e
        case 852: return "lu";    // ®f
        case 854: return "feng";    // ®g
        case 856: return "you";    // ®h
        case 858: return "fu";    // ®i
        case 860: return "ping";    // ®j
        case 862: return "ding";    // ®k
        case 864: return "quan";    // ®l
        case 866: return "mang";    // ®m
        case 868: return "bi";    // ®n
        case 870: return "liu";    // ®o
        case 872: return "sun";    // ®p
        case 874: return "liu";    // ®q
        case 876: return "mu";    // ®r
        case 878: return "yun";    // ®s
        case 880: return "fu";    // ®t
        case 882: return "geng";    // ®u
        case 884: return "jie";    // ®v
        case 886: return "bi";    // ®w
        case 888: return "tian";    // ®x
        case 890: return "mu";    // ®y
        case 892: return "tap";    // ®z
        case 894: return "jiang";    // ®{
        case 896: return "wa";    // ®|
        case 898: return "fu";    // ®}
        case 900: return "nan";    // ®~
        case 902: return "";    // ?
        case 904: return "mu";    // ®€
        case 906: return "mu";    // ®
        case 908: return "ji";    // ®‚
        case 910: return "tian";    // ®ƒ
        case 912: return "gai";    // ®„
        case 914: return "bi";    // ®…
        case 916: return "da";    // ®†
        case 918: return "zhi";    // ®‡
        case 920: return "lue";    // ®ˆ
        case 922: return "pan";    // ®‰
        case 924: return "yi";    // ®Š
        case 926: return "hua";    // ®‹
        case 928: return "yu";    // ®Œ
        case 930: return "yu";    // ®
        case 932: return "mu";    // ®Ž
        case 934: return "jun";    // ®
        case 936: return "yi";    // ®
        case 938: return "liu";    // ®‘
        case 940: return "die";    // ®’
        case 942: return "hua";    // ®“
        case 944: return "dang";    // ®”
        case 946: return "zhui";    // ®•
        case 948: return "jiang";    // ®–
        case 950: return "cheng";    // ®—
        case 952: return "chang";    // ®˜
        case 954: return "tuan";    // ®™
        case 956: return "lei";    // ®š
        case 958: return "cha";    // ®›
        case 960: return "liu";    // ®œ
        case 962: return "die";    // ®
        case 964: return "lin";    // ®ž
        case 966: return "jiang";    // ®Ÿ
        case 968: return "chou";    // ® 
        case 970: return "pi";    // ¯@
        case 972: return "die";    // ¯A
        case 974: return "die";    // ¯B
        case 976: return "jie";    // ¯C
        case 978: return "dan";    // ¯D
        case 980: return "shu";    // ¯E
        case 982: return "di";    // ¯F
        case 984: return "nai";    // ¯G
        case 986: return "bi";    // ¯H
        case 988: return "gang";    // ¯I
        case 990: return "zhou";    // ¯J
        case 992: return "xia";    // ¯K
        case 994: return "xu";    // ¯L
        case 996: return "chen";    // ¯M
        case 998: return "jue";    // ¯N
        case 1000: return "qi";    // ¯O
        case 1002: return "ya";    // ¯P
        case 1004: return "cui";    // ¯Q
        case 1006: return "bi";    // ¯R
        case 1008: return "zong";    // ¯S
        case 1010: return "xue";    // ¯T
        case 1012: return "zhi";    // ¯U
        case 1014: return "bian";    // ¯V
        case 1016: return "zhi";    // ¯W
        case 1018: return "fei";    // ¯X
        case 1020: return "ju";    // ¯Y
        case 1022: return "shan";    // ¯Z
        case 1024: return "ni";    // ¯[
        case 1026: return "teng";    // ¯\
        case 1028: return "tong";    // ¯]
        case 1030: return "jie";    // ¯^
        case 1032: return "you";    // ¯_
        case 1034: return "hui";    // ¯`
        case 1036: return "tan";    // ¯a
        case 1038: return "chi";    // ¯b
        case 1040: return "mei";    // ¯c
        case 1042: return "jing";    // ¯d
        case 1044: return "xiao";    // ¯e
        case 1046: return "tu";    // ¯f
        case 1048: return "mang";    // ¯g
        case 1050: return "xiao";    // ¯h
        case 1052: return "suan";    // ¯i
        case 1054: return "pu";    // ¯j
        case 1056: return "duo";    // ¯k
        case 1058: return "shou";    // ¯l
        case 1060: return "yi";    // ¯m
        case 1062: return "beng";    // ¯n
        case 1064: return "zhang";    // ¯o
        case 1066: return "guan";    // ¯p
        case 1068: return "ma";    // ¯q
        case 1070: return "lin";    // ¯r
        case 1072: return "ji";    // ¯s
        case 1074: return "dian";    // ¯t
        case 1076: return "an";    // ¯u
        case 1078: return "chi";    // ¯v
        case 1080: return "bi";    // ¯w
        case 1082: return "min";    // ¯x
        case 1084: return "dui";    // ¯y
        case 1086: return "ke";    // ¯z
        case 1088: return "ya";    // ¯{
        case 1090: return "cu";    // ¯|
        case 1092: return "shen";    // ¯}
        case 1094: return "zhong";    // ¯~
        case 1096: return "";    // ?
        case 1098: return "zhi";    // ¯€
        case 1100: return "yu";    // ¯
        case 1102: return "feng";    // ¯‚
        case 1104: return "yang";    // ¯ƒ
        case 1106: return "chen";    // ¯„
        case 1108: return "tu";    // ¯…
        case 1110: return "guo";    // ¯†
        case 1112: return "wen";    // ¯‡
        case 1114: return "huan";    // ¯ˆ
        case 1116: return "ku";    // ¯‰
        case 1118: return "yin";    // ¯Š
        case 1120: return "jue";    // ¯‹
        case 1122: return "xi";    // ¯Œ
        case 1124: return "guan";    // ¯
        case 1126: return "yi";    // ¯Ž
        case 1128: return "chuan";    // ¯
        case 1130: return "lei";    // ¯
        case 1132: return "nue";    // ¯‘
        case 1134: return "dian";    // ¯’
        case 1136: return "zhang";    // ¯“
        case 1138: return "shen";    // ¯”
        case 1140: return "cu";    // ¯•
        case 1142: return "yi";    // ¯–
        case 1144: return "zong";    // ¯—
        case 1146: return "sou";    // ¯˜
        case 1148: return "se";    // ¯™
        case 1150: return "diao";    // ¯š
        case 1152: return "lou";    // ¯›
        case 1154: return "lu";    // ¯œ
        case 1156: return "qin";    // ¯
        case 1158: return "fu";    // ¯ž
        case 1160: return "liao";    // ¯Ÿ
        case 1162: return "qiao";    // ¯ 
        case 1164: return "liu";    // °@
        case 1166: return "lao";    // °A
        case 1168: return "xian";    // °B
        case 1170: return "fei";    // °C
        case 1172: return "dan";    // °D
        case 1174: return "yin";    // °E
        case 1176: return "he";    // °F
        case 1178: return "xian";    // °G
        case 1180: return "guan";    // °H
        case 1182: return "wei";    // °I
        case 1184: return "nong";    // °J
        case 1186: return "yu";    // °K
        case 1188: return "wei";    // °L
        case 1190: return "yong";    // °M
        case 1192: return "lei";    // °N
        case 1194: return "li";    // °O
        case 1196: return "shu";    // °P
        case 1198: return "dan";    // °Q
        case 1200: return "bing";    // °R
        case 1202: return "bing";    // °S
        case 1204: return "bie";    // °T
        case 1206: return "ji";    // °U
        case 1208: return "chi";    // °V
        case 1210: return "yang";    // °W
        case 1212: return "jie";    // °X
        case 1214: return "zheng";    // °Y
        case 1216: return "yi";    // °Z
        case 1218: return "li";    // °[
        case 1220: return "huo";    // °\
        case 1222: return "lai";    // °]
        case 1224: return "ji";    // °^
        case 1226: return "xuan";    // °_
        case 1228: return "ying";    // °`
        case 1230: return "yin";    // °a
        case 1232: return "yong";    // °b
        case 1234: return "tan";    // °c
        case 1236: return "dian";    // °d
        case 1238: return "luo";    // °e
        case 1240: return "luan";    // °f
        case 1242: return "luan";    // °g
        case 1244: return "bo";    // °h
        case 1246: return "bo";    // °i
        case 1248: return "ba";    // °j
        case 1250: return "fa";    // °k
        case 1252: return "fa";    // °l
        case 1254: return "qie";    // °m
        case 1256: return "bi";    // °n
        case 1258: return "zao";    // °o
        case 1260: return "mao";    // °p
        case 1262: return "ba";    // °q
        case 1264: return "ci";    // °r
        case 1266: return "ling";    // °s
        case 1268: return "mo";    // °t
        case 1270: return "ji";    // °u
        case 1272: return "peng";    // °v
        case 1274: return "gao";    // °w
        case 1276: return "e";    // °x
        case 1278: return "han";    // °y
        case 1280: return "bi";    // °z
        case 1282: return "chou";    // °{
        case 1284: return "qian";    // °|
        case 1286: return "ai";    // °}
        case 1288: return "po";    // °~
        case 1290: return "";    // ?
        case 1292: return "hao";    // °€
        case 1294: return "huang";    // °
        case 1296: return "hao";    // °‚
        case 1298: return "ze";    // °ƒ
        case 1300: return "cui";    // °„
        case 1302: return "hao";    // °…
        case 1304: return "xiao";    // °†
        case 1306: return "ye";    // °‡
        case 1308: return "hao";    // °ˆ
        case 1310: return "jiao";    // °‰
        case 1312: return "ai";    // °Š
        case 1314: return "xing";    // °‹
        case 1316: return "huang";    // °Œ
        case 1318: return "li";    // °
        case 1320: return "piao";    // °Ž
        case 1322: return "he";    // °
        case 1324: return "jiao";    // °
        case 1326: return "gan";    // °‘
        case 1328: return "pao";    // °’
        case 1330: return "qiu";    // °“
        case 1332: return "que";    // °”
        case 1334: return "zha";    // °•
        case 1336: return "gu";    // °–
        case 1338: return "jun";    // °—
        case 1340: return "jun";    // °˜
        case 1342: return "zhou";    // °™
        case 1344: return "zha";    // °š
        case 1346: return "gu";    // °›
        case 1348: return "zhao";    // °œ
        case 1350: return "du";    // °
        case 1352: return "qi";    // °ž
        case 1354: return "ying";    // °Ÿ
        case 1356: return "bei";    // ° 
        case 1358: return "zhao";    // ±@
        case 1360: return "he";    // ±A
        case 1362: return "he";    // ±B
        case 1364: return "bo";    // ±C
        case 1366: return "wan";    // ±D
        case 1368: return "yu";    // ±E
        case 1370: return "fan";    // ±F
        case 1372: return "fu";    // ±G
        case 1374: return "qiu";    // ±H
        case 1376: return "dao";    // ±I
        case 1378: return "lu";    // ±J
        case 1380: return "zhan";    // ±K
        case 1382: return "li";    // ±L
        case 1384: return "jin";    // ±M
        case 1386: return "xu";    // ±N
        case 1388: return "jian";    // ±O
        case 1390: return "pan";    // ±P
        case 1392: return "an";    // ±Q
        case 1394: return "lu";    // ±R
        case 1396: return "xu";    // ±S
        case 1398: return "zhou";    // ±T
        case 1400: return "dang";    // ±U
        case 1402: return "an";    // ±V
        case 1404: return "gu";    // ±W
        case 1406: return "li";    // ±X
        case 1408: return "gan";    // ±Y
        case 1410: return "wang";    // ±Z
        case 1412: return "qi";    // ±[
        case 1414: return "yuan";    // ±\
        case 1416: return "tian";    // ±]
        case 1418: return "xin";    // ±^
        case 1420: return "pan";    // ±_
        case 1422: return "feng";    // ±`
        case 1424: return "min";    // ±a
        case 1426: return "ming";    // ±b
        case 1428: return "shi";    // ±c
        case 1430: return "yun";    // ±d
        case 1432: return "pan";    // ±e
        case 1434: return "fang";    // ±f
        case 1436: return "mei";    // ±g
        case 1438: return "xian";    // ±h
        case 1440: return "shi";    // ±i
        case 1442: return "yang";    // ±j
        case 1444: return "zheng";    // ±k
        case 1446: return "ao";    // ±l
        case 1448: return "shen";    // ±m
        case 1450: return "huo";    // ±n
        case 1452: return "da";    // ±o
        case 1454: return "zhen";    // ±p
        case 1456: return "kuang";    // ±q
        case 1458: return "ju";    // ±r
        case 1460: return "shen";    // ±s
        case 1462: return "mei";    // ±t
        case 1464: return "mo";    // ±u
        case 1466: return "zhu";    // ±v
        case 1468: return "zhen";    // ±w
        case 1470: return "shi";    // ±x
        case 1472: return "die";    // ±y
        case 1474: return "ni";    // ±z
        case 1476: return "zi";    // ±{
        case 1478: return "chao";    // ±|
        case 1480: return "bing";    // ±}
        case 1482: return "pan";    // ±~
        case 1484: return "";    // ?
        case 1486: return "long";    // ±€
        case 1488: return "tong";    // ±
        case 1490: return "die";    // ±‚
        case 1492: return "di";    // ±ƒ
        case 1494: return "ne";    // ±„
        case 1496: return "ming";    // ±…
        case 1498: return "xuan";    // ±†
        case 1500: return "zhen";    // ±‡
        case 1502: return "yang";    // ±ˆ
        case 1504: return "mo";    // ±‰
        case 1506: return "zhong";    // ±Š
        case 1508: return "mo";    // ±‹
        case 1510: return "mei";    // ±Œ
        case 1512: return "qiao";    // ±
        case 1514: return "han";    // ±Ž
        case 1516: return "huan";    // ±
        case 1518: return "cheng";    // ±
        case 1520: return "zhuai";    // ±‘
        case 1522: return "juan";    // ±’
        case 1524: return "e";    // ±“
        case 1526: return "man";    // ±”
        case 1528: return "xian";    // ±•
        case 1530: return "xi";    // ±–
        case 1532: return "kun";    // ±—
        case 1534: return "shan";    // ±˜
        case 1536: return "tian";    // ±™
        case 1538: return "gun";    // ±š
        case 1540: return "wan";    // ±›
        case 1542: return "leng";    // ±œ
        case 1544: return "shi";    // ±
        case 1546: return "qiong";    // ±ž
        case 1548: return "lie";    // ±Ÿ
        case 1550: return "zheng";    // ± 
        case 1552: return "li";    // ²@
        case 1554: return "lai";    // ²A
        case 1556: return "zui";    // ²B
        case 1558: return "juan";    // ²C
        case 1560: return "pi";    // ²D
        case 1562: return "hun";    // ²E
        case 1564: return "lu";    // ²F
        case 1566: return "yi";    // ²G
        case 1568: return "zhou";    // ²H
        case 1570: return "yu";    // ²I
        case 1572: return "hun";    // ²J
        case 1574: return "ma";    // ²K
        case 1576: return "xia";    // ²L
        case 1578: return "xing";    // ²M
        case 1580: return "hui";    // ²N
        case 1582: return "gun";    // ²O
        case 1584: return "zai";    // ²P
        case 1586: return "chun";    // ²Q
        case 1588: return "jian";    // ²R
        case 1590: return "mei";    // ²S
        case 1592: return "hou";    // ²T
        case 1594: return "xuan";    // ²U
        case 1596: return "tian";    // ²V
        case 1598: return "xu";    // ²W
        case 1600: return "fa";    // ²X
        case 1602: return "wo";    // ²Y
        case 1604: return "gui";    // ²Z
        case 1606: return "mi";    // ²[
        case 1608: return "weng";    // ²\
        case 1610: return "kou";    // ²]
        case 1612: return "dang";    // ²^
        case 1614: return "tian";    // ²_
        case 1616: return "huan";    // ²`
        case 1618: return "mo";    // ²a
        case 1620: return "fen";    // ²b
        case 1622: return "ze";    // ²c
        case 1624: return "zhang";    // ²d
        case 1626: return "yi";    // ²e
        case 1628: return "dou";    // ²f
        case 1630: return "kou";    // ²g
        case 1632: return "mo";    // ²h
        case 1634: return "shun";    // ²i
        case 1636: return "cong";    // ²j
        case 1638: return "lu";    // ²k
        case 1640: return "chi";    // ²l
        case 1642: return "man";    // ²m
        case 1644: return "gui";    // ²n
        case 1646: return "huan";    // ²o
        case 1648: return "shun";    // ²p
        case 1650: return "xi";    // ²q
        case 1652: return "pu";    // ²r
        case 1654: return "shen";    // ²s
        case 1656: return "liao";    // ²t
        case 1658: return "che";    // ²u
        case 1660: return "jian";    // ²v
        case 1662: return "ye";    // ²w
        case 1664: return "xu";    // ²x
        case 1666: return "wu";    // ²y
        case 1668: return "gui";    // ²z
        case 1670: return "jian";    // ²{
        case 1672: return "ye";    // ²|
        case 1674: return "ai";    // ²}
        case 1676: return "hui";    // ²~
        case 1678: return "";    // ?
        case 1680: return "jian";    // ²€
        case 1682: return "zhao";    // ²
        case 1684: return "mei";    // ²‚
        case 1686: return "chou";    // ²ƒ
        case 1688: return "sao";    // ²„
        case 1690: return "ning";    // ²…
        case 1692: return "xun";    // ²†
        case 1694: return "yao";    // ²‡
        case 1696: return "yue";    // ²ˆ
        case 1698: return "meng";    // ²‰
        case 1700: return "mian";    // ²Š
        case 1702: return "pin";    // ²‹
        case 1704: return "mian";    // ²Œ
        case 1706: return "lei";    // ²
        case 1708: return "guo";    // ²Ž
        case 1710: return "xuan";    // ²
        case 1712: return "mian";    // ²
        case 1714: return "huo";    // ²‘
        case 1716: return "lu";    // ²’
        case 1718: return "meng";    // ²“
        case 1720: return "long";    // ²”
        case 1722: return "guan";    // ²•
        case 1724: return "man";    // ²–
        case 1726: return "li";    // ²—
        case 1728: return "tang";    // ²˜
        case 1730: return "kan";    // ²™
        case 1732: return "zhu";    // ²š
        case 1734: return "qin";    // ²›
        case 1736: return "yu";    // ²œ
        case 1738: return "shuo";    // ²
        case 1740: return "zhuo";    // ²ž
        case 1742: return "jue";    // ²Ÿ
        case 1744: return "shen";    // ² 
        case 1746: return "hou";    // ³@
        case 1748: return "ying";    // ³A
        case 1750: return "zhou";    // ³B
        case 1752: return "jiao";    // ³C
        case 1754: return "zeng";    // ³D
        case 1756: return "yue";    // ³E
        case 1758: return "ba";    // ³F
        case 1760: return "ding";    // ³G
        case 1762: return "diao";    // ³H
        case 1764: return "zi";    // ³I
        case 1766: return "wu";    // ³J
        case 1768: return "da";    // ³K
        case 1770: return "ku";    // ³L
        case 1772: return "gang";    // ³M
        case 1774: return "dan";    // ³N
        case 1776: return "jue";    // ³O
        case 1778: return "li";    // ³P
        case 1780: return "fu";    // ³Q
        case 1782: return "wen";    // ³R
        case 1784: return "e";    // ³S
        case 1786: return "kang";    // ³T
        case 1788: return "zhi";    // ³U
        case 1790: return "jie";    // ³V
        case 1792: return "bin";    // ³W
        case 1794: return "e";    // ³X
        case 1796: return "zhe";    // ³Y
        case 1798: return "sui";    // ³Z
        case 1800: return "wa";    // ³[
        case 1802: return "jin";    // ³\
        case 1804: return "mo";    // ³]
        case 1806: return "ju";    // ³^
        case 1808: return "yu";    // ³_
        case 1810: return "luo";    // ³`
        case 1812: return "tuo";    // ³a
        case 1814: return "e";    // ³b
        case 1816: return "mu";    // ³c
        case 1818: return "zhu";    // ³d
        case 1820: return "nu";    // ³e
        case 1822: return "ping";    // ³f
        case 1824: return "ling";    // ³g
        case 1826: return "pao";    // ³h
        case 1828: return "le";    // ³i
        case 1830: return "e";    // ³j
        case 1832: return "po";    // ³k
        case 1834: return "yong";    // ³l
        case 1836: return "kuang";    // ³m
        case 1838: return "keng";    // ³n
        case 1840: return "quan";    // ³o
        case 1842: return "zhu";    // ³p
        case 1844: return "guang";    // ³q
        case 1846: return "e";    // ³r
        case 1848: return "qia";    // ³s
        case 1850: return "lu";    // ³t
        case 1852: return "wei";    // ³u
        case 1854: return "ai";    // ³v
        case 1856: return "ken";    // ³w
        case 1858: return "yan";    // ³x
        case 1860: return "peng";    // ³y
        case 1862: return "lao";    // ³z
        case 1864: return "hong";    // ³{
        case 1866: return "qing";    // ³|
        case 1868: return "wei";    // ³}
        case 1870: return "qiao";    // ³~
        case 1872: return "";    // ?
        case 1874: return "ceok";    // ³€
        case 1876: return "keng";    // ³
        case 1878: return "ke";    // ³‚
        case 1880: return "chan";    // ³ƒ
        case 1882: return "lang";    // ³„
        case 1884: return "hong";    // ³…
        case 1886: return "yu";    // ³†
        case 1888: return "xiao";    // ³‡
        case 1890: return "xia";    // ³ˆ
        case 1892: return "bang";    // ³‰
        case 1894: return "luo";    // ³Š
        case 1896: return "yong";    // ³‹
        case 1898: return "che";    // ³Œ
        case 1900: return "che";    // ³
        case 1902: return "yan";    // ³Ž
        case 1904: return "sha";    // ³
        case 1906: return "kun";    // ³
        case 1908: return "gu";    // ³‘
        case 1910: return "ceok";    // ³’
        case 1912: return "hua";    // ³“
        case 1914: return "lu";    // ³”
        case 1916: return "cen";    // ³•
        case 1918: return "nue";    // ³–
        case 1920: return "song";    // ³—
        case 1922: return "zhuo";    // ³˜
        case 1924: return "keng";    // ³™
        case 1926: return "yan";    // ³š
        case 1928: return "duo";    // ³›
        case 1930: return "kong";    // ³œ
        case 1932: return "cheng";    // ³
        case 1934: return "qi";    // ³ž
        case 1936: return "zong";    // ³Ÿ
        case 1938: return "qing";    // ³ 
        case 1940: return "lin";    // ´@
        case 1942: return "jun";    // ´A
        case 1944: return "bo";    // ´B
        case 1946: return "min";    // ´C
        case 1948: return "jian";    // ´D
        case 1950: return "he";    // ´E
        case 1952: return "que";    // ´F
        case 1954: return "leng";    // ´G
        case 1956: return "yin";    // ´H
        case 1958: return "wu";    // ´I
        case 1960: return "qi";    // ´J
        case 1962: return "lun";    // ´K
        case 1964: return "nao";    // ´L
        case 1966: return "ruan";    // ´M
        case 1968: return "yan";    // ´N
        case 1970: return "ding";    // ´O
        case 1972: return "tuo";    // ´P
        case 1974: return "ying";    // ´Q
        case 1976: return "ke";    // ´R
        case 1978: return "wei";    // ´S
        case 1980: return "shuo";    // ´T
        case 1982: return "an";    // ´U
        case 1984: return "duan";    // ´V
        case 1986: return "xia";    // ´W
        case 1988: return "dang";    // ´X
        case 1990: return "di";    // ´Y
        case 1992: return "nao";    // ´Z
        case 1994: return "tian";    // ´[
        case 1996: return "qi";    // ´\
        case 1998: return "dun";    // ´]
        case 2000: return "feng";    // ´^
        case 2002: return "que";    // ´_
        case 2004: return "qiao";    // ´`
        case 2006: return "ma";    // ´a
        case 2008: return "gong";    // ´b
        case 2010: return "xie";    // ´c
        case 2012: return "e";    // ´d
        case 2014: return "liu";    // ´e
        case 2016: return "ti";    // ´f
        case 2018: return "tang";    // ´g
        case 2020: return "ke";    // ´h
        case 2022: return "pi";    // ´i
        case 2024: return "wei";    // ´j
        case 2026: return "tian";    // ´k
        case 2028: return "qia";    // ´l
        case 2030: return "qi";    // ´m
        case 2032: return "lian";    // ´n
        case 2034: return "wei";    // ´o
        case 2036: return "yun";    // ´p
        case 2038: return "dui";    // ´q
        case 2040: return "la";    // ´r
        case 2042: return "pak";    // ´s
        case 2044: return "yao";    // ´t
        case 2046: return "zhuan";    // ´u
        case 2048: return "chan";    // ´v
        case 2050: return "qi";    // ´w
        case 2052: return "ao";    // ´x
        case 2054: return "peng";    // ´y
        case 2056: return "liu";    // ´z
        case 2058: return "lu";    // ´{
        case 2060: return "kan";    // ´|
        case 2062: return "chuan";    // ´}
        case 2064: return "chen";    // ´~
        case 2066: return "";    // ?
        case 2068: return "yin";    // ´€
        case 2070: return "lei";    // ´
        case 2072: return "piao";    // ´‚
        case 2074: return "qi";    // ´ƒ
        case 2076: return "qi";    // ´„
        case 2078: return "cui";    // ´…
        case 2080: return "zong";    // ´†
        case 2082: return "chuo";    // ´‡
        case 2084: return "lun";    // ´ˆ
        case 2086: return "ji";    // ´‰
        case 2088: return "shan";    // ´Š
        case 2090: return "lao";    // ´‹
        case 2092: return "zeng";    // ´Œ
        case 2094: return "jian";    // ´
        case 2096: return "xi";    // ´Ž
        case 2098: return "ding";    // ´
        case 2100: return "dian";    // ´
        case 2102: return "bo";    // ´‘
        case 2104: return "she";    // ´’
        case 2106: return "qiao";    // ´“
        case 2108: return "di";    // ´”
        case 2110: return "li";    // ´•
        case 2112: return "jian";    // ´–
        case 2114: return "xi";    // ´—
        case 2116: return "zhang";    // ´˜
        case 2118: return "qiao";    // ´™
        case 2120: return "jian";    // ´š
        case 2122: return "yu";    // ´›
        case 2124: return "zhui";    // ´œ
        case 2126: return "he";    // ´
        case 2128: return "ke";    // ´ž
        case 2130: return "ze";    // ´Ÿ
        case 2132: return "lei";    // ´ 
        case 2134: return "jie";    // µ@
        case 2136: return "chu";    // µA
        case 2138: return "ye";    // µB
        case 2140: return "hu";    // µC
        case 2142: return "dang";    // µD
        case 2144: return "yi";    // µE
        case 2146: return "pi";    // µF
        case 2148: return "pi";    // µG
        case 2150: return "yu";    // µH
        case 2152: return "pin";    // µI
        case 2154: return "e";    // µJ
        case 2156: return "ai";    // µK
        case 2158: return "ke";    // µL
        case 2160: return "jian";    // µM
        case 2162: return "yu";    // µN
        case 2164: return "ruan";    // µO
        case 2166: return "pao";    // µP
        case 2168: return "ci";    // µQ
        case 2170: return "bo";    // µR
        case 2172: return "yang";    // µS
        case 2174: return "ma";    // µT
        case 2176: return "xian";    // µU
        case 2178: return "kuang";    // µV
        case 2180: return "lei";    // µW
        case 2182: return "lei";    // µX
        case 2184: return "zhi";    // µY
        case 2186: return "li";    // µZ
        case 2188: return "li";    // µ[
        case 2190: return "fan";    // µ\
        case 2192: return "que";    // µ]
        case 2194: return "pao";    // µ^
        case 2196: return "ying";    // µ_
        case 2198: return "li";    // µ`
        case 2200: return "long";    // µa
        case 2202: return "long";    // µb
        case 2204: return "mo";    // µc
        case 2206: return "shuan";    // µd
        case 2208: return "guan";    // µe
        case 2210: return "lan";    // µf
        case 2212: return "ca";    // µg
        case 2214: return "yan";    // µh
        case 2216: return "reng";    // µi
        case 2218: return "yue";    // µj
        case 2220: return "ta";    // µk
        case 2222: return "ma";    // µl
        case 2224: return "xie";    // µm
        case 2226: return "yao";    // µn
        case 2228: return "qi";    // µo
        case 2230: return "beng";    // µp
        case 2232: return "dui";    // µq
        case 2234: return "zhong";    // µr
        case 2236: return "ren";    // µs
        case 2238: return "yi";    // µt
        case 2240: return "shi";    // µu
        case 2242: return "you";    // µv
        case 2244: return "zhi";    // µw
        case 2246: return "tiao";    // µx
        case 2248: return "fu";    // µy
        case 2250: return "bi";    // µz
        case 2252: return "suan";    // µ{
        case 2254: return "mei";    // µ|
        case 2256: return "chai";    // µ}
        case 2258: return "lu";    // µ~
        case 2260: return "";    // ?
        case 2262: return "yu";    // µ€
        case 2264: return "wu";    // µ
        case 2266: return "zhu";    // µ‚
        case 2268: return "gui";    // µƒ
        case 2270: return "xia";    // µ„
        case 2272: return "zhi";    // µ…
        case 2274: return "gao";    // µ†
        case 2276: return "gao";    // µ‡
        case 2278: return "lei";    // µˆ
        case 2280: return "jin";    // µ‰
        case 2282: return "shen";    // µŠ
        case 2284: return "gai";    // µ‹
        case 2286: return "kun";    // µŒ
        case 2288: return "di";    // µ
        case 2290: return "tao";    // µŽ
        case 2292: return "gu";    // µ
        case 2294: return "guan";    // µ
        case 2296: return "zui";    // µ‘
        case 2298: return "ling";    // µ’
        case 2300: return "lu";    // µ“
        case 2302: return "dao";    // µ”
        case 2304: return "zhi";    // µ•
        case 2306: return "bi";    // µ–
        case 2308: return "chu";    // µ—
        case 2310: return "hui";    // µ˜
        case 2312: return "you";    // µ™
        case 2314: return "yin";    // µš
        case 2316: return "zi";    // µ›
        case 2318: return "huo";    // µœ
        case 2320: return "zhen";    // µ
        case 2322: return "yuan";    // µž
        case 2324: return "wu";    // µŸ
        case 2326: return "xian";    // µ 
        case 2328: return "yang";    // ¶@
        case 2330: return "zhi";    // ¶A
        case 2332: return "yi";    // ¶B
        case 2334: return "mei";    // ¶C
        case 2336: return "si";    // ¶D
        case 2338: return "di";    // ¶E
        case 2340: return "bei";    // ¶F
        case 2342: return "zhen";    // ¶G
        case 2344: return "yong";    // ¶H
        case 2346: return "ji";    // ¶I
        case 2348: return "gao";    // ¶J
        case 2350: return "tang";    // ¶K
        case 2352: return "si";    // ¶L
        case 2354: return "ma";    // ¶M
        case 2356: return "ta";    // ¶N
        case 2358: return "fu";    // ¶O
        case 2360: return "xuan";    // ¶P
        case 2362: return "qi";    // ¶Q
        case 2364: return "yu";    // ¶R
        case 2366: return "ji";    // ¶S
        case 2368: return "si";    // ¶T
        case 2370: return "chan";    // ¶U
        case 2372: return "dan";    // ¶V
        case 2374: return "gui";    // ¶W
        case 2376: return "sui";    // ¶X
        case 2378: return "li";    // ¶Y
        case 2380: return "nong";    // ¶Z
        case 2382: return "mi";    // ¶[
        case 2384: return "dao";    // ¶\
        case 2386: return "li";    // ¶]
        case 2388: return "yue";    // ¶^
        case 2390: return "zhi";    // ¶_
        case 2392: return "zan";    // ¶`
        case 2394: return "lei";    // ¶a
        case 2396: return "rou";    // ¶b
        case 2398: return "xie";    // ¶c
        case 2400: return "tu";    // ¶d
        case 2402: return "ren";    // ¶e
        case 2404: return "zi";    // ¶f
        case 2406: return "na";    // ¶g
        case 2408: return "zhi";    // ¶h
        case 2410: return "xian";    // ¶i
        case 2412: return "nian";    // ¶j
        case 2414: return "qiu";    // ¶k
        case 2416: return "fen";    // ¶l
        case 2418: return "mao";    // ¶m
        case 2420: return "yun";    // ¶n
        case 2422: return "zhi";    // ¶o
        case 2424: return "jing";    // ¶p
        case 2426: return "zhi";    // ¶q
        case 2428: return "yu";    // ¶r
        case 2430: return "ku";    // ¶s
        case 2432: return "ban";    // ¶t
        case 2434: return "pi";    // ¶u
        case 2436: return "ni";    // ¶v
        case 2438: return "li";    // ¶w
        case 2440: return "you";    // ¶x
        case 2442: return "pi";    // ¶y
        case 2444: return "bo";    // ¶z
        case 2446: return "ling";    // ¶{
        case 2448: return "nian";    // ¶|
        case 2450: return "zuo";    // ¶}
        case 2452: return "zhi";    // ¶~
        case 2454: return "";    // ?
        case 2456: return "ju";    // ¶€
        case 2458: return "huo";    // ¶
        case 2460: return "tong";    // ¶‚
        case 2462: return "zhi";    // ¶ƒ
        case 2464: return "kuo";    // ¶„
        case 2466: return "ge";    // ¶…
        case 2468: return "yin";    // ¶†
        case 2470: return "zi";    // ¶‡
        case 2472: return "zhi";    // ¶ˆ
        case 2474: return "ren";    // ¶‰
        case 2476: return "du";    // ¶Š
        case 2478: return "zhu";    // ¶‹
        case 2480: return "nong";    // ¶Œ
        case 2482: return "bu";    // ¶
        case 2484: return "gao";    // ¶Ž
        case 2486: return "xun";    // ¶
        case 2488: return "shui";    // ¶
        case 2490: return "kun";    // ¶‘
        case 2492: return "gan";    // ¶’
        case 2494: return "jing";    // ¶“
        case 2496: return "ti";    // ¶”
        case 2498: return "tu";    // ¶•
        case 2500: return "ya";    // ¶–
        case 2502: return "lun";    // ¶—
        case 2504: return "lu";    // ¶˜
        case 2506: return "gu";    // ¶™
        case 2508: return "zuo";    // ¶š
        case 2510: return "zhun";    // ¶›
        case 2512: return "bang";    // ¶œ
        case 2514: return "ji";    // ¶
        case 2516: return "zhi";    // ¶ž
        case 2518: return "kun";    // ¶Ÿ
        case 2520: return "leng";    // ¶ 
        case 2522: return "peng";    // ·@
        case 2524: return "bing";    // ·A
        case 2526: return "zu";    // ·B
        case 2528: return "yu";    // ·C
        case 2530: return "lue";    // ·D
        case 2532: return "xiang";    // ·E
        case 2534: return "yi";    // ·F
        case 2536: return "qie";    // ·G
        case 2538: return "bian";    // ·H
        case 2540: return "ji";    // ·I
        case 2542: return "fu";    // ·J
        case 2544: return "bi";    // ·K
        case 2546: return "nuo";    // ·L
        case 2548: return "jie";    // ·M
        case 2550: return "zhong";    // ·N
        case 2552: return "zong";    // ·O
        case 2554: return "xu";    // ·P
        case 2556: return "cheng";    // ·Q
        case 2558: return "dao";    // ·R
        case 2560: return "lian";    // ·S
        case 2562: return "jiu";    // ·T
        case 2564: return "yu";    // ·U
        case 2566: return "xu";    // ·V
        case 2568: return "zhi";    // ·W
        case 2570: return "gao";    // ·X
        case 2572: return "yu";    // ·Y
        case 2574: return "rong";    // ·Z
        case 2576: return "sui";    // ·[
        case 2578: return "rong";    // ·\
        case 2580: return "ji";    // ·]
        case 2582: return "kang";    // ·^
        case 2584: return "shan";    // ·_
        case 2586: return "men";    // ·`
        case 2588: return "ti";    // ·a
        case 2590: return "ji";    // ·b
        case 2592: return "lu";    // ·c
        case 2594: return "su";    // ·d
        case 2596: return "ji";    // ·e
        case 2598: return "ying";    // ·f
        case 2600: return "wen";    // ·g
        case 2602: return "qiu";    // ·h
        case 2604: return "kuei";    // ·i
        case 2606: return "yi";    // ·j
        case 2608: return "huang";    // ·k
        case 2610: return "qie";    // ·l
        case 2612: return "ji";    // ·m
        case 2614: return "xiao";    // ·n
        case 2616: return "pu";    // ·o
        case 2618: return "jiao";    // ·p
        case 2620: return "bo";    // ·q
        case 2622: return "tong";    // ·r
        case 2624: return "zui";    // ·s
        case 2626: return "lu";    // ·t
        case 2628: return "sui";    // ·u
        case 2630: return "nong";    // ·v
        case 2632: return "se";    // ·w
        case 2634: return "hui";    // ·x
        case 2636: return "rang";    // ·y
        case 2638: return "nuo";    // ·z
        case 2640: return "yu";    // ·{
        case 2642: return "pin";    // ·|
        case 2644: return "ji";    // ·}
        case 2646: return "tui";    // ·~
        case 2648: return "";    // ?
        case 2650: return "wen";    // ·€
        case 2652: return "bie";    // ·
        case 2654: return "hu";    // ·‚
        case 2656: return "kuang";    // ·ƒ
        case 2658: return "lu";    // ·„
        case 2660: return "biao";    // ·…
        case 2662: return "se";    // ·†
        case 2664: return "jue";    // ·‡
        case 2666: return "li";    // ·ˆ
        case 2668: return "zan";    // ·‰
        case 2670: return "ya";    // ·Š
        case 2672: return "yu";    // ·‹
        case 2674: return "shen";    // ·Œ
        case 2676: return "jing";    // ·
        case 2678: return "yao";    // ·Ž
        case 2680: return "lao";    // ·
        case 2682: return "yao";    // ·
        case 2684: return "bao";    // ·‘
        case 2686: return "bing";    // ·’
        case 2688: return "wa";    // ·“
        case 2690: return "ku";    // ·”
        case 2692: return "pao";    // ·•
        case 2694: return "diao";    // ·–
        case 2696: return "wu";    // ·—
        case 2698: return "wa";    // ·˜
        case 2700: return "chuan";    // ·™
        case 2702: return "yao";    // ·š
        case 2704: return "xiao";    // ·›
        case 2706: return "cheng";    // ·œ
        case 2708: return "kou";    // ·
        case 2710: return "dan";    // ·ž
        case 2712: return "zhuo";    // ·Ÿ
        case 2714: return "xu";    // · 
        case 2716: return "su";    // ¸@
        case 2718: return "guan";    // ¸A
        case 2720: return "zhuo";    // ¸B
        case 2722: return "wo";    // ¸C
        case 2724: return "wa";    // ¸D
        case 2726: return "ya";    // ¸E
        case 2728: return "qiong";    // ¸F
        case 2730: return "yao";    // ¸G
        case 2732: return "yao";    // ¸H
        case 2734: return "tiao";    // ¸I
        case 2736: return "chao";    // ¸J
        case 2738: return "tian";    // ¸K
        case 2740: return "diao";    // ¸L
        case 2742: return "lou";    // ¸M
        case 2744: return "liao";    // ¸N
        case 2746: return "xi";    // ¸O
        case 2748: return "wu";    // ¸P
        case 2750: return "kui";    // ¸Q
        case 2752: return "chuan";    // ¸R
        case 2754: return "ke";    // ¸S
        case 2756: return "kuan";    // ¸T
        case 2758: return "kuan";    // ¸U
        case 2760: return "cheng";    // ¸V
        case 2762: return "cui";    // ¸W
        case 2764: return "liao";    // ¸X
        case 2766: return "zao";    // ¸Y
        case 2768: return "cuan";    // ¸Z
        case 2770: return "qiao";    // ¸[
        case 2772: return "qiong";    // ¸\
        case 2774: return "dou";    // ¸]
        case 2776: return "zao";    // ¸^
        case 2778: return "long";    // ¸_
        case 2780: return "qie";    // ¸`
        case 2782: return "chu";    // ¸a
        case 2784: return "shi";    // ¸b
        case 2786: return "fu";    // ¸c
        case 2788: return "qian";    // ¸d
        case 2790: return "chu";    // ¸e
        case 2792: return "hong";    // ¸f
        case 2794: return "qi";    // ¸g
        case 2796: return "hao";    // ¸h
        case 2798: return "sheng";    // ¸i
        case 2800: return "fen";    // ¸j
        case 2802: return "miao";    // ¸k
        case 2804: return "kou";    // ¸l
        case 2806: return "zhu";    // ¸m
        case 2808: return "ling";    // ¸n
        case 2810: return "neng";    // ¸o
        case 2812: return "bing";    // ¸p
        case 2814: return "bai";    // ¸q
        case 2816: return "si";    // ¸r
        case 2818: return "hong";    // ¸s
        case 2820: return "jing";    // ¸t
        case 2822: return "diao";    // ¸u
        case 2824: return "yi";    // ¸v
        case 2826: return "shu";    // ¸w
        case 2828: return "jing";    // ¸x
        case 2830: return "qu";    // ¸y
        case 2832: return "ping";    // ¸z
        case 2834: return "li";    // ¸{
        case 2836: return "zhuan";    // ¸|
        case 2838: return "ceng";    // ¸}
        case 2840: return "deng";    // ¸~
        case 2842: return "";    // ?
        case 2844: return "cun";    // ¸€
        case 2846: return "wai";    // ¸
        case 2848: return "jing";    // ¸‚
        case 2850: return "kan";    // ¸ƒ
        case 2852: return "jing";    // ¸„
        case 2854: return "le";    // ¸…
        case 2856: return "peng";    // ¸†
        case 2858: return "chi";    // ¸‡
        case 2860: return "mang";    // ¸ˆ
        case 2862: return "du";    // ¸‰
        case 2864: return "wan";    // ¸Š
        case 2866: return "jiao";    // ¸‹
        case 2868: return "suan";    // ¸Œ
        case 2870: return "qin";    // ¸
        case 2872: return "ya";    // ¸Ž
        case 2874: return "zhui";    // ¸
        case 2876: return "yuan";    // ¸
        case 2878: return "hang";    // ¸‘
        case 2880: return "jin";    // ¸’
        case 2882: return "bi";    // ¸“
        case 2884: return "yi";    // ¸”
        case 2886: return "dong";    // ¸•
        case 2888: return "shan";    // ¸–
        case 2890: return "da";    // ¸—
        case 2892: return "zhu";    // ¸˜
        case 2894: return "na";    // ¸™
        case 2896: return "gu";    // ¸š
        case 2898: return "qie";    // ¸›
        case 2900: return "min";    // ¸œ
        case 2902: return "bao";    // ¸
        case 2904: return "shan";    // ¸ž
        case 2906: return "pei";    // ¸Ÿ
        case 2908: return "ling";    // ¸ 
        case 2910: return "nu";    // ¹@
        case 2912: return "fei";    // ¹A
        case 2914: return "fan";    // ¹B
        case 2916: return "gan";    // ¹C
        case 2918: return "fan";    // ¹D
        case 2920: return "shi";    // ¹E
        case 2922: return "mao";    // ¹F
        case 2924: return "xiao";    // ¹G
        case 2926: return "qiong";    // ¹H
        case 2928: return "min";    // ¹I
        case 2930: return "luo";    // ¹J
        case 2932: return "gui";    // ¹K
        case 2934: return "qu";    // ¹L
        case 2936: return "chi";    // ¹M
        case 2938: return "yin";    // ¹N
        case 2940: return "yao";    // ¹O
        case 2942: return "bi";    // ¹P
        case 2944: return "kuo";    // ¹Q
        case 2946: return "jiao";    // ¹R
        case 2948: return "sun";    // ¹S
        case 2950: return "ru";    // ¹T
        case 2952: return "ji";    // ¹U
        case 2954: return "hang";    // ¹V
        case 2956: return "zhong";    // ¹W
        case 2958: return "lai";    // ¹X
        case 2960: return "dang";    // ¹Y
        case 2962: return "ce";    // ¹Z
        case 2964: return "fu";    // ¹[
        case 2966: return "tu";    // ¹\
        case 2968: return "li";    // ¹]
        case 2970: return "lang";    // ¹^
        case 2972: return "ju";    // ¹_
        case 2974: return "guan";    // ¹`
        case 2976: return "jian";    // ¹a
        case 2978: return "han";    // ¹b
        case 2980: return "yong";    // ¹c
        case 2982: return "xia";    // ¹d
        case 2984: return "zhi";    // ¹e
        case 2986: return "cheng";    // ¹f
        case 2988: return "suan";    // ¹g
        case 2990: return "zhu";    // ¹h
        case 2992: return "zuo";    // ¹i
        case 2994: return "ting";    // ¹j
        case 2996: return "jia";    // ¹k
        case 2998: return "gao";    // ¹l
        case 3000: return "gan";    // ¹m
        case 3002: return "kuang";    // ¹n
        case 3004: return "yun";    // ¹o
        case 3006: return "o";    // ¹p
        case 3008: return "xiao";    // ¹q
        case 3010: return "bu";    // ¹r
        case 3012: return "lai";    // ¹s
        case 3014: return "bi";    // ¹t
        case 3016: return "bi";    // ¹u
        case 3018: return "bi";    // ¹v
        case 3020: return "ge";    // ¹w
        case 3022: return "tai";    // ¹x
        case 3024: return "dai";    // ¹y
        case 3026: return "yu";    // ¹z
        case 3028: return "jian";    // ¹{
        case 3030: return "dao";    // ¹|
        case 3032: return "hu";    // ¹}
        case 3034: return "zheng";    // ¹~
        case 3036: return "";    // ?
        case 3038: return "zha";    // ¹€
        case 3040: return "zhou";    // ¹
        case 3042: return "lu";    // ¹‚
        case 3044: return "lin";    // ¹ƒ
        case 3046: return "jun";    // ¹„
        case 3048: return "fu";    // ¹…
        case 3050: return "zha";    // ¹†
        case 3052: return "gu";    // ¹‡
        case 3054: return "qian";    // ¹ˆ
        case 3056: return "jun";    // ¹‰
        case 3058: return "chui";    // ¹Š
        case 3060: return "ce";    // ¹‹
        case 3062: return "zu";    // ¹Œ
        case 3064: return "bo";    // ¹
        case 3066: return "xuan";    // ¹Ž
        case 3068: return "bian";    // ¹
        case 3070: return "sun";    // ¹
        case 3072: return "xian";    // ¹‘
        case 3074: return "ping";    // ¹’
        case 3076: return "xing";    // ¹“
        case 3078: return "hu";    // ¹”
        case 3080: return "yi";    // ¹•
        case 3082: return "yao";    // ¹–
        case 3084: return "chun";    // ¹—
        case 3086: return "lu";    // ¹˜
        case 3088: return "wu";    // ¹™
        case 3090: return "dong";    // ¹š
        case 3092: return "xiao";    // ¹›
        case 3094: return "ji";    // ¹œ
        case 3096: return "jie";    // ¹
        case 3098: return "xing";    // ¹ž
        case 3100: return "mei";    // ¹Ÿ
        case 3102: return "fan";    // ¹ 
        case 3104: return "duan";    // º@
        case 3106: return "feng";    // ºA
        case 3108: return "zhu";    // ºB
        case 3110: return "hong";    // ºC
        case 3112: return "qie";    // ºD
        case 3114: return "qiu";    // ºE
        case 3116: return "miao";    // ºF
        case 3118: return "qian";    // ºG
        case 3120: return "gu";    // ºH
        case 3122: return "shi";    // ºI
        case 3124: return "yun";    // ºJ
        case 3126: return "he";    // ºK
        case 3128: return "tang";    // ºL
        case 3130: return "yue";    // ºM
        case 3132: return "chou";    // ºN
        case 3134: return "na";    // ºO
        case 3136: return "zheng";    // ºP
        case 3138: return "nie";    // ºQ
        case 3140: return "qian";    // ºR
        case 3142: return "xiao";    // ºS
        case 3144: return "gan";    // ºT
        case 3146: return "pang";    // ºU
        case 3148: return "du";    // ºV
        case 3150: return "huo";    // ºW
        case 3152: return "chu";    // ºX
        case 3154: return "shai";    // ºY
        case 3156: return "zhu";    // ºZ
        case 3158: return "qiang";    // º[
        case 3160: return "long";    // º\
        case 3162: return "jian";    // º]
        case 3164: return "bu";    // º^
        case 3166: return "hui";    // º_
        case 3168: return "bi";    // º`
        case 3170: return "di";    // ºa
        case 3172: return "cong";    // ºb
        case 3174: return "yan";    // ºc
        case 3176: return "zan";    // ºd
        case 3178: return "cuan";    // ºe
        case 3180: return "pi";    // ºf
        case 3182: return "biao";    // ºg
        case 3184: return "yu";    // ºh
        case 3186: return "tuan";    // ºi
        case 3188: return "zhai";    // ºj
        case 3190: return "shai";    // ºk
        case 3192: return "guo";    // ºl
        case 3194: return "yi";    // ºm
        case 3196: return "hu";    // ºn
        case 3198: return "chan";    // ºo
        case 3200: return "kou";    // ºp
        case 3202: return "ping";    // ºq
        case 3204: return "zao";    // ºr
        case 3206: return "ji";    // ºs
        case 3208: return "lou";    // ºt
        case 3210: return "ji";    // ºu
        case 3212: return "nian";    // ºv
        case 3214: return "sui";    // ºw
        case 3216: return "cuan";    // ºx
        case 3218: return "diao";    // ºy
        case 3220: return "suo";    // ºz
        case 3222: return "le";    // º{
        case 3224: return "liang";    // º|
        case 3226: return "xiao";    // º}
        case 3228: return "bo";    // º~
        case 3230: return "";    // ?
        case 3232: return "mi";    // º€
        case 3234: return "shai";    // º
        case 3236: return "dang";    // º‚
        case 3238: return "liao";    // ºƒ
        case 3240: return "dan";    // º„
        case 3242: return "fu";    // º…
        case 3244: return "jian";    // º†
        case 3246: return "min";    // º‡
        case 3248: return "kui";    // ºˆ
        case 3250: return "dai";    // º‰
        case 3252: return "jiao";    // ºŠ
        case 3254: return "zhuan";    // º‹
        case 3256: return "lao";    // ºŒ
        case 3258: return "xiao";    // º
        case 3260: return "lu";    // ºŽ
        case 3262: return "shi";    // º
        case 3264: return "zan";    // º
        case 3266: return "qi";    // º‘
        case 3268: return "pai";    // º’
        case 3270: return "qi";    // º“
        case 3272: return "pi";    // º”
        case 3274: return "gan";    // º•
        case 3276: return "ju";    // º–
        case 3278: return "lu";    // º—
        case 3280: return "lu";    // º˜
        case 3282: return "yan";    // º™
        case 3284: return "dang";    // ºš
        case 3286: return "sai";    // º›
        case 3288: return "ke";    // ºœ
        case 3290: return "gou";    // º
        case 3292: return "qian";    // ºž
        case 3294: return "lian";    // ºŸ
        case 3296: return "shi";    // º 
        case 3298: return "lan";    // »@
        case 3300: return "kui";    // »A
        case 3302: return "yu";    // »B
        case 3304: return "yue";    // »C
        case 3306: return "hao";    // »D
        case 3308: return "jian";    // »E
        case 3310: return "tai";    // »F
        case 3312: return "ti";    // »G
        case 3314: return "mi";    // »H
        case 3316: return "chou";    // »I
        case 3318: return "yi";    // »J
        case 3320: return "qi";    // »K
        case 3322: return "teng";    // »L
        case 3324: return "zhuan";    // »M
        case 3326: return "zhou";    // »N
        case 3328: return "ban";    // »O
        case 3330: return "shu";    // »P
        case 3332: return "zhou";    // »Q
        case 3334: return "qian";    // »R
        case 3336: return "zhuo";    // »S
        case 3338: return "teng";    // »T
        case 3340: return "lu";    // »U
        case 3342: return "lu";    // »V
        case 3344: return "jian";    // »W
        case 3346: return "tuo";    // »X
        case 3348: return "ying";    // »Y
        case 3350: return "yu";    // »Z
        case 3352: return "lai";    // »[
        case 3354: return "long";    // »\
        case 3356: return "qie";    // »]
        case 3358: return "lian";    // »^
        case 3360: return "lan";    // »_
        case 3362: return "qian";    // »`
        case 3364: return "yao";    // »a
        case 3366: return "zhong";    // »b
        case 3368: return "ju";    // »c
        case 3370: return "lian";    // »d
        case 3372: return "bian";    // »e
        case 3374: return "duan";    // »f
        case 3376: return "zuan";    // »g
        case 3378: return "li";    // »h
        case 3380: return "shi";    // »i
        case 3382: return "luo";    // »j
        case 3384: return "ying";    // »k
        case 3386: return "yue";    // »l
        case 3388: return "zhuo";    // »m
        case 3390: return "yu";    // »n
        case 3392: return "fan";    // »o
        case 3394: return "shen";    // »p
        case 3396: return "zhe";    // »q
        case 3398: return "shen";    // »r
        case 3400: return "nu";    // »s
        case 3402: return "he";    // »t
        case 3404: return "ni";    // »u
        case 3406: return "cun";    // »v
        case 3408: return "zhang";    // »w
        case 3410: return "qian";    // »x
        case 3412: return "zhai";    // »y
        case 3414: return "bi";    // »z
        case 3416: return "ban";    // »{
        case 3418: return "wu";    // »|
        case 3420: return "chao";    // »}
        case 3422: return "kang";    // »~
        case 3424: return "";    // ?
        case 3426: return "rou";    // »€
        case 3428: return "bi";    // »
        case 3430: return "cui";    // »‚
        case 3432: return "yin";    // »ƒ
        case 3434: return "zhe";    // »„
        case 3436: return "mi";    // »…
        case 3438: return "tai";    // »†
        case 3440: return "hu";    // »‡
        case 3442: return "gan";    // »ˆ
        case 3444: return "ju";    // »‰
        case 3446: return "mo";    // »Š
        case 3448: return "zhou";    // »‹
        case 3450: return "li";    // »Œ
        case 3452: return "su";    // »
        case 3454: return "hong";    // »Ž
        case 3456: return "tong";    // »
        case 3458: return "ce";    // »
        case 3460: return "lin";    // »‘
        case 3462: return "zhuan";    // »’
        case 3464: return "bai";    // »“
        case 3466: return "lao";    // »”
        case 3468: return "er";    // »•
        case 3470: return "qu";    // »–
        case 3472: return "he";    // »—
        case 3474: return "xian";    // »˜
        case 3476: return "fu";    // »™
        case 3478: return "li";    // »š
        case 3480: return "yue";    // »›
        case 3482: return "lu";    // »œ
        case 3484: return "ju";    // »
        case 3486: return "qi";    // »ž
        case 3488: return "bai";    // »Ÿ
        case 3490: return "zhang";    // » 
        case 3492: return "guo";    // ¼@
        case 3494: return "hua";    // ¼A
        case 3496: return "san";    // ¼B
        case 3498: return "tang";    // ¼C
        case 3500: return "bian";    // ¼D
        case 3502: return "mian";    // ¼E
        case 3504: return "zong";    // ¼F
        case 3506: return "jian";    // ¼G
        case 3508: return "li";    // ¼H
        case 3510: return "xie";    // ¼I
        case 3512: return "fu";    // ¼J
        case 3514: return "nuo";    // ¼K
        case 3516: return "bei";    // ¼L
        case 3518: return "gu";    // ¼M
        case 3520: return "xiu";    // ¼N
        case 3522: return "jia";    // ¼O
        case 3524: return "zhuan";    // ¼P
        case 3526: return "tang";    // ¼Q
        case 3528: return "san";    // ¼R
        case 3530: return "fen";    // ¼S
        case 3532: return "jiang";    // ¼T
        case 3534: return "mo";    // ¼U
        case 3536: return "san";    // ¼V
        case 3538: return "san";    // ¼W
        case 3540: return "nuo";    // ¼X
        case 3542: return "xi";    // ¼Y
        case 3544: return "liang";    // ¼Z
        case 3546: return "kuai";    // ¼[
        case 3548: return "bo";    // ¼\
        case 3550: return "huan";    // ¼]
        case 3552: return "shu";    // ¼^
        case 3554: return "ji";    // ¼_
        case 3556: return "han";    // ¼`
        case 3558: return "tuan";    // ¼a
        case 3560: return "nie";    // ¼b
        case 3562: return "li";    // ¼c
        case 3564: return "zuo";    // ¼d
        case 3566: return "di";    // ¼e
        case 3568: return "nie";    // ¼f
        case 3570: return "tiao";    // ¼g
        case 3572: return "lan";    // ¼h
        case 3574: return "si";    // ¼i
        case 3576: return "jiu";    // ¼j
        case 3578: return "gong";    // ¼k
        case 3580: return "zheng";    // ¼l
        case 3582: return "jiu";    // ¼m
        case 3584: return "you";    // ¼n
        case 3586: return "ji";    // ¼o
        case 3588: return "cha";    // ¼p
        case 3590: return "zhou";    // ¼q
        case 3592: return "xun";    // ¼r
        case 3594: return "yue";    // ¼s
        case 3596: return "hong";    // ¼t
        case 3598: return "yu";    // ¼u
        case 3600: return "ge";    // ¼v
        case 3602: return "wan";    // ¼w
        case 3604: return "ren";    // ¼x
        case 3606: return "wen";    // ¼y
        case 3608: return "qiu";    // ¼z
        case 3610: return "na";    // ¼{
        case 3612: return "zi";    // ¼|
        case 3614: return "tou";    // ¼}
        case 3616: return "niu";    // ¼~
        case 3618: return "";    // ?
        case 3620: return "fou";    // ¼€
        case 3622: return "ji";    // ¼
        case 3624: return "shu";    // ¼‚
        case 3626: return "chun";    // ¼ƒ
        case 3628: return "pi";    // ¼„
        case 3630: return "zhen";    // ¼…
        case 3632: return "sha";    // ¼†
        case 3634: return "hong";    // ¼‡
        case 3636: return "zhi";    // ¼ˆ
        case 3638: return "ji";    // ¼‰
        case 3640: return "fen";    // ¼Š
        case 3642: return "yun";    // ¼‹
        case 3644: return "ren";    // ¼Œ
        case 3646: return "dan";    // ¼
        case 3648: return "jin";    // ¼Ž
        case 3650: return "fang";    // ¼
        case 3652: return "zu";    // ¼
        case 3654: return "jiu";    // ¼‘
        case 3656: return "zha";    // ¼’
        case 3658: return "ba";    // ¼“
        case 3660: return "fu";    // ¼”
        case 3662: return "zhi";    // ¼•
        case 3664: return "qi";    // ¼–
        case 3666: return "chou";    // ¼—
        case 3668: return "hong";    // ¼˜
        case 3670: return "za";    // ¼™
        case 3672: return "xi";    // ¼š
        case 3674: return "fu";    // ¼›
        case 3676: return "yi";    // ¼œ
        case 3678: return "shen";    // ¼
        case 3680: return "bo";    // ¼ž
        case 3682: return "zhu";    // ¼Ÿ
        case 3684: return "qu";    // ¼ 
        case 3686: return "ling";    // ½@
        case 3688: return "zhu";    // ½A
        case 3690: return "shao";    // ½B
        case 3692: return "gan";    // ½C
        case 3694: return "yang";    // ½D
        case 3696: return "fei";    // ½E
        case 3698: return "tuo";    // ½F
        case 3700: return "tian";    // ½G
        case 3702: return "dai";    // ½H
        case 3704: return "chu";    // ½I
        case 3706: return "shi";    // ½J
        case 3708: return "zhong";    // ½K
        case 3710: return "xuan";    // ½L
        case 3712: return "zu";    // ½M
        case 3714: return "jiong";    // ½N
        case 3716: return "ban";    // ½O
        case 3718: return "qu";    // ½P
        case 3720: return "mo";    // ½Q
        case 3722: return "shu";    // ½R
        case 3724: return "zui";    // ½S
        case 3726: return "kuang";    // ½T
        case 3728: return "jing";    // ½U
        case 3730: return "ren";    // ½V
        case 3732: return "hang";    // ½W
        case 3734: return "yi";    // ½X
        case 3736: return "jie";    // ½Y
        case 3738: return "zhu";    // ½Z
        case 3740: return "chou";    // ½[
        case 3742: return "gua";    // ½\
        case 3744: return "bai";    // ½]
        case 3746: return "jue";    // ½^
        case 3748: return "kuang";    // ½_
        case 3750: return "hu";    // ½`
        case 3752: return "ci";    // ½a
        case 3754: return "geng";    // ½b
        case 3756: return "geng";    // ½c
        case 3758: return "tao";    // ½d
        case 3760: return "jie";    // ½e
        case 3762: return "ku";    // ½f
        case 3764: return "jiao";    // ½g
        case 3766: return "quan";    // ½h
        case 3768: return "gai";    // ½i
        case 3770: return "luo";    // ½j
        case 3772: return "xuan";    // ½k
        case 3774: return "beng";    // ½l
        case 3776: return "xian";    // ½m
        case 3778: return "fu";    // ½n
        case 3780: return "gei";    // ½o
        case 3782: return "dong";    // ½p
        case 3784: return "rong";    // ½q
        case 3786: return "diao";    // ½r
        case 3788: return "yin";    // ½s
        case 3790: return "lei";    // ½t
        case 3792: return "xie";    // ½u
        case 3794: return "juan";    // ½v
        case 3796: return "gai";    // ½w
        case 3798: return "die";    // ½x
        case 3800: return "tong";    // ½y
        case 3802: return "si";    // ½z
        case 3804: return "jiang";    // ½{
        case 3806: return "xiang";    // ½|
        case 3808: return "gui";    // ½}
        case 3810: return "jue";    // ½~
        case 3812: return "";    // ?
        case 3814: return "jian";    // ½€
        case 3816: return "juan";    // ½
        case 3818: return "zhi";    // ½‚
        case 3820: return "wen";    // ½ƒ
        case 3822: return "zhen";    // ½„
        case 3824: return "lu";    // ½…
        case 3826: return "cheng";    // ½†
        case 3828: return "qiu";    // ½‡
        case 3830: return "shu";    // ½ˆ
        case 3832: return "bang";    // ½‰
        case 3834: return "tong";    // ½Š
        case 3836: return "xiao";    // ½‹
        case 3838: return "huan";    // ½Œ
        case 3840: return "qin";    // ½
        case 3842: return "bing";    // ½Ž
        case 3844: return "xiu";    // ½
        case 3846: return "ti";    // ½
        case 3848: return "tou";    // ½‘
        case 3850: return "xie";    // ½’
        case 3852: return "hong";    // ½“
        case 3854: return "xi";    // ½”
        case 3856: return "fu";    // ½•
        case 3858: return "ting";    // ½–
        case 3860: return "sui";    // ½—
        case 3862: return "dui";    // ½˜
        case 3864: return "kun";    // ½™
        case 3866: return "fu";    // ½š
        case 3868: return "jing";    // ½›
        case 3870: return "hu";    // ½œ
        case 3872: return "zhi";    // ½
        case 3874: return "yan";    // ½ž
        case 3876: return "jiong";    // ½Ÿ
        case 3878: return "feng";    // ½ 
        case 3880: return "ji";    // ¾@
        case 3882: return "xu";    // ¾A
        case 3884: return "ren";    // ¾B
        case 3886: return "zong";    // ¾C
        case 3888: return "chen";    // ¾D
        case 3890: return "duo";    // ¾E
        case 3892: return "li";    // ¾F
        case 3894: return "lu";    // ¾G
        case 3896: return "liang";    // ¾H
        case 3898: return "chou";    // ¾I
        case 3900: return "quan";    // ¾J
        case 3902: return "chao";    // ¾K
        case 3904: return "qi";    // ¾L
        case 3906: return "zhun";    // ¾M
        case 3908: return "qi";    // ¾N
        case 3910: return "wan";    // ¾O
        case 3912: return "qian";    // ¾P
        case 3914: return "xian";    // ¾Q
        case 3916: return "shou";    // ¾R
        case 3918: return "wei";    // ¾S
        case 3920: return "tao";    // ¾T
        case 3922: return "wan";    // ¾U
        case 3924: return "gang";    // ¾V
        case 3926: return "wang";    // ¾W
        case 3928: return "beng";    // ¾X
        case 3930: return "zhui";    // ¾Y
        case 3932: return "cai";    // ¾Z
        case 3934: return "guo";    // ¾[
        case 3936: return "zu";    // ¾\
        case 3938: return "lun";    // ¾]
        case 3940: return "liu";    // ¾^
        case 3942: return "qi";    // ¾_
        case 3944: return "zhan";    // ¾`
        case 3946: return "bi";    // ¾a
        case 3948: return "chao";    // ¾b
        case 3950: return "ling";    // ¾c
        case 3952: return "mian";    // ¾d
        case 3954: return "qi";    // ¾e
        case 3956: return "qie";    // ¾f
        case 3958: return "tan";    // ¾g
        case 3960: return "zong";    // ¾h
        case 3962: return "gun";    // ¾i
        case 3964: return "zou";    // ¾j
        case 3966: return "xi";    // ¾k
        case 3968: return "zi";    // ¾l
        case 3970: return "xing";    // ¾m
        case 3972: return "liang";    // ¾n
        case 3974: return "jin";    // ¾o
        case 3976: return "fei";    // ¾p
        case 3978: return "rui";    // ¾q
        case 3980: return "min";    // ¾r
        case 3982: return "yu";    // ¾s
        case 3984: return "zong";    // ¾t
        case 3986: return "fan";    // ¾u
        case 3988: return "lu";    // ¾v
        case 3990: return "xu";    // ¾w
        case 3992: return "ying";    // ¾x
        case 3994: return "shang";    // ¾y
        case 3996: return "qi";    // ¾z
        case 3998: return "xu";    // ¾{
        case 4000: return "xiang";    // ¾|
        case 4002: return "jian";    // ¾}
        case 4004: return "ke";    // ¾~
        case 4006: return "";    // ?
        case 4008: return "xian";    // ¾€
        case 4010: return "ruan";    // ¾
        case 4012: return "mian";    // ¾‚
        case 4014: return "ji";    // ¾ƒ
        case 4016: return "duan";    // ¾„
        case 4018: return "zhong";    // ¾…
        case 4020: return "di";    // ¾†
        case 4022: return "min";    // ¾‡
        case 4024: return "mao";    // ¾ˆ
        case 4026: return "yuan";    // ¾‰
        case 4028: return "ye";    // ¾Š
        case 4030: return "bao";    // ¾‹
        case 4032: return "si";    // ¾Œ
        case 4034: return "qiu";    // ¾
        case 4036: return "bian";    // ¾Ž
        case 4038: return "huan";    // ¾
        case 4040: return "geng";    // ¾
        case 4042: return "zong";    // ¾‘
        case 4044: return "mian";    // ¾’
        case 4046: return "wei";    // ¾“
        case 4048: return "fu";    // ¾”
        case 4050: return "wei";    // ¾•
        case 4052: return "tou";    // ¾–
        case 4054: return "gou";    // ¾—
        case 4056: return "miao";    // ¾˜
        case 4058: return "xie";    // ¾™
        case 4060: return "lian";    // ¾š
        case 4062: return "zong";    // ¾›
        case 4064: return "bian";    // ¾œ
        case 4066: return "yun";    // ¾
        case 4068: return "yin";    // ¾ž
        case 4070: return "ti";    // ¾Ÿ
        case 4072: return "gua";    // ¾ 
        case 4074: return "zhi";    // ¿@
        case 4076: return "wen";    // ¿A
        case 4078: return "cheng";    // ¿B
        case 4080: return "chan";    // ¿C
        case 4082: return "dai";    // ¿D
        case 4084: return "xia";    // ¿E
        case 4086: return "yuan";    // ¿F
        case 4088: return "zong";    // ¿G
        case 4090: return "xu";    // ¿H
        case 4092: return "sheng";    // ¿I
        case 4094: return "wei";    // ¿J
        case 4096: return "geng";    // ¿K
        case 4098: return "seon";    // ¿L
        case 4100: return "ying";    // ¿M
        case 4102: return "jin";    // ¿N
        case 4104: return "yi";    // ¿O
        case 4106: return "zhui";    // ¿P
        case 4108: return "ni";    // ¿Q
        case 4110: return "bang";    // ¿R
        case 4112: return "gu";    // ¿S
        case 4114: return "pan";    // ¿T
        case 4116: return "zhou";    // ¿U
        case 4118: return "jian";    // ¿V
        case 4120: return "ci";    // ¿W
        case 4122: return "quan";    // ¿X
        case 4124: return "shuan";    // ¿Y
        case 4126: return "wen";    // ¿Z
        case 4128: return "xia";    // ¿[
        case 4130: return "shuai";    // ¿\
        case 4132: return "ji";    // ¿]
        case 4134: return "rong";    // ¿^
        case 4136: return "tao";    // ¿_
        case 4138: return "fu";    // ¿`
        case 4140: return "yun";    // ¿a
        case 4142: return "zhen";    // ¿b
        case 4144: return "gao";    // ¿c
        case 4146: return "ru";    // ¿d
        case 4148: return "hu";    // ¿e
        case 4150: return "zeng";    // ¿f
        case 4152: return "teng";    // ¿g
        case 4154: return "xian";    // ¿h
        case 4156: return "su";    // ¿i
        case 4158: return "zhen";    // ¿j
        case 4160: return "zong";    // ¿k
        case 4162: return "tao";    // ¿l
        case 4164: return "huang";    // ¿m
        case 4166: return "cai";    // ¿n
        case 4168: return "bi";    // ¿o
        case 4170: return "feng";    // ¿p
        case 4172: return "cu";    // ¿q
        case 4174: return "li";    // ¿r
        case 4176: return "suo";    // ¿s
        case 4178: return "yin";    // ¿t
        case 4180: return "xi";    // ¿u
        case 4182: return "zong";    // ¿v
        case 4184: return "lei";    // ¿w
        case 4186: return "juan";    // ¿x
        case 4188: return "qian";    // ¿y
        case 4190: return "man";    // ¿z
        case 4192: return "zhi";    // ¿{
        case 4194: return "lu";    // ¿|
        case 4196: return "mo";    // ¿}
        case 4198: return "piao";    // ¿~
        case 4200: return "";    // ?
        case 4202: return "lian";    // ¿€
        case 4204: return "xuan";    // ¿
        case 4206: return "zong";    // ¿‚
        case 4208: return "ji";    // ¿ƒ
        case 4210: return "xian";    // ¿„
        case 4212: return "cui";    // ¿…
        case 4214: return "lu";    // ¿†
        case 4216: return "beng";    // ¿‡
        case 4218: return "yi";    // ¿ˆ
        case 4220: return "sao";    // ¿‰
        case 4222: return "miu";    // ¿Š
        case 4224: return "qiang";    // ¿‹
        case 4226: return "hun";    // ¿Œ
        case 4228: return "xian";    // ¿
        case 4230: return "ji";    // ¿Ž
        case 4232: return "sha";    // ¿
        case 4234: return "xiu";    // ¿
        case 4236: return "ran";    // ¿‘
        case 4238: return "xuan";    // ¿’
        case 4240: return "sui";    // ¿“
        case 4242: return "jue";    // ¿”
        case 4244: return "zeng";    // ¿•
        case 4246: return "zuo";    // ¿–
        case 4248: return "zhi";    // ¿—
        case 4250: return "shan";    // ¿˜
        case 4252: return "san";    // ¿™
        case 4254: return "lin";    // ¿š
        case 4256: return "yu";    // ¿›
        case 4258: return "fan";    // ¿œ
        case 4260: return "liao";    // ¿
        case 4262: return "chao";    // ¿ž
        case 4264: return "zun";    // ¿Ÿ
        case 4266: return "jian";    // ¿ 
        case 4268: return "rao";    // À@
        case 4270: return "chan";    // ÀA
        case 4272: return "rui";    // ÀB
        case 4274: return "xiu";    // ÀC
        case 4276: return "hui";    // ÀD
        case 4278: return "hua";    // ÀE
        case 4280: return "zuan";    // ÀF
        case 4282: return "xi";    // ÀG
        case 4284: return "qiang";    // ÀH
        case 4286: return "yun";    // ÀI
        case 4288: return "da";    // ÀJ
        case 4290: return "sheng";    // ÀK
        case 4292: return "hui";    // ÀL
        case 4294: return "ji";    // ÀM
        case 4296: return "se";    // ÀN
        case 4298: return "jian";    // ÀO
        case 4300: return "jiang";    // ÀP
        case 4302: return "huan";    // ÀQ
        case 4304: return "qiao";    // ÀR
        case 4306: return "cong";    // ÀS
        case 4308: return "jie";    // ÀT
        case 4310: return "jiao";    // ÀU
        case 4312: return "bi";    // ÀV
        case 4314: return "dan";    // ÀW
        case 4316: return "yi";    // ÀX
        case 4318: return "nong";    // ÀY
        case 4320: return "sui";    // ÀZ
        case 4322: return "yi";    // À[
        case 4324: return "sha";    // À\
        case 4326: return "xu";    // À]
        case 4328: return "ji";    // À^
        case 4330: return "bin";    // À_
        case 4332: return "qian";    // À`
        case 4334: return "lan";    // Àa
        case 4336: return "pu";    // Àb
        case 4338: return "xun";    // Àc
        case 4340: return "qi";    // Àd
        case 4342: return "peng";    // Àe
        case 4344: return "yao";    // Àf
        case 4346: return "mo";    // Àg
        case 4348: return "lei";    // Àh
        case 4350: return "xie";    // Ài
        case 4352: return "zuan";    // Àj
        case 4354: return "kuang";    // Àk
        case 4356: return "you";    // Àl
        case 4358: return "xu";    // Àm
        case 4360: return "lei";    // Àn
        case 4362: return "jian";    // Ào
        case 4364: return "chan";    // Àp
        case 4366: return "jiao";    // Àq
        case 4368: return "lu";    // Àr
        case 4370: return "chan";    // Às
        case 4372: return "ying";    // Àt
        case 4374: return "shan";    // Àu
        case 4376: return "xiang";    // Àv
        case 4378: return "xian";    // Àw
        case 4380: return "zui";    // Àx
        case 4382: return "zuan";    // Ày
        case 4384: return "luo";    // Àz
        case 4386: return "li";    // À{
        case 4388: return "lan";    // À|
        case 4390: return "lei";    // À}
        case 4392: return "lian";    // À~
        case 4394: return "";    // ?
        case 4396: return "hong";    // À€
        case 4398: return "ren";    // À
        case 4400: return "zhu";    // À‚
        case 4402: return "zhen";    // Àƒ
        case 4404: return "die";    // À„
        case 4406: return "xi";    // À…
        case 4408: return "ying";    // À†
        case 4410: return "tao";    // À‡
        case 4412: return "wen";    // Àˆ
        case 4414: return "xian";    // À‰
        case 4416: return "shuai";    // ÀŠ
        case 4418: return "xie";    // À‹
        case 4420: return "fou";    // ÀŒ
        case 4422: return "fou";    // À
        case 4424: return "qi";    // ÀŽ
        case 4426: return "bo";    // À
        case 4428: return "ping";    // À
        case 4430: return "xiang";    // À‘
        case 4432: return "zhao";    // À’
        case 4434: return "gang";    // À“
        case 4436: return "ying";    // À”
        case 4438: return "guan";    // À•
        case 4440: return "zun";    // À–
        case 4442: return "tan";    // À—
        case 4444: return "cang";    // À˜
        case 4446: return "qi";    // À™
        case 4448: return "weng";    // Àš
        case 4450: return "ying";    // À›
        case 4452: return "lei";    // Àœ
        case 4454: return "tan";    // À
        case 4456: return "lu";    // Àž
        case 4458: return "si";    // ÀŸ
        case 4460: return "gang";    // À 
        case 4462: return "ra";    // Á@
        case 4464: return "mi";    // ÁA
        case 4466: return "gu";    // ÁB
        case 4468: return "zhu";    // ÁC
        case 4470: return "ju";    // ÁD
        case 4472: return "mao";    // ÁE
        case 4474: return "min";    // ÁF
        case 4476: return "gua";    // ÁG
        case 4478: return "ti";    // ÁH
        case 4480: return "juan";    // ÁI
        case 4482: return "fu";    // ÁJ
        case 4484: return "shen";    // ÁK
        case 4486: return "gua";    // ÁL
        case 4488: return "zhuo";    // ÁM
        case 4490: return "yu";    // ÁN
        case 4492: return "an";    // ÁO
        case 4494: return "fa";    // ÁP
        case 4496: return "si";    // ÁQ
        case 4498: return "ma";    // ÁR
        case 4500: return "liu";    // ÁS
        case 4502: return "ba";    // ÁT
        case 4504: return "fa";    // ÁU
        case 4506: return "chao";    // ÁV
        case 4508: return "wei";    // ÁW
        case 4510: return "bi";    // ÁX
        case 4512: return "ji";    // ÁY
        case 4514: return "chong";    // ÁZ
        case 4516: return "liu";    // Á[
        case 4518: return "juan";    // Á\
        case 4520: return "mi";    // Á]
        case 4522: return "zhao";    // Á^
        case 4524: return "luo";    // Á_
        case 4526: return "pi";    // Á`
        case 4528: return "ji";    // Áa
        case 4530: return "ji";    // Áb
        case 4532: return "luan";    // Ác
        case 4534: return "mi";    // Ád
        case 4536: return "da";    // Áe
        case 4538: return "yang";    // Áf
        case 4540: return "you";    // Ág
        case 4542: return "you";    // Áh
        case 4544: return "fen";    // Ái
        case 4546: return "ba";    // Áj
        case 4548: return "yang";    // Ák
        case 4550: return "gu";    // Ál
        case 4552: return "you";    // Ám
        case 4554: return "zang";    // Án
        case 4556: return "mei";    // Áo
        case 4558: return "yi";    // Áp
        case 4560: return "zhu";    // Áq
        case 4562: return "yi";    // Ár
        case 4564: return "rong";    // Ás
        case 4566: return "qun";    // Át
        case 4568: return "qiang";    // Áu
        case 4570: return "huan";    // Áv
        case 4572: return "xian";    // Áw
        case 4574: return "yi";    // Áx
        case 4576: return "yang";    // Áy
        case 4578: return "kong";    // Áz
        case 4580: return "qian";    // Á{
        case 4582: return "yu";    // Á|
        case 4584: return "lang";    // Á}
        case 4586: return "yuan";    // Á~
        case 4588: return "";    // ?
        case 4590: return "fan";    // Á€
        case 4592: return "shan";    // Á
        case 4594: return "fen";    // Á‚
        case 4596: return "shan";    // Áƒ
        case 4598: return "lian";    // Á„
        case 4600: return "nou";    // Á…
        case 4602: return "qiang";    // Á†
        case 4604: return "gong";    // Á‡
        case 4606: return "chong";    // Áˆ
        case 4608: return "fen";    // Á‰
        case 4610: return "hong";    // ÁŠ
        case 4612: return "chi";    // Á‹
        case 4614: return "cui";    // ÁŒ
        case 4616: return "fu";    // Á
        case 4618: return "xia";    // ÁŽ
        case 4620: return "ben";    // Á
        case 4622: return "la";    // Á
        case 4624: return "bi";    // Á‘
        case 4626: return "liu";    // Á’
        case 4628: return "zhi";    // Á“
        case 4630: return "yu";    // Á”
        case 4632: return "xi";    // Á•
        case 4634: return "xie";    // Á–
        case 4636: return "xi";    // Á—
        case 4638: return "ke";    // Á˜
        case 4640: return "hui";    // Á™
        case 4642: return "hui";    // Áš
        case 4644: return "xiao";    // Á›
        case 4646: return "sha";    // Áœ
        case 4648: return "hong";    // Á
        case 4650: return "jiang";    // Áž
        case 4652: return "dao";    // ÁŸ
        case 4654: return "sha";    // Á 
        case 4656: return "chi";    // Â@
        case 4658: return "xuan";    // ÂA
        case 4660: return "chi";    // ÂB
        case 4662: return "zong";    // ÂC
        case 4664: return "wan";    // ÂD
        case 4666: return "hui";    // ÂE
        case 4668: return "hou";    // ÂF
        case 4670: return "he";    // ÂG
        case 4672: return "piao";    // ÂH
        case 4674: return "lian";    // ÂI
        case 4676: return "hou";    // ÂJ
        case 4678: return "ao";    // ÂK
        case 4680: return "lin";    // ÂL
        case 4682: return "pen";    // ÂM
        case 4684: return "qiao";    // ÂN
        case 4686: return "ao";    // ÂO
        case 4688: return "hui";    // ÂP
        case 4690: return "xuan";    // ÂQ
        case 4692: return "dao";    // ÂR
        case 4694: return "lao";    // ÂS
        case 4696: return "gou";    // ÂT
        case 4698: return "gou";    // ÂU
        case 4700: return "gou";    // ÂV
        case 4702: return "die";    // ÂW
        case 4704: return "nuo";    // ÂX
        case 4706: return "er";    // ÂY
        case 4708: return "zhuan";    // ÂZ
        case 4710: return "ting";    // Â[
        case 4712: return "pi";    // Â\
        case 4714: return "yi";    // Â]
        case 4716: return "qu";    // Â^
        case 4718: return "jia";    // Â_
        case 4720: return "ju";    // Â`
        case 4722: return "chu";    // Âa
        case 4724: return "lun";    // Âb
        case 4726: return "ji";    // Âc
        case 4728: return "zha";    // Âd
        case 4730: return "lou";    // Âe
        case 4732: return "ji";    // Âf
        case 4734: return "lao";    // Âg
        case 4736: return "huo";    // Âh
        case 4738: return "you";    // Âi
        case 4740: return "huai";    // Âj
        case 4742: return "yi";    // Âk
        case 4744: return "qin";    // Âl
        case 4746: return "ying";    // Âm
        case 4748: return "dan";    // Ân
        case 4750: return "hong";    // Âo
        case 4752: return "zhi";    // Âp
        case 4754: return "pan";    // Âq
        case 4756: return "zhen";    // Âr
        case 4758: return "che";    // Âs
        case 4760: return "zheng";    // Ât
        case 4762: return "you";    // Âu
        case 4764: return "wa";    // Âv
        case 4766: return "tiao";    // Âw
        case 4768: return "er";    // Âx
        case 4770: return "ya";    // Ây
        case 4772: return "tie";    // Âz
        case 4774: return "sei";    // Â{
        case 4776: return "hao";    // Â|
        case 4778: return "sheng";    // Â}
        case 4780: return "lie";    // Â~
        case 4782: return "";    // ?
        case 4784: return "jing";    // Â€
        case 4786: return "bi";    // Â
        case 4788: return "di";    // Â‚
        case 4790: return "guo";    // Âƒ
        case 4792: return "wen";    // Â„
        case 4794: return "xu";    // Â…
        case 4796: return "ping";    // Â†
        case 4798: return "cong";    // Â‡
        case 4800: return "ding";    // Âˆ
        case 4802: return "ni";    // Â‰
        case 4804: return "ting";    // ÂŠ
        case 4806: return "ju";    // Â‹
        case 4808: return "cong";    // ÂŒ
        case 4810: return "kui";    // Â
        case 4812: return "lian";    // ÂŽ
        case 4814: return "lian";    // Â
        case 4816: return "weng";    // Â
        case 4818: return "kui";    // Â‘
        case 4820: return "lian";    // Â’
        case 4822: return "lian";    // Â“
        case 4824: return "cong";    // Â”
        case 4826: return "sheng";    // Â•
        case 4828: return "song";    // Â–
        case 4830: return "ting";    // Â—
        case 4832: return "kui";    // Â˜
        case 4834: return "nie";    // Â™
        case 4836: return "zhi";    // Âš
        case 4838: return "dan";    // Â›
        case 4840: return "ning";    // Âœ
        case 4842: return "qie";    // Â
        case 4844: return "ni";    // Âž
        case 4846: return "ting";    // ÂŸ
        case 4848: return "ting";    // Â 
        case 4850: return "long";    // Ã@
        case 4852: return "zhao";    // ÃA
        case 4854: return "si";    // ÃB
        case 4856: return "su";    // ÃC
        case 4858: return "zhao";    // ÃD
        case 4860: return "yi";    // ÃE
        case 4862: return "qiu";    // ÃF
        case 4864: return "ken";    // ÃG
        case 4866: return "cao";    // ÃH
        case 4868: return "ge";    // ÃI
        case 4870: return "bo";    // ÃJ
        case 4872: return "huan";    // ÃK
        case 4874: return "chi";    // ÃL
        case 4876: return "ren";    // ÃM
        case 4878: return "ru";    // ÃN
        case 4880: return "yuan";    // ÃO
        case 4882: return "cha";    // ÃP
        case 4884: return "han";    // ÃQ
        case 4886: return "ban";    // ÃR
        case 4888: return "pei";    // ÃS
        case 4890: return "pang";    // ÃT
        case 4892: return "you";    // ÃU
        case 4894: return "ran";    // ÃV
        case 4896: return "wen";    // ÃW
        case 4898: return "qi";    // ÃX
        case 4900: return "bi";    // ÃY
        case 4902: return "bi";    // ÃZ
        case 4904: return "xi";    // Ã[
        case 4906: return "ken";    // Ã\
        case 4908: return "die";    // Ã]
        case 4910: return "bi";    // Ã^
        case 4912: return "ba";    // Ã_
        case 4914: return "bo";    // Ã`
        case 4916: return "qu";    // Ãa
        case 4918: return "tian";    // Ãb
        case 4920: return "fei";    // Ãc
        case 4922: return "fei";    // Ãd
        case 4924: return "zhi";    // Ãe
        case 4926: return "ni";    // Ãf
        case 4928: return "peng";    // Ãg
        case 4930: return "zi";    // Ãh
        case 4932: return "fu";    // Ãi
        case 4934: return "xian";    // Ãj
        case 4936: return "mu";    // Ãk
        case 4938: return "qu";    // Ãl
        case 4940: return "ke";    // Ãm
        case 4942: return "chi";    // Ãn
        case 4944: return "yang";    // Ão
        case 4946: return "pang";    // Ãp
        case 4948: return "zhi";    // Ãq
        case 4950: return "xiong";    // Ãr
        case 4952: return "er";    // Ãs
        case 4954: return "heng";    // Ãt
        case 4956: return "zi";    // Ãu
        case 4958: return "gui";    // Ãv
        case 4960: return "zheng";    // Ãw
        case 4962: return "tiao";    // Ãx
        case 4964: return "cui";    // Ãy
        case 4966: return "mei";    // Ãz
        case 4968: return "xie";    // Ã{
        case 4970: return "xian";    // Ã|
        case 4972: return "mai";    // Ã}
        case 4974: return "xie";    // Ã~
        case 4976: return "";    // ?
        case 4978: return "nin";    // Ã€
        case 4980: return "wan";    // Ã
        case 4982: return "wen";    // Ã‚
        case 4984: return "xiu";    // Ãƒ
        case 4986: return "jing";    // Ã„
        case 4988: return "you";    // Ã…
        case 4990: return "heng";    // Ã†
        case 4992: return "lie";    // Ã‡
        case 4994: return "chan";    // Ãˆ
        case 4996: return "ting";    // Ã‰
        case 4998: return "mei";    // ÃŠ
        case 5000: return "chun";    // Ã‹
        case 5002: return "shen";    // ÃŒ
        case 5004: return "jia";    // Ã
        case 5006: return "te";    // ÃŽ
        case 5008: return "juan";    // Ã
        case 5010: return "ji";    // Ã
        case 5012: return "you";    // Ã‘
        case 5014: return "xin";    // Ã’
        case 5016: return "tuo";    // Ã“
        case 5018: return "cheng";    // Ã”
        case 5020: return "tui";    // Ã•
        case 5022: return "dou";    // Ã–
        case 5024: return "nao";    // Ã—
        case 5026: return "pi";    // Ã˜
        case 5028: return "gu";    // Ã™
        case 5030: return "li";    // Ãš
        case 5032: return "zhang";    // Ã›
        case 5034: return "cui";    // Ãœ
        case 5036: return "jie";    // Ã
        case 5038: return "lang";    // Ãž
        case 5040: return "shui";    // ÃŸ
        case 5042: return "biao";    // Ã 
        case 5044: return "lun";    // Ä@
        case 5046: return "pian";    // ÄA
        case 5048: return "lei";    // ÄB
        case 5050: return "quan";    // ÄC
        case 5052: return "hou";    // ÄD
        case 5054: return "dan";    // ÄE
        case 5056: return "nei";    // ÄF
        case 5058: return "nai";    // ÄG
        case 5060: return "dian";    // ÄH
        case 5062: return "shen";    // ÄI
        case 5064: return "zhui";    // ÄJ
        case 5066: return "ju";    // ÄK
        case 5068: return "dong";    // ÄL
        case 5070: return "pi";    // ÄM
        case 5072: return "guo";    // ÄN
        case 5074: return "wo";    // ÄO
        case 5076: return "mei";    // ÄP
        case 5078: return "ni";    // ÄQ
        case 5080: return "dun";    // ÄR
        case 5082: return "chi";    // ÄS
        case 5084: return "luo";    // ÄT
        case 5086: return "ou";    // ÄU
        case 5088: return "di";    // ÄV
        case 5090: return "an";    // ÄW
        case 5092: return "nao";    // ÄX
        case 5094: return "shuan";    // ÄY
        case 5096: return "yun";    // ÄZ
        case 5098: return "zhong";    // Ä[
        case 5100: return "rou";    // Ä\
        case 5102: return "dun";    // Ä]
        case 5104: return "wei";    // Ä^
        case 5106: return "jiao";    // Ä_
        case 5108: return "jia";    // Ä`
        case 5110: return "duan";    // Äa
        case 5112: return "bi";    // Äb
        case 5114: return "chang";    // Äc
        case 5116: return "qian";    // Äd
        case 5118: return "wa";    // Äe
        case 5120: return "shou";    // Äf
        case 5122: return "tang";    // Äg
        case 5124: return "su";    // Äh
        case 5126: return "zhui";    // Äi
        case 5128: return "yi";    // Äj
        case 5130: return "liao";    // Äk
        case 5132: return "ji";    // Äl
        case 5134: return "pi";    // Äm
        case 5136: return "xie";    // Än
        case 5138: return "lu";    // Äo
        case 5140: return "ou";    // Äp
        case 5142: return "chang";    // Äq
        case 5144: return "biao";    // Är
        case 5146: return "guo";    // Äs
        case 5148: return "pang";    // Ät
        case 5150: return "chuai";    // Äu
        case 5152: return "jiang";    // Äv
        case 5154: return "fu";    // Äw
        case 5156: return "zhuan";    // Äx
        case 5158: return "lu";    // Äy
        case 5160: return "jiao";    // Äz
        case 5162: return "ying";    // Ä{
        case 5164: return "lou";    // Ä|
        case 5166: return "xue";    // Ä}
        case 5168: return "cen";    // Ä~
        case 5170: return "";    // ?
        case 5172: return "tong";    // Ä€
        case 5174: return "ni";    // Ä
        case 5176: return "liao";    // Ä‚
        case 5178: return "cui";    // Äƒ
        case 5180: return "gui";    // Ä„
        case 5182: return "xiao";    // Ä…
        case 5184: return "teng";    // Ä†
        case 5186: return "pan";    // Ä‡
        case 5188: return "zhi";    // Äˆ
        case 5190: return "jiao";    // Ä‰
        case 5192: return "wu";    // ÄŠ
        case 5194: return "cui";    // Ä‹
        case 5196: return "yen";    // ÄŒ
        case 5198: return "xiang";    // Ä
        case 5200: return "wei";    // ÄŽ
        case 5202: return "fen";    // Ä
        case 5204: return "zhua";    // Ä
        case 5206: return "dan";    // Ä‘
        case 5208: return "kuai";    // Ä’
        case 5210: return "nong";    // Ä“
        case 5212: return "ju";    // Ä”
        case 5214: return "chu";    // Ä•
        case 5216: return "juan";    // Ä–
        case 5218: return "la";    // Ä—
        case 5220: return "lian";    // Ä˜
        case 5222: return "tun";    // Ä™
        case 5224: return "qi";    // Äš
        case 5226: return "cui";    // Ä›
        case 5228: return "bin";    // Äœ
        case 5230: return "xun";    // Ä
        case 5232: return "nao";    // Äž
        case 5234: return "qu";    // ÄŸ
        case 5236: return "zang";    // Ä 
        case 5238: return "xian";    // Å@
        case 5240: return "biao";    // ÅA
        case 5242: return "xing";    // ÅB
        case 5244: return "kun";    // ÅC
        case 5246: return "la";    // ÅD
        case 5248: return "yan";    // ÅE
        case 5250: return "lu";    // ÅF
        case 5252: return "huo";    // ÅG
        case 5254: return "za";    // ÅH
        case 5256: return "luo";    // ÅI
        case 5258: return "qu";    // ÅJ
        case 5260: return "zang";    // ÅK
        case 5262: return "luan";    // ÅL
        case 5264: return "ni";    // ÅM
        case 5266: return "za";    // ÅN
        case 5268: return "qian";    // ÅO
        case 5270: return "wo";    // ÅP
        case 5272: return "guang";    // ÅQ
        case 5274: return "lin";    // ÅR
        case 5276: return "guang";    // ÅS
        case 5278: return "jiao";    // ÅT
        case 5280: return "ji";    // ÅU
        case 5282: return "gao";    // ÅV
        case 5284: return "xiu";    // ÅW
        case 5286: return "bian";    // ÅX
        case 5288: return "nie";    // ÅY
        case 5290: return "ge";    // ÅZ
        case 5292: return "jian";    // Å[
        case 5294: return "die";    // Å\
        case 5296: return "jin";    // Å]
        case 5298: return "xiu";    // Å^
        case 5300: return "tai";    // Å_
        case 5302: return "xian";    // Å`
        case 5304: return "cha";    // Åa
        case 5306: return "tuo";    // Åb
        case 5308: return "yu";    // Åc
        case 5310: return "xing";    // Åd
        case 5312: return "ju";    // Åe
        case 5314: return "jiu";    // Åf
        case 5316: return "xin";    // Åg
        case 5318: return "she";    // Åh
        case 5320: return "jiu";    // Åi
        case 5322: return "tan";    // Åj
        case 5324: return "shi";    // Åk
        case 5326: return "tan";    // Ål
        case 5328: return "pu";    // Åm
        case 5330: return "pu";    // Ån
        case 5332: return "guan";    // Åo
        case 5334: return "hua";    // Åp
        case 5336: return "tian";    // Åq
        case 5338: return "xia";    // År
        case 5340: return "dao";    // Ås
        case 5342: return "fan";    // Åt
        case 5344: return "pa";    // Åu
        case 5346: return "tai";    // Åv
        case 5348: return "fan";    // Åw
        case 5350: return "fan";    // Åx
        case 5352: return "lu";    // Åy
        case 5354: return "ling";    // Åz
        case 5356: return "xia";    // Å{
        case 5358: return "hong";    // Å|
        case 5360: return "pang";    // Å}
        case 5362: return "kua";    // Å~
        case 5364: return "";    // ?
        case 5366: return "fu";    // Å€
        case 5368: return "zao";    // Å
        case 5370: return "feng";    // Å‚
        case 5372: return "li";    // Åƒ
        case 5374: return "yu";    // Å„
        case 5376: return "lang";    // Å…
        case 5378: return "yu";    // Å†
        case 5380: return "bo";    // Å‡
        case 5382: return "nian";    // Åˆ
        case 5384: return "ju";    // Å‰
        case 5386: return "huang";    // ÅŠ
        case 5388: return "ke";    // Å‹
        case 5390: return "bian";    // ÅŒ
        case 5392: return "mo";    // Å
        case 5394: return "die";    // ÅŽ
        case 5396: return "dou";    // Å
        case 5398: return "bang";    // Å
        case 5400: return "cha";    // Å‘
        case 5402: return "yi";    // Å’
        case 5404: return "cang";    // Å“
        case 5406: return "lou";    // Å”
        case 5408: return "dai";    // Å•
        case 5410: return "xue";    // Å–
        case 5412: return "yao";    // Å—
        case 5414: return "deng";    // Å˜
        case 5416: return "dang";    // Å™
        case 5418: return "qiang";    // Åš
        case 5420: return "lu";    // Å›
        case 5422: return "yi";    // Åœ
        case 5424: return "ji";    // Å
        case 5426: return "jian";    // Åž
        case 5428: return "wo";    // ÅŸ
        case 5430: return "qi";    // Å 
        case 5432: return "lu";    // Æ@
        case 5434: return "lu";    // ÆA
        case 5436: return "chan";    // ÆB
        case 5438: return "shuan";    // ÆC
        case 5440: return "jian";    // ÆD
        case 5442: return "ping";    // ÆE
        case 5444: return "yan";    // ÆF
        case 5446: return "yan";    // ÆG
        case 5448: return "cao";    // ÆH
        case 5450: return "le";    // ÆI
        case 5452: return "ding";    // ÆJ
        case 5454: return "tiao";    // ÆK
        case 5456: return "jiao";    // ÆL
        case 5458: return "peng";    // ÆM
        case 5460: return "yi";    // ÆN
        case 5462: return "cha";    // ÆO
        case 5464: return "mian";    // ÆP
        case 5466: return "gan";    // ÆQ
        case 5468: return "yu";    // ÆR
        case 5470: return "hu";    // ÆS
        case 5472: return "zi";    // ÆT
        case 5474: return "hu";    // ÆU
        case 5476: return "sui";    // ÆV
        case 5478: return "zhi";    // ÆW
        case 5480: return "tun";    // ÆX
        case 5482: return "wei";    // ÆY
        case 5484: return "qi";    // ÆZ
        case 5486: return "wen";    // Æ[
        case 5488: return "ren";    // Æ\
        case 5490: return "fou";    // Æ]
        case 5492: return "xu";    // Æ^
        case 5494: return "hua";    // Æ_
        case 5496: return "jue";    // Æ`
        case 5498: return "ji";    // Æa
        case 5500: return "ao";    // Æb
        case 5502: return "zou";    // Æc
        case 5504: return "mao";    // Æd
        case 5506: return "reng";    // Æe
        case 5508: return "hang";    // Æf
        case 5510: return "yin";    // Æg
        case 5512: return "you";    // Æh
        case 5514: return "yi";    // Æi
        case 5516: return "qie";    // Æj
        case 5518: return "pi";    // Æk
        case 5520: return "di";    // Æl
        case 5522: return "di";    // Æm
        case 5524: return "li";    // Æn
        case 5526: return "yong";    // Æo
        case 5528: return "bei";    // Æp
        case 5530: return "yi";    // Æq
        case 5532: return "zhu";    // Ær
        case 5534: return "ni";    // Æs
        case 5536: return "bo";    // Æt
        case 5538: return "bing";    // Æu
        case 5540: return "xiu";    // Æv
        case 5542: return "yao";    // Æw
        case 5544: return "xian";    // Æx
        case 5546: return "hong";    // Æy
        case 5548: return "zha";    // Æz
        case 5550: return "dong";    // Æ{
        case 5552: return "die";    // Æ|
        case 5554: return "nie";    // Æ}
        case 5556: return "hu";    // Æ~
        case 5558: return "";    // ?
        case 5560: return "mei";    // Æ€
        case 5562: return "sheng";    // Æ
        case 5564: return "gu";    // Æ‚
        case 5566: return "bi";    // Æƒ
        case 5568: return "wei";    // Æ„
        case 5570: return "bo";    // Æ…
        case 5572: return "zi";    // Æ†
        case 5574: return "zhi";    // Æ‡
        case 5576: return "ji";    // Æˆ
        case 5578: return "cong";    // Æ‰
        case 5580: return "yuan";    // ÆŠ
        case 5582: return "xue";    // Æ‹
        case 5584: return "luo";    // ÆŒ
        case 5586: return "li";    // Æ
        case 5588: return "rong";    // ÆŽ
        case 5590: return "zhi";    // Æ
        case 5592: return "chen";    // Æ
        case 5594: return "wei";    // Æ‘
        case 5596: return "hao";    // Æ’
        case 5598: return "zi";    // Æ“
        case 5600: return "lie";    // Æ”
        case 5602: return "wu";    // Æ•
        case 5604: return "duo";    // Æ–
        case 5606: return "gui";    // Æ—
        case 5608: return "ci";    // Æ˜
        case 5610: return "gou";    // Æ™
        case 5612: return "guang";    // Æš
        case 5614: return "niao";    // Æ›
        case 5616: return "yu";    // Æœ
        case 5618: return "zi";    // Æ
        case 5620: return "pei";    // Æž
        case 5622: return "mang";    // ÆŸ
        case 5624: return "zhong";    // Æ 
        case 5626: return "qian";    // Ç@
        case 5628: return "zhu";    // ÇA
        case 5630: return "huan";    // ÇB
        case 5632: return "fu";    // ÇC
        case 5634: return "gai";    // ÇD
        case 5636: return "da";    // ÇE
        case 5638: return "chuan";    // ÇF
        case 5640: return "jing";    // ÇG
        case 5642: return "er";    // ÇH
        case 5644: return "an";    // ÇI
        case 5646: return "qiao";    // ÇJ
        case 5648: return "qi";    // ÇK
        case 5650: return "peng";    // ÇL
        case 5652: return "jin";    // ÇM
        case 5654: return "lao";    // ÇN
        case 5656: return "shu";    // ÇO
        case 5658: return "zhuan";    // ÇP
        case 5660: return "da";    // ÇQ
        case 5662: return "ce";    // ÇR
        case 5664: return "yu";    // ÇS
        case 5666: return "du";    // ÇT
        case 5668: return "wei";    // ÇU
        case 5670: return "li";    // ÇV
        case 5672: return "dou";    // ÇW
        case 5674: return "fu";    // ÇX
        case 5676: return "ren";    // ÇY
        case 5678: return "yin";    // ÇZ
        case 5680: return "bu";    // Ç[
        case 5682: return "yun";    // Ç\
        case 5684: return "sui";    // Ç]
        case 5686: return "cheng";    // Ç^
        case 5688: return "nong";    // Ç_
        case 5690: return "wu";    // Ç`
        case 5692: return "bie";    // Ça
        case 5694: return "xi";    // Çb
        case 5696: return "geng";    // Çc
        case 5698: return "zhu";    // Çd
        case 5700: return "mo";    // Çe
        case 5702: return "zhuan";    // Çf
        case 5704: return "ji";    // Çg
        case 5706: return "tuo";    // Çh
        case 5708: return "qiu";    // Çi
        case 5710: return "suo";    // Çj
        case 5712: return "chen";    // Çk
        case 5714: return "peng";    // Çl
        case 5716: return "meng";    // Çm
        case 5718: return "xing";    // Çn
        case 5720: return "jing";    // Ço
        case 5722: return "che";    // Çp
        case 5724: return "jun";    // Çq
        case 5726: return "yan";    // Çr
        case 5728: return "cuo";    // Çs
        case 5730: return "han";    // Çt
        case 5732: return "cuo";    // Çu
        case 5734: return "jia";    // Çv
        case 5736: return "wang";    // Çw
        case 5738: return "you";    // Çx
        case 5740: return "niu";    // Çy
        case 5742: return "xiao";    // Çz
        case 5744: return "xian";    // Ç{
        case 5746: return "wan";    // Ç|
        case 5748: return "jie";    // Ç}
        case 5750: return "nan";    // Ç~
        case 5752: return "";    // ?
        case 5754: return "mu";    // Ç€
        case 5756: return "tu";    // Ç
        case 5758: return "neus";    // Ç‚
        case 5760: return "mang";    // Çƒ
        case 5762: return "ci";    // Ç„
        case 5764: return "di";    // Ç…
        case 5766: return "qu";    // Ç†
        case 5768: return "dong";    // Ç‡
        case 5770: return "zou";    // Çˆ
        case 5772: return "la";    // Ç‰
        case 5774: return "lu";    // ÇŠ
        case 5776: return "wei";    // Ç‹
        case 5778: return "nie";    // ÇŒ
        case 5780: return "kun";    // Ç
        case 5782: return "pu";    // ÇŽ
        case 5784: return "zi";    // Ç
        case 5786: return "gao";    // Ç
        case 5788: return "guo";    // Ç‘
        case 5790: return "lun";    // Ç’
        case 5792: return "chou";    // Ç“
        case 5794: return "chui";    // Ç”
        case 5796: return "zhan";    // Ç•
        case 5798: return "men";    // Ç–
        case 5800: return "li";    // Ç—
        case 5802: return "bao";    // Ç˜
        case 5804: return "qin";    // Ç™
        case 5806: return "juan";    // Çš
        case 5808: return "qin";    // Ç›
        case 5810: return "di";    // Çœ
        case 5812: return "jie";    // Ç
        case 5814: return "jin";    // Çž
        case 5816: return "qiao";    // ÇŸ
        case 5818: return "tai";    // Ç 
        case 5820: return "geng";    // È@
        case 5822: return "hua";    // ÈA
        case 5824: return "qin";    // ÈB
        case 5826: return "yan";    // ÈC
        case 5828: return "wang";    // ÈD
        case 5830: return "beng";    // ÈE
        case 5832: return "zhou";    // ÈF
        case 5834: return "jian";    // ÈG
        case 5836: return "lin";    // ÈH
        case 5838: return "tan";    // ÈI
        case 5840: return "tian";    // ÈJ
        case 5842: return "dao";    // ÈK
        case 5844: return "hu";    // ÈL
        case 5846: return "he";    // ÈM
        case 5848: return "chun";    // ÈN
        case 5850: return "chang";    // ÈO
        case 5852: return "huan";    // ÈP
        case 5854: return "fei";    // ÈQ
        case 5856: return "lai";    // ÈR
        case 5858: return "sha";    // ÈS
        case 5860: return "yan";    // ÈT
        case 5862: return "yi";    // ÈU
        case 5864: return "tiao";    // ÈV
        case 5866: return "ji";    // ÈW
        case 5868: return "guan";    // ÈX
        case 5870: return "ce";    // ÈY
        case 5872: return "zhen";    // ÈZ
        case 5874: return "tuo";    // È[
        case 5876: return "jiu";    // È\
        case 5878: return "bi";    // È]
        case 5880: return "yi";    // È^
        case 5882: return "meng";    // È_
        case 5884: return "be";    // È`
        case 5886: return "pao";    // Èa
        case 5888: return "ding";    // Èb
        case 5890: return "jiao";    // Èc
        case 5892: return "ke";    // Èd
        case 5894: return "xiang";    // Èe
        case 5896: return "wan";    // Èf
        case 5898: return "yu";    // Èg
        case 5900: return "yu";    // Èh
        case 5902: return "fu";    // Èi
        case 5904: return "lian";    // Èj
        case 5906: return "xuan";    // Èk
        case 5908: return "nan";    // Èl
        case 5910: return "ce";    // Èm
        case 5912: return "wo";    // Èn
        case 5914: return "chun";    // Èo
        case 5916: return "xiao";    // Èp
        case 5918: return "bian";    // Èq
        case 5920: return "mao";    // Èr
        case 5922: return "an";    // Ès
        case 5924: return "ying";    // Èt
        case 5926: return "kuo";    // Èu
        case 5928: return "kuo";    // Èv
        case 5930: return "jiang";    // Èw
        case 5932: return "mian";    // Èx
        case 5934: return "ze";    // Èy
        case 5936: return "zuo";    // Èz
        case 5938: return "ju";    // È{
        case 5940: return "rou";    // È|
        case 5942: return "xi";    // È}
        case 5944: return "ye";    // È~
        case 5946: return "";    // ?
        case 5948: return "an";    // È€
        case 5950: return "qu";    // È
        case 5952: return "jian";    // È‚
        case 5954: return "fu";    // Èƒ
        case 5956: return "lu";    // È„
        case 5958: return "jian";    // È…
        case 5960: return "pen";    // È†
        case 5962: return "hong";    // È‡
        case 5964: return "hong";    // Èˆ
        case 5966: return "hou";    // È‰
        case 5968: return "yan";    // ÈŠ
        case 5970: return "tu";    // È‹
        case 5972: return "zi";    // ÈŒ
        case 5974: return "jing";    // È
        case 5976: return "mi";    // ÈŽ
        case 5978: return "huang";    // È
        case 5980: return "shen";    // È
        case 5982: return "gai";    // È‘
        case 5984: return "zhou";    // È’
        case 5986: return "jian";    // È“
        case 5988: return "wei";    // È”
        case 5990: return "bo";    // È•
        case 5992: return "wei";    // È–
        case 5994: return "ji";    // È—
        case 5996: return "duan";    // È˜
        case 5998: return "yao";    // È™
        case 6000: return "jun";    // Èš
        case 6002: return "quan";    // È›
        case 6004: return "qian";    // Èœ
        case 6006: return "hun";    // È
        case 6008: return "shi";    // Èž
        case 6010: return "lan";    // ÈŸ
        case 6012: return "zong";    // È 
        case 6014: return "yao";    // É@
        case 6016: return "yuan";    // ÉA
        case 6018: return "mei";    // ÉB
        case 6020: return "yun";    // ÉC
        case 6022: return "shu";    // ÉD
        case 6024: return "zhuan";    // ÉE
        case 6026: return "guan";    // ÉF
        case 6028: return "ran";    // ÉG
        case 6030: return "xue";    // ÉH
        case 6032: return "hua";    // ÉI
        case 6034: return "wei";    // ÉJ
        case 6036: return "you";    // ÉK
        case 6038: return "sou";    // ÉL
        case 6040: return "yin";    // ÉM
        case 6042: return "shi";    // ÉN
        case 6044: return "chun";    // ÉO
        case 6046: return "shi";    // ÉP
        case 6048: return "yun";    // ÉQ
        case 6050: return "zhen";    // ÉR
        case 6052: return "na";    // ÉS
        case 6054: return "li";    // ÉT
        case 6056: return "que";    // ÉU
        case 6058: return "yuan";    // ÉV
        case 6060: return "li";    // ÉW
        case 6062: return "ju";    // ÉX
        case 6064: return "xi";    // ÉY
        case 6066: return "chu";    // ÉZ
        case 6068: return "xu";    // É[
        case 6070: return "tu";    // É\
        case 6072: return "liu";    // É]
        case 6074: return "wo";    // É^
        case 6076: return "dian";    // É_
        case 6078: return "qian";    // É`
        case 6080: return "ju";    // Éa
        case 6082: return "po";    // Éb
        case 6084: return "cuo";    // Éc
        case 6086: return "yuan";    // Éd
        case 6088: return "chu";    // Ée
        case 6090: return "yu";    // Éf
        case 6092: return "pan";    // Ég
        case 6094: return "pu";    // Éh
        case 6096: return "na";    // Éi
        case 6098: return "xi";    // Éj
        case 6100: return "fen";    // Ék
        case 6102: return "yun";    // Él
        case 6104: return "ruo";    // Ém
        case 6106: return "cang";    // Én
        case 6108: return "mi";    // Éo
        case 6110: return "sun";    // Ép
        case 6112: return "mi";    // Éq
        case 6114: return "sou";    // Ér
        case 6116: return "liu";    // És
        case 6118: return "xi";    // Ét
        case 6120: return "gu";    // Éu
        case 6122: return "lang";    // Év
        case 6124: return "gai";    // Éw
        case 6126: return "cuo";    // Éx
        case 6128: return "tang";    // Éy
        case 6130: return "luo";    // Éz
        case 6132: return "xuan";    // É{
        case 6134: return "yao";    // É|
        case 6136: return "gui";    // É}
        case 6138: return "zong";    // É~
        case 6140: return "";    // ?
        case 6142: return "gun";    // É€
        case 6144: return "zuo";    // É
        case 6146: return "tiao";    // É‚
        case 6148: return "ce";    // Éƒ
        case 6150: return "pei";    // É„
        case 6152: return "dan";    // É…
        case 6154: return "shen";    // É†
        case 6156: return "lang";    // É‡
        case 6158: return "ling";    // Éˆ
        case 6160: return "you";    // É‰
        case 6162: return "tiao";    // ÉŠ
        case 6164: return "mao";    // É‹
        case 6166: return "tong";    // ÉŒ
        case 6168: return "zhu";    // É
        case 6170: return "an";    // ÉŽ
        case 6172: return "lian";    // É
        case 6174: return "zong";    // É
        case 6176: return "ping";    // É‘
        case 6178: return "ou";    // É’
        case 6180: return "jin";    // É“
        case 6182: return "tuan";    // É”
        case 6184: return "jie";    // É•
        case 6186: return "wei";    // É–
        case 6188: return "tui";    // É—
        case 6190: return "cao";    // É˜
        case 6192: return "yu";    // É™
        case 6194: return "yi";    // Éš
        case 6196: return "ju";    // É›
        case 6198: return "bi";    // Éœ
        case 6200: return "lu";    // É
        case 6202: return "bu";    // Éž
        case 6204: return "zhang";    // ÉŸ
        case 6206: return "lei";    // É 
        case 6208: return "jiang";    // Ê@
        case 6210: return "man";    // ÊA
        case 6212: return "yan";    // ÊB
        case 6214: return "ling";    // ÊC
        case 6216: return "ji";    // ÊD
        case 6218: return "biao";    // ÊE
        case 6220: return "gun";    // ÊF
        case 6222: return "han";    // ÊG
        case 6224: return "di";    // ÊH
        case 6226: return "lu";    // ÊI
        case 6228: return "she";    // ÊJ
        case 6230: return "shang";    // ÊK
        case 6232: return "di";    // ÊL
        case 6234: return "hun";    // ÊM
        case 6236: return "bo";    // ÊN
        case 6238: return "di";    // ÊO
        case 6240: return "cu";    // ÊP
        case 6242: return "shen";    // ÊQ
        case 6244: return "xuan";    // ÊR
        case 6246: return "hu";    // ÊS
        case 6248: return "ao";    // ÊT
        case 6250: return "mi";    // ÊU
        case 6252: return "lou";    // ÊV
        case 6254: return "zhong";    // ÊW
        case 6256: return "bo";    // ÊX
        case 6258: return "jiang";    // ÊY
        case 6260: return "mi";    // ÊZ
        case 6262: return "cong";    // Ê[
        case 6264: return "niao";    // Ê\
        case 6266: return "hui";    // Ê]
        case 6268: return "juan";    // Ê^
        case 6270: return "yin";    // Ê_
        case 6272: return "jian";    // Ê`
        case 6274: return "yin";    // Êa
        case 6276: return "guo";    // Êb
        case 6278: return "chen";    // Êc
        case 6280: return "hu";    // Êd
        case 6282: return "sha";    // Êe
        case 6284: return "kou";    // Êf
        case 6286: return "qian";    // Êg
        case 6288: return "ma";    // Êh
        case 6290: return "zang";    // Êi
        case 6292: return "ze";    // Êj
        case 6294: return "li";    // Êk
        case 6296: return "wei";    // Êl
        case 6298: return "ji";    // Êm
        case 6300: return "tan";    // Ên
        case 6302: return "sheng";    // Êo
        case 6304: return "meng";    // Êp
        case 6306: return "ou";    // Êq
        case 6308: return "chan";    // Êr
        case 6310: return "dian";    // Ês
        case 6312: return "juan";    // Êt
        case 6314: return "lei";    // Êu
        case 6316: return "yu";    // Êv
        case 6318: return "qiao";    // Êw
        case 6320: return "zhu";    // Êx
        case 6322: return "hua";    // Êy
        case 6324: return "jian";    // Êz
        case 6326: return "mai";    // Ê{
        case 6328: return "yun";    // Ê|
        case 6330: return "bao";    // Ê}
        case 6332: return "you";    // Ê~
        case 6334: return "";    // ?
        case 6336: return "lu";    // Ê€
        case 6338: return "yao";    // Ê
        case 6340: return "e";    // Ê‚
        case 6342: return "ti";    // Êƒ
        case 6344: return "fei";    // Ê„
        case 6346: return "jue";    // Ê…
        case 6348: return "fa";    // Ê†
        case 6350: return "ru";    // Ê‡
        case 6352: return "fei";    // Êˆ
        case 6354: return "kuai";    // Ê‰
        case 6356: return "shun";    // ÊŠ
        case 6358: return "ya";    // Ê‹
        case 6360: return "xu";    // ÊŒ
        case 6362: return "fu";    // Ê
        case 6364: return "dang";    // ÊŽ
        case 6366: return "wu";    // Ê
        case 6368: return "dong";    // Ê
        case 6370: return "si";    // Ê‘
        case 6372: return "xiao";    // Ê’
        case 6374: return "xi";    // Ê“
        case 6376: return "long";    // Ê”
        case 6378: return "wen";    // Ê•
        case 6380: return "shao";    // Ê–
        case 6382: return "jian";    // Ê—
        case 6384: return "sun";    // Ê˜
        case 6386: return "ling";    // Ê™
        case 6388: return "yu";    // Êš
        case 6390: return "xia";    // Ê›
        case 6392: return "si";    // Êœ
        case 6394: return "nong";    // Ê
        case 6396: return "xuan";    // Êž
        case 6398: return "wen";    // ÊŸ
        case 6400: return "yu";    // Ê 
        case 6402: return "xi";    // Ë@
        case 6404: return "hao";    // ËA
        case 6406: return "ai";    // ËB
        case 6408: return "hui";    // ËC
        case 6410: return "hui";    // ËD
        case 6412: return "ji";    // ËE
        case 6414: return "zi";    // ËF
        case 6416: return "xiang";    // ËG
        case 6418: return "wan";    // ËH
        case 6420: return "mie";    // ËI
        case 6422: return "leng";    // ËJ
        case 6424: return "jiang";    // ËK
        case 6426: return "can";    // ËL
        case 6428: return "shen";    // ËM
        case 6430: return "qiang";    // ËN
        case 6432: return "lian";    // ËO
        case 6434: return "ke";    // ËP
        case 6436: return "yuan";    // ËQ
        case 6438: return "da";    // ËR
        case 6440: return "ti";    // ËS
        case 6442: return "tang";    // ËT
        case 6444: return "zhan";    // ËU
        case 6446: return "sun";    // ËV
        case 6448: return "lian";    // ËW
        case 6450: return "fan";    // ËX
        case 6452: return "ding";    // ËY
        case 6454: return "xie";    // ËZ
        case 6456: return "gu";    // Ë[
        case 6458: return "zhu";    // Ë\
        case 6460: return "jian";    // Ë]
        case 6462: return "kao";    // Ë^
        case 6464: return "sa";    // Ë_
        case 6466: return "xun";    // Ë`
        case 6468: return "yao";    // Ëa
        case 6470: return "bai";    // Ëb
        case 6472: return "dui";    // Ëc
        case 6474: return "pin";    // Ëd
        case 6476: return "wei";    // Ëe
        case 6478: return "ning";    // Ëf
        case 6480: return "zhou";    // Ëg
        case 6482: return "wo";    // Ëh
        case 6484: return "piao";    // Ëi
        case 6486: return "qi";    // Ëj
        case 6488: return "zao";    // Ëk
        case 6490: return "chen";    // Ël
        case 6492: return "zhen";    // Ëm
        case 6494: return "er";    // Ën
        case 6496: return "ni";    // Ëo
        case 6498: return "ying";    // Ëp
        case 6500: return "cong";    // Ëq
        case 6502: return "hao";    // Ër
        case 6504: return "qi";    // Ës
        case 6506: return "fa";    // Ët
        case 6508: return "jian";    // Ëu
        case 6510: return "yu";    // Ëv
        case 6512: return "kui";    // Ëw
        case 6514: return "bian";    // Ëx
        case 6516: return "di";    // Ëy
        case 6518: return "mi";    // Ëz
        case 6520: return "lan";    // Ë{
        case 6522: return "jin";    // Ë|
        case 6524: return "qiong";    // Ë}
        case 6526: return "qie";    // Ë~
        case 6528: return "";    // ?
        case 6530: return "liao";    // Ë€
        case 6532: return "qian";    // Ë
        case 6534: return "su";    // Ë‚
        case 6536: return "lu";    // Ëƒ
        case 6538: return "yi";    // Ë„
        case 6540: return "xu";    // Ë…
        case 6542: return "xie";    // Ë†
        case 6544: return "yi";    // Ë‡
        case 6546: return "la";    // Ëˆ
        case 6548: return "lei";    // Ë‰
        case 6550: return "jiao";    // ËŠ
        case 6552: return "di";    // Ë‹
        case 6554: return "zhi";    // ËŒ
        case 6556: return "bei";    // Ë
        case 6558: return "yao";    // ËŽ
        case 6560: return "mo";    // Ë
        case 6562: return "huan";    // Ë
        case 6564: return "biao";    // Ë‘
        case 6566: return "sou";    // Ë’
        case 6568: return "tan";    // Ë“
        case 6570: return "tui";    // Ë”
        case 6572: return "qiong";    // Ë•
        case 6574: return "qiao";    // Ë–
        case 6576: return "wei";    // Ë—
        case 6578: return "liu";    // Ë˜
        case 6580: return "hui";    // Ë™
        case 6582: return "ou";    // Ëš
        case 6584: return "gao";    // Ë›
        case 6586: return "wen";    // Ëœ
        case 6588: return "bao";    // Ë
        case 6590: return "li";    // Ëž
        case 6592: return "zhu";    // ËŸ
        case 6594: return "zha";    // Ë 
        case 6596: return "ai";    // Ì@
        case 6598: return "lin";    // ÌA
        case 6600: return "xuan";    // ÌB
        case 6602: return "qin";    // ÌC
        case 6604: return "lai";    // ÌD
        case 6606: return "tuo";    // ÌE
        case 6608: return "e";    // ÌF
        case 6610: return "rui";    // ÌG
        case 6612: return "rui";    // ÌH
        case 6614: return "qi";    // ÌI
        case 6616: return "lu";    // ÌJ
        case 6618: return "su";    // ÌK
        case 6620: return "tui";    // ÌL
        case 6622: return "mang";    // ÌM
        case 6624: return "yun";    // ÌN
        case 6626: return "pin";    // ÌO
        case 6628: return "yu";    // ÌP
        case 6630: return "xun";    // ÌQ
        case 6632: return "ji";    // ÌR
        case 6634: return "jiong";    // ÌS
        case 6636: return "xuan";    // ÌT
        case 6638: return "qiu";    // ÌU
        case 6640: return "su";    // ÌV
        case 6642: return "jiong";    // ÌW
        case 6644: return "feng";    // ÌX
        case 6646: return "bo";    // ÌY
        case 6648: return "xiang";    // ÌZ
        case 6650: return "yi";    // Ì[
        case 6652: return "xian";    // Ì\
        case 6654: return "yu";    // Ì]
        case 6656: return "ju";    // Ì^
        case 6658: return "lian";    // Ì_
        case 6660: return "lian";    // Ì`
        case 6662: return "yin";    // Ìa
        case 6664: return "qiang";    // Ìb
        case 6666: return "ying";    // Ìc
        case 6668: return "long";    // Ìd
        case 6670: return "tou";    // Ìe
        case 6672: return "hua";    // Ìf
        case 6674: return "yue";    // Ìg
        case 6676: return "ling";    // Ìh
        case 6678: return "yao";    // Ìi
        case 6680: return "mei";    // Ìj
        case 6682: return "lan";    // Ìk
        case 6684: return "kui";    // Ìl
        case 6686: return "lan";    // Ìm
        case 6688: return "ji";    // Ìn
        case 6690: return "dang";    // Ìo
        case 6692: return "man";    // Ìp
        case 6694: return "lei";    // Ìq
        case 6696: return "lei";    // Ìr
        case 6698: return "hua";    // Ìs
        case 6700: return "feng";    // Ìt
        case 6702: return "zhi";    // Ìu
        case 6704: return "wei";    // Ìv
        case 6706: return "kui";    // Ìw
        case 6708: return "huai";    // Ìx
        case 6710: return "li";    // Ìy
        case 6712: return "ji";    // Ìz
        case 6714: return "lei";    // Ì{
        case 6716: return "huai";    // Ì|
        case 6718: return "luo";    // Ì}
        case 6720: return "ji";    // Ì~
        case 6722: return "";    // ?
        case 6724: return "kui";    // Ì€
        case 6726: return "lu";    // Ì
        case 6728: return "jian";    // Ì‚
        case 6730: return "sal";    // Ìƒ
        case 6732: return "teng";    // Ì„
        case 6734: return "lei";    // Ì…
        case 6736: return "quan";    // Ì†
        case 6738: return "xiao";    // Ì‡
        case 6740: return "yi";    // Ìˆ
        case 6742: return "luan";    // Ì‰
        case 6744: return "men";    // ÌŠ
        case 6746: return "bie";    // Ì‹
        case 6748: return "ti";    // ÌŒ
        case 6750: return "xiao";    // Ì
        case 6752: return "chu";    // ÌŽ
        case 6754: return "hu";    // Ì
        case 6756: return "xu";    // Ì
        case 6758: return "cuo";    // Ì‘
        case 6760: return "fu";    // Ì’
        case 6762: return "xu";    // Ì“
        case 6764: return "lu";    // Ì”
        case 6766: return "hu";    // Ì•
        case 6768: return "hao";    // Ì–
        case 6770: return "hao";    // Ì—
        case 6772: return "ju";    // Ì˜
        case 6774: return "bao";    // Ì™
        case 6776: return "yan";    // Ìš
        case 6778: return "zhan";    // Ì›
        case 6780: return "zhan";    // Ìœ
        case 6782: return "kui";    // Ì
        case 6784: return "bin";    // Ìž
        case 6786: return "xi";    // ÌŸ
        case 6788: return "shu";    // Ì 
        case 6790: return "dao";    // Í@
        case 6792: return "qiu";    // ÍA
        case 6794: return "ding";    // ÍB
        case 6796: return "xia";    // ÍC
        case 6798: return "jue";    // ÍD
        case 6800: return "zhe";    // ÍE
        case 6802: return "ye";    // ÍF
        case 6804: return "yu";    // ÍG
        case 6806: return "gan";    // ÍH
        case 6808: return "zi";    // ÍI
        case 6810: return "xiang";    // ÍJ
        case 6812: return "bang";    // ÍK
        case 6814: return "e";    // ÍL
        case 6816: return "ba";    // ÍM
        case 6818: return "chi";    // ÍN
        case 6820: return "qian";    // ÍO
        case 6822: return "wen";    // ÍP
        case 6824: return "yue";    // ÍQ
        case 6826: return "yue";    // ÍR
        case 6828: return "jun";    // ÍS
        case 6830: return "qi";    // ÍT
        case 6832: return "tong";    // ÍU
        case 6834: return "qi";    // ÍV
        case 6836: return "wan";    // ÍW
        case 6838: return "jue";    // ÍX
        case 6840: return "you";    // ÍY
        case 6842: return "qian";    // ÍZ
        case 6844: return "qi";    // Í[
        case 6846: return "zhong";    // Í\
        case 6848: return "mu";    // Í]
        case 6850: return "wang";    // Í^
        case 6852: return "fen";    // Í_
        case 6854: return "fen";    // Í`
        case 6856: return "hang";    // Ía
        case 6858: return "fu";    // Íb
        case 6860: return "ran";    // Íc
        case 6862: return "bao";    // Íd
        case 6864: return "ni";    // Íe
        case 6866: return "dai";    // Íf
        case 6868: return "ping";    // Íg
        case 6870: return "chi";    // Íh
        case 6872: return "ju";    // Íi
        case 6874: return "li";    // Íj
        case 6876: return "fu";    // Ík
        case 6878: return "zha";    // Íl
        case 6880: return "gou";    // Ím
        case 6882: return "pi";    // Ín
        case 6884: return "bo";    // Ío
        case 6886: return "xian";    // Íp
        case 6888: return "diao";    // Íq
        case 6890: return "bie";    // Ír
        case 6892: return "bing";    // Ís
        case 6894: return "zhan";    // Ít
        case 6896: return "tie";    // Íu
        case 6898: return "gu";    // Ív
        case 6900: return "ying";    // Íw
        case 6902: return "luo";    // Íx
        case 6904: return "ci";    // Íy
        case 6906: return "hui";    // Íz
        case 6908: return "bang";    // Í{
        case 6910: return "fu";    // Í|
        case 6912: return "lie";    // Í}
        case 6914: return "yi";    // Í~
        case 6916: return "";    // ?
        case 6918: return "xian";    // Í€
        case 6920: return "li";    // Í
        case 6922: return "yi";    // Í‚
        case 6924: return "ping";    // Íƒ
        case 6926: return "jie";    // Í„
        case 6928: return "she";    // Í…
        case 6930: return "yi";    // Í†
        case 6932: return "wang";    // Í‡
        case 6934: return "mo";    // Íˆ
        case 6936: return "ni";    // Í‰
        case 6938: return "gui";    // ÍŠ
        case 6940: return "qiong";    // Í‹
        case 6942: return "lao";    // ÍŒ
        case 6944: return "xing";    // Í
        case 6946: return "jie";    // ÍŽ
        case 6948: return "qiu";    // Í
        case 6950: return "jia";    // Í
        case 6952: return "tui";    // Í‘
        case 6954: return "che";    // Í’
        case 6956: return "bei";    // Í“
        case 6958: return "han";    // Í”
        case 6960: return "xuan";    // Í•
        case 6962: return "zhen";    // Í–
        case 6964: return "pu";    // Í—
        case 6966: return "xian";    // Í˜
        case 6968: return "lang";    // Í™
        case 6970: return "bi";    // Íš
        case 6972: return "yuan";    // Í›
        case 6974: return "you";    // Íœ
        case 6976: return "jie";    // Í
        case 6978: return "dan";    // Íž
        case 6980: return "dian";    // ÍŸ
        case 6982: return "hui";    // Í 
        case 6984: return "song";    // Î@
        case 6986: return "ju";    // ÎA
        case 6988: return "qi";    // ÎB
        case 6990: return "yu";    // ÎC
        case 6992: return "jun";    // ÎD
        case 6994: return "xi";    // ÎE
        case 6996: return "lun";    // ÎF
        case 6998: return "li";    // ÎG
        case 7000: return "die";    // ÎH
        case 7002: return "tao";    // ÎI
        case 7004: return "kun";    // ÎJ
        case 7006: return "han";    // ÎK
        case 7008: return "han";    // ÎL
        case 7010: return "bang";    // ÎM
        case 7012: return "fei";    // ÎN
        case 7014: return "wei";    // ÎO
        case 7016: return "dun";    // ÎP
        case 7018: return "yuan";    // ÎQ
        case 7020: return "suo";    // ÎR
        case 7022: return "qian";    // ÎS
        case 7024: return "wei";    // ÎT
        case 7026: return "ni";    // ÎU
        case 7028: return "wei";    // ÎV
        case 7030: return "liang";    // ÎW
        case 7032: return "dong";    // ÎX
        case 7034: return "e";    // ÎY
        case 7036: return "ban";    // ÎZ
        case 7038: return "di";    // Î[
        case 7040: return "wang";    // Î\
        case 7042: return "can";    // Î]
        case 7044: return "mi";    // Î^
        case 7046: return "ding";    // Î_
        case 7048: return "la";    // Î`
        case 7050: return "ji";    // Îa
        case 7052: return "ting";    // Îb
        case 7054: return "mao";    // Îc
        case 7056: return "xie";    // Îd
        case 7058: return "mian";    // Îe
        case 7060: return "jie";    // Îf
        case 7062: return "shi";    // Îg
        case 7064: return "xuan";    // Îh
        case 7066: return "yan";    // Îi
        case 7068: return "nao";    // Îj
        case 7070: return "wei";    // Îk
        case 7072: return "fu";    // Îl
        case 7074: return "yuan";    // Îm
        case 7076: return "mei";    // În
        case 7078: return "wei";    // Îo
        case 7080: return "ruan";    // Îp
        case 7082: return "xie";    // Îq
        case 7084: return "xia";    // Îr
        case 7086: return "ying";    // Îs
        case 7088: return "shi";    // Ît
        case 7090: return "zhong";    // Îu
        case 7092: return "tang";    // Îv
        case 7094: return "zhu";    // Îw
        case 7096: return "zong";    // Îx
        case 7098: return "ti";    // Îy
        case 7100: return "yuan";    // Îz
        case 7102: return "meng";    // Î{
        case 7104: return "la";    // Î|
        case 7106: return "dai";    // Î}
        case 7108: return "qiu";    // Î~
        case 7110: return "";    // ?
        case 7112: return "li";    // Î€
        case 7114: return "wo";    // Î
        case 7116: return "ao";    // Î‚
        case 7118: return "yu";    // Îƒ
        case 7120: return "ying";    // Î„
        case 7122: return "jiang";    // Î…
        case 7124: return "ban";    // Î†
        case 7126: return "si";    // Î‡
        case 7128: return "ci";    // Îˆ
        case 7130: return "qi";    // Î‰
        case 7132: return "weng";    // ÎŠ
        case 7134: return "lian";    // Î‹
        case 7136: return "ban";    // ÎŒ
        case 7138: return "rong";    // Î
        case 7140: return "ji";    // ÎŽ
        case 7142: return "wu";    // Î
        case 7144: return "xiu";    // Î
        case 7146: return "han";    // Î‘
        case 7148: return "yi";    // Î’
        case 7150: return "bi";    // Î“
        case 7152: return "hua";    // Î”
        case 7154: return "yi";    // Î•
        case 7156: return "du";    // Î–
        case 7158: return "nai";    // Î—
        case 7160: return "he";    // Î˜
        case 7162: return "hu";    // Î™
        case 7164: return "gui";    // Îš
        case 7166: return "ma";    // Î›
        case 7168: return "yi";    // Îœ
        case 7170: return "wen";    // Î
        case 7172: return "ying";    // Îž
        case 7174: return "te";    // ÎŸ
        case 7176: return "zhong";    // Î 
        case 7178: return "cang";    // Ï@
        case 7180: return "so";    // ÏA
        case 7182: return "qi";    // ÏB
        case 7184: return "tiao";    // ÏC
        case 7186: return "shang";    // ÏD
        case 7188: return "dai";    // ÏE
        case 7190: return "lu";    // ÏF
        case 7192: return "wei";    // ÏG
        case 7194: return "die";    // ÏH
        case 7196: return "chen";    // ÏI
        case 7198: return "ju";    // ÏJ
        case 7200: return "pi";    // ÏK
        case 7202: return "yu";    // ÏL
        case 7204: return "jian";    // ÏM
        case 7206: return "lou";    // ÏN
        case 7208: return "qin";    // ÏO
        case 7210: return "yin";    // ÏP
        case 7212: return "jiang";    // ÏQ
        case 7214: return "wen";    // ÏR
        case 7216: return "xiao";    // ÏS
        case 7218: return "man";    // ÏT
        case 7220: return "zhe";    // ÏU
        case 7222: return "zhe";    // ÏV
        case 7224: return "ma";    // ÏW
        case 7226: return "yu";    // ÏX
        case 7228: return "liao";    // ÏY
        case 7230: return "cong";    // ÏZ
        case 7232: return "li";    // Ï[
        case 7234: return "man";    // Ï\
        case 7236: return "xiao";    // Ï]
        case 7238: return "chang";    // Ï^
        case 7240: return "mo";    // Ï_
        case 7242: return "zui";    // Ï`
        case 7244: return "si";    // Ïa
        case 7246: return "qiu";    // Ïb
        case 7248: return "te";    // Ïc
        case 7250: return "zhi";    // Ïd
        case 7252: return "peng";    // Ïe
        case 7254: return "jiao";    // Ïf
        case 7256: return "qu";    // Ïg
        case 7258: return "bie";    // Ïh
        case 7260: return "liao";    // Ïi
        case 7262: return "gui";    // Ïj
        case 7264: return "xi";    // Ïk
        case 7266: return "ji";    // Ïl
        case 7268: return "zhuan";    // Ïm
        case 7270: return "fei";    // Ïn
        case 7272: return "lao";    // Ïo
        case 7274: return "jue";    // Ïp
        case 7276: return "jue";    // Ïq
        case 7278: return "yin";    // Ïr
        case 7280: return "chan";    // Ïs
        case 7282: return "jiao";    // Ït
        case 7284: return "nao";    // Ïu
        case 7286: return "xiao";    // Ïv
        case 7288: return "wu";    // Ïw
        case 7290: return "chong";    // Ïx
        case 7292: return "xun";    // Ïy
        case 7294: return "si";    // Ïz
        case 7296: return "chu";    // Ï{
        case 7298: return "cheng";    // Ï|
        case 7300: return "dang";    // Ï}
        case 7302: return "li";    // Ï~
        case 7304: return "";    // ?
        case 7306: return "dan";    // Ï€
        case 7308: return "yi";    // Ï
        case 7310: return "jing";    // Ï‚
        case 7312: return "da";    // Ïƒ
        case 7314: return "ji";    // Ï„
        case 7316: return "ji";    // Ï…
        case 7318: return "xiang";    // Ï†
        case 7320: return "she";    // Ï‡
        case 7322: return "qin";    // Ïˆ
        case 7324: return "ying";    // Ï‰
        case 7326: return "chai";    // ÏŠ
        case 7328: return "li";    // Ï‹
        case 7330: return "zei";    // ÏŒ
        case 7332: return "xuan";    // Ï
        case 7334: return "zhu";    // ÏŽ
        case 7336: return "ze";    // Ï
        case 7338: return "xie";    // Ï
        case 7340: return "mang";    // Ï‘
        case 7342: return "xie";    // Ï’
        case 7344: return "qi";    // Ï“
        case 7346: return "rong";    // Ï”
        case 7348: return "jian";    // Ï•
        case 7350: return "hao";    // Ï–
        case 7352: return "zhuo";    // Ï—
        case 7354: return "jie";    // Ï˜
        case 7356: return "bin";    // Ï™
        case 7358: return "he";    // Ïš
        case 7360: return "fan";    // Ï›
        case 7362: return "lei";    // Ïœ
        case 7364: return "jie";    // Ï
        case 7366: return "la";    // Ïž
        case 7368: return "mian";    // ÏŸ
        case 7370: return "li";    // Ï 
        case 7372: return "qiu";    // Ð@
        case 7374: return "nie";    // ÐA
        case 7376: return "lu";    // ÐB
        case 7378: return "du";    // ÐC
        case 7380: return "xiao";    // ÐD
        case 7382: return "zhu";    // ÐE
        case 7384: return "long";    // ÐF
        case 7386: return "li";    // ÐG
        case 7388: return "long";    // ÐH
        case 7390: return "pang";    // ÐI
        case 7392: return "ye";    // ÐJ
        case 7394: return "pi";    // ÐK
        case 7396: return "nang";    // ÐL
        case 7398: return "ye";    // ÐM
        case 7400: return "ying";    // ÐN
        case 7402: return "shu";    // ÐO
        case 7404: return "xi";    // ÐP
        case 7406: return "can";    // ÐQ
        case 7408: return "qu";    // ÐR
        case 7410: return "huan";    // ÐS
        case 7412: return "can";    // ÐT
        case 7414: return "man";    // ÐU
        case 7416: return "jie";    // ÐV
        case 7418: return "zhu";    // ÐW
        case 7420: return "zhuo";    // ÐX
        case 7422: return "huang";    // ÐY
        case 7424: return "nu";    // ÐZ
        case 7426: return "pei";    // Ð[
        case 7428: return "zhong";    // Ð\
        case 7430: return "mai";    // Ð]
        case 7432: return "er";    // Ð^
        case 7434: return "ka";    // Ð_
        case 7436: return "mie";    // Ð`
        case 7438: return "xi";    // Ða
        case 7440: return "kan";    // Ðb
        case 7442: return "yuan";    // Ðc
        case 7444: return "qu";    // Ðd
        case 7446: return "ling";    // Ðe
        case 7448: return "xuan";    // Ðf
        case 7450: return "shu";    // Ðg
        case 7452: return "dong";    // Ðh
        case 7454: return "long";    // Ði
        case 7456: return "yu";    // Ðj
        case 7458: return "hu";    // Ðk
        case 7460: return "wei";    // Ðl
        case 7462: return "dao";    // Ðm
        case 7464: return "chong";    // Ðn
        case 7466: return "wei";    // Ðo
        case 7468: return "dao";    // Ðp
        case 7470: return "zhun";    // Ðq
        case 7472: return "gan";    // Ðr
        case 7474: return "yu";    // Ðs
        case 7476: return "yi";    // Ðt
        case 7478: return "fu";    // Ðu
        case 7480: return "pen";    // Ðv
        case 7482: return "jie";    // Ðw
        case 7484: return "zhong";    // Ðx
        case 7486: return "dan";    // Ðy
        case 7488: return "yi";    // Ðz
        case 7490: return "zhong";    // Ð{
        case 7492: return "jie";    // Ð|
        case 7494: return "ti";    // Ð}
        case 7496: return "xie";    // Ð~
        case 7498: return "";    // ?
        case 7500: return "ran";    // Ð€
        case 7502: return "zhi";    // Ð
        case 7504: return "jun";    // Ð‚
        case 7506: return "chai";    // Ðƒ
        case 7508: return "yi";    // Ð„
        case 7510: return "ran";    // Ð…
        case 7512: return "tuo";    // Ð†
        case 7514: return "ling";    // Ð‡
        case 7516: return "bao";    // Ðˆ
        case 7518: return "yao";    // Ð‰
        case 7520: return "zuo";    // ÐŠ
        case 7522: return "bi";    // Ð‹
        case 7524: return "shao";    // ÐŒ
        case 7526: return "jie";    // Ð
        case 7528: return "ke";    // ÐŽ
        case 7530: return "xue";    // Ð
        case 7532: return "zhen";    // Ð
        case 7534: return "yi";    // Ð‘
        case 7536: return "pa";    // Ð’
        case 7538: return "bo";    // Ð“
        case 7540: return "di";    // Ð”
        case 7542: return "fu";    // Ð•
        case 7544: return "gun";    // Ð–
        case 7546: return "zhi";    // Ð—
        case 7548: return "zhi";    // Ð˜
        case 7550: return "ran";    // Ð™
        case 7552: return "yi";    // Ðš
        case 7554: return "tuo";    // Ð›
        case 7556: return "na";    // Ðœ
        case 7558: return "gou";    // Ð
        case 7560: return "xuan";    // Ðž
        case 7562: return "zhe";    // ÐŸ
        case 7564: return "qu";    // Ð 
        case 7566: return "yu";    // Ñ@
        case 7568: return "mi";    // ÑA
        case 7570: return "bo";    // ÑB
        case 7572: return "bo";    // ÑC
        case 7574: return "nuo";    // ÑD
        case 7576: return "qi";    // ÑE
        case 7578: return "ku";    // ÑF
        case 7580: return "ren";    // ÑG
        case 7582: return "jiang";    // ÑH
        case 7584: return "jian";    // ÑI
        case 7586: return "bo";    // ÑJ
        case 7588: return "jie";    // ÑK
        case 7590: return "er";    // ÑL
        case 7592: return "ru";    // ÑM
        case 7594: return "zhu";    // ÑN
        case 7596: return "gui";    // ÑO
        case 7598: return "yin";    // ÑP
        case 7600: return "ka";    // ÑQ
        case 7602: return "xing";    // ÑR
        case 7604: return "sed";    // ÑS
        case 7606: return "kun";    // ÑT
        case 7608: return "niao";    // ÑU
        case 7610: return "shu";    // ÑV
        case 7612: return "jia";    // ÑW
        case 7614: return "kun";    // ÑX
        case 7616: return "li";    // ÑY
        case 7618: return "juan";    // ÑZ
        case 7620: return "shen";    // Ñ[
        case 7622: return "ge";    // Ñ\
        case 7624: return "zhen";    // Ñ]
        case 7626: return "liu";    // Ñ^
        case 7628: return "ji";    // Ñ_
        case 7630: return "yi";    // Ñ`
        case 7632: return "bu";    // Ña
        case 7634: return "zhuan";    // Ñb
        case 7636: return "shui";    // Ñc
        case 7638: return "qun";    // Ñd
        case 7640: return "li";    // Ñe
        case 7642: return "bao";    // Ñf
        case 7644: return "chan";    // Ñg
        case 7646: return "kun";    // Ñh
        case 7648: return "tao";    // Ñi
        case 7650: return "yuan";    // Ñj
        case 7652: return "ling";    // Ñk
        case 7654: return "chi";    // Ñl
        case 7656: return "chang";    // Ñm
        case 7658: return "dao";    // Ñn
        case 7660: return "liang";    // Ño
        case 7662: return "pei";    // Ñp
        case 7664: return "fei";    // Ñq
        case 7666: return "yuan";    // Ñr
        case 7668: return "yan";    // Ñs
        case 7670: return "du";    // Ñt
        case 7672: return "zhi";    // Ñu
        case 7674: return "yi";    // Ñv
        case 7676: return "ji";    // Ñw
        case 7678: return "guo";    // Ñx
        case 7680: return "ken";    // Ñy
        case 7682: return "qi";    // Ñz
        case 7684: return "ti";    // Ñ{
        case 7686: return "ti";    // Ñ|
        case 7688: return "fu";    // Ñ}
        case 7690: return "chong";    // Ñ~
        case 7692: return "";    // ?
        case 7694: return "xie";    // Ñ€
        case 7696: return "die";    // Ñ
        case 7698: return "kun";    // Ñ‚
        case 7700: return "duan";    // Ñƒ
        case 7702: return "you";    // Ñ„
        case 7704: return "you";    // Ñ…
        case 7706: return "yuan";    // Ñ†
        case 7708: return "fu";    // Ñ‡
        case 7710: return "yu";    // Ñˆ
        case 7712: return "tuan";    // Ñ‰
        case 7714: return "yan";    // ÑŠ
        case 7716: return "yi";    // Ñ‹
        case 7718: return "pao";    // ÑŒ
        case 7720: return "dan";    // Ñ
        case 7722: return "wen";    // ÑŽ
        case 7724: return "ta";    // Ñ
        case 7726: return "gou";    // Ñ
        case 7728: return "huai";    // Ñ‘
        case 7730: return "rong";    // Ñ’
        case 7732: return "yuan";    // Ñ“
        case 7734: return "nai";    // Ñ”
        case 7736: return "jiong";    // Ñ•
        case 7738: return "cha";    // Ñ–
        case 7740: return "ban";    // Ñ—
        case 7742: return "sang";    // Ñ˜
        case 7744: return "niao";    // Ñ™
        case 7746: return "ying";    // Ñš
        case 7748: return "jie";    // Ñ›
        case 7750: return "huai";    // Ñœ
        case 7752: return "ku";    // Ñ
        case 7754: return "lian";    // Ñž
        case 7756: return "li";    // ÑŸ
        case 7758: return "shi";    // Ñ 
        case 7760: return "lu";    // Ò@
        case 7762: return "yi";    // ÒA
        case 7764: return "die";    // ÒB
        case 7766: return "xie";    // ÒC
        case 7768: return "xian";    // ÒD
        case 7770: return "wei";    // ÒE
        case 7772: return "biao";    // ÒF
        case 7774: return "cao";    // ÒG
        case 7776: return "ji";    // ÒH
        case 7778: return "shan";    // ÒI
        case 7780: return "bao";    // ÒJ
        case 7782: return "bi";    // ÒK
        case 7784: return "pu";    // ÒL
        case 7786: return "jian";    // ÒM
        case 7788: return "juan";    // ÒN
        case 7790: return "jian";    // ÒO
        case 7792: return "cuo";    // ÒP
        case 7794: return "ji";    // ÒQ
        case 7796: return "dan";    // ÒR
        case 7798: return "za";    // ÒS
        case 7800: return "bo";    // ÒT
        case 7802: return "fei";    // ÒU
        case 7804: return "xiang";    // ÒV
        case 7806: return "xin";    // ÒW
        case 7808: return "bie";    // ÒX
        case 7810: return "rao";    // ÒY
        case 7812: return "man";    // ÒZ
        case 7814: return "lan";    // Ò[
        case 7816: return "ao";    // Ò\
        case 7818: return "yi";    // Ò]
        case 7820: return "gui";    // Ò^
        case 7822: return "cao";    // Ò_
        case 7824: return "sui";    // Ò`
        case 7826: return "nong";    // Òa
        case 7828: return "chan";    // Òb
        case 7830: return "lian";    // Òc
        case 7832: return "dang";    // Òd
        case 7834: return "du";    // Òe
        case 7836: return "tan";    // Òf
        case 7838: return "bi";    // Òg
        case 7840: return "lan";    // Òh
        case 7842: return "pu";    // Òi
        case 7844: return "zhi";    // Òj
        case 7846: return "tae";    // Òk
        case 7848: return "du";    // Òl
        case 7850: return "wa";    // Òm
        case 7852: return "shi";    // Òn
        case 7854: return "bai";    // Òo
        case 7856: return "xie";    // Òp
        case 7858: return "bo";    // Òq
        case 7860: return "chen";    // Òr
        case 7862: return "lai";    // Òs
        case 7864: return "long";    // Òt
        case 7866: return "xi";    // Òu
        case 7868: return "xian";    // Òv
        case 7870: return "lan";    // Òw
        case 7872: return "zhe";    // Òx
        case 7874: return "dai";    // Òy
        case 7876: return "ju";    // Òz
        case 7878: return "zan";    // Ò{
        case 7880: return "shi";    // Ò|
        case 7882: return "jian";    // Ò}
        case 7884: return "yi";    // Ò~
        case 7886: return "";    // ?
        case 7888: return "lan";    // Ò€
        case 7890: return "ya";    // Ò
        case 7892: return "xi";    // Ò‚
        case 7894: return "ban";    // Òƒ
        case 7896: return "fu";    // Ò„
        case 7898: return "fiao";    // Ò…
        case 7900: return "ba";    // Ò†
        case 7902: return "he";    // Ò‡
        case 7904: return "ji";    // Òˆ
        case 7906: return "ji";    // Ò‰
        case 7908: return "jian";    // ÒŠ
        case 7910: return "guan";    // Ò‹
        case 7912: return "bian";    // ÒŒ
        case 7914: return "yan";    // Ò
        case 7916: return "gui";    // ÒŽ
        case 7918: return "jiao";    // Ò
        case 7920: return "pian";    // Ò
        case 7922: return "mao";    // Ò‘
        case 7924: return "mi";    // Ò’
        case 7926: return "mi";    // Ò“
        case 7928: return "pie";    // Ò”
        case 7930: return "shi";    // Ò•
        case 7932: return "si";    // Ò–
        case 7934: return "chan";    // Ò—
        case 7936: return "zhen";    // Ò˜
        case 7938: return "jiao";    // Ò™
        case 7940: return "mi";    // Òš
        case 7942: return "tiao";    // Ò›
        case 7944: return "lian";    // Òœ
        case 7946: return "yao";    // Ò
        case 7948: return "zhi";    // Òž
        case 7950: return "jun";    // ÒŸ
        case 7952: return "xi";    // Ò 
        case 7954: return "shan";    // Ó@
        case 7956: return "wei";    // ÓA
        case 7958: return "xi";    // ÓB
        case 7960: return "tian";    // ÓC
        case 7962: return "yu";    // ÓD
        case 7964: return "lan";    // ÓE
        case 7966: return "e";    // ÓF
        case 7968: return "du";    // ÓG
        case 7970: return "qin";    // ÓH
        case 7972: return "pang";    // ÓI
        case 7974: return "ji";    // ÓJ
        case 7976: return "ming";    // ÓK
        case 7978: return "ying";    // ÓL
        case 7980: return "gou";    // ÓM
        case 7982: return "qu";    // ÓN
        case 7984: return "zhan";    // ÓO
        case 7986: return "jin";    // ÓP
        case 7988: return "guan";    // ÓQ
        case 7990: return "deng";    // ÓR
        case 7992: return "bian";    // ÓS
        case 7994: return "luo";    // ÓT
        case 7996: return "qu";    // ÓU
        case 7998: return "jian";    // ÓV
        case 8000: return "wei";    // ÓW
        case 8002: return "jiao";    // ÓX
        case 8004: return "qu";    // ÓY
        case 8006: return "luo";    // ÓZ
        case 8008: return "lan";    // Ó[
        case 8010: return "shen";    // Ó\
        case 8012: return "di";    // Ó]
        case 8014: return "guan";    // Ó^
        case 8016: return "yan";    // Ó_
        case 8018: return "tian";    // Ó`
        case 8020: return "qiu";    // Óa
        case 8022: return "jin";    // Ób
        case 8024: return "chu";    // Óc
        case 8026: return "zhi";    // Ód
        case 8028: return "chao";    // Óe
        case 8030: return "ji";    // Óf
        case 8032: return "dan";    // Óg
        case 8034: return "zhi";    // Óh
        case 8036: return "hua";    // Ói
        case 8038: return "quan";    // Ój
        case 8040: return "ge";    // Ók
        case 8042: return "shi";    // Ól
        case 8044: return "gui";    // Óm
        case 8046: return "jie";    // Ón
        case 8048: return "hun";    // Óo
        case 8050: return "qiu";    // Óp
        case 8052: return "xing";    // Óq
        case 8054: return "ni";    // Ór
        case 8056: return "ji";    // Ós
        case 8058: return "lu";    // Ót
        case 8060: return "da";    // Óu
        case 8062: return "bi";    // Óv
        case 8064: return "xing";    // Ów
        case 8066: return "shang";    // Óx
        case 8068: return "gong";    // Óy
        case 8070: return "zhi";    // Óz
        case 8072: return "hu";    // Ó{
        case 8074: return "chu";    // Ó|
        case 8076: return "wei";    // Ó}
        case 8078: return "yi";    // Ó~
        case 8080: return "";    // ?
        case 8082: return "li";    // Ó€
        case 8084: return "jue";    // Ó
        case 8086: return "wei";    // Ó‚
        case 8088: return "yan";    // Óƒ
        case 8090: return "wei";    // Ó„
        case 8092: return "yan";    // Ó…
        case 8094: return "ding";    // Ó†
        case 8096: return "fu";    // Ó‡
        case 8098: return "kao";    // Óˆ
        case 8100: return "qiu";    // Ó‰
        case 8102: return "jiao";    // ÓŠ
        case 8104: return "ji";    // Ó‹
        case 8106: return "fan";    // ÓŒ
        case 8108: return "xun";    // Ó
        case 8110: return "diao";    // ÓŽ
        case 8112: return "hong";    // Ó
        case 8114: return "cha";    // Ó
        case 8116: return "tao";    // Ó‘
        case 8118: return "xu";    // Ó’
        case 8120: return "ji";    // Ó“
        case 8122: return "yi";    // Ó”
        case 8124: return "ren";    // Ó•
        case 8126: return "xun";    // Ó–
        case 8128: return "yin";    // Ó—
        case 8130: return "shan";    // Ó˜
        case 8132: return "qi";    // Ó™
        case 8134: return "tuo";    // Óš
        case 8136: return "ji";    // Ó›
        case 8138: return "xun";    // Óœ
        case 8140: return "yin";    // Ó
        case 8142: return "e";    // Óž
        case 8144: return "bin";    // ÓŸ
        case 8146: return "ya";    // Ó 
        case 8148: return "yao";    // Ô@
        case 8150: return "song";    // ÔA
        case 8152: return "shen";    // ÔB
        case 8154: return "yin";    // ÔC
        case 8156: return "xi";    // ÔD
        case 8158: return "jue";    // ÔE
        case 8160: return "na";    // ÔF
        case 8162: return "ne";    // ÔG
        case 8164: return "chen";    // ÔH
        case 8166: return "you";    // ÔI
        case 8168: return "zhi";    // ÔJ
        case 8170: return "xiong";    // ÔK
        case 8172: return "fang";    // ÔL
        case 8174: return "xin";    // ÔM
        case 8176: return "miao";    // ÔN
        case 8178: return "she";    // ÔO
        case 8180: return "yan";    // ÔP
        case 8182: return "sa";    // ÔQ
        case 8184: return "zhun";    // ÔR
        case 8186: return "xu";    // ÔS
        case 8188: return "yi";    // ÔT
        case 8190: return "yi";    // ÔU
        case 8192: return "su";    // ÔV
        case 8194: return "chi";    // ÔW
        case 8196: return "he";    // ÔX
        case 8198: return "shen";    // ÔY
        case 8200: return "he";    // ÔZ
        case 8202: return "xu";    // Ô[
        case 8204: return "zhen";    // Ô\
        case 8206: return "zhu";    // Ô]
        case 8208: return "zheng";    // Ô^
        case 8210: return "gou";    // Ô_
        case 8212: return "zi";    // Ô`
        case 8214: return "zhan";    // Ôa
        case 8216: return "gu";    // Ôb
        case 8218: return "fu";    // Ôc
        case 8220: return "jian";    // Ôd
        case 8222: return "die";    // Ôe
        case 8224: return "ling";    // Ôf
        case 8226: return "di";    // Ôg
        case 8228: return "yang";    // Ôh
        case 8230: return "na";    // Ôi
        case 8232: return "pan";    // Ôj
        case 8234: return "zhou";    // Ôk
        case 8236: return "gan";    // Ôl
        case 8238: return "yi";    // Ôm
        case 8240: return "ju";    // Ôn
        case 8242: return "yao";    // Ôo
        case 8244: return "zha";    // Ôp
        case 8246: return "duo";    // Ôq
        case 8248: return "yi";    // Ôr
        case 8250: return "qu";    // Ôs
        case 8252: return "zhao";    // Ôt
        case 8254: return "ping";    // Ôu
        case 8256: return "bi";    // Ôv
        case 8258: return "xiong";    // Ôw
        case 8260: return "qu";    // Ôx
        case 8262: return "ba";    // Ôy
        case 8264: return "da";    // Ôz
        case 8266: return "zu";    // Ô{
        case 8268: return "tao";    // Ô|
        case 8270: return "zhu";    // Ô}
        case 8272: return "ci";    // Ô~
        case 8274: return "";    // ?
        case 8276: return "zhe";    // Ô€
        case 8278: return "yong";    // Ô
        case 8280: return "xu";    // Ô‚
        case 8282: return "xun";    // Ôƒ
        case 8284: return "yi";    // Ô„
        case 8286: return "huang";    // Ô…
        case 8288: return "ge";    // Ô†
        case 8290: return "shi";    // Ô‡
        case 8292: return "qie";    // Ôˆ
        case 8294: return "xiao";    // Ô‰
        case 8296: return "shi";    // ÔŠ
        case 8298: return "hen";    // Ô‹
        case 8300: return "cha";    // ÔŒ
        case 8302: return "gou";    // Ô
        case 8304: return "gui";    // ÔŽ
        case 8306: return "quan";    // Ô
        case 8308: return "hui";    // Ô
        case 8310: return "jie";    // Ô‘
        case 8312: return "hua";    // Ô’
        case 8314: return "gai";    // Ô“
        case 8316: return "xiang";    // Ô”
        case 8318: return "wei";    // Ô•
        case 8320: return "shen";    // Ô–
        case 8322: return "zhou";    // Ô—
        case 8324: return "dong";    // Ô˜
        case 8326: return "mi";    // Ô™
        case 8328: return "ming";    // Ôš
        case 8330: return "e";    // Ô›
        case 8332: return "hui";    // Ôœ
        case 8334: return "yan";    // Ô
        case 8336: return "xiong";    // Ôž
        case 8338: return "gua";    // ÔŸ
        case 8340: return "er";    // Ô 
        case 8342: return "bing";    // Õ@
        case 8344: return "diao";    // ÕA
        case 8346: return "yi";    // ÕB
        case 8348: return "lei";    // ÕC
        case 8350: return "zhu";    // ÕD
        case 8352: return "kuang";    // ÕE
        case 8354: return "kua";    // ÕF
        case 8356: return "wu";    // ÕG
        case 8358: return "ji";    // ÕH
        case 8360: return "zhi";    // ÕI
        case 8362: return "ren";    // ÕJ
        case 8364: return "cu";    // ÕK
        case 8366: return "lang";    // ÕL
        case 8368: return "e";    // ÕM
        case 8370: return "kuang";    // ÕN
        case 8372: return "ei";    // ÕO
        case 8374: return "ting";    // ÕP
        case 8376: return "dan";    // ÕQ
        case 8378: return "bei";    // ÕR
        case 8380: return "chan";    // ÕS
        case 8382: return "you";    // ÕT
        case 8384: return "keng";    // ÕU
        case 8386: return "qiao";    // ÕV
        case 8388: return "qin";    // ÕW
        case 8390: return "shua";    // ÕX
        case 8392: return "an";    // ÕY
        case 8394: return "yu";    // ÕZ
        case 8396: return "xiao";    // Õ[
        case 8398: return "cheng";    // Õ\
        case 8400: return "jie";    // Õ]
        case 8402: return "xian";    // Õ^
        case 8404: return "wu";    // Õ_
        case 8406: return "wu";    // Õ`
        case 8408: return "gao";    // Õa
        case 8410: return "song";    // Õb
        case 8412: return "bu";    // Õc
        case 8414: return "hui";    // Õd
        case 8416: return "jing";    // Õe
        case 8418: return "shuo";    // Õf
        case 8420: return "zhen";    // Õg
        case 8422: return "shui";    // Õh
        case 8424: return "du";    // Õi
        case 8426: return "hua";    // Õj
        case 8428: return "chang";    // Õk
        case 8430: return "shui";    // Õl
        case 8432: return "jie";    // Õm
        case 8434: return "ke";    // Õn
        case 8436: return "jue";    // Õo
        case 8438: return "cong";    // Õp
        case 8440: return "xiao";    // Õq
        case 8442: return "sui";    // Õr
        case 8444: return "wang";    // Õs
        case 8446: return "xian";    // Õt
        case 8448: return "fei";    // Õu
        case 8450: return "lai";    // Õv
        case 8452: return "ta";    // Õw
        case 8454: return "yi";    // Õx
        case 8456: return "na";    // Õy
        case 8458: return "yin";    // Õz
        case 8460: return "diao";    // Õ{
        case 8462: return "bei";    // Õ|
        case 8464: return "zhuo";    // Õ}
        case 8466: return "chan";    // Õ~
        case 8468: return "";    // ?
        case 8470: return "chen";    // Õ€
        case 8472: return "zhun";    // Õ
        case 8474: return "ji";    // Õ‚
        case 8476: return "qi";    // Õƒ
        case 8478: return "tan";    // Õ„
        case 8480: return "zhui";    // Õ…
        case 8482: return "wei";    // Õ†
        case 8484: return "ju";    // Õ‡
        case 8486: return "qing";    // Õˆ
        case 8488: return "dong";    // Õ‰
        case 8490: return "zheng";    // ÕŠ
        case 8492: return "ze";    // Õ‹
        case 8494: return "zhou";    // ÕŒ
        case 8496: return "qian";    // Õ
        case 8498: return "zhuo";    // ÕŽ
        case 8500: return "liang";    // Õ
        case 8502: return "jian";    // Õ
        case 8504: return "ji";    // Õ‘
        case 8506: return "hao";    // Õ’
        case 8508: return "lun";    // Õ“
        case 8510: return "nie";    // Õ”
        case 8512: return "biao";    // Õ•
        case 8514: return "hua";    // Õ–
        case 8516: return "pian";    // Õ—
        case 8518: return "yu";    // Õ˜
        case 8520: return "die";    // Õ™
        case 8522: return "xu";    // Õš
        case 8524: return "pian";    // Õ›
        case 8526: return "di";    // Õœ
        case 8528: return "xuan";    // Õ
        case 8530: return "shi";    // Õž
        case 8532: return "hun";    // ÕŸ
        case 8534: return "gua";    // Õ 
        case 8536: return "e";    // Ö@
        case 8538: return "zhong";    // ÖA
        case 8540: return "di";    // ÖB
        case 8542: return "xie";    // ÖC
        case 8544: return "fu";    // ÖD
        case 8546: return "pu";    // ÖE
        case 8548: return "ting";    // ÖF
        case 8550: return "jian";    // ÖG
        case 8552: return "qi";    // ÖH
        case 8554: return "yu";    // ÖI
        case 8556: return "zi";    // ÖJ
        case 8558: return "zhuan";    // ÖK
        case 8560: return "xi";    // ÖL
        case 8562: return "hui";    // ÖM
        case 8564: return "yin";    // ÖN
        case 8566: return "an";    // ÖO
        case 8568: return "gan";    // ÖP
        case 8570: return "nan";    // ÖQ
        case 8572: return "chen";    // ÖR
        case 8574: return "feng";    // ÖS
        case 8576: return "zhu";    // ÖT
        case 8578: return "yang";    // ÖU
        case 8580: return "yan";    // ÖV
        case 8582: return "huang";    // ÖW
        case 8584: return "xuan";    // ÖX
        case 8586: return "ge";    // ÖY
        case 8588: return "nuo";    // ÖZ
        case 8590: return "qi";    // Ö[
        case 8592: return "mou";    // Ö\
        case 8594: return "ye";    // Ö]
        case 8596: return "wei";    // Ö^
        case 8598: return "xing";    // Ö_
        case 8600: return "teng";    // Ö`
        case 8602: return "zhou";    // Öa
        case 8604: return "shan";    // Öb
        case 8606: return "po";    // Öc
        case 8608: return "dui";    // Öd
        case 8610: return "huang";    // Öe
        case 8612: return "huo";    // Öf
        case 8614: return "ge";    // Ög
        case 8616: return "ying";    // Öh
        case 8618: return "mi";    // Öi
        case 8620: return "xiao";    // Öj
        case 8622: return "mi";    // Ök
        case 8624: return "xi";    // Öl
        case 8626: return "qiang";    // Öm
        case 8628: return "zhen";    // Ön
        case 8630: return "huo";    // Öo
        case 8632: return "ti";    // Öp
        case 8634: return "su";    // Öq
        case 8636: return "bang";    // Ör
        case 8638: return "chi";    // Ös
        case 8640: return "qian";    // Öt
        case 8642: return "yi";    // Öu
        case 8644: return "jiang";    // Öv
        case 8646: return "yuan";    // Öw
        case 8648: return "xie";    // Öx
        case 8650: return "he";    // Öy
        case 8652: return "tao";    // Öz
        case 8654: return "yao";    // Ö{
        case 8656: return "yao";    // Ö|
        case 8658: return "zhi";    // Ö}
        case 8660: return "yu";    // Ö~
        case 8662: return "";    // ?
        case 8664: return "biao";    // Ö€
        case 8666: return "cong";    // Ö
        case 8668: return "li";    // Ö‚
        case 8670: return "mo";    // Öƒ
        case 8672: return "mo";    // Ö„
        case 8674: return "shang";    // Ö…
        case 8676: return "zhe";    // Ö†
        case 8678: return "miu";    // Ö‡
        case 8680: return "jian";    // Öˆ
        case 8682: return "ze";    // Ö‰
        case 8684: return "jie";    // ÖŠ
        case 8686: return "lian";    // Ö‹
        case 8688: return "lou";    // ÖŒ
        case 8690: return "can";    // Ö
        case 8692: return "ou";    // ÖŽ
        case 8694: return "gun";    // Ö
        case 8696: return "xi";    // Ö
        case 8698: return "zhuo";    // Ö‘
        case 8700: return "ao";    // Ö’
        case 8702: return "ao";    // Ö“
        case 8704: return "jin";    // Ö”
        case 8706: return "zhe";    // Ö•
        case 8708: return "yi";    // Ö–
        case 8710: return "hu";    // Ö—
        case 8712: return "jiang";    // Ö˜
        case 8714: return "man";    // Ö™
        case 8716: return "zhao";    // Öš
        case 8718: return "han";    // Ö›
        case 8720: return "wa";    // Öœ
        case 8722: return "dan";    // Ö
        case 8724: return "xu";    // Öž
        case 8726: return "zeng";    // ÖŸ
        case 8728: return "se";    // Ö 
        case 8730: return "xi";    // ×@
        case 8732: return "zha";    // ×A
        case 8734: return "dui";    // ×B
        case 8736: return "zheng";    // ×C
        case 8738: return "nao";    // ×D
        case 8740: return "lan";    // ×E
        case 8742: return "e";    // ×F
        case 8744: return "ying";    // ×G
        case 8746: return "jue";    // ×H
        case 8748: return "ji";    // ×I
        case 8750: return "zun";    // ×J
        case 8752: return "jiao";    // ×K
        case 8754: return "bo";    // ×L
        case 8756: return "hui";    // ×M
        case 8758: return "quan";    // ×N
        case 8760: return "wu";    // ×O
        case 8762: return "jian";    // ×P
        case 8764: return "zha";    // ×Q
        case 8766: return "shi";    // ×R
        case 8768: return "qiao";    // ×S
        case 8770: return "tan";    // ×T
        case 8772: return "zen";    // ×U
        case 8774: return "pu";    // ×V
        case 8776: return "sheng";    // ×W
        case 8778: return "xuan";    // ×X
        case 8780: return "zao";    // ×Y
        case 8782: return "tan";    // ×Z
        case 8784: return "dang";    // ×[
        case 8786: return "sui";    // ×\
        case 8788: return "xian";    // ×]
        case 8790: return "ji";    // ×^
        case 8792: return "jiao";    // ×_
        case 8794: return "lian";    // ×`
        case 8796: return "nou";    // ×a
        case 8798: return "yi";    // ×b
        case 8800: return "ai";    // ×c
        case 8802: return "zhan";    // ×d
        case 8804: return "hui";    // ×e
        case 8806: return "hua";    // ×f
        case 8808: return "yi";    // ×g
        case 8810: return "yi";    // ×h
        case 8812: return "shan";    // ×i
        case 8814: return "rang";    // ×j
        case 8816: return "nou";    // ×k
        case 8818: return "qian";    // ×l
        case 8820: return "dui";    // ×m
        case 8822: return "ta";    // ×n
        case 8824: return "hu";    // ×o
        case 8826: return "zhou";    // ×p
        case 8828: return "hao";    // ×q
        case 8830: return "ai";    // ×r
        case 8832: return "ying";    // ×s
        case 8834: return "jian";    // ×t
        case 8836: return "yu";    // ×u
        case 8838: return "jian";    // ×v
        case 8840: return "hui";    // ×w
        case 8842: return "du";    // ×x
        case 8844: return "ze";    // ×y
        case 8846: return "juan";    // ×z
        case 8848: return "zan";    // ×{
        case 8850: return "lei";    // ×|
        case 8852: return "shen";    // ×}
        case 8854: return "wei";    // ×~
        case 8856: return "";    // ?
        case 8858: return "chan";    // ×€
        case 8860: return "li";    // ×
        case 8862: return "yi";    // ×‚
        case 8864: return "bian";    // ×ƒ
        case 8866: return "zhe";    // ×„
        case 8868: return "yan";    // ×…
        case 8870: return "e";    // ×†
        case 8872: return "chou";    // ×‡
        case 8874: return "wei";    // ×ˆ
        case 8876: return "chou";    // ×‰
        case 8878: return "yao";    // ×Š
        case 8880: return "chan";    // ×‹
        case 8882: return "rang";    // ×Œ
        case 8884: return "yin";    // ×
        case 8886: return "lan";    // ×Ž
        case 8888: return "chen";    // ×
        case 8890: return "xie";    // ×
        case 8892: return "nie";    // ×‘
        case 8894: return "huan";    // ×’
        case 8896: return "zan";    // ×“
        case 8898: return "yi";    // ×”
        case 8900: return "dang";    // ×•
        case 8902: return "zhan";    // ×–
        case 8904: return "yan";    // ×—
        case 8906: return "du";    // ×˜
        case 8908: return "tuo";    // ×™
        case 8910: return "ren";    // ×š
        case 8912: return "xiong";    // ×›
        case 8914: return "xiong";    // ×œ
        case 8916: return "bi";    // ×
        case 8918: return "zhou";    // ×ž
        case 8920: return "shen";    // ×Ÿ
        case 8922: return "xu";    // × 
        case 8924: return "qian";    // Ø@
        case 8926: return "hong";    // ØA
        case 8928: return "xia";    // ØB
        case 8930: return "ji";    // ØC
        case 8932: return "hong";    // ØD
        case 8934: return "han";    // ØE
        case 8936: return "long";    // ØF
        case 8938: return "ji";    // ØG
        case 8940: return "xi";    // ØH
        case 8942: return "liao";    // ØI
        case 8944: return "gan";    // ØJ
        case 8946: return "du";    // ØK
        case 8948: return "long";    // ØL
        case 8950: return "qi";    // ØM
        case 8952: return "feng";    // ØN
        case 8954: return "deng";    // ØO
        case 8956: return "bi";    // ØP
        case 8958: return "shu";    // ØQ
        case 8960: return "xian";    // ØR
        case 8962: return "feng";    // ØS
        case 8964: return "zhi";    // ØT
        case 8966: return "zhi";    // ØU
        case 8968: return "yan";    // ØV
        case 8970: return "yan";    // ØW
        case 8972: return "chu";    // ØX
        case 8974: return "hui";    // ØY
        case 8976: return "tun";    // ØZ
        case 8978: return "yi";    // Ø[
        case 8980: return "yi";    // Ø\
        case 8982: return "yan";    // Ø]
        case 8984: return "ba";    // Ø^
        case 8986: return "hou";    // Ø_
        case 8988: return "e";    // Ø`
        case 8990: return "chu";    // Øa
        case 8992: return "yan";    // Øb
        case 8994: return "ken";    // Øc
        case 8996: return "gai";    // Ød
        case 8998: return "ju";    // Øe
        case 9000: return "fu";    // Øf
        case 9002: return "xi";    // Øg
        case 9004: return "bin";    // Øh
        case 9006: return "zhu";    // Øi
        case 9008: return "jia";    // Øj
        case 9010: return "fen";    // Øk
        case 9012: return "xi";    // Øl
        case 9014: return "bo";    // Øm
        case 9016: return "wen";    // Øn
        case 9018: return "huan";    // Øo
        case 9020: return "di";    // Øp
        case 9022: return "zong";    // Øq
        case 9024: return "fen";    // Ør
        case 9026: return "yi";    // Øs
        case 9028: return "an";    // Øt
        case 9030: return "pi";    // Øu
        case 9032: return "na";    // Øv
        case 9034: return "pi";    // Øw
        case 9036: return "gou";    // Øx
        case 9038: return "duo";    // Øy
        case 9040: return "you";    // Øz
        case 9042: return "mo";    // Ø{
        case 9044: return "si";    // Ø|
        case 9046: return "huan";    // Ø}
        case 9048: return "ken";    // Ø~
        case 9050: return "";    // ?
        case 9052: return "mo";    // Ø€
        case 9054: return "an";    // Ø
        case 9056: return "mai";    // Ø‚
        case 9058: return "ni";    // Øƒ
        case 9060: return "bi";    // Ø„
        case 9062: return "yu";    // Ø…
        case 9064: return "jia";    // Ø†
        case 9066: return "tuan";    // Ø‡
        case 9068: return "mao";    // Øˆ
        case 9070: return "xi";    // Ø‰
        case 9072: return "yi";    // ØŠ
        case 9074: return "yu";    // Ø‹
        case 9076: return "chu";    // ØŒ
        case 9078: return "tan";    // Ø
        case 9080: return "huan";    // ØŽ
        case 9082: return "jue";    // Ø
        case 9084: return "bei";    // Ø
        case 9086: return "zhen";    // Ø‘
        case 9088: return "yuan";    // Ø’
        case 9090: return "fu";    // Ø“
        case 9092: return "cai";    // Ø”
        case 9094: return "gong";    // Ø•
        case 9096: return "te";    // Ø–
        case 9098: return "yi";    // Ø—
        case 9100: return "hang";    // Ø˜
        case 9102: return "wan";    // Ø™
        case 9104: return "pin";    // Øš
        case 9106: return "huo";    // Ø›
        case 9108: return "fan";    // Øœ
        case 9110: return "tan";    // Ø
        case 9112: return "guan";    // Øž
        case 9114: return "ze";    // ØŸ
        case 9116: return "zhi";    // Ø 
        case 9118: return "er";    // Ù@
        case 9120: return "zhu";    // ÙA
        case 9122: return "shi";    // ÙB
        case 9124: return "bi";    // ÙC
        case 9126: return "zi";    // ÙD
        case 9128: return "er";    // ÙE
        case 9130: return "gui";    // ÙF
        case 9132: return "pian";    // ÙG
        case 9134: return "bian";    // ÙH
        case 9136: return "mai";    // ÙI
        case 9138: return "dai";    // ÙJ
        case 9140: return "sheng";    // ÙK
        case 9142: return "kuang";    // ÙL
        case 9144: return "fei";    // ÙM
        case 9146: return "tie";    // ÙN
        case 9148: return "yi";    // ÙO
        case 9150: return "chi";    // ÙP
        case 9152: return "mao";    // ÙQ
        case 9154: return "he";    // ÙR
        case 9156: return "ben";    // ÙS
        case 9158: return "lu";    // ÙT
        case 9160: return "lin";    // ÙU
        case 9162: return "hui";    // ÙV
        case 9164: return "gai";    // ÙW
        case 9166: return "pian";    // ÙX
        case 9168: return "zi";    // ÙY
        case 9170: return "jia";    // ÙZ
        case 9172: return "xu";    // Ù[
        case 9174: return "zei";    // Ù\
        case 9176: return "jiao";    // Ù]
        case 9178: return "gai";    // Ù^
        case 9180: return "zang";    // Ù_
        case 9182: return "jian";    // Ù`
        case 9184: return "ying";    // Ùa
        case 9186: return "xun";    // Ùb
        case 9188: return "zhen";    // Ùc
        case 9190: return "she";    // Ùd
        case 9192: return "bin";    // Ùe
        case 9194: return "bin";    // Ùf
        case 9196: return "qiu";    // Ùg
        case 9198: return "sha";    // Ùh
        case 9200: return "chuan";    // Ùi
        case 9202: return "zang";    // Ùj
        case 9204: return "zhou";    // Ùk
        case 9206: return "lai";    // Ùl
        case 9208: return "zan";    // Ùm
        case 9210: return "ci";    // Ùn
        case 9212: return "chen";    // Ùo
        case 9214: return "shang";    // Ùp
        case 9216: return "tian";    // Ùq
        case 9218: return "pei";    // Ùr
        case 9220: return "geng";    // Ùs
        case 9222: return "xian";    // Ùt
        case 9224: return "mai";    // Ùu
        case 9226: return "jian";    // Ùv
        case 9228: return "sui";    // Ùw
        case 9230: return "fu";    // Ùx
        case 9232: return "dan";    // Ùy
        case 9234: return "cong";    // Ùz
        case 9236: return "cong";    // Ù{
        case 9238: return "zhi";    // Ù|
        case 9240: return "ji";    // Ù}
        case 9242: return "zhang";    // Ù~
        case 9244: return "";    // ?
        case 9246: return "du";    // Ù€
        case 9248: return "jin";    // Ù
        case 9250: return "min";    // Ù‚
        case 9252: return "chun";    // Ùƒ
        case 9254: return "yun";    // Ù„
        case 9256: return "bao";    // Ù…
        case 9258: return "zai";    // Ù†
        case 9260: return "lai";    // Ù‡
        case 9262: return "feng";    // Ùˆ
        case 9264: return "cang";    // Ù‰
        case 9266: return "ji";    // ÙŠ
        case 9268: return "sheng";    // Ù‹
        case 9270: return "ai";    // ÙŒ
        case 9272: return "zuan";    // Ù
        case 9274: return "fu";    // ÙŽ
        case 9276: return "gou";    // Ù
        case 9278: return "sai";    // Ù
        case 9280: return "ze";    // Ù‘
        case 9282: return "liao";    // Ù’
        case 9284: return "yi";    // Ù“
        case 9286: return "bai";    // Ù”
        case 9288: return "chen";    // Ù•
        case 9290: return "wan";    // Ù–
        case 9292: return "zhi";    // Ù—
        case 9294: return "zhui";    // Ù˜
        case 9296: return "biao";    // Ù™
        case 9298: return "yun";    // Ùš
        case 9300: return "zeng";    // Ù›
        case 9302: return "dan";    // Ùœ
        case 9304: return "zan";    // Ù
        case 9306: return "yan";    // Ùž
        case 9308: return "pu";    // ÙŸ
        case 9310: return "shan";    // Ù 
        case 9312: return "wan";    // Ú@
        case 9314: return "ying";    // ÚA
        case 9316: return "jin";    // ÚB
        case 9318: return "gan";    // ÚC
        case 9320: return "xian";    // ÚD
        case 9322: return "zang";    // ÚE
        case 9324: return "bi";    // ÚF
        case 9326: return "du";    // ÚG
        case 9328: return "shu";    // ÚH
        case 9330: return "yan";    // ÚI
        case 9332: return "shang";    // ÚJ
        case 9334: return "xuan";    // ÚK
        case 9336: return "long";    // ÚL
        case 9338: return "gan";    // ÚM
        case 9340: return "zang";    // ÚN
        case 9342: return "yuan";    // ÚO
        case 9344: return "bi";    // ÚP
        case 9346: return "zhou";    // ÚQ
        case 9348: return "feng";    // ÚR
        case 9350: return "yun";    // ÚS
        case 9352: return "xi";    // ÚT
        case 9354: return "tong";    // ÚU
        case 9356: return "xi";    // ÚV
        case 9358: return "cheng";    // ÚW
        case 9360: return "cheng";    // ÚX
        case 9362: return "xia";    // ÚY
        case 9364: return "tang";    // ÚZ
        case 9366: return "zou";    // Ú[
        case 9368: return "li";    // Ú\
        case 9370: return "shan";    // Ú]
        case 9372: return "qiong";    // Ú^
        case 9374: return "yin";    // Ú_
        case 9376: return "xian";    // Ú`
        case 9378: return "zi";    // Úa
        case 9380: return "gui";    // Úb
        case 9382: return "qin";    // Úc
        case 9384: return "di";    // Úd
        case 9386: return "ci";    // Úe
        case 9388: return "zhen";    // Úf
        case 9390: return "die";    // Úg
        case 9392: return "di";    // Úh
        case 9394: return "xi";    // Úi
        case 9396: return "zhan";    // Új
        case 9398: return "ju";    // Úk
        case 9400: return "ji";    // Úl
        case 9402: return "qu";    // Úm
        case 9404: return "chu";    // Ún
        case 9406: return "gua";    // Úo
        case 9408: return "xue";    // Úp
        case 9410: return "tiao";    // Úq
        case 9412: return "duo";    // Úr
        case 9414: return "gan";    // Ús
        case 9416: return "suo";    // Út
        case 9418: return "cu";    // Úu
        case 9420: return "xi";    // Úv
        case 9422: return "zhao";    // Úw
        case 9424: return "su";    // Úx
        case 9426: return "yin";    // Úy
        case 9428: return "ju";    // Úz
        case 9430: return "jian";    // Ú{
        case 9432: return "qi";    // Ú|
        case 9434: return "chao";    // Ú}
        case 9436: return "wei";    // Ú~
        case 9438: return "";    // ?
        case 9440: return "lu";    // Ú€
        case 9442: return "dang";    // Ú
        case 9444: return "qiu";    // Ú‚
        case 9446: return "zi";    // Úƒ
        case 9448: return "ti";    // Ú„
        case 9450: return "qu";    // Ú…
        case 9452: return "chi";    // Ú†
        case 9454: return "guang";    // Ú‡
        case 9456: return "jiao";    // Úˆ
        case 9458: return "qiao";    // Ú‰
        case 9460: return "jiao";    // ÚŠ
        case 9462: return "zao";    // Ú‹
        case 9464: return "yue";    // ÚŒ
        case 9466: return "er";    // Ú
        case 9468: return "zan";    // ÚŽ
        case 9470: return "wu";    // Ú
        case 9472: return "ke";    // Ú
        case 9474: return "gui";    // Ú‘
        case 9476: return "chen";    // Ú’
        case 9478: return "pang";    // Ú“
        case 9480: return "yue";    // Ú”
        case 9482: return "pa";    // Ú•
        case 9484: return "qi";    // Ú–
        case 9486: return "tuo";    // Ú—
        case 9488: return "yi";    // Ú˜
        case 9490: return "nian";    // Ú™
        case 9492: return "ling";    // Úš
        case 9494: return "mei";    // Ú›
        case 9496: return "ku";    // Úœ
        case 9498: return "ci";    // Ú
        case 9500: return "qia";    // Úž
        case 9502: return "zhu";    // ÚŸ
        case 9504: return "ju";    // Ú 
        case 9506: return "die";    // Û@
        case 9508: return "ban";    // ÛA
        case 9510: return "ju";    // ÛB
        case 9512: return "ni";    // ÛC
        case 9514: return "yi";    // ÛD
        case 9516: return "ji";    // ÛE
        case 9518: return "dai";    // ÛF
        case 9520: return "duo";    // ÛG
        case 9522: return "zhu";    // ÛH
        case 9524: return "quan";    // ÛI
        case 9526: return "zhuai";    // ÛJ
        case 9528: return "xiang";    // ÛK
        case 9530: return "die";    // ÛL
        case 9532: return "beng";    // ÛM
        case 9534: return "zhi";    // ÛN
        case 9536: return "jia";    // ÛO
        case 9538: return "cai";    // ÛP
        case 9540: return "da";    // ÛQ
        case 9542: return "qu";    // ÛR
        case 9544: return "chou";    // ÛS
        case 9546: return "duo";    // ÛT
        case 9548: return "chu";    // ÛU
        case 9550: return "keng";    // ÛV
        case 9552: return "nie";    // ÛW
        case 9554: return "qiao";    // ÛX
        case 9556: return "bu";    // ÛY
        case 9558: return "qun";    // ÛZ
        case 9560: return "mu";    // Û[
        case 9562: return "shu";    // Û\
        case 9564: return "jiao";    // Û]
        case 9566: return "qiao";    // Û^
        case 9568: return "meo";    // Û_
        case 9570: return "jian";    // Û`
        case 9572: return "ji";    // Ûa
        case 9574: return "wo";    // Ûb
        case 9576: return "wei";    // Ûc
        case 9578: return "jie";    // Ûd
        case 9580: return "ji";    // Ûe
        case 9582: return "nie";    // Ûf
        case 9584: return "ju";    // Ûg
        case 9586: return "nie";    // Ûh
        case 9588: return "lun";    // Ûi
        case 9590: return "lu";    // Ûj
        case 9592: return "leng";    // Ûk
        case 9594: return "wo";    // Ûl
        case 9596: return "juan";    // Ûm
        case 9598: return "zu";    // Ûn
        case 9600: return "qie";    // Ûo
        case 9602: return "ji";    // Ûp
        case 9604: return "di";    // Ûq
        case 9606: return "zong";    // Ûr
        case 9608: return "pan";    // Ûs
        case 9610: return "zheng";    // Ût
        case 9612: return "yao";    // Ûu
        case 9614: return "dun";    // Ûv
        case 9616: return "chuan";    // Ûw
        case 9618: return "yong";    // Ûx
        case 9620: return "di";    // Ûy
        case 9622: return "zha";    // Ûz
        case 9624: return "chen";    // Û{
        case 9626: return "tuo";    // Û|
        case 9628: return "tang";    // Û}
        case 9630: return "bi";    // Û~
        case 9632: return "";    // ?
        case 9634: return "zu";    // Û€
        case 9636: return "nuo";    // Û
        case 9638: return "zha";    // Û‚
        case 9640: return "tui";    // Ûƒ
        case 9642: return "qiang";    // Û„
        case 9644: return "zhan";    // Û…
        case 9646: return "dian";    // Û†
        case 9648: return "di";    // Û‡
        case 9650: return "ji";    // Ûˆ
        case 9652: return "liu";    // Û‰
        case 9654: return "zan";    // ÛŠ
        case 9656: return "bi";    // Û‹
        case 9658: return "chong";    // ÛŒ
        case 9660: return "lu";    // Û
        case 9662: return "liao";    // ÛŽ
        case 9664: return "tang";    // Û
        case 9666: return "dai";    // Û
        case 9668: return "su";    // Û‘
        case 9670: return "xi";    // Û’
        case 9672: return "kui";    // Û“
        case 9674: return "ji";    // Û”
        case 9676: return "zhi";    // Û•
        case 9678: return "qiang";    // Û–
        case 9680: return "di";    // Û—
        case 9682: return "pan";    // Û˜
        case 9684: return "zong";    // Û™
        case 9686: return "lian";    // Ûš
        case 9688: return "zao";    // Û›
        case 9690: return "nian";    // Ûœ
        case 9692: return "tui";    // Û
        case 9694: return "ju";    // Ûž
        case 9696: return "xian";    // ÛŸ
        case 9698: return "zhong";    // Û 
        case 9700: return "bo";    // Ü@
        case 9702: return "cu";    // ÜA
        case 9704: return "jue";    // ÜB
        case 9706: return "lin";    // ÜC
        case 9708: return "ta";    // ÜD
        case 9710: return "qiao";    // ÜE
        case 9712: return "jiao";    // ÜF
        case 9714: return "liao";    // ÜG
        case 9716: return "dun";    // ÜH
        case 9718: return "guan";    // ÜI
        case 9720: return "da";    // ÜJ
        case 9722: return "bi";    // ÜK
        case 9724: return "bi";    // ÜL
        case 9726: return "ju";    // ÜM
        case 9728: return "qiao";    // ÜN
        case 9730: return "dun";    // ÜO
        case 9732: return "chou";    // ÜP
        case 9734: return "ji";    // ÜQ
        case 9736: return "wu";    // ÜR
        case 9738: return "yue";    // ÜS
        case 9740: return "nian";    // ÜT
        case 9742: return "zhi";    // ÜU
        case 9744: return "yue";    // ÜV
        case 9746: return "zhi";    // ÜW
        case 9748: return "chu";    // ÜX
        case 9750: return "duan";    // ÜY
        case 9752: return "wei";    // ÜZ
        case 9754: return "long";    // Ü[
        case 9756: return "lin";    // Ü\
        case 9758: return "xian";    // Ü]
        case 9760: return "wei";    // Ü^
        case 9762: return "lan";    // Ü_
        case 9764: return "rang";    // Ü`
        case 9766: return "xie";    // Üa
        case 9768: return "nie";    // Üb
        case 9770: return "ta";    // Üc
        case 9772: return "qu";    // Üd
        case 9774: return "ji";    // Üe
        case 9776: return "cuan";    // Üf
        case 9778: return "zuan";    // Üg
        case 9780: return "xi";    // Üh
        case 9782: return "kui";    // Üi
        case 9784: return "jue";    // Üj
        case 9786: return "lin";    // Ük
        case 9788: return "dan";    // Ül
        case 9790: return "fen";    // Üm
        case 9792: return "ti";    // Ün
        case 9794: return "duo";    // Üo
        case 9796: return "gong";    // Üp
        case 9798: return "lang";    // Üq
        case 9800: return "ren";    // Ür
        case 9802: return "luo";    // Üs
        case 9804: return "ai";    // Üt
        case 9806: return "ji";    // Üu
        case 9808: return "ju";    // Üv
        case 9810: return "kong";    // Üw
        case 9812: return "lao";    // Üx
        case 9814: return "yan";    // Üy
        case 9816: return "mei";    // Üz
        case 9818: return "kang";    // Ü{
        case 9820: return "qu";    // Ü|
        case 9822: return "lou";    // Ü}
        case 9824: return "lao";    // Ü~
        case 9826: return "";    // ?
        case 9828: return "tuo";    // Ü€
        case 9830: return "zhi";    // Ü
        case 9832: return "yan";    // Ü‚
        case 9834: return "ti";    // Üƒ
        case 9836: return "dao";    // Ü„
        case 9838: return "ying";    // Ü…
        case 9840: return "yu";    // Ü†
        case 9842: return "che";    // Ü‡
        case 9844: return "zha";    // Üˆ
        case 9846: return "gui";    // Ü‰
        case 9848: return "jun";    // ÜŠ
        case 9850: return "yue";    // Ü‹
        case 9852: return "xian";    // ÜŒ
        case 9854: return "dai";    // Ü
        case 9856: return "xuan";    // ÜŽ
        case 9858: return "fan";    // Ü
        case 9860: return "ren";    // Ü
        case 9862: return "shan";    // Ü‘
        case 9864: return "kuang";    // Ü’
        case 9866: return "shu";    // Ü“
        case 9868: return "tun";    // Ü”
        case 9870: return "qi";    // Ü•
        case 9872: return "dai";    // Ü–
        case 9874: return "e";    // Ü—
        case 9876: return "na";    // Ü˜
        case 9878: return "qi";    // Ü™
        case 9880: return "mao";    // Üš
        case 9882: return "ruan";    // Ü›
        case 9884: return "kuang";    // Üœ
        case 9886: return "qian";    // Ü
        case 9888: return "zhuan";    // Üž
        case 9890: return "hong";    // ÜŸ
        case 9892: return "hu";    // Ü 
        case 9894: return "gou";    // Ý@
        case 9896: return "kuang";    // ÝA
        case 9898: return "di";    // ÝB
        case 9900: return "ling";    // ÝC
        case 9902: return "dai";    // ÝD
        case 9904: return "ao";    // ÝE
        case 9906: return "zhen";    // ÝF
        case 9908: return "fan";    // ÝG
        case 9910: return "kuang";    // ÝH
        case 9912: return "yang";    // ÝI
        case 9914: return "peng";    // ÝJ
        case 9916: return "bei";    // ÝK
        case 9918: return "gu";    // ÝL
        case 9920: return "gu";    // ÝM
        case 9922: return "pao";    // ÝN
        case 9924: return "zhu";    // ÝO
        case 9926: return "fu";    // ÝP
        case 9928: return "e";    // ÝQ
        case 9930: return "ba";    // ÝR
        case 9932: return "zhou";    // ÝS
        case 9934: return "zhi";    // ÝT
        case 9936: return "yao";    // ÝU
        case 9938: return "ke";    // ÝV
        case 9940: return "yi";    // ÝW
        case 9942: return "qing";    // ÝX
        case 9944: return "shi";    // ÝY
        case 9946: return "peng";    // ÝZ
        case 9948: return "er";    // Ý[
        case 9950: return "gong";    // Ý\
        case 9952: return "ju";    // Ý]
        case 9954: return "jiao";    // Ý^
        case 9956: return "guang";    // Ý_
        case 9958: return "lu";    // Ý`
        case 9960: return "kai";    // Ýa
        case 9962: return "quan";    // Ýb
        case 9964: return "zhou";    // Ýc
        case 9966: return "zai";    // Ýd
        case 9968: return "zhi";    // Ýe
        case 9970: return "she";    // Ýf
        case 9972: return "liang";    // Ýg
        case 9974: return "yu";    // Ýh
        case 9976: return "shao";    // Ýi
        case 9978: return "you";    // Ýj
        case 9980: return "wan";    // Ýk
        case 9982: return "yin";    // Ýl
        case 9984: return "zhe";    // Ým
        case 9986: return "wan";    // Ýn
        case 9988: return "fu";    // Ýo
        case 9990: return "qing";    // Ýp
        case 9992: return "zhou";    // Ýq
        case 9994: return "yi";    // Ýr
        case 9996: return "leng";    // Ýs
        case 9998: return "zhe";    // Ýt
        case 10000: return "zhan";    // Ýu
        case 10002: return "liang";    // Ýv
        case 10004: return "zi";    // Ýw
        case 10006: return "hui";    // Ýx
        case 10008: return "wang";    // Ýy
        case 10010: return "chuo";    // Ýz
        case 10012: return "guo";    // Ý{
        case 10014: return "kan";    // Ý|
        case 10016: return "yi";    // Ý}
        case 10018: return "peng";    // Ý~
        case 10020: return "";    // ?
        case 10022: return "qian";    // Ý€
        case 10024: return "gun";    // Ý
        case 10026: return "nian";    // Ý‚
        case 10028: return "peng";    // Ýƒ
        case 10030: return "guan";    // Ý„
        case 10032: return "bei";    // Ý…
        case 10034: return "lun";    // Ý†
        case 10036: return "pai";    // Ý‡
        case 10038: return "liang";    // Ýˆ
        case 10040: return "er";    // Ý‰
        case 10042: return "rou";    // ÝŠ
        case 10044: return "ji";    // Ý‹
        case 10046: return "yang";    // ÝŒ
        case 10048: return "kan";    // Ý
        case 10050: return "chuan";    // ÝŽ
        case 10052: return "cou";    // Ý
        case 10054: return "chun";    // Ý
        case 10056: return "ya";    // Ý‘
        case 10058: return "you";    // Ý’
        case 10060: return "hong";    // Ý“
        case 10062: return "shu";    // Ý”
        case 10064: return "bu";    // Ý•
        case 10066: return "zi";    // Ý–
        case 10068: return "fu";    // Ý—
        case 10070: return "wen";    // Ý˜
        case 10072: return "ben";    // Ý™
        case 10074: return "nian";    // Ýš
        case 10076: return "yu";    // Ý›
        case 10078: return "yun";    // Ýœ
        case 10080: return "tao";    // Ý
        case 10082: return "gu";    // Ýž
        case 10084: return "zhen";    // ÝŸ
        case 10086: return "xia";    // Ý 
        case 10088: return "yuan";    // Þ@
        case 10090: return "lu";    // ÞA
        case 10092: return "jiao";    // ÞB
        case 10094: return "chao";    // ÞC
        case 10096: return "zhuan";    // ÞD
        case 10098: return "wei";    // ÞE
        case 10100: return "hun";    // ÞF
        case 10102: return "xue";    // ÞG
        case 10104: return "zhe";    // ÞH
        case 10106: return "jiao";    // ÞI
        case 10108: return "zhan";    // ÞJ
        case 10110: return "bu";    // ÞK
        case 10112: return "lao";    // ÞL
        case 10114: return "fen";    // ÞM
        case 10116: return "fan";    // ÞN
        case 10118: return "lin";    // ÞO
        case 10120: return "ge";    // ÞP
        case 10122: return "se";    // ÞQ
        case 10124: return "kan";    // ÞR
        case 10126: return "huan";    // ÞS
        case 10128: return "yi";    // ÞT
        case 10130: return "ji";    // ÞU
        case 10132: return "zhui";    // ÞV
        case 10134: return "er";    // ÞW
        case 10136: return "yu";    // ÞX
        case 10138: return "jian";    // ÞY
        case 10140: return "hong";    // ÞZ
        case 10142: return "lei";    // Þ[
        case 10144: return "pei";    // Þ\
        case 10146: return "li";    // Þ]
        case 10148: return "li";    // Þ^
        case 10150: return "lu";    // Þ_
        case 10152: return "lin";    // Þ`
        case 10154: return "dai";    // Þa
        case 10156: return "zhou";    // Þb
        case 10158: return "liang";    // Þc
        case 10160: return "wen";    // Þd
        case 10162: return "ci";    // Þe
        case 10164: return "zui";    // Þf
        case 10166: return "bian";    // Þg
        case 10168: return "la";    // Þh
        case 10170: return "ci";    // Þi
        case 10172: return "yi";    // Þj
        case 10174: return "ban";    // Þk
        case 10176: return "bian";    // Þl
        case 10178: return "xue";    // Þm
        case 10180: return "ban";    // Þn
        case 10182: return "ci";    // Þo
        case 10184: return "bian";    // Þp
        case 10186: return "bian";    // Þq
        case 10188: return "nong";    // Þr
        case 10190: return "nong";    // Þs
        case 10192: return "zhen";    // Þt
        case 10194: return "chuo";    // Þu
        case 10196: return "yi";    // Þv
        case 10198: return "reng";    // Þw
        case 10200: return "fan";    // Þx
        case 10202: return "shi";    // Þy
        case 10204: return "ru";    // Þz
        case 10206: return "chan";    // Þ{
        case 10208: return "gan";    // Þ|
        case 10210: return "yu";    // Þ}
        case 10212: return "tuo";    // Þ~
        case 10214: return "";    // ?
        case 10216: return "qi";    // Þ€
        case 10218: return "zha";    // Þ
        case 10220: return "wang";    // Þ‚
        case 10222: return "tu";    // Þƒ
        case 10224: return "zhun";    // Þ„
        case 10226: return "da";    // Þ…
        case 10228: return "hang";    // Þ†
        case 10230: return "da";    // Þ‡
        case 10232: return "e";    // Þˆ
        case 10234: return "zhong";    // Þ‰
        case 10236: return "che";    // ÞŠ
        case 10238: return "ni";    // Þ‹
        case 10240: return "zhi";    // ÞŒ
        case 10242: return "zhen";    // Þ
        case 10244: return "wang";    // ÞŽ
        case 10246: return "tao";    // Þ
        case 10248: return "yi";    // Þ
        case 10250: return "qu";    // Þ‘
        case 10252: return "hui";    // Þ’
        case 10254: return "dong";    // Þ“
        case 10256: return "you";    // Þ”
        case 10258: return "nai";    // Þ•
        case 10260: return "yi";    // Þ–
        case 10262: return "jie";    // Þ—
        case 10264: return "lie";    // Þ˜
        case 10266: return "xun";    // Þ™
        case 10268: return "dun";    // Þš
        case 10270: return "jiong";    // Þ›
        case 10272: return "you";    // Þœ
        case 10274: return "qiu";    // Þ
        case 10276: return "di";    // Þž
        case 10278: return "jing";    // ÞŸ
        case 10280: return "yi";    // Þ 
        case 10282: return "zhe";    // ß@
        case 10284: return "wu";    // ßA
        case 10286: return "lian";    // ßB
        case 10288: return "suo";    // ßC
        case 10290: return "hui";    // ßD
        case 10292: return "gu";    // ßE
        case 10294: return "lai";    // ßF
        case 10296: return "ben";    // ßG
        case 10298: return "cuo";    // ßH
        case 10300: return "jue";    // ßI
        case 10302: return "beng";    // ßJ
        case 10304: return "you";    // ßK
        case 10306: return "zhou";    // ßL
        case 10308: return "jin";    // ßM
        case 10310: return "yu";    // ßN
        case 10312: return "chuo";    // ßO
        case 10314: return "ti";    // ßP
        case 10316: return "da";    // ßQ
        case 10318: return "yuan";    // ßR
        case 10320: return "nuo";    // ßS
        case 10322: return "dang";    // ßT
        case 10324: return "sui";    // ßU
        case 10326: return "an";    // ßV
        case 10328: return "chi";    // ßW
        case 10330: return "ti";    // ßX
        case 10332: return "shi";    // ßY
        case 10334: return "zhen";    // ßZ
        case 10336: return "you";    // ß[
        case 10338: return "yun";    // ß\
        case 10340: return "e";    // ß]
        case 10342: return "guo";    // ß^
        case 10344: return "da";    // ß_
        case 10346: return "wei";    // ß`
        case 10348: return "nan";    // ßa
        case 10350: return "yao";    // ßb
        case 10352: return "chou";    // ßc
        case 10354: return "xun";    // ßd
        case 10356: return "ta";    // ße
        case 10358: return "di";    // ßf
        case 10360: return "zhi";    // ßg
        case 10362: return "yuan";    // ßh
        case 10364: return "su";    // ßi
        case 10366: return "ma";    // ßj
        case 10368: return "guan";    // ßk
        case 10370: return "zhang";    // ßl
        case 10372: return "shi";    // ßm
        case 10374: return "ca";    // ßn
        case 10376: return "chi";    // ßo
        case 10378: return "su";    // ßp
        case 10380: return "dun";    // ßq
        case 10382: return "di";    // ßr
        case 10384: return "lou";    // ßs
        case 10386: return "chi";    // ßt
        case 10388: return "cuo";    // ßu
        case 10390: return "rao";    // ßv
        case 10392: return "qian";    // ßw
        case 10394: return "xuan";    // ßx
        case 10396: return "yu";    // ßy
        case 10398: return "yi";    // ßz
        case 10400: return "e";    // ß{
        case 10402: return "liao";    // ß|
        case 10404: return "shi";    // ß}
        case 10406: return "mai";    // ß~
        case 10408: return "";    // ?
        case 10410: return "hai";    // ß€
        case 10412: return "zhan";    // ß
        case 10414: return "teng";    // ß‚
        case 10416: return "er";    // ßƒ
        case 10418: return "bian";    // ß„
        case 10420: return "bian";    // ß…
        case 10422: return "li";    // ß†
        case 10424: return "yuan";    // ß‡
        case 10426: return "you";    // ßˆ
        case 10428: return "luo";    // ß‰
        case 10430: return "li";    // ßŠ
        case 10432: return "ting";    // ß‹
        case 10434: return "qi";    // ßŒ
        case 10436: return "shan";    // ß
        case 10438: return "yu";    // ßŽ
        case 10440: return "fu";    // ß
        case 10442: return "wan";    // ß
        case 10444: return "fu";    // ß‘
        case 10446: return "kang";    // ß’
        case 10448: return "bin";    // ß“
        case 10450: return "xin";    // ß”
        case 10452: return "shen";    // ß•
        case 10454: return "yuan";    // ß–
        case 10456: return "cun";    // ß—
        case 10458: return "huo";    // ß˜
        case 10460: return "bang";    // ß™
        case 10462: return "ju";    // ßš
        case 10464: return "bi";    // ß›
        case 10466: return "wa";    // ßœ
        case 10468: return "kuang";    // ß
        case 10470: return "gui";    // ßž
        case 10472: return "shi";    // ßŸ
        case 10474: return "ku";    // ß 
        case 10476: return "gai";    // à@
        case 10478: return "xia";    // àA
        case 10480: return "ji";    // àB
        case 10482: return "hou";    // àC
        case 10484: return "geng";    // àD
        case 10486: return "xi";    // àE
        case 10488: return "gui";    // àF
        case 10490: return "na";    // àG
        case 10492: return "lang";    // àH
        case 10494: return "yan";    // àI
        case 10496: return "cheng";    // àJ
        case 10498: return "dou";    // àK
        case 10500: return "lu";    // àL
        case 10502: return "fu";    // àM
        case 10504: return "wu";    // àN
        case 10506: return "lang";    // àO
        case 10508: return "jia";    // àP
        case 10510: return "geng";    // àQ
        case 10512: return "bo";    // àR
        case 10514: return "qie";    // àS
        case 10516: return "ju";    // àT
        case 10518: return "ao";    // àU
        case 10520: return "qi";    // àV
        case 10522: return "qing";    // àW
        case 10524: return "zhou";    // àX
        case 10526: return "ju";    // àY
        case 10528: return "ping";    // àZ
        case 10530: return "lai";    // à[
        case 10532: return "ni";    // à\
        case 10534: return "you";    // à]
        case 10536: return "bu";    // à^
        case 10538: return "xiang";    // à_
        case 10540: return "ju";    // à`
        case 10542: return "yong";    // àa
        case 10544: return "qiao";    // àb
        case 10546: return "yi";    // àc
        case 10548: return "mei";    // àd
        case 10550: return "ruo";    // àe
        case 10552: return "bei";    // àf
        case 10554: return "shu";    // àg
        case 10556: return "yu";    // àh
        case 10558: return "yun";    // ài
        case 10560: return "hou";    // àj
        case 10562: return "kui";    // àk
        case 10564: return "xiang";    // àl
        case 10566: return "xiang";    // àm
        case 10568: return "sou";    // àn
        case 10570: return "tang";    // ào
        case 10572: return "ming";    // àp
        case 10574: return "xi";    // àq
        case 10576: return "ru";    // àr
        case 10578: return "chu";    // às
        case 10580: return "zi";    // àt
        case 10582: return "zou";    // àu
        case 10584: return "ye";    // àv
        case 10586: return "wu";    // àw
        case 10588: return "xiang";    // àx
        case 10590: return "yun";    // ày
        case 10592: return "hao";    // àz
        case 10594: return "yong";    // à{
        case 10596: return "mao";    // à|
        case 10598: return "chao";    // à}
        case 10600: return "fu";    // à~
        case 10602: return "";    // ?
        case 10604: return "liao";    // à€
        case 10606: return "zhuan";    // à
        case 10608: return "hu";    // à‚
        case 10610: return "qiao";    // àƒ
        case 10612: return "wan";    // à„
        case 10614: return "qiao";    // à…
        case 10616: return "xu";    // à†
        case 10618: return "deng";    // à‡
        case 10620: return "bi";    // àˆ
        case 10622: return "xun";    // à‰
        case 10624: return "bi";    // àŠ
        case 10626: return "zeng";    // à‹
        case 10628: return "wei";    // àŒ
        case 10630: return "zheng";    // à
        case 10632: return "mao";    // àŽ
        case 10634: return "lin";    // à
        case 10636: return "dan";    // à
        case 10638: return "meng";    // à‘
        case 10640: return "ye";    // à’
        case 10642: return "cao";    // à“
        case 10644: return "kuai";    // à”
        case 10646: return "feng";    // à•
        case 10648: return "meng";    // à–
        case 10650: return "kuang";    // à—
        case 10652: return "lian";    // à˜
        case 10654: return "zan";    // à™
        case 10656: return "chan";    // àš
        case 10658: return "you";    // à›
        case 10660: return "ji";    // àœ
        case 10662: return "yan";    // à
        case 10664: return "chan";    // àž
        case 10666: return "zan";    // àŸ
        case 10668: return "huan";    // à 
        case 10670: return "xi";    // á@
        case 10672: return "zan";    // áA
        case 10674: return "li";    // áB
        case 10676: return "yu";    // áC
        case 10678: return "yan";    // áD
        case 10680: return "zui";    // áE
        case 10682: return "mao";    // áF
        case 10684: return "dan";    // áG
        case 10686: return "dou";    // áH
        case 10688: return "zhen";    // áI
        case 10690: return "yuan";    // áJ
        case 10692: return "fu";    // áK
        case 10694: return "tian";    // áL
        case 10696: return "qia";    // áM
        case 10698: return "po";    // áN
        case 10700: return "chou";    // áO
        case 10702: return "zai";    // áP
        case 10704: return "chuo";    // áQ
        case 10706: return "you";    // áR
        case 10708: return "yin";    // áS
        case 10710: return "pu";    // áT
        case 10712: return "fu";    // áU
        case 10714: return "hai";    // áV
        case 10716: return "wei";    // áW
        case 10718: return "lu";    // áX
        case 10720: return "lan";    // áY
        case 10722: return "yan";    // áZ
        case 10724: return "tao";    // á[
        case 10726: return "zhan";    // á\
        case 10728: return "dan";    // á]
        case 10730: return "zhui";    // á^
        case 10732: return "jian";    // á_
        case 10734: return "du";    // á`
        case 10736: return "tan";    // áa
        case 10738: return "qiu";    // áb
        case 10740: return "chun";    // ác
        case 10742: return "yun";    // ád
        case 10744: return "fa";    // áe
        case 10746: return "ke";    // áf
        case 10748: return "sou";    // ág
        case 10750: return "chou";    // áh
        case 10752: return "cuo";    // ái
        case 10754: return "yun";    // áj
        case 10756: return "yong";    // ák
        case 10758: return "ang";    // ál
        case 10760: return "zha";    // ám
        case 10762: return "jiang";    // án
        case 10764: return "piao";    // áo
        case 10766: return "chan";    // áp
        case 10768: return "ou";    // áq
        case 10770: return "li";    // ár
        case 10772: return "zao";    // ás
        case 10774: return "yi";    // át
        case 10776: return "jiang";    // áu
        case 10778: return "tan";    // áv
        case 10780: return "po";    // áw
        case 10782: return "nong";    // áx
        case 10784: return "yi";    // áy
        case 10786: return "yan";    // áz
        case 10788: return "yi";    // á{
        case 10790: return "niang";    // á|
        case 10792: return "ru";    // á}
        case 10794: return "shou";    // á~
        case 10796: return "";    // ?
        case 10798: return "yan";    // á€
        case 10800: return "ling";    // á
        case 10802: return "mi";    // á‚
        case 10804: return "mi";    // áƒ
        case 10806: return "niang";    // á„
        case 10808: return "xin";    // á…
        case 10810: return "jiao";    // á†
        case 10812: return "shai";    // á‡
        case 10814: return "mi";    // áˆ
        case 10816: return "yan";    // á‰
        case 10818: return "bian";    // áŠ
        case 10820: return "shi";    // á‹
        case 10822: return "shi";    // áŒ
        case 10824: return "li";    // á
        case 10826: return "jin";    // áŽ
        case 10828: return "ga";    // á
        case 10830: return "yi";    // á
        case 10832: return "liao";    // á‘
        case 10834: return "dao";    // á’
        case 10836: return "zhao";    // á“
        case 10838: return "ding";    // á”
        case 10840: return "po";    // á•
        case 10842: return "qiu";    // á–
        case 10844: return "ba";    // á—
        case 10846: return "zhen";    // á˜
        case 10848: return "zhi";    // á™
        case 10850: return "ba";    // áš
        case 10852: return "luan";    // á›
        case 10854: return "fu";    // áœ
        case 10856: return "nai";    // á
        case 10858: return "diao";    // áž
        case 10860: return "shan";    // áŸ
        case 10862: return "jiao";    // á 
        case 10864: return "kou";    // â@
        case 10866: return "chuan";    // âA
        case 10868: return "zi";    // âB
        case 10870: return "fan";    // âC
        case 10872: return "yu";    // âD
        case 10874: return "wu";    // âE
        case 10876: return "gan";    // âF
        case 10878: return "gang";    // âG
        case 10880: return "qi";    // âH
        case 10882: return "mang";    // âI
        case 10884: return "ri";    // âJ
        case 10886: return "di";    // âK
        case 10888: return "si";    // âL
        case 10890: return "xi";    // âM
        case 10892: return "yi";    // âN
        case 10894: return "chai";    // âO
        case 10896: return "yi";    // âP
        case 10898: return "tu";    // âQ
        case 10900: return "xi";    // âR
        case 10902: return "nu";    // âS
        case 10904: return "qian";    // âT
        case 10906: return "qiu";    // âU
        case 10908: return "jian";    // âV
        case 10910: return "pi";    // âW
        case 10912: return "ya";    // âX
        case 10914: return "yin";    // âY
        case 10916: return "ba";    // âZ
        case 10918: return "fang";    // â[
        case 10920: return "qin";    // â\
        case 10922: return "jian";    // â]
        case 10924: return "dou";    // â^
        case 10926: return "yue";    // â_
        case 10928: return "qian";    // â`
        case 10930: return "fu";    // âa
        case 10932: return "bu";    // âb
        case 10934: return "na";    // âc
        case 10936: return "qin";    // âd
        case 10938: return "e";    // âe
        case 10940: return "jue";    // âf
        case 10942: return "dun";    // âg
        case 10944: return "gou";    // âh
        case 10946: return "yin";    // âi
        case 10948: return "qian";    // âj
        case 10950: return "ban";    // âk
        case 10952: return "xi";    // âl
        case 10954: return "ren";    // âm
        case 10956: return "chao";    // ân
        case 10958: return "niu";    // âo
        case 10960: return "fen";    // âp
        case 10962: return "yun";    // âq
        case 10964: return "yi";    // âr
        case 10966: return "qin";    // âs
        case 10968: return "bi";    // ât
        case 10970: return "guo";    // âu
        case 10972: return "hong";    // âv
        case 10974: return "yin";    // âw
        case 10976: return "jun";    // âx
        case 10978: return "diao";    // ây
        case 10980: return "yi";    // âz
        case 10982: return "zhong";    // â{
        case 10984: return "xi";    // â|
        case 10986: return "gai";    // â}
        case 10988: return "ri";    // â~
        case 10990: return "";    // ?
        case 10992: return "huo";    // â€
        case 10994: return "tai";    // â
        case 10996: return "kang";    // â‚
        case 10998: return "yuan";    // âƒ
        case 11000: return "lu";    // â„
        case 11002: return "e";    // â…
        case 11004: return "wen";    // â†
        case 11006: return "duo";    // â‡
        case 11008: return "zi";    // âˆ
        case 11010: return "ni";    // â‰
        case 11012: return "tu";    // âŠ
        case 11014: return "shi";    // â‹
        case 11016: return "min";    // âŒ
        case 11018: return "pi";    // â
        case 11020: return "ke";    // âŽ
        case 11022: return "ling";    // â
        case 11024: return "bing";    // â
        case 11026: return "ci";    // â‘
        case 11028: return "gu";    // â’
        case 11030: return "bo";    // â“
        case 11032: return "pi";    // â”
        case 11034: return "yu";    // â•
        case 11036: return "si";    // â–
        case 11038: return "zuo";    // â—
        case 11040: return "bu";    // â˜
        case 11042: return "you";    // â™
        case 11044: return "dian";    // âš
        case 11046: return "jia";    // â›
        case 11048: return "zhen";    // âœ
        case 11050: return "shi";    // â
        case 11052: return "shi";    // âž
        case 11054: return "zhi";    // âŸ
        case 11056: return "ju";    // â 
        case 11058: return "zuan";    // ã@
        case 11060: return "yi";    // ãA
        case 11062: return "ta";    // ãB
        case 11064: return "xuan";    // ãC
        case 11066: return "zhao";    // ãD
        case 11068: return "bao";    // ãE
        case 11070: return "he";    // ãF
        case 11072: return "bi";    // ãG
        case 11074: return "sheng";    // ãH
        case 11076: return "chu";    // ãI
        case 11078: return "shi";    // ãJ
        case 11080: return "bo";    // ãK
        case 11082: return "zhu";    // ãL
        case 11084: return "chi";    // ãM
        case 11086: return "za";    // ãN
        case 11088: return "po";    // ãO
        case 11090: return "tong";    // ãP
        case 11092: return "qian";    // ãQ
        case 11094: return "fu";    // ãR
        case 11096: return "zhai";    // ãS
        case 11098: return "mao";    // ãT
        case 11100: return "qian";    // ãU
        case 11102: return "fu";    // ãV
        case 11104: return "li";    // ãW
        case 11106: return "yue";    // ãX
        case 11108: return "pi";    // ãY
        case 11110: return "yang";    // ãZ
        case 11112: return "ban";    // ã[
        case 11114: return "bo";    // ã\
        case 11116: return "jie";    // ã]
        case 11118: return "gou";    // ã^
        case 11120: return "xu";    // ã_
        case 11122: return "zheng";    // ã`
        case 11124: return "mu";    // ãa
        case 11126: return "ni";    // ãb
        case 11128: return "xi";    // ãc
        case 11130: return "di";    // ãd
        case 11132: return "jia";    // ãe
        case 11134: return "mu";    // ãf
        case 11136: return "tan";    // ãg
        case 11138: return "huan";    // ãh
        case 11140: return "yi";    // ãi
        case 11142: return "si";    // ãj
        case 11144: return "kuang";    // ãk
        case 11146: return "ka";    // ãl
        case 11148: return "bei";    // ãm
        case 11150: return "tong";    // ãn
        case 11152: return "xing";    // ão
        case 11154: return "hong";    // ãp
        case 11156: return "jiao";    // ãq
        case 11158: return "chi";    // ãr
        case 11160: return "er";    // ãs
        case 11162: return "ge";    // ãt
        case 11164: return "bing";    // ãu
        case 11166: return "shi";    // ãv
        case 11168: return "mao";    // ãw
        case 11170: return "ha";    // ãx
        case 11172: return "yin";    // ãy
        case 11174: return "jun";    // ãz
        case 11176: return "zhou";    // ã{
        case 11178: return "chong";    // ã|
        case 11180: return "jiong";    // ã}
        case 11182: return "tong";    // ã~
        case 11184: return "";    // ?
        case 11186: return "mo";    // ã€
        case 11188: return "lei";    // ã
        case 11190: return "ji";    // ã‚
        case 11192: return "yu";    // ãƒ
        case 11194: return "hui";    // ã„
        case 11196: return "ren";    // ã…
        case 11198: return "zun";    // ã†
        case 11200: return "zhi";    // ã‡
        case 11202: return "shan";    // ãˆ
        case 11204: return "li";    // ã‰
        case 11206: return "xi";    // ãŠ
        case 11208: return "jian";    // ã‹
        case 11210: return "quan";    // ãŒ
        case 11212: return "pi";    // ã
        case 11214: return "yi";    // ãŽ
        case 11216: return "zhu";    // ã
        case 11218: return "hou";    // ã
        case 11220: return "ming";    // ã‘
        case 11222: return "kua";    // ã’
        case 11224: return "tiao";    // ã“
        case 11226: return "tian";    // ã”
        case 11228: return "xian";    // ã•
        case 11230: return "xiu";    // ã–
        case 11232: return "jun";    // ã—
        case 11234: return "cha";    // ã˜
        case 11236: return "lao";    // ã™
        case 11238: return "ji";    // ãš
        case 11240: return "pi";    // ã›
        case 11242: return "ru";    // ãœ
        case 11244: return "mi";    // ã
        case 11246: return "yi";    // ãž
        case 11248: return "yin";    // ãŸ
        case 11250: return "guang";    // ã 
        case 11252: return "an";    // ä@
        case 11254: return "diu";    // äA
        case 11256: return "you";    // äB
        case 11258: return "se";    // äC
        case 11260: return "kao";    // äD
        case 11262: return "jian";    // äE
        case 11264: return "si";    // äF
        case 11266: return "ai";    // äG
        case 11268: return "diao";    // äH
        case 11270: return "han";    // äI
        case 11272: return "rui";    // äJ
        case 11274: return "zhi";    // äK
        case 11276: return "keng";    // äL
        case 11278: return "qiu";    // äM
        case 11280: return "xiao";    // äN
        case 11282: return "nie";    // äO
        case 11284: return "you";    // äP
        case 11286: return "zang";    // äQ
        case 11288: return "ti";    // äR
        case 11290: return "cuo";    // äS
        case 11292: return "gua";    // äT
        case 11294: return "gong";    // äU
        case 11296: return "yong";    // äV
        case 11298: return "dou";    // äW
        case 11300: return "lu";    // äX
        case 11302: return "mei";    // äY
        case 11304: return "lang";    // äZ
        case 11306: return "wan";    // ä[
        case 11308: return "xin";    // ä\
        case 11310: return "yun";    // ä]
        case 11312: return "bei";    // ä^
        case 11314: return "su";    // ä_
        case 11316: return "yu";    // ä`
        case 11318: return "chan";    // äa
        case 11320: return "ding";    // äb
        case 11322: return "bo";    // äc
        case 11324: return "han";    // äd
        case 11326: return "jia";    // äe
        case 11328: return "hong";    // äf
        case 11330: return "juan";    // äg
        case 11332: return "feng";    // äh
        case 11334: return "chan";    // äi
        case 11336: return "wan";    // äj
        case 11338: return "zhi";    // äk
        case 11340: return "tuo";    // äl
        case 11342: return "juan";    // äm
        case 11344: return "hu";    // än
        case 11346: return "wu";    // äo
        case 11348: return "tiao";    // äp
        case 11350: return "kuang";    // äq
        case 11352: return "chuo";    // är
        case 11354: return "lue";    // äs
        case 11356: return "xiang";    // ät
        case 11358: return "qian";    // äu
        case 11360: return "shen";    // äv
        case 11362: return "han";    // äw
        case 11364: return "lue";    // äx
        case 11366: return "ye";    // äy
        case 11368: return "chu";    // äz
        case 11370: return "zeng";    // ä{
        case 11372: return "ju";    // ä|
        case 11374: return "xian";    // ä}
        case 11376: return "e";    // ä~
        case 11378: return "";    // ?
        case 11380: return "mang";    // ä€
        case 11382: return "pu";    // ä
        case 11384: return "li";    // ä‚
        case 11386: return "pan";    // äƒ
        case 11388: return "dui";    // ä„
        case 11390: return "cheng";    // ä…
        case 11392: return "gao";    // ä†
        case 11394: return "li";    // ä‡
        case 11396: return "te";    // äˆ
        case 11398: return "bing";    // ä‰
        case 11400: return "zhu";    // äŠ
        case 11402: return "zhen";    // ä‹
        case 11404: return "tu";    // äŒ
        case 11406: return "liu";    // ä
        case 11408: return "nie";    // äŽ
        case 11410: return "ju";    // ä
        case 11412: return "chang";    // ä
        case 11414: return "yuan";    // ä‘
        case 11416: return "jian";    // ä’
        case 11418: return "gang";    // ä“
        case 11420: return "diao";    // ä”
        case 11422: return "tao";    // ä•
        case 11424: return "chang";    // ä–
        case 11426: return "fen";    // ä—
        case 11428: return "guo";    // ä˜
        case 11430: return "ling";    // ä™
        case 11432: return "pi";    // äš
        case 11434: return "lu";    // ä›
        case 11436: return "li";    // äœ
        case 11438: return "qiang";    // ä
        case 11440: return "pei";    // äž
        case 11442: return "juan";    // äŸ
        case 11444: return "min";    // ä 
        case 11446: return "zu";    // å@
        case 11448: return "beng";    // åA
        case 11450: return "an";    // åB
        case 11452: return "bei";    // åC
        case 11454: return "gan";    // åD
        case 11456: return "ya";    // åE
        case 11458: return "zhui";    // åF
        case 11460: return "lei";    // åG
        case 11462: return "a";    // åH
        case 11464: return "kong";    // åI
        case 11466: return "ta";    // åJ
        case 11468: return "kun";    // åK
        case 11470: return "du";    // åL
        case 11472: return "wei";    // åM
        case 11474: return "chui";    // åN
        case 11476: return "zi";    // åO
        case 11478: return "zheng";    // åP
        case 11480: return "ben";    // åQ
        case 11482: return "nie";    // åR
        case 11484: return "zong";    // åS
        case 11486: return "dui";    // åT
        case 11488: return "tan";    // åU
        case 11490: return "ding";    // åV
        case 11492: return "yi";    // åW
        case 11494: return "qian";    // åX
        case 11496: return "zhui";    // åY
        case 11498: return "ji";    // åZ
        case 11500: return "yu";    // å[
        case 11502: return "jin";    // å\
        case 11504: return "guan";    // å]
        case 11506: return "mao";    // å^
        case 11508: return "chang";    // å_
        case 11510: return "tian";    // å`
        case 11512: return "xi";    // åa
        case 11514: return "lian";    // åb
        case 11516: return "diao";    // åc
        case 11518: return "gu";    // åd
        case 11520: return "cuo";    // åe
        case 11522: return "shu";    // åf
        case 11524: return "zhen";    // åg
        case 11526: return "lu";    // åh
        case 11528: return "meng";    // åi
        case 11530: return "lu";    // åj
        case 11532: return "hua";    // åk
        case 11534: return "biao";    // ål
        case 11536: return "ga";    // åm
        case 11538: return "lai";    // ån
        case 11540: return "ken";    // åo
        case 11542: return "fang";    // åp
        case 11544: return "wu";    // åq
        case 11546: return "nai";    // år
        case 11548: return "wan";    // ås
        case 11550: return "hu";    // åt
        case 11552: return "de";    // åu
        case 11554: return "xian";    // åv
        case 11556: return "pian";    // åw
        case 11558: return "huo";    // åx
        case 11560: return "liang";    // åy
        case 11562: return "fa";    // åz
        case 11564: return "men";    // å{
        case 11566: return "kai";    // å|
        case 11568: return "yang";    // å}
        case 11570: return "di";    // å~
        case 11572: return "";    // ?
        case 11574: return "lian";    // å€
        case 11576: return "guo";    // å
        case 11578: return "xian";    // å‚
        case 11580: return "du";    // åƒ
        case 11582: return "tu";    // å„
        case 11584: return "wei";    // å…
        case 11586: return "wan";    // å†
        case 11588: return "fu";    // å‡
        case 11590: return "rou";    // åˆ
        case 11592: return "ji";    // å‰
        case 11594: return "e";    // åŠ
        case 11596: return "jun";    // å‹
        case 11598: return "zhen";    // åŒ
        case 11600: return "ti";    // å
        case 11602: return "zha";    // åŽ
        case 11604: return "hu";    // å
        case 11606: return "yang";    // å
        case 11608: return "duan";    // å‘
        case 11610: return "xia";    // å’
        case 11612: return "yu";    // å“
        case 11614: return "keng";    // å”
        case 11616: return "sheng";    // å•
        case 11618: return "huang";    // å–
        case 11620: return "wei";    // å—
        case 11622: return "fu";    // å˜
        case 11624: return "zhao";    // å™
        case 11626: return "cha";    // åš
        case 11628: return "qie";    // å›
        case 11630: return "shi";    // åœ
        case 11632: return "hong";    // å
        case 11634: return "kui";    // åž
        case 11636: return "tian";    // åŸ
        case 11638: return "qiao";    // å 
        case 11640: return "qiao";    // æ@
        case 11642: return "hou";    // æA
        case 11644: return "tou";    // æB
        case 11646: return "zong";    // æC
        case 11648: return "huan";    // æD
        case 11650: return "ye";    // æE
        case 11652: return "min";    // æF
        case 11654: return "jian";    // æG
        case 11656: return "duan";    // æH
        case 11658: return "jian";    // æI
        case 11660: return "si";    // æJ
        case 11662: return "kui";    // æK
        case 11664: return "hu";    // æL
        case 11666: return "xuan";    // æM
        case 11668: return "zhe";    // æN
        case 11670: return "jie";    // æO
        case 11672: return "qian";    // æP
        case 11674: return "bian";    // æQ
        case 11676: return "zhong";    // æR
        case 11678: return "zi";    // æS
        case 11680: return "xiu";    // æT
        case 11682: return "ye";    // æU
        case 11684: return "mei";    // æV
        case 11686: return "pai";    // æW
        case 11688: return "ai";    // æX
        case 11690: return "gai";    // æY
        case 11692: return "qian";    // æZ
        case 11694: return "mei";    // æ[
        case 11696: return "cha";    // æ\
        case 11698: return "da";    // æ]
        case 11700: return "bang";    // æ^
        case 11702: return "xia";    // æ_
        case 11704: return "lian";    // æ`
        case 11706: return "se";    // æa
        case 11708: return "kai";    // æb
        case 11710: return "yao";    // æc
        case 11712: return "ye";    // æd
        case 11714: return "nou";    // æe
        case 11716: return "weng";    // æf
        case 11718: return "rong";    // æg
        case 11720: return "tang";    // æh
        case 11722: return "suo";    // æi
        case 11724: return "qiang";    // æj
        case 11726: return "ge";    // æk
        case 11728: return "shuo";    // æl
        case 11730: return "dui";    // æm
        case 11732: return "bo";    // æn
        case 11734: return "pan";    // æo
        case 11736: return "da";    // æp
        case 11738: return "bi";    // æq
        case 11740: return "sang";    // ær
        case 11742: return "gang";    // æs
        case 11744: return "zi";    // æt
        case 11746: return "wu";    // æu
        case 11748: return "ying";    // æv
        case 11750: return "huang";    // æw
        case 11752: return "tiao";    // æx
        case 11754: return "liu";    // æy
        case 11756: return "kai";    // æz
        case 11758: return "sun";    // æ{
        case 11760: return "shi";    // æ|
        case 11762: return "sou";    // æ}
        case 11764: return "wan";    // æ~
        case 11766: return "";    // ?
        case 11768: return "gao";    // æ€
        case 11770: return "zhen";    // æ
        case 11772: return "zhen";    // æ‚
        case 11774: return "lang";    // æƒ
        case 11776: return "yi";    // æ„
        case 11778: return "yuan";    // æ…
        case 11780: return "tang";    // æ†
        case 11782: return "nie";    // æ‡
        case 11784: return "xi";    // æˆ
        case 11786: return "jia";    // æ‰
        case 11788: return "ge";    // æŠ
        case 11790: return "ma";    // æ‹
        case 11792: return "juan";    // æŒ
        case 11794: return "song";    // æ
        case 11796: return "zu";    // æŽ
        case 11798: return "suo";    // æ
        case 11800: return "xia";    // æ
        case 11802: return "feng";    // æ‘
        case 11804: return "wen";    // æ’
        case 11806: return "na";    // æ“
        case 11808: return "lu";    // æ”
        case 11810: return "suo";    // æ•
        case 11812: return "ou";    // æ–
        case 11814: return "zu";    // æ—
        case 11816: return "tuan";    // æ˜
        case 11818: return "xiu";    // æ™
        case 11820: return "guan";    // æš
        case 11822: return "xuan";    // æ›
        case 11824: return "lian";    // æœ
        case 11826: return "shou";    // æ
        case 11828: return "man";    // æž
        case 11830: return "mo";    // æŸ
        case 11832: return "luo";    // æ 
        case 11834: return "bi";    // ç@
        case 11836: return "wei";    // çA
        case 11838: return "liao";    // çB
        case 11840: return "di";    // çC
        case 11842: return "qiao";    // çD
        case 11844: return "zong";    // çE
        case 11846: return "yi";    // çF
        case 11848: return "ao";    // çG
        case 11850: return "keng";    // çH
        case 11852: return "qiang";    // çI
        case 11854: return "cui";    // çJ
        case 11856: return "qi";    // çK
        case 11858: return "chang";    // çL
        case 11860: return "tang";    // çM
        case 11862: return "man";    // çN
        case 11864: return "yong";    // çO
        case 11866: return "chan";    // çP
        case 11868: return "feng";    // çQ
        case 11870: return "jing";    // çR
        case 11872: return "biao";    // çS
        case 11874: return "shu";    // çT
        case 11876: return "lou";    // çU
        case 11878: return "xiu";    // çV
        case 11880: return "cong";    // çW
        case 11882: return "long";    // çX
        case 11884: return "zan";    // çY
        case 11886: return "jian";    // çZ
        case 11888: return "cao";    // ç[
        case 11890: return "li";    // ç\
        case 11892: return "xia";    // ç]
        case 11894: return "xi";    // ç^
        case 11896: return "kang";    // ç_
        case 11898: return "shuang";    // ç`
        case 11900: return "beng";    // ça
        case 11902: return "zhang";    // çb
        case 11904: return "qian";    // çc
        case 11906: return "cheng";    // çd
        case 11908: return "lu";    // çe
        case 11910: return "hua";    // çf
        case 11912: return "ji";    // çg
        case 11914: return "pu";    // çh
        case 11916: return "hui";    // çi
        case 11918: return "qiang";    // çj
        case 11920: return "po";    // çk
        case 11922: return "lin";    // çl
        case 11924: return "se";    // çm
        case 11926: return "xiu";    // çn
        case 11928: return "xian";    // ço
        case 11930: return "cheng";    // çp
        case 11932: return "kui";    // çq
        case 11934: return "si";    // çr
        case 11936: return "liu";    // çs
        case 11938: return "nao";    // çt
        case 11940: return "huang";    // çu
        case 11942: return "pie";    // çv
        case 11944: return "sui";    // çw
        case 11946: return "fan";    // çx
        case 11948: return "qiao";    // çy
        case 11950: return "quan";    // çz
        case 11952: return "yang";    // ç{
        case 11954: return "tang";    // ç|
        case 11956: return "xiang";    // ç}
        case 11958: return "yu";    // ç~
        case 11960: return "";    // ?
        case 11962: return "jiao";    // ç€
        case 11964: return "zun";    // ç
        case 11966: return "liao";    // ç‚
        case 11968: return "qie";    // çƒ
        case 11970: return "lao";    // ç„
        case 11972: return "dun";    // ç…
        case 11974: return "tan";    // ç†
        case 11976: return "zan";    // ç‡
        case 11978: return "ji";    // çˆ
        case 11980: return "jian";    // ç‰
        case 11982: return "zhong";    // çŠ
        case 11984: return "deng";    // ç‹
        case 11986: return "ya";    // çŒ
        case 11988: return "ying";    // ç
        case 11990: return "dui";    // çŽ
        case 11992: return "jue";    // ç
        case 11994: return "nou";    // ç
        case 11996: return "ti";    // ç‘
        case 11998: return "pu";    // ç’
        case 12000: return "die";    // ç“
        case 12002: return "fan";    // ç”
        case 12004: return "zhang";    // ç•
        case 12006: return "ding";    // ç–
        case 12008: return "shan";    // ç—
        case 12010: return "kai";    // ç˜
        case 12012: return "jian";    // ç™
        case 12014: return "fei";    // çš
        case 12016: return "sui";    // ç›
        case 12018: return "lu";    // çœ
        case 12020: return "juan";    // ç
        case 12022: return "hui";    // çž
        case 12024: return "yu";    // çŸ
        case 12026: return "lian";    // ç 
        case 12028: return "zhuo";    // è@
        case 12030: return "qiao";    // èA
        case 12032: return "jian";    // èB
        case 12034: return "zhuo";    // èC
        case 12036: return "lei";    // èD
        case 12038: return "bei";    // èE
        case 12040: return "tie";    // èF
        case 12042: return "huan";    // èG
        case 12044: return "ye";    // èH
        case 12046: return "duo";    // èI
        case 12048: return "guo";    // èJ
        case 12050: return "cheng";    // èK
        case 12052: return "ju";    // èL
        case 12054: return "fen";    // èM
        case 12056: return "da";    // èN
        case 12058: return "yi";    // èO
        case 12060: return "ai";    // èP
        case 12062: return "zong";    // èQ
        case 12064: return "xun";    // èR
        case 12066: return "diao";    // èS
        case 12068: return "zhu";    // èT
        case 12070: return "heng";    // èU
        case 12072: return "zhui";    // èV
        case 12074: return "ji";    // èW
        case 12076: return "ni";    // èX
        case 12078: return "he";    // èY
        case 12080: return "huo";    // èZ
        case 12082: return "qing";    // è[
        case 12084: return "bin";    // è\
        case 12086: return "ying";    // è]
        case 12088: return "kui";    // è^
        case 12090: return "ning";    // è_
        case 12092: return "xu";    // è`
        case 12094: return "jian";    // èa
        case 12096: return "jian";    // èb
        case 12098: return "qian";    // èc
        case 12100: return "cha";    // èd
        case 12102: return "zhi";    // èe
        case 12104: return "mi";    // èf
        case 12106: return "li";    // èg
        case 12108: return "lei";    // èh
        case 12110: return "ji";    // èi
        case 12112: return "zuan";    // èj
        case 12114: return "kuang";    // èk
        case 12116: return "shang";    // èl
        case 12118: return "peng";    // èm
        case 12120: return "la";    // èn
        case 12122: return "du";    // èo
        case 12124: return "shuo";    // èp
        case 12126: return "chuo";    // èq
        case 12128: return "lu";    // èr
        case 12130: return "biao";    // ès
        case 12132: return "bao";    // èt
        case 12134: return "lu";    // èu
        case 12136: return "xian";    // èv
        case 12138: return "kuan";    // èw
        case 12140: return "long";    // èx
        case 12142: return "e";    // èy
        case 12144: return "lu";    // èz
        case 12146: return "jian";    // è{
        case 12148: return "lan";    // è|
        case 12150: return "bo";    // è}
        case 12152: return "jian";    // è~
        case 12154: return "";    // ?
        case 12156: return "yao";    // è€
        case 12158: return "chan";    // è
        case 12160: return "xiang";    // è‚
        case 12162: return "jian";    // èƒ
        case 12164: return "xi";    // è„
        case 12166: return "guan";    // è…
        case 12168: return "cang";    // è†
        case 12170: return "nie";    // è‡
        case 12172: return "lei";    // èˆ
        case 12174: return "cuan";    // è‰
        case 12176: return "qu";    // èŠ
        case 12178: return "pan";    // è‹
        case 12180: return "luo";    // èŒ
        case 12182: return "zuan";    // è
        case 12184: return "luan";    // èŽ
        case 12186: return "zao";    // è
        case 12188: return "yi";    // è
        case 12190: return "jue";    // è‘
        case 12192: return "tang";    // è’
        case 12194: return "zhu";    // è“
        case 12196: return "lan";    // è”
        case 12198: return "xi";    // è•
        case 12200: return "yang";    // è–
        case 12202: return "jian";    // è—
        case 12204: return "bao";    // è˜
        case 12206: return "xing";    // è™
        case 12208: return "mang";    // èš
        case 12210: return "ya";    // è›
        case 12212: return "zhi";    // èœ
        case 12214: return "tian";    // è
        case 12216: return "wu";    // èž
        case 12218: return "yi";    // èŸ
        case 12220: return "chang";    // è 
        case 12222: return "zhi";    // é@
        case 12224: return "ying";    // éA
        case 12226: return "huang";    // éB
        case 12228: return "zi";    // éC
        case 12230: return "bo";    // éD
        case 12232: return "tang";    // éE
        case 12234: return "rong";    // éF
        case 12236: return "beng";    // éG
        case 12238: return "liao";    // éH
        case 12240: return "huan";    // éI
        case 12242: return "la";    // éJ
        case 12244: return "chan";    // éK
        case 12246: return "zhang";    // éL
        case 12248: return "zhang";    // éM
        case 12250: return "jiu";    // éN
        case 12252: return "ao";    // éO
        case 12254: return "die";    // éP
        case 12256: return "jue";    // éQ
        case 12258: return "liao";    // éR
        case 12260: return "mi";    // éS
        case 12262: return "men";    // éT
        case 12264: return "ma";    // éU
        case 12266: return "shuan";    // éV
        case 12268: return "shan";    // éW
        case 12270: return "huo";    // éX
        case 12272: return "men";    // éY
        case 12274: return "yan";    // éZ
        case 12276: return "bi";    // é[
        case 12278: return "bi";    // é\
        case 12280: return "bi";    // é]
        case 12282: return "shan";    // é^
        case 12284: return "kai";    // é_
        case 12286: return "kang";    // é`
        case 12288: return "beng";    // éa
        case 12290: return "hong";    // éb
        case 12292: return "run";    // éc
        case 12294: return "san";    // éd
        case 12296: return "xian";    // ée
        case 12298: return "jian";    // éf
        case 12300: return "jian";    // ég
        case 12302: return "min";    // éh
        case 12304: return "xia";    // éi
        case 12306: return "shui";    // éj
        case 12308: return "dou";    // ék
        case 12310: return "zha";    // él
        case 12312: return "nao";    // ém
        case 12314: return "zhan";    // én
        case 12316: return "peng";    // éo
        case 12318: return "e";    // ép
        case 12320: return "ling";    // éq
        case 12322: return "bian";    // ér
        case 12324: return "bi";    // és
        case 12326: return "run";    // ét
        case 12328: return "ai";    // éu
        case 12330: return "wan";    // év
        case 12332: return "ge";    // éw
        case 12334: return "ge";    // éx
        case 12336: return "fa";    // éy
        case 12338: return "chu";    // éz
        case 12340: return "hong";    // é{
        case 12342: return "gui";    // é|
        case 12344: return "min";    // é}
        case 12346: return "seo";    // é~
        case 12348: return "";    // ?
        case 12350: return "kun";    // é€
        case 12352: return "lang";    // é
        case 12354: return "lu";    // é‚
        case 12356: return "ting";    // éƒ
        case 12358: return "sha";    // é„
        case 12360: return "ju";    // é…
        case 12362: return "yue";    // é†
        case 12364: return "yue";    // é‡
        case 12366: return "chan";    // éˆ
        case 12368: return "qu";    // é‰
        case 12370: return "lin";    // éŠ
        case 12372: return "chang";    // é‹
        case 12374: return "sha";    // éŒ
        case 12376: return "kun";    // é
        case 12378: return "yan";    // éŽ
        case 12380: return "wen";    // é
        case 12382: return "yan";    // é
        case 12384: return "yu";    // é‘
        case 12386: return "hun";    // é’
        case 12388: return "yu";    // é“
        case 12390: return "wen";    // é”
        case 12392: return "hong";    // é•
        case 12394: return "bao";    // é–
        case 12396: return "hong";    // é—
        case 12398: return "qu";    // é˜
        case 12400: return "yao";    // é™
        case 12402: return "wen";    // éš
        case 12404: return "pan";    // é›
        case 12406: return "an";    // éœ
        case 12408: return "wei";    // é
        case 12410: return "yin";    // éž
        case 12412: return "kuo";    // éŸ
        case 12414: return "que";    // é 
        case 12416: return "lan";    // ê@
        case 12418: return "du";    // êA
        case 12420: return "quan";    // êB
        case 12422: return "pai";    // êC
        case 12424: return "tian";    // êD
        case 12426: return "nie";    // êE
        case 12428: return "ta";    // êF
        case 12430: return "kai";    // êG
        case 12432: return "he";    // êH
        case 12434: return "que";    // êI
        case 12436: return "chuang";    // êJ
        case 12438: return "wan";    // êK
        case 12440: return "dou";    // êL
        case 12442: return "qi";    // êM
        case 12444: return "kui";    // êN
        case 12446: return "tang";    // êO
        case 12448: return "guan";    // êP
        case 12450: return "piao";    // êQ
        case 12452: return "kan";    // êR
        case 12454: return "xi";    // êS
        case 12456: return "hui";    // êT
        case 12458: return "chan";    // êU
        case 12460: return "pi";    // êV
        case 12462: return "dang";    // êW
        case 12464: return "huan";    // êX
        case 12466: return "ta";    // êY
        case 12468: return "wen";    // êZ
        case 12470: return "meng";    // ê[
        case 12472: return "bi";    // ê\
        case 12474: return "kai";    // ê]
        case 12476: return "du";    // ê^
        case 12478: return "hui";    // ê_
        case 12480: return "ta";    // ê`
        case 12482: return "huan";    // êa
        case 12484: return "le";    // êb
        case 12486: return "xin";    // êc
        case 12488: return "yi";    // êd
        case 12490: return "yi";    // êe
        case 12492: return "yin";    // êf
        case 12494: return "yang";    // êg
        case 12496: return "dou";    // êh
        case 12498: return "e";    // êi
        case 12500: return "sheng";    // êj
        case 12502: return "pei";    // êk
        case 12504: return "gang";    // êl
        case 12506: return "yan";    // êm
        case 12508: return "zhi";    // ên
        case 12510: return "pi";    // êo
        case 12512: return "cheng";    // êp
        case 12514: return "e";    // êq
        case 12516: return "qu";    // êr
        case 12518: return "di";    // ês
        case 12520: return "ling";    // êt
        case 12522: return "tuo";    // êu
        case 12524: return "bing";    // êv
        case 12526: return "duo";    // êw
        case 12528: return "shu";    // êx
        case 12530: return "duo";    // êy
        case 12532: return "er";    // êz
        case 12534: return "gui";    // ê{
        case 12536: return "yu";    // ê|
        case 12538: return "jun";    // ê}
        case 12540: return "qiao";    // ê~
        case 12542: return "";    // ?
        case 12544: return "jing";    // ê€
        case 12546: return "chun";    // ê
        case 12548: return "wu";    // ê‚
        case 12550: return "xia";    // êƒ
        case 12552: return "shan";    // ê„
        case 12554: return "sheng";    // ê…
        case 12556: return "bu";    // ê†
        case 12558: return "zhen";    // ê‡
        case 12560: return "xian";    // êˆ
        case 12562: return "dao";    // ê‰
        case 12564: return "pei";    // êŠ
        case 12566: return "yi";    // ê‹
        case 12568: return "dui";    // êŒ
        case 12570: return "lun";    // ê
        case 12572: return "yin";    // êŽ
        case 12574: return "ju";    // ê
        case 12576: return "chen";    // ê
        case 12578: return "lu";    // ê‘
        case 12580: return "sheng";    // ê’
        case 12582: return "xian";    // ê“
        case 12584: return "yin";    // ê”
        case 12586: return "du";    // ê•
        case 12588: return "yang";    // ê–
        case 12590: return "er";    // ê—
        case 12592: return "xia";    // ê˜
        case 12594: return "chong";    // ê™
        case 12596: return "yan";    // êš
        case 12598: return "yin";    // ê›
        case 12600: return "yu";    // êœ
        case 12602: return "di";    // ê
        case 12604: return "wei";    // êž
        case 12606: return "nie";    // êŸ
        case 12608: return "dui";    // ê 
        case 12610: return "an";    // ë@
        case 12612: return "jie";    // ëA
        case 12614: return "ai";    // ëB
        case 12616: return "yan";    // ëC
        case 12618: return "duo";    // ëD
        case 12620: return "yun";    // ëE
        case 12622: return "wu";    // ëF
        case 12624: return "tang";    // ëG
        case 12626: return "ji";    // ëH
        case 12628: return "dao";    // ëI
        case 12630: return "ao";    // ëJ
        case 12632: return "xi";    // ëK
        case 12634: return "yin";    // ëL
        case 12636: return "sa";    // ëM
        case 12638: return "rao";    // ëN
        case 12640: return "lin";    // ëO
        case 12642: return "tui";    // ëP
        case 12644: return "deng";    // ëQ
        case 12646: return "pi";    // ëR
        case 12648: return "sui";    // ëS
        case 12650: return "yu";    // ëT
        case 12652: return "xian";    // ëU
        case 12654: return "fen";    // ëV
        case 12656: return "ni";    // ëW
        case 12658: return "er";    // ëX
        case 12660: return "ji";    // ëY
        case 12662: return "dao";    // ëZ
        case 12664: return "yin";    // ë[
        case 12666: return "zhi";    // ë\
        case 12668: return "long";    // ë]
        case 12670: return "xi";    // ë^
        case 12672: return "li";    // ë_
        case 12674: return "li";    // ë`
        case 12676: return "he";    // ëa
        case 12678: return "zhi";    // ëb
        case 12680: return "yi";    // ëc
        case 12682: return "qin";    // ëd
        case 12684: return "jie";    // ëe
        case 12686: return "huan";    // ëf
        case 12688: return "gou";    // ëg
        case 12690: return "jun";    // ëh
        case 12692: return "hu";    // ëi
        case 12694: return "za";    // ëj
        case 12696: return "yu";    // ëk
        case 12698: return "chou";    // ël
        case 12700: return "sui";    // ëm
        case 12702: return "han";    // ën
        case 12704: return "wo";    // ëo
        case 12706: return "shuang";    // ëp
        case 12708: return "guan";    // ëq
        case 12710: return "chu";    // ër
        case 12712: return "za";    // ës
        case 12714: return "yong";    // ët
        case 12716: return "ji";    // ëu
        case 12718: return "gui";    // ëv
        case 12720: return "liu";    // ëw
        case 12722: return "li";    // ëx
        case 12724: return "nan";    // ëy
        case 12726: return "xue";    // ëz
        case 12728: return "za";    // ë{
        case 12730: return "ji";    // ë|
        case 12732: return "ji";    // ë}
        case 12734: return "na";    // ë~
        case 12736: return "";    // ?
        case 12738: return "fou";    // ë€
        case 12740: return "xi";    // ë
        case 12742: return "mu";    // ë‚
        case 12744: return "fen";    // ëƒ
        case 12746: return "pang";    // ë„
        case 12748: return "yun";    // ë…
        case 12750: return "chi";    // ë†
        case 12752: return "yang";    // ë‡
        case 12754: return "an";    // ëˆ
        case 12756: return "wu";    // ë‰
        case 12758: return "dian";    // ëŠ
        case 12760: return "dang";    // ë‹
        case 12762: return "hu";    // ëŒ
        case 12764: return "diao";    // ë
        case 12766: return "mu";    // ëŽ
        case 12768: return "chen";    // ë
        case 12770: return "zha";    // ë
        case 12772: return "ling";    // ë‘
        case 12774: return "qi";    // ë’
        case 12776: return "zhou";    // ë“
        case 12778: return "hong";    // ë”
        case 12780: return "zhan";    // ë•
        case 12782: return "yin";    // ë–
        case 12784: return "zhu";    // ë—
        case 12786: return "tun";    // ë˜
        case 12788: return "ling";    // ë™
        case 12790: return "dong";    // ëš
        case 12792: return "yang";    // ë›
        case 12794: return "wu";    // ëœ
        case 12796: return "ling";    // ë
        case 12798: return "ling";    // ëž
        case 12800: return "hong";    // ëŸ
        case 12802: return "yin";    // ë 
        case 12804: return "mai";    // ì@
        case 12806: return "mai";    // ìA
        case 12808: return "yun";    // ìB
        case 12810: return "liu";    // ìC
        case 12812: return "meng";    // ìD
        case 12814: return "bin";    // ìE
        case 12816: return "wu";    // ìF
        case 12818: return "wei";    // ìG
        case 12820: return "kuo";    // ìH
        case 12822: return "xi";    // ìI
        case 12824: return "yi";    // ìJ
        case 12826: return "dan";    // ìK
        case 12828: return "teng";    // ìL
        case 12830: return "yu";    // ìM
        case 12832: return "long";    // ìN
        case 12834: return "dai";    // ìO
        case 12836: return "ji";    // ìP
        case 12838: return "pang";    // ìQ
        case 12840: return "yang";    // ìR
        case 12842: return "wei";    // ìS
        case 12844: return "feng";    // ìT
        case 12846: return "xi";    // ìU
        case 12848: return "ji";    // ìV
        case 12850: return "mao";    // ìW
        case 12852: return "meng";    // ìX
        case 12854: return "lei";    // ìY
        case 12856: return "li";    // ìZ
        case 12858: return "huo";    // ì[
        case 12860: return "ai";    // ì\
        case 12862: return "fei";    // ì]
        case 12864: return "dai";    // ì^
        case 12866: return "ling";    // ì_
        case 12868: return "ling";    // ì`
        case 12870: return "ai";    // ìa
        case 12872: return "feng";    // ìb
        case 12874: return "li";    // ìc
        case 12876: return "bao";    // ìd
        case 12878: return "he";    // ìe
        case 12880: return "he";    // ìf
        case 12882: return "he";    // ìg
        case 12884: return "bing";    // ìh
        case 12886: return "jing";    // ìi
        case 12888: return "tian";    // ìj
        case 12890: return "zhen";    // ìk
        case 12892: return "cheng";    // ìl
        case 12894: return "qing";    // ìm
        case 12896: return "liang";    // ìn
        case 12898: return "jing";    // ìo
        case 12900: return "tian";    // ìp
        case 12902: return "fei";    // ìq
        case 12904: return "mian";    // ìr
        case 12906: return "bao";    // ìs
        case 12908: return "mian";    // ìt
        case 12910: return "hui";    // ìu
        case 12912: return "ye";    // ìv
        case 12914: return "ding";    // ìw
        case 12916: return "cha";    // ìx
        case 12918: return "jian";    // ìy
        case 12920: return "ren";    // ìz
        case 12922: return "di";    // ì{
        case 12924: return "du";    // ì|
        case 12926: return "wu";    // ì}
        case 12928: return "ren";    // ì~
        case 12930: return "";    // ?
        case 12932: return "qin";    // ì€
        case 12934: return "niu";    // ì
        case 12936: return "yin";    // ì‚
        case 12938: return "sa";    // ìƒ
        case 12940: return "na";    // ì„
        case 12942: return "wa";    // ì…
        case 12944: return "zu";    // ì†
        case 12946: return "ban";    // ì‡
        case 12948: return "yi";    // ìˆ
        case 12950: return "yao";    // ì‰
        case 12952: return "tao";    // ìŠ
        case 12954: return "bai";    // ì‹
        case 12956: return "jie";    // ìŒ
        case 12958: return "hong";    // ì
        case 12960: return "pao";    // ìŽ
        case 12962: return "bing";    // ì
        case 12964: return "yin";    // ì
        case 12966: return "ge";    // ì‘
        case 12968: return "tao";    // ì’
        case 12970: return "ji";    // ì“
        case 12972: return "an";    // ì”
        case 12974: return "hen";    // ì•
        case 12976: return "gong";    // ì–
        case 12978: return "qia";    // ì—
        case 12980: return "ting";    // ì˜
        case 12982: return "ying";    // ì™
        case 12984: return "sui";    // ìš
        case 12986: return "tiao";    // ì›
        case 12988: return "juan";    // ìœ
        case 12990: return "kong";    // ì
        case 12992: return "beng";    // ìž
        case 12994: return "ta";    // ìŸ
        case 12996: return "zhang";    // ì 
        case 12998: return "bi";    // í@
        case 13000: return "kuo";    // íA
        case 13002: return "la";    // íB
        case 13004: return "xie";    // íC
        case 13006: return "bang";    // íD
        case 13008: return "eng";    // íE
        case 13010: return "qiu";    // íF
        case 13012: return "qiu";    // íG
        case 13014: return "he";    // íH
        case 13016: return "qiao";    // íI
        case 13018: return "mou";    // íJ
        case 13020: return "jian";    // íK
        case 13022: return "di";    // íL
        case 13024: return "on";    // íM
        case 13026: return "tao";    // íN
        case 13028: return "ta";    // íO
        case 13030: return "xie";    // íP
        case 13032: return "pan";    // íQ
        case 13034: return "ge";    // íR
        case 13036: return "bi";    // íS
        case 13038: return "kuo";    // íT
        case 13040: return "tang";    // íU
        case 13042: return "lou";    // íV
        case 13044: return "gui";    // íW
        case 13046: return "qiao";    // íX
        case 13048: return "xue";    // íY
        case 13050: return "ji";    // íZ
        case 13052: return "jian";    // í[
        case 13054: return "jiang";    // í\
        case 13056: return "chan";    // í]
        case 13058: return "da";    // í^
        case 13060: return "hu";    // í_
        case 13062: return "xian";    // í`
        case 13064: return "qian";    // ía
        case 13066: return "du";    // íb
        case 13068: return "wa";    // íc
        case 13070: return "jian";    // íd
        case 13072: return "lan";    // íe
        case 13074: return "wei";    // íf
        case 13076: return "ren";    // íg
        case 13078: return "fu";    // íh
        case 13080: return "wa";    // íi
        case 13082: return "juan";    // íj
        case 13084: return "ge";    // ík
        case 13086: return "wei";    // íl
        case 13088: return "qiao";    // ím
        case 13090: return "han";    // ín
        case 13092: return "chang";    // ío
        case 13094: return "kuo";    // íp
        case 13096: return "rou";    // íq
        case 13098: return "yun";    // ír
        case 13100: return "she";    // ís
        case 13102: return "wei";    // ít
        case 13104: return "ge";    // íu
        case 13106: return "bai";    // ív
        case 13108: return "tao";    // íw
        case 13110: return "bei";    // íx
        case 13112: return "yun";    // íy
        case 13114: return "gao";    // íz
        case 13116: return "bi";    // í{
        case 13118: return "wei";    // í|
        case 13120: return "hui";    // í}
        case 13122: return "du";    // í~
        case 13124: return "";    // ?
        case 13126: return "wa";    // í€
        case 13128: return "du";    // í
        case 13130: return "fu";    // í‚
        case 13132: return "jiu";    // íƒ
        case 13134: return "xian";    // í„
        case 13136: return "xie";    // í…
        case 13138: return "xian";    // í†
        case 13140: return "ji";    // í‡
        case 13142: return "za";    // íˆ
        case 13144: return "le";    // í‰
        case 13146: return "peng";    // íŠ
        case 13148: return "ying";    // í‹
        case 13150: return "ying";    // íŒ
        case 13152: return "yun";    // í
        case 13154: return "peng";    // íŽ
        case 13156: return "an";    // í
        case 13158: return "yin";    // í
        case 13160: return "xiang";    // í‘
        case 13162: return "hu";    // í’
        case 13164: return "ye";    // í“
        case 13166: return "ding";    // í”
        case 13168: return "qing";    // í•
        case 13170: return "kui";    // í–
        case 13172: return "xiang";    // í—
        case 13174: return "shun";    // í˜
        case 13176: return "an";    // í™
        case 13178: return "xu";    // íš
        case 13180: return "yi";    // í›
        case 13182: return "xu";    // íœ
        case 13184: return "gu";    // í
        case 13186: return "song";    // íž
        case 13188: return "kui";    // íŸ
        case 13190: return "ken";    // í 
        case 13192: return "gang";    // î@
        case 13194: return "yu";    // îA
        case 13196: return "wan";    // îB
        case 13198: return "ban";    // îC
        case 13200: return "dun";    // îD
        case 13202: return "di";    // îE
        case 13204: return "dan";    // îF
        case 13206: return "pan";    // îG
        case 13208: return "po";    // îH
        case 13210: return "ling";    // îI
        case 13212: return "che";    // îJ
        case 13214: return "jing";    // îK
        case 13216: return "lei";    // îL
        case 13218: return "he";    // îM
        case 13220: return "qiao";    // îN
        case 13222: return "e";    // îO
        case 13224: return "e";    // îP
        case 13226: return "wei";    // îQ
        case 13228: return "jie";    // îR
        case 13230: return "kuo";    // îS
        case 13232: return "shen";    // îT
        case 13234: return "yi";    // îU
        case 13236: return "yi";    // îV
        case 13238: return "ke";    // îW
        case 13240: return "dui";    // îX
        case 13242: return "yu";    // îY
        case 13244: return "ping";    // îZ
        case 13246: return "lei";    // î[
        case 13248: return "tiao";    // î\
        case 13250: return "jia";    // î]
        case 13252: return "tou";    // î^
        case 13254: return "pou";    // î_
        case 13256: return "kui";    // î`
        case 13258: return "jia";    // îa
        case 13260: return "luo";    // îb
        case 13262: return "ting";    // îc
        case 13264: return "cheng";    // îd
        case 13266: return "ying";    // îe
        case 13268: return "yun";    // îf
        case 13270: return "hu";    // îg
        case 13272: return "han";    // îh
        case 13274: return "jing";    // îi
        case 13276: return "tui";    // îj
        case 13278: return "tui";    // îk
        case 13280: return "pin";    // îl
        case 13282: return "lai";    // îm
        case 13284: return "tui";    // în
        case 13286: return "zi";    // îo
        case 13288: return "zi";    // îp
        case 13290: return "chui";    // îq
        case 13292: return "ding";    // îr
        case 13294: return "lai";    // îs
        case 13296: return "tan";    // ît
        case 13298: return "han";    // îu
        case 13300: return "qian";    // îv
        case 13302: return "ke";    // îw
        case 13304: return "zu";    // îx
        case 13306: return "jiong";    // îy
        case 13308: return "qin";    // îz
        case 13310: return "yi";    // î{
        case 13312: return "sai";    // î|
        case 13314: return "ti";    // î}
        case 13316: return "e";    // î~
        case 13318: return "";    // ?
        case 13320: return "e";    // î€
        case 13322: return "yan";    // î
        case 13324: return "wen";    // î‚
        case 13326: return "yan";    // îƒ
        case 13328: return "yu";    // î„
        case 13330: return "zhuan";    // î…
        case 13332: return "ya";    // î†
        case 13334: return "xian";    // î‡
        case 13336: return "pi";    // îˆ
        case 13338: return "yi";    // î‰
        case 13340: return "yuan";    // îŠ
        case 13342: return "sang";    // î‹
        case 13344: return "dian";    // îŒ
        case 13346: return "dian";    // î
        case 13348: return "jiang";    // îŽ
        case 13350: return "kua";    // î
        case 13352: return "lei";    // î
        case 13354: return "lao";    // î‘
        case 13356: return "piao";    // î’
        case 13358: return "wai";    // î“
        case 13360: return "man";    // î”
        case 13362: return "cu";    // î•
        case 13364: return "yao";    // î–
        case 13366: return "hao";    // î—
        case 13368: return "qiao";    // î˜
        case 13370: return "gu";    // î™
        case 13372: return "xun";    // îš
        case 13374: return "yan";    // î›
        case 13376: return "hui";    // îœ
        case 13378: return "chan";    // î
        case 13380: return "ru";    // îž
        case 13382: return "meng";    // îŸ
        case 13384: return "bin";    // î 
        case 13386: return "xian";    // ï@
        case 13388: return "pin";    // ïA
        case 13390: return "lu";    // ïB
        case 13392: return "lan";    // ïC
        case 13394: return "nie";    // ïD
        case 13396: return "quan";    // ïE
        case 13398: return "ting";    // ïF
        case 13400: return "jiong";    // ïG
        case 13402: return "pou";    // ïH
        case 13404: return "ying";    // ïI
        case 13406: return "yu";    // ïJ
        case 13408: return "lei";    // ïK
        case 13410: return "feng";    // ïL
        case 13412: return "diao";    // ïM
        case 13414: return "gua";    // ïN
        case 13416: return "fu";    // ïO
        case 13418: return "xia";    // ïP
        case 13420: return "zhan";    // ïQ
        case 13422: return "pao";    // ïR
        case 13424: return "sa";    // ïS
        case 13426: return "ba";    // ïT
        case 13428: return "tai";    // ïU
        case 13430: return "lie";    // ïV
        case 13432: return "ji";    // ïW
        case 13434: return "xuan";    // ïX
        case 13436: return "xiao";    // ïY
        case 13438: return "ju";    // ïZ
        case 13440: return "biao";    // ï[
        case 13442: return "si";    // ï\
        case 13444: return "wei";    // ï]
        case 13446: return "yang";    // ï^
        case 13448: return "yao";    // ï_
        case 13450: return "sou";    // ï`
        case 13452: return "kai";    // ïa
        case 13454: return "sao";    // ïb
        case 13456: return "fan";    // ïc
        case 13458: return "liu";    // ïd
        case 13460: return "xi";    // ïe
        case 13462: return "liu";    // ïf
        case 13464: return "piao";    // ïg
        case 13466: return "piao";    // ïh
        case 13468: return "liu";    // ïi
        case 13470: return "biao";    // ïj
        case 13472: return "biao";    // ïk
        case 13474: return "biao";    // ïl
        case 13476: return "liao";    // ïm
        case 13478: return "biao";    // ïn
        case 13480: return "se";    // ïo
        case 13482: return "feng";    // ïp
        case 13484: return "xiu";    // ïq
        case 13486: return "yang";    // ïr
        case 13488: return "zhan";    // ïs
        case 13490: return "si";    // ït
        case 13492: return "yao";    // ïu
        case 13494: return "liu";    // ïv
        case 13496: return "fei";    // ïw
        case 13498: return "fan";    // ïx
        case 13500: return "fei";    // ïy
        case 13502: return "shi";    // ïz
        case 13504: return "can";    // ï{
        case 13506: return "ji";    // ï|
        case 13508: return "ding";    // ï}
        case 13510: return "si";    // ï~
        case 13512: return "";    // ?
        case 13514: return "tuo";    // ï€
        case 13516: return "gan";    // ï
        case 13518: return "tun";    // ï‚
        case 13520: return "ren";    // ïƒ
        case 13522: return "yu";    // ï„
        case 13524: return "yang";    // ï…
        case 13526: return "chi";    // ï†
        case 13528: return "yin";    // ï‡
        case 13530: return "fan";    // ïˆ
        case 13532: return "fan";    // ï‰
        case 13534: return "can";    // ïŠ
        case 13536: return "yin";    // ï‹
        case 13538: return "zhu";    // ïŒ
        case 13540: return "yi";    // ï
        case 13542: return "zuo";    // ïŽ
        case 13544: return "bi";    // ï
        case 13546: return "jie";    // ï
        case 13548: return "tao";    // ï‘
        case 13550: return "bao";    // ï’
        case 13552: return "ci";    // ï“
        case 13554: return "tie";    // ï”
        case 13556: return "si";    // ï•
        case 13558: return "bao";    // ï–
        case 13560: return "shi";    // ï—
        case 13562: return "duo";    // ï˜
        case 13564: return "hai";    // ï™
        case 13566: return "ren";    // ïš
        case 13568: return "tian";    // ï›
        case 13570: return "jiao";    // ïœ
        case 13572: return "he";    // ï
        case 13574: return "bing";    // ïž
        case 13576: return "yao";    // ïŸ
        case 13578: return "tong";    // ï 
        case 13580: return "ci";    // ð@
        case 13582: return "xiang";    // ðA
        case 13584: return "yang";    // ðB
        case 13586: return "juan";    // ðC
        case 13588: return "er";    // ðD
        case 13590: return "le";    // ðE
        case 13592: return "xi";    // ðF
        case 13594: return "bo";    // ðG
        case 13596: return "nei";    // ðH
        case 13598: return "e";    // ðI
        case 13600: return "bu";    // ðJ
        case 13602: return "jun";    // ðK
        case 13604: return "dou";    // ðL
        case 13606: return "su";    // ðM
        case 13608: return "yu";    // ðN
        case 13610: return "xi";    // ðO
        case 13612: return "yao";    // ðP
        case 13614: return "hun";    // ðQ
        case 13616: return "guo";    // ðR
        case 13618: return "chi";    // ðS
        case 13620: return "jian";    // ðT
        case 13622: return "zhui";    // ðU
        case 13624: return "bing";    // ðV
        case 13626: return "xian";    // ðW
        case 13628: return "bu";    // ðX
        case 13630: return "ye";    // ðY
        case 13632: return "dan";    // ðZ
        case 13634: return "fei";    // ð[
        case 13636: return "zhang";    // ð\
        case 13638: return "wei";    // ð]
        case 13640: return "guan";    // ð^
        case 13642: return "e";    // ð_
        case 13644: return "nuan";    // ð`
        case 13646: return "yun";    // ða
        case 13648: return "hu";    // ðb
        case 13650: return "huang";    // ðc
        case 13652: return "hui";    // ðd
        case 13654: return "jian";    // ðe
        case 13656: return "hou";    // ðf
        case 13658: return "ai";    // ðg
        case 13660: return "tang";    // ðh
        case 13662: return "fen";    // ði
        case 13664: return "wei";    // ðj
        case 13666: return "gu";    // ðk
        case 13668: return "zha";    // ðl
        case 13670: return "song";    // ðm
        case 13672: return "tang";    // ðn
        case 13674: return "bo";    // ðo
        case 13676: return "gao";    // ðp
        case 13678: return "xi";    // ðq
        case 13680: return "kui";    // ðr
        case 13682: return "liu";    // ðs
        case 13684: return "sou";    // ðt
        case 13686: return "tao";    // ðu
        case 13688: return "ye";    // ðv
        case 13690: return "wen";    // ðw
        case 13692: return "mo";    // ðx
        case 13694: return "tang";    // ðy
        case 13696: return "man";    // ðz
        case 13698: return "bi";    // ð{
        case 13700: return "yu";    // ð|
        case 13702: return "xiu";    // ð}
        case 13704: return "jin";    // ð~
        case 13706: return "";    // ?
        case 13708: return "san";    // ð€
        case 13710: return "kui";    // ð
        case 13712: return "zhuan";    // ð‚
        case 13714: return "shan";    // ðƒ
        case 13716: return "chi";    // ð„
        case 13718: return "dan";    // ð…
        case 13720: return "yi";    // ð†
        case 13722: return "qi";    // ð‡
        case 13724: return "rao";    // ðˆ
        case 13726: return "cheng";    // ð‰
        case 13728: return "wei";    // ðŠ
        case 13730: return "xiang";    // ð‹
        case 13732: return "zhan";    // ðŒ
        case 13734: return "fen";    // ð
        case 13736: return "hai";    // ðŽ
        case 13738: return "meng";    // ð
        case 13740: return "yan";    // ð
        case 13742: return "mo";    // ð‘
        case 13744: return "chan";    // ð’
        case 13746: return "xiang";    // ð“
        case 13748: return "luo";    // ð”
        case 13750: return "zan";    // ð•
        case 13752: return "nang";    // ð–
        case 13754: return "ding";    // ð—
        case 13756: return "tuo";    // ð˜
        case 13758: return "duo";    // ð™
        case 13760: return "he";    // ðš
        case 13762: return "le";    // ð›
        case 13764: return "xi";    // ðœ
        case 13766: return "dou";    // ð
        case 13768: return "jun";    // ðž
        case 13770: return "guo";    // ðŸ
        case 13772: return "gu";    // ð 
        case 13774: return "ye";    // ñ@
        case 13776: return "bo";    // ñA
        case 13778: return "fen";    // ñB
        case 13780: return "bo";    // ñC
        case 13782: return "ni";    // ñD
        case 13784: return "bi";    // ñE
        case 13786: return "bo";    // ñF
        case 13788: return "tu";    // ñG
        case 13790: return "han";    // ñH
        case 13792: return "fei";    // ñI
        case 13794: return "jian";    // ñJ
        case 13796: return "an";    // ñK
        case 13798: return "ai";    // ñL
        case 13800: return "xian";    // ñM
        case 13802: return "wo";    // ñN
        case 13804: return "fen";    // ñO
        case 13806: return "pin";    // ñP
        case 13808: return "xin";    // ñQ
        case 13810: return "ma";    // ñR
        case 13812: return "yu";    // ñS
        case 13814: return "feng";    // ñT
        case 13816: return "han";    // ñU
        case 13818: return "di";    // ñV
        case 13820: return "tuo";    // ñW
        case 13822: return "tuo";    // ñX
        case 13824: return "chi";    // ñY
        case 13826: return "xun";    // ñZ
        case 13828: return "zhu";    // ñ[
        case 13830: return "zhi";    // ñ\
        case 13832: return "pei";    // ñ]
        case 13834: return "jin";    // ñ^
        case 13836: return "ri";    // ñ_
        case 13838: return "sa";    // ñ`
        case 13840: return "yun";    // ña
        case 13842: return "wen";    // ñb
        case 13844: return "zhi";    // ñc
        case 13846: return "dan";    // ñd
        case 13848: return "lu";    // ñe
        case 13850: return "you";    // ñf
        case 13852: return "bo";    // ñg
        case 13854: return "bao";    // ñh
        case 13856: return "kuai";    // ñi
        case 13858: return "duo";    // ñj
        case 13860: return "yi";    // ñk
        case 13862: return "qu";    // ñl
        case 13864: return "pu";    // ñm
        case 13866: return "qu";    // ñn
        case 13868: return "jiong";    // ño
        case 13870: return "po";    // ñp
        case 13872: return "zhao";    // ñq
        case 13874: return "yuan";    // ñr
        case 13876: return "pei";    // ñs
        case 13878: return "zhou";    // ñt
        case 13880: return "ju";    // ñu
        case 13882: return "zhu";    // ñv
        case 13884: return "nu";    // ñw
        case 13886: return "ju";    // ñx
        case 13888: return "pi";    // ñy
        case 13890: return "zang";    // ñz
        case 13892: return "jia";    // ñ{
        case 13894: return "ling";    // ñ|
        case 13896: return "zhen";    // ñ}
        case 13898: return "tai";    // ñ~
        case 13900: return "";    // ?
        case 13902: return "fu";    // ñ€
        case 13904: return "yang";    // ñ
        case 13906: return "shi";    // ñ‚
        case 13908: return "bi";    // ñƒ
        case 13910: return "tuo";    // ñ„
        case 13912: return "tuo";    // ñ…
        case 13914: return "si";    // ñ†
        case 13916: return "liu";    // ñ‡
        case 13918: return "ma";    // ñˆ
        case 13920: return "pian";    // ñ‰
        case 13922: return "tao";    // ñŠ
        case 13924: return "zhi";    // ñ‹
        case 13926: return "rong";    // ñŒ
        case 13928: return "teng";    // ñ
        case 13930: return "dong";    // ñŽ
        case 13932: return "xuan";    // ñ
        case 13934: return "quan";    // ñ
        case 13936: return "shen";    // ñ‘
        case 13938: return "jiong";    // ñ’
        case 13940: return "er";    // ñ“
        case 13942: return "hai";    // ñ”
        case 13944: return "bo";    // ñ•
        case 13946: return "zhu";    // ñ–
        case 13948: return "yin";    // ñ—
        case 13950: return "luo";    // ñ˜
        case 13952: return "zhou";    // ñ™
        case 13954: return "dan";    // ñš
        case 13956: return "hai";    // ñ›
        case 13958: return "liu";    // ñœ
        case 13960: return "ju";    // ñ
        case 13962: return "song";    // ñž
        case 13964: return "qin";    // ñŸ
        case 13966: return "mang";    // ñ 
        case 13968: return "liang";    // ò@
        case 13970: return "han";    // òA
        case 13972: return "tu";    // òB
        case 13974: return "xuan";    // òC
        case 13976: return "tui";    // òD
        case 13978: return "jun";    // òE
        case 13980: return "e";    // òF
        case 13982: return "cheng";    // òG
        case 13984: return "xing";    // òH
        case 13986: return "ai";    // òI
        case 13988: return "lu";    // òJ
        case 13990: return "zhui";    // òK
        case 13992: return "dong";    // òL
        case 13994: return "she";    // òM
        case 13996: return "pian";    // òN
        case 13998: return "kun";    // òO
        case 14000: return "tao";    // òP
        case 14002: return "lai";    // òQ
        case 14004: return "zong";    // òR
        case 14006: return "ke";    // òS
        case 14008: return "qi";    // òT
        case 14010: return "qi";    // òU
        case 14012: return "yan";    // òV
        case 14014: return "fei";    // òW
        case 14016: return "sao";    // òX
        case 14018: return "yan";    // òY
        case 14020: return "ge";    // òZ
        case 14022: return "yao";    // ò[
        case 14024: return "wu";    // ò\
        case 14026: return "pian";    // ò]
        case 14028: return "cong";    // ò^
        case 14030: return "pian";    // ò_
        case 14032: return "qian";    // ò`
        case 14034: return "fei";    // òa
        case 14036: return "huang";    // òb
        case 14038: return "qian";    // òc
        case 14040: return "huo";    // òd
        case 14042: return "yu";    // òe
        case 14044: return "ti";    // òf
        case 14046: return "quan";    // òg
        case 14048: return "xia";    // òh
        case 14050: return "zong";    // òi
        case 14052: return "kui";    // òj
        case 14054: return "rou";    // òk
        case 14056: return "si";    // òl
        case 14058: return "gua";    // òm
        case 14060: return "tuo";    // òn
        case 14062: return "tui";    // òo
        case 14064: return "sou";    // òp
        case 14066: return "qian";    // òq
        case 14068: return "cheng";    // òr
        case 14070: return "zhi";    // òs
        case 14072: return "liu";    // òt
        case 14074: return "bang";    // òu
        case 14076: return "teng";    // òv
        case 14078: return "xi";    // òw
        case 14080: return "cao";    // òx
        case 14082: return "du";    // òy
        case 14084: return "yan";    // òz
        case 14086: return "yuan";    // ò{
        case 14088: return "zhu";    // ò|
        case 14090: return "sao";    // ò}
        case 14092: return "shan";    // ò~
        case 14094: return "";    // ?
        case 14096: return "qi";    // ò€
        case 14098: return "zhi";    // ò
        case 14100: return "shuang";    // ò‚
        case 14102: return "lu";    // òƒ
        case 14104: return "xi";    // ò„
        case 14106: return "luo";    // ò…
        case 14108: return "zhang";    // ò†
        case 14110: return "mo";    // ò‡
        case 14112: return "ao";    // òˆ
        case 14114: return "can";    // ò‰
        case 14116: return "biao";    // òŠ
        case 14118: return "cong";    // ò‹
        case 14120: return "qu";    // òŒ
        case 14122: return "bi";    // ò
        case 14124: return "zhi";    // òŽ
        case 14126: return "yu";    // ò
        case 14128: return "xu";    // ò
        case 14130: return "hua";    // ò‘
        case 14132: return "bo";    // ò’
        case 14134: return "su";    // ò“
        case 14136: return "xiao";    // ò”
        case 14138: return "lin";    // ò•
        case 14140: return "zhan";    // ò–
        case 14142: return "dun";    // ò—
        case 14144: return "liu";    // ò˜
        case 14146: return "tuo";    // ò™
        case 14148: return "ceng";    // òš
        case 14150: return "dian";    // ò›
        case 14152: return "jiao";    // òœ
        case 14154: return "tie";    // ò
        case 14156: return "yan";    // òž
        case 14158: return "luo";    // òŸ
        case 14160: return "zhan";    // ò 
        case 14162: return "jing";    // ó@
        case 14164: return "yi";    // óA
        case 14166: return "ye";    // óB
        case 14168: return "tuo";    // óC
        case 14170: return "pin";    // óD
        case 14172: return "zhou";    // óE
        case 14174: return "yan";    // óF
        case 14176: return "long";    // óG
        case 14178: return "lu";    // óH
        case 14180: return "teng";    // óI
        case 14182: return "xiang";    // óJ
        case 14184: return "ji";    // óK
        case 14186: return "shuang";    // óL
        case 14188: return "ju";    // óM
        case 14190: return "xi";    // óN
        case 14192: return "huan";    // óO
        case 14194: return "li";    // óP
        case 14196: return "biao";    // óQ
        case 14198: return "ri";    // óR
        case 14200: return "yin";    // óS
        case 14202: return "biao";    // óT
        case 14204: return "xing";    // óU
        case 14206: return "qin";    // óV
        case 14208: return "zong";    // óW
        case 14210: return "su";    // óX
        case 14212: return "kui";    // óY
        case 14214: return "shuang";    // óZ
        case 14216: return "wei";    // ó[
        case 14218: return "wei";    // ó\
        case 14220: return "wei";    // ó]
        case 14222: return "yu";    // ó^
        case 14224: return "gan";    // ó_
        case 14226: return "yi";    // ó`
        case 14228: return "ang";    // óa
        case 14230: return "bao";    // ób
        case 14232: return "bei";    // óc
        case 14234: return "zhai";    // ód
        case 14236: return "ti";    // óe
        case 14238: return "jiao";    // óf
        case 14240: return "kua";    // óg
        case 14242: return "tui";    // óh
        case 14244: return "geng";    // ói
        case 14246: return "pian";    // ój
        case 14248: return "yu";    // ók
        case 14250: return "sui";    // ól
        case 14252: return "bo";    // óm
        case 14254: return "xiao";    // ón
        case 14256: return "pang";    // óo
        case 14258: return "bo";    // óp
        case 14260: return "ci";    // óq
        case 14262: return "mo";    // ór
        case 14264: return "liao";    // ós
        case 14266: return "lou";    // ót
        case 14268: return "xiao";    // óu
        case 14270: return "zang";    // óv
        case 14272: return "ti";    // ów
        case 14274: return "bin";    // óx
        case 14276: return "kuan";    // óy
        case 14278: return "lu";    // óz
        case 14280: return "gao";    // ó{
        case 14282: return "qiao";    // ó|
        case 14284: return "kao";    // ó}
        case 14286: return "qiao";    // ó~
        case 14288: return "";    // ?
        case 14290: return "lao";    // ó€
        case 14292: return "sao";    // ó
        case 14294: return "kun";    // ó‚
        case 14296: return "di";    // óƒ
        case 14298: return "fang";    // ó„
        case 14300: return "xiu";    // ó…
        case 14302: return "ran";    // ó†
        case 14304: return "dan";    // ó‡
        case 14306: return "kun";    // óˆ
        case 14308: return "bin";    // ó‰
        case 14310: return "fa";    // óŠ
        case 14312: return "pi";    // ó‹
        case 14314: return "fa";    // óŒ
        case 14316: return "ti";    // ó
        case 14318: return "bao";    // óŽ
        case 14320: return "bi";    // ó
        case 14322: return "mao";    // ó
        case 14324: return "fei";    // ó‘
        case 14326: return "er";    // ó’
        case 14328: return "er";    // ó“
        case 14330: return "qu";    // ó”
        case 14332: return "gong";    // ó•
        case 14334: return "yue";    // ó–
        case 14336: return "peng";    // ó—
        case 14338: return "zhua";    // ó˜
        case 14340: return "shao";    // ó™
        case 14342: return "suo";    // óš
        case 14344: return "ti";    // ó›
        case 14346: return "li";    // óœ
        case 14348: return "bin";    // ó
        case 14350: return "di";    // óž
        case 14352: return "peng";    // óŸ
        case 14354: return "song";    // ó 
        case 14356: return "zheng";    // ô@
        case 14358: return "zong";    // ôA
        case 14360: return "shun";    // ôB
        case 14362: return "jian";    // ôC
        case 14364: return "duo";    // ôD
        case 14366: return "hu";    // ôE
        case 14368: return "la";    // ôF
        case 14370: return "qi";    // ôG
        case 14372: return "lian";    // ôH
        case 14374: return "zhen";    // ôI
        case 14376: return "peng";    // ôJ
        case 14378: return "ma";    // ôK
        case 14380: return "san";    // ôL
        case 14382: return "man";    // ôM
        case 14384: return "man";    // ôN
        case 14386: return "seng";    // ôO
        case 14388: return "xu";    // ôP
        case 14390: return "lie";    // ôQ
        case 14392: return "qian";    // ôR
        case 14394: return "qian";    // ôS
        case 14396: return "nang";    // ôT
        case 14398: return "kuo";    // ôU
        case 14400: return "ning";    // ôV
        case 14402: return "bin";    // ôW
        case 14404: return "ning";    // ôX
        case 14406: return "dou";    // ôY
        case 14408: return "dou";    // ôZ
        case 14410: return "nao";    // ô[
        case 14412: return "xiang";    // ô\
        case 14414: return "xi";    // ô]
        case 14416: return "dou";    // ô^
        case 14418: return "han";    // ô_
        case 14420: return "dou";    // ô`
        case 14422: return "dou";    // ôa
        case 14424: return "jiu";    // ôb
        case 14426: return "yu";    // ôc
        case 14428: return "yu";    // ôd
        case 14430: return "yan";    // ôe
        case 14432: return "fu";    // ôf
        case 14434: return "qin";    // ôg
        case 14436: return "gui";    // ôh
        case 14438: return "zeng";    // ôi
        case 14440: return "liu";    // ôj
        case 14442: return "gui";    // ôk
        case 14444: return "shang";    // ôl
        case 14446: return "mei";    // ôm
        case 14448: return "ji";    // ôn
        case 14450: return "qi";    // ôo
        case 14452: return "ga";    // ôp
        case 14454: return "xu";    // ôq
        case 14456: return "yu";    // ôr
        case 14458: return "tui";    // ôs
        case 14460: return "qi";    // ôt
        case 14462: return "liang";    // ôu
        case 14464: return "gan";    // ôv
        case 14466: return "piao";    // ôw
        case 14468: return "bi";    // ôx
        case 14470: return "qi";    // ôy
        case 14472: return "xu";    // ôz
        case 14474: return "chou";    // ô{
        case 14476: return "yan";    // ô|
        case 14478: return "zhan";    // ô}
        case 14480: return "yu";    // ô~
        case 14482: return "";    // ?
        case 14484: return "dao";    // ô€
        case 14486: return "ren";    // ô
        case 14488: return "ji";    // ô‚
        case 14490: return "ba";    // ôƒ
        case 14492: return "gong";    // ô„
        case 14494: return "tuo";    // ô…
        case 14496: return "di";    // ô†
        case 14498: return "ji";    // ô‡
        case 14500: return "yu";    // ôˆ
        case 14502: return "e";    // ô‰
        case 14504: return "e";    // ôŠ
        case 14506: return "sha";    // ô‹
        case 14508: return "hang";    // ôŒ
        case 14510: return "tun";    // ô
        case 14512: return "mo";    // ôŽ
        case 14514: return "jie";    // ô
        case 14516: return "shen";    // ô
        case 14518: return "ban";    // ô‘
        case 14520: return "wan";    // ô’
        case 14522: return "bi";    // ô“
        case 14524: return "lu";    // ô”
        case 14526: return "wen";    // ô•
        case 14528: return "hu";    // ô–
        case 14530: return "lu";    // ô—
        case 14532: return "shi";    // ô˜
        case 14534: return "fang";    // ô™
        case 14536: return "fen";    // ôš
        case 14538: return "na";    // ô›
        case 14540: return "you";    // ôœ
        case 14542: return "pian";    // ô
        case 14544: return "mo";    // ôž
        case 14546: return "he";    // ôŸ
        case 14548: return "xia";    // ô 
        case 14550: return "xie";    // õ@
        case 14552: return "han";    // õA
        case 14554: return "pi";    // õB
        case 14556: return "lin";    // õC
        case 14558: return "tuo";    // õD
        case 14560: return "ba";    // õE
        case 14562: return "qiu";    // õF
        case 14564: return "ping";    // õG
        case 14566: return "fu";    // õH
        case 14568: return "bi";    // õI
        case 14570: return "ji";    // õJ
        case 14572: return "wei";    // õK
        case 14574: return "ju";    // õL
        case 14576: return "diao";    // õM
        case 14578: return "ba";    // õN
        case 14580: return "you";    // õO
        case 14582: return "gun";    // õP
        case 14584: return "pi";    // õQ
        case 14586: return "nian";    // õR
        case 14588: return "xing";    // õS
        case 14590: return "tai";    // õT
        case 14592: return "bao";    // õU
        case 14594: return "fu";    // õV
        case 14596: return "zha";    // õW
        case 14598: return "ju";    // õX
        case 14600: return "gu";    // õY
        case 14602: return "shi";    // õZ
        case 14604: return "dong";    // õ[
        case 14606: return "dai";    // õ\
        case 14608: return "die";    // õ]
        case 14610: return "jie";    // õ^
        case 14612: return "shu";    // õ_
        case 14614: return "hou";    // õ`
        case 14616: return "xiang";    // õa
        case 14618: return "er";    // õb
        case 14620: return "an";    // õc
        case 14622: return "wei";    // õd
        case 14624: return "zhao";    // õe
        case 14626: return "zhu";    // õf
        case 14628: return "yin";    // õg
        case 14630: return "lie";    // õh
        case 14632: return "luo";    // õi
        case 14634: return "tong";    // õj
        case 14636: return "yi";    // õk
        case 14638: return "yi";    // õl
        case 14640: return "bi";    // õm
        case 14642: return "wei";    // õn
        case 14644: return "jiao";    // õo
        case 14646: return "ku";    // õp
        case 14648: return "gui";    // õq
        case 14650: return "xian";    // õr
        case 14652: return "ge";    // õs
        case 14654: return "hui";    // õt
        case 14656: return "lao";    // õu
        case 14658: return "fu";    // õv
        case 14660: return "kao";    // õw
        case 14662: return "xiu";    // õx
        case 14664: return "duo";    // õy
        case 14666: return "jun";    // õz
        case 14668: return "ti";    // õ{
        case 14670: return "mian";    // õ|
        case 14672: return "shao";    // õ}
        case 14674: return "zha";    // õ~
        case 14676: return "";    // ?
        case 14678: return "suo";    // õ€
        case 14680: return "qin";    // õ
        case 14682: return "yu";    // õ‚
        case 14684: return "nei";    // õƒ
        case 14686: return "zhe";    // õ„
        case 14688: return "gun";    // õ…
        case 14690: return "geng";    // õ†
        case 14692: return "su";    // õ‡
        case 14694: return "wu";    // õˆ
        case 14696: return "qiu";    // õ‰
        case 14698: return "shan";    // õŠ
        case 14700: return "bu";    // õ‹
        case 14702: return "huan";    // õŒ
        case 14704: return "tiao";    // õ
        case 14706: return "li";    // õŽ
        case 14708: return "sha";    // õ
        case 14710: return "sha";    // õ
        case 14712: return "kao";    // õ‘
        case 14714: return "meng";    // õ’
        case 14716: return "cheng";    // õ“
        case 14718: return "li";    // õ”
        case 14720: return "zou";    // õ•
        case 14722: return "xi";    // õ–
        case 14724: return "yong";    // õ—
        case 14726: return "shen";    // õ˜
        case 14728: return "zi";    // õ™
        case 14730: return "qi";    // õš
        case 14732: return "qing";    // õ›
        case 14734: return "xiang";    // õœ
        case 14736: return "nei";    // õ
        case 14738: return "chun";    // õž
        case 14740: return "ji";    // õŸ
        case 14742: return "diao";    // õ 
        case 14744: return "qie";    // ö@
        case 14746: return "gu";    // öA
        case 14748: return "zhou";    // öB
        case 14750: return "dong";    // öC
        case 14752: return "lai";    // öD
        case 14754: return "fei";    // öE
        case 14756: return "ni";    // öF
        case 14758: return "yi";    // öG
        case 14760: return "kun";    // öH
        case 14762: return "lu";    // öI
        case 14764: return "ai";    // öJ
        case 14766: return "chang";    // öK
        case 14768: return "jing";    // öL
        case 14770: return "lun";    // öM
        case 14772: return "ling";    // öN
        case 14774: return "zou";    // öO
        case 14776: return "li";    // öP
        case 14778: return "meng";    // öQ
        case 14780: return "zong";    // öR
        case 14782: return "ji";    // öS
        case 14784: return "nian";    // öT
        case 14786: return "hu";    // öU
        case 14788: return "yu";    // öV
        case 14790: return "di";    // öW
        case 14792: return "shi";    // öX
        case 14794: return "shen";    // öY
        case 14796: return "huan";    // öZ
        case 14798: return "ti";    // ö[
        case 14800: return "hou";    // ö\
        case 14802: return "xing";    // ö]
        case 14804: return "zhu";    // ö^
        case 14806: return "la";    // ö_
        case 14808: return "zong";    // ö`
        case 14810: return "ji";    // öa
        case 14812: return "bian";    // öb
        case 14814: return "bian";    // öc
        case 14816: return "huan";    // öd
        case 14818: return "quan";    // öe
        case 14820: return "zei";    // öf
        case 14822: return "wei";    // ög
        case 14824: return "wei";    // öh
        case 14826: return "yu";    // öi
        case 14828: return "chun";    // öj
        case 14830: return "rou";    // ök
        case 14832: return "die";    // öl
        case 14834: return "huang";    // öm
        case 14836: return "lian";    // ön
        case 14838: return "yan";    // öo
        case 14840: return "qiu";    // öp
        case 14842: return "qiu";    // öq
        case 14844: return "jian";    // ör
        case 14846: return "bi";    // ös
        case 14848: return "e";    // öt
        case 14850: return "yang";    // öu
        case 14852: return "fu";    // öv
        case 14854: return "sai";    // öw
        case 14856: return "gan";    // öx
        case 14858: return "xia";    // öy
        case 14860: return "wei";    // öz
        case 14862: return "hu";    // ö{
        case 14864: return "shi";    // ö|
        case 14866: return "ruo";    // ö}
        case 14868: return "xuan";    // ö~
        case 14870: return "";    // ?
        case 14872: return "wen";    // ö€
        case 14874: return "jian";    // ö
        case 14876: return "hao";    // ö‚
        case 14878: return "wu";    // öƒ
        case 14880: return "pang";    // ö„
        case 14882: return "sao";    // ö…
        case 14884: return "liu";    // ö†
        case 14886: return "ma";    // ö‡
        case 14888: return "shi";    // öˆ
        case 14890: return "shi";    // ö‰
        case 14892: return "guan";    // öŠ
        case 14894: return "zi";    // ö‹
        case 14896: return "teng";    // öŒ
        case 14898: return "ta";    // ö
        case 14900: return "yao";    // öŽ
        case 14902: return "e";    // ö
        case 14904: return "yong";    // ö
        case 14906: return "qian";    // ö‘
        case 14908: return "qi";    // ö’
        case 14910: return "wen";    // ö“
        case 14912: return "ruo";    // ö”
        case 14914: return "shen";    // ö•
        case 14916: return "lian";    // ö–
        case 14918: return "ao";    // ö—
        case 14920: return "le";    // ö˜
        case 14922: return "hui";    // ö™
        case 14924: return "min";    // öš
        case 14926: return "ji";    // ö›
        case 14928: return "tiao";    // öœ
        case 14930: return "qu";    // ö
        case 14932: return "jian";    // öž
        case 14934: return "shen";    // öŸ
        case 14936: return "man";    // ö 
        case 14938: return "xi";    // ÷@
        case 14940: return "qiu";    // ÷A
        case 14942: return "biao";    // ÷B
        case 14944: return "ji";    // ÷C
        case 14946: return "ji";    // ÷D
        case 14948: return "zhu";    // ÷E
        case 14950: return "jiang";    // ÷F
        case 14952: return "qiu";    // ÷G
        case 14954: return "tuan";    // ÷H
        case 14956: return "yong";    // ÷I
        case 14958: return "zhang";    // ÷J
        case 14960: return "kang";    // ÷K
        case 14962: return "xue";    // ÷L
        case 14964: return "bie";    // ÷M
        case 14966: return "yu";    // ÷N
        case 14968: return "qu";    // ÷O
        case 14970: return "xiang";    // ÷P
        case 14972: return "bo";    // ÷Q
        case 14974: return "jiao";    // ÷R
        case 14976: return "xun";    // ÷S
        case 14978: return "su";    // ÷T
        case 14980: return "huang";    // ÷U
        case 14982: return "zun";    // ÷V
        case 14984: return "tuo";    // ÷W
        case 14986: return "shan";    // ÷X
        case 14988: return "fan";    // ÷Y
        case 14990: return "gui";    // ÷Z
        case 14992: return "lin";    // ÷[
        case 14994: return "xun";    // ÷\
        case 14996: return "miao";    // ÷]
        case 14998: return "xi";    // ÷^
        case 15000: return "zeng";    // ÷_
        case 15002: return "xiang";    // ÷`
        case 15004: return "fen";    // ÷a
        case 15006: return "guan";    // ÷b
        case 15008: return "hou";    // ÷c
        case 15010: return "kuai";    // ÷d
        case 15012: return "zei";    // ÷e
        case 15014: return "sao";    // ÷f
        case 15016: return "shan";    // ÷g
        case 15018: return "gan";    // ÷h
        case 15020: return "gui";    // ÷i
        case 15022: return "ying";    // ÷j
        case 15024: return "li";    // ÷k
        case 15026: return "chang";    // ÷l
        case 15028: return "lei";    // ÷m
        case 15030: return "shu";    // ÷n
        case 15032: return "ai";    // ÷o
        case 15034: return "ru";    // ÷p
        case 15036: return "ji";    // ÷q
        case 15038: return "yu";    // ÷r
        case 15040: return "hu";    // ÷s
        case 15042: return "shu";    // ÷t
        case 15044: return "li";    // ÷u
        case 15046: return "la";    // ÷v
        case 15048: return "li";    // ÷w
        case 15050: return "mie";    // ÷x
        case 15052: return "zhen";    // ÷y
        case 15054: return "xiang";    // ÷z
        case 15056: return "e";    // ÷{
        case 15058: return "lu";    // ÷|
        case 15060: return "guan";    // ÷}
        case 15062: return "li";    // ÷~
        case 15064: return "";    // ?
        case 15066: return "xian";    // ÷€
        case 15068: return "dao";    // ÷
        case 15070: return "ji";    // ÷‚
        case 15072: return "tun";    // ÷ƒ
        case 15074: return "ba";    // ÷„
        case 15076: return "ge";    // ÷…
        case 15078: return "you";    // ÷†
        case 15080: return "zha";    // ÷‡
        case 15082: return "ba";    // ÷ˆ
        case 15084: return "pi";    // ÷‰
        case 15086: return "kao";    // ÷Š
        case 15088: return "tong";    // ÷‹
        case 15090: return "zei";    // ÷Œ
        case 15092: return "hou";    // ÷
        case 15094: return "kuai";    // ÷Ž
        case 15096: return "zha";    // ÷
        case 15098: return "jun";    // ÷
        case 15100: return "yong";    // ÷‘
        case 15102: return "qi";    // ÷’
        case 15104: return "shen";    // ÷“
        case 15106: return "bi";    // ÷”
        case 15108: return "chang";    // ÷•
        case 15110: return "ti";    // ÷–
        case 15112: return "wen";    // ÷—
        case 15114: return "wei";    // ÷˜
        case 15116: return "quan";    // ÷™
        case 15118: return "jiang";    // ÷š
        case 15120: return "pang";    // ÷›
        case 15122: return "jian";    // ÷œ
        case 15124: return "wei";    // ÷
        case 15126: return "xi";    // ÷ž
        case 15128: return "hu";    // ÷Ÿ
        case 15130: return "gan";    // ÷ 
        case 15132: return "zhan";    // ø@
        case 15134: return "guan";    // øA
        case 15136: return "niao";    // øB
        case 15138: return "yi";    // øC
        case 15140: return "fu";    // øD
        case 15142: return "li";    // øE
        case 15144: return "jiu";    // øF
        case 15146: return "bu";    // øG
        case 15148: return "yan";    // øH
        case 15150: return "fu";    // øI
        case 15152: return "diao";    // øJ
        case 15154: return "ji";    // øK
        case 15156: return "feng";    // øL
        case 15158: return "ru";    // øM
        case 15160: return "gan";    // øN
        case 15162: return "shi";    // øO
        case 15164: return "feng";    // øP
        case 15166: return "ming";    // øQ
        case 15168: return "bao";    // øR
        case 15170: return "yuan";    // øS
        case 15172: return "zhi";    // øT
        case 15174: return "hu";    // øU
        case 15176: return "qin";    // øV
        case 15178: return "fu";    // øW
        case 15180: return "ban";    // øX
        case 15182: return "wen";    // øY
        case 15184: return "jian";    // øZ
        case 15186: return "shi";    // ø[
        case 15188: return "yu";    // ø\
        case 15190: return "fou";    // ø]
        case 15192: return "ao";    // ø^
        case 15194: return "gui";    // ø_
        case 15196: return "gui";    // ø`
        case 15198: return "pi";    // øa
        case 15200: return "huan";    // øb
        case 15202: return "zhen";    // øc
        case 15204: return "bao";    // ød
        case 15206: return "yan";    // øe
        case 15208: return "ya";    // øf
        case 15210: return "zheng";    // øg
        case 15212: return "fang";    // øh
        case 15214: return "feng";    // øi
        case 15216: return "wen";    // øj
        case 15218: return "ou";    // øk
        case 15220: return "dai";    // øl
        case 15222: return "ge";    // øm
        case 15224: return "ru";    // øn
        case 15226: return "ling";    // øo
        case 15228: return "bi";    // øp
        case 15230: return "fu";    // øq
        case 15232: return "tuo";    // ør
        case 15234: return "wen";    // øs
        case 15236: return "li";    // øt
        case 15238: return "bian";    // øu
        case 15240: return "zhi";    // øv
        case 15242: return "ge";    // øw
        case 15244: return "yuan";    // øx
        case 15246: return "ci";    // øy
        case 15248: return "gou";    // øz
        case 15250: return "xiao";    // ø{
        case 15252: return "chi";    // ø|
        case 15254: return "dan";    // ø}
        case 15256: return "ju";    // ø~
        case 15258: return "";    // ?
        case 15260: return "yao";    // ø€
        case 15262: return "gu";    // ø
        case 15264: return "zhong";    // ø‚
        case 15266: return "yu";    // øƒ
        case 15268: return "yang";    // ø„
        case 15270: return "yu";    // ø…
        case 15272: return "ya";    // ø†
        case 15274: return "tie";    // ø‡
        case 15276: return "yu";    // øˆ
        case 15278: return "tian";    // ø‰
        case 15280: return "ying";    // øŠ
        case 15282: return "dui";    // ø‹
        case 15284: return "wu";    // øŒ
        case 15286: return "er";    // ø
        case 15288: return "gua";    // øŽ
        case 15290: return "ai";    // ø
        case 15292: return "zhi";    // ø
        case 15294: return "an";    // ø‘
        case 15296: return "heng";    // ø’
        case 15298: return "xiao";    // ø“
        case 15300: return "jia";    // ø”
        case 15302: return "lie";    // ø•
        case 15304: return "zhu";    // ø–
        case 15306: return "yang";    // ø—
        case 15308: return "yi";    // ø˜
        case 15310: return "hong";    // ø™
        case 15312: return "lu";    // øš
        case 15314: return "ru";    // ø›
        case 15316: return "mou";    // øœ
        case 15318: return "ge";    // ø
        case 15320: return "ren";    // øž
        case 15322: return "xiao";    // øŸ
        case 15324: return "xiu";    // ø 
        case 15326: return "diao";    // ù@
        case 15328: return "chi";    // ùA
        case 15330: return "luo";    // ùB
        case 15332: return "heng";    // ùC
        case 15334: return "nian";    // ùD
        case 15336: return "e";    // ùE
        case 15338: return "luan";    // ùF
        case 15340: return "jia";    // ùG
        case 15342: return "ji";    // ùH
        case 15344: return "tu";    // ùI
        case 15346: return "huan";    // ùJ
        case 15348: return "tuo";    // ùK
        case 15350: return "bu";    // ùL
        case 15352: return "wu";    // ùM
        case 15354: return "juan";    // ùN
        case 15356: return "yu";    // ùO
        case 15358: return "bo";    // ùP
        case 15360: return "jun";    // ùQ
        case 15362: return "jun";    // ùR
        case 15364: return "bi";    // ùS
        case 15366: return "xi";    // ùT
        case 15368: return "jun";    // ùU
        case 15370: return "ju";    // ùV
        case 15372: return "tu";    // ùW
        case 15374: return "jing";    // ùX
        case 15376: return "ti";    // ùY
        case 15378: return "e";    // ùZ
        case 15380: return "e";    // ù[
        case 15382: return "kuang";    // ù\
        case 15384: return "hu";    // ù]
        case 15386: return "wu";    // ù^
        case 15388: return "shen";    // ù_
        case 15390: return "lai";    // ù`
        case 15392: return "jiao";    // ùa
        case 15394: return "pan";    // ùb
        case 15396: return "lu";    // ùc
        case 15398: return "pi";    // ùd
        case 15400: return "shu";    // ùe
        case 15402: return "fu";    // ùf
        case 15404: return "an";    // ùg
        case 15406: return "zhuo";    // ùh
        case 15408: return "peng";    // ùi
        case 15410: return "qiu";    // ùj
        case 15412: return "qian";    // ùk
        case 15414: return "bei";    // ùl
        case 15416: return "diao";    // ùm
        case 15418: return "lu";    // ùn
        case 15420: return "que";    // ùo
        case 15422: return "jian";    // ùp
        case 15424: return "ju";    // ùq
        case 15426: return "tu";    // ùr
        case 15428: return "ya";    // ùs
        case 15430: return "yuan";    // ùt
        case 15432: return "qi";    // ùu
        case 15434: return "li";    // ùv
        case 15436: return "ye";    // ùw
        case 15438: return "zhui";    // ùx
        case 15440: return "kong";    // ùy
        case 15442: return "duo";    // ùz
        case 15444: return "kun";    // ù{
        case 15446: return "sheng";    // ù|
        case 15448: return "qi";    // ù}
        case 15450: return "jing";    // ù~
        case 15452: return "";    // ?
        case 15454: return "yi";    // ù€
        case 15456: return "yi";    // ù
        case 15458: return "qing";    // ù‚
        case 15460: return "zi";    // ùƒ
        case 15462: return "lai";    // ù„
        case 15464: return "dong";    // ù…
        case 15466: return "qi";    // ù†
        case 15468: return "chun";    // ù‡
        case 15470: return "geng";    // ùˆ
        case 15472: return "ju";    // ù‰
        case 15474: return "jue";    // ùŠ
        case 15476: return "yi";    // ù‹
        case 15478: return "zun";    // ùŒ
        case 15480: return "ji";    // ù
        case 15482: return "shu";    // ùŽ
        case 15484: return "ying";    // ù
        case 15486: return "chi";    // ù
        case 15488: return "miao";    // ù‘
        case 15490: return "rou";    // ù’
        case 15492: return "an";    // ù“
        case 15494: return "qiu";    // ù”
        case 15496: return "ti";    // ù•
        case 15498: return "hu";    // ù–
        case 15500: return "ti";    // ù—
        case 15502: return "e";    // ù˜
        case 15504: return "jie";    // ù™
        case 15506: return "mao";    // ùš
        case 15508: return "bi";    // ù›
        case 15510: return "chun";    // ùœ
        case 15512: return "tu";    // ù
        case 15514: return "yan";    // ùž
        case 15516: return "he";    // ùŸ
        case 15518: return "yuan";    // ù 
        case 15520: return "bian";    // ú@
        case 15522: return "kun";    // úA
        case 15524: return "mei";    // úB
        case 15526: return "hu";    // úC
        case 15528: return "ying";    // úD
        case 15530: return "zhi";    // úE
        case 15532: return "wu";    // úF
        case 15534: return "ju";    // úG
        case 15536: return "dong";    // úH
        case 15538: return "qiang";    // úI
        case 15540: return "fang";    // úJ
        case 15542: return "he";    // úK
        case 15544: return "ying";    // úL
        case 15546: return "yuan";    // úM
        case 15548: return "xian";    // úN
        case 15550: return "weng";    // úO
        case 15552: return "shi";    // úP
        case 15554: return "he";    // úQ
        case 15556: return "chu";    // úR
        case 15558: return "tang";    // úS
        case 15560: return "xia";    // úT
        case 15562: return "ruo";    // úU
        case 15564: return "liu";    // úV
        case 15566: return "ji";    // úW
        case 15568: return "gu";    // úX
        case 15570: return "jian";    // úY
        case 15572: return "xun";    // úZ
        case 15574: return "han";    // ú[
        case 15576: return "ci";    // ú\
        case 15578: return "ci";    // ú]
        case 15580: return "yi";    // ú^
        case 15582: return "yao";    // ú_
        case 15584: return "yan";    // ú`
        case 15586: return "ji";    // úa
        case 15588: return "li";    // úb
        case 15590: return "tian";    // úc
        case 15592: return "kou";    // úd
        case 15594: return "ti";    // úe
        case 15596: return "si";    // úf
        case 15598: return "yi";    // úg
        case 15600: return "tu";    // úh
        case 15602: return "ma";    // úi
        case 15604: return "xiao";    // új
        case 15606: return "gao";    // úk
        case 15608: return "tian";    // úl
        case 15610: return "chen";    // úm
        case 15612: return "ji";    // ún
        case 15614: return "tuan";    // úo
        case 15616: return "zhe";    // úp
        case 15618: return "ao";    // úq
        case 15620: return "yao";    // úr
        case 15622: return "yi";    // ús
        case 15624: return "ou";    // út
        case 15626: return "chi";    // úu
        case 15628: return "zhi";    // úv
        case 15630: return "liu";    // úw
        case 15632: return "yong";    // úx
        case 15634: return "lu";    // úy
        case 15636: return "bi";    // úz
        case 15638: return "shuang";    // ú{
        case 15640: return "zhuo";    // ú|
        case 15642: return "yu";    // ú}
        case 15644: return "wu";    // ú~
        case 15646: return "";    // ?
        case 15648: return "jue";    // ú€
        case 15650: return "yin";    // ú
        case 15652: return "tan";    // ú‚
        case 15654: return "si";    // úƒ
        case 15656: return "jiao";    // ú„
        case 15658: return "yi";    // ú…
        case 15660: return "hua";    // ú†
        case 15662: return "bi";    // ú‡
        case 15664: return "ying";    // úˆ
        case 15666: return "su";    // ú‰
        case 15668: return "huang";    // úŠ
        case 15670: return "fan";    // ú‹
        case 15672: return "jiao";    // úŒ
        case 15674: return "liao";    // ú
        case 15676: return "yan";    // úŽ
        case 15678: return "gao";    // ú
        case 15680: return "jiu";    // ú
        case 15682: return "xian";    // ú‘
        case 15684: return "xian";    // ú’
        case 15686: return "tu";    // ú“
        case 15688: return "mai";    // ú”
        case 15690: return "zun";    // ú•
        case 15692: return "yu";    // ú–
        case 15694: return "ying";    // ú—
        case 15696: return "lu";    // ú˜
        case 15698: return "tuan";    // ú™
        case 15700: return "xian";    // úš
        case 15702: return "xue";    // ú›
        case 15704: return "yi";    // úœ
        case 15706: return "pi";    // ú
        case 15708: return "zhu";    // úž
        case 15710: return "luo";    // úŸ
        case 15712: return "xi";    // ú 
        case 15714: return "yi";    // û@
        case 15716: return "ji";    // ûA
        case 15718: return "ze";    // ûB
        case 15720: return "yu";    // ûC
        case 15722: return "zhan";    // ûD
        case 15724: return "ye";    // ûE
        case 15726: return "yang";    // ûF
        case 15728: return "bi";    // ûG
        case 15730: return "ning";    // ûH
        case 15732: return "hu";    // ûI
        case 15734: return "mi";    // ûJ
        case 15736: return "ying";    // ûK
        case 15738: return "mang";    // ûL
        case 15740: return "di";    // ûM
        case 15742: return "yue";    // ûN
        case 15744: return "yu";    // ûO
        case 15746: return "lei";    // ûP
        case 15748: return "bu";    // ûQ
        case 15750: return "lu";    // ûR
        case 15752: return "he";    // ûS
        case 15754: return "long";    // ûT
        case 15756: return "shuang";    // ûU
        case 15758: return "yue";    // ûV
        case 15760: return "ying";    // ûW
        case 15762: return "guan";    // ûX
        case 15764: return "gou";    // ûY
        case 15766: return "li";    // ûZ
        case 15768: return "luan";    // û[
        case 15770: return "shi";    // û\
        case 15772: return "qiang";    // û]
        case 15774: return "xiao";    // û^
        case 15776: return "ling";    // û_
        case 15778: return "xue";    // û`
        case 15780: return "heng";    // ûa
        case 15782: return "diao";    // ûb
        case 15784: return "wu";    // ûc
        case 15786: return "kun";    // ûd
        case 15788: return "qian";    // ûe
        case 15790: return "geng";    // ûf
        case 15792: return "yuan";    // ûg
        case 15794: return "su";    // ûh
        case 15796: return "he";    // ûi
        case 15798: return "qiu";    // ûj
        case 15800: return "yi";    // ûk
        case 15802: return "weng";    // ûl
        case 15804: return "liu";    // ûm
        case 15806: return "ji";    // ûn
        case 15808: return "yi";    // ûo
        case 15810: return "yi";    // ûp
        case 15812: return "huan";    // ûq
        case 15814: return "zhan";    // ûr
        case 15816: return "mang";    // ûs
        case 15818: return "shuang";    // ût
        case 15820: return "lu";    // ûu
        case 15822: return "jin";    // ûv
        case 15824: return "ling";    // ûw
        case 15826: return "jian";    // ûx
        case 15828: return "jian";    // ûy
        case 15830: return "cuo";    // ûz
        case 15832: return "jian";    // û{
        case 15834: return "jian";    // û|
        case 15836: return "yan";    // û}
        case 15838: return "you";    // û~
        case 15840: return "";    // ?
        case 15842: return "cu";    // û€
        case 15844: return "biao";    // û
        case 15846: return "cu";    // û‚
        case 15848: return "pao";    // ûƒ
        case 15850: return "zhu";    // û„
        case 15852: return "jian";    // û…
        case 15854: return "mi";    // û†
        case 15856: return "yu";    // û‡
        case 15858: return "liu";    // ûˆ
        case 15860: return "chen";    // û‰
        case 15862: return "jun";    // ûŠ
        case 15864: return "lin";    // û‹
        case 15866: return "ni";    // ûŒ
        case 15868: return "jiu";    // û
        case 15870: return "jun";    // ûŽ
        case 15872: return "jing";    // û
        case 15874: return "li";    // û
        case 15876: return "xiang";    // û‘
        case 15878: return "yan";    // û’
        case 15880: return "jia";    // û“
        case 15882: return "mi";    // û”
        case 15884: return "li";    // û•
        case 15886: return "zhang";    // û–
        case 15888: return "jing";    // û—
        case 15890: return "qi";    // û˜
        case 15892: return "ling";    // û™
        case 15894: return "yan";    // ûš
        case 15896: return "cu";    // û›
        case 15898: return "mai";    // ûœ
        case 15900: return "he";    // û
        case 15902: return "chao";    // ûž
        case 15904: return "fu";    // ûŸ
        case 15906: return "mian";    // û 
        case 15908: return "mian";    // ü@
        case 15910: return "fu";    // üA
        case 15912: return "pao";    // üB
        case 15914: return "qu";    // üC
        case 15916: return "qu";    // üD
        case 15918: return "mou";    // üE
        case 15920: return "fu";    // üF
        case 15922: return "yan";    // üG
        case 15924: return "lai";    // üH
        case 15926: return "mian";    // üI
        case 15928: return "chi";    // üJ
        case 15930: return "feng";    // üK
        case 15932: return "qu";    // üL
        case 15934: return "mian";    // üM
        case 15936: return "me";    // üN
        case 15938: return "mo";    // üO
        case 15940: return "zou";    // üP
        case 15942: return "nun";    // üQ
        case 15944: return "fen";    // üR
        case 15946: return "huang";    // üS
        case 15948: return "jin";    // üT
        case 15950: return "guang";    // üU
        case 15952: return "tian";    // üV
        case 15954: return "tou";    // üW
        case 15956: return "hua";    // üX
        case 15958: return "kuang";    // üY
        case 15960: return "hong";    // üZ
        case 15962: return "chi";    // ü[
        case 15964: return "hei";    // ü\
        case 15966: return "yi";    // ü]
        case 15968: return "dan";    // ü^
        case 15970: return "xi";    // ü_
        case 15972: return "tun";    // ü`
        case 15974: return "mo";    // üa
        case 15976: return "jian";    // üb
        case 15978: return "dian";    // üc
        case 15980: return "yan";    // üd
        case 15982: return "mei";    // üe
        case 15984: return "yan";    // üf
        case 15986: return "ye";    // üg
        case 15988: return "dang";    // üh
        case 15990: return "yan";    // üi
        case 15992: return "yan";    // üj
        case 15994: return "yan";    // ük
        case 15996: return "dan";    // ül
        case 15998: return "yan";    // üm
        case 16000: return "dai";    // ün
        case 16002: return "can";    // üo
        case 16004: return "yi";    // üp
        case 16006: return "mei";    // üq
        case 16008: return "dan";    // ür
        case 16010: return "yan";    // üs
        case 16012: return "du";    // üt
        case 16014: return "lu";    // üu
        case 16016: return "fen";    // üv
        case 16018: return "meng";    // üw
        case 16020: return "yuan";    // üx
        case 16022: return "cu";    // üy
        case 16024: return "qu";    // üz
        case 16026: return "zhao";    // ü{
        case 16028: return "wa";    // ü|
        case 16030: return "zhu";    // ü}
        case 16032: return "zhi";    // ü~
        case 16034: return "";    // ?
        case 16036: return "meng";    // ü€
        case 16038: return "ao";    // ü
        case 16040: return "bie";    // ü‚
        case 16042: return "tuo";    // üƒ
        case 16044: return "bi";    // ü„
        case 16046: return "zhao";    // ü…
        case 16048: return "mi";    // ü†
        case 16050: return "ding";    // ü‡
        case 16052: return "zi";    // üˆ
        case 16054: return "gu";    // ü‰
        case 16056: return "dong";    // üŠ
        case 16058: return "fen";    // ü‹
        case 16060: return "yuan";    // üŒ
        case 16062: return "chang";    // ü
        case 16064: return "gao";    // üŽ
        case 16066: return "qi";    // ü
        case 16068: return "yuan";    // ü
        case 16070: return "tang";    // ü‘
        case 16072: return "teng";    // ü’
        case 16074: return "shu";    // ü“
        case 16076: return "fei";    // ü”
        case 16078: return "wen";    // ü•
        case 16080: return "ba";    // ü–
        case 16082: return "diao";    // ü—
        case 16084: return "tuo";    // ü˜
        case 16086: return "zhong";    // ü™
        case 16088: return "qu";    // üš
        case 16090: return "sheng";    // ü›
        case 16092: return "shi";    // üœ
        case 16094: return "shi";    // ü
        case 16096: return "ting";    // üž
        case 16098: return "ju";    // üŸ
        case 16100: return "jing";    // ü 
        case 16102: return "hun";    // ý@
        case 16104: return "ju";    // ýA
        case 16106: return "yan";    // ýB
        case 16108: return "tu";    // ýC
        case 16110: return "si";    // ýD
        case 16112: return "xian";    // ýE
        case 16114: return "lei";    // ýF
        case 16116: return "ya";    // ýG
        case 16118: return "wu";    // ýH
        case 16120: return "wu";    // ýI
        case 16122: return "ku";    // ýJ
        case 16124: return "xie";    // ýK
        case 16126: return "e";    // ýL
        case 16128: return "xiu";    // ýM
        case 16130: return "weng";    // ýN
        case 16132: return "zha";    // ýO
        case 16134: return "nong";    // ýP
        case 16136: return "nang";    // ýQ
        case 16138: return "qi";    // ýR
        case 16140: return "zhai";    // ýS
        case 16142: return "ji";    // ýT
        case 16144: return "ji";    // ýU
        case 16146: return "ji";    // ýV
        case 16148: return "ji";    // ýW
        case 16150: return "chi";    // ýX
        case 16152: return "chen";    // ýY
        case 16154: return "chen";    // ýZ
        case 16156: return "he";    // ý[
        case 16158: return "ya";    // ý\
        case 16160: return "yan";    // ý]
        case 16162: return "xie";    // ý^
        case 16164: return "bao";    // ý_
        case 16166: return "ze";    // ý`
        case 16168: return "xie";    // ýa
        case 16170: return "zi";    // ýb
        case 16172: return "chi";    // ýc
        case 16174: return "yan";    // ýd
        case 16176: return "ju";    // ýe
        case 16178: return "tiao";    // ýf
        case 16180: return "ling";    // ýg
        case 16182: return "ling";    // ýh
        case 16184: return "chu";    // ýi
        case 16186: return "quan";    // ýj
        case 16188: return "xie";    // ýk
        case 16190: return "yin";    // ýl
        case 16192: return "nie";    // ým
        case 16194: return "jiu";    // ýn
        case 16196: return "yao";    // ýo
        case 16198: return "chuo";    // ýp
        case 16200: return "yun";    // ýq
        case 16202: return "yu";    // ýr
        case 16204: return "chu";    // ýs
        case 16206: return "yi";    // ýt
        case 16208: return "ni";    // ýu
        case 16210: return "ze";    // ýv
        case 16212: return "chuo";    // ýw
        case 16214: return "qu";    // ýx
        case 16216: return "yun";    // ýy
        case 16218: return "yan";    // ýz
        case 16220: return "ou";    // ý{
        case 16222: return "e";    // ý|
        case 16224: return "wo";    // ý}
        case 16226: return "yi";    // ý~
        case 16228: return "";    // ?
        case 16230: return "ci";    // ý€
        case 16232: return "zou";    // ý
        case 16234: return "dian";    // ý‚
        case 16236: return "chu";    // ýƒ
        case 16238: return "jin";    // ý„
        case 16240: return "e";    // ý…
        case 16242: return "he";    // ý†
        case 16244: return "yan";    // ý‡
        case 16246: return "long";    // ýˆ
        case 16248: return "pang";    // ý‰
        case 16250: return "wo";    // ýŠ
        case 16252: return "pang";    // ý‹
        case 16254: return "yan";    // ýŒ
        case 16256: return "mang";    // ý
        case 16258: return "long";    // ýŽ
        case 16260: return "gong";    // ý
        case 16262: return "kan";    // ý
        case 16264: return "da";    // ý‘
        case 16266: return "ling";    // ý’
        case 16268: return "da";    // ý“
        case 16270: return "gui";    // ý”
        case 16272: return "qiu";    // ý•
        case 16274: return "bie";    // ý–
        case 16276: return "chui";    // ý—
        case 16278: return "he";    // ý˜
        case 16280: return "jue";    // ý™
        case 16282: return "xie";    // ýš
        case 16284: return "yue";    // ý›
        case 16286: return "lang";    // ýœ
        case 16288: return "liang";    // ý
        case 16290: return "nian";    // ýž
        case 16292: return "li";    // ýŸ
        case 16294: return "lin";    // ý 
        case 16296: return "wu";    // þ@
        case 16298: return "hu";    // þA
        case 16300: return "shuang";    // þB
        case 16302: return "xu";    // þC
        case 16304: return "qi";    // þD
        case 16306: return "fu";    // þE
        case 16308: return "ju";    // þF
        case 16310: return "li";    // þG
        case 16312: return "ke";    // þH
        case 16314: return "qiu";    // þI
        case 16316: return "sheng";    // þJ
        case 16318: return "suo";    // þK
        case 16320: return "ji";    // þL
        case 16322: return "xiao";    // þM
        case 16324: return "xing";    // þN
        case 16326: return "dao";    // þO
        case 16328: return "";    // þP
        case 16330: return "";    // þQ
        case 16332: return "";    // þR
        case 16334: return "";    // þS
        case 16336: return "";    // þT
        case 16338: return "";    // þU
        case 16340: return "";    // þV
        case 16342: return "";    // þW
        case 16344: return "";    // þX
        case 16346: return "";    // þY
        case 16348: return "";    // þZ
        case 16350: return "";    // þ[
        case 16352: return "";    // þ\
        case 16354: return "";    // þ]
        case 16356: return "";    // þ^
        case 16358: return "";    // þ_
        case 16360: return "";    // þ`
        case 16362: return "";    // þa
        case 16364: return "";    // þb
        case 16366: return "";    // þc
        case 16368: return "";    // þd
        case 16370: return "";    // þe
        case 16372: return "";    // þf
        case 16374: return "";    // þg
        case 16376: return "";    // þh
        case 16378: return "";    // þi
        case 16380: return "";    // þj
        case 16382: return "";    // þk
        case 16384: return "";    // þl
        case 16386: return "";    // þm
        case 16388: return "";    // þn
        case 16390: return "";    // þo
        case 16392: return "";    // þp
        case 16394: return "";    // þq
        case 16396: return "";    // þr
        case 16398: return "";    // þs
        case 16400: return "";    // þt
        case 16402: return "";    // þu
        case 16404: return "";    // þv
        case 16406: return "";    // þw
        case 16408: return "";    // þx
        case 16410: return "";    // þy
        case 16412: return "";    // þz
        case 16414: return "";    // þ{
        case 16416: return "";    // þ|
        case 16418: return "";    // þ}
        case 16420: return "";    // þ~
        case 16422: return "";    // ?
        case 16424: return "";    // þ€
        case 16426: return "";    // þ
        case 16428: return "";    // þ‚
        case 16430: return "";    // þƒ
        case 16432: return "";    // þ„
        case 16434: return "";    // þ…
        case 16436: return "";    // þ†
        case 16438: return "";    // þ‡
        case 16440: return "";    // þˆ
        case 16442: return "";    // þ‰
        case 16444: return "";    // þŠ
        case 16446: return "";    // þ‹
        case 16448: return "";    // þŒ
        case 16450: return "";    // þ
        case 16452: return "";    // þŽ
        case 16454: return "";    // þ
        case 16456: return "";    // þ
        case 16458: return "";    // þ‘
        case 16460: return "";    // þ’
        case 16462: return "";    // þ“
        case 16464: return "";    // þ”
        case 16466: return "";    // þ•
        case 16468: return "";    // þ–
        case 16470: return "";    // þ—
        case 16472: return "";    // þ˜
        case 16474: return "";    // þ™
        case 16476: return "";    // þš
        case 16478: return "";    // þ›
        case 16480: return "";    // þœ
        case 16482: return "";    // þ
        case 16484: return "";    // þž
        case 16486: return "";    // þŸ
        case 16488: return "";    // þ 
    }

    return NULL;
}

typedef struct _peyin_unit
{
    char *m;
    int len;
}peyin_unit, *p_peyin_unit;

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
    { "ue",   2},   // ¨¹e
    { "un",   2},   // ¨¹n
    { "a",    1},
    { "e",    1},
    { "i",    1},
    { "o",    1},
    { "u",    1},
};

int get_sm_ym(const char *pinyin, unsigned char *sm, unsigned char *ym)
{
    if (NULL == pinyin || NULL == sm || NULL == ym)
    {
        return -1;
    }

    int i        = 0;
    int count_sm = sizeof(g_pinyin_sm) / sizeof(peyin_unit); // ÉùÄ¸ÊýÁ¿
    int count_ym = sizeof(g_pinyin_ym) / sizeof(peyin_unit); // ÔÏÄ¸ÊýÁ¿

    for (; i < count_sm; i++)
    {
        if (0 == strncmp(pinyin, g_pinyin_sm[i].m, g_pinyin_sm[i].len))
        {
            break;
        }
    }

    int len;

    if (i == count_sm)  // Ã»ÓÐÉùÄ¸,ÊÇÓÐÕâÖÖÇé¿öµÄ
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

    if (j == count_ym) // Ã»ÓÐÔÏÄ¸,³ö´í
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


int main(int argc,char **argv)
{
    // GB2312±àÂë,A1A1-FEFE
    // 01-09ÇøÊÕÂ¼³ýºº×ÖÍâµÄ682¸ö×Ö·û¡£                 A1-A9
    // 10-15ÇøÎª¿Õ°×Çø£¬Ã»ÓÐÊ¹ÓÃ¡£                      AA-AF
    // 16-55ÇøÊÕÂ¼3755¸öÒ»¼¶ºº×Ö£¬°´Æ´ÒôÅÅÐò¡£          B0-D7
    // 56-87ÇøÊÕÂ¼3008¸ö¶þ¼¶ºº×Ö£¬°´²¿Ê×/±Ê»­ÅÅÐò¡£     D8-F7
    // 88-94ÇøÎª¿Õ°×Çø£¬Ã»ÓÐÊ¹ÓÃ¡£                      F8-FE

    // GBK±àÂë,8140-FEFE
    //1. ºº×ÖÇø¡£°üº¬
    //  a. GB2312ºº×ÖÇø¡£         ¼´GBK/2: B0A1-F7FE¡£ÊÕÂ¼GB2312 ºº×Ö6763¸ö£¬°´Ô­Ë³ÐòÅÅÁÐ¡£
    //  b. GB13000.1 À©³äºº×ÖÇø¡£°üÀa?
    //    (1)GBK/3: 8140-A0FE¡£   ÊÕÂ¼GB13000.1 ÖÐµÄCJKºº×Ö6080¸ö¡£
    //    (2)GBK/4: AA40-FEA0¡£   ÊÕÂ¼CJKºº×ÖºÍÔö²¹µÄºº×Ö8160¸ö¡£
    //                            CJKºº×ÖÔÚÇ°£¬°´UCS´úÂë´óÐ¡ÅÅÁÐ£»
    //                            Ôö²¹µÄºº×Ö£oüÀu¿Ê×ºÍ¹¹¼þ£©ÔÚºó£¬°´¡¶¿µÎõ×Öµä¡·µÄÒ³Â?×ÖÎ»ÅÅÁÐ¡£
    //    (3)ºº×Ö¡°©–¡±°²ÅÅÔÚÍ¼ÐÎ·ûºÅÇøGBK/5£ºA996¡£
    //
    //2. Í¼ÐÎ·ûºÅÇø¡£°üº¬
    //  a. GB2312·Çºº×Ö·ûºÅÇø¡£   ¼´GBK/1: A1A1-A9FE¡£
    //                            ÆäÖÐ³ý GB2312 µÄ·ûºÅÍâ£¬
    //                            »¹ÓÐ10¸öÐ¡Ð´ÂÞÂíÊý×ÖºÍGB12345Ôö²¹µÄ·ûºÅ¡£¼Æ·ûºÅ717¸ö¡£
    //  b. GB13000.1À©³ä·Çºº×ÖÇø¡£¼´GBK/5: A840-A9A0¡£
    //                            BIG-5·Çºº×Ö·ûºÅ¡¢½á¹¹·ûºÍ¡°©–¡±ÅÅÁÐÔÚ´ËÇø¡£¼Æ·ûºÅ 166 ¸ö¡£
    //
    //3. ÓÃ»§×Ô¶¨ÒåÇø£º·ÖÎª(1)(2)(3)Èý¸öÐ¡Çø¡£
    //  (1) AAA1-AFFE£¬ÂëÎ» 564 ¸ö¡£
    //  (2) F8A1-FEFE£¬ÂëÎ» 658 ¸ö¡£
    //  (3) A140-A7A0£¬ÂëÎ» 672 ¸ö¡£


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
                printf("GBK/2 code:%u 0x%02x%02x=%c%c pinyin=NULL\n", code, i, j, i, j);
                continue;
            }

            if (0 != get_sm_ym(pinyin, &sm, &ym))
            {
                printf("GBK/2 code:%u 0x%02x%02x=%c%c get_sm_ym error\n", code, i, j, i, j);
                continue;
            }

            buff_pos = ((i - 0x81) * (0xfe - 0x40 + 1) + (j - 0x40)) * 2;   // gbk 8140£­FEFE
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
    // ½«Êý¾ÝÐ´ÈëÎÄ¼þ

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
    // ²âÊÔ

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

    unsigned char *test = "±û³½ÖÐÇï£¬šgï‹ß_µ©£¬´ó×í£¬×÷´ËÆª£¬¼æ‘Ñ×ÓÓÉ¡£"
    "Ã÷ÔÂ¼¸Ê±ÓÐ£¿°Ñ¾ÆÎÊÇàÌì¡£"
    "²»ÖªÌìÉÏ¹¬ãÚ£¬½ñÏ¦ÊÇºÎÄê¡£"
    "ÎÒÓû³Ë·ç¹éÈ¥£¬ÓÖ¿ÖÇíÂ¥ÓñÓî£¬¸ß´¦²»Ê¤º®¡£"
    "ÆðÎèÅªÇåÓ°£¬ºÎËÆÔÚÈË¼ä¡£"
    "×ªÖì¸ó£¬µÍç²»§£¬ÕÕÎÞÃß¡£"
    "²»Ó¦ÓÐºÞ£¬ºÎÊÂ³¤Ïò±ðÊ±Ô²£¿"
    "ÈËÓÐ±¯»¶ÀëºÏ£¬ÔÂÓÐÒõÇçÔ²È±£¬´ËÊÂ¹ÅÄÑÈ«¡£"
    "µ«Ô¸ÈË³¤¾Ã£¬Ç§Àï¹²æ¿¾ê¡£";

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