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

// Function: sub_001F1660
// Address: 0x1f1660 - 0x1f1708
void sub_001F1660_0x1f1660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1660_0x1f1660");
#endif

    switch (ctx->pc) {
        case 0x1f16acu: goto label_1f16ac;
        case 0x1f16e0u: goto label_1f16e0;
        default: break;
    }

    ctx->pc = 0x1f1660u;

    // 0x1f1660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f1660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f1664: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1f1664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1f1668: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f1668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f166c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f166cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1670: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f1670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f1674: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f1674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f1678: 0x2442e5f8  addiu       $v0, $v0, -0x1A08
    ctx->pc = 0x1f1678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960632));
    // 0x1f167c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1f167cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f1680: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1f1680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1f1684: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1684u;
    {
        const bool branch_taken_0x1f1684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F1688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1684u;
        // 0x1f1688: 0x26110d88  addiu       $s1, $s0, 0xD88 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1684) {
            ctx->pc = 0x1F16A0u;
            goto label_1f16a0;
        }
    }
    ctx->pc = 0x1F168Cu;
    // 0x1f168c: 0x3402ac44  ori         $v0, $zero, 0xAC44
    ctx->pc = 0x1f168cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44100);
    // 0x1f1690: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f1690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f1694: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F1694u;
    {
        const bool branch_taken_0x1f1694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1694u;
        // 0x1f1698: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1694) {
            ctx->pc = 0x1F16C0u;
            goto label_1f16c0;
        }
    }
    ctx->pc = 0x1F169Cu;
    // 0x1f169c: 0x0  nop
    ctx->pc = 0x1f169cu;
    // NOP
label_1f16a0:
    // 0x1f16a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f16a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f16a4: 0xc07aea8  jal         func_1EBAA0
    ctx->pc = 0x1F16A4u;
    SET_GPR_U32(ctx, 31, 0x1F16ACu);
    ctx->pc = 0x1F16A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F16A4u;
    // 0x1f16a8: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBAA0u, 0x1F16A4u, 0x1F16ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F16ACu;
label_1f16ac:
    // 0x1f16ac: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F16ACu;
    {
        const bool branch_taken_0x1f16ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f16ac) {
            ctx->pc = 0x1F16B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F16ACu;
            // 0x1f16b0: 0x8e2201f0  lw          $v0, 0x1F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F16C4u;
            goto label_1f16c4;
        }
    }
    ctx->pc = 0x1F16B4u;
    // 0x1f16b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1F16B4u;
    {
        const bool branch_taken_0x1f16b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F16B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16B4u;
        // 0x1f16b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f16b4) {
            ctx->pc = 0x1F16F0u;
            goto label_1f16f0;
        }
    }
    ctx->pc = 0x1F16BCu;
    // 0x1f16bc: 0x0  nop
    ctx->pc = 0x1f16bcu;
    // NOP
label_1f16c0:
    // 0x1f16c0: 0x8e2201f0  lw          $v0, 0x1F0($s1)
    ctx->pc = 0x1f16c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
label_1f16c4:
    // 0x1f16c4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f16c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f16c8: 0x8e050dec  lw          $a1, 0xDEC($s0)
    ctx->pc = 0x1f16c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3564)));
    // 0x1f16cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f16ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f16d0: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1f16d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f16d4: 0xae2201f0  sw          $v0, 0x1F0($s1)
    ctx->pc = 0x1f16d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 2));
    // 0x1f16d8: 0xc0771c6  jal         func_1DC718
    ctx->pc = 0x1F16D8u;
    SET_GPR_U32(ctx, 31, 0x1F16E0u);
    ctx->pc = 0x1F16DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F16D8u;
    // 0x1f16dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC718u, 0x1F16D8u, 0x1F16E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F16E0u;
label_1f16e0:
    // 0x1f16e0: 0x8e230164  lw          $v1, 0x164($s1)
    ctx->pc = 0x1f16e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x1f16e4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f16e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f16e8: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x1f16e8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f16ec: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x1f16ecu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1f16f0:
    // 0x1f16f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f16f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f16f4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f16f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f16f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f16f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f16fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F16FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16FCu;
        // 0x1f1700: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F16FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1704u;
    // 0x1f1704: 0x0  nop
    ctx->pc = 0x1f1704u;
    // NOP
}
