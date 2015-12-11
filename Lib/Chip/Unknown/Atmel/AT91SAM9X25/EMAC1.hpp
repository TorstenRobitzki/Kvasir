#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Ethernet MAC 10/100 1
    namespace Emac1Ncr{    ///<Network Control Register
        using Addr = Register::Address<0xf8030000,0xfffff800,0,unsigned>;
        ///LoopBack
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lb{}; 
        namespace LbValC{
        }
        ///Loopback local
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> llb{}; 
        namespace LlbValC{
        }
        ///Receive enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> re{}; 
        namespace ReValC{
        }
        ///Transmit enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> te{}; 
        namespace TeValC{
        }
        ///Management port enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mpe{}; 
        namespace MpeValC{
        }
        ///Clear statistics registers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrstat{}; 
        namespace ClrstatValC{
        }
        ///Increment statistics registers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> incstat{}; 
        namespace IncstatValC{
        }
        ///Write enable for statistics registers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> westat{}; 
        namespace WestatValC{
        }
        ///Back pressure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bp{}; 
        namespace BpValC{
        }
        ///Start transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tstart{}; 
        namespace TstartValC{
        }
        ///Transmit halt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> thalt{}; 
        namespace ThaltValC{
        }
    }
    namespace Emac1Ncfgr{    ///<Network Configuration Register
        using Addr = Register::Address<0xf8030004,0xfff00204,0,unsigned>;
        ///Speed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> spd{}; 
        namespace SpdValC{
        }
        ///Full Duplex
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fd{}; 
        namespace FdValC{
        }
        ///Jumbo Frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jframe{}; 
        namespace JframeValC{
        }
        ///Copy All Frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> caf{}; 
        namespace CafValC{
        }
        ///No Broadcast
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nbc{}; 
        namespace NbcValC{
        }
        ///Multicast Hash Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mti{}; 
        namespace MtiValC{
        }
        ///Unicast Hash Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uni{}; 
        namespace UniValC{
        }
        ///Receive 1536 bytes frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> big{}; 
        namespace BigValC{
        }
        ///MDC clock divider
        enum class ClkVal {
            mck8=0x00000000,     ///<MCK divided by 8 (MCK up to 20 MHz).
            mck16=0x00000001,     ///<MCK divided by 16 (MCK up to 40 MHz).
            mck32=0x00000002,     ///<MCK divided by 32 (MCK up to 80 MHz).
            mck64=0x00000003,     ///<MCK divided by 64 (MCK up to 160 MHz).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,ClkVal> clk{}; 
        namespace ClkValC{
            constexpr Register::FieldValue<decltype(clk),ClkVal::mck8> mck8{};
            constexpr Register::FieldValue<decltype(clk),ClkVal::mck16> mck16{};
            constexpr Register::FieldValue<decltype(clk),ClkVal::mck32> mck32{};
            constexpr Register::FieldValue<decltype(clk),ClkVal::mck64> mck64{};
        }
        ///Retry test
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rty{}; 
        namespace RtyValC{
        }
        ///Pause Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pae{}; 
        namespace PaeValC{
        }
        ///Receive Buffer Offset
        enum class RbofVal {
            offset0=0x00000000,     ///<No offset from start of receive buffer.
            offset1=0x00000001,     ///<One-byte offset from start of receive buffer.
            offset2=0x00000002,     ///<Two-byte offset from start of receive buffer.
            offset3=0x00000003,     ///<Three-byte offset from start of receive buffer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,RbofVal> rbof{}; 
        namespace RbofValC{
            constexpr Register::FieldValue<decltype(rbof),RbofVal::offset0> offset0{};
            constexpr Register::FieldValue<decltype(rbof),RbofVal::offset1> offset1{};
            constexpr Register::FieldValue<decltype(rbof),RbofVal::offset2> offset2{};
            constexpr Register::FieldValue<decltype(rbof),RbofVal::offset3> offset3{};
        }
        ///Receive Length field Checking Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rlce{}; 
        namespace RlceValC{
        }
        ///Discard Receive FCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> drfcs{}; 
        namespace DrfcsValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> efrhd{}; 
        namespace EfrhdValC{
        }
        ///Ignore RX FCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> irxfcs{}; 
        namespace IrxfcsValC{
        }
    }
    namespace Emac1Nsr{    ///<Network Status Register
        using Addr = Register::Address<0xf8030008,0xfffffff9,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mdio{}; 
        namespace MdioValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> idle{}; 
        namespace IdleValC{
        }
    }
    namespace Emac1Tsr{    ///<Transmit Status Register
        using Addr = Register::Address<0xf8030014,0xffffff80,0,unsigned>;
        ///Used Bit Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ubr{}; 
        namespace UbrValC{
        }
        ///Collision Occurred
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> col{}; 
        namespace ColValC{
        }
        ///Retry Limit exceeded
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rles{}; 
        namespace RlesValC{
        }
        ///Transmit Go
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tgo{}; 
        namespace TgoValC{
        }
        ///Buffers exhausted mid frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bex{}; 
        namespace BexValC{
        }
        ///Transmit Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> comp{}; 
        namespace CompValC{
        }
        ///Transmit Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> und{}; 
        namespace UndValC{
        }
    }
    namespace Emac1Rbqp{    ///<Receive Buffer Queue Pointer Register
        using Addr = Register::Address<0xf8030018,0x00000003,0,unsigned>;
        ///Receive buffer queue pointer address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace Emac1Tbqp{    ///<Transmit Buffer Queue Pointer Register
        using Addr = Register::Address<0xf803001c,0x00000003,0,unsigned>;
        ///Transmit buffer queue pointer address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace Emac1Rsr{    ///<Receive Status Register
        using Addr = Register::Address<0xf8030020,0xfffffff8,0,unsigned>;
        ///Buffer Not Available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bna{}; 
        namespace BnaValC{
        }
        ///Frame Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rec{}; 
        namespace RecValC{
        }
        ///Receive Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ovr{}; 
        namespace OvrValC{
        }
    }
    namespace Emac1Isr{    ///<Interrupt Status Register
        using Addr = Register::Address<0xf8030024,0xffffc300,0,unsigned>;
        ///Management Frame Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfd{}; 
        namespace MfdValC{
        }
        ///Receive Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        namespace RcompValC{
        }
        ///Receive Used Bit Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        namespace RxubrValC{
        }
        ///Transmit Used Bit Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txubr{}; 
        namespace TxubrValC{
        }
        ///Ethernet Transmit Buffer Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tund{}; 
        namespace TundValC{
        }
        ///Retry Limit Exceeded
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rlex{}; 
        namespace RlexValC{
        }
        ///Transmit Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txerr{}; 
        namespace TxerrValC{
        }
        ///Transmit Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        namespace TcompValC{
        }
        ///Receive Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        namespace RovrValC{
        }
        ///Hresp not OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
        namespace HrespValC{
        }
        ///Pause Frame Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pfre{}; 
        namespace PfreValC{
        }
        ///Pause Time Zero
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ptz{}; 
        namespace PtzValC{
        }
    }
    namespace Emac1Ier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xf8030028,0xffffc300,0,unsigned>;
        ///Management Frame sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfd{}; 
        namespace MfdValC{
        }
        ///Receive Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        namespace RcompValC{
        }
        ///Receive Used Bit Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        namespace RxubrValC{
        }
        ///Transmit Used Bit Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txubr{}; 
        namespace TxubrValC{
        }
        ///Ethernet Transmit Buffer Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tund{}; 
        namespace TundValC{
        }
        ///Retry Limit Exceeded
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rle{}; 
        namespace RleValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txerr{}; 
        namespace TxerrValC{
        }
        ///Transmit Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        namespace TcompValC{
        }
        ///Receive Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        namespace RovrValC{
        }
        ///Hresp not OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
        namespace HrespValC{
        }
        ///Pause Frame Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pfr{}; 
        namespace PfrValC{
        }
        ///Pause Time Zero
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ptz{}; 
        namespace PtzValC{
        }
    }
    namespace Emac1Idr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xf803002c,0xffffc300,0,unsigned>;
        ///Management Frame sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfd{}; 
        namespace MfdValC{
        }
        ///Receive Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        namespace RcompValC{
        }
        ///Receive Used Bit Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        namespace RxubrValC{
        }
        ///Transmit Used Bit Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txubr{}; 
        namespace TxubrValC{
        }
        ///Ethernet Transmit Buffer Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tund{}; 
        namespace TundValC{
        }
        ///Retry Limit Exceeded
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rle{}; 
        namespace RleValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txerr{}; 
        namespace TxerrValC{
        }
        ///Transmit Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        namespace TcompValC{
        }
        ///Receive Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        namespace RovrValC{
        }
        ///Hresp not OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
        namespace HrespValC{
        }
        ///Pause Frame Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pfr{}; 
        namespace PfrValC{
        }
        ///Pause Time Zero
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ptz{}; 
        namespace PtzValC{
        }
    }
    namespace Emac1Imr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xf8030030,0xffffc300,0,unsigned>;
        ///Management Frame sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfd{}; 
        namespace MfdValC{
        }
        ///Receive Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcomp{}; 
        namespace RcompValC{
        }
        ///Receive Used Bit Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxubr{}; 
        namespace RxubrValC{
        }
        ///Transmit Used Bit Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txubr{}; 
        namespace TxubrValC{
        }
        ///Ethernet Transmit Buffer Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tund{}; 
        namespace TundValC{
        }
        ///Retry Limit Exceeded
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rle{}; 
        namespace RleValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txerr{}; 
        namespace TxerrValC{
        }
        ///Transmit Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcomp{}; 
        namespace TcompValC{
        }
        ///Receive Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovr{}; 
        namespace RovrValC{
        }
        ///Hresp not OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hresp{}; 
        namespace HrespValC{
        }
        ///Pause Frame Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pfr{}; 
        namespace PfrValC{
        }
        ///Pause Time Zero
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ptz{}; 
        namespace PtzValC{
        }
    }
    namespace Emac1Man{    ///<Phy Maintenance Register
        using Addr = Register::Address<0xf8030034,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> code{}; 
        namespace CodeValC{
        }
        ///Register Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,18),Register::ReadWriteAccess,unsigned> rega{}; 
        namespace RegaValC{
        }
        ///PHY Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,23),Register::ReadWriteAccess,unsigned> phya{}; 
        namespace PhyaValC{
        }
        ///Read-write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> rw{}; 
        namespace RwValC{
        }
        ///Start of frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> sof{}; 
        namespace SofValC{
        }
    }
    namespace Emac1Ptr{    ///<Pause Time Register
        using Addr = Register::Address<0xf8030038,0xffff0000,0,unsigned>;
        ///Pause Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ptime{}; 
        namespace PtimeValC{
        }
    }
    namespace Emac1Pfr{    ///<Pause Frames Received Register
        using Addr = Register::Address<0xf803003c,0xffff0000,0,unsigned>;
        ///Pause Frames received OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> frok{}; 
        namespace FrokValC{
        }
    }
    namespace Emac1Fto{    ///<Frames Transmitted Ok Register
        using Addr = Register::Address<0xf8030040,0xff000000,0,unsigned>;
        ///Frames Transmitted OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> ftok{}; 
        namespace FtokValC{
        }
    }
    namespace Emac1Scf{    ///<Single Collision Frames Register
        using Addr = Register::Address<0xf8030044,0xffff0000,0,unsigned>;
        ///Single Collision Frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> scf{}; 
        namespace ScfValC{
        }
    }
    namespace Emac1Mcf{    ///<Multiple Collision Frames Register
        using Addr = Register::Address<0xf8030048,0xffff0000,0,unsigned>;
        ///Multicollision Frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mcf{}; 
        namespace McfValC{
        }
    }
    namespace Emac1Fro{    ///<Frames Received Ok Register
        using Addr = Register::Address<0xf803004c,0xff000000,0,unsigned>;
        ///Frames Received OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> frok{}; 
        namespace FrokValC{
        }
    }
    namespace Emac1Fcse{    ///<Frame Check Sequence Errors Register
        using Addr = Register::Address<0xf8030050,0xffffff00,0,unsigned>;
        ///Frame Check Sequence Errors
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fcse{}; 
        namespace FcseValC{
        }
    }
    namespace Emac1Ale{    ///<Alignment Errors Register
        using Addr = Register::Address<0xf8030054,0xffffff00,0,unsigned>;
        ///Alignment Errors
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ale{}; 
        namespace AleValC{
        }
    }
    namespace Emac1Dtf{    ///<Deferred Transmission Frames Register
        using Addr = Register::Address<0xf8030058,0xffff0000,0,unsigned>;
        ///Deferred Transmission Frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dtf{}; 
        namespace DtfValC{
        }
    }
    namespace Emac1Lcol{    ///<Late Collisions Register
        using Addr = Register::Address<0xf803005c,0xffffff00,0,unsigned>;
        ///Late Collisions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcol{}; 
        namespace LcolValC{
        }
    }
    namespace Emac1Ecol{    ///<Excessive Collisions Register
        using Addr = Register::Address<0xf8030060,0xffffff00,0,unsigned>;
        ///Excessive Collisions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> excol{}; 
        namespace ExcolValC{
        }
    }
    namespace Emac1Tund{    ///<Transmit Underrun Errors Register
        using Addr = Register::Address<0xf8030064,0xffffff00,0,unsigned>;
        ///Transmit Underruns
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tund{}; 
        namespace TundValC{
        }
    }
    namespace Emac1Cse{    ///<Carrier Sense Errors Register
        using Addr = Register::Address<0xf8030068,0xffffff00,0,unsigned>;
        ///Carrier Sense Errors
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cse{}; 
        namespace CseValC{
        }
    }
    namespace Emac1Rre{    ///<Receive Resource Errors Register
        using Addr = Register::Address<0xf803006c,0xffff0000,0,unsigned>;
        ///Receive Resource Errors
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rre{}; 
        namespace RreValC{
        }
    }
    namespace Emac1Rov{    ///<Receive Overrun Errors Register
        using Addr = Register::Address<0xf8030070,0xffffff00,0,unsigned>;
        ///Receive Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rovr{}; 
        namespace RovrValC{
        }
    }
    namespace Emac1Rse{    ///<Receive Symbol Errors Register
        using Addr = Register::Address<0xf8030074,0xffffff00,0,unsigned>;
        ///Receive Symbol Errors
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rse{}; 
        namespace RseValC{
        }
    }
    namespace Emac1Ele{    ///<Excessive Length Errors Register
        using Addr = Register::Address<0xf8030078,0xffffff00,0,unsigned>;
        ///Excessive Length Errors
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> exl{}; 
        namespace ExlValC{
        }
    }
    namespace Emac1Rja{    ///<Receive Jabbers Register
        using Addr = Register::Address<0xf803007c,0xffffff00,0,unsigned>;
        ///Receive Jabbers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rjb{}; 
        namespace RjbValC{
        }
    }
    namespace Emac1Usf{    ///<Undersize Frames Register
        using Addr = Register::Address<0xf8030080,0xffffff00,0,unsigned>;
        ///Undersize frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> usf{}; 
        namespace UsfValC{
        }
    }
    namespace Emac1Ste{    ///<SQE Test Errors Register
        using Addr = Register::Address<0xf8030084,0xffffff00,0,unsigned>;
        ///SQE test errors
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sqer{}; 
        namespace SqerValC{
        }
    }
    namespace Emac1Rle{    ///<Received Length Field Mismatch Register
        using Addr = Register::Address<0xf8030088,0xffffff00,0,unsigned>;
        ///Receive Length Field Mismatch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rlfm{}; 
        namespace RlfmValC{
        }
    }
    namespace Emac1Hrb{    ///<Hash Register Bottom [31:0] Register
        using Addr = Register::Address<0xf8030090,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace Emac1Hrt{    ///<Hash Register Top [63:32] Register
        using Addr = Register::Address<0xf8030094,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace Emac1Sa1b{    ///<Specific Address 1 Bottom Register
        using Addr = Register::Address<0xf8030098,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace Emac1Sa1t{    ///<Specific Address 1 Top Register
        using Addr = Register::Address<0xf803009c,0xffff0000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace Emac1Sa2b{    ///<Specific Address 2 Bottom Register
        using Addr = Register::Address<0xf80300a0,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace Emac1Sa2t{    ///<Specific Address 2 Top Register
        using Addr = Register::Address<0xf80300a4,0xffff0000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace Emac1Sa3b{    ///<Specific Address 3 Bottom Register
        using Addr = Register::Address<0xf80300a8,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace Emac1Sa3t{    ///<Specific Address 3 Top Register
        using Addr = Register::Address<0xf80300ac,0xffff0000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace Emac1Sa4b{    ///<Specific Address 4 Bottom Register
        using Addr = Register::Address<0xf80300b0,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace Emac1Sa4t{    ///<Specific Address 4 Top Register
        using Addr = Register::Address<0xf80300b4,0xffff0000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace Emac1Tid{    ///<Type ID Checking Register
        using Addr = Register::Address<0xf80300b8,0xffff0000,0,unsigned>;
        ///Type ID checking
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tid{}; 
        namespace TidValC{
        }
    }
    namespace Emac1Usrio{    ///<User Input/Output Register
        using Addr = Register::Address<0xf80300c0,0xfffffffc,0,unsigned>;
        ///Reduce MII
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rmii{}; 
        namespace RmiiValC{
        }
        ///Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clken{}; 
        namespace ClkenValC{
        }
    }
}