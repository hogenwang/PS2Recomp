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

// Function: sub_00274700
// Address: 0x274700 - 0x274810
void sub_00274700_0x274700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274700_0x274700");
#endif

    switch (ctx->pc) {
        case 0x274748u: goto label_274748;
        case 0x27476cu: goto label_27476c;
        case 0x2747f4u: goto label_2747f4;
        default: break;
    }

    ctx->pc = 0x274700u;

    // 0x274700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x274700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x274704: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x274704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x274708: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x274708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27470c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27470cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274710: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x274710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x274714: 0x245131ac  addiu       $s1, $v0, 0x31AC
    ctx->pc = 0x274714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 12716));
    // 0x274718: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x274718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27471c: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x27471cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x274720: 0x24634768  addiu       $v1, $v1, 0x4768
    ctx->pc = 0x274720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18280));
    // 0x274724: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x274724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274728: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x274728u;
    {
        const bool branch_taken_0x274728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274728) {
            ctx->pc = 0x274748u;
            goto label_274748;
        }
    }
    ctx->pc = 0x274730u;
    // 0x274730: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x274730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x274734: 0x2484477c  addiu       $a0, $a0, 0x477C
    ctx->pc = 0x274734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18300));
    // 0x274738: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x274738u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27473c: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x27473cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x274740: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x274740u;
    SET_GPR_U32(ctx, 31, 0x274748u);
    ctx->pc = 0x274744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274740u;
    // 0x274744: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x274740u, 0x274748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274748u;
label_274748:
    // 0x274748: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x274748u;
    {
        const bool branch_taken_0x274748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274748) {
            ctx->pc = 0x27477Cu;
            goto label_27477c;
        }
    }
    ctx->pc = 0x274750u;
    // 0x274750: 0xff8b3d12  sd          $t3, 0x3D12($gp)
    ctx->pc = 0x274750u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 15634), GPR_U64(ctx, 11));
    // 0x274754: 0x25c30180  addiu       $v1, $t6, 0x180
    ctx->pc = 0x274754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 384));
    // 0x274758: 0x8ef7c5ed  lw          $s7, -0x3A13($s7)
    ctx->pc = 0x274758u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294952429)));
    // 0x27475c: 0x274ca1f0  addiu       $t4, $k0, -0x5E10
    ctx->pc = 0x27475cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 26), 4294943216));
    // 0x274760: 0x87de8113  lh          $fp, -0x7EED($fp)
    ctx->pc = 0x274760u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294934803)));
    // 0x274764: 0xcacc24e  jal         func_2B30938
    ctx->pc = 0x274764u;
    SET_GPR_U32(ctx, 31, 0x27476Cu);
    ctx->pc = 0x2B30938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B30938u, 0x274764u, 0x27476Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27476Cu;
label_27476c:
    // 0x27476c: 0x513cb5e0  beql        $t1, $gp, . + 4 + (-0x4A20 << 2)
    ctx->pc = 0x27476Cu;
    {
        const bool branch_taken_0x27476c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 28));
        if (branch_taken_0x27476c) {
            ctx->pc = 0x261EF0u;
            return;
        }
    }
    ctx->pc = 0x274774u;
    // 0x274774: 0x513cb5c8  beql        $t1, $gp, . + 4 + (-0x4A38 << 2)
    ctx->pc = 0x274774u;
    {
        const bool branch_taken_0x274774 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 28));
        if (branch_taken_0x274774) {
            ctx->pc = 0x261E98u;
            return;
        }
    }
    ctx->pc = 0x27477Cu;
label_27477c:
    // 0x27477c: 0xb037bc88  sdl         $s7, -0x4378($at)
    ctx->pc = 0x27477cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294950024); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x274780: 0x6aad5cce  ldl         $t5, 0x5CCE($s5)
    ctx->pc = 0x274780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 23758); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x274784: 0xb532bc28  sdr         $s2, -0x43D8($t1)
    ctx->pc = 0x274784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294949928); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x274788: 0x1170bc08  beq         $t3, $s0, . + 4 + (-0x43F8 << 2)
    ctx->pc = 0x274788u;
    {
        const bool branch_taken_0x274788 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 16));
        ctx->pc = 0x27478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274788u;
        // 0x27478c: 0x1176b808  beq         $t3, $s6, . + 4 + (-0x47F8 << 2) (Delay Slot)
        // Likely branch instruction at 0x27478C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x274788) {
            ctx->pc = 0x2637ACu;
            return;
        }
    }
    ctx->pc = 0x274790u;
    // 0x274790: 0xd532b43a  ldc1        $f18, -0x4BC6($t1)
    ctx->pc = 0x274790u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x274790 raw=0xD532B43A");
    // 0x274794: 0x15b2a80c  bne         $t5, $s2, . + 4 + (-0x57F4 << 2)
    ctx->pc = 0x274794u;
    {
        const bool branch_taken_0x274794 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 18));
        ctx->pc = 0x274798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274794u;
        // 0x274798: 0x1030a448  beq         $at, $s0, . + 4 + (-0x5BB8 << 2) (Delay Slot)
        // Likely branch instruction at 0x274798 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x274794) {
            ctx->pc = 0x25E7C8u;
            return;
        }
    }
    ctx->pc = 0x27479Cu;
    // 0x27479c: 0xaa2d546a  swl         $t5, 0x546A($s1)
    ctx->pc = 0x27479cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 21610); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2747a0: 0xd532ac3c  ldc1        $f18, -0x53C4($t1)
    ctx->pc = 0x2747a0u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x2747A0 raw=0xD532AC3C");
    // 0x2747a4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2747A4u;
    {
        const bool branch_taken_0x2747a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2747a4) {
            ctx->pc = 0x2747D4u;
            goto label_2747d4;
        }
    }
    ctx->pc = 0x2747ACu;
    // 0x2747ac: 0xdfc8cf1f  ld          $t0, -0x30E1($fp)
    ctx->pc = 0x2747acu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 30), 4294954783)));
    // 0x2747b0: 0x3c30820  add         $at, $fp, $v1
    ctx->pc = 0x2747b0u;
    {     int32_t rs_val = GPR_S32(ctx, 30);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
    // 0x2747b4: 0x257591e8  addiu       $s5, $t3, -0x6E18
    ctx->pc = 0x2747b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 11), 4294939112));
    // 0x2747b8: 0xdd85695f  ld          $a1, 0x695F($t4)
    ctx->pc = 0x2747b8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 12), 26975)));
    // 0x2747bc: 0xde024c1f  ld          $v0, 0x4C1F($s0)
    ctx->pc = 0x2747bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 19487)));
    // 0x2747c0: 0x85cf0f7b  lh          $t7, 0xF7B($t6)
    ctx->pc = 0x2747c0u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 3963)));
    // 0x2747c4: 0x5130e5bc  beql        $t1, $s0, . + 4 + (-0x1A44 << 2)
    ctx->pc = 0x2747C4u;
    {
        const bool branch_taken_0x2747c4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 16));
        if (branch_taken_0x2747c4) {
            ctx->pc = 0x2747C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2747C4u;
            // 0x2747c8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2747C8 raw=0x00000001");
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DEB8u;
            return;
        }
    }
    ctx->pc = 0x2747CCu;
    // 0x2747cc: 0x5130e594  beql        $t1, $s0, . + 4 + (-0x1A6C << 2)
    ctx->pc = 0x2747CCu;
    {
        const bool branch_taken_0x2747cc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 16));
        if (branch_taken_0x2747cc) {
            ctx->pc = 0x26DE20u;
            return;
        }
    }
    ctx->pc = 0x2747D4u;
label_2747d4:
    // 0x2747d4: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x2747d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x2747d8: 0x244247c4  addiu       $v0, $v0, 0x47C4
    ctx->pc = 0x2747d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18372));
    // 0x2747dc: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x2747dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x2747e0: 0x248447a4  addiu       $a0, $a0, 0x47A4
    ctx->pc = 0x2747e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18340));
    // 0x2747e4: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2747e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2747e8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2747e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2747ec: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x2747ECu;
    SET_GPR_U32(ctx, 31, 0x2747F4u);
    ctx->pc = 0x2747F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2747ECu;
    // 0x2747f0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x2747ECu, 0x2747F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2747F4u;
label_2747f4:
    // 0x2747f4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2747f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2747f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2747f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2747fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2747fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x274800: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x274800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274804: 0x3e00008  jr          $ra
    ctx->pc = 0x274804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274804u;
        // 0x274808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27480Cu;
    // 0x27480c: 0x0  nop
    ctx->pc = 0x27480cu;
    // NOP
    if (ctx->pc == 0x27480cu) { ctx->pc = 0x274810u; }
}
