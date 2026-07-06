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

// Function: sub_003397F0
// Address: 0x3397f0 - 0x339930
void sub_003397F0_0x3397f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003397F0_0x3397f0");
#endif

    switch (ctx->pc) {
        case 0x339824u: goto label_339824;
        case 0x339880u: goto label_339880;
        case 0x3398f8u: goto label_3398f8;
        default: break;
    }

    ctx->pc = 0x3397f0u;

    // 0x3397f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3397f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3397f4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3397f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3397f8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3397f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3397fc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3397fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x339800: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x339800u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339804: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x339804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x339808: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x339808u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33980c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x33980cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x339810: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x339810u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339814: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x339814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x339818: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x339818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33981c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x33981Cu;
    SET_GPR_U32(ctx, 31, 0x339824u);
    ctx->pc = 0x339820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33981Cu;
    // 0x339820: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x33981Cu, 0x339824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339824u;
label_339824:
    // 0x339824: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x339824u;
    {
        const bool branch_taken_0x339824 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x339828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339824u;
        // 0x339828: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339824) {
            ctx->pc = 0x339834u;
            goto label_339834;
        }
    }
    ctx->pc = 0x33982Cu;
    // 0x33982c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x33982cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x339830: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x339830u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_339834:
    // 0x339834: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x339834u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x339838: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x339838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x33983c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33983Cu;
    {
        const bool branch_taken_0x33983c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x339840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33983Cu;
        // 0x339840: 0x284a023  subu        $s4, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33983c) {
            ctx->pc = 0x339850u;
            goto label_339850;
        }
    }
    ctx->pc = 0x339844u;
    // 0x339844: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x339844u;
    {
        const bool branch_taken_0x339844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x339844) {
            ctx->pc = 0x339850u;
            goto label_339850;
        }
    }
    ctx->pc = 0x33984Cu;
    // 0x33984c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x33984cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_339850:
    // 0x339850: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x339850u;
    {
        const bool branch_taken_0x339850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x339850) {
            ctx->pc = 0x339854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339850u;
            // 0x339854: 0x101e3c  dsll32      $v1, $s0, 24 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339860u;
            goto label_339860;
        }
    }
    ctx->pc = 0x339858u;
    // 0x339858: 0x2694fff8  addiu       $s4, $s4, -0x8
    ctx->pc = 0x339858u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
    // 0x33985c: 0x101e3c  dsll32      $v1, $s0, 24
    ctx->pc = 0x33985cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
label_339860:
    // 0x339860: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x339860u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x339864: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x339864u;
    {
        const bool branch_taken_0x339864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x339868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339864u;
        // 0x339868: 0x24110180  addiu       $s1, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339864) {
            ctx->pc = 0x339870u;
            goto label_339870;
        }
    }
    ctx->pc = 0x33986Cu;
    // 0x33986c: 0x24110140  addiu       $s1, $zero, 0x140
    ctx->pc = 0x33986cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_339870:
    // 0x339870: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x339870u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x339874: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x339874u;
    {
        const bool branch_taken_0x339874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x339874) {
            ctx->pc = 0x339908u;
            goto label_339908;
        }
    }
    ctx->pc = 0x33987Cu;
    // 0x33987c: 0x2670fff0  addiu       $s0, $s3, -0x10
    ctx->pc = 0x33987cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967280));
label_339880:
    // 0x339880: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x339880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x339884: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x339884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x339888: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x339888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x33988c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x33988cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x339890: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x339890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x339894: 0x2483ffe0  addiu       $v1, $a0, -0x20
    ctx->pc = 0x339894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x339898: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x339898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x33989c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33989cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3398a0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x3398a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x3398a4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x3398a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x3398a8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3398A8u;
    {
        const bool branch_taken_0x3398a8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3398ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3398A8u;
        // 0x3398ac: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3398a8) {
            ctx->pc = 0x3398BCu;
            goto label_3398bc;
        }
    }
    ctx->pc = 0x3398B0u;
    // 0x3398b0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3398B0u;
    {
        const bool branch_taken_0x3398b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3398b0) {
            ctx->pc = 0x3398B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3398B0u;
            // 0x3398b4: 0x24900  sll         $t1, $v0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3398C0u;
            goto label_3398c0;
        }
    }
    ctx->pc = 0x3398B8u;
    // 0x3398b8: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3398b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_3398bc:
    // 0x3398bc: 0x24900  sll         $t1, $v0, 4
    ctx->pc = 0x3398bcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3398c0:
    // 0x3398c0: 0x2483ffe0  addiu       $v1, $a0, -0x20
    ctx->pc = 0x3398c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x3398c4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3398C4u;
    {
        const bool branch_taken_0x3398c4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3398C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3398C4u;
        // 0x3398c8: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3398c4) {
            ctx->pc = 0x3398D4u;
            goto label_3398d4;
        }
    }
    ctx->pc = 0x3398CCu;
    // 0x3398cc: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x3398ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3398d0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3398d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_3398d4:
    // 0x3398d4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3398d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3398d8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3398d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3398dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3398dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3398e0: 0x2225021  addu        $t2, $s1, $v0
    ctx->pc = 0x3398e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3398e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3398e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3398e8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3398e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3398ec: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3398ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3398f0: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x3398F0u;
    SET_GPR_U32(ctx, 31, 0x3398F8u);
    ctx->pc = 0x3398F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3398F0u;
    // 0x3398f4: 0xe0582d  daddu       $t3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x3398F0u, 0x3398F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3398F8u;
label_3398f8:
    // 0x3398f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3398f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3398fc: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x3398fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x339900: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x339900u;
    {
        const bool branch_taken_0x339900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x339904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339900u;
        // 0x339904: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339900) {
            ctx->pc = 0x339880u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_339880;
        }
    }
    ctx->pc = 0x339908u;
label_339908:
    // 0x339908: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x339908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x33990c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x33990cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x339910: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x339910u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x339914: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x339914u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x339918: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x339918u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33991c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x33991cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x339920: 0x3e00008  jr          $ra
    ctx->pc = 0x339920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339920u;
        // 0x339924: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339928u;
    // 0x339928: 0x0  nop
    ctx->pc = 0x339928u;
    // NOP
    // 0x33992c: 0x0  nop
    ctx->pc = 0x33992cu;
    // NOP
    if (ctx->pc == 0x33992cu) { ctx->pc = 0x339930u; }
}
