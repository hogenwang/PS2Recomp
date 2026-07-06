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

// Function: sub_001C2FE0
// Address: 0x1c2fe0 - 0x1c30c8
void sub_001C2FE0_0x1c2fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2FE0_0x1c2fe0");
#endif

    switch (ctx->pc) {
        case 0x1c3054u: goto label_1c3054;
        case 0x1c3060u: goto label_1c3060;
        case 0x1c3068u: goto label_1c3068;
        case 0x1c3070u: goto label_1c3070;
        case 0x1c3078u: goto label_1c3078;
        case 0x1c309cu: goto label_1c309c;
        default: break;
    }

    ctx->pc = 0x1c2fe0u;

    // 0x1c2fe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c2fe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c2fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c2fe8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2fec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c2fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c2ff0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c2ff0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ff4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c2ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c2ff8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c2ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c2ffc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c2ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c3000: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C3000u;
    {
        const bool branch_taken_0x1c3000 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3000u;
        // 0x1c3004: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3000) {
            ctx->pc = 0x1C3030u;
            goto label_1c3030;
        }
    }
    ctx->pc = 0x1C3008u;
    // 0x1c3008: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c3008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c300c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c300cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3010: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c3010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c3014: 0x24a59e78  addiu       $a1, $a1, -0x6188
    ctx->pc = 0x1c3014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942328));
    // 0x1c3018: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c3018u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c301c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c301cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c3020: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c3020u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3024: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c3024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3028: 0x80709d4  j           func_1C2750
    ctx->pc = 0x1C3028u;
    ctx->pc = 0x1C302Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3028u;
    // 0x1c302c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2750u;
    sub_001C2750_0x1c2750(rdram, ctx, runtime); return;
    ctx->pc = 0x1C3030u;
label_1c3030:
    // 0x1c3030: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x1c3030u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1c3034: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1c3034u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c3038: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C3038u;
    {
        const bool branch_taken_0x1c3038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3038) {
            ctx->pc = 0x1C303Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3038u;
            // 0x1c303c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C30A8u;
            goto label_1c30a8;
        }
    }
    ctx->pc = 0x1C3040u;
    // 0x1c3040: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1c3040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c3044: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3044u;
    {
        const bool branch_taken_0x1c3044 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3044u;
        // 0x1c3048: 0x3c110009  lui         $s1, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)9 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3044) {
            ctx->pc = 0x1C3054u;
            goto label_1c3054;
        }
    }
    ctx->pc = 0x1C304Cu;
    // 0x1c304c: 0xc070240  jal         func_1C0900
    ctx->pc = 0x1C304Cu;
    SET_GPR_U32(ctx, 31, 0x1C3054u);
    ctx->pc = 0x1C0900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0900u, 0x1C304Cu, 0x1C3054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3054u;
label_1c3054:
    // 0x1c3054: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1c3054u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3058: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x1c3058u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x1c305c: 0x3c14003f  lui         $s4, 0x3F
    ctx->pc = 0x1c305cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)63 << 16));
label_1c3060:
    // 0x1c3060: 0xc0703a4  jal         func_1C0E90
    ctx->pc = 0x1C3060u;
    SET_GPR_U32(ctx, 31, 0x1C3068u);
    ctx->pc = 0x1C0E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0E90u, 0x1C3060u, 0x1C3068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3068u;
label_1c3068:
    // 0x1c3068: 0xc070a3c  jal         func_1C28F0
    ctx->pc = 0x1C3068u;
    SET_GPR_U32(ctx, 31, 0x1C3070u);
    ctx->pc = 0x1C28F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28F0u, 0x1C3068u, 0x1C3070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3070u;
label_1c3070:
    // 0x1c3070: 0xc070c32  jal         func_1C30C8
    ctx->pc = 0x1C3070u;
    SET_GPR_U32(ctx, 31, 0x1C3078u);
    ctx->pc = 0x1C3074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3070u;
    // 0x1c3074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C30C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C30C8u, 0x1C3070u, 0x1C3078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3078u;
label_1c3078:
    // 0x1c3078: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x1c3078u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1c307c: 0x54730008  bnel        $v1, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C307Cu;
    {
        const bool branch_taken_0x1c307c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x1c307c) {
            ctx->pc = 0x1C3080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C307Cu;
            // 0x1c3080: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C30A0u;
            goto label_1c30a0;
        }
    }
    ctx->pc = 0x1C3084u;
    // 0x1c3084: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c3084u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c3088: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1c3088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1c308c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1C308Cu;
    {
        const bool branch_taken_0x1c308c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c308c) {
            ctx->pc = 0x1C3060u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c3060;
        }
    }
    ctx->pc = 0x1C3094u;
    // 0x1c3094: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1C3094u;
    SET_GPR_U32(ctx, 31, 0x1C309Cu);
    ctx->pc = 0x1C3098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3094u;
    // 0x1c3098: 0x26849ed8  addiu       $a0, $s4, -0x6128 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294942424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4848u, 0x1C3094u, 0x1C309Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C309Cu;
label_1c309c:
    // 0x1c309c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1c309cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1c30a0:
    // 0x1c30a0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1c30a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c30a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c30a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c30a8:
    // 0x1c30a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c30a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c30ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c30acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c30b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c30b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c30b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c30b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c30b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c30b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c30bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C30BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C30C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30BCu;
        // 0x1c30c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C30BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C30C4u;
    // 0x1c30c4: 0x0  nop
    ctx->pc = 0x1c30c4u;
    // NOP
}
