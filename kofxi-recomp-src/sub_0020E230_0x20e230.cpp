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

// Function: sub_0020E230
// Address: 0x20e230 - 0x20e310
void sub_0020E230_0x20e230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E230_0x20e230");
#endif

    switch (ctx->pc) {
        case 0x20e284u: goto label_20e284;
        case 0x20e2c0u: goto label_20e2c0;
        case 0x20e2e4u: goto label_20e2e4;
        default: break;
    }

    ctx->pc = 0x20e230u;

    // 0x20e230: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x20e230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x20e234: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x20e234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x20e238: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20e238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x20e23c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20e23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20e240: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x20e240u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e244: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20e244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20e248: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x20e248u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e24c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20e24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20e250: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x20e250u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e254: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20e254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20e258: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x20e258u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e25c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20e25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20e260: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x20e260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e264: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x20e264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e268: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x20e268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20e26c: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x20e26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e270: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x20e270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e274: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x20e274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x20e278: 0x27a80074  addiu       $t0, $sp, 0x74
    ctx->pc = 0x20e278u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x20e27c: 0xc082944  jal         func_20A510
    ctx->pc = 0x20E27Cu;
    SET_GPR_U32(ctx, 31, 0x20E284u);
    ctx->pc = 0x20E280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E27Cu;
    // 0x20e280: 0x27a9007c  addiu       $t1, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A510u, 0x20E27Cu, 0x20E284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E284u;
label_20e284:
    // 0x20e284: 0x8fa7007c  lw          $a3, 0x7C($sp)
    ctx->pc = 0x20e284u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x20e288: 0x50e00017  beql        $a3, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x20E288u;
    {
        const bool branch_taken_0x20e288 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e288) {
            ctx->pc = 0x20E28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E288u;
            // 0x20e28c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E2E8u;
            goto label_20e2e8;
        }
    }
    ctx->pc = 0x20E290u;
    // 0x20e290: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x20e290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20e294: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x20e294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x20e298: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x20e298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x20e29c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x20E29Cu;
    {
        const bool branch_taken_0x20e29c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E29Cu;
        // 0x20e2a0: 0x2422821  addu        $a1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e29c) {
            ctx->pc = 0x20E2C8u;
            goto label_20e2c8;
        }
    }
    ctx->pc = 0x20E2A4u;
    // 0x20e2a4: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x20e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x20e2a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20e2a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e2ac: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x20e2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x20e2b0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x20e2b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e2b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20e2b8: 0xc082df4  jal         func_20B7D0
    ctx->pc = 0x20E2B8u;
    SET_GPR_U32(ctx, 31, 0x20E2C0u);
    ctx->pc = 0x20E2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E2B8u;
    // 0x20e2bc: 0x2a24821  addu        $t1, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B7D0u, 0x20E2B8u, 0x20E2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E2C0u;
label_20e2c0:
    // 0x20e2c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20E2C0u;
    {
        const bool branch_taken_0x20e2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e2c0) {
            ctx->pc = 0x20E2E4u;
            goto label_20e2e4;
        }
    }
    ctx->pc = 0x20E2C8u;
label_20e2c8:
    // 0x20e2c8: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x20e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x20e2cc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x20e2ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e2d0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x20e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x20e2d4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x20e2d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e2d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20e2dc: 0xc082ea4  jal         func_20BA90
    ctx->pc = 0x20E2DCu;
    SET_GPR_U32(ctx, 31, 0x20E2E4u);
    ctx->pc = 0x20E2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E2DCu;
    // 0x20e2e0: 0x2a24021  addu        $t0, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BA90u, 0x20E2DCu, 0x20E2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E2E4u;
label_20e2e4:
    // 0x20e2e4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x20e2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_20e2e8:
    // 0x20e2e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x20e2e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20e2ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20e2ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20e2f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20e2f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e2f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20e2f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e2f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20e2f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e2fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20e2fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e300: 0x3e00008  jr          $ra
    ctx->pc = 0x20E300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E300u;
        // 0x20e304: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E308u;
    // 0x20e308: 0x0  nop
    ctx->pc = 0x20e308u;
    // NOP
    // 0x20e30c: 0x0  nop
    ctx->pc = 0x20e30cu;
    // NOP
}
