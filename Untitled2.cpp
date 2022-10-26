#include <iostream>
#include <unistd.h>
using namespace std;
void in();

main (){
    in();
	int j = 0;
	string a = "mddddddddddhhhhhhhhhhhhyyyyyyyyyyyyssssssssssssssssssssssssssssyyyyyyyyyyyyyyhhhhhhhhhhddddddddddmmmdddddddddhhhhhhhhhhhhyyyyyyyyyyyyyyyyysssssssssssssssssssssssyyyyyyyyyyyyyyyyhhhhhhhhhhhhdddddddddmmddddddddhhhhhhhhhhhhyhhyso+//////::::::/+ossssooooooosssso+/::::::::::///+syhhyhhhhhhhhhhhhddddddddddddddddhhhhhhhhhhhhhyo/---.....``````````.:+sssoooooooss/.``````````````...-:oyhhhhhhhhhhhhhddddddddddddddhhhhhhhhhhhhy+:-.......``````````````.:osooooooo+:`````````````.```..-..-+yhhhhhhhhhhhhhddddddddddhhhhhhhhhhhhyo:.....`...`````````````````-osooooo/.```````````````...``.--..-ohhhhhhhhhhhhdddddddddhhhhhhhhhhhhy/.....``...```````````````````-osooo/``````````````````....`.---.-+hhhhyhhhhhhhhdddddddhhhhhhhhhhhy/.....```...````````````````````:sss+.``````````````````.--....::-..+hhhhhyhhhhhhhdddddhhhhhhhhhhhh+.....``.+ss:````````````````````.+so-````````````````````---...-::-..ohhhhhhhdhhhhddddhhhhhhhhhhhhs-.-://:-ohhs.`````````````````````-s/`````````````````````.:--...::--.-shhhhyhdhhhhhddhhhhhhhhhhhhh:./sysyyshdd+``````````````````````./.``````````````````````-:-...-::--./hhhhhyhdhhhhhdhhhhhhhhhhhhy-.oyyssyyhdh/```````.......```````...```````````````````````-:--.../:----ydhhhyhhhhhhhdhhhhhhhhhhhho..:syysyyhhh:``````:oso/oo+-```````.````````````````````````-:--...//:---sdhhhyhhhhhhhhhhhhhhhhhhhho....:+ossyhh:``````+yo-/yy:``````````````````..`````````````-:--...//:---sdhhhyhhhhhhhhhhhhhhhhhhhhy-`......:/+o:``````.::-oyo-.```.-:::.```.-:..oy/``.-::-.````-:--...//:---yhhhhyhhhhhhhhhhhhhhhyhhhhh:`....````.-.```````..:yy/-..`-+so+o+.-/oyy-`-yo./syooh/````:::-..-//:--/hdhhhyhhhhhhhhhhhhhhhhyhhhho......```..-`````````oys:..`:ss/./syo:.oys.`.y//hy::os:```.::--..:/::--sdhhhyyhhhhhhhhhhhhhhhhyyhhhy/.....````.-.```````-sy/-.`.oso.`.+y:`.syo..+o:yhs+o/.````-/:--.-//:--+hhhhhyhhhhhhhhhhhhhhhhhhyhhhhy:.....```.--```:+/+sys/:-:/oso:-/o/```+yy+o+:oyhy:::+.``.:::-.-//::-/hdhhhyhhhhhhhhhhhhhhhhyhhhyhhhhy-...-.``..--``/sso+++ooo+:-/ooo/-````.oo+-`.-:osso+-```-/:--.://:-/ydhhhyhhhhhhhhhhhhhhhhhyyyhhyyhhhy:...-.``.-:.``..----..``..------.```....`...-----.```./::--://:-/ydhhhyhhhhhhhhhhhhhhhhhhyyyyyyyyhhhy/..--.`..-:``````..--...---...-.``..-..`.......````.:::--://:-/ydhhyyhhhyyhhhhhhhhhhhhhhyyyyyyyyyhhhy+..-:-..-:-```````....----...--.``.--..``````````.:/:--://::+hdhhyyhhyyyyyhhhhhhhhhhhhhyyyyyyyyyyyhhho-.-:-..-:-``````````...--.---.``.--.```````````-/:--:+/:/shdhyyyhyyyyyyhhhhhhhdhhhhhhhyyyyyyyyyyyyhhy/--::..-:-````````````...--.````..```````````-/:-:/+/:+ydhyyyyyyyyyyyyhhhhhhhdhhhhhhhhyyyyyyyyyyyyyhho:-::---:-`````````````...`` ``````````````-::-/yh+/shdhyyyyyyyyyyyyhhhhhhhdddhhhhhhhyyyyyyyyyyyyyyhhy+::/:--:-`````````````````    ``````````-::-+hddhhdhyyhhyyyyyyyyyhhhhhhhhddddhhhhhhhyyyyyyyyyyyyyyyhhs/:/:--:-.```````````````    ````````.-::/sdddddhyyhhyyyyyyyyyyhhhhhhhhddddddhhhhhhhyyyyyyyyyyyyyyyyhhs///:-::.```````````````  ````````.:::+hdddddhyyhyyyysyyyyyhhhhhhhhhddddddddhhhhhhhyyyyyyyyysyyyyyyyyhs+//:::-``````````````  ```````.::/sddddddhhhyyyysssyyyhhhhhhhhhhdddddddddhhhhhhhhhyyyyyyyyssssyyyyyyys++/::-.````````````  ``````-:/ohddddddhhyyyyyssyyyyyhhhhhhhhhddddddddddddhhhhhhhhyyyyyyyyyssssyyyyyyyso+//:.``````.```` `` ``.-:+hddddddhhhyyyysssyyyyhyhhhhhhhhddddddddddddddhhhhhhhhhyyyyyyyyysssssyyyyyyys+//-.````.`````````.:/+yddddddhhhyyyyssyyyyhhyhdhhhhhhddddddddddddddddhhhhhhhhhyyyyyyyyyyyyssyyyyyyyyso+:.````.``` ```-/+syhhdddhhhhyyysssyyyyhyyhddhhhhhdddddddddddddddddddhhhhhhhhhyyyyyyyyyyyyyysyyyyyyyyo/-....`````.:osyyyhhddhhhyyyysssyyyyyhhhdddhhddddddddddmmmddddddddddhhhhhhhhhhyyyyyyyyyyyyyyyyyyyyyyys/...````:osyyyyyyyhyyyyyyyyyyyhhhhdhddddhhddddddddddmmmmmmddddddddddhhhhhhhhhhhyyyyyyyyyyyyyyyyyyyyyys/.``:oyyyhyyyyyyyhhhhhhhhhhhhhhhhhhhhhddddddddddmmmmmmmmmmddddddddddhhhhhhhhhhhhhyyyyyyyyyyyyyyyyyyhys+shhhhyyyyyyyyyyyyhhhhhhhhhhhhhhhhdddddddddddmmmmmmmmmmmmmmddddddddddhhhhhhhhhhhhhyyyyyyyyyyyyyyyyhhhhhyyyyyyyyyyyyyyhhhhhhhhhhhhhhhdddddddddddmmmmmmmm";
	for (int i = 0; i < a.size(); i++){
		cout << a[i];
		j++;
		if (j == 100){
			cout << endl;
			j = 0;
			sleep(1);
		}
	}
	return EXIT_SUCCESS;
}
void in(){
    cout << "To thích cau that day !";
    cout << endl;
    sleep(2);
}


