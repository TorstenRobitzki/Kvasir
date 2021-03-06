#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//CAN Controller (TXCAN) Mailbox RAM
    namespace Canmb7Id{    ///<CAN Mailbox Register
        using Addr = Register::Address<0x400050e0,0x00000000,0x00000000,unsigned>;
        ///ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> id{}; 
        ///RFH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> rfh{}; 
        ///GAME
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> game{}; 
        ///IDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ide{}; 
    }
    namespace Canmb7Tsvmcf{    ///<CAN Mailbox Register
        using Addr = Register::Address<0x400050e8,0x0000ffe0,0x00000000,unsigned>;
        ///DLC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dlc{}; 
        ///RTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rtr{}; 
        ///TSV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> tsv{}; 
    }
    namespace Canmb7Dl{    ///<CAN Mailbox Register
        using Addr = Register::Address<0x400050f0,0x00000000,0x00000000,unsigned>;
        ///D0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> d0{}; 
        ///D1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> d1{}; 
        ///D2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> d2{}; 
        ///D3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> d3{}; 
    }
    namespace Canmb7Dh{    ///<CAN Mailbox Register
        using Addr = Register::Address<0x400050f8,0x00000000,0x00000000,unsigned>;
        ///D4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> d4{}; 
        ///D5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> d5{}; 
        ///D6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> d6{}; 
        ///D7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> d7{}; 
    }
}
