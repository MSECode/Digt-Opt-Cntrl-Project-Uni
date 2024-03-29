function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "LabB_TuneTheGyro"};
	this.sidHashMap["LabB_TuneTheGyro"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "LabB_TuneTheGyro:314"};
	this.sidHashMap["LabB_TuneTheGyro:314"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "LabB_TuneTheGyro:303"};
	this.sidHashMap["LabB_TuneTheGyro:303"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "LabB_TuneTheGyro:556"};
	this.sidHashMap["LabB_TuneTheGyro:556"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<Root>/Clock"] = {sid: "LabB_TuneTheGyro:272"};
	this.sidHashMap["LabB_TuneTheGyro:272"] = {rtwname: "<Root>/Clock"};
	this.rtwnameHashMap["<Root>/Data Type  Conversion1"] = {sid: "LabB_TuneTheGyro:322"};
	this.sidHashMap["LabB_TuneTheGyro:322"] = {rtwname: "<Root>/Data Type  Conversion1"};
	this.rtwnameHashMap["<Root>/Gyroscope"] = {sid: "LabB_TuneTheGyro:568"};
	this.sidHashMap["LabB_TuneTheGyro:568"] = {rtwname: "<Root>/Gyroscope"};
	this.rtwnameHashMap["<Root>/Logical Operator"] = {sid: "LabB_TuneTheGyro:289"};
	this.sidHashMap["LabB_TuneTheGyro:289"] = {rtwname: "<Root>/Logical Operator"};
	this.rtwnameHashMap["<Root>/Terminator"] = {sid: "LabB_TuneTheGyro:569"};
	this.sidHashMap["LabB_TuneTheGyro:569"] = {rtwname: "<Root>/Terminator"};
	this.rtwnameHashMap["<Root>/Terminator1"] = {sid: "LabB_TuneTheGyro:570"};
	this.sidHashMap["LabB_TuneTheGyro:570"] = {rtwname: "<Root>/Terminator1"};
	this.rtwnameHashMap["<Root>/calibrate the gyro before X seconds, start controlling after X seconds"] = {sid: "LabB_TuneTheGyro:314"};
	this.sidHashMap["LabB_TuneTheGyro:314"] = {rtwname: "<Root>/calibrate the gyro before X seconds, start controlling after X seconds"};
	this.rtwnameHashMap["<Root>/gyro calibration procedure"] = {sid: "LabB_TuneTheGyro:303"};
	this.sidHashMap["LabB_TuneTheGyro:303"] = {rtwname: "<Root>/gyro calibration procedure"};
	this.rtwnameHashMap["<Root>/measurement filter"] = {sid: "LabB_TuneTheGyro:556"};
	this.sidHashMap["LabB_TuneTheGyro:556"] = {rtwname: "<Root>/measurement filter"};
	this.rtwnameHashMap["<S1>/u"] = {sid: "LabB_TuneTheGyro:314:1"};
	this.sidHashMap["LabB_TuneTheGyro:314:1"] = {rtwname: "<S1>/u"};
	this.rtwnameHashMap["<S1>/Compare"] = {sid: "LabB_TuneTheGyro:314:2"};
	this.sidHashMap["LabB_TuneTheGyro:314:2"] = {rtwname: "<S1>/Compare"};
	this.rtwnameHashMap["<S1>/Constant"] = {sid: "LabB_TuneTheGyro:314:3"};
	this.sidHashMap["LabB_TuneTheGyro:314:3"] = {rtwname: "<S1>/Constant"};
	this.rtwnameHashMap["<S1>/y"] = {sid: "LabB_TuneTheGyro:314:4"};
	this.sidHashMap["LabB_TuneTheGyro:314:4"] = {rtwname: "<S1>/y"};
	this.rtwnameHashMap["<S2>/gyro"] = {sid: "LabB_TuneTheGyro:304"};
	this.sidHashMap["LabB_TuneTheGyro:304"] = {rtwname: "<S2>/gyro"};
	this.rtwnameHashMap["<S2>/enable the code below only when the external boolean input is true"] = {sid: "LabB_TuneTheGyro:305"};
	this.sidHashMap["LabB_TuneTheGyro:305"] = {rtwname: "<S2>/enable the code below only when the external boolean input is true"};
	this.rtwnameHashMap["<S2>/compute a moving average of the gyro"] = {sid: "LabB_TuneTheGyro:345"};
	this.sidHashMap["LabB_TuneTheGyro:345"] = {rtwname: "<S2>/compute a moving average of the gyro"};
	this.rtwnameHashMap["<S2>/gyro bias"] = {sid: "LabB_TuneTheGyro:312"};
	this.sidHashMap["LabB_TuneTheGyro:312"] = {rtwname: "<S2>/gyro bias"};
	this.rtwnameHashMap["<S3>/gyro bias"] = {sid: "LabB_TuneTheGyro:557"};
	this.sidHashMap["LabB_TuneTheGyro:557"] = {rtwname: "<S3>/gyro bias"};
	this.rtwnameHashMap["<S3>/enable the code below only when the external boolean input is true "] = {sid: "LabB_TuneTheGyro:277"};
	this.sidHashMap["LabB_TuneTheGyro:277"] = {rtwname: "<S3>/enable the code below only when the external boolean input is true "};
	this.rtwnameHashMap["<S3>/Scope"] = {sid: "LabB_TuneTheGyro:567"};
	this.sidHashMap["LabB_TuneTheGyro:567"] = {rtwname: "<S3>/Scope"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
