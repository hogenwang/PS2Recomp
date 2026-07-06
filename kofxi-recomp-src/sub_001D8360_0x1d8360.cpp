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

// Function: sub_001D8360
// Address: 0x1d8360 - 0x1d83c8
void sub_001D8360_0x1d8360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8360_0x1d8360");
#endif

    switch (ctx->pc) {
        case 0x1d837cu: goto label_1d837c;
        default: break;
    }

    ctx->pc = 0x1d8360u;

    // 0x1d8360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8364: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8368: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d8368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d836c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d836cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d8370: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d8370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8374: 0xc07623a  jal         func_1D88E8
    ctx->pc = 0x1D8374u;
    SET_GPR_U32(ctx, 31, 0x1D837Cu);
    ctx->pc = 0x1D8378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8374u;
    // 0x1d8378: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88E8u, 0x1D8374u, 0x1D837Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D837Cu;
label_1d837c:
    // 0x1d837c: 0x3c05ff02  lui         $a1, 0xFF02
    ctx->pc = 0x1d837cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65282 << 16));
    // 0x1d8380: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8380u;
    {
        const bool branch_taken_0x1d8380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8380u;
        // 0x1d8384: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8380) {
            ctx->pc = 0x1D83A0u;
            goto label_1d83a0;
        }
    }
    ctx->pc = 0x1D8388u;
    // 0x1d8388: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d838c: 0x34a50201  ori         $a1, $a1, 0x201
    ctx->pc = 0x1d838cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)513);
    // 0x1d8390: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8390u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8394: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d8394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8398: 0x80761c6  j           func_1D8718
    ctx->pc = 0x1D8398u;
    ctx->pc = 0x1D839Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8398u;
    // 0x1d839c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8718u, 0x1D8398u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D83A0u;
label_1d83a0:
    // 0x1d83a0: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x1d83a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d83a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d83a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d83a8: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x1d83a8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x1d83ac: 0xde040020  ld          $a0, 0x20($s0)
    ctx->pc = 0x1d83acu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1d83b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d83b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d83b4: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x1d83b4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x1d83b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d83b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d83bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D83BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D83C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83BCu;
        // 0x1d83c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D83BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D83C4u;
    // 0x1d83c4: 0x0  nop
    ctx->pc = 0x1d83c4u;
    // NOP
    if (ctx->pc == 0x1d83c4u) { ctx->pc = 0x1d83c8u; }
}
