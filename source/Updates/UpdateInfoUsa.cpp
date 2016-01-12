//
// Created by cpasjuste on 11/01/16.
//

#include "UpdateInfoUsa.h"

UpdateInfoUsa::UpdateInfoUsa(int deviceType) {

    this->region = "USA";
    this->version = "9.2.0-20";

    if(deviceType == 2  || deviceType == 4) {

        this->model = "n3DS";

        items.push_back(UpdateItem("5077d839633ec80e7a9d3ca98b794d4b", "/updates/0004001000021000.cia"));
        items.push_back(UpdateItem("ef670fdcbb9a2237915804db474257ce", "/updates/0004001000021100.cia"));
        items.push_back(UpdateItem("34d893ab8b5e3ab96e0c4ab96b5507c7", "/updates/0004001000021400.cia"));
        items.push_back(UpdateItem("b23aeee568261108a7a82ca8529236a3", "/updates/0004001000021900.cia"));
        items.push_back(UpdateItem("2633645f8fa601f47c3d2222064f4044", "/updates/0004001000021A00.cia"));
        items.push_back(UpdateItem("d8e5e90416304d2a4cdb84389eb276cb", "/updates/000400100002C000.cia"));
        items.push_back(UpdateItem("a328b611cdd75fed919c80bc9b22fb41", "/updates/0004001020021300.cia"));
        items.push_back(UpdateItem("43a9b9ea442c4f890a9d4fdff16cc399", "/updates/0004001020021D00.cia"));
        items.push_back(UpdateItem("61c31a0592f4475cac809be64d203c5d", "/updates/0004001020024100.cia"));
        items.push_back(UpdateItem("7be12fe691d85f8bf4aae1d5324b4990", "/updates/000400102002CF00.cia"));
        items.push_back(UpdateItem("cf480d3aabca522ceba273659097b917", "/updates/000400102002D100.cia"));
        items.push_back(UpdateItem("ac0d75908637683b329f9e4beb8e862c", "/updates/000400102002D300.cia"));
        items.push_back(UpdateItem("caf9a3533e0c2dce3b9aa24329b2cfb9", "/updates/000400102002D500.cia"));
        items.push_back(UpdateItem("3bd5e62beebe124ea662f9fc89815dcf", "/updates/0004001B00010702.cia"));
        items.push_back(UpdateItem("045059b89235aa57ff5442c7a0d2883b", "/updates/0004001B00018002.cia"));
        items.push_back(UpdateItem("8a91c3c61d3ed0d6ff2d50708d709334", "/updates/0004001B00018202.cia"));
        items.push_back(UpdateItem("c4b629e3b29772b01c027e0271e6e351", "/updates/0004003000008A02.cia"));
        items.push_back(UpdateItem("0598aafd66710e384b4a881b3335fbb0", "/updates/0004003000008B02.cia"));
        items.push_back(UpdateItem("f945912232ba45e48f9a3514ff016c4a", "/updates/0004003000008F02.cia"));
        items.push_back(UpdateItem("e8f0c7754ae48a6c492e65dc3ba75093", "/updates/0004003000009002.cia"));
        items.push_back(UpdateItem("025cbb9db47f28500cf530554585ae00", "/updates/0004003000009202.cia"));
        items.push_back(UpdateItem("7de3ad2fc7de91bdaf1e4143ca95d4e9", "/updates/0004003000009302.cia"));
        items.push_back(UpdateItem("59306b5ad76210a29310f678ef43f72d", "/updates/0004003000009602.cia"));
        items.push_back(UpdateItem("4b5ad6b040a559298a80a72f8c5c333b", "/updates/0004003000009702.cia"));
        items.push_back(UpdateItem("8b0bdfe12ffd410dbc43eb8b203538ef", "/updates/000400300000BD02.cia"));
        items.push_back(UpdateItem("e9528b0f9502384025a322fb3ae55b17", "/updates/000400300000C502.cia"));
        items.push_back(UpdateItem("c51346569047957c05dcc6e85aaeba08", "/updates/000400300000C802.cia"));
        items.push_back(UpdateItem("aafcf89b226be51bb1f3e5055ed91528", "/updates/000400300000C902.cia"));
        items.push_back(UpdateItem("c970691ec51ecde0fbc4e035b0677de7", "/updates/000400300000CB02.cia"));
        items.push_back(UpdateItem("a2f0d60e153de892eff513df762044b2", "/updates/000400300000CC02.cia"));
        items.push_back(UpdateItem("95cd4d4816fe4c186dc6a361e1e4b187", "/updates/000400300000CE02.cia"));
        items.push_back(UpdateItem("82a3c23a561eb942614d5ff325d77f0a", "/updates/000400300000F602.cia"));
        items.push_back(UpdateItem("627751e1d6c5357c065e9e2751f0b88f", "/updates/0004003020008A03.cia"));
        items.push_back(UpdateItem("537223b4f18061c1d432723d75578712", "/updates/0004003020009402.cia"));
        items.push_back(UpdateItem("ccc7f374eaaeee93fc425f21f21f7949", "/updates/000400302000C503.cia"));
        items.push_back(UpdateItem("77a533b12c68d19442d13af836440a06", "/updates/000400302000C803.cia"));
        items.push_back(UpdateItem("da19c8b8500c20240285d5654693f8f3", "/updates/0004009B00012302.cia"));
        items.push_back(UpdateItem("8f10790a40b8268491324ffb43ee5767", "/updates/0004009B00013302.cia"));
        items.push_back(UpdateItem("b27d85b97fd94fd6fb78bf713cc0dd4f", "/updates/000400DB00010302.cia"));
        items.push_back(UpdateItem("6f221e6c3662cb840f9d86dc9689efc8", "/updates/000400DB00010502.cia"));
        items.push_back(UpdateItem("388d3127f032416ab089f047152f99c2", "/updates/000400DB00017302.cia"));
        items.push_back(UpdateItem("f431d53794192c2c58966aa7f642ce50", "/updates/000400DB20016302.cia"));
        items.push_back(UpdateItem("d54e05f09eefdb2acdd9aad5b5f3fda9", "/updates/0004013000001502.cia"));
        items.push_back(UpdateItem("d8eea6c7f5a906b4d8226eff5ffa1a22", "/updates/0004013000001702.cia"));
        items.push_back(UpdateItem("0545e69671b600f7729a6cb3bf9f663d", "/updates/0004013000001802.cia"));
        items.push_back(UpdateItem("d709c39abd711bc96d00b4ffc236adfb", "/updates/0004013000002402.cia"));
        items.push_back(UpdateItem("7cf379b8438556cf756b50519090f071", "/updates/0004013000002602.cia"));
        items.push_back(UpdateItem("c242661cb22b900bb8095c0f86a628aa", "/updates/0004013000002702.cia"));
        items.push_back(UpdateItem("c7ca7097ecb2326d7b877ed90777d5c6", "/updates/0004013000002802.cia"));
        items.push_back(UpdateItem("4cd549922730653f80cc673e07f80e84", "/updates/0004013000002902.cia"));
        items.push_back(UpdateItem("c708ee846a01e78ce33f1df1dc063b93", "/updates/0004013000002B02.cia"));
        items.push_back(UpdateItem("6938c0fed001682a4c1a0a84c7e89b23", "/updates/0004013000002C02.cia"));
        items.push_back(UpdateItem("bbaf00da95bcd48ba30db9c29bc5d710", "/updates/0004013000002D02.cia"));
        items.push_back(UpdateItem("53e56a11ad82534142f4c2aff65b8ce0", "/updates/0004013000002E02.cia"));
        items.push_back(UpdateItem("73130495744f6881e0f9a68897a1886a", "/updates/0004013000002F02.cia"));
        items.push_back(UpdateItem("fad6e0d994045889b406b8564111c26d", "/updates/0004013000003102.cia"));
        items.push_back(UpdateItem("903fcca30e252a558339ba9be36e64b8", "/updates/0004013000003202.cia"));
        items.push_back(UpdateItem("2bde1d8af1d1cdc247417f6d289b2454", "/updates/0004013000003302.cia"));
        items.push_back(UpdateItem("f40fd755269c4150b84978b41d5abf7b", "/updates/0004013000003402.cia"));
        items.push_back(UpdateItem("663fef2ef61eb61fcff2ab898885802a", "/updates/0004013000003502.cia"));
        items.push_back(UpdateItem("8a52dabcf88911638995a615c8e5c6d0", "/updates/0004001B00018102.cia"));
        items.push_back(UpdateItem("7238145a566868a989f6f08305531679", "/updates/000400300000CD02.cia"));
        items.push_back(UpdateItem("70fcaa9466840f77198cfc3af26cb1e4", "/updates/0004013000001D02.cia"));
        items.push_back(UpdateItem("70d9f078c0728c72b2311e6a2a234f68", "/updates/0004013000003702.cia"));
        items.push_back(UpdateItem("0f9e0e3cb762d67b3a6a8ea55a2512c5", "/updates/0004013020002103.cia"));
        items.push_back(UpdateItem("05386ec81b9a37f316156d5b43e2b3e5", "/updates/0004013000003802.cia"));
        items.push_back(UpdateItem("b72acac949ecee3a0af47b4ab0a6f87a", "/updates/0004013000008002.cia"));
        items.push_back(UpdateItem("479c987c0a96914049c8e83132f61d33", "/updates/0004013020001503.cia"));
        items.push_back(UpdateItem("fe8f8dbcdeacb4d5584b8e39982b4d4c", "/updates/0004013020001602.cia"));
        items.push_back(UpdateItem("18bbcfd9d48ee9818646efee3ef6131b", "/updates/0004013020001703.cia"));
        items.push_back(UpdateItem("ab2748b4a422304868589d5f579354ec", "/updates/0004013020001803.cia"));
        items.push_back(UpdateItem("0be6e2295c9a6461279ae9af90854b9e", "/updates/0004013020001A03.cia"));
        items.push_back(UpdateItem("bfb6344c9a36fbbdb5520008c4bda52a", "/updates/0004013020001B03.cia"));
        items.push_back(UpdateItem("97e7336035309bb7040b43127f13c6cb", "/updates/0004013020001C02.cia"));
        items.push_back(UpdateItem("f1adad20876ab8b02e803ae6bc78b2e7", "/updates/0004013020001C03.cia"));
        items.push_back(UpdateItem("29b3672ea308a16265ff948bf8f4fd08", "/updates/0004013020001D03.cia"));
        items.push_back(UpdateItem("6f531aab4ed75f4d5a77f5117348a839", "/updates/0004013020001E02.cia"));
        items.push_back(UpdateItem("4f0747ac9491eb57220ff09dab3cef36", "/updates/0004013020001E03.cia"));
        items.push_back(UpdateItem("4562362f68a61d5bb845d5daf0e7b6dc", "/updates/0004013020001F02.cia"));
        items.push_back(UpdateItem("b84f97b7691eb6f11c9879859dab5a46", "/updates/0004013020001F03.cia"));
        items.push_back(UpdateItem("26555279542910687d2a5129a2228f32", "/updates/0004013020002202.cia"));
        items.push_back(UpdateItem("5f654154a807b05b6477da7753139677", "/updates/0004013020002203.cia"));
        items.push_back(UpdateItem("bdb6c867e1d039e32f919b48d48e6007", "/updates/0004013020002302.cia"));
        items.push_back(UpdateItem("049538291b109594f88259d10b872aff", "/updates/0004013020002303.cia"));
        items.push_back(UpdateItem("1dd0c5700266a2ad276a22846be654dc", "/updates/0004013020002403.cia"));
        items.push_back(UpdateItem("3f5e42cd3161ed0a105ec0321d6ca126", "/updates/0004013020002703.cia"));
        items.push_back(UpdateItem("998b81b2aa28de8e54f759543941246b", "/updates/0004013020002903.cia"));
        items.push_back(UpdateItem("828bef49959d16da3a9308952ff99725", "/updates/0004013020002C03.cia"));
        items.push_back(UpdateItem("c04cc7eeac8fc2628d44fcf2ed8718f0", "/updates/0004013020002D03.cia"));
        items.push_back(UpdateItem("b2d681b7c29481cc53d4cdaf53542b50", "/updates/0004013020002E03.cia"));
        items.push_back(UpdateItem("3fcb75cbd0a41ba94f75100b0b9f0fa7", "/updates/0004013020002F03.cia"));
        items.push_back(UpdateItem("1ed5d74c9a16a1cf231f464e033bb41f", "/updates/0004013020003103.cia"));
        items.push_back(UpdateItem("6e5bd1dd876cc4b7753c01b6b7d50b71", "/updates/0004013020003203.cia"));
        items.push_back(UpdateItem("d43569bc8bcd75ebb8db0ffb8aef2d8c", "/updates/0004013020003303.cia"));
        items.push_back(UpdateItem("48d5a7f3367389d8c92181606239fbf8", "/updates/0004013020004002.cia"));
        items.push_back(UpdateItem("8760e1c795ce41498fd20b4be3bb7153", "/updates/0004013020004102.cia"));
        items.push_back(UpdateItem("4e09700e502f56c2431a5c0fc01f0aaa", "/updates/0004013020004202.cia"));
        items.push_back(UpdateItem("91807c9da07f1ca3c4ec135f7253db9d", "/updates/0004013020008003.cia"));
        items.push_back(UpdateItem("11e520d4381dfe14e8c3e0d1ef2c1c24", "/updates/0004013820000002.cia"));
        items.push_back(UpdateItem("c9f0ec712374388596b0d5155cc1eb5d", "/updates/0004013820000003.cia"));
        items.push_back(UpdateItem("fca5f3a774eb0318151491ad6a80bdc2", "/updates/0004013820000102.cia"));
        items.push_back(UpdateItem("9178d8cf42f27d812dd202c0378deb4b", "/updates/0004013820000202.cia"));
    } else {

        this->model = "o3DS";

        items.push_back( UpdateItem("5077d839633ec80e7a9d3ca98b794d4b", "/updates/0004001000021000.cia") );
        items.push_back( UpdateItem("ef670fdcbb9a2237915804db474257ce", "/updates/0004001000021100.cia") );
        items.push_back( UpdateItem("7bc72091cc3a5ff6250c74013f74cae4", "/updates/0004001000021200.cia") );
        items.push_back( UpdateItem("836a54fc220bbd7a242b18d9d0f2a723", "/updates/0004001000021300.cia") );
        items.push_back( UpdateItem("34d893ab8b5e3ab96e0c4ab96b5507c7", "/updates/0004001000021400.cia") );
        items.push_back( UpdateItem("621fd3850f902d58c24dfc54758216ad", "/updates/0004001000021500.cia") );
        items.push_back( UpdateItem("28e3b763227afe574e9a561139726ca9", "/updates/0004001000021700.cia") );
        items.push_back( UpdateItem("294524e72363d8875785adc83db8c742", "/updates/0004001000021800.cia") );
        items.push_back( UpdateItem("b23aeee568261108a7a82ca8529236a3", "/updates/0004001000021900.cia") );
        items.push_back( UpdateItem("2633645f8fa601f47c3d2222064f4044", "/updates/0004001000021A00.cia") );
        items.push_back( UpdateItem("02d851dca02c1d60f5ad9c8dacefc0e6", "/updates/0004001000021B00.cia") );
        items.push_back( UpdateItem("49241acfb0482e075fcda036434863da", "/updates/0004001000021D00.cia") );
        items.push_back( UpdateItem("175d2e35d732ae1baa9b90b82abd5f23", "/updates/0004001000021E00.cia") );
        items.push_back( UpdateItem("d8a846c44ff7725f3d6fda94a5b14ca4", "/updates/0004001000021F00.cia") );
        items.push_back( UpdateItem("2bf41b5290af22cf8d51d92d2fdcc973", "/updates/0004001000024000.cia") );
        items.push_back( UpdateItem("e8cae7dd5c8c4d5a7d453f1a1e806ab1", "/updates/0004001B00010002.cia") );
        items.push_back( UpdateItem("3bd5e62beebe124ea662f9fc89815dcf", "/updates/0004001B00010702.cia") );
        items.push_back( UpdateItem("37899eaad8fa2e958bb10913934880d8", "/updates/0004001B00010802.cia") );
        items.push_back( UpdateItem("045059b89235aa57ff5442c7a0d2883b", "/updates/0004001B00018002.cia") );
        items.push_back( UpdateItem("8a52dabcf88911638995a615c8e5c6d0", "/updates/0004001B00018102.cia") );
        items.push_back( UpdateItem("8a91c3c61d3ed0d6ff2d50708d709334", "/updates/0004001B00018202.cia") );
        items.push_back( UpdateItem("c4b629e3b29772b01c027e0271e6e351", "/updates/0004003000008A02.cia") );
        items.push_back( UpdateItem("4302c1686da2314ee370be48fbb8ba97", "/updates/0004003000008A03.cia") );
        items.push_back( UpdateItem("0598aafd66710e384b4a881b3335fbb0", "/updates/0004003000008B02.cia") );
        items.push_back( UpdateItem("f945912232ba45e48f9a3514ff016c4a", "/updates/0004003000008F02.cia") );
        items.push_back( UpdateItem("e8f0c7754ae48a6c492e65dc3ba75093", "/updates/0004003000009002.cia") );
        items.push_back( UpdateItem("025cbb9db47f28500cf530554585ae00", "/updates/0004003000009202.cia") );
        items.push_back( UpdateItem("7de3ad2fc7de91bdaf1e4143ca95d4e9", "/updates/0004003000009302.cia") );
        items.push_back( UpdateItem("94ac4a7123bd2865cb4741a678063e15", "/updates/0004003000009402.cia") );
        items.push_back( UpdateItem("59306b5ad76210a29310f678ef43f72d", "/updates/0004003000009602.cia") );
        items.push_back( UpdateItem("8b0bdfe12ffd410dbc43eb8b203538ef", "/updates/000400300000BD02.cia") );
        items.push_back( UpdateItem("e9528b0f9502384025a322fb3ae55b17", "/updates/000400300000C502.cia") );
        items.push_back( UpdateItem("6e06f9f68b216866de6110883fd5b6af", "/updates/000400300000C503.cia") );
        items.push_back( UpdateItem("c51346569047957c05dcc6e85aaeba08", "/updates/000400300000C802.cia") );
        items.push_back( UpdateItem("9e301e8bf640d5cd2af1456af05abe82", "/updates/000400300000C803.cia") );
        items.push_back( UpdateItem("aafcf89b226be51bb1f3e5055ed91528", "/updates/000400300000C902.cia") );
        items.push_back( UpdateItem("c970691ec51ecde0fbc4e035b0677de7", "/updates/000400300000CB02.cia") );
        items.push_back( UpdateItem("a2f0d60e153de892eff513df762044b2", "/updates/000400300000CC02.cia") );
        items.push_back( UpdateItem("7238145a566868a989f6f08305531679", "/updates/000400300000CD02.cia") );
        items.push_back( UpdateItem("83565b4103f924b7c5893ebd7688206c", "/updates/000400300000CE02.cia") );
        items.push_back( UpdateItem("82a3c23a561eb942614d5ff325d77f0a", "/updates/000400300000F602.cia") );
        items.push_back( UpdateItem("b36876609c4362ae28211c0c3da46045", "/updates/0004009B00010202.cia") );
        items.push_back( UpdateItem("e78b5fded4191d9669314ad457590c1b", "/updates/0004009B00010402.cia") );
        items.push_back( UpdateItem("6d7673c8487dc231002f1ddc6ee79bf3", "/updates/0004009B00010602.cia") );
        items.push_back( UpdateItem("2b01fa9e03ae3501650888601e595185", "/updates/0004009B00011402.cia") );
        items.push_back( UpdateItem("039260bc53ab2a6ff11f3725501a1446", "/updates/0004009B00011D02.cia") );
        items.push_back( UpdateItem("c2a3e5ea45d75b76c057400f1612b779", "/updates/0004009B00011E02.cia") );
        items.push_back( UpdateItem("da19c8b8500c20240285d5654693f8f3", "/updates/0004009B00012302.cia") );
        items.push_back( UpdateItem("8f10790a40b8268491324ffb43ee5767", "/updates/0004009B00013302.cia") );
        items.push_back( UpdateItem("7970c352474532e7b1738e9988b5f09a", "/updates/0004009B00014002.cia") );
        items.push_back( UpdateItem("4eb03910a44a5e25978c7ffaf6a84a03", "/updates/0004009B00014102.cia") );
        items.push_back( UpdateItem("aa170b789a51bd4cf310d815178d53fc", "/updates/0004009B00014202.cia") );
        items.push_back( UpdateItem("10c1345669c8f1fe0ab4b1cad605d6c2", "/updates/0004009B00014302.cia") );
        items.push_back( UpdateItem("efb44f93f4053040b45848f93e338f14", "/updates/0004009B00015302.cia") );
        items.push_back( UpdateItem("b27d85b97fd94fd6fb78bf713cc0dd4f", "/updates/000400DB00010302.cia") );
        items.push_back( UpdateItem("6f221e6c3662cb840f9d86dc9689efc8", "/updates/000400DB00010502.cia") );
        items.push_back( UpdateItem("c66eaa0136c3e354243e05e2d262ecdd", "/updates/000400DB00016302.cia") );
        items.push_back( UpdateItem("388d3127f032416ab089f047152f99c2", "/updates/000400DB00017302.cia") );
        items.push_back( UpdateItem("d54e05f09eefdb2acdd9aad5b5f3fda9", "/updates/0004013000001502.cia") );
        items.push_back( UpdateItem("69d36484ad3b32ea6179cbe00423b937", "/updates/0004013000001503.cia") );
        items.push_back( UpdateItem("d8e5e90416304d2a4cdb84389eb276cb", "/updates/000400100002C000.cia") );
        items.push_back( UpdateItem("4b5ad6b040a559298a80a72f8c5c333b", "/updates/0004003000009702.cia") );
        items.push_back( UpdateItem("5ba95bec565dd58fb5142e136a40d710", "/updates/0004009B00011602.cia") );
        items.push_back( UpdateItem("fd8fe9fbf0594870f7049c4ba74260f3", "/updates/0004013000001602.cia") );
        items.push_back( UpdateItem("9c98936d8ba02db18fea0a4cfe203220", "/updates/0004013000001F03.cia") );
        items.push_back( UpdateItem("1a8c61842c88471640265149544018d8", "/updates/0004013000002A02.cia") );
        items.push_back( UpdateItem("d8eea6c7f5a906b4d8226eff5ffa1a22", "/updates/0004013000001702.cia") );
        items.push_back( UpdateItem("d091987acd5bfeb60778e1a1f36ac07d", "/updates/0004013000001703.cia") );
        items.push_back( UpdateItem("0545e69671b600f7729a6cb3bf9f663d", "/updates/0004013000001802.cia") );
        items.push_back( UpdateItem("7d9b40bdfdb0e21cb920df026c560c3f", "/updates/0004013000001803.cia") );
        items.push_back( UpdateItem("88a8914656366151f7c72c05d553859a", "/updates/0004013000001A02.cia") );
        items.push_back( UpdateItem("94cd6bb6efb2ce35f279fa5c3af0f4ca", "/updates/0004013000001A03.cia") );
        items.push_back( UpdateItem("878087f71e996fe9084ba1aa3d05caf8", "/updates/0004013000001B02.cia") );
        items.push_back( UpdateItem("9fb5c904cad65a87fb6720bf4730af8b", "/updates/0004013000001B03.cia") );
        items.push_back( UpdateItem("8adc9c421a65ad4f7c29f497bb6c3f42", "/updates/0004013000001C02.cia") );
        items.push_back( UpdateItem("1cd5c8bb84097198ee83b832b14ccc99", "/updates/0004013000001C03.cia") );
        items.push_back( UpdateItem("70fcaa9466840f77198cfc3af26cb1e4", "/updates/0004013000001D02.cia") );
        items.push_back( UpdateItem("6e4dc80cbf34824b584208b57c97d3cc", "/updates/0004013000001D03.cia") );
        items.push_back( UpdateItem("bd38b3217b6e98eeb5e4c2550bce6a8d", "/updates/0004013000001E02.cia") );
        items.push_back( UpdateItem("5b41ffc08dac696aa7bdde15485f9067", "/updates/0004013000001E03.cia") );
        items.push_back( UpdateItem("2af675dc5740bac0407a49b2a665f55d", "/updates/0004013000001F02.cia") );
        items.push_back( UpdateItem("e8e9886d6e301548a8e292ec39685218", "/updates/0004013000002002.cia") );
        items.push_back( UpdateItem("6fcf72e818cfeb4057b253898acc3b57", "/updates/0004013000002102.cia") );
        items.push_back( UpdateItem("22db18022cd83f0696bb8ec594eb9958", "/updates/0004013000002103.cia") );
        items.push_back( UpdateItem("173512e394072037613a1f5788de2afd", "/updates/0004013000002202.cia") );
        items.push_back( UpdateItem("370090ef93b810585f20d6fb57ec6d9d", "/updates/0004013000002203.cia") );
        items.push_back( UpdateItem("65479e968105ea60ab01ac63cb51cd87", "/updates/0004013000002302.cia") );
        items.push_back( UpdateItem("88e8d05c03c8abe7f90488ffcdc4542c", "/updates/0004013000002303.cia") );
        items.push_back( UpdateItem("d709c39abd711bc96d00b4ffc236adfb", "/updates/0004013000002402.cia") );
        items.push_back( UpdateItem("51fdb8536eb83762b4dd57800cde08a0", "/updates/0004013000002403.cia") );
        items.push_back( UpdateItem("7cf379b8438556cf756b50519090f071", "/updates/0004013000002602.cia") );
        items.push_back( UpdateItem("c242661cb22b900bb8095c0f86a628aa", "/updates/0004013000002702.cia") );
        items.push_back( UpdateItem("f4992a20462a4a41aef37d897aea9b08", "/updates/0004013000002703.cia") );
        items.push_back( UpdateItem("c7ca7097ecb2326d7b877ed90777d5c6", "/updates/0004013000002802.cia") );
        items.push_back( UpdateItem("4cd549922730653f80cc673e07f80e84", "/updates/0004013000002902.cia") );
        items.push_back( UpdateItem("fca89ddc17e3e892516b0f81b8958743", "/updates/0004013000002903.cia") );
        items.push_back( UpdateItem("65b0a9ae7d7b27bdeebb6433b6b838f4", "/updates/0004013000002A03.cia") );
        items.push_back( UpdateItem("c708ee846a01e78ce33f1df1dc063b93", "/updates/0004013000002B02.cia") );
        items.push_back( UpdateItem("6938c0fed001682a4c1a0a84c7e89b23", "/updates/0004013000002C02.cia") );
        items.push_back( UpdateItem("0616e72ccc3132a6b78bca6356caafc5", "/updates/0004013000002C03.cia") );
        items.push_back( UpdateItem("bbaf00da95bcd48ba30db9c29bc5d710", "/updates/0004013000002D02.cia") );
        items.push_back( UpdateItem("7bc4adecfccb8cc5665daef4dec20836", "/updates/0004013000002D03.cia") );
        items.push_back( UpdateItem("53e56a11ad82534142f4c2aff65b8ce0", "/updates/0004013000002E02.cia") );
        items.push_back( UpdateItem("14f24e1ba6f840680ca4fa7d9b69b6f1", "/updates/0004013000002E03.cia") );
        items.push_back( UpdateItem("73130495744f6881e0f9a68897a1886a", "/updates/0004013000002F02.cia") );
        items.push_back( UpdateItem("14d067ecb8fa9180e59ee839a1fb83b0", "/updates/0004013000002F03.cia") );
        items.push_back( UpdateItem("fad6e0d994045889b406b8564111c26d", "/updates/0004013000003102.cia") );
        items.push_back( UpdateItem("d85788aefb07b6c07b1da9b84ee017b1", "/updates/0004013000003103.cia") );
        items.push_back( UpdateItem("903fcca30e252a558339ba9be36e64b8", "/updates/0004013000003202.cia") );
        items.push_back( UpdateItem("69e1981acea2949da61ec2612ef5a6c8", "/updates/0004013000003203.cia") );
        items.push_back( UpdateItem("2bde1d8af1d1cdc247417f6d289b2454", "/updates/0004013000003302.cia") );
        items.push_back( UpdateItem("59050620268e9409d8678ab04b366288", "/updates/0004013000003303.cia") );
        items.push_back( UpdateItem("f40fd755269c4150b84978b41d5abf7b", "/updates/0004013000003402.cia") );
        items.push_back( UpdateItem("663fef2ef61eb61fcff2ab898885802a", "/updates/0004013000003502.cia") );
        items.push_back( UpdateItem("70d9f078c0728c72b2311e6a2a234f68", "/updates/0004013000003702.cia") );
        items.push_back( UpdateItem("05386ec81b9a37f316156d5b43e2b3e5", "/updates/0004013000003802.cia") );
        items.push_back( UpdateItem("39d61bd8c6d72f752dc79cc8ddda625f", "/updates/0004013000008002.cia") );
        items.push_back( UpdateItem("a020ed9d40dd8b592551ce98edefac9f", "/updates/0004013000008003.cia") );
        items.push_back( UpdateItem("899da982f618800143c2bffe8a52998c", "/updates/0004013800000002.cia") );
        items.push_back( UpdateItem("4d284baac2a26b504a7380b53bca02e0", "/updates/0004013800000003.cia") );
        items.push_back( UpdateItem("f36757b1070f0c7d2321915a82b5da92", "/updates/0004013800000102.cia") );
        items.push_back( UpdateItem("e32824752ab08d57532fed8d37dbf242", "/updates/0004013800000202.cia") );
        items.push_back( UpdateItem("40ea1a5aab4c6260a8513606bbec67f0", "/updates/0004800542383841.cia") );
        items.push_back( UpdateItem("488f4ec7d3686042de8d3537d24f8ec1", "/updates/00048005484E4441.cia") );
        items.push_back( UpdateItem("b2b788d315eb4633bc3a0258dd3b1015", "/updates/0004800F484E4841.cia") );
        items.push_back( UpdateItem("19208ad79ec6c262573448e10a754e5e", "/updates/0004800F484E4C41.cia") );
    }
}
