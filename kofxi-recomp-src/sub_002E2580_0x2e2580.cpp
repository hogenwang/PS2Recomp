#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E2580
// Address: 0x2e2580 - 0x2e2960
void sub_002E2580_0x2e2580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2580_0x2e2580");
#endif

    switch (ctx->pc) {
        case 0x2e25ecu: goto label_2e25ec;
        case 0x2e2608u: goto label_2e2608;
        case 0x2e2634u: goto label_2e2634;
        case 0x2e265cu: goto label_2e265c;
        case 0x2e2684u: goto label_2e2684;
        case 0x2e26e0u: goto label_2e26e0;
        case 0x2e2710u: goto label_2e2710;
        case 0x2e2750u: goto label_2e2750;
        case 0x2e27d0u: goto label_2e27d0;
        case 0x2e2848u: goto label_2e2848;
        case 0x2e28e4u: goto label_2e28e4;
        case 0x2e28fcu: goto label_2e28fc;
        default: break;
    }

    ctx->pc = 0x2e2580u;

    // 0x2e2580: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x2e2580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x2e2584: 0xffb00140  sd          $s0, 0x140($sp)
    ctx->pc = 0x2e2584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 16));
    // 0x2e2588: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e2588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e258c: 0xffb20150  sd          $s2, 0x150($sp)
    ctx->pc = 0x2e258cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 18));
    // 0x2e2590: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e2590u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2594: 0xffb30158  sd          $s3, 0x158($sp)
    ctx->pc = 0x2e2594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 19));
    // 0x2e2598: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2e2598u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e259c: 0xffb50168  sd          $s5, 0x168($sp)
    ctx->pc = 0x2e259cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 21));
    // 0x2e25a0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2e25a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e25a4: 0xffb10148  sd          $s1, 0x148($sp)
    ctx->pc = 0x2e25a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 17));
    // 0x2e25a8: 0xffb40160  sd          $s4, 0x160($sp)
    ctx->pc = 0x2e25a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 20));
    // 0x2e25ac: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x2e25acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
    // 0x2e25b0: 0xffbf0178  sd          $ra, 0x178($sp)
    ctx->pc = 0x2e25b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 31));
    // 0x2e25b4: 0xe7b60190  swc1        $f22, 0x190($sp)
    ctx->pc = 0x2e25b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x2e25b8: 0xe7b50188  swc1        $f21, 0x188($sp)
    ctx->pc = 0x2e25b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x2e25bc: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x2e25bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x2e25c0: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2e25c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2e25c4: 0x2463260c  addiu       $v1, $v1, 0x260C
    ctx->pc = 0x2e25c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9740));
    // 0x2e25c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e25c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e25cc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E25CCu;
    {
        const bool branch_taken_0x2e25cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e25cc) {
            ctx->pc = 0x2E25ECu;
            goto label_2e25ec;
        }
    }
    ctx->pc = 0x2E25D4u;
    // 0x2e25d4: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e25d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e25d8: 0x24842620  addiu       $a0, $a0, 0x2620
    ctx->pc = 0x2e25d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    // 0x2e25dc: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2e25dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e25e0: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2e25e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2e25e4: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E25E4u;
    SET_GPR_U32(ctx, 31, 0x2E25ECu);
    ctx->pc = 0x2E25E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E25E4u;
    // 0x2e25e8: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2E25E4u, 0x2E25ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E25ECu;
label_2e25ec:
    // 0x2e25ec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E25ECu;
    {
        const bool branch_taken_0x2e25ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e25ec) {
            ctx->pc = 0x2E2620u;
            goto label_2e2620;
        }
    }
    ctx->pc = 0x2E25F4u;
    // 0x2e25f4: 0xdd099e8f  ld          $t1, -0x6171($t0)
    ctx->pc = 0x2e25f4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 8), 4294942351)));
    // 0x2e25f8: 0x85f28ea3  lh          $s2, -0x715D($t7)
    ctx->pc = 0x2e25f8u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 4294938275)));
    // 0x2e25fc: 0x8c7fe645  lw          $ra, -0x19BB($v1)
    ctx->pc = 0x2e25fcu;
    SET_GPR_S32(ctx, 31, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960709)));
    // 0x2e2600: 0xcbc6141  jal         func_2F18504
    ctx->pc = 0x2E2600u;
    SET_GPR_U32(ctx, 31, 0x2E2608u);
    ctx->pc = 0x2E2604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2600u;
    // 0x2e2604: 0x8e6d0db5  lw          $t5, 0xDB5($s3) (Delay Slot)
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3509)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F18504u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F18504u, 0x2E2600u, 0x2E2608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2608u;
label_2e2608:
    // 0x2e2608: 0x878d3f6b  lh          $t5, 0x3F6B($gp)
    ctx->pc = 0x2e2608u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 16235)));
    // 0x2e260c: 0x0  nop
    ctx->pc = 0x2e260cu;
    // NOP
    // 0x2e2610: 0x2dcc63f9  sltiu       $t4, $t6, 0x63F9
    ctx->pc = 0x2e2610u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)25593) ? 1 : 0);
    // 0x2e2614: 0xca15fae4  lwc2        $21, -0x51C($s0)
    ctx->pc = 0x2e2614u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E2614 raw=0xCA15FAE4");
    // 0x2e2618: 0x2dcc618d  sltiu       $t4, $t6, 0x618D
    ctx->pc = 0x2e2618u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)24973) ? 1 : 0);
    // 0x2e261c: 0x0  nop
    ctx->pc = 0x2e261cu;
    // NOP
label_2e2620:
    // 0x2e2620: 0x3c1101c9  lui         $s1, 0x1C9
    ctx->pc = 0x2e2620u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)457 << 16));
    // 0x2e2624: 0x26274da8  addiu       $a3, $s1, 0x4DA8
    ctx->pc = 0x2e2624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 19880));
    // 0x2e2628: 0xa5a9c074  sh          $t1, -0x3F8C($t5)
    ctx->pc = 0x2e2628u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 4294951028), (uint16_t)GPR_U32(ctx, 9));
    // 0x2e262c: 0x3f491a32  .word       0x3F491A32                   # lui         $t1, 0x1A32 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e262cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)6706 << 16));
    // 0x2e2630: 0xe2a961f4  sc          $t1, 0x61F4($s5)
    ctx->pc = 0x2e2630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 25076); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 9)); SET_GPR_S32(ctx, 9, 1); } else { SET_GPR_S32(ctx, 9, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
label_2e2634:
    // 0x2e2634: 0xa4b561f4  sh          $s5, 0x61F4($a1)
    ctx->pc = 0x2e2634u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 25076), (uint16_t)GPR_U32(ctx, 21));
    // 0x2e2638: 0xa0a1a5c6  sb          $at, -0x5A3A($a1)
    ctx->pc = 0x2e2638u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294944198), (uint8_t)GPR_U32(ctx, 1));
    // 0x2e263c: 0x20bd65f0  addi        $sp, $a1, 0x65F0
    ctx->pc = 0x2e263cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)26096, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
    // 0x2e2640: 0xa2b16094  sb          $s1, 0x6094($s5)
    ctx->pc = 0x2e2640u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 24724), (uint8_t)GPR_U32(ctx, 17));
    // 0x2e2644: 0xbf41da96  cache       0x01, -0x256A($k0)
    ctx->pc = 0x2e2644u;
    // CACHE instruction (ignored)
    // 0x2e2648: 0xa0b9a5c0  sb          $t9, -0x5A40($a1)
    ctx->pc = 0x2e2648u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294944192), (uint8_t)GPR_U32(ctx, 25));
    // 0x2e264c: 0x40bf55d0  .word       0x40BF55D0                   # dmtc0       $ra, EntryHi # 000005D0 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2e264cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x2E264C raw=0x40BF55D0");
    // 0x2e2650: 0x3f4b1a30  .word       0x3F4B1A30                   # lui         $t3, 0x1A30 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e2650u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)6704 << 16));
    // 0x2e2654: 0xc0b87c6  jal         func_2E1F18
    ctx->pc = 0x2E2654u;
    SET_GPR_U32(ctx, 31, 0x2E265Cu);
    ctx->pc = 0x2E2658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2654u;
    // 0x2e2658: 0xe4b9c074  swc1        $f25, -0x3F8C($a1) (Delay Slot)
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294951028), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1F18u, 0x2E2654u, 0x2E265Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E265Cu;
label_2e265c:
    // 0x2e265c: 0x20a1c014  addi        $at, $a1, -0x3FEC
    ctx->pc = 0x2e265cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)4294950932, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
    // 0x2e2660: 0x3c0401ca  lui         $a0, 0x1CA
    ctx->pc = 0x2e2660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)458 << 16));
    // 0x2e2664: 0x20a975d0  addi        $t1, $a1, 0x75D0
    ctx->pc = 0x2e2664u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)30160, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x2e2668: 0x248449a8  addiu       $a0, $a0, 0x49A8
    ctx->pc = 0x2e2668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18856));
    // 0x2e266c: 0xe6b9c074  swc1        $f25, -0x3F8C($s5)
    ctx->pc = 0x2e266cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4294951028), bits); }
    // 0x2e2670: 0x20a93190  addi        $t1, $a1, 0x3190
    ctx->pc = 0x2e2670u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)12688, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x2e2674: 0xc8bdc074  lwc2        $29, -0x3F8C($a1)
    ctx->pc = 0x2e2674u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E2674 raw=0xC8BDC074");
    // 0x2e2678: 0x20a8f5d0  addi        $t0, $a1, -0xA30
    ctx->pc = 0x2e2678u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)4294964688, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x2e267c: 0xc0b851a  jal         func_2E1468
    ctx->pc = 0x2E267Cu;
    SET_GPR_U32(ctx, 31, 0x2E2684u);
    ctx->pc = 0x2E2680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E267Cu;
    // 0x2e2680: 0x409c83d0  .word       0x409C83D0                   # mtc0        $gp, Config # 000003D0 <InstrIdType: R5900_COP0> (Delay Slot)
    ctx->cop0_config = (ctx->cop0_config & ~0x7) | (GPR_U32(ctx, 28) & 0x7);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1468u, 0x2E267Cu, 0x2E2684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2684u;
label_2e2684:
    // 0x2e2684: 0x20a1c154  addi        $at, $a1, -0x3EAC
    ctx->pc = 0x2e2684u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)4294951252, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
    // 0x2e2688: 0x409da3c5  .word       0x409DA3C5                   # mtc0        $sp, XContext # 000003C5 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2e2688u;
    // Unimplemented MTC0 to COP0 20
    // 0x2e268c: 0x20a98bd0  addi        $t1, $a1, -0x7430
    ctx->pc = 0x2e268cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)4294937552, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x2e2690: 0x20a581f6  addi        $a1, $a1, -0x7E0A
    ctx->pc = 0x2e2690u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)4294935030, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x2e2694: 0x26274da8  addiu       $a3, $s1, 0x4DA8
    ctx->pc = 0x2e2694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 19880));
    // 0x2e2698: 0x40bd01d0  .word       0x40BD01D0                   # dmtc0       $sp, Index # 000001D0 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2e2698u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x2E2698 raw=0x40BD01D0");
    // 0x2e269c: 0xa5a9c074  sh          $t1, -0x3F8C($t5)
    ctx->pc = 0x2e269cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 4294951028), (uint16_t)GPR_U32(ctx, 9));
    // 0x2e26a0: 0xa2b161f4  sb          $s1, 0x61F4($s5)
    ctx->pc = 0x2e26a0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 25076), (uint8_t)GPR_U32(ctx, 17));
    // 0x2e26a4: 0xa4b561f4  sh          $s5, 0x61F4($a1)
    ctx->pc = 0x2e26a4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 25076), (uint16_t)GPR_U32(ctx, 21));
    // 0x2e26a8: 0xa0a1a5c6  sb          $at, -0x5A3A($a1)
    ctx->pc = 0x2e26a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294944198), (uint8_t)GPR_U32(ctx, 1));
    // 0x2e26ac: 0x20bd65f0  addi        $sp, $a1, 0x65F0
    ctx->pc = 0x2e26acu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)26096, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
    // 0x2e26b0: 0xa0bd8fd1  sb          $sp, -0x702F($a1)
    ctx->pc = 0x2e26b0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294938577), (uint8_t)GPR_U32(ctx, 29));
    // 0x2e26b4: 0x3f41da96  .word       0x3F41DA96                   # lui         $at, 0xDA96 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e26b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55958 << 16));
    // 0x2e26b8: 0xa0b9a5c0  sb          $t9, -0x5A40($a1)
    ctx->pc = 0x2e26b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294944192), (uint8_t)GPR_U32(ctx, 25));
    // 0x2e26bc: 0x26304da8  addiu       $s0, $s1, 0x4DA8
    ctx->pc = 0x2e26bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 19880));
    // 0x2e26c0: 0xc5bdc074  lwc1        $f29, -0x3F8C($t5)
    ctx->pc = 0x2e26c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4294951028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x2e26c4: 0xe4a9c074  swc1        $f9, -0x3F8C($a1)
    ctx->pc = 0x2e26c4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294951028), bits); }
    // 0x2e26c8: 0x40bd04d0  .word       0x40BD04D0                   # dmtc0       $sp, Index # 000004D0 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2e26c8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x2E26C8 raw=0x40BD04D0");
    // 0x2e26cc: 0x40bd27d0  .word       0x40BD27D0                   # dmtc0       $sp, Context # 000007D0 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2e26ccu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x2E26CC raw=0x40BD27D0");
    // 0x2e26d0: 0xe8a9c074  swc2        $9, -0x3F8C($a1)
    ctx->pc = 0x2e26d0u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x2E26D0 raw=0xE8A9C074");
    // 0x2e26d4: 0x40bce6d0  .word       0x40BCE6D0                   # dmtc0       $gp, TagLo # 000006D0 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2e26d4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x2E26D4 raw=0x40BCE6D0");
    // 0x2e26d8: 0xc0b826a  jal         func_2E09A8
    ctx->pc = 0x2E26D8u;
    SET_GPR_U32(ctx, 31, 0x2E26E0u);
    ctx->pc = 0x2E26DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E26D8u;
    // 0x2e26dc: 0x234895d0  addi        $t0, $k0, -0x6A30 (Delay Slot)
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 26), (int32_t)4294940112, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E09A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E09A8u, 0x2E26D8u, 0x2E26E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E26E0u;
label_2e26e0:
    // 0x2e26e0: 0x20a1c474  addi        $at, $a1, -0x3B8C
    ctx->pc = 0x2e26e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)4294952052, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
    // 0x2e26e4: 0x3f4b1a30  .word       0x3F4B1A30                   # lui         $t3, 0x1A30 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e26e4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)6704 << 16));
    // 0x2e26e8: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x2e26e8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x2e26ec: 0xe4a1c074  swc1        $f1, -0x3F8C($a1)
    ctx->pc = 0x2e26ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294951028), bits); }
    // 0x2e26f0: 0xe6a5c074  swc1        $f5, -0x3F8C($s5)
    ctx->pc = 0x2e26f0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4294951028), bits); }
    // 0x2e26f4: 0x3fa925d2  .word       0x3FA925D2                   # lui         $t1, 0x25D2 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e26f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)9682 << 16));
    // 0x2e26f8: 0xa7b7c1f4  sh          $s7, -0x3E0C($sp)
    ctx->pc = 0x2e26f8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4294951412), (uint16_t)GPR_U32(ctx, 23));
    // 0x2e26fc: 0xe9bdc074  swc2        $29, -0x3F8C($t5)
    ctx->pc = 0x2e26fcu;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x2E26FC raw=0xE9BDC074");
    // 0x2e2700: 0x254ae128  addiu       $t2, $t2, -0x1ED8
    ctx->pc = 0x2e2700u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294959400));
    // 0x2e2704: 0x202965d0  addi        $t1, $at, 0x65D0
    ctx->pc = 0x2e2704u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)26064, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x2e2708: 0xc0b8db4  jal         func_2E36D0
    ctx->pc = 0x2E2708u;
    SET_GPR_U32(ctx, 31, 0x2E2710u);
    ctx->pc = 0x2E270Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2708u;
    // 0x2e270c: 0x2028c5d0  addi        $t0, $at, -0x3A30 (Delay Slot)
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)4294952400, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E36D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E36D0u, 0x2E2708u, 0x2E2710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2710u;
label_2e2710:
    // 0x2e2710: 0xa0a185d1  sb          $at, -0x7A2F($a1)
    ctx->pc = 0x2e2710u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294936017), (uint8_t)GPR_U32(ctx, 1));
    // 0x2e2714: 0xb6a98494  sdr         $t1, -0x7B6C($s5)
    ctx->pc = 0x2e2714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 4294935700); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e2718: 0x2969fa33  slti        $t1, $t3, -0x5CD
    ctx->pc = 0x2e2718u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)4294965811) ? 1 : 0);
    // 0x2e271c: 0x3f4dfa32  .word       0x3F4DFA32                   # lui         $t5, 0xFA32 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e271cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)64050 << 16));
    // 0x2e2720: 0x36b9e5dc  ori         $t9, $s5, 0xE5DC
    ctx->pc = 0x2e2720u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)58844);
    // 0x2e2724: 0x26334da8  addiu       $s3, $s1, 0x4DA8
    ctx->pc = 0x2e2724u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 19880));
    // 0x2e2728: 0x28c9f5d3  slti        $t1, $a2, -0xA2D
    ctx->pc = 0x2e2728u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294964691) ? 1 : 0);
    // 0x2e272c: 0x35b9e5dc  ori         $t9, $t5, 0xE5DC
    ctx->pc = 0x2e272cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)58844);
    // 0x2e2730: 0xb0a9c074  sdl         $t1, -0x3F8C($a1)
    ctx->pc = 0x2e2730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294951028); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e2734: 0x2949e5d3  slti        $t1, $t2, -0x1A2D
    ctx->pc = 0x2e2734u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4294960595) ? 1 : 0);
    // 0x2e2738: 0x34b9e5dc  ori         $t9, $a1, 0xE5DC
    ctx->pc = 0x2e2738u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)58844);
    // 0x2e273c: 0x30ab85d3  andi        $t3, $a1, 0x85D3
    ctx->pc = 0x2e273cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)34259);
    // 0x2e2740: 0x3f4bfa32  .word       0x3F4BFA32                   # lui         $t3, 0xFA32 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e2740u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)64050 << 16));
    // 0x2e2744: 0xa0a9c5d4  sb          $t1, -0x3A2C($a1)
    ctx->pc = 0x2e2744u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952404), (uint8_t)GPR_U32(ctx, 9));
    // 0x2e2748: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2E2748u;
    SET_GPR_U32(ctx, 31, 0x2E2750u);
    ctx->pc = 0x2E274Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2748u;
    // 0x2e274c: 0xa0a9c5d4  sb          $t1, -0x3A2C($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952404), (uint8_t)GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2E2748u, 0x2E2750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2750u;
label_2e2750:
    // 0x2e2750: 0x20b985dc  addi        $t9, $a1, -0x7A24
    ctx->pc = 0x2e2750u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)4294936028, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
    // 0x2e2754: 0x60b9c1dc  daddi       $t9, $a1, -0x3E24
    ctx->pc = 0x2e2754u;
    { int64_t src = (int64_t)GPR_S64(ctx, 5); int64_t imm = (int64_t)(int32_t)4294951388; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, res); }
    // 0x2e2758: 0xe4a7c1f4  swc1        $f7, -0x3E0C($a1)
    ctx->pc = 0x2e2758u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294951412), bits); }
    // 0x2e275c: 0x60abc5f0  daddi       $t3, $a1, -0x3A10
    ctx->pc = 0x2e275cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 5); int64_t imm = (int64_t)(int32_t)4294952432; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, res); }
    // 0x2e2760: 0xa0a9c5d4  sb          $t1, -0x3A2C($a1)
    ctx->pc = 0x2e2760u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952404), (uint8_t)GPR_U32(ctx, 9));
    // 0x2e2764: 0xa0a9c5d4  sb          $t1, -0x3A2C($a1)
    ctx->pc = 0x2e2764u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952404), (uint8_t)GPR_U32(ctx, 9));
    // 0x2e2768: 0x60ab05bc  daddi       $t3, $a1, 0x5BC
    ctx->pc = 0x2e2768u;
    { int64_t src = (int64_t)GPR_S64(ctx, 5); int64_t imm = (int64_t)(int32_t)1468; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, res); }
    // 0x2e276c: 0x60ab659c  daddi       $t3, $a1, 0x659C
    ctx->pc = 0x2e276cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 5); int64_t imm = (int64_t)(int32_t)26012; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, res); }
    // 0x2e2770: 0x74a9c31c  .word       0x74A9C31C                   # INVALID     $a1, $t1, -0x3CE4 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e2770u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2E2770 raw=0x74A9C31C");
    // 0x2e2774: 0x60a9c95c  daddi       $t1, $a1, -0x36A4
    ctx->pc = 0x2e2774u;
    { int64_t src = (int64_t)GPR_S64(ctx, 5); int64_t imm = (int64_t)(int32_t)4294953308; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
    // 0x2e2778: 0x21a985dc  addi        $t1, $t5, -0x7A24
    ctx->pc = 0x2e2778u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 13), (int32_t)4294936028, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x2e277c: 0xa9c57c  .word       0x00A9C57C                   # dsll32      $t8, $t1, 21 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e277cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 9) << (32 + 21));
    // 0x2e2780: 0xe3afc094  sc          $t7, -0x3F6C($sp)
    ctx->pc = 0x2e2780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4294951060); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 15)); SET_GPR_S32(ctx, 15, 1); } else { SET_GPR_S32(ctx, 15, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e2784: 0x60ab45fc  daddi       $t3, $a1, 0x45FC
    ctx->pc = 0x2e2784u;
    { int64_t src = (int64_t)GPR_S64(ctx, 5); int64_t imm = (int64_t)(int32_t)17916; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, res); }
    // 0x2e2788: 0x60a9c95c  daddi       $t1, $a1, -0x36A4
    ctx->pc = 0x2e2788u;
    { int64_t src = (int64_t)GPR_S64(ctx, 5); int64_t imm = (int64_t)(int32_t)4294953308; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
    // 0x2e278c: 0x21a985dc  addi        $t1, $t5, -0x7A24
    ctx->pc = 0x2e278cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 13), (int32_t)4294936028, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x2e2790: 0xa2a38174  sb          $v1, -0x7E8C($s5)
    ctx->pc = 0x2e2790u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4294934900), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e2794: 0xbf45d856  cache       0x05, -0x27AA($k0)
    ctx->pc = 0x2e2794u;
    // CACHE instruction (ignored)
    // 0x2e2798: 0xa0b985c0  sb          $t9, -0x7A40($a1)
    ctx->pc = 0x2e2798u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294936000), (uint8_t)GPR_U32(ctx, 25));
    // 0x2e279c: 0x2969fa33  slti        $t1, $t3, -0x5CD
    ctx->pc = 0x2e279cu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)4294965811) ? 1 : 0);
    // 0x2e27a0: 0x3f4dfa32  .word       0x3F4DFA32                   # lui         $t5, 0xFA32 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e27a0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)64050 << 16));
    // 0x2e27a4: 0x36b9e5dc  ori         $t9, $s5, 0xE5DC
    ctx->pc = 0x2e27a4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)58844);
    // 0x2e27a8: 0xd2bdc074  lld         $sp, -0x3F8C($s5)
    ctx->pc = 0x2e27a8u;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x2E27A8 raw=0xD2BDC074");
    // 0x2e27ac: 0x28c9f5d3  slti        $t1, $a2, -0xA2D
    ctx->pc = 0x2e27acu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294964691) ? 1 : 0);
    // 0x2e27b0: 0x35b9e5dc  ori         $t9, $t5, 0xE5DC
    ctx->pc = 0x2e27b0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)58844);
    // 0x2e27b4: 0xb0a9c074  sdl         $t1, -0x3F8C($a1)
    ctx->pc = 0x2e27b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294951028); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e27b8: 0x2949e5d3  slti        $t1, $t2, -0x1A2D
    ctx->pc = 0x2e27b8u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4294960595) ? 1 : 0);
    // 0x2e27bc: 0x34b9e5dc  ori         $t9, $a1, 0xE5DC
    ctx->pc = 0x2e27bcu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)58844);
    // 0x2e27c0: 0x30abe5d3  andi        $t3, $a1, 0xE5D3
    ctx->pc = 0x2e27c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)58835);
    // 0x2e27c4: 0xa0a9c5d4  sb          $t1, -0x3A2C($a1)
    ctx->pc = 0x2e27c4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952404), (uint8_t)GPR_U32(ctx, 9));
    // 0x2e27c8: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2E27C8u;
    SET_GPR_U32(ctx, 31, 0x2E27D0u);
    ctx->pc = 0x2E27CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E27C8u;
    // 0x2e27cc: 0xa0a9c5d4  sb          $t1, -0x3A2C($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952404), (uint8_t)GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2E27C8u, 0x2E27D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E27D0u;
label_2e27d0:
    // 0x2e27d0: 0x20b985dc  addi        $t9, $a1, -0x7A24
    ctx->pc = 0x2e27d0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)4294936028, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
    // 0x2e27d4: 0x60b9c1dc  daddi       $t9, $a1, -0x3E24
    ctx->pc = 0x2e27d4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 5); int64_t imm = (int64_t)(int32_t)4294951388; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, res); }
    // 0x2e27d8: 0xe4a3c1f4  swc1        $f3, -0x3E0C($a1)
    ctx->pc = 0x2e27d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294951412), bits); }
    // 0x2e27dc: 0x60abc5f0  daddi       $t3, $a1, -0x3A10
    ctx->pc = 0x2e27dcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 5); int64_t imm = (int64_t)(int32_t)4294952432; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, res); }
    // 0x2e27e0: 0xa0a9c5d4  sb          $t1, -0x3A2C($a1)
    ctx->pc = 0x2e27e0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952404), (uint8_t)GPR_U32(ctx, 9));
    // 0x2e27e4: 0xa0a9c5d4  sb          $t1, -0x3A2C($a1)
    ctx->pc = 0x2e27e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952404), (uint8_t)GPR_U32(ctx, 9));
    // 0x2e27e8: 0x60ab05bc  daddi       $t3, $a1, 0x5BC
    ctx->pc = 0x2e27e8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 5); int64_t imm = (int64_t)(int32_t)1468; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, res); }
    // 0x2e27ec: 0x60ab659c  daddi       $t3, $a1, 0x659C
    ctx->pc = 0x2e27ecu;
    { int64_t src = (int64_t)GPR_S64(ctx, 5); int64_t imm = (int64_t)(int32_t)26012; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, res); }
    // 0x2e27f0: 0x74a9c31c  .word       0x74A9C31C                   # INVALID     $a1, $t1, -0x3CE4 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e27f0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2E27F0 raw=0x74A9C31C");
    // 0x2e27f4: 0x60a9c95c  daddi       $t1, $a1, -0x36A4
    ctx->pc = 0x2e27f4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 5); int64_t imm = (int64_t)(int32_t)4294953308; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
    // 0x2e27f8: 0x21a985dc  addi        $t1, $t5, -0x7A24
    ctx->pc = 0x2e27f8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 13), (int32_t)4294936028, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x2e27fc: 0xa9c57c  .word       0x00A9C57C                   # dsll32      $t8, $t1, 21 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e27fcu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 9) << (32 + 21));
    // 0x2e2800: 0xe0a9b5d1  sc          $t1, -0x4A2F($a1)
    ctx->pc = 0x2e2800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294948305); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 9)); SET_GPR_S32(ctx, 9, 1); } else { SET_GPR_S32(ctx, 9, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e2804: 0x60ab45fc  daddi       $t3, $a1, 0x45FC
    ctx->pc = 0x2e2804u;
    { int64_t src = (int64_t)GPR_S64(ctx, 5); int64_t imm = (int64_t)(int32_t)17916; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, res); }
    // 0x2e2808: 0x60a9c95c  daddi       $t1, $a1, -0x36A4
    ctx->pc = 0x2e2808u;
    { int64_t src = (int64_t)GPR_S64(ctx, 5); int64_t imm = (int64_t)(int32_t)4294953308; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
    // 0x2e280c: 0x21a985dc  addi        $t1, $t5, -0x7A24
    ctx->pc = 0x2e280cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 13), (int32_t)4294936028, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x2e2810: 0xa2a3e174  sb          $v1, -0x1E8C($s5)
    ctx->pc = 0x2e2810u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4294959476), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e2814: 0x3f45d856  .word       0x3F45D856                   # lui         $a1, 0xD856 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e2814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55382 << 16));
    // 0x2e2818: 0xa0b985c0  sb          $t9, -0x7A40($a1)
    ctx->pc = 0x2e2818u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294936000), (uint8_t)GPR_U32(ctx, 25));
    // 0x2e281c: 0x2969fa33  slti        $t1, $t3, -0x5CD
    ctx->pc = 0x2e281cu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)4294965811) ? 1 : 0);
    // 0x2e2820: 0x3f4dfa32  .word       0x3F4DFA32                   # lui         $t5, 0xFA32 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e2820u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)64050 << 16));
    // 0x2e2824: 0x36b9e5dc  ori         $t9, $s5, 0xE5DC
    ctx->pc = 0x2e2824u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)58844);
    // 0x2e2828: 0xb0a9c074  sdl         $t1, -0x3F8C($a1)
    ctx->pc = 0x2e2828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294951028); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e282c: 0x28c9f5d3  slti        $t1, $a2, -0xA2D
    ctx->pc = 0x2e282cu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294964691) ? 1 : 0);
    // 0x2e2830: 0x35b9e5dc  ori         $t9, $t5, 0xE5DC
    ctx->pc = 0x2e2830u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)58844);
    // 0x2e2834: 0x30abe5d3  andi        $t3, $a1, 0xE5D3
    ctx->pc = 0x2e2834u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)58835);
    // 0x2e2838: 0x2949e5d3  slti        $t1, $t2, -0x1A2D
    ctx->pc = 0x2e2838u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4294960595) ? 1 : 0);
    // 0x2e283c: 0x34b9e5dc  ori         $t9, $a1, 0xE5DC
    ctx->pc = 0x2e283cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)58844);
    // 0x2e2840: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2E2840u;
    SET_GPR_U32(ctx, 31, 0x2E2848u);
    ctx->pc = 0x2E2844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2840u;
    // 0x2e2844: 0xa0a9c5d4  sb          $t1, -0x3A2C($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952404), (uint8_t)GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2E2840u, 0x2E2848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2848u;
label_2e2848:
    // 0x2e2848: 0x20b985dc  addi        $t9, $a1, -0x7A24
    ctx->pc = 0x2e2848u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)4294936028, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
    // 0x2e284c: 0x60b9c1dc  daddi       $t9, $a1, -0x3E24
    ctx->pc = 0x2e284cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 5); int64_t imm = (int64_t)(int32_t)4294951388; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, res); }
    // 0x2e2850: 0xe4bbc1f4  swc1        $f27, -0x3E0C($a1)
    ctx->pc = 0x2e2850u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294951412), bits); }
    // 0x2e2854: 0x60abc5f0  daddi       $t3, $a1, -0x3A10
    ctx->pc = 0x2e2854u;
    { int64_t src = (int64_t)GPR_S64(ctx, 5); int64_t imm = (int64_t)(int32_t)4294952432; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, res); }
    // 0x2e2858: 0xa0a9c5d4  sb          $t1, -0x3A2C($a1)
    ctx->pc = 0x2e2858u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952404), (uint8_t)GPR_U32(ctx, 9));
    // 0x2e285c: 0xa0a9c5d4  sb          $t1, -0x3A2C($a1)
    ctx->pc = 0x2e285cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952404), (uint8_t)GPR_U32(ctx, 9));
    // 0x2e2860: 0x60ab05bc  daddi       $t3, $a1, 0x5BC
    ctx->pc = 0x2e2860u;
    { int64_t src = (int64_t)GPR_S64(ctx, 5); int64_t imm = (int64_t)(int32_t)1468; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, res); }
    // 0x2e2864: 0x60ab659c  daddi       $t3, $a1, 0x659C
    ctx->pc = 0x2e2864u;
    { int64_t src = (int64_t)GPR_S64(ctx, 5); int64_t imm = (int64_t)(int32_t)26012; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, res); }
    // 0x2e2868: 0x74a9c31c  .word       0x74A9C31C                   # INVALID     $a1, $t1, -0x3CE4 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e2868u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2E2868 raw=0x74A9C31C");
    // 0x2e286c: 0x60a9c95c  daddi       $t1, $a1, -0x36A4
    ctx->pc = 0x2e286cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 5); int64_t imm = (int64_t)(int32_t)4294953308; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
    // 0x2e2870: 0x21a985dc  addi        $t1, $t5, -0x7A24
    ctx->pc = 0x2e2870u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 13), (int32_t)4294936028, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x2e2874: 0xa9c57c  .word       0x00A9C57C                   # dsll32      $t8, $t1, 21 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e2874u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 9) << (32 + 21));
    // 0x2e2878: 0x60a9b191  daddi       $t1, $a1, -0x4E6F
    ctx->pc = 0x2e2878u;
    { int64_t src = (int64_t)GPR_S64(ctx, 5); int64_t imm = (int64_t)(int32_t)4294947217; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
    // 0x2e287c: 0x60ab45fc  daddi       $t3, $a1, 0x45FC
    ctx->pc = 0x2e287cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 5); int64_t imm = (int64_t)(int32_t)17916; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, res); }
    // 0x2e2880: 0x60a9c95c  daddi       $t1, $a1, -0x36A4
    ctx->pc = 0x2e2880u;
    { int64_t src = (int64_t)GPR_S64(ctx, 5); int64_t imm = (int64_t)(int32_t)4294953308; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
    // 0x2e2884: 0x21a985dc  addi        $t1, $t5, -0x7A24
    ctx->pc = 0x2e2884u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 13), (int32_t)4294936028, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x2e2888: 0xa2a3e174  sb          $v1, -0x1E8C($s5)
    ctx->pc = 0x2e2888u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4294959476), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e288c: 0x3f45d856  .word       0x3F45D856                   # lui         $a1, 0xD856 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e288cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55382 << 16));
    // 0x2e2890: 0xa0b985c0  sb          $t9, -0x7A40($a1)
    ctx->pc = 0x2e2890u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294936000), (uint8_t)GPR_U32(ctx, 25));
    // 0x2e2894: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E2894u;
    {
        const bool branch_taken_0x2e2894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2894) {
            ctx->pc = 0x2E28C4u;
            goto label_2e28c4;
        }
    }
    ctx->pc = 0x2E289Cu;
    // 0x2e289c: 0x865995fb  lh          $t9, -0x6A05($s2)
    ctx->pc = 0x2e289cu;
    SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294940155)));
    // 0x2e28a0: 0x276909e0  addiu       $t1, $k1, 0x9E0
    ctx->pc = 0x2e28a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 27), 2528));
    // 0x2e28a4: 0xdc8b6fc7  ld          $t3, 0x6FC7($a0)
    ctx->pc = 0x2e28a4u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 4), 28615)));
    // 0x2e28a8: 0x8fc76b4d  lw          $a3, 0x6B4D($fp)
    ctx->pc = 0x2e28a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 27469)));
    // 0x2e28ac: 0xa2d692c9  sb          $s6, -0x6D37($s6)
    ctx->pc = 0x2e28acu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 4294939337), (uint8_t)GPR_U32(ctx, 22));
    // 0x2e28b0: 0xfe725d82  sd          $s2, 0x5D82($s3)
    ctx->pc = 0x2e28b0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 23938), GPR_U64(ctx, 18));
    // 0x2e28b4: 0x2dcc639f  sltiu       $t4, $t6, 0x639F
    ctx->pc = 0x2e28b4u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)25503) ? 1 : 0);
    // 0x2e28b8: 0xca15fae5  lwc2        $21, -0x51B($s0)
    ctx->pc = 0x2e28b8u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E28B8 raw=0xCA15FAE5");
    // 0x2e28bc: 0x2dcc61eb  sltiu       $t4, $t6, 0x61EB
    ctx->pc = 0x2e28bcu;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)25067) ? 1 : 0);
    // 0x2e28c0: 0x0  nop
    ctx->pc = 0x2e28c0u;
    // NOP
label_2e28c4:
    // 0x2e28c4: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e28c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2e28c8: 0x244228b4  addiu       $v0, $v0, 0x28B4
    ctx->pc = 0x2e28c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10420));
    // 0x2e28cc: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e28ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e28d0: 0x24842894  addiu       $a0, $a0, 0x2894
    ctx->pc = 0x2e28d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10388));
    // 0x2e28d4: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2e28d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e28d8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2e28d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e28dc: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E28DCu;
    SET_GPR_U32(ctx, 31, 0x2E28E4u);
    ctx->pc = 0x2E28E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E28DCu;
    // 0x2e28e0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2E28DCu, 0x2E28E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E28E4u;
label_2e28e4:
    // 0x2e28e4: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2e28e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e28e8: 0xdfb00140  ld          $s0, 0x140($sp)
    ctx->pc = 0x2e28e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2e28ec: 0xdfb10148  ld          $s1, 0x148($sp)
    ctx->pc = 0x2e28ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2e28f0: 0xdfb20150  ld          $s2, 0x150($sp)
    ctx->pc = 0x2e28f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2e28f4: 0xdfb30158  ld          $s3, 0x158($sp)
    ctx->pc = 0x2e28f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2e28f8: 0xdfb40160  ld          $s4, 0x160($sp)
    ctx->pc = 0x2e28f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_2e28fc:
    // 0x2e28fc: 0xdfb50168  ld          $s5, 0x168($sp)
    ctx->pc = 0x2e28fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2e2900: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x2e2900u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2e2904: 0xdfbf0178  ld          $ra, 0x178($sp)
    ctx->pc = 0x2e2904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2e2908: 0xc7b60190  lwc1        $f22, 0x190($sp)
    ctx->pc = 0x2e2908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e290c: 0xc7b50188  lwc1        $f21, 0x188($sp)
    ctx->pc = 0x2e290cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e2910: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x2e2910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e2914: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2914u;
        // 0x2e2918: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E291Cu;
    // 0x2e291c: 0x0  nop
    ctx->pc = 0x2e291cu;
    // NOP
    // 0x2e2920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e2920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e2924: 0x3402f800  ori         $v0, $zero, 0xF800
    ctx->pc = 0x2e2924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
    // 0x2e2928: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2e2928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2e292c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e292cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e2930: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x2e2930u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x2e2934: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2e2934u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2938: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x2e2938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2e293c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e293cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2940: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2e2940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2944: 0x254ae128  addiu       $t2, $t2, -0x1ED8
    ctx->pc = 0x2e2944u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294959400));
    // 0x2e2948: 0x24080400  addiu       $t0, $zero, 0x400
    ctx->pc = 0x2e2948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2e294c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2e294cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2950: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2e2950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2954: 0x80b8db4  j           func_2E36D0
    ctx->pc = 0x2E2954u;
    ctx->pc = 0x2E2958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2954u;
    // 0x2e2958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E36D0u;
    sub_002E36D0_0x2e36d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2E295Cu;
    // 0x2e295c: 0x0  nop
    ctx->pc = 0x2e295cu;
    // NOP
}
