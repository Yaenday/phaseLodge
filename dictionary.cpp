
#include "dictionary.h"

// 场景语录
QStringList qstringlist_welcome_text = {"你是一名普通的大学生，某天你在图书馆偶然发现了一本古书，书名叫做《地相堪舆》。你打开书本，却被一股神秘的力量吸了进去......"};

QStringList qstringlist_succeed_text = {"恭喜您，游戏胜利!", "点击任意位置退出"};

QStringList qstringlist_fail_text = {"很遗憾，您失败了!", "点击任意位置退出"};

QStringList qstringlist_badend_text = {"“袁厮害我家破人亡，可惜白黑血青之尸皆不是其对手", "今凭一口先生之气，以做恶尸羽化，将那仇人魂飞魄散!”", "点击任意位置退出"};
QStringList qstringlist_goodend_text = {"“大仇当前，更需慎重，袁化邵必除，大哥之劫也须我相助", "大不了再如当年，凭天元地相之名，集阴阳界之力，以雷霆之力，镇压恶徒", "地相庐中还有管氏阴阳术……你可愿习之出黑，予我一人情攻伐无道？”"};

QStringList qstringlist_frontHall1_text;
QStringList qstringlist_frontHall2_text = {"“虾须蟹眼金鱼水，生气吹拂而成，倒是好看。", "可是那屏风上，师祖徐符画的大符……", "心存恶念之人看了，可是能活活看死在这！”"};
QStringList qstringlist_frontHall3_text = {"“阴气盛则百草生。符术中的大符，恰有折返阴阳二气之效。”"};
QStringList qstringlist_frontHall4_text = {"坐在这里，你感到夜间的阴气一阵阵地冲刷上来，压得你喘不过气。"};
QStringList qstringlist_frontHall5_text = {"坐在这里，你感到日出的生气冲刷着你。"};
QStringList qstringlist_frontHall6_text;
QStringList qstringlist_frontHall7_text;

QStringList qstringlist_backHall1_text;
QStringList qstringlist_backHall2_text;
QStringList qstringlist_backHall3_text = {"你被一阵阴风推回了原地"};

QStringList qstringlist_study1_text;
QStringList qstringlist_study2_text;

QStringList qstringlist_boneRoom1_text;
QStringList qstringlist_boneRoom2_text;

QStringList qstringlist_eastBedRoom1_text;
QStringList qstringlist_westBedRoom1_text;

// 物品语录-detail
QStringList qstringlist_frontHall2_fishTank_text = {"里边有一些虾、蟹和金鱼，似乎它们可以和平共生", "缸中也没有投喂的痕迹"};
QStringList qstringlist_frontHall3_plants_text = {"这里的草木生长格外旺盛", "看起来像是最近才养的"};
QStringList qstringlist_frontHall6_cabinet_text = {"里面有一些罗盘和笔砚 ，但奇怪的是你根本拿不起来它们",
                                                   "你伸手一抽，摸到了一张符，", "上面的篆体似乎是个“河”字",
                                                   "你伸手一抽，摸到了一张符，", "你感觉自己的魂魄似要被吸走，赶紧放了回去",
                                                   "你伸手一抽，摸到了一张符，", "这符似乎有千斤重量，你差点摔倒，只能放了回去"};
QStringList qstringlist_frontHall7_cabinet_text = {"这里面有一些书，你翻了翻，只记住了封面上宅经、骨相等字。", "放下书感觉整个人昏昏沉沉。",
                                                   "你伸手一抽，摸到了颗像丹药的东西，", "上面刻着“袁”字，你吃了下去",
                                                   "你伸手一抽，摸到了颗像丹药的东西，","你感觉自己的气血似要被吸走，赶紧放了回去",
                                                   "你伸手一抽，摸到了颗像丹药的东西，","这丹温润异常，你摸了一会，便感觉精神百倍"};
QStringList qstringlist_backHall2_table_text = {"恍惚间，你似乎看到了一家三口其乐融融的画面"};

QStringList qstringlist_boneRoom1_cabinet_text = {"柜子里面是一块一块的铜符，放在手心里滚烫滚烫的", "上面的字好像是“六府”"};
QStringList qstringlist_boneRoom2_cabinet_north_text = {"柜子里面是一颗颗凶相毕露的头颅，口中都含着六府符"};
QStringList qstringlist_boneRoom2_cabinet_south_text = {"柜子里面是一颗颗平和安详的头颅，口中都含着六府符"};
QStringList qstringlist_boneRoom2_box_text = {"箱子打不开又非常重，你险些摔倒"};
QStringList qstringlist_boneRoom2_everything_text = {"坐在这里，你似乎感觉阴阳尽在掌握，八卦皆在胸中",
                                                     "对面的墙上不知何时出现了一扇圆镜"};
QStringList qstringlist_boneRoom2_table_text = {"你总感觉这里坐着一个面对着你的先生，正要为你解惑",
                                                "这张桌子看起来像一块大罗盘，靠近会有一种安全感"};

QStringList qstringlist_study1_mirror_text = {"这面镜子的倒影隐隐约约是隔壁骨房的模样，但视角是从门口到八角桌"};
QStringList qstringlist_study1_shelf_text = {"上面摆放着一些雕塑、空符纸、残本等物，那个雕塑透着古怪"};

QStringList qstringlist_study2_bookshelf_north_text = {"“阴生子是指出世之前母亲丧命的婴儿，阴气盛于阳气，难过勘阳关”",
                                                       "“二十二岁勘阳关，勘阳关时若遇阴邪，不成，难过当岁”",
                                                       "“大抵常尸化煞，由强到弱，青血黑白四者，羽化尸又甚于青尸”",
                                                       "“阴阳先生一朝出黑，若不行伤天害理之事，当有命数庇佑，总能避死”",
                                                       "“内阳大先生袁化邵，救吾妻儿，是吾恩人知己也”",
                                                       "“道士出道，仙家出马，先生出黑”",
                                                       "柳家道士凭一口浩然正气行走名山大川，诛灭凶尸，替天行道。”",
                                                       "眉间生乱纹，心中认死理,这是道士本色",
                                                       "“阴术先生观风水、镇凶尸，阳算先生定吉凶、断命数”",
                                                       "“上三流，先生、仙家、道士；下九流则繁杂，为捞尸人、神婆、打更人等”",
                                                       "“最上阴阳术，公认天元地相，此外还有零正二神、管氏阴阳术等不相伯仲”"};
QStringList qstringlist_study2_bookshelf_south_text = {"“吾徐符以符术出黑，填河魁斩尸符、镇物符入地相堪舆，大符尽在吾符术之中”", "“后代先生若寻得有缘符术之人，当传吾徐符符术”",
                                                       "“柳家之押镇神咒，霸道之极又留一线生机”",
                                                       "“天圆地方！律令九章！吾今下镇，褚殃皆退，万鬼潜藏!家宅平安，出入皆遂，人口永康，吾奉太上老君急急如律令！”",
                                                       "“以法镇根，永无后患，师人持咒，以刀三斩！",
                                                       "灵起时，停柩处，埋避殃煞，鬼见愁，鬼箭羽，血符下镇，凶魂安息！”",
                                                       "“遇师谩说会阴阳，自处堆金立墓堂。不按仙经生诳语，只凭己见自称杨。先亡往日五鬼葬，血海仇深恶尸郎。既是尊卑分大小，焉能老幼得同堂。——青山留诗”",
                                                       "“阴阳先生若至绝境，可自绝以留一口气不散，以成羽化恶尸”",
                                                       "“袁化邵偷雉儿和遁空之寿，此等深仇不共戴天！”",
                                                       "“地相堪舆之阴术归于《宅经》，阳算记于《骨相》”",
                                                       "“廖兄零正二神之法，紧贴生魂，肯定有救于遁空！”",
                                                       "“天元道场毁于偷寿之徒，上代天元先生也陨于其手，吾虽与郭先生有罅隙，但……”",
                                                       "“雉儿出黑在即，天元阳算与地相宅经结合，可算身前百年、身后百年” ",
                                                       "“当年为救遁空，分其一缕魂与廖兄，而今遁空缺魂而无法符术出黑……”"};

QStringList qstringlist_study2_box_text = {"箱子里有一些书籍，上面写着“阴阳术”、“符术”、“地相堪舆”等字样"};
QStringList qstringlist_study2_desk_text = {"你仿佛看到了一代代先生在此编写山野杂记，传承地相堪舆"};
QStringList qstringlist_eastBedroom_box_text = {"箱子里有一些唐装，有些上面写着艰涩的字句，你看了一会便感觉头晕"};
QStringList qstringlist_eastBedroom_cabinet_text = {"衣柜里有一些衣服、布料，还有孩童的玩具，一个拨浪鼓放在最上面。"};
QStringList qstringlist_westBedroom_box_text = {"箱子触手冰凉，你心说不好，迅速抽手，但是气血已被吸走一半"};

// 物品语录-simple
QStringList qstringlist_frontHall1_clock_text = {"这组钟表的指针很是奇怪，它们永远指向正午十二时"};
QStringList qstringlist_frontHall1_chair_text = {"“阳人阳方去，阴人阴无方！甲丙庚壬位，乾长总为阳！", "地相堪舆大先生的位子，不容心术歹毒之人玷污!”"};
QStringList qstringlist_frontHall1_table_text = {"恍惚间，你似乎感觉这桌子上应该放着一块砚台，上头搭着一支笔。", "还有一个铜罗盘和金算盘……"};

QStringList qstringlist_frontHall2_pingfeng_text = {"这屏风上的图案看久了使人头痛欲裂。"};
QStringList qstringlist_backHall1_pingfeng_text = {"这屏风两侧手感完全不同，一侧阴寒一侧温润"};

// 人物语录
QStringList qstringlist_frontHall1_master_QA_text = {"你来我地相庐，所为何事啊？", "此地是地相庐，是我历代地相堪舆先生的观世之地。观你的面相，应是连日劳顿，大可在此暂歇片刻。", "我地相堪舆一脉单传，下代出，上代死，必传阴生子。你与我地相无缘，但天元道场广收门徒，你可去天心十道寻吾兄蒋盘。"};
QStringList qstringlist_frontHall1_player_QA_text = {"晚辈是误入此地，敢问前辈这是何处？", "晚辈想求阴阳术。"};
QStringList qstringlist_frontHall1_master_text = {"八连十一下，十三五中殇，十六并十二，如斯凶者亡！觊觎地相堪舆者，当有魂飞魄散的觉悟！"};
QStringList qstringlist_frontHall2_master_text = {"八连十一下，十三五中殇，十六并十二，如斯凶者亡！觊觎地相堪舆者，当有魂飞魄散的觉悟！"};
QStringList qstringlist_frontHall3_master_text;
QStringList qstringlist_frontHall4_master_text = {"“甚是抱歉，在下忘了时辰，晾了阁下许久。", "但今日已晚，还请先行回府，点宅之事明日再叙。”"};
QStringList qstringlist_frontHall5_master_text = {"“师……师尊？真的是您么？", "阴阳这条命……不苦。", "阴阳也不忘师尊教导……回来了！”"};
QStringList qstringlist_frontHall6_master_text = {"“李某虽好客，但外人欲窥后室，着实无礼。”"};
QStringList qstringlist_frontHall7_master_text;

QStringList qstringlist_backHall1_master_text = {"“遁空？你符术出黑死里逃生了？！”"};
QStringList qstringlist_backHall2_master_text = {"“此间阴阳二气交接，吃饭倒是舒服”"};
QStringList qstringlist_backHall3_master_text = {"“来者是客，一起用餐何如？”"};

QStringList qstringlist_study1_master_text;
QStringList qstringlist_study2_master_text = {"“这里存放着地相堪舆历代先生的手札", "我年轻之时曾在此地数月不出，终得些许顿悟”"};

QStringList qstringlist_boneRoom1_master_text;
QStringList qstringlist_boneRoom2_master_text = {"“这里是师尊临终前命我摸骨之地", "人之祸福，生来九骨……我本该坚信师尊遗卦，可惜……”",
                                                 "“癸乙丁辛地，为阴坤巽乡，阴阳依准用，反此必然殃！", "入我地相庐禁地，便不可活出！”"};

QStringList qstringlist_eastBedRoom1_master_text = {"“遁空，头又疼了么？", "只是我们现在不能去找廖叔叔，这是先生之间的约定……”",
                                                    "“是日值亡，仙命本亡，除灵大吉！", "让你出去死不是怜悯你，是怕你脏了我和雉儿的卧房！”"};
QStringList qstringlist_westBedRoom1_master_text;
