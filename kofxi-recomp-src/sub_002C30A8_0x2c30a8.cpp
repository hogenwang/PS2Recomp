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

// Function: sub_002C30A8
// Address: 0x2c30a8 - 0x2c3170
void sub_002C30A8_0x2c30a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C30A8_0x2c30a8");
#endif

    switch (ctx->pc) {
        case 0x2c30bcu: goto label_2c30bc;
        case 0x2c30d4u: goto label_2c30d4;
        case 0x2c30e8u: goto label_2c30e8;
        case 0x2c30f8u: goto label_2c30f8;
        case 0x2c3104u: goto label_2c3104;
        case 0x2c3108u: goto label_2c3108;
        case 0x2c3118u: goto label_2c3118;
        case 0x2c311cu: goto label_2c311c;
        case 0x2c3128u: goto label_2c3128;
        case 0x2c3138u: goto label_2c3138;
        case 0x2c3148u: goto label_2c3148;
        case 0x2c3168u: goto label_2c3168;
        case 0x2c316cu: goto label_2c316c;
        default: break;
    }

    ctx->pc = 0x2c30a8u;

    // 0x2c30a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c30a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c30ac: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2c30acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2c30b0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c30b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c30b4: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2C30B4u;
    SET_GPR_U32(ctx, 31, 0x2C30BCu);
    ctx->pc = 0x2C30B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C30B4u;
    // 0x2c30b8: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2C30B4u, 0x2C30BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C30BCu;
label_2c30bc:
    // 0x2c30bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c30bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c30c0: 0x5600000b  bnel        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2C30C0u;
    {
        const bool branch_taken_0x2c30c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c30c0) {
            ctx->pc = 0x2C30C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C30C0u;
            // 0x2c30c4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C30F0u;
            goto label_2c30f0;
        }
    }
    ctx->pc = 0x2C30C8u;
    // 0x2c30c8: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x2c30c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x2c30cc: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2c30ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c30d0: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2c30d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_2c30d4:
    // 0x2c30d4: 0x240500cc  addiu       $a1, $zero, 0xCC
    ctx->pc = 0x2c30d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x2c30d8: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2c30d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2c30dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c30dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c30e0: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C30E0u;
    SET_GPR_U32(ctx, 31, 0x2C30E8u);
    ctx->pc = 0x2C30E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C30E0u;
    // 0x2c30e4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2C30E0u, 0x2C30E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C30E8u;
label_2c30e8:
    // 0x2c30e8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2C30E8u;
    {
        const bool branch_taken_0x2c30e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C30ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C30E8u;
        // 0x2c30ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c30e8) {
            ctx->pc = 0x2C3160u;
            goto label_2c3160;
        }
    }
    ctx->pc = 0x2C30F0u;
label_2c30f0:
    // 0x2c30f0: 0xc0a06f2  jal         func_281BC8
    ctx->pc = 0x2C30F0u;
    SET_GPR_U32(ctx, 31, 0x2C30F8u);
    ctx->pc = 0x2C30F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C30F0u;
    // 0x2c30f4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281BC8u, 0x2C30F0u, 0x2C30F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C30F8u;
label_2c30f8:
    // 0x2c30f8: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C30F8u;
    {
        const bool branch_taken_0x2c30f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C30FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C30F8u;
        // 0x2c30fc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c30f8) {
            ctx->pc = 0x2C30E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c30e8;
        }
    }
    ctx->pc = 0x2C3100u;
    // 0x2c3100: 0xc0b09ee  jal         func_2C27B8
label_2c3104:
    if (ctx->pc == 0x2C3104u) {
        ctx->pc = 0x2C3108u;
        goto label_2c3108;
    }
    ctx->pc = 0x2C3100u;
    SET_GPR_U32(ctx, 31, 0x2C3108u);
    ctx->pc = 0x2C27B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C27B8u, 0x2C3100u, 0x2C3108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3108u;
label_2c3108:
    // 0x2c3108: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C3108u;
    {
        const bool branch_taken_0x2c3108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3108u;
        // 0x2c310c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3108) {
            ctx->pc = 0x2C30E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c30e8;
        }
    }
    ctx->pc = 0x2C3110u;
    // 0x2c3110: 0xc0a0938  jal         func_2824E0
    ctx->pc = 0x2C3110u;
    SET_GPR_U32(ctx, 31, 0x2C3118u);
    ctx->pc = 0x2824E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2824E0u, 0x2C3110u, 0x2C3118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3118u;
label_2c3118:
    // 0x2c3118: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
label_2c311c:
    if (ctx->pc == 0x2C311Cu) {
        ctx->pc = 0x2C311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3118u;
        // 0x2c311c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3120u;
        goto label_fallthrough_0x2c3118;
    }
    ctx->pc = 0x2C3118u;
    {
        const bool branch_taken_0x2c3118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3118u;
        // 0x2c311c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3118) {
            ctx->pc = 0x2C30E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c30e8;
        }
    }
label_fallthrough_0x2c3118:
    ctx->pc = 0x2C3120u;
    // 0x2c3120: 0xc0b14e4  jal         func_2C5390
    ctx->pc = 0x2C3120u;
    SET_GPR_U32(ctx, 31, 0x2C3128u);
    ctx->pc = 0x2C5390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5390u, 0x2C3120u, 0x2C3128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3128u;
label_2c3128:
    // 0x2c3128: 0x1040ffef  beqz        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2C3128u;
    {
        const bool branch_taken_0x2c3128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3128u;
        // 0x2c312c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3128) {
            ctx->pc = 0x2C30E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c30e8;
        }
    }
    ctx->pc = 0x2C3130u;
    // 0x2c3130: 0xc0a0938  jal         func_2824E0
    ctx->pc = 0x2C3130u;
    SET_GPR_U32(ctx, 31, 0x2C3138u);
    ctx->pc = 0x2824E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2824E0u, 0x2C3130u, 0x2C3138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3138u;
label_2c3138:
    // 0x2c3138: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2C3138u;
    {
        const bool branch_taken_0x2c3138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3138u;
        // 0x2c313c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3138) {
            ctx->pc = 0x2C30E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c30e8;
        }
    }
    ctx->pc = 0x2C3140u;
    // 0x2c3140: 0xc0b1264  jal         func_2C4990
    ctx->pc = 0x2C3140u;
    SET_GPR_U32(ctx, 31, 0x2C3148u);
    ctx->pc = 0x2C4990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4990u, 0x2C3140u, 0x2C3148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3148u;
label_2c3148:
    // 0x2c3148: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2C3148u;
    {
        const bool branch_taken_0x2c3148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3148u;
        // 0x2c314c: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3148) {
            ctx->pc = 0x2C30E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c30e8;
        }
    }
    ctx->pc = 0x2C3150u;
    // 0x2c3150: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2c3150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2c3154: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c3154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3158: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2c3158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2c315c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2c315cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_2c3160:
    // 0x2c3160: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c3160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c3164: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2c3164u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c3168:
    // 0x2c3168: 0x3e00008  jr          $ra
label_2c316c:
    if (ctx->pc == 0x2C316Cu) {
        ctx->pc = 0x2C316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3168u;
        // 0x2c316c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3170u;
        goto label_fallthrough_0x2c3168;
    }
    ctx->pc = 0x2C3168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3168u;
        // 0x2c316c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c3168:
    ctx->pc = 0x2C3170u;
}
