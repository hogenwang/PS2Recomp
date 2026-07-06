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

// Function: sub_001A4270
// Address: 0x1a4270 - 0x1a4330
void sub_001A4270_0x1a4270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4270_0x1a4270");
#endif

    switch (ctx->pc) {
        case 0x1a42b0u: goto label_1a42b0;
        case 0x1a42bcu: goto label_1a42bc;
        case 0x1a42c8u: goto label_1a42c8;
        default: break;
    }

    ctx->pc = 0x1a4270u;

    // 0x1a4270: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1a4270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1a4274: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a4274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4278: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a4278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1a427c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1a427cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a4280: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a4280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a4284: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a4284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a4288: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a4288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a428c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a428cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4290: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a4290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a4294: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a4294u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4298: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1a4298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1a429c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1a429cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a42a0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a42a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a42a4: 0x24a56860  addiu       $a1, $a1, 0x6860
    ctx->pc = 0x1a42a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26720));
    // 0x1a42a8: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1A42A8u;
    SET_GPR_U32(ctx, 31, 0x1A42B0u);
    ctx->pc = 0x1A42ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A42A8u;
    // 0x1a42ac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x1A42A8u, 0x1A42B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A42B0u;
label_1a42b0:
    // 0x1a42b0: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x1a42b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
    // 0x1a42b4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1a42b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a42b8: 0x26106de0  addiu       $s0, $s0, 0x6DE0
    ctx->pc = 0x1a42b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28128));
label_1a42bc:
    // 0x1a42bc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1a42bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a42c0: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x1A42C0u;
    SET_GPR_U32(ctx, 31, 0x1A42C8u);
    ctx->pc = 0x1A42C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A42C0u;
    // 0x1a42c4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x1A42C0u, 0x1A42C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A42C8u;
label_1a42c8:
    // 0x1a42c8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A42C8u;
    {
        const bool branch_taken_0x1a42c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a42c8) {
            ctx->pc = 0x1A42CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A42C8u;
            // 0x1a42cc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A42F0u;
            goto label_1a42f0;
        }
    }
    ctx->pc = 0x1A42D0u;
    // 0x1a42d0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a42d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a42d4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1a42d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a42d8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1a42d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1a42dc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1a42dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a42e0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1a42e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1a42e4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1a42e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1a42e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A42E8u;
    {
        const bool branch_taken_0x1a42e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A42ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A42E8u;
        // 0x1a42ec: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a42e8) {
            ctx->pc = 0x1A430Cu;
            goto label_1a430c;
        }
    }
    ctx->pc = 0x1A42F0u;
label_1a42f0:
    // 0x1a42f0: 0x2a820398  slti        $v0, $s4, 0x398
    ctx->pc = 0x1a42f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)920) ? 1 : 0);
    // 0x1a42f4: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1A42F4u;
    {
        const bool branch_taken_0x1a42f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A42F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A42F4u;
        // 0x1a42f8: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a42f4) {
            ctx->pc = 0x1A42BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a42bc;
        }
    }
    ctx->pc = 0x1A42FCu;
    // 0x1a42fc: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1a42fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1a4300: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a4300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a4304: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1a4304u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1a4308: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1a4308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1a430c:
    // 0x1a430c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a430cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a4310: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a4310u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a4314: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a4314u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a4318: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a4318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a431c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a431cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4320: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a4320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4324: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4324u;
        // 0x1a4328: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A432Cu;
    // 0x1a432c: 0x0  nop
    ctx->pc = 0x1a432cu;
    // NOP
}
