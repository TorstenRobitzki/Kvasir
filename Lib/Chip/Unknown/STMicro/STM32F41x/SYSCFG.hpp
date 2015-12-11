#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System configuration controller
    namespace Nonememrm{    ///<memory remap register
        using Addr = Register::Address<0x40013800,0xfffffffc,0,unsigned>;
        ///MEM_MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> memMode{}; 
        namespace MemmodeValC{
        }
    }
    namespace Nonepmc{    ///<peripheral mode configuration
          register
        using Addr = Register::Address<0x40013804,0xff7fffff,0,unsigned>;
        ///Ethernet PHY interface
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> miiRmiiSel{}; 
        namespace MiirmiiselValC{
        }
    }
    namespace Noneexticr1{    ///<external interrupt configuration register
          1
        using Addr = Register::Address<0x40013808,0xffff0000,0,unsigned>;
        ///EXTI x configuration (x = 0 to
              3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti3{}; 
        namespace Exti3ValC{
        }
        ///EXTI x configuration (x = 0 to
              3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti2{}; 
        namespace Exti2ValC{
        }
        ///EXTI x configuration (x = 0 to
              3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti1{}; 
        namespace Exti1ValC{
        }
        ///EXTI x configuration (x = 0 to
              3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti0{}; 
        namespace Exti0ValC{
        }
    }
    namespace Noneexticr2{    ///<external interrupt configuration register
          2
        using Addr = Register::Address<0x4001380c,0xffff0000,0,unsigned>;
        ///EXTI x configuration (x = 4 to
              7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti7{}; 
        namespace Exti7ValC{
        }
        ///EXTI x configuration (x = 4 to
              7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti6{}; 
        namespace Exti6ValC{
        }
        ///EXTI x configuration (x = 4 to
              7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti5{}; 
        namespace Exti5ValC{
        }
        ///EXTI x configuration (x = 4 to
              7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti4{}; 
        namespace Exti4ValC{
        }
    }
    namespace Noneexticr3{    ///<external interrupt configuration register
          3
        using Addr = Register::Address<0x40013810,0xffff0000,0,unsigned>;
        ///EXTI x configuration (x = 8 to
              11)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti11{}; 
        namespace Exti11ValC{
        }
        ///EXTI10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti10{}; 
        namespace Exti10ValC{
        }
        ///EXTI x configuration (x = 8 to
              11)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti9{}; 
        namespace Exti9ValC{
        }
        ///EXTI x configuration (x = 8 to
              11)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti8{}; 
        namespace Exti8ValC{
        }
    }
    namespace Noneexticr4{    ///<external interrupt configuration register
          4
        using Addr = Register::Address<0x40013814,0xffff0000,0,unsigned>;
        ///EXTI x configuration (x = 12 to
              15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti15{}; 
        namespace Exti15ValC{
        }
        ///EXTI x configuration (x = 12 to
              15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti14{}; 
        namespace Exti14ValC{
        }
        ///EXTI x configuration (x = 12 to
              15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti13{}; 
        namespace Exti13ValC{
        }
        ///EXTI x configuration (x = 12 to
              15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti12{}; 
        namespace Exti12ValC{
        }
    }
    namespace Nonecmpcr{    ///<Compensation cell control
          register
        using Addr = Register::Address<0x40013820,0xfffffefe,0,unsigned>;
        ///READY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ready{}; 
        namespace ReadyValC{
        }
        ///Compensation cell
              power-down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmpPd{}; 
        namespace CmppdValC{
        }
    }
}