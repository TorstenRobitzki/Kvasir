#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash Memory
    namespace Nonefaszr{    ///<Flash Access Size Register
        using Addr = Register::Address<0x40000000,0xfffffffc,0,unsigned>;
        ///Flash Access Size 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> asz{}; 
        namespace AszValC{
        }
    }
    namespace Nonefrwtr{    ///<Flash Read Wait Register
        using Addr = Register::Address<0x40000004,0xfffffffc,0,unsigned>;
        ///Read Wait Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rwt{}; 
        namespace RwtValC{
        }
    }
    namespace Nonefstr{    ///<Flash Status Register
        using Addr = Register::Address<0x40000008,0xfffffff8,0,unsigned>;
        ///Flash ECC Error 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> err{}; 
        namespace ErrValC{
        }
        ///Flash Hang flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hng{}; 
        namespace HngValC{
        }
        ///Flash Rdy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdy{}; 
        namespace RdyValC{
        }
    }
    namespace Nonefsyndn{    ///<Flash Sync Down Register
        using Addr = Register::Address<0x40000010,0xfffffff8,0,unsigned>;
        ///Flash Sync
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> sd{}; 
        namespace SdValC{
        }
    }
    namespace Nonefbfcr{    ///<Flash Buffer Control Register
        using Addr = Register::Address<0x40000014,0xfffffffc,0,unsigned>;
        ///Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bs{}; 
        namespace BsValC{
        }
        ///Buffer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> be{}; 
        namespace BeValC{
        }
    }
    namespace Nonecrtrmm{    ///<CR Trimming Data Mirror Register
        using Addr = Register::Address<0x40000100,0xfffffc00,0,unsigned>;
        ///CR Trimming Data Mirror
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> trmm{}; 
        namespace TrmmValC{
        }
    }
}