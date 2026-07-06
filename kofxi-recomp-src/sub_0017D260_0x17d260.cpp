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

// Function: sub_0017D260
// Address: 0x17d260 - 0x17d2e0
void sub_0017D260_0x17d260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D260_0x17d260");
#endif

    switch (ctx->pc) {
        case 0x17d284u: goto label_17d284;
        case 0x17d29cu: goto label_17d29c;
        default: break;
    }

    ctx->pc = 0x17d260u;

    // 0x17d260: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17d260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17d264: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17d264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17d268: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17d268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17d26c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17d26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17d270: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17d270u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d274: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17d274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17d278: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x17d278u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17d27c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17d27cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d280: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x17d280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_17d284:
    // 0x17d284: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x17d284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x17d288: 0x244238a0  addiu       $v0, $v0, 0x38A0
    ctx->pc = 0x17d288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14496));
    // 0x17d28c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17d290: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17d290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d294: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x17D294u;
    SET_GPR_U32(ctx, 31, 0x17D29Cu);
    ctx->pc = 0x17D298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D294u;
    // 0x17d298: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x17D294u, 0x17D29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D29Cu;
label_17d29c:
    // 0x17d29c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D29Cu;
    {
        const bool branch_taken_0x17d29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d29c) {
            ctx->pc = 0x17D2A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D29Cu;
            // 0x17d2a0: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D2ACu;
            goto label_17d2ac;
        }
    }
    ctx->pc = 0x17D2A4u;
    // 0x17d2a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17D2A4u;
    {
        const bool branch_taken_0x17d2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D2A4u;
        // 0x17d2a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d2a4) {
            ctx->pc = 0x17D2C0u;
            goto label_17d2c0;
        }
    }
    ctx->pc = 0x17D2ACu;
label_17d2ac:
    // 0x17d2ac: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x17d2acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17d2b0: 0x2a020014  slti        $v0, $s0, 0x14
    ctx->pc = 0x17d2b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x17d2b4: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x17D2B4u;
    {
        const bool branch_taken_0x17d2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d2b4) {
            ctx->pc = 0x17D2B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D2B4u;
            // 0x17d2b8: 0x320300ff  andi        $v1, $s0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D284u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17d284;
        }
    }
    ctx->pc = 0x17D2BCu;
    // 0x17d2bc: 0x0  nop
    ctx->pc = 0x17d2bcu;
    // NOP
label_17d2c0:
    // 0x17d2c0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17d2c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d2c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17d2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d2c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17d2c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d2cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17d2ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d2d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17d2d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x17D2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D2D4u;
        // 0x17d2d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D2D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D2DCu;
    // 0x17d2dc: 0x0  nop
    ctx->pc = 0x17d2dcu;
    // NOP
    if (ctx->pc == 0x17d2dcu) { ctx->pc = 0x17d2e0u; }
}
