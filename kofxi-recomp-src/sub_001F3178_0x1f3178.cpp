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

// Function: sub_001F3178
// Address: 0x1f3178 - 0x1f3258
void sub_001F3178_0x1f3178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3178_0x1f3178");
#endif

    switch (ctx->pc) {
        case 0x1f31a4u: goto label_1f31a4;
        case 0x1f31d8u: goto label_1f31d8;
        case 0x1f3220u: goto label_1f3220;
        default: break;
    }

    ctx->pc = 0x1f3178u;

    // 0x1f3178: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f3178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f317c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f317cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f3180: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f3180u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3184: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f3184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f3188: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f3188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f318c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f318cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f3190: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f3190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3194: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f3194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f3198: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f3198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f319c: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F319Cu;
    SET_GPR_U32(ctx, 31, 0x1F31A4u);
    ctx->pc = 0x1F31A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F319Cu;
    // 0x1f31a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1F319Cu, 0x1F31A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F31A4u;
label_1f31a4:
    // 0x1f31a4: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1F31A4u;
    {
        const bool branch_taken_0x1f31a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F31A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31A4u;
        // 0x1f31a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f31a4) {
            ctx->pc = 0x1F323Cu;
            goto label_1f323c;
        }
    }
    ctx->pc = 0x1F31ACu;
    // 0x1f31ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f31acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f31b0: 0x26120950  addiu       $s2, $s0, 0x950
    ctx->pc = 0x1f31b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2384));
    // 0x1f31b4: 0x16620010  bne         $s3, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F31B4u;
    {
        const bool branch_taken_0x1f31b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F31B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31B4u;
        // 0x1f31b8: 0x2604090c  addiu       $a0, $s0, 0x90C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2316));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f31b4) {
            ctx->pc = 0x1F31F8u;
            goto label_1f31f8;
        }
    }
    ctx->pc = 0x1F31BCu;
    // 0x1f31bc: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1f31bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f31c0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1f31c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1f31c4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1f31c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f31c8: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x1f31c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1f31cc: 0x3012  mflo        $a2
    ctx->pc = 0x1f31ccu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1f31d0: 0xc0763ac  jal         func_1D8EB0
    ctx->pc = 0x1F31D0u;
    SET_GPR_U32(ctx, 31, 0x1F31D8u);
    ctx->pc = 0x1F31D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F31D0u;
    // 0x1f31d4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EB0u, 0x1F31D0u, 0x1F31D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F31D8u;
label_1f31d8:
    // 0x1f31d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f31d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f31dc: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F31DCu;
    {
        const bool branch_taken_0x1f31dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F31E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31DCu;
        // 0x1f31e0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f31dc) {
            ctx->pc = 0x1F323Cu;
            goto label_1f323c;
        }
    }
    ctx->pc = 0x1F31E4u;
    // 0x1f31e4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1f31e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1f31e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f31e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f31ec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F31ECu;
    {
        const bool branch_taken_0x1f31ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F31F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31ECu;
        // 0x1f31f0: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f31ec) {
            ctx->pc = 0x1F3238u;
            goto label_1f3238;
        }
    }
    ctx->pc = 0x1F31F4u;
    // 0x1f31f4: 0x0  nop
    ctx->pc = 0x1f31f4u;
    // NOP
label_1f31f8:
    // 0x1f31f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f31f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f31fc: 0x1662000e  bne         $s3, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F31FCu;
    {
        const bool branch_taken_0x1f31fc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F3200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31FCu;
        // 0x1f3200: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f31fc) {
            ctx->pc = 0x1F3238u;
            goto label_1f3238;
        }
    }
    ctx->pc = 0x1F3204u;
    // 0x1f3204: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1f3204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f3208: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1f3208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1f320c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1f320cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f3210: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x1f3210u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1f3214: 0x3012  mflo        $a2
    ctx->pc = 0x1f3214u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1f3218: 0xc0764d6  jal         func_1D9358
    ctx->pc = 0x1F3218u;
    SET_GPR_U32(ctx, 31, 0x1F3220u);
    ctx->pc = 0x1F321Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3218u;
    // 0x1f321c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9358u, 0x1F3218u, 0x1F3220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3220u;
label_1f3220:
    // 0x1f3220: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f3220u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3224: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3224u;
    {
        const bool branch_taken_0x1f3224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3224u;
        // 0x1f3228: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3224) {
            ctx->pc = 0x1F323Cu;
            goto label_1f323c;
        }
    }
    ctx->pc = 0x1F322Cu;
    // 0x1f322c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1f322cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1f3230: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f3230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f3234: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x1f3234u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_1f3238:
    // 0x1f3238: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1f3238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f323c:
    // 0x1f323c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f323cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3240: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f3240u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f3244: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f3244u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3248: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f3248u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f324c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f324cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3250: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3250u;
        // 0x1f3254: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3258u;
}
