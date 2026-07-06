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

// Function: sub_001FC268
// Address: 0x1fc268 - 0x1fc2f0
void sub_001FC268_0x1fc268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC268_0x1fc268");
#endif

    switch (ctx->pc) {
        case 0x1fc284u: goto label_1fc284;
        case 0x1fc2bcu: goto label_1fc2bc;
        case 0x1fc2d4u: goto label_1fc2d4;
        default: break;
    }

    ctx->pc = 0x1fc268u;

    // 0x1fc268: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fc268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fc26c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fc26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fc270: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fc270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc274: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fc274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fc278: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fc278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fc27c: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FC27Cu;
    SET_GPR_U32(ctx, 31, 0x1FC284u);
    ctx->pc = 0x1FC280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC27Cu;
    // 0x1fc280: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1FC27Cu, 0x1FC284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC284u;
label_1fc284:
    // 0x1fc284: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fc284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fc288: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fc288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc28c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1fc28cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fc290: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FC290u;
    {
        const bool branch_taken_0x1fc290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC290u;
        // 0x1fc294: 0x34a50123  ori         $a1, $a1, 0x123 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)291);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc290) {
            ctx->pc = 0x1FC2B0u;
            goto label_1fc2b0;
        }
    }
    ctx->pc = 0x1FC298u;
    // 0x1fc298: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fc298u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc29c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fc29cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fc2a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fc2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc2a4: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FC2A4u;
    ctx->pc = 0x1FC2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC2A4u;
    // 0x1fc2a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1FC2ACu;
    // 0x1fc2ac: 0x0  nop
    ctx->pc = 0x1fc2acu;
    // NOP
label_1fc2b0:
    // 0x1fc2b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc2b4: 0xc07f142  jal         func_1FC508
    ctx->pc = 0x1FC2B4u;
    SET_GPR_U32(ctx, 31, 0x1FC2BCu);
    ctx->pc = 0x1FC2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC2B4u;
    // 0x1fc2b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC508u, 0x1FC2B4u, 0x1FC2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC2BCu;
label_1fc2bc:
    // 0x1fc2bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc2c0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1fc2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1fc2c4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC2C4u;
    {
        const bool branch_taken_0x1fc2c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2C4u;
        // 0x1fc2c8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2c4) {
            ctx->pc = 0x1FC2D4u;
            goto label_1fc2d4;
        }
    }
    ctx->pc = 0x1FC2CCu;
    // 0x1fc2cc: 0xc07eb90  jal         func_1FAE40
    ctx->pc = 0x1FC2CCu;
    SET_GPR_U32(ctx, 31, 0x1FC2D4u);
    ctx->pc = 0x1FAE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAE40u, 0x1FC2CCu, 0x1FC2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC2D4u;
label_1fc2d4:
    // 0x1fc2d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fc2d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc2d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fc2d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc2dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fc2dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fc2e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fc2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2E4u;
        // 0x1fc2e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC2ECu;
    // 0x1fc2ec: 0x0  nop
    ctx->pc = 0x1fc2ecu;
    // NOP
}
