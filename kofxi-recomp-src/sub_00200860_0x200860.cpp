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

// Function: sub_00200860
// Address: 0x200860 - 0x200938
void sub_00200860_0x200860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200860_0x200860");
#endif

    switch (ctx->pc) {
        case 0x200928u: goto label_200928;
        default: break;
    }

    ctx->pc = 0x200860u;

    // 0x200860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x200864: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x200864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x200868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20086c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x20086cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x200870: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x200870u;
    {
        const bool branch_taken_0x200870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x200874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200870u;
        // 0x200874: 0x28620062  slti        $v0, $v1, 0x62 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)98) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x200870) {
            ctx->pc = 0x200928u;
            goto label_200928;
        }
    }
    ctx->pc = 0x200878u;
    // 0x200878: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x200878u;
    {
        const bool branch_taken_0x200878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200878u;
        // 0x20087c: 0x24020101  addiu       $v0, $zero, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200878) {
            ctx->pc = 0x2008C8u;
            goto label_2008c8;
        }
    }
    ctx->pc = 0x200880u;
    // 0x200880: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x200880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x200884: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x200884u;
    {
        const bool branch_taken_0x200884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x200888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200884u;
        // 0x200888: 0x28620032  slti        $v0, $v1, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x200884) {
            ctx->pc = 0x200928u;
            goto label_200928;
        }
    }
    ctx->pc = 0x20088Cu;
    // 0x20088c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20088Cu;
    {
        const bool branch_taken_0x20088c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20088Cu;
        // 0x200890: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20088c) {
            ctx->pc = 0x2008B0u;
            goto label_2008b0;
        }
    }
    ctx->pc = 0x200894u;
    // 0x200894: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x200894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x200898: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x200898u;
    {
        const bool branch_taken_0x200898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200898u;
        // 0x20089c: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200898) {
            ctx->pc = 0x200928u;
            goto label_200928;
        }
    }
    ctx->pc = 0x2008A0u;
    // 0x2008a0: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2008A0u;
    {
        const bool branch_taken_0x2008a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2008A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008A0u;
        // 0x2008a4: 0x3c06003f  lui         $a2, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008a0) {
            ctx->pc = 0x200910u;
            goto label_200910;
        }
    }
    ctx->pc = 0x2008A8u;
    // 0x2008a8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2008A8u;
    {
        const bool branch_taken_0x2008a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2008ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008A8u;
        // 0x2008ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008a8) {
            ctx->pc = 0x20091Cu;
            goto label_20091c;
        }
    }
    ctx->pc = 0x2008B0u;
label_2008b0:
    // 0x2008b0: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2008B0u;
    {
        const bool branch_taken_0x2008b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2008B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008B0u;
        // 0x2008b4: 0x24020051  addiu       $v0, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008b0) {
            ctx->pc = 0x200928u;
            goto label_200928;
        }
    }
    ctx->pc = 0x2008B8u;
    // 0x2008b8: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2008B8u;
    {
        const bool branch_taken_0x2008b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2008BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008B8u;
        // 0x2008bc: 0x3c06003f  lui         $a2, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008b8) {
            ctx->pc = 0x200928u;
            goto label_200928;
        }
    }
    ctx->pc = 0x2008C0u;
    // 0x2008c0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2008C0u;
    {
        const bool branch_taken_0x2008c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2008C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008C0u;
        // 0x2008c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008c0) {
            ctx->pc = 0x20091Cu;
            goto label_20091c;
        }
    }
    ctx->pc = 0x2008C8u;
label_2008c8:
    // 0x2008c8: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2008C8u;
    {
        const bool branch_taken_0x2008c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2008CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008C8u;
        // 0x2008cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008c8) {
            ctx->pc = 0x20092Cu;
            goto label_20092c;
        }
    }
    ctx->pc = 0x2008D0u;
    // 0x2008d0: 0x28620102  slti        $v0, $v1, 0x102
    ctx->pc = 0x2008d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)258) ? 1 : 0);
    // 0x2008d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2008D4u;
    {
        const bool branch_taken_0x2008d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2008D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008D4u;
        // 0x2008d8: 0x24020111  addiu       $v0, $zero, 0x111 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008d4) {
            ctx->pc = 0x2008F8u;
            goto label_2008f8;
        }
    }
    ctx->pc = 0x2008DCu;
    // 0x2008dc: 0x24020071  addiu       $v0, $zero, 0x71
    ctx->pc = 0x2008dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x2008e0: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2008E0u;
    {
        const bool branch_taken_0x2008e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2008E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008E0u;
        // 0x2008e4: 0x240200f1  addiu       $v0, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008e0) {
            ctx->pc = 0x200928u;
            goto label_200928;
        }
    }
    ctx->pc = 0x2008E8u;
    // 0x2008e8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2008E8u;
    {
        const bool branch_taken_0x2008e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2008ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008E8u;
        // 0x2008ec: 0x3c06003f  lui         $a2, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008e8) {
            ctx->pc = 0x200928u;
            goto label_200928;
        }
    }
    ctx->pc = 0x2008F0u;
    // 0x2008f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2008F0u;
    {
        const bool branch_taken_0x2008f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2008F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008F0u;
        // 0x2008f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008f0) {
            ctx->pc = 0x20091Cu;
            goto label_20091c;
        }
    }
    ctx->pc = 0x2008F8u;
label_2008f8:
    // 0x2008f8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2008F8u;
    {
        const bool branch_taken_0x2008f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2008FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008F8u;
        // 0x2008fc: 0x24021001  addiu       $v0, $zero, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008f8) {
            ctx->pc = 0x200928u;
            goto label_200928;
        }
    }
    ctx->pc = 0x200900u;
    // 0x200900: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x200900u;
    {
        const bool branch_taken_0x200900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x200904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200900u;
        // 0x200904: 0x3c06003f  lui         $a2, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200900) {
            ctx->pc = 0x200918u;
            goto label_200918;
        }
    }
    ctx->pc = 0x200908u;
    // 0x200908: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x200908u;
    {
        const bool branch_taken_0x200908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200908u;
        // 0x20090c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200908) {
            ctx->pc = 0x20092Cu;
            goto label_20092c;
        }
    }
    ctx->pc = 0x200910u;
label_200910:
    // 0x200910: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x200910u;
    {
        const bool branch_taken_0x200910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200910u;
        // 0x200914: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200910) {
            ctx->pc = 0x20092Cu;
            goto label_20092c;
        }
    }
    ctx->pc = 0x200918u;
label_200918:
    // 0x200918: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x200918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20091c:
    // 0x20091c: 0x24c6ee90  addiu       $a2, $a2, -0x1170
    ctx->pc = 0x20091cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962832));
    // 0x200920: 0xc08063e  jal         func_2018F8
    ctx->pc = 0x200920u;
    SET_GPR_U32(ctx, 31, 0x200928u);
    ctx->pc = 0x200924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200920u;
    // 0x200924: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2018F8u, 0x200920u, 0x200928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200928u;
label_200928:
    // 0x200928: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x200928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20092c:
    // 0x20092c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20092cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200930: 0x3e00008  jr          $ra
    ctx->pc = 0x200930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200930u;
        // 0x200934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200938u;
}
