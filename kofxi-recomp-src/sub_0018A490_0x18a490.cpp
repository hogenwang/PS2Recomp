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

// Function: sub_0018A490
// Address: 0x18a490 - 0x18a520
void sub_0018A490_0x18a490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A490_0x18a490");
#endif

    switch (ctx->pc) {
        case 0x18a4a0u: goto label_18a4a0;
        case 0x18a4acu: goto label_18a4ac;
        default: break;
    }

    ctx->pc = 0x18a490u;

    // 0x18a490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18a490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18a494: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18a494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18a498: 0xc062870  jal         func_18A1C0
    ctx->pc = 0x18A498u;
    SET_GPR_U32(ctx, 31, 0x18A4A0u);
    ctx->pc = 0x18A49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A498u;
    // 0x18a49c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A1C0u, 0x18A498u, 0x18A4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A4A0u;
label_18a4a0:
    // 0x18a4a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18a4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18a4a4: 0xc0628bc  jal         func_18A2F0
    ctx->pc = 0x18A4A4u;
    SET_GPR_U32(ctx, 31, 0x18A4ACu);
    ctx->pc = 0x18A4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A4A4u;
    // 0x18a4a8: 0x30500003  andi        $s0, $v0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A2F0u, 0x18A4A4u, 0x18A4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A4ACu;
label_18a4ac:
    // 0x18a4ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18a4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18a4b0: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x18a4b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x18a4b4: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A4B4u;
    {
        const bool branch_taken_0x18a4b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a4b4) {
            ctx->pc = 0x18A4B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A4B4u;
            // 0x18a4b8: 0x320300ff  andi        $v1, $s0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A4C4u;
            goto label_18a4c4;
        }
    }
    ctx->pc = 0x18A4BCu;
    // 0x18a4bc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x18A4BCu;
    {
        const bool branch_taken_0x18a4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A4BCu;
        // 0x18a4c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a4bc) {
            ctx->pc = 0x18A510u;
            goto label_18a510;
        }
    }
    ctx->pc = 0x18A4C4u;
label_18a4c4:
    // 0x18a4c4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x18a4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x18a4c8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x18A4C8u;
    {
        const bool branch_taken_0x18a4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a4c8) {
            ctx->pc = 0x18A4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A4C8u;
            // 0x18a4cc: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A4ECu;
            goto label_18a4ec;
        }
    }
    ctx->pc = 0x18A4D0u;
    // 0x18a4d0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x18a4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18a4d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18a4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18a4d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A4D8u;
    {
        const bool branch_taken_0x18a4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a4d8) {
            ctx->pc = 0x18A4E8u;
            goto label_18a4e8;
        }
    }
    ctx->pc = 0x18A4E0u;
    // 0x18a4e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x18A4E0u;
    {
        const bool branch_taken_0x18a4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A4E0u;
        // 0x18a4e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a4e0) {
            ctx->pc = 0x18A510u;
            goto label_18a510;
        }
    }
    ctx->pc = 0x18A4E8u;
label_18a4e8:
    // 0x18a4e8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x18a4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_18a4ec:
    // 0x18a4ec: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x18A4ECu;
    {
        const bool branch_taken_0x18a4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a4ec) {
            ctx->pc = 0x18A4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A4ECu;
            // 0x18a4f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A510u;
            goto label_18a510;
        }
    }
    ctx->pc = 0x18A4F4u;
    // 0x18a4f4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x18a4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18a4f8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18a4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18a4fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A4FCu;
    {
        const bool branch_taken_0x18a4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a4fc) {
            ctx->pc = 0x18A50Cu;
            goto label_18a50c;
        }
    }
    ctx->pc = 0x18A504u;
    // 0x18a504: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18A504u;
    {
        const bool branch_taken_0x18a504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A504u;
        // 0x18a508: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a504) {
            ctx->pc = 0x18A510u;
            goto label_18a510;
        }
    }
    ctx->pc = 0x18A50Cu;
label_18a50c:
    // 0x18a50c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18a50cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a510:
    // 0x18a510: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18a510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a514: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a518: 0x3e00008  jr          $ra
    ctx->pc = 0x18A518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A518u;
        // 0x18a51c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A520u;
}
