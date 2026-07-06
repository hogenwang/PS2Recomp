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

// Function: sub_0022A488
// Address: 0x22a488 - 0x22a518
void sub_0022A488_0x22a488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A488_0x22a488");
#endif

    switch (ctx->pc) {
        case 0x22a4acu: goto label_22a4ac;
        case 0x22a4b8u: goto label_22a4b8;
        case 0x22a4c4u: goto label_22a4c4;
        case 0x22a4f4u: goto label_22a4f4;
        default: break;
    }

    ctx->pc = 0x22a488u;

    // 0x22a488: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22a488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22a48c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22a48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22a490: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22a490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22a494: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22a494u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a498: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22a498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22a49c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22a49cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a4a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22a4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22a4a4: 0xc08c682  jal         func_231A08
    ctx->pc = 0x22A4A4u;
    SET_GPR_U32(ctx, 31, 0x22A4ACu);
    ctx->pc = 0x22A4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A4A4u;
    // 0x22a4a8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22A4A4u, 0x22A4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A4ACu;
label_22a4ac:
    // 0x22a4ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22a4acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a4b0: 0xc098552  jal         func_261548
    ctx->pc = 0x22A4B0u;
    SET_GPR_U32(ctx, 31, 0x22A4B8u);
    ctx->pc = 0x22A4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A4B0u;
    // 0x22a4b4: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x22A4B0u, 0x22A4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A4B8u;
label_22a4b8:
    // 0x22a4b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22a4b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a4bc: 0xc08c698  jal         func_231A60
    ctx->pc = 0x22A4BCu;
    SET_GPR_U32(ctx, 31, 0x22A4C4u);
    ctx->pc = 0x22A4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A4BCu;
    // 0x22a4c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22A4BCu, 0x22A4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A4C4u;
label_22a4c4:
    // 0x22a4c4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22A4C4u;
    {
        const bool branch_taken_0x22a4c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4C4u;
        // 0x22a4c8: 0x26220014  addiu       $v0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a4c4) {
            ctx->pc = 0x22A4E8u;
            goto label_22a4e8;
        }
    }
    ctx->pc = 0x22A4CCu;
    // 0x22a4cc: 0xa6320010  sh          $s2, 0x10($s1)
    ctx->pc = 0x22a4ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 18));
    // 0x22a4d0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x22a4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x22a4d4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x22a4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x22a4d8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x22a4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x22a4dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22A4DCu;
    {
        const bool branch_taken_0x22a4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4DCu;
        // 0x22a4e0: 0xa6200012  sh          $zero, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a4dc) {
            ctx->pc = 0x22A4F8u;
            goto label_22a4f8;
        }
    }
    ctx->pc = 0x22A4E4u;
    // 0x22a4e4: 0x0  nop
    ctx->pc = 0x22a4e4u;
    // NOP
label_22a4e8:
    // 0x22a4e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22a4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a4ec: 0xc08a8ae  jal         func_22A2B8
    ctx->pc = 0x22A4ECu;
    SET_GPR_U32(ctx, 31, 0x22A4F4u);
    ctx->pc = 0x22A4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A4ECu;
    // 0x22a4f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A2B8u, 0x22A4ECu, 0x22A4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A4F4u;
label_22a4f4:
    // 0x22a4f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22a4f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22a4f8:
    // 0x22a4f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22a4f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a4fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22a4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a500: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22a500u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a504: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22a504u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a508: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22a508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a50c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a50cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a510: 0x3e00008  jr          $ra
    ctx->pc = 0x22A510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A510u;
        // 0x22a514: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A518u;
}
