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

// Function: sub_001C30C8
// Address: 0x1c30c8 - 0x1c3240
void sub_001C30C8_0x1c30c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C30C8_0x1c30c8");
#endif

    switch (ctx->pc) {
        case 0x1c30e4u: goto label_1c30e4;
        case 0x1c3124u: goto label_1c3124;
        case 0x1c3158u: goto label_1c3158;
        case 0x1c3178u: goto label_1c3178;
        case 0x1c3198u: goto label_1c3198;
        case 0x1c31a8u: goto label_1c31a8;
        case 0x1c31c4u: goto label_1c31c4;
        case 0x1c31e4u: goto label_1c31e4;
        case 0x1c31ecu: goto label_1c31ec;
        case 0x1c31f4u: goto label_1c31f4;
        case 0x1c31fcu: goto label_1c31fc;
        case 0x1c3208u: goto label_1c3208;
        case 0x1c3220u: goto label_1c3220;
        default: break;
    }

    ctx->pc = 0x1c30c8u;

    // 0x1c30c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c30c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c30cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1c30ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C30D0u;
    {
        const bool branch_taken_0x1c30d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C30D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30D0u;
        // 0x1c30d4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30d0) {
            ctx->pc = 0x1C30F0u;
            goto label_1c30f0;
        }
    }
    ctx->pc = 0x1C30D8u;
    // 0x1c30d8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c30d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c30dc: 0xc0709d4  jal         func_1C2750
    ctx->pc = 0x1C30DCu;
    SET_GPR_U32(ctx, 31, 0x1C30E4u);
    ctx->pc = 0x1C30E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30DCu;
    // 0x1c30e0: 0x24a59e78  addiu       $a1, $a1, -0x6188 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2750u, 0x1C30DCu, 0x1C30E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30E4u;
label_1c30e4:
    // 0x1c30e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C30E4u;
    {
        const bool branch_taken_0x1c30e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C30E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30E4u;
        // 0x1c30e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30e4) {
            ctx->pc = 0x1C30F4u;
            goto label_1c30f4;
        }
    }
    ctx->pc = 0x1C30ECu;
    // 0x1c30ec: 0x0  nop
    ctx->pc = 0x1c30ecu;
    // NOP
label_1c30f0:
    // 0x1c30f0: 0x80420002  lb          $v0, 0x2($v0)
    ctx->pc = 0x1c30f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1c30f4:
    // 0x1c30f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c30f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c30f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C30F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C30FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30F8u;
        // 0x1c30fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C30F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3100u;
    // 0x1c3100: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3100u;
        // 0x1c3104: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3108u;
    // 0x1c3108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c3108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c310c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c310cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3110: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C3110u;
    {
        const bool branch_taken_0x1c3110 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3110u;
        // 0x1c3114: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3110) {
            ctx->pc = 0x1C3130u;
            goto label_1c3130;
        }
    }
    ctx->pc = 0x1C3118u;
    // 0x1c3118: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c3118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c311c: 0xc0709d4  jal         func_1C2750
    ctx->pc = 0x1C311Cu;
    SET_GPR_U32(ctx, 31, 0x1C3124u);
    ctx->pc = 0x1C3120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C311Cu;
    // 0x1c3120: 0x24a59e78  addiu       $a1, $a1, -0x6188 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2750u, 0x1C311Cu, 0x1C3124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3124u;
label_1c3124:
    // 0x1c3124: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C3124u;
    {
        const bool branch_taken_0x1c3124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3124u;
        // 0x1c3128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3124) {
            ctx->pc = 0x1C3148u;
            goto label_1c3148;
        }
    }
    ctx->pc = 0x1C312Cu;
    // 0x1c312c: 0x0  nop
    ctx->pc = 0x1c312cu;
    // NOP
label_1c3130:
    // 0x1c3130: 0x80a30002  lb          $v1, 0x2($a1)
    ctx->pc = 0x1c3130u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1c3134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3138: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3138u;
    {
        const bool branch_taken_0x1c3138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3138) {
            ctx->pc = 0x1C313Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3138u;
            // 0x1c313c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3148u;
            goto label_1c3148;
        }
    }
    ctx->pc = 0x1C3140u;
    // 0x1c3140: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x1c3140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1c3144: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x1c3144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1c3148:
    // 0x1c3148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c3148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c314c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C314Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C314Cu;
        // 0x1c3150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C314Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3154u;
    // 0x1c3154: 0x0  nop
    ctx->pc = 0x1c3154u;
    // NOP
label_1c3158:
    // 0x1c3158: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c3158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c315c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C315Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C315Cu;
        // 0x1c3160: 0xac44e9a8  sw          $a0, -0x1658($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961576), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C315Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3164u;
    // 0x1c3164: 0x0  nop
    ctx->pc = 0x1c3164u;
    // NOP
    // 0x1c3168: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c3168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c316c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C316Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C316Cu;
        // 0x1c3170: 0x8c62e9a8  lw          $v0, -0x1658($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961576)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C316Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3174u;
    // 0x1c3174: 0x0  nop
    ctx->pc = 0x1c3174u;
    // NOP
label_1c3178:
    // 0x1c3178: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c3178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c317c: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x1c317cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c3180: 0x2442dcac  addiu       $v0, $v0, -0x2354
    ctx->pc = 0x1c3180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958252));
    // 0x1c3184: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3184u;
    {
        const bool branch_taken_0x1c3184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3184u;
        // 0x1c3188: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3184) {
            ctx->pc = 0x1C3190u;
            goto label_1c3190;
        }
    }
    ctx->pc = 0x1C318Cu;
    // 0x1c318c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1c318cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1c3190:
    // 0x1c3190: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3198u;
label_1c3198:
    // 0x1c3198: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c3198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c319c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C319Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C31A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C319Cu;
        // 0x1c31a0: 0x8c62dcac  lw          $v0, -0x2354($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958252)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C319Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C31A4u;
    // 0x1c31a4: 0x0  nop
    ctx->pc = 0x1c31a4u;
    // NOP
label_1c31a8:
    // 0x1c31a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c31a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c31ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c31acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31b0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1c31b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1c31b4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1c31b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1c31b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c31b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c31bc: 0xc070f0c  jal         func_1C3C30
    ctx->pc = 0x1C31BCu;
    SET_GPR_U32(ctx, 31, 0x1C31C4u);
    ctx->pc = 0x1C31C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31BCu;
    // 0x1c31c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3C30u, 0x1C31BCu, 0x1C31C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31C4u;
label_1c31c4:
    // 0x1c31c4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1c31c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1c31c8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c31c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c31cc: 0x2471e860  addiu       $s1, $v1, -0x17A0
    ctx->pc = 0x1c31ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961248));
    // 0x1c31d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c31d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31d4: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C31D4u;
    {
        const bool branch_taken_0x1c31d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C31D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31D4u;
        // 0x1c31d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31d4) {
            ctx->pc = 0x1C322Cu;
            goto label_1c322c;
        }
    }
    ctx->pc = 0x1C31DCu;
    // 0x1c31dc: 0xc070cf0  jal         func_1C33C0
    ctx->pc = 0x1C31DCu;
    SET_GPR_U32(ctx, 31, 0x1C31E4u);
    ctx->pc = 0x1C33C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C33C0u, 0x1C31DCu, 0x1C31E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31E4u;
label_1c31e4:
    // 0x1c31e4: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C31E4u;
    SET_GPR_U32(ctx, 31, 0x1C31ECu);
    ctx->pc = 0x1C31E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31E4u;
    // 0x1c31e8: 0x34048400  ori         $a0, $zero, 0x8400 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33792);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C31E4u, 0x1C31ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31ECu;
label_1c31ec:
    // 0x1c31ec: 0xc046e5c  jal         func_11B970
    ctx->pc = 0x1C31ECu;
    SET_GPR_U32(ctx, 31, 0x1C31F4u);
    ctx->pc = 0x1C31F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31ECu;
    // 0x1c31f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B970u, 0x1C31ECu, 0x1C31F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31F4u;
label_1c31f4:
    // 0x1c31f4: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C31F4u;
    SET_GPR_U32(ctx, 31, 0x1C31FCu);
    ctx->pc = 0x1C31F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31F4u;
    // 0x1c31f8: 0x34048401  ori         $a0, $zero, 0x8401 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33793);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C31F4u, 0x1C31FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31FCu;
label_1c31fc:
    // 0x1c31fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c31fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3200: 0xc0709e0  jal         func_1C2780
    ctx->pc = 0x1C3200u;
    SET_GPR_U32(ctx, 31, 0x1C3208u);
    ctx->pc = 0x1C3204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3200u;
    // 0x1c3204: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2780u, 0x1C3200u, 0x1C3208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3208u;
label_1c3208:
    // 0x1c3208: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c3208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c320c: 0x24849d48  addiu       $a0, $a0, -0x62B8
    ctx->pc = 0x1c320cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942024));
    // 0x1c3210: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3210u;
    {
        const bool branch_taken_0x1c3210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3210u;
        // 0x1c3214: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3210) {
            ctx->pc = 0x1C3228u;
            goto label_1c3228;
        }
    }
    ctx->pc = 0x1C3218u;
    // 0x1c3218: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1C3218u;
    SET_GPR_U32(ctx, 31, 0x1C3220u);
    ctx->pc = 0x1B4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4848u, 0x1C3218u, 0x1C3220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3220u;
label_1c3220:
    // 0x1c3220: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3220u;
    {
        const bool branch_taken_0x1c3220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3220u;
        // 0x1c3224: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3220) {
            ctx->pc = 0x1C322Cu;
            goto label_1c322c;
        }
    }
    ctx->pc = 0x1C3228u;
label_1c3228:
    // 0x1c3228: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1c3228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1c322c:
    // 0x1c322c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1c322cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3230: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1c3230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3234: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c3234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3238: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3238u;
        // 0x1c323c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3240u;
}
