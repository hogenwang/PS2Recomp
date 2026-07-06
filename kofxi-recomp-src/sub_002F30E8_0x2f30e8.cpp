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

// Function: sub_002F30E8
// Address: 0x2f30e8 - 0x2f3448
void sub_002F30E8_0x2f30e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F30E8_0x2f30e8");
#endif

    switch (ctx->pc) {
        case 0x2f3160u: goto label_2f3160;
        case 0x2f3168u: goto label_2f3168;
        case 0x2f31c0u: goto label_2f31c0;
        case 0x2f31f0u: goto label_2f31f0;
        case 0x2f3228u: goto label_2f3228;
        case 0x2f3250u: goto label_2f3250;
        case 0x2f328cu: goto label_2f328c;
        case 0x2f32acu: goto label_2f32ac;
        case 0x2f3354u: goto label_2f3354;
        case 0x2f3388u: goto label_2f3388;
        case 0x2f33c8u: goto label_2f33c8;
        case 0x2f33fcu: goto label_2f33fc;
        default: break;
    }

    ctx->pc = 0x2f30e8u;

    // 0x2f30e8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2f30e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2f30ec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f30ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2f30f0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2f30f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2f30f4: 0x80421bc8  lb          $v0, 0x1BC8($v0)
    ctx->pc = 0x2f30f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 7112)));
    // 0x2f30f8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2f30f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f30fc: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x2f30fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x2f3100: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x2f3100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x2f3104: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2f3104u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3108: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x2f3108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x2f310c: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x2f310cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3110: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2f3110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2f3114: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x2f3114u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3118: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2f3118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2f311c: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x2f311cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3120: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2f3120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2f3124: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f3124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3128: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2f3128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x2f312c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f312cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3130: 0xafa9000c  sw          $t1, 0xC($sp)
    ctx->pc = 0x2f3130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 9));
    // 0x2f3134: 0xafaa0010  sw          $t2, 0x10($sp)
    ctx->pc = 0x2f3134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 10));
    // 0x2f3138: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2f3138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2f313c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2f313cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2f3140: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x2f3140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x2f3144: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2f3144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2f3148: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2f3148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2f314c: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x2f314cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2f3150: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2f3150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2f3154: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x2F3154u;
    {
        const bool branch_taken_0x2f3154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3154u;
        // 0x2f3158: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3154) {
            ctx->pc = 0x2F3334u;
            goto label_2f3334;
        }
    }
    ctx->pc = 0x2F315Cu;
    // 0x2f315c: 0x0  nop
    ctx->pc = 0x2f315cu;
    // NOP
label_2f3160:
    // 0x2f3160: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2F3160u;
    {
        const bool branch_taken_0x2f3160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3160u;
        // 0x2f3164: 0x27b60004  addiu       $s6, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3160) {
            ctx->pc = 0x2F3270u;
            goto label_2f3270;
        }
    }
    ctx->pc = 0x2F3168u;
label_2f3168:
    // 0x2f3168: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2f3168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f316c: 0x16800028  bnez        $s4, . + 4 + (0x28 << 2)
    ctx->pc = 0x2F316Cu;
    {
        const bool branch_taken_0x2f316c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F316Cu;
        // 0x2f3170: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f316c) {
            ctx->pc = 0x2F3210u;
            goto label_2f3210;
        }
    }
    ctx->pc = 0x2F3174u;
    // 0x2f3174: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f3174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3178: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f3178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f317c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2f317cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2f3180: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2f3180u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f3184: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3184u;
    {
        const bool branch_taken_0x2f3184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3184u;
        // 0x2f3188: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3184) {
            ctx->pc = 0x2F3198u;
            goto label_2f3198;
        }
    }
    ctx->pc = 0x2F318Cu;
    // 0x2f318c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2f318cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2f3190: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F3190u;
    {
        const bool branch_taken_0x2f3190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f3190) {
            ctx->pc = 0x2F319Cu;
            goto label_2f319c;
        }
    }
    ctx->pc = 0x2F3198u;
label_2f3198:
    // 0x2f3198: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f3198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f319c:
    // 0x2f319c: 0x50c0001e  beql        $a2, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F319Cu;
    {
        const bool branch_taken_0x2f319c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f319c) {
            ctx->pc = 0x2F31A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F319Cu;
            // 0x2f31a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3218u;
            goto label_2f3218;
        }
    }
    ctx->pc = 0x2F31A4u;
    // 0x2f31a4: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x2f31a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x2f31a8: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F31A8u;
    {
        const bool branch_taken_0x2f31a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f31a8) {
            ctx->pc = 0x2F31ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F31A8u;
            // 0x2f31ac: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F31B8u;
            goto label_2f31b8;
        }
    }
    ctx->pc = 0x2F31B0u;
    // 0x2f31b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F31B0u;
    {
        const bool branch_taken_0x2f31b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F31B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F31B0u;
        // 0x2f31b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f31b0) {
            ctx->pc = 0x2F31E0u;
            goto label_2f31e0;
        }
    }
    ctx->pc = 0x2F31B8u;
label_2f31b8:
    // 0x2f31b8: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F31B8u;
    {
        const bool branch_taken_0x2f31b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F31BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F31B8u;
        // 0x2f31bc: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f31b8) {
            ctx->pc = 0x2F31E0u;
            goto label_2f31e0;
        }
    }
    ctx->pc = 0x2F31C0u;
label_2f31c0:
    // 0x2f31c0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2f31c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f31c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f31c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f31c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f31c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f31cc: 0x0  nop
    ctx->pc = 0x2f31ccu;
    // NOP
    // 0x2f31d0: 0x0  nop
    ctx->pc = 0x2f31d0u;
    // NOP
    // 0x2f31d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F31D4u;
    {
        const bool branch_taken_0x2f31d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f31d4) {
            ctx->pc = 0x2F31C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f31c0;
        }
    }
    ctx->pc = 0x2F31DCu;
    // 0x2f31dc: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2f31dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f31e0:
    // 0x2f31e0: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F31E0u;
    {
        const bool branch_taken_0x2f31e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F31E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F31E0u;
        // 0x2f31e4: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f31e0) {
            ctx->pc = 0x2F3234u;
            goto label_2f3234;
        }
    }
    ctx->pc = 0x2F31E8u;
    // 0x2f31e8: 0xc0bd97e  jal         func_2F65F8
    ctx->pc = 0x2F31E8u;
    SET_GPR_U32(ctx, 31, 0x2F31F0u);
    ctx->pc = 0x2F31ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F31E8u;
    // 0x2f31ec: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F65F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F65F8u, 0x2F31E8u, 0x2F31F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F31F0u;
label_2f31f0:
    // 0x2f31f0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F31F0u;
    {
        const bool branch_taken_0x2f31f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f31f0) {
            ctx->pc = 0x2F31F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F31F0u;
            // 0x2f31f4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3208u;
            goto label_2f3208;
        }
    }
    ctx->pc = 0x2F31F8u;
    // 0x2f31f8: 0x2402fc16  addiu       $v0, $zero, -0x3EA
    ctx->pc = 0x2f31f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966294));
    // 0x2f31fc: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2F31FCu;
    {
        const bool branch_taken_0x2f31fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F31FCu;
        // 0x2f3200: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f31fc) {
            ctx->pc = 0x2F33E8u;
            goto label_2f33e8;
        }
    }
    ctx->pc = 0x2F3204u;
    // 0x2f3204: 0x0  nop
    ctx->pc = 0x2f3204u;
    // NOP
label_2f3208:
    // 0x2f3208: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F3208u;
    {
        const bool branch_taken_0x2f3208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3208u;
        // 0x2f320c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3208) {
            ctx->pc = 0x2F3230u;
            goto label_2f3230;
        }
    }
    ctx->pc = 0x2F3210u;
label_2f3210:
    // 0x2f3210: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f3210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3214: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f3214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f3218:
    // 0x2f3218: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f3218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f321c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2f321cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3220: 0xc0bcb82  jal         func_2F2E08
    ctx->pc = 0x2F3220u;
    SET_GPR_U32(ctx, 31, 0x2F3228u);
    ctx->pc = 0x2F3224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3220u;
    // 0x2f3224: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2E08u, 0x2F3220u, 0x2F3228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3228u;
label_2f3228:
    // 0x2f3228: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f3228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f322c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2f322cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_2f3230:
    // 0x2f3230: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2f3230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f3234:
    // 0x2f3234: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3234u;
    {
        const bool branch_taken_0x2f3234 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2F3238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3234u;
        // 0x2f3238: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3234) {
            ctx->pc = 0x2F3248u;
            goto label_2f3248;
        }
    }
    ctx->pc = 0x2F323Cu;
    // 0x2f323c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2F323Cu;
    {
        const bool branch_taken_0x2f323c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F323Cu;
        // 0x2f3240: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f323c) {
            ctx->pc = 0x2F33ECu;
            goto label_2f33ec;
        }
    }
    ctx->pc = 0x2F3244u;
    // 0x2f3244: 0x0  nop
    ctx->pc = 0x2f3244u;
    // NOP
label_2f3248:
    // 0x2f3248: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F3248u;
    SET_GPR_U32(ctx, 31, 0x2F3250u);
    ctx->pc = 0x2F324Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3248u;
    // 0x2f324c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F3248u, 0x2F3250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3250u;
label_2f3250:
    // 0x2f3250: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2f3250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f3254: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f3254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3258: 0x8e2300e8  lw          $v1, 0xE8($s1)
    ctx->pc = 0x2f3258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x2f325c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x2f325cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2f3260: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x2f3260u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2f3264: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f3264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f3268: 0x10640025  beq         $v1, $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2F3268u;
    {
        const bool branch_taken_0x2f3268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2F326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3268u;
        // 0x2f326c: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3268) {
            ctx->pc = 0x2F3300u;
            goto label_2f3300;
        }
    }
    ctx->pc = 0x2F3270u;
label_2f3270:
    // 0x2f3270: 0x8fa90014  lw          $t1, 0x14($sp)
    ctx->pc = 0x2f3270u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f3274: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f3274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3278: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f3278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f327c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f327cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3280: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2f3280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3284: 0xc0bcb16  jal         func_2F2C58
    ctx->pc = 0x2F3284u;
    SET_GPR_U32(ctx, 31, 0x2F328Cu);
    ctx->pc = 0x2F3288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3284u;
    // 0x2f3288: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2C58u, 0x2F3284u, 0x2F328Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F328Cu;
label_2f328c:
    // 0x2f328c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f328cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3290: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3294: 0x1062ffb4  beq         $v1, $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x2F3294u;
    {
        const bool branch_taken_0x2f3294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3294u;
        // 0x2f3298: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3294) {
            ctx->pc = 0x2F3168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f3168;
        }
    }
    ctx->pc = 0x2F329Cu;
    // 0x2f329c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F329Cu;
    {
        const bool branch_taken_0x2f329c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F32A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F329Cu;
        // 0x2f32a0: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f329c) {
            ctx->pc = 0x2F32D8u;
            goto label_2f32d8;
        }
    }
    ctx->pc = 0x2F32A4u;
    // 0x2f32a4: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F32A4u;
    SET_GPR_U32(ctx, 31, 0x2F32ACu);
    ctx->pc = 0x2F32A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F32A4u;
    // 0x2f32a8: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F32A4u, 0x2F32ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F32ACu;
label_2f32ac:
    // 0x2f32ac: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2f32acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f32b0: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x2f32b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2f32b4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f32b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f32b8: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2F32B8u;
    {
        const bool branch_taken_0x2f32b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F32BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32B8u;
        // 0x2f32bc: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32b8) {
            ctx->pc = 0x2F3394u;
            goto label_2f3394;
        }
    }
    ctx->pc = 0x2F32C0u;
    // 0x2f32c0: 0xaef30000  sw          $s3, 0x0($s7)
    ctx->pc = 0x2f32c0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 19));
    // 0x2f32c4: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x2f32c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2f32c8: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x2f32c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x2f32cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f32ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f32d0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2F32D0u;
    {
        const bool branch_taken_0x2f32d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F32D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32D0u;
        // 0x2f32d4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32d0) {
            ctx->pc = 0x2F3334u;
            goto label_2f3334;
        }
    }
    ctx->pc = 0x2F32D8u;
label_2f32d8:
    // 0x2f32d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F32D8u;
    {
        const bool branch_taken_0x2f32d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F32DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32D8u;
        // 0x2f32dc: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32d8) {
            ctx->pc = 0x2F32E8u;
            goto label_2f32e8;
        }
    }
    ctx->pc = 0x2F32E0u;
    // 0x2f32e0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2F32E0u;
    {
        const bool branch_taken_0x2f32e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F32E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32E0u;
        // 0x2f32e4: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32e0) {
            ctx->pc = 0x2F33E8u;
            goto label_2f33e8;
        }
    }
    ctx->pc = 0x2F32E8u;
label_2f32e8:
    // 0x2f32e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f32e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f32ec: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F32ECu;
    {
        const bool branch_taken_0x2f32ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F32F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32ECu;
        // 0x2f32f0: 0x2403fc16  addiu       $v1, $zero, -0x3EA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32ec) {
            ctx->pc = 0x2F3310u;
            goto label_2f3310;
        }
    }
    ctx->pc = 0x2F32F4u;
    // 0x2f32f4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2F32F4u;
    {
        const bool branch_taken_0x2f32f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F32F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32F4u;
        // 0x2f32f8: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32f4) {
            ctx->pc = 0x2F33E8u;
            goto label_2f33e8;
        }
    }
    ctx->pc = 0x2F32FCu;
    // 0x2f32fc: 0x0  nop
    ctx->pc = 0x2f32fcu;
    // NOP
label_2f3300:
    // 0x2f3300: 0xaef30000  sw          $s3, 0x0($s7)
    ctx->pc = 0x2f3300u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 19));
    // 0x2f3304: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f3304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3308: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F3308u;
    {
        const bool branch_taken_0x2f3308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3308u;
        // 0x2f330c: 0xafa4001c  sw          $a0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3308) {
            ctx->pc = 0x2F3334u;
            goto label_2f3334;
        }
    }
    ctx->pc = 0x2F3310u;
label_2f3310:
    // 0x2f3310: 0x2be1021  addu        $v0, $s5, $fp
    ctx->pc = 0x2f3310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
    // 0x2f3314: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f3314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f3318: 0x8043ffff  lb          $v1, -0x1($v0)
    ctx->pc = 0x2f3318u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x2f331c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2f331cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3320: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2f3320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f3324: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x2f3324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2f3328: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x2f3328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2f332c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2f332cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2f3330: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x2f3330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_2f3334:
    // 0x2f3334: 0x5640ff8a  bnel        $s2, $zero, . + 4 + (-0x76 << 2)
    ctx->pc = 0x2F3334u;
    {
        const bool branch_taken_0x2f3334 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3334) {
            ctx->pc = 0x2F3338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3334u;
            // 0x2f3338: 0x8ef30000  lw          $s3, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3160u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f3160;
        }
    }
    ctx->pc = 0x2F333Cu;
    // 0x2f333c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2f333cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2f3340: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f3340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f3344: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F3344u;
    {
        const bool branch_taken_0x2f3344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3344u;
        // 0x2f3348: 0x3c0982d  daddu       $s3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3344) {
            ctx->pc = 0x2F3370u;
            goto label_2f3370;
        }
    }
    ctx->pc = 0x2F334Cu;
    // 0x2f334c: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x2F334Cu;
    SET_GPR_U32(ctx, 31, 0x2F3354u);
    ctx->pc = 0x2F3350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F334Cu;
    // 0x2f3350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x2F334Cu, 0x2F3354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3354u;
label_2f3354:
    // 0x2f3354: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2f3354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2f3358: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x2f3358u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f335c: 0x1ce00006  bgtz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F335Cu;
    {
        const bool branch_taken_0x2f335c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2F3360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F335Cu;
        // 0x2f3360: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f335c) {
            ctx->pc = 0x2F3378u;
            goto label_2f3378;
        }
    }
    ctx->pc = 0x2F3364u;
    // 0x2f3364: 0x2402fc13  addiu       $v0, $zero, -0x3ED
    ctx->pc = 0x2f3364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966291));
    // 0x2f3368: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2F3368u;
    {
        const bool branch_taken_0x2f3368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3368u;
        // 0x2f336c: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3368) {
            ctx->pc = 0x2F33E8u;
            goto label_2f33e8;
        }
    }
    ctx->pc = 0x2F3370u;
label_2f3370:
    // 0x2f3370: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2f3370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f3374: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2f3374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f3378:
    // 0x2f3378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f3378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f337c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2f337cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3380: 0xc0bdf1e  jal         func_2F7C78
    ctx->pc = 0x2F3380u;
    SET_GPR_U32(ctx, 31, 0x2F3388u);
    ctx->pc = 0x2F3384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3380u;
    // 0x2f3384: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7C78u, 0x2F3380u, 0x2F3388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3388u;
label_2f3388:
    // 0x2f3388: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2f3388u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f338c: 0x1ea0ff74  bgtz        $s5, . + 4 + (-0x8C << 2)
    ctx->pc = 0x2F338Cu;
    {
        const bool branch_taken_0x2f338c = (GPR_S32(ctx, 21) > 0);
        ctx->pc = 0x2F3390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F338Cu;
        // 0x2f3390: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f338c) {
            ctx->pc = 0x2F3160u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f3160;
        }
    }
    ctx->pc = 0x2F3394u;
label_2f3394:
    // 0x2f3394: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x2f3394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x2f3398: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F3398u;
    {
        const bool branch_taken_0x2f3398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3398u;
        // 0x2f339c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3398) {
            ctx->pc = 0x2F33C0u;
            goto label_2f33c0;
        }
    }
    ctx->pc = 0x2F33A0u;
    // 0x2f33a0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2f33a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f33a4: 0xaef30000  sw          $s3, 0x0($s7)
    ctx->pc = 0x2f33a4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 19));
    // 0x2f33a8: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2f33a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2f33ac: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2f33acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2f33b0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2f33b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f33b4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2F33B4u;
    {
        const bool branch_taken_0x2f33b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F33B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F33B4u;
        // 0x2f33b8: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f33b4) {
            ctx->pc = 0x2F3414u;
            goto label_2f3414;
        }
    }
    ctx->pc = 0x2F33BCu;
    // 0x2f33bc: 0x0  nop
    ctx->pc = 0x2f33bcu;
    // NOP
label_2f33c0:
    // 0x2f33c0: 0xc0bc780  jal         func_2F1E00
    ctx->pc = 0x2F33C0u;
    SET_GPR_U32(ctx, 31, 0x2F33C8u);
    ctx->pc = 0x2F33C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F33C0u;
    // 0x2f33c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1E00u, 0x2F33C0u, 0x2F33C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F33C8u;
label_2f33c8:
    // 0x2f33c8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F33C8u;
    {
        const bool branch_taken_0x2f33c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F33CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F33C8u;
        // 0x2f33cc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f33c8) {
            ctx->pc = 0x2F33ECu;
            goto label_2f33ec;
        }
    }
    ctx->pc = 0x2F33D0u;
    // 0x2f33d0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2f33d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2f33d4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F33D4u;
    {
        const bool branch_taken_0x2f33d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F33D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F33D4u;
        // 0x2f33d8: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f33d4) {
            ctx->pc = 0x2F33ECu;
            goto label_2f33ec;
        }
    }
    ctx->pc = 0x2F33DCu;
    // 0x2f33dc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f33dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f33e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F33E0u;
    {
        const bool branch_taken_0x2f33e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F33E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F33E0u;
        // 0x2f33e4: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f33e0) {
            ctx->pc = 0x2F33ECu;
            goto label_2f33ec;
        }
    }
    ctx->pc = 0x2F33E8u;
label_2f33e8:
    // 0x2f33e8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f33e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f33ec:
    // 0x2f33ec: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F33ECu;
    {
        const bool branch_taken_0x2f33ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f33ec) {
            ctx->pc = 0x2F33F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F33ECu;
            // 0x2f33f0: 0xaef30000  sw          $s3, 0x0($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3400u;
            goto label_2f3400;
        }
    }
    ctx->pc = 0x2F33F4u;
    // 0x2f33f4: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F33F4u;
    SET_GPR_U32(ctx, 31, 0x2F33FCu);
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F33F4u, 0x2F33FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F33FCu;
label_2f33fc:
    // 0x2f33fc: 0xaef30000  sw          $s3, 0x0($s7)
    ctx->pc = 0x2f33fcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 19));
label_2f3400:
    // 0x2f3400: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f3400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f3404: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2f3404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2f3408: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2f3408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2f340c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2f340cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3410: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2f3410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2f3414:
    // 0x2f3414: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2f3414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2f3418: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x2f3418u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f341c: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x2f341cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f3420: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2f3420u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f3424: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x2f3424u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f3428: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2f3428u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f342c: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x2f342cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f3430: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2f3430u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f3434: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2f3434u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f3438: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2f3438u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f343c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F343Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F343Cu;
        // 0x2f3440: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F343Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3444u;
    // 0x2f3444: 0x0  nop
    ctx->pc = 0x2f3444u;
    // NOP
}
