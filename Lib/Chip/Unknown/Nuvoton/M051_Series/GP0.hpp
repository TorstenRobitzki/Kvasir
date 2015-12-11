#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Registers group
    namespace Nonepmd{    ///<Bit Mode Control
        using Addr = Register::Address<0x50004000,0xffff0000,0,unsigned>;
        ///P0 I/O Pin[0] Mode Control
Determine each I/O type of P0 pins
00 = P0[0] pin is in INPUT mode.
01 = P0[0] pin is in OUTPUT mode.
10 = P0[0] pin is in Open-Drain mode.
11 = P0[0] pin is in Quasi-bidirectional mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pmd0{}; 
        namespace Pmd0ValC{
        }
        ///P0 I/O Pin[1] Mode Control
Determine each I/O type of P0 pins
00 = P0[1] pin is in INPUT mode.
01 = P0[1] pin is in OUTPUT mode.
10 = P0[1] pin is in Open-Drain mode.
11 = P0[1] pin is in Quasi-bidirectional mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> pmd1{}; 
        namespace Pmd1ValC{
        }
        ///P0 I/O Pin[2] Mode Control
Determine each I/O type of P0 pins
00 = P0[2] pin is in INPUT mode.
01 = P0[2] pin is in OUTPUT mode.
10 = P0[2] pin is in Open-Drain mode.
11 = P0[2] pin is in Quasi-bidirectional mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pmd2{}; 
        namespace Pmd2ValC{
        }
        ///P0 I/O Pin[3] Mode Control
Determine each I/O type of P0 pins
00 = P0[3] pin is in INPUT mode.
01 = P0[3] pin is in OUTPUT mode.
10 = P0[3] pin is in Open-Drain mode.
11 = P0[3] pin is in Quasi-bidirectional mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pmd3{}; 
        namespace Pmd3ValC{
        }
        ///P0 I/O Pin[4] Mode Control
Determine each I/O type of P0 pins
00 = P0[4] pin is in INPUT mode.
01 = P0[4] pin is in OUTPUT mode.
10 = P0[4] pin is in Open-Drain mode.
11 = P0[4] pin is in Quasi-bidirectional mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> pmd4{}; 
        namespace Pmd4ValC{
        }
        ///P0 I/O Pin[5] Mode Control
Determine each I/O type of P0 pins
00 = P0[5] pin is in INPUT mode.
01 = P0[5] pin is in OUTPUT mode.
10 = P0[5] pin is in Open-Drain mode.
11 = P0[5] pin is in Quasi-bidirectional mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> pmd5{}; 
        namespace Pmd5ValC{
        }
        ///P0 I/O Pin[6] Mode Control
Determine each I/O type of P0 pins
00 = P0[6] pin is in INPUT mode.
01 = P0[6] pin is in OUTPUT mode.
10 = P0[6] pin is in Open-Drain mode.
11 = P0[6] pin is in Quasi-bidirectional mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pmd6{}; 
        namespace Pmd6ValC{
        }
        ///P0 I/O Pin[7] Mode Control
Determine each I/O type of P0 pins
00 = P0[7] pin is in INPUT mode.
01 = P0[7] pin is in OUTPUT mode.
10 = P0[7] pin is in Open-Drain mode.
11 = P0[7] pin is in Quasi-bidirectional mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pmd7{}; 
        namespace Pmd7ValC{
        }
    }
    namespace Noneoffd{    ///<Bit OFF Digital Enable
        using Addr = Register::Address<0x50004004,0xff00ffff,0,unsigned>;
        ///OFFD: P0 Pin OFF digital input path Enable
1 = Disable IO digital input path (digital input tied to low)
0 = Enable IO digital input path
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> offd{}; 
        namespace OffdValC{
        }
    }
    namespace Nonedout{    ///<Data Output Value
        using Addr = Register::Address<0x50004008,0xffffff00,0,unsigned>;
        ///P0 Pin[0] Output Value
Each of these bits control the status of a P0 pin when the P0 pin is configures as output, open-drain and quasi-mode.
1 = P0 Pin[0] will drive High if the corresponding output mode enabling bit is set.
0 = P0 Pin[0] will drive Low if the corresponding output mode enabling bit is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout0{}; 
        namespace Dout0ValC{
        }
        ///P0 Pin[1] Output Value
Each of these bits control the status of a P0 pin when the P0 pin is configures as output, open-drain and quasi-mode.
1 = P0 Pin[1] will drive High if the corresponding output mode enabling bit is set.
0 = P0 Pin[1] will drive Low if the corresponding output mode enabling bit is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dout1{}; 
        namespace Dout1ValC{
        }
        ///P0 Pin[2] Output Value
Each of these bits control the status of a P0 pin when the P0 pin is configures as output, open-drain and quasi-mode.
1 = P0 Pin[2] will drive High if the corresponding output mode enabling bit is set.
0 = P0 Pin[2] will drive Low if the corresponding output mode enabling bit is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dout2{}; 
        namespace Dout2ValC{
        }
        ///P0 Pin[3] Output Value
Each of these bits control the status of a P0 pin when the P0 pin is configures as output, open-drain and quasi-mode.
1 = P0 Pin[3] will drive High if the corresponding output mode enabling bit is set.
0 = P0 Pin[3] will drive Low if the corresponding output mode enabling bit is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dout3{}; 
        namespace Dout3ValC{
        }
        ///P0 Pin[4] Output Value
Each of these bits control the status of a P0 pin when the P0 pin is configures as output, open-drain and quasi-mode.
1 = P0 Pin[4] will drive High if the corresponding output mode enabling bit is set.
0 = P0 Pin[4] will drive Low if the corresponding output mode enabling bit is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dout4{}; 
        namespace Dout4ValC{
        }
        ///P0 Pin[5] Output Value
Each of these bits control the status of a P0 pin when the P0 pin is configures as output, open-drain and quasi-mode.
1 = P0 Pin[5] will drive High if the corresponding output mode enabling bit is set.
0 = P0 Pin[5] will drive Low if the corresponding output mode enabling bit is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dout5{}; 
        namespace Dout5ValC{
        }
        ///P0 Pin[6] Output Value
Each of these bits control the status of a P0 pin when the P0 pin is configures as output, open-drain and quasi-mode.
1 = P0 Pin[6] will drive High if the corresponding output mode enabling bit is set.
0 = P0 Pin[6] will drive Low if the corresponding output mode enabling bit is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dout6{}; 
        namespace Dout6ValC{
        }
        ///P0 Pin[7] Output Value
Each of these bits control the status of a P0 pin when the P0 pin is configures as output, open-drain and quasi-mode.
1 = P0 Pin[7] will drive High if the corresponding output mode enabling bit is set.
0 = P0 Pin[7] will drive Low if the corresponding output mode enabling bit is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dout7{}; 
        namespace Dout7ValC{
        }
    }
    namespace Nonedmask{    ///<Data Output Write Mask
        using Addr = Register::Address<0x5000400c,0xffffff00,0,unsigned>;
        ///P0 Data Output Write Mask
These bits are used to protect the corresponding register of P0_DOUT bit[0]. When set the DMASK bit[0] to "1", the corresponding DOUT0 bit is protected. The write signal is masked, write data to the protect bit is ignored
0 = The corresponding P0_DOUT[0] bit can be updated
1 = The corresponding P0_DOUT[0] bit is protected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmask0{}; 
        namespace Dmask0ValC{
        }
        ///P0 Data Output Write Mask
These bits are used to protect the corresponding register of P0_DOUT bit[1]. When set the DMASK bit[1] to "1", the corresponding DOUT1 bit is protected. The write signal is masked, write data to the protect bit is ignored
0 = The corresponding P0_DOUT[1] bit can be updated
1 = The corresponding P0_DOUT[1] bit is protected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmask1{}; 
        namespace Dmask1ValC{
        }
        ///P0 Data Output Write Mask
These bits are used to protect the corresponding register of P0_DOUT bit[2]. When set the DMASK bit[2] to "1", the corresponding DOUT2 bit is protected. The write signal is masked, write data to the protect bit is ignored
0 = The corresponding P0_DOUT[2] bit can be updated
1 = The corresponding P0_DOUT[2] bit is protected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmask2{}; 
        namespace Dmask2ValC{
        }
        ///P0 Data Output Write Mask
These bits are used to protect the corresponding register of P0_DOUT bit[3]. When set the DMASK bit[3] to "1", the corresponding DOUT3 bit is protected. The write signal is masked, write data to the protect bit is ignored
0 = The corresponding P0_DOUT[3] bit can be updated
1 = The corresponding P0_DOUT[3] bit is protected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dmask3{}; 
        namespace Dmask3ValC{
        }
        ///P0 Data Output Write Mask
These bits are used to protect the corresponding register of P0_DOUT bit[4]. When set the DMASK bit[4] to "1", the corresponding DOUT4 bit is protected. The write signal is masked, write data to the protect bit is ignored
0 = The corresponding P0_DOUT[4] bit can be updated
1 = The corresponding P0_DOUT[4] bit is protected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dmask4{}; 
        namespace Dmask4ValC{
        }
        ///P0 Data Output Write Mask
These bits are used to protect the corresponding register of P0_DOUT bit[6]. When set the DMASK bit[6] to "1", the corresponding DOUT6 bit is protected. The write signal is masked, write data to the protect bit is ignored
0 = The corresponding P0_DOUT[6] bit can be updated
1 = The corresponding P0_DOUT[6] bit is protected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dmask5{}; 
        namespace Dmask5ValC{
        }
        ///P0 Data Output Write Mask
These bits are used to protect the corresponding register of P0_DOUT bit[6]. When set the DMASK bit[6] to "1", the corresponding DOUT6 bit is protected. The write signal is masked, write data to the protect bit is ignored
0 = The corresponding P0_DOUT[6] bit can be updated
1 = The corresponding P0_DOUT[6] bit is protected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dmask6{}; 
        namespace Dmask6ValC{
        }
        ///P0 Data Output Write Mask
These bits are used to protect the corresponding register of P0_DOUT bit[7]. When set the DMASK bit[7] to "1", the corresponding DOUT7 bit is protected. The write signal is masked, write data to the protect bit is ignored
0 = The corresponding P0_DOUT[7] bit can be updated
1 = The corresponding P0_DOUT[7] bit is protected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dmask7{}; 
        namespace Dmask7ValC{
        }
    }
    namespace Nonepin{    ///<Pin Value
        using Addr = Register::Address<0x50004010,0xffffff00,0,unsigned>;
        ///P0 Pin Values
The value read from each of these bit reflects the actual status of the respective P0 Pin[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pin0{}; 
        namespace Pin0ValC{
        }
        ///P0 Pin Values
The value read from each of these bit reflects the actual status of the respective P0 Pin[1].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pin1{}; 
        namespace Pin1ValC{
        }
        ///P0 Pin Values
The value read from each of these bit reflects the actual status of the respective P0 Pin[2].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pin2{}; 
        namespace Pin2ValC{
        }
        ///P0 Pin Values
The value read from each of these bit reflects the actual status of the respective P0 Pin[3].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pin3{}; 
        namespace Pin3ValC{
        }
        ///P0 Pin Values
The value read from each of these bit reflects the actual status of the respective P0 Pin[4].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pin4{}; 
        namespace Pin4ValC{
        }
        ///P0 Pin Values
The value read from each of these bit reflects the actual status of the respective P0 Pin[5].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pin5{}; 
        namespace Pin5ValC{
        }
        ///P0 Pin Values
The value read from each of these bit reflects the actual status of the respective P0 Pin[6].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pin6{}; 
        namespace Pin6ValC{
        }
        ///P0 Pin Values
The value read from each of these bit reflects the actual status of the respective P0 Pin[7].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pin7{}; 
        namespace Pin7ValC{
        }
    }
    namespace Nonedben{    ///<De-bounce Enable
        using Addr = Register::Address<0x50004014,0xffffff00,0,unsigned>;
        ///P0 Input Signal De-bounce Enable
DBEN[0] used to enable the de-bounce function for each corresponding bit. if the input signal pulse width can't be sampled by continuous two de-bounce sample cycle. The input signal transition is seen as the signal bounce and will not trigger the interrupt.
The DBEN[0] is used for "edge-trigger" interrupt only, and ignored for "level trigger" interrupt
0 = The bit[0] de-bounce function is disabled
1 = The bit[0] de-bounce function is enabled
The de-bounce function is valid for edge triggered interrupt. if the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dben0{}; 
        namespace Dben0ValC{
        }
        ///P0 Input Signal De-bounce Enable
DBEN[1] used to enable the de-bounce function for each corresponding bit. if the input signal pulse width can't be sampled by continuous two de-bounce sample cycle. The input signal transition is seen as the signal bounce and will not trigger the interrupt.
The DBEN[1] is used for "edge-trigger" interrupt only, and ignored for "level trigger" interrupt
0 = The bit[1] de-bounce function is disabled
1 = The bit[1] de-bounce function is enabled
The de-bounce function is valid for edge triggered interrupt. if the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dben1{}; 
        namespace Dben1ValC{
        }
        ///P0 Input Signal De-bounce Enable
DBEN[2] used to enable the de-bounce function for each corresponding bit. if the input signal pulse width can't be sampled by continuous two de-bounce sample cycle. The input signal transition is seen as the signal bounce and will not trigger the interrupt.
The DBEN[2] is used for "edge-trigger" interrupt only, and ignored for "level trigger" interrupt
0 = The bit[2] de-bounce function is disabled
1 = The bit[2] de-bounce function is enabled
The de-bounce function is valid for edge triggered interrupt. if the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dben2{}; 
        namespace Dben2ValC{
        }
        ///P0 Input Signal De-bounce Enable
DBEN[3] used to enable the de-bounce function for each corresponding bit. if the input signal pulse width can't be sampled by continuous two de-bounce sample cycle. The input signal transition is seen as the signal bounce and will not trigger the interrupt.
The DBEN[3] is used for "edge-trigger" interrupt only, and ignored for "level trigger" interrupt
0 = The bit[3] de-bounce function is disabled
1 = The bit[3] de-bounce function is enabled
The de-bounce function is valid for edge triggered interrupt. if the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dben3{}; 
        namespace Dben3ValC{
        }
        ///P0 Input Signal De-bounce Enable
DBEN[4] used to enable the de-bounce function for each corresponding bit. if the input signal pulse width can't be sampled by continuous two de-bounce sample cycle. The input signal transition is seen as the signal bounce and will not trigger the interrupt.
The DBEN[4] is used for "edge-trigger" interrupt only, and ignored for "level trigger" interrupt
0 = The bit[4] de-bounce function is disabled
1 = The bit[4] de-bounce function is enabled
The de-bounce function is valid for edge triggered interrupt. if the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dben4{}; 
        namespace Dben4ValC{
        }
        ///P0 Input Signal De-bounce Enable
DBEN[5] used to enable the de-bounce function for each corresponding bit. if the input signal pulse width can't be sampled by continuous two de-bounce sample cycle. The input signal transition is seen as the signal bounce and will not trigger the interrupt.
The DBEN[5] is used for "edge-trigger" interrupt only, and ignored for "level trigger" interrupt
0 = The bit[5] de-bounce function is disabled
1 = The bit[5] de-bounce function is enabled
The de-bounce function is valid for edge triggered interrupt. if the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dben5{}; 
        namespace Dben5ValC{
        }
        ///P0 Input Signal De-bounce Enable
DBEN[6] used to enable the de-bounce function for each corresponding bit. if the input signal pulse width can't be sampled by continuous two de-bounce sample cycle. The input signal transition is seen as the signal bounce and will not trigger the interrupt.
The DBEN[6] is used for "edge-trigger" interrupt only, and ignored for "level trigger" interrupt
0 = The bit[6] de-bounce function is disabled
1 = The bit[6] de-bounce function is enabled
The de-bounce function is valid for edge triggered interrupt. if the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dben6{}; 
        namespace Dben6ValC{
        }
        ///P0 Input Signal De-bounce Enable
DBEN[7] used to enable the de-bounce function for each corresponding bit. if the input signal pulse width can't be sampled by continuous two de-bounce sample cycle. The input signal transition is seen as the signal bounce and will not trigger the interrupt.
The DBEN[7] is used for "edge-trigger" interrupt only, and ignored for "level trigger" interrupt
0 = The bit[7] de-bounce function is disabled
1 = The bit[7] de-bounce function is enabled
The de-bounce function is valid for edge triggered interrupt. if the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dben7{}; 
        namespace Dben7ValC{
        }
    }
    namespace Noneimd{    ///<Interrupt Mode Control
        using Addr = Register::Address<0x50004018,0xffffff00,0,unsigned>;
        ///Port 0 Interrupt Mode Control
IMD[0] used to control the interrupt is by level trigger or by edge trigger. If the interrupt is by edge trigger, the trigger souce is control de-bounce. If the interrupt is by level trigger, the input source is sampled by one clock and the generate the interrupt
0 = Edge trigger interrupt
1 = Level trigger interrupt
if set pin as the level trigger interrupt, then only one level can be set on the registers P0_IEN.
if set both the level to trigger interrupt, the setting is ignored and no interrupt will occur.
The de-bounce function is valid for edge triggered interrupt. if the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> imd0{}; 
        namespace Imd0ValC{
        }
        ///Port 0 Interrupt Mode Control
IMD[1] used to control the interrupt is by level trigger or by edge trigger. If the interrupt is by edge trigger, the trigger souce is control de-bounce. If the interrupt is by level trigger, the input source is sampled by one clock and the generate the interrupt
0 = Edge trigger interrupt
1 = Level trigger interrupt
if set pin as the level trigger interrupt, then only one level can be set on the registers P0_IEN.
if set both the level to trigger interrupt, the setting is ignored and no interrupt will occur.
The de-bounce function is valid for edge triggered interrupt. if the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> imd1{}; 
        namespace Imd1ValC{
        }
        ///Port 0 Interrupt Mode Control
IMD[2] used to control the interrupt is by level trigger or by edge trigger. If the interrupt is by edge trigger, the trigger souce is control de-bounce. If the interrupt is by level trigger, the input source is sampled by one clock and the generate the interrupt
0 = Edge trigger interrupt
1 = Level trigger interrupt
if set pin as the level trigger interrupt, then only one level can be set on the registers P0_IEN.
if set both the level to trigger interrupt, the setting is ignored and no interrupt will occur.
The de-bounce function is valid for edge triggered interrupt. if the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> imd2{}; 
        namespace Imd2ValC{
        }
        ///Port 0 Interrupt Mode Control
IMD[3] used to control the interrupt is by level trigger or by edge trigger. If the interrupt is by edge trigger, the trigger souce is control de-bounce. If the interrupt is by level trigger, the input source is sampled by one clock and the generate the interrupt
0 = Edge trigger interrupt
1 = Level trigger interrupt
if set pin as the level trigger interrupt, then only one level can be set on the registers P0_IEN.
if set both the level to trigger interrupt, the setting is ignored and no interrupt will occur.
The de-bounce function is valid for edge triggered interrupt. if the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> imd3{}; 
        namespace Imd3ValC{
        }
        ///Port 0 Interrupt Mode Control
IMD[4] used to control the interrupt is by level trigger or by edge trigger. If the interrupt is by edge trigger, the trigger souce is control de-bounce. If the interrupt is by level trigger, the input source is sampled by one clock and the generate the interrupt
0 = Edge trigger interrupt
1 = Level trigger interrupt
if set pin as the level trigger interrupt, then only one level can be set on the registers P0_IEN.
if set both the level to trigger interrupt, the setting is ignored and no interrupt will occur.
The de-bounce function is valid for edge triggered interrupt. if the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> imd4{}; 
        namespace Imd4ValC{
        }
        ///Port 0 Interrupt Mode Control
IMD[5] used to control the interrupt is by level trigger or by edge trigger. If the interrupt is by edge trigger, the trigger souce is control de-bounce. If the interrupt is by level trigger, the input source is sampled by one clock and the generate the interrupt
0 = Edge trigger interrupt
1 = Level trigger interrupt
if set pin as the level trigger interrupt, then only one level can be set on the registers P0_IEN.
if set both the level to trigger interrupt, the setting is ignored and no interrupt will occur.
The de-bounce function is valid for edge triggered interrupt. if the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> imd5{}; 
        namespace Imd5ValC{
        }
        ///Port 0 Interrupt Mode Control
IMD[6] used to control the interrupt is by level trigger or by edge trigger. If the interrupt is by edge trigger, the trigger souce is control de-bounce. If the interrupt is by level trigger, the input source is sampled by one clock and the generate the interrupt
0 = Edge trigger interrupt
1 = Level trigger interrupt
if set pin as the level trigger interrupt, then only one level can be set on the registers P0_IEN.
if set both the level to trigger interrupt, the setting is ignored and no interrupt will occur.
The de-bounce function is valid for edge triggered interrupt. if the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> imd6{}; 
        namespace Imd6ValC{
        }
        ///Port 0 Interrupt Mode Control
IMD[7] used to control the interrupt is by level trigger or by edge trigger. If the interrupt is by edge trigger, the trigger souce is control de-bounce. If the interrupt is by level trigger, the input source is sampled by one clock and the generate the interrupt
0 = Edge trigger interrupt
1 = Level trigger interrupt
if set pin as the level trigger interrupt, then only one level can be set on the registers P0_IEN.
if set both the level to trigger interrupt, the setting is ignored and no interrupt will occur.
The de-bounce function is valid for edge triggered interrupt. if the interrupt mode is level triggered, the de-bounce enable bit is ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> imd7{}; 
        namespace Imd7ValC{
        }
    }
    namespace Noneien{    ///<Interrupt Enable
        using Addr = Register::Address<0x5000401c,0xff00ff00,0,unsigned>;
        ///Port0 Interrupt Enable by Input Falling Edge or Input Level Low
IF_EN[0] used to enable the interrupt for each of the corresponding input P0[0]. Set bit "1" also enable the pin wakeup function.
When set the IF_EN[0] bit "1":
If the interrupt is level mode trigger, the input P0[0] state at level "low" will generate the interrupt.
If the interrupt is edge mode trigger, the input P0[0] state change from "high-to-low" will generate the interrupt.
1 = Enable the P0[0] state low-level or high-to-low change interrupt
0 = Disable the P0[0] state low-level or high-to-low change interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ifEn0{}; 
        namespace Ifen0ValC{
        }
        ///Port0 Interrupt Enable by Input Falling Edge or Input Level Low
IF_EN[1] used to enable the interrupt for each of the corresponding input P0[1]. Set bit "1" also enable the pin wakeup function.
When set the IF_EN[1] bit "1":
If the interrupt is level mode trigger, the input P0[1] state at level "low" will generate the interrupt.
If the interrupt is edge mode trigger, the input P0[1] state change from "high-to-low" will generate the interrupt.
1 = Enable the P0[1] state low-level or high-to-low change interrupt
0 = Disable the P0[1] state low-level or high-to-low change interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ifEn1{}; 
        namespace Ifen1ValC{
        }
        ///Port0 Interrupt Enable by Input Falling Edge or Input Level Low
IF_EN[2] used to enable the interrupt for each of the corresponding input P0[2]. Set bit "1" also enable the pin wakeup function.
When set the IF_EN[2] bit "1":
If the interrupt is level mode trigger, the input P0[2] state at level "low" will generate the interrupt.
If the interrupt is edge mode trigger, the input P0[2] state change from "high-to-low" will generate the interrupt.
1 = Enable the P0[2] state low-level or high-to-low change interrupt
0 = Disable the P0[2] state low-level or high-to-low change interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ifEn2{}; 
        namespace Ifen2ValC{
        }
        ///Port0 Interrupt Enable by Input Falling Edge or Input Level Low
IF_EN[3] used to enable the interrupt for each of the corresponding input P0[3]. Set bit "1" also enable the pin wakeup function.
When set the IF_EN[3] bit "1":
If the interrupt is level mode trigger, the input P0[3] state at level "low" will generate the interrupt.
If the interrupt is edge mode trigger, the input P0[3] state change from "high-to-low" will generate the interrupt.
1 = Enable the P0[3] state low-level or high-to-low change interrupt
0 = Disable the P0[3] state low-level or high-to-low change interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ifEn3{}; 
        namespace Ifen3ValC{
        }
        ///Port0 Interrupt Enable by Input Falling Edge or Input Level Low
IF_EN[4] used to enable the interrupt for each of the corresponding input P0[4]. Set bit "1" also enable the pin wakeup function.
When set the IF_EN[4] bit "1":
If the interrupt is level mode trigger, the input P0[4] state at level "low" will generate the interrupt.
If the interrupt is edge mode trigger, the input P0[4] state change from "high-to-low" will generate the interrupt.
1 = Enable the P0[4] state low-level or high-to-low change interrupt
0 = Disable the P0[4] state low-level or high-to-low change interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ifEn4{}; 
        namespace Ifen4ValC{
        }
        ///Port0 Interrupt Enable by Input Falling Edge or Input Level Low
IF_EN[5] used to enable the interrupt for each of the corresponding input P0[5]. Set bit "1" also enable the pin wakeup function.
When set the IF_EN[5] bit "1":
If the interrupt is level mode trigger, the input P0[5] state at level "low" will generate the interrupt.
If the interrupt is edge mode trigger, the input P0[5] state change from "high-to-low" will generate the interrupt.
1 = Enable the P0[5] state low-level or high-to-low change interrupt
0 = Disable the P0[5] state low-level or high-to-low change interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ifEn5{}; 
        namespace Ifen5ValC{
        }
        ///Port0 Interrupt Enable by Input Falling Edge or Input Level Low
IF_EN[6] used to enable the interrupt for each of the corresponding input P0[6]. Set bit "1" also enable the pin wakeup function.
When set the IF_EN[6] bit "1":
If the interrupt is level mode trigger, the input P0[6] state at level "low" will generate the interrupt.
If the interrupt is edge mode trigger, the input P0[6] state change from "high-to-low" will generate the interrupt.
1 = Enable the P0[6] state low-level or high-to-low change interrupt
0 = Disable the P0[6] state low-level or high-to-low change interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ifEn6{}; 
        namespace Ifen6ValC{
        }
        ///Port0 Interrupt Enable by Input Falling Edge or Input Level Low
IF_EN[7] used to enable the interrupt for each of the corresponding input P0[7]. Set bit "1" also enable the pin wakeup function.
When set the IF_EN[7] bit "1":
If the interrupt is level mode trigger, the input P0[7] state at level "low" will generate the interrupt.
If the interrupt is edge mode trigger, the input P0[7] state change from "high-to-low" will generate the interrupt.
1 = Enable the P0[7] state low-level or high-to-low change interrupt
0 = Disable the P0[7] state low-level or high-to-low change interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ifEn7{}; 
        namespace Ifen7ValC{
        }
        ///Port 0 Interrupt Enable by Input Rising Edge or Input Level High
IR_EN[0] used to enable the interrupt for each of the corresponding input P0[0]. Set bit "1" also enable the pin wakeup function.
When set the IR_EN[0] bit "1":
If the interrupt is level mode trigger, the input P0[0] state at level "high" will generate the interrupt.
If the interrupt is edge mode trigger, the input P0[0] state change from "low-to-high" will generate the interrupt.
1 = Enable the P0[0] level-high or low-to-high interrupt
0 = Disable the P0[0] level-high or low-to-high interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> irEn0{}; 
        namespace Iren0ValC{
        }
        ///Port 0 Interrupt Enable by Input Rising Edge or Input Level High
IR_EN[1] used to enable the interrupt for each of the corresponding input P0[1]. Set bit "1" also enable the pin wakeup function.
When set the IR_EN[1] bit "1":
If the interrupt is level mode trigger, the input P0[1] state at level "high" will generate the interrupt.
If the interrupt is edge mode trigger, the input P0[1] state change from "low-to-high" will generate the interrupt.
1 = Enable the P0[1] level-high or low-to-high interrupt
0 = Disable the P0[1] level-high or low-to-high interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> irEn1{}; 
        namespace Iren1ValC{
        }
        ///Port 0 Interrupt Enable by Input Rising Edge or Input Level High
IR_EN[2] used to enable the interrupt for each of the corresponding input P0[2]. Set bit "1" also enable the pin wakeup function.
When set the IR_EN[2] bit "1":
If the interrupt is level mode trigger, the input P0[2] state at level "high" will generate the interrupt.
If the interrupt is edge mode trigger, the input P0[2] state change from "low-to-high" will generate the interrupt.
1 = Enable the P0[2] level-high or low-to-high interrupt
0 = Disable the P0[2] level-high or low-to-high interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> irEn2{}; 
        namespace Iren2ValC{
        }
        ///Port 0 Interrupt Enable by Input Rising Edge or Input Level High
IR_EN[3] used to enable the interrupt for each of the corresponding input P0[3]. Set bit "1" also enable the pin wakeup function.
When set the IR_EN[3] bit "1":
If the interrupt is level mode trigger, the input P0[3] state at level "high" will generate the interrupt.
If the interrupt is edge mode trigger, the input P0[3] state change from "low-to-high" will generate the interrupt.
1 = Enable the P0[3] level-high or low-to-high interrupt
0 = Disable the P0[3] level-high or low-to-high interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> irEn3{}; 
        namespace Iren3ValC{
        }
        ///Port 0 Interrupt Enable by Input Rising Edge or Input Level High
IR_EN[4] used to enable the interrupt for each of the corresponding input P0[4]. Set bit "1" also enable the pin wakeup function.
When set the IR_EN[4] bit "1":
If the interrupt is level mode trigger, the input P0[4] state at level "high" will generate the interrupt.
If the interrupt is edge mode trigger, the input P0[4] state change from "low-to-high" will generate the interrupt.
1 = Enable the P0[4] level-high or low-to-high interrupt
0 = Disable the P0[4] level-high or low-to-high interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> irEn4{}; 
        namespace Iren4ValC{
        }
        ///Port 0 Interrupt Enable by Input Rising Edge or Input Level High
IR_EN[5] used to enable the interrupt for each of the corresponding input P0[5]. Set bit "1" also enable the pin wakeup function.
When set the IR_EN[5] bit "1":
If the interrupt is level mode trigger, the input P0[5] state at level "high" will generate the interrupt.
If the interrupt is edge mode trigger, the input P0[5] state change from "low-to-high" will generate the interrupt.
1 = Enable the P0[5] level-high or low-to-high interrupt
0 = Disable the P0[5] level-high or low-to-high interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> irEn5{}; 
        namespace Iren5ValC{
        }
        ///Port 0 Interrupt Enable by Input Rising Edge or Input Level High
IR_EN[6] used to enable the interrupt for each of the corresponding input P0[6]. Set bit "1" also enable the pin wakeup function.
When set the IR_EN[6] bit "1":
If the interrupt is level mode trigger, the input P0[6] state at level "high" will generate the interrupt.
If the interrupt is edge mode trigger, the input P0[6] state change from "low-to-high" will generate the interrupt.
1 = Enable the P0[6] level-high or low-to-high interrupt
0 = Disable the P0[6] level-high or low-to-high interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> irEn6{}; 
        namespace Iren6ValC{
        }
        ///Port 0 Interrupt Enable by Input Rising Edge or Input Level High
IR_EN[7] used to enable the interrupt for each of the corresponding input P0[7]. Set bit "1" also enable the pin wakeup function.
When set the IR_EN[7] bit "1":
If the interrupt is level mode trigger, the input P0[7] state at level "high" will generate the interrupt.
If the interrupt is edge mode trigger, the input P0[7] state change from "low-to-high" will generate the interrupt.
1 = Enable the P0[7] level-high or low-to-high interrupt
0 = Disable the P0[7] level-high or low-to-high interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> irEn7{}; 
        namespace Iren7ValC{
        }
    }
    namespace Noneisrc{    ///<Interrupt Trigger Source
        using Addr = Register::Address<0x50004020,0xffffff00,0,unsigned>;
        ///Port 0 Interrupt Trigger Source Indicator
Read:
1 = Indicates P0[0] generate an interrupt
0 = No interrupt at P0[0]
Write:
1 = Clear the correspond pending interrupt
0 = No action
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> isrc0{}; 
        namespace Isrc0ValC{
        }
        ///Port 0 Interrupt Trigger Source Indicator
Read:
1 = Indicates P0[1] generate an interrupt
0 = No interrupt at P0[1]
Write:
1 = Clear the correspond pending interrupt
0 = No action
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> isrc1{}; 
        namespace Isrc1ValC{
        }
        ///Port 0 Interrupt Trigger Source Indicator
Read:
1 = Indicates P0[2] generate an interrupt
0 = No interrupt at P0[2]
Write:
1 = Clear the correspond pending interrupt
0 = No action
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> isrc2{}; 
        namespace Isrc2ValC{
        }
        ///Port 0 Interrupt Trigger Source Indicator
Read:
1 = Indicates P0[3] generate an interrupt
0 = No interrupt at P0[3]
Write:
1 = Clear the correspond pending interrupt
0 = No action
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> isrc3{}; 
        namespace Isrc3ValC{
        }
        ///Port 0 Interrupt Trigger Source Indicator
Read:
1 = Indicates P0[4] generate an interrupt
0 = No interrupt at P0[4]
Write:
1 = Clear the correspond pending interrupt
0 = No action
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> isrc4{}; 
        namespace Isrc4ValC{
        }
        ///Port 0 Interrupt Trigger Source Indicator
Read:
1 = Indicates P0[5] generate an interrupt
0 = No interrupt at P0[5]
Write:
1 = Clear the correspond pending interrupt
0 = No action
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> isrc5{}; 
        namespace Isrc5ValC{
        }
        ///Port 0 Interrupt Trigger Source Indicator
Read:
1 = Indicates P0[6] generate an interrupt
0 = No interrupt at P0[6]
Write:
1 = Clear the correspond pending interrupt
0 = No action
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> isrc6{}; 
        namespace Isrc6ValC{
        }
        ///Port 0 Interrupt Trigger Source Indicator
Read:
1 = Indicates P0[7] generate an interrupt
0 = No interrupt at P0[7]
Write:
1 = Clear the correspond pending interrupt
0 = No action
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> isrc7{}; 
        namespace Isrc7ValC{
        }
    }
}