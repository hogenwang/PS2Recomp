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

// Function: sub_001FC148
// Address: 0x1fc148 - 0x1fc1f8
void sub_001FC148_0x1fc148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC148_0x1fc148");
#endif

    switch (ctx->pc) {
        case 0x1fc1acu: goto label_1fc1ac;
        default: break;
    }

    ctx->pc = 0x1fc148u;

    // 0x1fc148: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x1fc148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1fc14c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1fc14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fc150: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FC150u;
    {
        const bool branch_taken_0x1fc150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fc150) {
            ctx->pc = 0x1FC190u;
            goto label_1fc190;
        }
    }
    ctx->pc = 0x1FC158u;
    // 0x1fc158: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1fc158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1fc15c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FC15Cu;
    {
        const bool branch_taken_0x1fc15c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fc15c) {
            ctx->pc = 0x1FC190u;
            goto label_1fc190;
        }
    }
    ctx->pc = 0x1FC164u;
    // 0x1fc164: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1fc164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1fc168: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FC168u;
    {
        const bool branch_taken_0x1fc168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fc168) {
            ctx->pc = 0x1FC190u;
            goto label_1fc190;
        }
    }
    ctx->pc = 0x1FC170u;
    // 0x1fc170: 0x2402fffa  addiu       $v0, $zero, -0x6
    ctx->pc = 0x1fc170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x1fc174: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC174u;
    {
        const bool branch_taken_0x1fc174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FC178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC174u;
        // 0x1fc178: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc174) {
            ctx->pc = 0x1FC190u;
            goto label_1fc190;
        }
    }
    ctx->pc = 0x1FC17Cu;
    // 0x1fc17c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fc17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc180: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1fc180u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1fc184: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fc184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc188: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC188u;
        // 0x1fc18c: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC190u;
label_1fc190:
    // 0x1fc190: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC190u;
        // 0x1fc194: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC198u;
    // 0x1fc198: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fc198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fc19c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fc19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fc1a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fc1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fc1a4: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FC1A4u;
    SET_GPR_U32(ctx, 31, 0x1FC1ACu);
    ctx->pc = 0x1FC1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC1A4u;
    // 0x1fc1a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1FC1A4u, 0x1FC1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC1ACu;
label_1fc1ac:
    // 0x1fc1ac: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fc1acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fc1b0: 0x26060d88  addiu       $a2, $s0, 0xD88
    ctx->pc = 0x1fc1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
    // 0x1fc1b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fc1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc1b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC1B8u;
    {
        const bool branch_taken_0x1fc1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1B8u;
        // 0x1fc1bc: 0x34a50122  ori         $a1, $a1, 0x122 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc1b8) {
            ctx->pc = 0x1FC1D0u;
            goto label_1fc1d0;
        }
    }
    ctx->pc = 0x1FC1C0u;
    // 0x1fc1c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fc1c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc1c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fc1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fc1c8: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FC1C8u;
    ctx->pc = 0x1FC1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC1C8u;
    // 0x1fc1cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1FC1D0u;
label_1fc1d0:
    // 0x1fc1d0: 0x8cc302a4  lw          $v1, 0x2A4($a2)
    ctx->pc = 0x1fc1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 676)));
    // 0x1fc1d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fc1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc1d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fc1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fc1dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fc1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fc1e0: 0xacc302a4  sw          $v1, 0x2A4($a2)
    ctx->pc = 0x1fc1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 676), GPR_U32(ctx, 3));
    // 0x1fc1e4: 0xae040044  sw          $a0, 0x44($s0)
    ctx->pc = 0x1fc1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x1fc1e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fc1e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1ECu;
        // 0x1fc1f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC1F4u;
    // 0x1fc1f4: 0x0  nop
    ctx->pc = 0x1fc1f4u;
    // NOP
}
