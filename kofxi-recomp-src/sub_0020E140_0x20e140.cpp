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

// Function: sub_0020E140
// Address: 0x20e140 - 0x20e230
void sub_0020E140_0x20e140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E140_0x20e140");
#endif

    switch (ctx->pc) {
        case 0x20e18cu: goto label_20e18c;
        case 0x20e1e0u: goto label_20e1e0;
        case 0x20e210u: goto label_20e210;
        default: break;
    }

    ctx->pc = 0x20e140u;

    // 0x20e140: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20e140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20e144: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x20e144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x20e148: 0x27a9006c  addiu       $t1, $sp, 0x6C
    ctx->pc = 0x20e148u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x20e14c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20e14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20e150: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20e150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20e154: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x20e154u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e158: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20e158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20e15c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x20e15cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e160: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20e160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20e164: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x20e164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20e168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20e16c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x20e16cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e170: 0x94c4000a  lhu         $a0, 0xA($a2)
    ctx->pc = 0x20e170u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x20e174: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x20e174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e178: 0x94c5000c  lhu         $a1, 0xC($a2)
    ctx->pc = 0x20e178u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x20e17c: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x20e17cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x20e180: 0x94c6000e  lhu         $a2, 0xE($a2)
    ctx->pc = 0x20e180u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x20e184: 0xc082944  jal         func_20A510
    ctx->pc = 0x20E184u;
    SET_GPR_U32(ctx, 31, 0x20E18Cu);
    ctx->pc = 0x20E188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E184u;
    // 0x20e188: 0x27a80064  addiu       $t0, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A510u, 0x20E184u, 0x20E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E18Cu;
label_20e18c:
    // 0x20e18c: 0x8fa7006c  lw          $a3, 0x6C($sp)
    ctx->pc = 0x20e18cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x20e190: 0x50e00020  beql        $a3, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x20E190u;
    {
        const bool branch_taken_0x20e190 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e190) {
            ctx->pc = 0x20E194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E190u;
            // 0x20e194: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E214u;
            goto label_20e214;
        }
    }
    ctx->pc = 0x20E198u;
    // 0x20e198: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x20e198u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x20e19c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x20e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20e1a0: 0x96450004  lhu         $a1, 0x4($s2)
    ctx->pc = 0x20e1a0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x20e1a4: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x20e1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x20e1a8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x20e1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20e1ac: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x20e1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x20e1b0: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x20e1b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x20e1b4: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x20e1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x20e1b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20E1B8u;
    {
        const bool branch_taken_0x20e1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E1B8u;
        // 0x20e1bc: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e1b8) {
            ctx->pc = 0x20E1E8u;
            goto label_20e1e8;
        }
    }
    ctx->pc = 0x20E1C0u;
    // 0x20e1c0: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x20e1c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20e1c4: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x20e1c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20e1c8: 0x96480008  lhu         $t0, 0x8($s2)
    ctx->pc = 0x20e1c8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x20e1cc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x20e1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x20e1d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20e1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20e1d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20e1d8: 0xc082df4  jal         func_20B7D0
    ctx->pc = 0x20E1D8u;
    SET_GPR_U32(ctx, 31, 0x20E1E0u);
    ctx->pc = 0x20E1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E1D8u;
    // 0x20e1dc: 0x2624821  addu        $t1, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B7D0u, 0x20E1D8u, 0x20E1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E1E0u;
label_20e1e0:
    // 0x20e1e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x20E1E0u;
    {
        const bool branch_taken_0x20e1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e1e0) {
            ctx->pc = 0x20E210u;
            goto label_20e210;
        }
    }
    ctx->pc = 0x20E1E8u;
label_20e1e8:
    // 0x20e1e8: 0x96430008  lhu         $v1, 0x8($s2)
    ctx->pc = 0x20e1e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x20e1ec: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x20e1ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e1f0: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x20e1f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20e1f4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x20e1f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e1f8: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x20e1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x20e1fc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x20e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x20e200: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20e200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20e204: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20e204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20e208: 0xc082ea4  jal         func_20BA90
    ctx->pc = 0x20E208u;
    SET_GPR_U32(ctx, 31, 0x20E210u);
    ctx->pc = 0x20E20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E208u;
    // 0x20e20c: 0x2624021  addu        $t0, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BA90u, 0x20E208u, 0x20E210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E210u;
label_20e210:
    // 0x20e210: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x20e210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_20e214:
    // 0x20e214: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20e214u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20e218: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20e218u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e21c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20e21cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e220: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20e220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e224: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20e224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e228: 0x3e00008  jr          $ra
    ctx->pc = 0x20E228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E228u;
        // 0x20e22c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E230u;
}
