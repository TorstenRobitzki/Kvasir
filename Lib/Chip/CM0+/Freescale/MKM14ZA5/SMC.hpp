#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Mode Controller
    namespace SmcPmprot{    ///<Power Mode Protection register
        using Addr = Register::Address<0x4007e000,0xffffffdd,0,unsigned char>;
        ///Allow Very-Low-Leakage Stop Mode
        enum class AvllsVal {
            v0=0x00000000,     ///<Any VLLSx mode is not allowed
            v1=0x00000001,     ///<Any VLLSx mode is allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,AvllsVal> avlls{}; 
        namespace AvllsValC{
            constexpr Register::FieldValue<decltype(avlls),AvllsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(avlls),AvllsVal::v1> v1{};
        }
        ///Allow Very-Low-Power Modes
        enum class AvlpVal {
            v0=0x00000000,     ///<VLPR, VLPW, and VLPS are not allowed.
            v1=0x00000001,     ///<VLPR, VLPW, and VLPS are allowed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,AvlpVal> avlp{}; 
        namespace AvlpValC{
            constexpr Register::FieldValue<decltype(avlp),AvlpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(avlp),AvlpVal::v1> v1{};
        }
    }
    namespace SmcPmctrl{    ///<Power Mode Control register
        using Addr = Register::Address<0x4007e001,0xffffff90,0,unsigned char>;
        ///Stop Mode Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> stopm{}; 
        namespace StopmValC{
        }
        ///Stop Aborted
        enum class StopaVal {
            v0=0x00000000,     ///<The previous stop mode entry was successsful.
            v1=0x00000001,     ///<The previous stop mode entry was aborted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,StopaVal> stopa{}; 
        namespace StopaValC{
            constexpr Register::FieldValue<decltype(stopa),StopaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stopa),StopaVal::v1> v1{};
        }
        ///Run Mode Control
        enum class RunmVal {
            v00=0x00000000,     ///<Normal Run mode (RUN)
            v10=0x00000002,     ///<Very-Low-Power Run mode (VLPR)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,RunmVal> runm{}; 
        namespace RunmValC{
            constexpr Register::FieldValue<decltype(runm),RunmVal::v00> v00{};
            constexpr Register::FieldValue<decltype(runm),RunmVal::v10> v10{};
        }
    }
    namespace SmcStopctrl{    ///<Stop Control Register
        using Addr = Register::Address<0x4007e002,0xffffff18,0,unsigned char>;
        ///VLLS Mode Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> vllsm{}; 
        namespace VllsmValC{
        }
        ///POR Power Option
        enum class PorpoVal {
            v0=0x00000000,     ///<POR detect circuit is enabled in VLLS0
            v1=0x00000001,     ///<POR detect circuit is disabled in VLLS0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,PorpoVal> porpo{}; 
        namespace PorpoValC{
            constexpr Register::FieldValue<decltype(porpo),PorpoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(porpo),PorpoVal::v1> v1{};
        }
        ///Partial Stop Option
        enum class PstopoVal {
            v00=0x00000000,     ///<STOP - Normal Stop mode
            v01=0x00000001,     ///<PSTOP1 - Partial Stop with both system and bus clocks disabled
            v10=0x00000002,     ///<PSTOP2 - Partial Stop with system clock disabled and bus clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,PstopoVal> pstopo{}; 
        namespace PstopoValC{
            constexpr Register::FieldValue<decltype(pstopo),PstopoVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pstopo),PstopoVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pstopo),PstopoVal::v10> v10{};
        }
    }
    namespace SmcPmstat{    ///<Power Mode Status register
        using Addr = Register::Address<0x4007e003,0xffffff80,0,unsigned char>;
        ///Power Mode Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> pmstat{}; 
        namespace PmstatValC{
        }
    }
}