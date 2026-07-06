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

// Function: sub_001BD888
// Address: 0x1bd888 - 0x1bd988
void sub_001BD888_0x1bd888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD888_0x1bd888");
#endif

    switch (ctx->pc) {
        case 0x1bd8d0u: goto label_1bd8d0;
        case 0x1bd8e8u: goto label_1bd8e8;
        case 0x1bd900u: goto label_1bd900;
        case 0x1bd918u: goto label_1bd918;
        case 0x1bd930u: goto label_1bd930;
        case 0x1bd938u: goto label_1bd938;
        case 0x1bd964u: goto label_1bd964;
        case 0x1bd96cu: goto label_1bd96c;
        case 0x1bd974u: goto label_1bd974;
        default: break;
    }

    ctx->pc = 0x1bd888u;

    // 0x1bd888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bd888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bd88c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bd88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bd890: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bd890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd894: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BD894u;
    {
        const bool branch_taken_0x1bd894 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD894u;
        // 0x1bd898: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd894) {
            ctx->pc = 0x1BD8B8u;
            goto label_1bd8b8;
        }
    }
    ctx->pc = 0x1BD89Cu;
    // 0x1bd89c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bd89cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1bd8a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bd8a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd8a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bd8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bd8a8: 0x24848988  addiu       $a0, $a0, -0x7678
    ctx->pc = 0x1bd8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936968));
    // 0x1bd8ac: 0x806ba0a  j           func_1AE828
    ctx->pc = 0x1BD8ACu;
    ctx->pc = 0x1BD8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD8ACu;
    // 0x1bd8b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    ctx->pc = 0x1BD8B4u;
    // 0x1bd8b4: 0x0  nop
    ctx->pc = 0x1bd8b4u;
    // NOP
label_1bd8b8:
    // 0x1bd8b8: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x1bd8b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1bd8bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bd8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bd8c0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD8C0u;
    {
        const bool branch_taken_0x1bd8c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BD8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD8C0u;
        // 0x1bd8c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd8c0) {
            ctx->pc = 0x1BD8D8u;
            goto label_1bd8d8;
        }
    }
    ctx->pc = 0x1BD8C8u;
    // 0x1bd8c8: 0xc06f43c  jal         func_1BD0F0
    ctx->pc = 0x1BD8C8u;
    SET_GPR_U32(ctx, 31, 0x1BD8D0u);
    ctx->pc = 0x1BD0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD0F0u, 0x1BD8C8u, 0x1BD8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD8D0u;
label_1bd8d0:
    // 0x1bd8d0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1BD8D0u;
    {
        const bool branch_taken_0x1bd8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd8d0) {
            ctx->pc = 0x1BD930u;
            goto label_1bd930;
        }
    }
    ctx->pc = 0x1BD8D8u;
label_1bd8d8:
    // 0x1bd8d8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD8D8u;
    {
        const bool branch_taken_0x1bd8d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BD8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD8D8u;
        // 0x1bd8dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd8d8) {
            ctx->pc = 0x1BD8F0u;
            goto label_1bd8f0;
        }
    }
    ctx->pc = 0x1BD8E0u;
    // 0x1bd8e0: 0xc06f2d2  jal         func_1BCB48
    ctx->pc = 0x1BD8E0u;
    SET_GPR_U32(ctx, 31, 0x1BD8E8u);
    ctx->pc = 0x1BCB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCB48u, 0x1BD8E0u, 0x1BD8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD8E8u;
label_1bd8e8:
    // 0x1bd8e8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1BD8E8u;
    {
        const bool branch_taken_0x1bd8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd8e8) {
            ctx->pc = 0x1BD930u;
            goto label_1bd930;
        }
    }
    ctx->pc = 0x1BD8F0u;
label_1bd8f0:
    // 0x1bd8f0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD8F0u;
    {
        const bool branch_taken_0x1bd8f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BD8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD8F0u;
        // 0x1bd8f4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd8f0) {
            ctx->pc = 0x1BD908u;
            goto label_1bd908;
        }
    }
    ctx->pc = 0x1BD8F8u;
    // 0x1bd8f8: 0xc06f3dc  jal         func_1BCF70
    ctx->pc = 0x1BD8F8u;
    SET_GPR_U32(ctx, 31, 0x1BD900u);
    ctx->pc = 0x1BCF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCF70u, 0x1BD8F8u, 0x1BD900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD900u;
label_1bd900:
    // 0x1bd900: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BD900u;
    {
        const bool branch_taken_0x1bd900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd900) {
            ctx->pc = 0x1BD930u;
            goto label_1bd930;
        }
    }
    ctx->pc = 0x1BD908u;
label_1bd908:
    // 0x1bd908: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD908u;
    {
        const bool branch_taken_0x1bd908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BD90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD908u;
        // 0x1bd90c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd908) {
            ctx->pc = 0x1BD920u;
            goto label_1bd920;
        }
    }
    ctx->pc = 0x1BD910u;
    // 0x1bd910: 0xc06f47c  jal         func_1BD1F0
    ctx->pc = 0x1BD910u;
    SET_GPR_U32(ctx, 31, 0x1BD918u);
    ctx->pc = 0x1BD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD1F0u, 0x1BD910u, 0x1BD918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD918u;
label_1bd918:
    // 0x1bd918: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD918u;
    {
        const bool branch_taken_0x1bd918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd918) {
            ctx->pc = 0x1BD930u;
            goto label_1bd930;
        }
    }
    ctx->pc = 0x1BD920u;
label_1bd920:
    // 0x1bd920: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD920u;
    {
        const bool branch_taken_0x1bd920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bd920) {
            ctx->pc = 0x1BD930u;
            goto label_1bd930;
        }
    }
    ctx->pc = 0x1BD928u;
    // 0x1bd928: 0xc06f4fe  jal         func_1BD3F8
    ctx->pc = 0x1BD928u;
    SET_GPR_U32(ctx, 31, 0x1BD930u);
    ctx->pc = 0x1BD3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD3F8u, 0x1BD928u, 0x1BD930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD930u;
label_1bd930:
    // 0x1bd930: 0xc06f5f0  jal         func_1BD7C0
    ctx->pc = 0x1BD930u;
    SET_GPR_U32(ctx, 31, 0x1BD938u);
    ctx->pc = 0x1BD934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD930u;
    // 0x1bd934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD7C0u, 0x1BD930u, 0x1BD938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD938u;
label_1bd938:
    // 0x1bd938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bd938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd93c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bd93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bd940: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bd940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd944: 0x806f5d0  j           func_1BD740
    ctx->pc = 0x1BD944u;
    ctx->pc = 0x1BD948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD944u;
    // 0x1bd948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD740u, 0x1BD944u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1BD94Cu;
    // 0x1bd94c: 0x0  nop
    ctx->pc = 0x1bd94cu;
    // NOP
    // 0x1bd950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bd950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bd954: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bd954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bd958: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bd958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bd95c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BD95Cu;
    SET_GPR_U32(ctx, 31, 0x1BD964u);
    ctx->pc = 0x1BD960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD95Cu;
    // 0x1bd960: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BD95Cu, 0x1BD964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD964u;
label_1bd964:
    // 0x1bd964: 0xc06f662  jal         func_1BD988
    ctx->pc = 0x1BD964u;
    SET_GPR_U32(ctx, 31, 0x1BD96Cu);
    ctx->pc = 0x1BD968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD964u;
    // 0x1bd968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD988u, 0x1BD964u, 0x1BD96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD96Cu;
label_1bd96c:
    // 0x1bd96c: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1BD96Cu;
    SET_GPR_U32(ctx, 31, 0x1BD974u);
    ctx->pc = 0x1BD970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD96Cu;
    // 0x1bd970: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD270u, 0x1BD96Cu, 0x1BD974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD974u;
label_1bd974:
    // 0x1bd974: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bd974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bd978: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bd978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd97c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bd97cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd980: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD980u;
        // 0x1bd984: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD988u;
}
