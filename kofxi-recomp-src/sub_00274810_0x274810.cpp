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

// Function: sub_00274810
// Address: 0x274810 - 0x274910
void sub_00274810_0x274810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274810_0x274810");
#endif

    switch (ctx->pc) {
        case 0x27484cu: goto label_27484c;
        case 0x2748fcu: goto label_2748fc;
        default: break;
    }

    ctx->pc = 0x274810u;

    // 0x274810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x274810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x274814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x274814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x274818: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x274818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27481c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x27481cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x274820: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x274820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x274824: 0x2463486c  addiu       $v1, $v1, 0x486C
    ctx->pc = 0x274824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18540));
    // 0x274828: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x274828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27482c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27482Cu;
    {
        const bool branch_taken_0x27482c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27482c) {
            ctx->pc = 0x27484Cu;
            goto label_27484c;
        }
    }
    ctx->pc = 0x274834u;
    // 0x274834: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x274834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x274838: 0x24844880  addiu       $a0, $a0, 0x4880
    ctx->pc = 0x274838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18560));
    // 0x27483c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x27483cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x274840: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x274840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x274844: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x274844u;
    SET_GPR_U32(ctx, 31, 0x27484Cu);
    ctx->pc = 0x274848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274844u;
    // 0x274848: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x274844u, 0x27484Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27484Cu;
label_27484c:
    // 0x27484c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27484Cu;
    {
        const bool branch_taken_0x27484c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27484c) {
            ctx->pc = 0x274880u;
            goto label_274880;
        }
    }
    ctx->pc = 0x274854u;
    // 0x274854: 0xfd728e7a  sd          $s2, -0x7186($t3)
    ctx->pc = 0x274854u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 4294938234), GPR_U64(ctx, 18));
    // 0x274858: 0x252d2670  addiu       $t5, $t1, 0x2670
    ctx->pc = 0x274858u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 9840));
    // 0x27485c: 0x8ed4901d  lw          $s4, -0x6FE3($s6)
    ctx->pc = 0x27485cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294938653)));
    // 0x274860: 0xffa29ce2  sd          $v0, -0x631E($sp)
    ctx->pc = 0x274860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4294941922), GPR_U64(ctx, 2));
    // 0x274864: 0xddfccacf  ld          $gp, -0x3531($t7)
    ctx->pc = 0x274864u;
    SET_GPR_U64(ctx, 28, READ64(ADD32(GPR_U32(ctx, 15), 4294953679)));
    // 0x274868: 0x567020  add         $t6, $v0, $s6
    ctx->pc = 0x274868u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
    // 0x27486c: 0x0  nop
    ctx->pc = 0x27486cu;
    // NOP
    // 0x274870: 0x30f91156  andi        $t9, $a3, 0x1156
    ctx->pc = 0x274870u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4438);
    // 0x274874: 0x971e25f0  lhu         $fp, 0x25F0($t8)
    ctx->pc = 0x274874u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 9712)));
    // 0x274878: 0x30f9117a  andi        $t9, $a3, 0x117A
    ctx->pc = 0x274878u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4474);
    // 0x27487c: 0x0  nop
    ctx->pc = 0x27487cu;
    // NOP
label_274880:
    // 0x274880: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x274880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x274884: 0x244632bc  addiu       $a2, $v0, 0x32BC
    ctx->pc = 0x274884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12988));
    // 0x274888: 0x69ea4c15  ldl         $t2, 0x4C15($t7)
    ctx->pc = 0x274888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 19477); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x27488c: 0xc9ef4915  lwc2        $15, 0x4915($t7)
    ctx->pc = 0x27488cu;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x27488C raw=0xC9EF4915");
    // 0x274890: 0xe94d4d0d  swc2        $13, 0x4D0D($t2)
    ctx->pc = 0x274890u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x274890 raw=0xE94D4D0D");
    // 0x274894: 0xe94b4d55  swc2        $11, 0x4D55($t2)
    ctx->pc = 0x274894u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x274894 raw=0xE94B4D55");
    // 0x274898: 0xdb8f491d  lqc2        $vf15, 0x491D($gp)
    ctx->pc = 0x274898u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 28), 18717)));
    // 0x27489c: 0xed4f4981  .word       0xED4F4981                   # INVALID     $t2, $t7, 0x4981 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27489cu;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x27489C raw=0xED4F4981");
    // 0x2748a0: 0xccaf4d81  pref        0x0F, 0x4D81($a1)
    ctx->pc = 0x2748a0u;
    // PREF instruction (ignored)
    // 0x2748a4: 0x8bf0b69d  lwl         $s0, -0x4963($ra)
    ctx->pc = 0x2748a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 4294948509); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x2748a8: 0xdd8f4905  ld          $t7, 0x4905($t4)
    ctx->pc = 0x2748a8u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 12), 18693)));
    // 0x2748ac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2748ACu;
    {
        const bool branch_taken_0x2748ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2748ac) {
            ctx->pc = 0x2748DCu;
            goto label_2748dc;
        }
    }
    ctx->pc = 0x2748B4u;
    // 0x2748b4: 0x27142d40  addiu       $s4, $t8, 0x2D40
    ctx->pc = 0x2748b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 24), 11584));
    // 0x2748b8: 0x16ed020  add         $k0, $t3, $t6
    ctx->pc = 0x2748b8u;
    {     int32_t rs_val = GPR_S32(ctx, 11);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
    // 0x2748bc: 0xfdd01022  sd          $s0, 0x1022($t6)
    ctx->pc = 0x2748bcu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 4130), GPR_U64(ctx, 16));
    // 0x2748c0: 0xffd7933a  sd          $s7, -0x6CC6($fp)
    ctx->pc = 0x2748c0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 4294939450), GPR_U64(ctx, 23));
    // 0x2748c4: 0xdcad58d7  ld          $t5, 0x58D7($a1)
    ctx->pc = 0x2748c4u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 5), 22743)));
    // 0x2748c8: 0x268bb938  addiu       $t3, $s4, -0x46C8
    ctx->pc = 0x2748c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949176));
    // 0x2748cc: 0x30f91651  andi        $t9, $a3, 0x1651
    ctx->pc = 0x2748ccu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)5713);
    // 0x2748d0: 0x971e25f1  lhu         $fp, 0x25F1($t8)
    ctx->pc = 0x2748d0u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 9713)));
    // 0x2748d4: 0x30f9167d  andi        $t9, $a3, 0x167D
    ctx->pc = 0x2748d4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)5757);
    // 0x2748d8: 0x0  nop
    ctx->pc = 0x2748d8u;
    // NOP
label_2748dc:
    // 0x2748dc: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x2748dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x2748e0: 0x244248cc  addiu       $v0, $v0, 0x48CC
    ctx->pc = 0x2748e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18636));
    // 0x2748e4: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x2748e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x2748e8: 0x248448ac  addiu       $a0, $a0, 0x48AC
    ctx->pc = 0x2748e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18604));
    // 0x2748ec: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2748ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2748f0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2748f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2748f4: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x2748F4u;
    SET_GPR_U32(ctx, 31, 0x2748FCu);
    ctx->pc = 0x2748F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2748F4u;
    // 0x2748f8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x2748F4u, 0x2748FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2748FCu;
label_2748fc:
    // 0x2748fc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2748fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x274900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x274900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274904: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x274904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x274908: 0x3e00008  jr          $ra
    ctx->pc = 0x274908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274908u;
        // 0x27490c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274910u;
}
