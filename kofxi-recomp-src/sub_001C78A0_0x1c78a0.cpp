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

// Function: sub_001C78A0
// Address: 0x1c78a0 - 0x1c7a08
void sub_001C78A0_0x1c78a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C78A0_0x1c78a0");
#endif

    switch (ctx->pc) {
        case 0x1c78bcu: goto label_1c78bc;
        case 0x1c7918u: goto label_1c7918;
        case 0x1c7934u: goto label_1c7934;
        case 0x1c7948u: goto label_1c7948;
        case 0x1c79d8u: goto label_1c79d8;
        case 0x1c79e8u: goto label_1c79e8;
        default: break;
    }

    ctx->pc = 0x1c78a0u;

label_1c78a0:
    // 0x1c78a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c78a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c78a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1c78a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C78A8u;
    {
        const bool branch_taken_0x1c78a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C78ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78A8u;
        // 0x1c78ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78a8) {
            ctx->pc = 0x1C78C8u;
            goto label_1c78c8;
        }
    }
    ctx->pc = 0x1C78B0u;
    // 0x1c78b0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c78b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c78b4: 0xc071c44  jal         func_1C7110
    ctx->pc = 0x1C78B4u;
    SET_GPR_U32(ctx, 31, 0x1C78BCu);
    ctx->pc = 0x1C78B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78B4u;
    // 0x1c78b8: 0x24a5abd8  addiu       $a1, $a1, -0x5428 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7110u, 0x1C78B4u, 0x1C78BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78BCu;
label_1c78bc:
    // 0x1c78bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C78BCu;
    {
        const bool branch_taken_0x1c78bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C78C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78BCu;
        // 0x1c78c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78bc) {
            ctx->pc = 0x1C78CCu;
            goto label_1c78cc;
        }
    }
    ctx->pc = 0x1C78C4u;
    // 0x1c78c4: 0x0  nop
    ctx->pc = 0x1c78c4u;
    // NOP
label_1c78c8:
    // 0x1c78c8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1c78c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1c78cc:
    // 0x1c78cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c78ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c78d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C78D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C78D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78D0u;
        // 0x1c78d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C78D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C78D8u;
    // 0x1c78d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c78d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c78dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c78dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c78e0: 0x1c800005  bgtz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C78E0u;
    {
        const bool branch_taken_0x1c78e0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1C78E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78E0u;
        // 0x1c78e4: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78e0) {
            ctx->pc = 0x1C78F8u;
            goto label_1c78f8;
        }
    }
    ctx->pc = 0x1C78E8u;
    // 0x1c78e8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c78e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c78ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c78ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78f0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C78F0u;
    {
        const bool branch_taken_0x1c78f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C78F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78F0u;
        // 0x1c78f4: 0x24a5ac20  addiu       $a1, $a1, -0x53E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78f0) {
            ctx->pc = 0x1C792Cu;
            goto label_1c792c;
        }
    }
    ctx->pc = 0x1C78F8u;
label_1c78f8:
    // 0x1c78f8: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C78F8u;
    {
        const bool branch_taken_0x1c78f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C78FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78F8u;
        // 0x1c78fc: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78f8) {
            ctx->pc = 0x1C7910u;
            goto label_1c7910;
        }
    }
    ctx->pc = 0x1C7900u;
    // 0x1c7900: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c7900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7904: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C7904u;
    {
        const bool branch_taken_0x1c7904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7904u;
        // 0x1c7908: 0x24a5ac50  addiu       $a1, $a1, -0x53B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7904) {
            ctx->pc = 0x1C792Cu;
            goto label_1c792c;
        }
    }
    ctx->pc = 0x1C790Cu;
    // 0x1c790c: 0x0  nop
    ctx->pc = 0x1c790cu;
    // NOP
label_1c7910:
    // 0x1c7910: 0xc071cc4  jal         func_1C7310
    ctx->pc = 0x1C7910u;
    SET_GPR_U32(ctx, 31, 0x1C7918u);
    ctx->pc = 0x1C7310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7310u, 0x1C7910u, 0x1C7918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7918u;
label_1c7918:
    // 0x1c7918: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c7918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c791c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c791cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7920: 0x24a5ac78  addiu       $a1, $a1, -0x5388
    ctx->pc = 0x1c7920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945912));
    // 0x1c7924: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C7924u;
    {
        const bool branch_taken_0x1c7924 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7924u;
        // 0x1c7928: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7924) {
            ctx->pc = 0x1C7940u;
            goto label_1c7940;
        }
    }
    ctx->pc = 0x1C792Cu;
label_1c792c:
    // 0x1c792c: 0xc071c44  jal         func_1C7110
    ctx->pc = 0x1C792Cu;
    SET_GPR_U32(ctx, 31, 0x1C7934u);
    ctx->pc = 0x1C7110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7110u, 0x1C792Cu, 0x1C7934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7934u;
label_1c7934:
    // 0x1c7934: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7934u;
    {
        const bool branch_taken_0x1c7934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7934u;
        // 0x1c7938: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7934) {
            ctx->pc = 0x1C794Cu;
            goto label_1c794c;
        }
    }
    ctx->pc = 0x1C793Cu;
    // 0x1c793c: 0x0  nop
    ctx->pc = 0x1c793cu;
    // NOP
label_1c7940:
    // 0x1c7940: 0xc071ce2  jal         func_1C7388
    ctx->pc = 0x1C7940u;
    SET_GPR_U32(ctx, 31, 0x1C7948u);
    ctx->pc = 0x1C7944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7940u;
    // 0x1c7944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7388u, 0x1C7940u, 0x1C7948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7948u;
label_1c7948:
    // 0x1c7948: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c7948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c794c:
    // 0x1c794c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c794cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7950: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c7950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c7954: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7954u;
        // 0x1c7958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C795Cu;
    // 0x1c795c: 0x0  nop
    ctx->pc = 0x1c795cu;
    // NOP
    // 0x1c7960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7964: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c7964u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c796c: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C796Cu;
    {
        const bool branch_taken_0x1c796c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C796Cu;
        // 0x1c7970: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c796c) {
            ctx->pc = 0x1C79F8u;
            goto label_1c79f8;
        }
    }
    ctx->pc = 0x1C7974u;
    // 0x1c7974: 0x240200cb  addiu       $v0, $zero, 0xCB
    ctx->pc = 0x1c7974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
    // 0x1c7978: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C7978u;
    {
        const bool branch_taken_0x1c7978 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7978u;
        // 0x1c797c: 0x28a200cc  slti        $v0, $a1, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)204) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7978) {
            ctx->pc = 0x1C79E0u;
            goto label_1c79e0;
        }
    }
    ctx->pc = 0x1C7980u;
    // 0x1c7980: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C7980u;
    {
        const bool branch_taken_0x1c7980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7980u;
        // 0x1c7984: 0x240200cd  addiu       $v0, $zero, 0xCD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7980) {
            ctx->pc = 0x1C79A0u;
            goto label_1c79a0;
        }
    }
    ctx->pc = 0x1C7988u;
    // 0x1c7988: 0x240200c9  addiu       $v0, $zero, 0xC9
    ctx->pc = 0x1c7988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x1c798c: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C798Cu;
    {
        const bool branch_taken_0x1c798c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C798Cu;
        // 0x1c7990: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c798c) {
            ctx->pc = 0x1C79D0u;
            goto label_1c79d0;
        }
    }
    ctx->pc = 0x1C7994u;
    // 0x1c7994: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1C7994u;
    {
        const bool branch_taken_0x1c7994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7994u;
        // 0x1c7998: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7994) {
            ctx->pc = 0x1C79FCu;
            goto label_1c79fc;
        }
    }
    ctx->pc = 0x1C799Cu;
    // 0x1c799c: 0x0  nop
    ctx->pc = 0x1c799cu;
    // NOP
label_1c79a0:
    // 0x1c79a0: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C79A0u;
    {
        const bool branch_taken_0x1c79a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C79A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79A0u;
        // 0x1c79a4: 0x28a200cd  slti        $v0, $a1, 0xCD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)205) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c79a0) {
            ctx->pc = 0x1C79E0u;
            goto label_1c79e0;
        }
    }
    ctx->pc = 0x1C79A8u;
    // 0x1c79a8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C79A8u;
    {
        const bool branch_taken_0x1c79a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C79ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79A8u;
        // 0x1c79ac: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c79a8) {
            ctx->pc = 0x1C79F8u;
            goto label_1c79f8;
        }
    }
    ctx->pc = 0x1C79B0u;
    // 0x1c79b0: 0x2402012b  addiu       $v0, $zero, 0x12B
    ctx->pc = 0x1c79b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
    // 0x1c79b4: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C79B4u;
    {
        const bool branch_taken_0x1c79b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C79B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79B4u;
        // 0x1c79b8: 0x24020191  addiu       $v0, $zero, 0x191 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 401));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c79b4) {
            ctx->pc = 0x1C79F4u;
            goto label_1c79f4;
        }
    }
    ctx->pc = 0x1C79BCu;
    // 0x1c79bc: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C79BCu;
    {
        const bool branch_taken_0x1c79bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C79C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79BCu;
        // 0x1c79c0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c79bc) {
            ctx->pc = 0x1C79F0u;
            goto label_1c79f0;
        }
    }
    ctx->pc = 0x1C79C4u;
    // 0x1c79c4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C79C4u;
    {
        const bool branch_taken_0x1c79c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C79C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79C4u;
        // 0x1c79c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c79c4) {
            ctx->pc = 0x1C79FCu;
            goto label_1c79fc;
        }
    }
    ctx->pc = 0x1C79CCu;
    // 0x1c79cc: 0x0  nop
    ctx->pc = 0x1c79ccu;
    // NOP
label_1c79d0:
    // 0x1c79d0: 0xc071e28  jal         func_1C78A0
    ctx->pc = 0x1C79D0u;
    SET_GPR_U32(ctx, 31, 0x1C79D8u);
    ctx->pc = 0x1C78A0u;
    goto label_1c78a0;
    ctx->pc = 0x1C79D8u;
label_1c79d8:
    // 0x1c79d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C79D8u;
    {
        const bool branch_taken_0x1c79d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C79DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79D8u;
        // 0x1c79dc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c79d8) {
            ctx->pc = 0x1C79F4u;
            goto label_1c79f4;
        }
    }
    ctx->pc = 0x1C79E0u;
label_1c79e0:
    // 0x1c79e0: 0xc071cbc  jal         func_1C72F0
    ctx->pc = 0x1C79E0u;
    SET_GPR_U32(ctx, 31, 0x1C79E8u);
    ctx->pc = 0x1C72F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C72F0u, 0x1C79E0u, 0x1C79E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C79E8u;
label_1c79e8:
    // 0x1c79e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C79E8u;
    {
        const bool branch_taken_0x1c79e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C79ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79E8u;
        // 0x1c79ec: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c79e8) {
            ctx->pc = 0x1C79F4u;
            goto label_1c79f4;
        }
    }
    ctx->pc = 0x1C79F0u;
label_1c79f0:
    // 0x1c79f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c79f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c79f4:
    // 0x1c79f4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c79f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c79f8:
    // 0x1c79f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c79f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c79fc:
    // 0x1c79fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C79FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79FCu;
        // 0x1c7a00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C79FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7A04u;
    // 0x1c7a04: 0x0  nop
    ctx->pc = 0x1c7a04u;
    // NOP
}
